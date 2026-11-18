// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FGraphModifyDelegates @ 14ae1bd30

FGraphModifyDelegates * __thiscall
Metasound::Frontend::FGraphModifyDelegates::FGraphModifyDelegates
          (FGraphModifyDelegates *this,FGraphModifyDelegates *param_1)

{
  TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *pTVar1;
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegate<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *pTVar2;
  
  *(undefined8 *)&(this->EdgeDelegates).OnEdgeAdded.field_0x18 = 2;
  *(undefined8 *)&(this->EdgeDelegates).OnEdgeAdded = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnEdgeAdded.field_0x8 = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnEdgeAdded.field_0x10 = 0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)param_1);
  pTVar1 = &(this->EdgeDelegates).OnRemoveSwappingEdge;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x8 = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x10 = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x18 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->EdgeDelegates).OnRemoveSwappingEdge);
  *(undefined8 *)&(this->NodeDelegates).OnNodeAdded = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeAdded.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeAdded.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeAdded.field_0x18 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->NodeDelegates,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->NodeDelegates);
  this_00 = &(this->NodeDelegates).OnNodeConfigurationUpdated;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeConfigurationUpdated.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeConfigurationUpdated.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeConfigurationUpdated.field_0x18 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->NodeDelegates).OnNodeConfigurationUpdated);
  pTVar1 = &(this->NodeDelegates).OnRemoveSwappingNode;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemoveSwappingNode.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemoveSwappingNode.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemoveSwappingNode.field_0x18 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->NodeDelegates).OnRemoveSwappingNode);
  pTVar2 = &(this->NodeDelegates).OnNodeInputLiteralSet;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeInputLiteralSet.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeInputLiteralSet.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeInputLiteralSet.field_0x18 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar2,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->NodeDelegates).OnNodeInputLiteralSet);
  pTVar2 = &(this->NodeDelegates).OnRemovingNodeInputLiteral;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemovingNodeInputLiteral.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemovingNodeInputLiteral.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemovingNodeInputLiteral.field_0x18 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar2,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_1->NodeDelegates).OnRemovingNodeInputLiteral);
  return this;
}

// ~FGraphModifyDelegates @ 14ae1d8a0

void __thiscall
Metasound::Frontend::FGraphModifyDelegates::~FGraphModifyDelegates(FGraphModifyDelegates *this)

{
  void *pvVar1;
  
  FNodeModifyDelegates::~FNodeModifyDelegates(&this->NodeDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x8,
             *(int *)&(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x10);
  pvVar1 = *(void **)&(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EdgeDelegates).OnRemoveSwappingEdge);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EdgeDelegates).OnEdgeAdded.field_0x8,
             *(int *)&(this->EdgeDelegates).OnEdgeAdded.field_0x10);
  pvVar1 = *(void **)&(this->EdgeDelegates).OnEdgeAdded.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// FGraphModifyDelegates @ 14ae58fe0

FGraphModifyDelegates * __thiscall
Metasound::Frontend::FGraphModifyDelegates::FGraphModifyDelegates
          (FGraphModifyDelegates *this,FGraphModifyDelegates *param_1)

{
  TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *pTVar1;
  TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *pTVar2;
  FNodeModifyDelegates *this_00;
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *this_01;
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *pTVar3;
  TMulticastDelegate<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *pTVar4;
  TMulticastDelegate<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *pTVar5;
  
  *(undefined8 *)&(this->EdgeDelegates).OnEdgeAdded.field_0x18 = 2;
  *(undefined8 *)&(this->EdgeDelegates).OnEdgeAdded = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnEdgeAdded.field_0x8 = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnEdgeAdded.field_0x10 = 0;
  if (param_1 != this) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)param_1);
  }
  pTVar1 = &(this->EdgeDelegates).OnRemoveSwappingEdge;
  pTVar2 = &(param_1->EdgeDelegates).OnRemoveSwappingEdge;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x8 = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x10 = 0;
  *(undefined8 *)&(this->EdgeDelegates).OnRemoveSwappingEdge.field_0x18 = 2;
  if (pTVar2 != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int,int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar2);
  }
  this_00 = &this->NodeDelegates;
  *(undefined8 *)&this_00->OnNodeAdded = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeAdded.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeAdded.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeAdded.field_0x18 = 2;
  if (&param_1->NodeDelegates != this_00) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->NodeDelegates);
  }
  this_01 = &(this->NodeDelegates).OnNodeConfigurationUpdated;
  pTVar3 = &(param_1->NodeDelegates).OnNodeConfigurationUpdated;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeConfigurationUpdated.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeConfigurationUpdated.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeConfigurationUpdated.field_0x18 = 2;
  if (pTVar3 != this_01) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_01,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar3);
  }
  pTVar1 = &(this->NodeDelegates).OnRemoveSwappingNode;
  pTVar2 = &(param_1->NodeDelegates).OnRemoveSwappingNode;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemoveSwappingNode.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemoveSwappingNode.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemoveSwappingNode.field_0x18 = 2;
  if (pTVar2 != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int,int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar2);
  }
  pTVar4 = &(this->NodeDelegates).OnNodeInputLiteralSet;
  pTVar5 = &(param_1->NodeDelegates).OnNodeInputLiteralSet;
  *(undefined8 *)&pTVar4->field_0x0 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeInputLiteralSet.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeInputLiteralSet.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnNodeInputLiteralSet.field_0x18 = 2;
  if (pTVar5 != pTVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar4,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar5);
  }
  pTVar4 = &(this->NodeDelegates).OnRemovingNodeInputLiteral;
  pTVar5 = &(param_1->NodeDelegates).OnRemovingNodeInputLiteral;
  *(undefined8 *)&pTVar4->field_0x0 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemovingNodeInputLiteral.field_0x8 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemovingNodeInputLiteral.field_0x10 = 0;
  *(undefined8 *)&(this->NodeDelegates).OnRemovingNodeInputLiteral.field_0x18 = 2;
  if (pTVar5 != pTVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar4,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar5);
  }
  return this;
}

