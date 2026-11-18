// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FNodeFacade @ 14ad9b940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeFacade * __thiscall
Metasound::FNodeFacade::FNodeFacade
          (FNodeFacade *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2,
          _func___cdecl_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>_FBuildOperatorParams_ptr_FBuildResults_ptr
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNodeFacade *pFVar4;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7FNodeFacade_Metasound__6B_;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory_FNodeFacade_Metasound___00_SharedPointerInternals__6B_
    ;
    FFactory::FFactory((FFactory *)(pTVar3 + 1),param_3);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNodeFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar3 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// FNodeFacade @ 14ad9ba20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeFacade * __thiscall
Metasound::FNodeFacade::FNodeFacade
          (FNodeFacade *this,FName *param_1,FGuid *param_2,FNodeClassMetadata *param_3,
          _func___cdecl_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>_FBuildOperatorParams_ptr_FBuildResults_ptr
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<Metasound::FNodeClassMetadata,1> *pTVar3;
  FVertexInterface *pFVar4;
  FNodeData *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FNodeFacade *pFVar7;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_f8;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_e8;
  FNodeData local_d8;
  FVertexInterface local_60;
  
  pTVar3 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_e8,param_3);
  local_f8.Object = pTVar3->Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FVertexInterface::FVertexInterface(&local_60,&param_3->DefaultInterface);
  pFVar5 = FNodeData::FNodeData(&local_d8,param_1,param_2,pFVar4);
  FBasicNode::FBasicNode((FBasicNode *)this,pFVar5,&local_f8);
  FNodeData::~FNodeData(&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FNodeFacade_Metasound__6B_;
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    (this->Factory).Object = (IOperatorFactory *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory_FNodeFacade_Metasound___00_SharedPointerInternals__6B_
    ;
    FFactory::FFactory((FFactory *)(pTVar6 + 1),param_4);
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FNodeFacade *)(*pcVar1)();
        return pFVar7;
      }
    }
    (this->Factory).Object = (IOperatorFactory *)(pTVar6 + 1);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// ~FNodeFacade @ 14ad9e710

void __thiscall Metasound::FNodeFacade::~FNodeFacade(FNodeFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

