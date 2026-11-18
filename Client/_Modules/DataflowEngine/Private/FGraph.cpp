// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 3

// FindBaseNode @ 1462dbaa0

TSharedPtr<FDataflowNode,1> * __thiscall
UE::Dataflow::FGraph::FindBaseNode
          (FGraph *this,TSharedPtr<FDataflowNode,1> *__return_storage_ptr__,FGuid *param_1)

{
  int iVar1;
  undefined4 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDataflowNode *pFVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  TSharedPtr<FDataflowNode,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Nodes).ArrayNum;
  pFVar9 = (this->Nodes).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Nodes).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      __return_storage_ptr__->Object = (FDataflowNode *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
    pFVar4 = *(FDataflowNode **)pFVar9;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == (FDataflowNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) break;
    uVar2 = (pFVar4->Guid).C;
    uVar5 = (pFVar4->Guid).D;
    if ((((pFVar4->Guid).B == param_1->B && uVar5 == param_1->D) && uVar2 == param_1->C) &&
        (pFVar4->Guid).A == param_1->A) {
      __return_storage_ptr__->Object = pFVar4;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar9 = pFVar9 + 0x10;
  }
  pcVar6 = (code *)swi(3);
  pTVar8 = (TSharedPtr<FDataflowNode,1> *)(*pcVar6)();
  return pTVar8;
}

// FindFilteredNode @ 1462dbd60

TSharedPtr<FDataflowNode,1> * __thiscall
UE::Dataflow::FGraph::FindFilteredNode
          (FGraph *this,TSharedPtr<FDataflowNode,1> *__return_storage_ptr__,FName *param_1,
          FName param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDataflowNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  TSharedPtr<FDataflowNode,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uStackX_24;
  undefined1 local_38 [16];
  
  pTVar6 = GetFilteredNodes(this,param_1);
  iVar1 = pTVar6->ArrayNum;
  pFVar8 = (pTVar6->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar6->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_38);
    }
    if (pFVar8 == pFVar9) {
      __return_storage_ptr__->Object = (FDataflowNode *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    pFVar3 = *(FDataflowNode **)pFVar8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FDataflowNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    if (((pFVar3->Name).ComparisonIndex.Value == param_2.ComparisonIndex.Value.Value) &&
       (uStackX_24 = param_2.Number, (pFVar3->Name).Number == uStackX_24)) {
      __return_storage_ptr__->Object = pFVar3;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar4 = (code *)swi(3);
  pTVar7 = (TSharedPtr<FDataflowNode,1> *)(*pcVar4)();
  return pTVar7;
}

// GetFilteredNodes @ 1462dd0f0

TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FGraph::GetFilteredNodes(FGraph *this,FName *param_1)

{
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Dataflow::FGraph::GetFilteredNodes(FName_const&___ptr64)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Dataflow::FGraph::GetFilteredNodes(FName_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Dataflow::FGraph::GetFilteredNodes(FName_const&___ptr64)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Dataflow::FGraph::GetFilteredNodes'::__l2::
             _dynamic_atexit_destructor_for__EmptyNodes__);
      _Init_thread_footer(&`public:_class_TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Dataflow::FGraph::GetFilteredNodes(FName_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar1 = TMapBase<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->FilteredNodes,*param_1);
  pTVar2 = (TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *)
           &`public:_class_TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UE::Dataflow::FGraph::GetFilteredNodes(FName_const&___ptr64)const___ptr64'
            ::__l2::EmptyNodes;
  if (pTVar1 != (TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = pTVar1;
  }
  return pTVar2;
}

