// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 28

// GetDataTypeInfo @ 14ad7ed40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryInfo * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetDataTypeInfo(FDataTypeRegistryEntryBase *this)

{
  return &this->Info;
}

// GetEnumInterface @ 14ad7ed50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetEnumInterface(FDataTypeRegistryEntryBase *this,
                TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface_const_,1>
                *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->EnumInterface).Object;
  pTVar1 = (this->EnumInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPolymorphicInterface @ 14ad7ed80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::Frontend::IPolymorphicDataTypeInterface,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetPolymorphicInterface
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::Frontend::IPolymorphicDataTypeInterface,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->PolymorphicInterface).Object;
  pTVar1 = (this->PolymorphicInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrontendInputClass @ 14ad7edb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendInputClass(FDataTypeRegistryEntryBase *this)

{
  return &this->InputClass;
}

// GetInputClassMetadata @ 14ad7edc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetInputClassMetadata
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->InputClassMetadata).Object;
  pTVar1 = (this->InputClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrontendConstructorInputClass @ 14ad7edf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendConstructorInputClass(FDataTypeRegistryEntryBase *this)

{
  return &this->ConstructorInputClass;
}

// GetConstructorInputClassMetadata @ 14ad7ee00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetConstructorInputClassMetadata
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ConstructorInputClassMetadata).Object;
  pTVar1 = (this->ConstructorInputClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrontendLiteralClass @ 14ad7ee30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendLiteralClass(FDataTypeRegistryEntryBase *this)

{
  return &this->LiteralClass;
}

// GetFrontendOutputClass @ 14ad7ee40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendOutputClass(FDataTypeRegistryEntryBase *this)

{
  return &this->OutputClass;
}

// GetOutputClassMetadata @ 14ad7ee50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetOutputClassMetadata
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OutputClassMetadata).Object;
  pTVar1 = (this->OutputClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrontendConstructorOutputClass @ 14ad7ee80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendConstructorOutputClass(FDataTypeRegistryEntryBase *this)

{
  return &this->ConstructorOutputClass;
}

// GetConstructorOutputClassMetadata @ 14ad7ee90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetConstructorOutputClassMetadata
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ConstructorOutputClassMetadata).Object;
  pTVar1 = (this->ConstructorOutputClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrontendVariableClass @ 14ad7eec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendVariableClass(FDataTypeRegistryEntryBase *this)

{
  return &this->VariableClass;
}

// GetVariableClassMetadata @ 14ad7eed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetVariableClassMetadata
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->VariableClassMetadata).Object;
  pTVar1 = (this->VariableClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrontendVariableMutatorClass @ 14ad7ef00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendVariableMutatorClass(FDataTypeRegistryEntryBase *this)

{
  return &this->VariableMutatorClass;
}

// GetVariableMutatorClassMetadata @ 14ad7ef10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetVariableMutatorClassMetadata
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->VariableMutatorClassMetadata).Object;
  pTVar1 = (this->VariableMutatorClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrontendVariableAccessorClass @ 14ad7ef40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendVariableAccessorClass(FDataTypeRegistryEntryBase *this)

{
  return &this->VariableAccessorClass;
}

// GetVariableAccessorClassMetadata @ 14ad7ef50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetVariableAccessorClassMetadata
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->VariableAccessorClassMetadata).Object;
  pTVar1 = (this->VariableAccessorClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrontendVariableDeferredAccessorClass @ 14ad7ef80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetFrontendVariableDeferredAccessorClass(FDataTypeRegistryEntryBase *this)

{
  return &this->VariableDeferredAccessorClass;
}

// GetVariableDeferredAccessorClassMetadata @ 14ad7ef90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::FNodeClassMetadata_const_,1> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetVariableDeferredAccessorClassMetadata
          (FDataTypeRegistryEntryBase *this,
          TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->VariableDeferredAccessorClassMetadata).Object;
  pTVar1 = (this->VariableDeferredAccessorClassMetadata).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetRawAssignmentFunction @ 14ad7efc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniqueFunction<void___cdecl(void_const_*,void_*)> * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetRawAssignmentFunction(FDataTypeRegistryEntryBase *this)

{
  return &this->RawAssignmentFunction;
}

// GetLiteralAssignmentFunction @ 14ad7efd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

_func___cdecl_void_FOperatorSettings_ptr_FLiteral_ptr_FAnyDataReference_ptr * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
GetLiteralAssignmentFunction(FDataTypeRegistryEntryBase *this)

{
  return this->LiteralAssignmentFunction;
}

// CreateOutputNode @ 14ad7efe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
CreateOutputNode(FDataTypeRegistryEntryBase *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOutputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FOutputDataVertex *pFVar6;
  FOutputNode *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if ((this->OutputClassMetadata).Object != (FNodeClassMetadata *)0x0) {
    this_00 = FVertexInterface::GetOutputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = TVertexInterfaceImpl<Metasound::FOutputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)this_00,0);
      if ((this->OutputClassMetadata).Object == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = (this->OutputClassMetadata).Object;
      pTVar2 = (this->OutputClassMetadata).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (FOutputNode *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)FOutputNode::FOutputNode
                                 (this_01,(FName *)&pFVar6->field_0x8,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7641293860978556795>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundDataTypeRegistrationMacro.cpp"
                       ,0x85,"Outputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateConstructorOutputNode @ 14ad7f170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
CreateConstructorOutputNode(FDataTypeRegistryEntryBase *this,FNodeData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOutputVertexInterface *this_00;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FOutputDataVertex *pFVar6;
  FOutputNode *this_01;
  FNodeData *pFVar7;
  FName FVar8;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  if ((this->ConstructorOutputClassMetadata).Object != (FNodeClassMetadata *)0x0) {
    this_00 = FVertexInterface::GetOutputInterface(&in_R8->Interface);
    if ((int)this_00->_padding_ == 1) {
      pFVar6 = TVertexInterfaceImpl<Metasound::FOutputDataVertex>::At
                         ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)this_00,0);
      if ((this->ConstructorOutputClassMetadata).Object == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      pFVar1 = (this->ConstructorOutputClassMetadata).Object;
      pTVar2 = (this->ConstructorOutputClassMetadata).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNodeClassMetadata *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5.Ptr = (INode *)(*pcVar3)();
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
        }
      }
      this_01 = ::operator_new(0xa0);
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (this_01 != (FOutputNode *)0x0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar1;
        local_a8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = FNodeData::FNodeData(&local_98,in_R8);
        FVar8 = (FName)FOutputNode::FOutputNode
                                 (this_01,(FName *)&pFVar6->field_0x8,pFVar7,&local_a8);
      }
      param_1->Name = FVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FNodeData::~FNodeData(in_R8);
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7641293860978556780>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundDataTypeRegistrationMacro.cpp"
                       ,0x94,"Outputs.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar3)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
  }
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// FDataTypeRegistryEntryBase @ 14ad97c10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDataTypeRegistryEntryBase * __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
FDataTypeRegistryEntryBase
          (FDataTypeRegistryEntryBase *this,FDataTypeRegistryInfo *param_1,
          TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *param_2)

{
  ITextData *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined1 local_res8 [8];
  
  *(undefined ***)this =
       &___7FDataTypeRegistryEntryBase_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__6B_;
  (this->Info).DataTypeName = param_1->DataTypeName;
  (this->Info).DataTypeDisplayText.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->DataTypeDisplayText).TextData.Reference;
  (this->Info).DataTypeDisplayText.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Info).DataTypeDisplayText.Flags = (param_1->DataTypeDisplayText).Flags;
  (this->Info).PreferredLiteralType = param_1->PreferredLiteralType;
  (this->Info).bIsParsable = param_1->bIsParsable;
  (this->Info).bIsDefaultParsable = param_1->bIsDefaultParsable;
  (this->Info).bIsBoolParsable = param_1->bIsBoolParsable;
  (this->Info).bIsIntParsable = param_1->bIsIntParsable;
  (this->Info).bIsFloatParsable = param_1->bIsFloatParsable;
  (this->Info).bIsStringParsable = param_1->bIsStringParsable;
  (this->Info).bIsProxyParsable = param_1->bIsProxyParsable;
  (this->Info).bIsUniquePtrProxyParsable_DEPRECATED = param_1->bIsUniquePtrProxyParsable_DEPRECATED;
  (this->Info).bIsDefaultArrayParsable = param_1->bIsDefaultArrayParsable;
  (this->Info).bIsBoolArrayParsable = param_1->bIsBoolArrayParsable;
  (this->Info).bIsIntArrayParsable = param_1->bIsIntArrayParsable;
  (this->Info).bIsFloatArrayParsable = param_1->bIsFloatArrayParsable;
  (this->Info).bIsStringArrayParsable = param_1->bIsStringArrayParsable;
  (this->Info).bIsProxyArrayParsable = param_1->bIsProxyArrayParsable;
  (this->Info).bIsUniquePtrProxyArrayParsable_DEPRECATED =
       param_1->bIsUniquePtrProxyArrayParsable_DEPRECATED;
  (this->Info).bIsEnum = param_1->bIsEnum;
  (this->Info).bIsExplicit = param_1->bIsExplicit;
  (this->Info).bIsTransmittable = param_1->bIsTransmittable;
  (this->Info).bIsVariable = param_1->bIsVariable;
  (this->Info).bIsConstructorType = param_1->bIsConstructorType;
  (this->Info).bIsArrayType = param_1->bIsArrayType;
  (this->Info).bIsArrayParseable = param_1->bIsArrayParseable;
  (this->Info).ProxyGeneratorClass = param_1->ProxyGeneratorClass;
  (this->Info).bIsPolymorphic = param_1->bIsPolymorphic;
  (this->Info).bIsAbstract = param_1->bIsAbstract;
  (this->Info).ParentDataTypeName = param_1->ParentDataTypeName;
  (this->InputClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->InputClass).ID = FrontendInvalidID;
  (this->InputClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->InputClass).Metadata.ClassName.Namespace.Number = 0;
  (this->InputClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->InputClass).Metadata.ClassName.Name.Number = 0;
  (this->InputClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->InputClass).Metadata.ClassName.Variant.Number = 0;
  (this->InputClass).Metadata.Version.Major = 1;
  (this->InputClass).Metadata.Version.Minor = 0;
  (this->InputClass).Metadata.Type = Invalid;
  (this->InputClass).Metadata.AccessFlags = 2;
  (this->InputClass).Metadata.ChangeID.A = 0;
  (this->InputClass).Metadata.ChangeID.B = 0;
  (this->InputClass).Metadata.ChangeID.C = 0;
  (this->InputClass).Metadata.ChangeID.D = 0;
  (this->InputClass).Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputClass).Interface.Inputs.ArrayNum = 0;
  (this->InputClass).Interface.Inputs.ArrayMax = 0;
  (this->InputClass).Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputClass).Interface.Outputs.ArrayNum = 0;
  (this->InputClass).Interface.Outputs.ArrayMax = 0;
  (this->InputClass).Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputClass).Interface.Environment.ArrayNum = 0;
  (this->InputClass).Interface.Environment.ArrayMax = 0;
  (this->InputClass).Interface.ChangeID.A = 0;
  (this->InputClass).Interface.ChangeID.B = 0;
  (this->InputClass).Interface.ChangeID.C = 0;
  (this->InputClass).Interface.ChangeID.D = 0;
  (this->InputClassMetadata).Object = (FNodeClassMetadata *)0x0;
  (this->InputClassMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ConstructorInputClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->ConstructorInputClass).ID = FrontendInvalidID;
  (this->ConstructorInputClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->ConstructorInputClass).Metadata.ClassName.Namespace.Number = 0;
  (this->ConstructorInputClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->ConstructorInputClass).Metadata.ClassName.Name.Number = 0;
  (this->ConstructorInputClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->ConstructorInputClass).Metadata.ClassName.Variant.Number = 0;
  (this->ConstructorInputClass).Metadata.Version.Major = 1;
  (this->ConstructorInputClass).Metadata.Version.Minor = 0;
  (this->ConstructorInputClass).Metadata.Type = Invalid;
  (this->ConstructorInputClass).Metadata.AccessFlags = 2;
  (this->ConstructorInputClass).Metadata.ChangeID.A = 0;
  (this->ConstructorInputClass).Metadata.ChangeID.B = 0;
  (this->ConstructorInputClass).Metadata.ChangeID.C = 0;
  (this->ConstructorInputClass).Metadata.ChangeID.D = 0;
  (this->ConstructorInputClass).Interface.Inputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstructorInputClass).Interface.Inputs.ArrayNum = 0;
  (this->ConstructorInputClass).Interface.Inputs.ArrayMax = 0;
  (this->ConstructorInputClass).Interface.Outputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstructorInputClass).Interface.Outputs.ArrayNum = 0;
  (this->ConstructorInputClass).Interface.Outputs.ArrayMax = 0;
  (this->ConstructorInputClass).Interface.Environment.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstructorInputClass).Interface.Environment.ArrayNum = 0;
  (this->ConstructorInputClass).Interface.Environment.ArrayMax = 0;
  (this->ConstructorInputClass).Interface.ChangeID.A = 0;
  (this->ConstructorInputClass).Interface.ChangeID.B = 0;
  (this->ConstructorInputClass).Interface.ChangeID.C = 0;
  (this->ConstructorInputClass).Interface.ChangeID.D = 0;
  (this->ConstructorInputClassMetadata).Object = (FNodeClassMetadata *)0x0;
  (this->ConstructorInputClassMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OutputClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->OutputClass).ID = FrontendInvalidID;
  (this->OutputClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->OutputClass).Metadata.ClassName.Namespace.Number = 0;
  (this->OutputClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->OutputClass).Metadata.ClassName.Name.Number = 0;
  (this->OutputClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->OutputClass).Metadata.ClassName.Variant.Number = 0;
  (this->OutputClass).Metadata.Version.Major = 1;
  (this->OutputClass).Metadata.Version.Minor = 0;
  (this->OutputClass).Metadata.Type = Invalid;
  (this->OutputClass).Metadata.AccessFlags = 2;
  (this->OutputClass).Metadata.ChangeID.A = 0;
  (this->OutputClass).Metadata.ChangeID.B = 0;
  (this->OutputClass).Metadata.ChangeID.C = 0;
  (this->OutputClass).Metadata.ChangeID.D = 0;
  (this->OutputClass).Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputClass).Interface.Inputs.ArrayNum = 0;
  (this->OutputClass).Interface.Inputs.ArrayMax = 0;
  (this->OutputClass).Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputClass).Interface.Outputs.ArrayNum = 0;
  (this->OutputClass).Interface.Outputs.ArrayMax = 0;
  (this->OutputClass).Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputClass).Interface.Environment.ArrayNum = 0;
  (this->OutputClass).Interface.Environment.ArrayMax = 0;
  (this->OutputClass).Interface.ChangeID.A = 0;
  (this->OutputClass).Interface.ChangeID.B = 0;
  (this->OutputClass).Interface.ChangeID.C = 0;
  (this->OutputClass).Interface.ChangeID.D = 0;
  (this->OutputClassMetadata).Object = (FNodeClassMetadata *)0x0;
  (this->OutputClassMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ConstructorOutputClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->ConstructorOutputClass).ID = FrontendInvalidID;
  (this->ConstructorOutputClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->ConstructorOutputClass).Metadata.ClassName.Namespace.Number = 0;
  (this->ConstructorOutputClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->ConstructorOutputClass).Metadata.ClassName.Name.Number = 0;
  (this->ConstructorOutputClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->ConstructorOutputClass).Metadata.ClassName.Variant.Number = 0;
  (this->ConstructorOutputClass).Metadata.Version.Major = 1;
  (this->ConstructorOutputClass).Metadata.Version.Minor = 0;
  (this->ConstructorOutputClass).Metadata.Type = Invalid;
  (this->ConstructorOutputClass).Metadata.AccessFlags = 2;
  (this->ConstructorOutputClass).Metadata.ChangeID.A = 0;
  (this->ConstructorOutputClass).Metadata.ChangeID.B = 0;
  (this->ConstructorOutputClass).Metadata.ChangeID.C = 0;
  (this->ConstructorOutputClass).Metadata.ChangeID.D = 0;
  (this->ConstructorOutputClass).Interface.Inputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstructorOutputClass).Interface.Inputs.ArrayNum = 0;
  (this->ConstructorOutputClass).Interface.Inputs.ArrayMax = 0;
  (this->ConstructorOutputClass).Interface.Outputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstructorOutputClass).Interface.Outputs.ArrayNum = 0;
  (this->ConstructorOutputClass).Interface.Outputs.ArrayMax = 0;
  (this->ConstructorOutputClass).Interface.Environment.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstructorOutputClass).Interface.Environment.ArrayNum = 0;
  (this->ConstructorOutputClass).Interface.Environment.ArrayMax = 0;
  (this->ConstructorOutputClass).Interface.ChangeID.A = 0;
  (this->ConstructorOutputClass).Interface.ChangeID.B = 0;
  (this->ConstructorOutputClass).Interface.ChangeID.C = 0;
  (this->ConstructorOutputClass).Interface.ChangeID.D = 0;
  (this->ConstructorOutputClassMetadata).Object = (FNodeClassMetadata *)0x0;
  (this->ConstructorOutputClassMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LiteralClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->LiteralClass).ID = FrontendInvalidID;
  (this->LiteralClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->LiteralClass).Metadata.ClassName.Namespace.Number = 0;
  (this->LiteralClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->LiteralClass).Metadata.ClassName.Name.Number = 0;
  (this->LiteralClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->LiteralClass).Metadata.ClassName.Variant.Number = 0;
  (this->LiteralClass).Metadata.Version.Major = 1;
  (this->LiteralClass).Metadata.Version.Minor = 0;
  (this->LiteralClass).Metadata.Type = Invalid;
  (this->LiteralClass).Metadata.AccessFlags = 2;
  (this->LiteralClass).Metadata.ChangeID.A = 0;
  (this->LiteralClass).Metadata.ChangeID.B = 0;
  (this->LiteralClass).Metadata.ChangeID.C = 0;
  (this->LiteralClass).Metadata.ChangeID.D = 0;
  (this->LiteralClass).Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiteralClass).Interface.Inputs.ArrayNum = 0;
  (this->LiteralClass).Interface.Inputs.ArrayMax = 0;
  (this->LiteralClass).Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiteralClass).Interface.Outputs.ArrayNum = 0;
  (this->LiteralClass).Interface.Outputs.ArrayMax = 0;
  (this->LiteralClass).Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->LiteralClass).Interface.Environment.ArrayNum = 0;
  (this->LiteralClass).Interface.Environment.ArrayMax = 0;
  (this->LiteralClass).Interface.ChangeID.A = 0;
  (this->LiteralClass).Interface.ChangeID.B = 0;
  (this->LiteralClass).Interface.ChangeID.C = 0;
  (this->LiteralClass).Interface.ChangeID.D = 0;
  (this->VariableClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->VariableClass).ID = FrontendInvalidID;
  (this->VariableClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->VariableClass).Metadata.ClassName.Namespace.Number = 0;
  (this->VariableClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->VariableClass).Metadata.ClassName.Name.Number = 0;
  (this->VariableClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->VariableClass).Metadata.ClassName.Variant.Number = 0;
  (this->VariableClass).Metadata.Version.Major = 1;
  (this->VariableClass).Metadata.Version.Minor = 0;
  (this->VariableClass).Metadata.Type = Invalid;
  (this->VariableClass).Metadata.AccessFlags = 2;
  (this->VariableClass).Metadata.ChangeID.A = 0;
  (this->VariableClass).Metadata.ChangeID.B = 0;
  (this->VariableClass).Metadata.ChangeID.C = 0;
  (this->VariableClass).Metadata.ChangeID.D = 0;
  (this->VariableClass).Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariableClass).Interface.Inputs.ArrayNum = 0;
  (this->VariableClass).Interface.Inputs.ArrayMax = 0;
  (this->VariableClass).Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariableClass).Interface.Outputs.ArrayNum = 0;
  (this->VariableClass).Interface.Outputs.ArrayMax = 0;
  (this->VariableClass).Interface.Environment.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableClass).Interface.Environment.ArrayNum = 0;
  (this->VariableClass).Interface.Environment.ArrayMax = 0;
  (this->VariableClass).Interface.ChangeID.A = 0;
  (this->VariableClass).Interface.ChangeID.B = 0;
  (this->VariableClass).Interface.ChangeID.C = 0;
  (this->VariableClass).Interface.ChangeID.D = 0;
  (this->VariableClassMetadata).Object = (FNodeClassMetadata *)0x0;
  (this->VariableClassMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VariableMutatorClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->VariableMutatorClass).ID = FrontendInvalidID;
  (this->VariableMutatorClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->VariableMutatorClass).Metadata.ClassName.Namespace.Number = 0;
  (this->VariableMutatorClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->VariableMutatorClass).Metadata.ClassName.Name.Number = 0;
  (this->VariableMutatorClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->VariableMutatorClass).Metadata.ClassName.Variant.Number = 0;
  (this->VariableMutatorClass).Metadata.Version.Major = 1;
  (this->VariableMutatorClass).Metadata.Version.Minor = 0;
  (this->VariableMutatorClass).Metadata.Type = Invalid;
  (this->VariableMutatorClass).Metadata.AccessFlags = 2;
  (this->VariableMutatorClass).Metadata.ChangeID.A = 0;
  (this->VariableMutatorClass).Metadata.ChangeID.B = 0;
  (this->VariableMutatorClass).Metadata.ChangeID.C = 0;
  (this->VariableMutatorClass).Metadata.ChangeID.D = 0;
  (this->VariableMutatorClass).Interface.Inputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableMutatorClass).Interface.Inputs.ArrayNum = 0;
  (this->VariableMutatorClass).Interface.Inputs.ArrayMax = 0;
  (this->VariableMutatorClass).Interface.Outputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableMutatorClass).Interface.Outputs.ArrayNum = 0;
  (this->VariableMutatorClass).Interface.Outputs.ArrayMax = 0;
  (this->VariableMutatorClass).Interface.Environment.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableMutatorClass).Interface.Environment.ArrayNum = 0;
  (this->VariableMutatorClass).Interface.Environment.ArrayMax = 0;
  (this->VariableMutatorClass).Interface.ChangeID.A = 0;
  (this->VariableMutatorClass).Interface.ChangeID.B = 0;
  (this->VariableMutatorClass).Interface.ChangeID.C = 0;
  (this->VariableMutatorClass).Interface.ChangeID.D = 0;
  (this->VariableMutatorClassMetadata).Object = (FNodeClassMetadata *)0x0;
  (this->VariableMutatorClassMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VariableAccessorClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->VariableAccessorClass).ID = FrontendInvalidID;
  (this->VariableAccessorClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->VariableAccessorClass).Metadata.ClassName.Namespace.Number = 0;
  (this->VariableAccessorClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->VariableAccessorClass).Metadata.ClassName.Name.Number = 0;
  (this->VariableAccessorClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->VariableAccessorClass).Metadata.ClassName.Variant.Number = 0;
  (this->VariableAccessorClass).Metadata.Version.Major = 1;
  (this->VariableAccessorClass).Metadata.Version.Minor = 0;
  (this->VariableAccessorClass).Metadata.Type = Invalid;
  (this->VariableAccessorClass).Metadata.AccessFlags = 2;
  (this->VariableAccessorClass).Metadata.ChangeID.A = 0;
  (this->VariableAccessorClass).Metadata.ChangeID.B = 0;
  (this->VariableAccessorClass).Metadata.ChangeID.C = 0;
  (this->VariableAccessorClass).Metadata.ChangeID.D = 0;
  (this->VariableAccessorClass).Interface.Inputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableAccessorClass).Interface.Inputs.ArrayNum = 0;
  (this->VariableAccessorClass).Interface.Inputs.ArrayMax = 0;
  (this->VariableAccessorClass).Interface.Outputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableAccessorClass).Interface.Outputs.ArrayNum = 0;
  (this->VariableAccessorClass).Interface.Outputs.ArrayMax = 0;
  (this->VariableAccessorClass).Interface.Environment.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableAccessorClass).Interface.Environment.ArrayNum = 0;
  (this->VariableAccessorClass).Interface.Environment.ArrayMax = 0;
  (this->VariableAccessorClass).Interface.ChangeID.A = 0;
  (this->VariableAccessorClass).Interface.ChangeID.B = 0;
  (this->VariableAccessorClass).Interface.ChangeID.C = 0;
  (this->VariableAccessorClass).Interface.ChangeID.D = 0;
  (this->VariableAccessorClassMetadata).Object = (FNodeClassMetadata *)0x0;
  (this->VariableAccessorClassMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VariableDeferredAccessorClass)._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  (this->VariableDeferredAccessorClass).ID = FrontendInvalidID;
  (this->VariableDeferredAccessorClass).Metadata.ClassName.Namespace.ComparisonIndex = 0;
  (this->VariableDeferredAccessorClass).Metadata.ClassName.Namespace.Number = 0;
  (this->VariableDeferredAccessorClass).Metadata.ClassName.Name.ComparisonIndex = 0;
  (this->VariableDeferredAccessorClass).Metadata.ClassName.Name.Number = 0;
  (this->VariableDeferredAccessorClass).Metadata.ClassName.Variant.ComparisonIndex = 0;
  (this->VariableDeferredAccessorClass).Metadata.ClassName.Variant.Number = 0;
  (this->VariableDeferredAccessorClass).Metadata.Version.Major = 1;
  (this->VariableDeferredAccessorClass).Metadata.Version.Minor = 0;
  (this->VariableDeferredAccessorClass).Metadata.Type = Invalid;
  (this->VariableDeferredAccessorClass).Metadata.AccessFlags = 2;
  (this->VariableDeferredAccessorClass).Metadata.ChangeID.A = 0;
  (this->VariableDeferredAccessorClass).Metadata.ChangeID.B = 0;
  (this->VariableDeferredAccessorClass).Metadata.ChangeID.C = 0;
  (this->VariableDeferredAccessorClass).Metadata.ChangeID.D = 0;
  (this->VariableDeferredAccessorClass).Interface.Inputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableDeferredAccessorClass).Interface.Inputs.ArrayNum = 0;
  (this->VariableDeferredAccessorClass).Interface.Inputs.ArrayMax = 0;
  (this->VariableDeferredAccessorClass).Interface.Outputs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableDeferredAccessorClass).Interface.Outputs.ArrayNum = 0;
  (this->VariableDeferredAccessorClass).Interface.Outputs.ArrayMax = 0;
  (this->VariableDeferredAccessorClass).Interface.Environment.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VariableDeferredAccessorClass).Interface.Environment.ArrayNum = 0;
  (this->VariableDeferredAccessorClass).Interface.Environment.ArrayMax = 0;
  (this->VariableDeferredAccessorClass).Interface.ChangeID.A = 0;
  (this->VariableDeferredAccessorClass).Interface.ChangeID.B = 0;
  (this->VariableDeferredAccessorClass).Interface.ChangeID.C = 0;
  (this->VariableDeferredAccessorClass).Interface.ChangeID.D = 0;
  (this->VariableDeferredAccessorClassMetadata).Object = (FNodeClassMetadata *)0x0;
  (this->VariableDeferredAccessorClassMetadata).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EnumInterface).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->EnumInterface).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->PolymorphicInterface).Object = (IPolymorphicDataTypeInterface *)0x0;
  (this->PolymorphicInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->RawAssignmentFunction = 0;
  *(undefined8 *)&(this->RawAssignmentFunction).field_0x28 = 0;
  this->LiteralAssignmentFunction =
       (_func___cdecl_void_FOperatorSettings_ptr_FLiteral_ptr_FAnyDataReference_ptr *)0x0;
  return this;
}

// ~FDataTypeRegistryEntryBase @ 14ad9dc90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
~FDataTypeRegistryEntryBase(FDataTypeRegistryEntryBase *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  longlong *plVar4;
  
  *(undefined ***)this =
       &___7FDataTypeRegistryEntryBase_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__6B_;
  if (*(longlong *)&this->RawAssignmentFunction != 0) {
    plVar1 = *(longlong **)&(this->RawAssignmentFunction).field_0x28;
    plVar4 = (longlong *)&(this->RawAssignmentFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PolymorphicInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EnumInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VariableDeferredAccessorClassMetadata).SharedReferenceCount.ReferenceController)
  ;
  pFVar2 = (this->VariableDeferredAccessorClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->VariableDeferredAccessorClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->VariableDeferredAccessorClass).Interface.Inputs.AllocatorInstance.Data,
             (this->VariableDeferredAccessorClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->VariableDeferredAccessorClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VariableAccessorClassMetadata).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->VariableAccessorClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->VariableAccessorClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->VariableAccessorClass).Interface.Inputs.AllocatorInstance.Data,
             (this->VariableAccessorClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->VariableAccessorClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VariableMutatorClassMetadata).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->VariableMutatorClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->VariableMutatorClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->VariableMutatorClass).Interface.Inputs.AllocatorInstance.Data,
             (this->VariableMutatorClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->VariableMutatorClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VariableClassMetadata).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->VariableClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->VariableClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->VariableClass).Interface.Inputs.AllocatorInstance.Data,
             (this->VariableClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->VariableClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LiteralClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LiteralClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->LiteralClass).Interface.Inputs.AllocatorInstance.Data,
             (this->LiteralClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->LiteralClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ConstructorOutputClassMetadata).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->ConstructorOutputClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConstructorOutputClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->ConstructorOutputClass).Interface.Inputs.AllocatorInstance.Data,
             (this->ConstructorOutputClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->ConstructorOutputClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputClassMetadata).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->OutputClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->OutputClass).Interface.Inputs.AllocatorInstance.Data,
             (this->OutputClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->OutputClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ConstructorInputClassMetadata).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->ConstructorInputClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConstructorInputClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->ConstructorInputClass).Interface.Inputs.AllocatorInstance.Data,
             (this->ConstructorInputClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->ConstructorInputClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputClassMetadata).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->InputClass).Interface.Environment.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputClass).Interface.Outputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)
             (this->InputClass).Interface.Inputs.AllocatorInstance.Data,
             (this->InputClass).Interface.Inputs.ArrayNum);
  pFVar2 = (this->InputClass).Interface.Inputs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->Info).DataTypeDisplayText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9dfbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar3 + 0x10))();
    return;
  }
  return;
}

// InitNodeClassesBase @ 14adc5bc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
InitNodeClassesBase(FDataTypeRegistryEntryBase *this,FNodeClassMetadata *param_1,
                   FNodeClassMetadata *param_2,FNodeClassMetadata *param_3,
                   FNodeClassMetadata *param_4,FNodeClassMetadata *param_5,
                   FNodeClassMetadata *param_6,FNodeClassMetadata *param_7)

{
  TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<Metasound::FNodeClassMetadata,1> *pTVar4;
  FMetasoundFrontendClass *pFVar5;
  FNodeClassMetadata *local_4c8;
  FSharedReferencer<1> local_4c0;
  FNodeClassMetadata *local_4b8;
  FSharedReferencer<1> local_4b0;
  FNodeClassMetadata *local_4a8;
  FSharedReferencer<1> local_4a0;
  FNodeClassMetadata *local_498;
  FSharedReferencer<1> local_490;
  FNodeClassMetadata *local_488;
  FSharedReferencer<1> local_480;
  FNodeClassMetadata *local_478;
  FSharedReferencer<1> local_470;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_468;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_458;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_448;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_438;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_428;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_418;
  FMetasoundFrontendClass local_408;
  FMetasoundFrontendClass local_378;
  FMetasoundFrontendClass local_2e8;
  FMetasoundFrontendClass local_258;
  FMetasoundFrontendClass local_1c8;
  FMetasoundFrontendClass local_138;
  FMetasoundFrontendClass local_a8;
  
  pTVar4 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_468,param_1);
  local_4c0.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_4c8 = pTVar4->Object;
  if (local_4c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->InputClassMetadata;
  if (pTVar1 != (TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *)&local_4c8) {
    pTVar1->Object = local_4c8;
    local_4c8 = (FNodeClassMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputClassMetadata).SharedReferenceCount,&local_4c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FNodeClassMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GenerateClass(&local_408,pTVar1->Object,Input);
  FMetasoundFrontendClass::operator=(&this->InputClass,pFVar5);
  if (local_408.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_408.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_408.Interface.Inputs.AllocatorInstance.Data,
             local_408.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_408.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_408.Interface.Inputs.AllocatorInstance.Data);
  }
  pTVar4 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_458,param_2);
  local_4b0.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_4b8 = pTVar4->Object;
  if (local_4b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->OutputClassMetadata;
  if (pTVar1 != (TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *)&local_4b8) {
    pTVar1->Object = local_4b8;
    local_4b8 = (FNodeClassMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OutputClassMetadata).SharedReferenceCount,&local_4b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FNodeClassMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GenerateClass(&local_378,pTVar1->Object,Output);
  FMetasoundFrontendClass::operator=(&this->OutputClass,pFVar5);
  if (local_378.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_378.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_378.Interface.Inputs.AllocatorInstance.Data,
             local_378.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_378.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_378.Interface.Inputs.AllocatorInstance.Data);
  }
  pFVar5 = GenerateClass(&local_2e8,param_3,Literal);
  FMetasoundFrontendClass::operator=(&this->LiteralClass,pFVar5);
  if (local_2e8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_2e8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_2e8.Interface.Inputs.AllocatorInstance.Data,
             local_2e8.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_2e8.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_2e8.Interface.Inputs.AllocatorInstance.Data);
  }
  pTVar4 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_448,param_4);
  local_4a0.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_4a8 = pTVar4->Object;
  if (local_4a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->VariableClassMetadata;
  if (pTVar1 != (TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *)&local_4a8) {
    pTVar1->Object = local_4a8;
    local_4a8 = (FNodeClassMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VariableClassMetadata).SharedReferenceCount,&local_4a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FNodeClassMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GenerateClass(&local_258,pTVar1->Object,Variable);
  FMetasoundFrontendClass::operator=(&this->VariableClass,pFVar5);
  if (local_258.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_258.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data,
             local_258.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_258.Interface.Inputs.AllocatorInstance.Data);
  }
  pTVar4 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_438,param_5);
  local_490.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_498 = pTVar4->Object;
  if (local_490.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_490.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_490.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->VariableMutatorClassMetadata;
  if (pTVar1 != (TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *)&local_498) {
    pTVar1->Object = local_498;
    local_498 = (FNodeClassMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VariableMutatorClassMetadata).SharedReferenceCount,&local_490);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_490.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_438.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FNodeClassMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GenerateClass(&local_1c8,pTVar1->Object,VariableMutator);
  FMetasoundFrontendClass::operator=(&this->VariableMutatorClass,pFVar5);
  if (local_1c8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_1c8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_1c8.Interface.Inputs.AllocatorInstance.Data,
             local_1c8.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_1c8.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_1c8.Interface.Inputs.AllocatorInstance.Data);
  }
  pTVar4 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_428,param_6);
  local_480.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_488 = pTVar4->Object;
  if (local_480.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_480.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_480.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->VariableAccessorClassMetadata;
  if (pTVar1 != (TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *)&local_488) {
    pTVar1->Object = local_488;
    local_488 = (FNodeClassMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VariableAccessorClassMetadata).SharedReferenceCount,&local_480);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_480.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_428.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FNodeClassMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GenerateClass(&local_138,pTVar1->Object,VariableAccessor);
  FMetasoundFrontendClass::operator=(&this->VariableAccessorClass,pFVar5);
  if (local_138.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_138.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_138.Interface.Inputs.AllocatorInstance.Data,
             local_138.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_138.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_138.Interface.Inputs.AllocatorInstance.Data);
  }
  pTVar4 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_418,param_7);
  local_470.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_478 = pTVar4->Object;
  if (local_470.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_470.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_470.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->VariableDeferredAccessorClassMetadata;
  if (pTVar1 != (TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *)&local_478) {
    pTVar1->Object = local_478;
    local_478 = (FNodeClassMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VariableDeferredAccessorClassMetadata).SharedReferenceCount,&local_470);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FNodeClassMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GenerateClass(&local_a8,pTVar1->Object,VariableDeferredAccessor);
  FMetasoundFrontendClass::operator=(&this->VariableDeferredAccessorClass,pFVar5);
  if (local_a8.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_a8.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_a8.Interface.Inputs.AllocatorInstance.Data,
             local_a8.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_a8.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_a8.Interface.Inputs.AllocatorInstance.Data);
  }
  return;
}

// InitNodeClassesBaseConstructor @ 14adc6220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
InitNodeClassesBaseConstructor
          (FDataTypeRegistryEntryBase *this,FNodeClassMetadata *param_1,FNodeClassMetadata *param_2)

{
  TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<Metasound::FNodeClassMetadata,1> *pTVar4;
  FMetasoundFrontendClass *pFVar5;
  FNodeClassMetadata *local_168;
  FSharedReferencer<1> local_160;
  FNodeClassMetadata *local_158;
  FSharedReferencer<1> local_150;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_148;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_138;
  FMetasoundFrontendClass local_128;
  FMetasoundFrontendClass local_98;
  
  pTVar4 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_148,param_1);
  local_160.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_168 = pTVar4->Object;
  if (local_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_160.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_160.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ConstructorInputClassMetadata;
  if (pTVar1 != (TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *)&local_168) {
    pTVar1->Object = local_168;
    local_168 = (FNodeClassMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ConstructorInputClassMetadata).SharedReferenceCount,&local_160);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FNodeClassMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GenerateClass(&local_128,pTVar1->Object,Input);
  FMetasoundFrontendClass::operator=(&this->ConstructorInputClass,pFVar5);
  if (local_128.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_128.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_128.Interface.Inputs.AllocatorInstance.Data,
             local_128.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_128.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_128.Interface.Inputs.AllocatorInstance.Data);
  }
  pTVar4 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_138,param_2);
  local_150.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_158 = pTVar4->Object;
  if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_150.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_150.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ConstructorOutputClassMetadata;
  if (pTVar1 != (TSharedPtr<Metasound::FNodeClassMetadata_const_,1> *)&local_158) {
    pTVar1->Object = local_158;
    local_158 = (FNodeClassMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ConstructorOutputClassMetadata).SharedReferenceCount,&local_150);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FNodeClassMetadata *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = GenerateClass(&local_98,pTVar1->Object,Output);
  FMetasoundFrontendClass::operator=(&this->ConstructorOutputClass,pFVar5);
  if (local_98.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_98.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_98.Interface.Inputs.AllocatorInstance.Data,
             local_98.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_98.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_98.Interface.Inputs.AllocatorInstance.Data);
  }
  return;
}

