// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 4

// FSineOscilatorNode @ 14b141a90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FSineOscilatorNode * __thiscall
Metasound::FSineOscilatorNode::FSineOscilatorNode(FSineOscilatorNode *this,FNodeInitData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_e8;
  FVertexInterface local_d8;
  FNodeData local_88;
  
  pFVar1 = FFactory::GetNodeInfo();
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_e8,pFVar1);
  pFVar1 = FFactory::GetNodeInfo();
  pFVar3 = FVertexInterface::FVertexInterface(&local_d8,&pFVar1->DefaultInterface);
  pFVar4 = FNodeData::FNodeData(&local_88,&param_1->InstanceName,&param_1->InstanceID,pFVar3);
  FSineOscilatorNode(this,pFVar4,pTVar2);
  *(undefined ***)this = &___7FSineOscilatorNode_Metasound__6B_;
  return this;
}

// FSineOscilatorNode @ 14b141b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FSineOscilatorNode * __thiscall
Metasound::FSineOscilatorNode::FSineOscilatorNode
          (FSineOscilatorNode *this,FName *param_1,FGuid *param_2,float param_3,float param_4,
          bool param_5)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSineOscilatorNode *pFVar4;
  FNodeClassMetadata *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_38 [2];
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_38[0].Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_38[0].SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory_FSineOscilatorNode_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFactory_FSineOscilatorNode_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSineOscilatorNode *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_38[0].Object = (IOperatorFactory *)(pTVar3 + 1);
    local_38[0].SharedReferenceCount.ReferenceController = pTVar3;
  }
  pFVar5 = FFactory::GetNodeInfo();
  FOscilatorNodeBase::FOscilatorNodeBase
            ((FOscilatorNodeBase *)this,param_1,param_2,pFVar5,local_38,param_3,param_4,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7FSineOscilatorNode_Metasound__6B_;
  return this;
}

// FSineOscilatorNode @ 14b141c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FSineOscilatorNode * __thiscall
Metasound::FSineOscilatorNode::FSineOscilatorNode
          (FSineOscilatorNode *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSineOscilatorNode *pFVar4;
  FNodeData *pFVar5;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory_FSineOscilatorNode_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFactory_FSineOscilatorNode_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSineOscilatorNode *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar3 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar3;
  }
  local_a8.Object = param_2->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = FNodeData::FNodeData(&local_98,param_1);
  FOscilatorNodeBase::FOscilatorNodeBase((FOscilatorNodeBase *)this,pFVar5,&local_a8,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7FSineOscilatorNode_Metasound__6B_;
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateNodeClassMetadata @ 14b16bf40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FSineOscilatorNode::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = FFactory::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

