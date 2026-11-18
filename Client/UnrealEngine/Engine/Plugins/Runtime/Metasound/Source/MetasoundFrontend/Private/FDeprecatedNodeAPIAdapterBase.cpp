// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FDeprecatedNodeAPIAdapterBase @ 14af3b290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDeprecatedNodeAPIAdapterBase * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FDeprecatedNodeAPIAdapterBase::
FDeprecatedNodeAPIAdapterBase
          (FDeprecatedNodeAPIAdapterBase *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2,
          TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> param_3)

{
  INode IVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDeprecatedNodeAPIAdapterBase *pFVar5;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)&___7FDeprecatedNodeAPIAdapterBase_NodeRegistrationPrivate_Frontend_Metasound__6B_;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    (this->Factory).Object = (FDeprecatedNodeAPIFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDeprecatedNodeAPIFactory_NodeRegistrationPrivate_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    IVar1 = *param_3.Ptr;
    *param_3.Ptr = (INode)0x0;
    pTVar4[1]._padding_ =
         (longlong)&___7FDeprecatedNodeAPIFactory_NodeRegistrationPrivate_Frontend_Metasound__6B_;
    *(INode *)&pTVar4[1].SharedReferenceCount = IVar1;
    if (IVar1 == (INode)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundNodeRegistrationMacro.cpp"
                         ,0x57,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FDeprecatedNodeAPIAdapterBase *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar4;
    (this->Factory).Object = (FDeprecatedNodeAPIFactory *)(pTVar4 + 1);
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FDeprecatedNodeAPIAdapterBase *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  IVar1 = *param_3.Ptr;
  if (IVar1 != (INode)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return this;
}

// ~FDeprecatedNodeAPIAdapterBase @ 14af426a0

void __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FDeprecatedNodeAPIAdapterBase::
~FDeprecatedNodeAPIAdapterBase(FDeprecatedNodeAPIAdapterBase *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// GetDefaultOperatorFactory @ 14af99ca0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FDeprecatedNodeAPIAdapterBase::
GetDefaultOperatorFactory
          (FDeprecatedNodeAPIAdapterBase *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOperatorFactory *)(this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

