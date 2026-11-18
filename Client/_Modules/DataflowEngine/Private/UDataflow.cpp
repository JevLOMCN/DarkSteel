// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 36

// StaticClass @ 1462c6450

UClass * __cdecl UDataflow::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflow.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"Dataflow",
               &Z_Registration_Info_UClass_UDataflow.InnerSingleton,StaticRegisterNativesUDataflow,
               0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDataflow>,
               InternalVTableHelperCtorCaller<UDataflow>,local_res8,UEdGraph::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflow.InnerSingleton;
}

// UDataflow @ 1462cece0

UDataflow * __thiscall UDataflow::UDataflow(UDataflow *this,FVTableHelper *param_1)

{
  UEdGraph::UEdGraph((UEdGraph *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UEdGraph__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowGraphInterface__;
  (this->LastModifiedRenderTarget).Value = UE::Dataflow::FTimestamp::Invalid;
  (this->RenderTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderTargets).ArrayNum = 0;
  (this->RenderTargets).ArrayMax = 0;
  (this->WireframeRenderTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WireframeRenderTargets).ArrayNum = 0;
  (this->WireframeRenderTargets).ArrayMax = 0;
  (this->Dataflow).Object = (FGraph *)0x0;
  (this->Dataflow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bActive = true;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  this->Type = Construction;
  FInstancedStruct::FInstancedStruct(&(this->Variables).Value);
  (this->DataflowSubGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataflowSubGraphs).ArrayNum = 0;
  (this->DataflowSubGraphs).ArrayMax = 0;
  *(undefined8 *)&this->BeginDestroyEvent = 0;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x8 = 0;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x10 = 0;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x18 = 2;
  return this;
}

// UDataflow @ 1462cedc0

UDataflow * __thiscall UDataflow::UDataflow(UDataflow *this,FObjectInitializer *param_1)

{
  FGraph *pFVar1;
  FGuid *pFVar2;
  FGraph *pFVar3;
  FGraph *pFVar4;
  FGuid local_28;
  FGuid local_18;
  
  UEdGraph::UEdGraph((UEdGraph *)this,param_1);
  pFVar4 = (FGraph *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UEdGraph__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowGraphInterface__;
  (this->LastModifiedRenderTarget).Value = UE::Dataflow::FTimestamp::Invalid;
  (this->RenderTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderTargets).ArrayNum = 0;
  (this->RenderTargets).ArrayMax = 0;
  (this->WireframeRenderTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WireframeRenderTargets).ArrayNum = 0;
  (this->WireframeRenderTargets).ArrayMax = 0;
  pFVar1 = ::operator_new(0xd8);
  pFVar3 = pFVar4;
  if (pFVar1 != (FGraph *)0x0) {
    pFVar2 = FGuid::NewGuid(&local_18);
    local_28.A = pFVar2->A;
    local_28.B = pFVar2->B;
    local_28.C = pFVar2->C;
    local_28.D = pFVar2->D;
    pFVar3 = UE::Dataflow::FGraph::FGraph(pFVar1,&local_28);
  }
  (this->Dataflow).Object = pFVar3;
  pFVar1 = ::operator_new(0x18);
  if (pFVar1 != (FGraph *)0x0) {
    (pFVar1->Guid).A = 1;
    pFVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGraph_Dataflow_UE__U__DefaultDeleter_VFGraph_Dataflow_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (pFVar1->Guid).B = 1;
    *(FGraph **)&(pFVar1->Guid).C = pFVar3;
    pFVar4 = pFVar1;
  }
  (this->Dataflow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
  this->bActive = true;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  this->Type = Construction;
  FInstancedStruct::FInstancedStruct(&(this->Variables).Value);
  (this->DataflowSubGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataflowSubGraphs).ArrayNum = 0;
  (this->DataflowSubGraphs).ArrayMax = 0;
  *(undefined8 *)&this->BeginDestroyEvent = 0;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x8 = 0;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x10 = 0;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x18 = 2;
  return this;
}

// ~UDataflow @ 1462d0000

void __thiscall UDataflow::~UDataflow(UDataflow *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UEdGraph__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowGraphInterface__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BeginDestroyEvent).field_0x8,*(int *)&(this->BeginDestroyEvent).field_0x10);
  pvVar1 = *(void **)&(this->BeginDestroyEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BeginDestroyEvent);
  pFVar2 = (this->DataflowSubGraphs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FInstancedStruct::Reset(&(this->Variables).Value);
  pFVar2 = (this->Targets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Dataflow).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->WireframeRenderTargets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RenderTargets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IDataflowGraphInterface__6B_;
  this->_padding_ = (longlong)&___7IMeshDeformerProducer__6B_;
  UEdGraph::~UEdGraph((UEdGraph *)this);
  return;
}

// AddReferencedObjects @ 1462d22e0

void __cdecl UDataflow::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UDataflow *pUVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  UObject *local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 == (UObject *)0x0) {
    pFVar6 = GetTypeName<UDataflow>(&local_58);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar5 = Cast<UDataflow,UObject>(param_1);
  if (pUVar5 != (UDataflow *)0x0) {
    pFVar7 = (pUVar5->RenderTargets).AllocatorInstance.Data;
    iVar2 = (pUVar5->RenderTargets).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar5->RenderTargets).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UDataflowEdNode_const_>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      local_res18[0] = *(UObject **)pFVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(local_res18[0]);
      }
      (**(code **)(param_2->_padding_ + 0x88))(param_2,local_res18,0,0);
      pFVar7 = pFVar7 + 8;
    }
    if ((pUVar5->Dataflow).Object == (FGraph *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UE::Dataflow::FGraph::AddReferencedObjects((pUVar5->Dataflow).Object,param_2);
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar6 = GetTypeName<UDataflow>(&local_48);
  pwVar8 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_38,param_1);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar9);
}

// AddRenderTarget @ 1462d2740

void __thiscall
UDataflow::AddRenderTarget(UDataflow *this,TObjectPtr<UDataflowEdNode_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  uVar3 = UE::Dataflow::FTimestamp::Current();
  (this->LastModifiedRenderTarget).Value = uVar3;
  if (*(char *)(*(longlong *)param_1.field0_0x0 + 0xb9) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode->ShouldRenderNode()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowObject.cpp"
                       ,0xee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TObjectPtr<UDataflowEdNode_const_>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UDataflowEdNode_const_>_const_&>
            (&this->RenderTargets,(TObjectPtr<UDataflowEdNode_const_> *)param_1.field0_0x0);
  return;
}

// AddSubGraph @ 1462d27b0

void __thiscall UDataflow::AddSubGraph(UDataflow *this,UDataflowSubGraph *param_1)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UDataflowSubGraph>_u_0 local_res10 [3];
  
  if (param_1 == (UDataflowSubGraph *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7472058740628258421>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowObject.cpp"
                       ,0x18b,"SubGraph");
    if (!bVar2) {
      return;
    }
code_r0x0001462d2834:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)param_1,(UObject *)this);
  if (bVar2) {
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UDataflowSubGraph>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UDataflowSubGraph>_>
              (&this->DataflowSubGraphs,(TObjectPtr<UDataflowSubGraph> *)&local_res10[0].ObjectPtr);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7472058740628258419>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowObject.cpp"
                       ,0x18d,"SubGraph->IsInOuter(this)");
    if (bVar2) goto code_r0x0001462d2834;
  }
  return;
}

// AddWireframeRenderTarget @ 1462d2880

void __thiscall
UDataflow::AddWireframeRenderTarget(UDataflow *this,TObjectPtr<UDataflowEdNode_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  uVar3 = UE::Dataflow::FTimestamp::Current();
  (this->LastModifiedRenderTarget).Value = uVar3;
  if (*(char *)(*(longlong *)param_1.field0_0x0 + 0xba) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode->ShouldWireframeRenderNode()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowObject.cpp"
                       ,0xfc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TObjectPtr<UDataflowEdNode_const_>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UDataflowEdNode_const_>_const_&>
            (&this->WireframeRenderTargets,(TObjectPtr<UDataflowEdNode_const_> *)param_1.field0_0x0)
  ;
  return;
}

// BeginDestroy @ 1462d2920

void __thiscall UDataflow::BeginDestroy(UDataflow *this)

{
  undefined1 *puVar1;
  FMeshDeformerBeginDestroyEvent *this_00;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ForAnyElementType *this_01;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  
  this_00 = &this->BeginDestroyEvent;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_58);
  puVar1 = &(this->BeginDestroyEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar10 = *(int *)&(this->BeginDestroyEvent).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&(this->BeginDestroyEvent).field_0x10) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)&(this->BeginDestroyEvent).field_0x8;
      if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
        bVar6 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->BeginDestroyEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_40);
  iVar2 = *(int *)&(this->BeginDestroyEvent).field_0x10;
  this_01 = *(ForAnyElementType **)&(this->BeginDestroyEvent).field_0x8;
  pFVar12 = this_01 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&(this->BeginDestroyEvent).field_0x10 != iVar2) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar12) break;
    if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)this_01->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
      *(undefined4 *)&this_01[1].Data = 0;
    }
    this_01 = this_01 + 2;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// EvaluateTerminalNodeByName @ 1462dae90

void __thiscall
UDataflow::EvaluateTerminalNodeByName(UDataflow *this,FName param_1,UObject *param_2)

{
  undefined1 local_res20 [8];
  
  `UDataflow::EvaluateTerminalNodeByName'::__l2::<lambda_1>::operator()(local_res20);
  return;
}

// FindEdNodeByDataflowNodeGuid @ 1462dbbc0

TObjectPtr<UDataflowEdNode> __thiscall
UDataflow::FindEdNodeByDataflowNodeGuid(UDataflow *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TObjectPtr<UDataflowEdNode> *pTVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  <lambda_1> local_48;
  <lambda_1> local_38 [2];
  
  param_1->A = 0;
  param_1->B = 0;
  local_48.FoundNode = (TObjectPtr<UDataflowEdNode> *)param_1;
  local_38[0].FoundNode = (TObjectPtr<UDataflowEdNode> *)param_1;
  bVar4 = UE::Dataflow::Private::
          ForEachEdGraphNodeInEdGraph<_UDataflow::FindEdNodeByDataflowNodeGuid_::__l2::<lambda_1>_>
                    ((UEdGraph *)this,&local_48);
  pTVar3 = local_38[0].FoundNode;
  if (!bVar4) {
    return (TObjectPtr<UDataflowEdNode>)(TObjectPtr<UDataflowEdNode>_u_0)param_1;
  }
  pFVar5 = (this->DataflowSubGraphs).AllocatorInstance.Data;
  iVar2 = (this->DataflowSubGraphs).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DataflowSubGraphs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar1) break;
    local_38[0].FoundNode = pTVar3;
    bVar4 = UE::Dataflow::Private::
            ForEachEdGraphNodeInEdGraph<_UDataflow::FindEdNodeByDataflowNodeGuid_::__l2::<lambda_1>_>
                      (*(UEdGraph **)pFVar5,local_38);
    if (!bVar4) {
      return (TObjectPtr<UDataflowEdNode>)(TObjectPtr<UDataflowEdNode>_u_0)param_1;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (TObjectPtr<UDataflowEdNode>)(TObjectPtr<UDataflowEdNode>_u_0)param_1;
}

// FindEdNodeByDataflowNodeGuid @ 1462dbc90

TObjectPtr<UDataflowEdNode_const_> __thiscall
UDataflow::FindEdNodeByDataflowNodeGuid(UDataflow *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TObjectPtr<UDataflowEdNode_const_> *pTVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  <lambda_1>_conflict local_48;
  <lambda_1>_conflict local_38 [2];
  
  param_1->A = 0;
  param_1->B = 0;
  local_48.FoundNode = (TObjectPtr<UDataflowEdNode_const_> *)param_1;
  local_38[0].FoundNode = (TObjectPtr<UDataflowEdNode_const_> *)param_1;
  bVar4 = UE::Dataflow::Private::
          ForEachEdGraphNodeInEdGraph<_UDataflow::FindEdNodeByDataflowNodeGuid_::__l2::<lambda_1>_>
                    ((UEdGraph *)this,&local_48);
  pTVar3 = local_38[0].FoundNode;
  if (!bVar4) {
    return (TObjectPtr<UDataflowEdNode_const_>)(TObjectPtr<UDataflowEdNode_const_>_u_0)param_1;
  }
  pFVar5 = (this->DataflowSubGraphs).AllocatorInstance.Data;
  iVar2 = (this->DataflowSubGraphs).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DataflowSubGraphs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar1) break;
    local_38[0].FoundNode = pTVar3;
    bVar4 = UE::Dataflow::Private::
            ForEachEdGraphNodeInEdGraph<_UDataflow::FindEdNodeByDataflowNodeGuid_::__l2::<lambda_1>_>
                      (*(UEdGraph **)pFVar5,local_38);
    if (!bVar4) {
      return (TObjectPtr<UDataflowEdNode_const_>)(TObjectPtr<UDataflowEdNode_const_>_u_0)param_1;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (TObjectPtr<UDataflowEdNode_const_>)(TObjectPtr<UDataflowEdNode_const_>_u_0)param_1;
}

// FindSubGraphByGuid @ 1462dbe60

UDataflowSubGraph * __thiscall UDataflow::FindSubGraphByGuid(UDataflow *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDataflowSubGraph *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->DataflowSubGraphs).AllocatorInstance.Data;
  iVar2 = (this->DataflowSubGraphs).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DataflowSubGraphs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(UDataflowSubGraph **)pFVar4;
    if ((((pUVar3->SubGraphGuid).D == param_1->D && (pUVar3->SubGraphGuid).C == param_1->C) &&
        (pUVar3->SubGraphGuid).B == param_1->B) && (pUVar3->SubGraphGuid).A == param_1->A) {
      return pUVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (UDataflowSubGraph *)0x0;
}

// FindSubGraphByGuid @ 1462dbef0

UDataflowSubGraph * __thiscall UDataflow::FindSubGraphByGuid(UDataflow *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDataflowSubGraph *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->DataflowSubGraphs).AllocatorInstance.Data;
  iVar2 = (this->DataflowSubGraphs).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DataflowSubGraphs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(UDataflowSubGraph **)pFVar4;
    if ((((pUVar3->SubGraphGuid).D == param_1->D && (pUVar3->SubGraphGuid).C == param_1->C) &&
        (pUVar3->SubGraphGuid).B == param_1->B) && (pUVar3->SubGraphGuid).A == param_1->A) {
      return pUVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (UDataflowSubGraph *)0x0;
}

// FindSubGraphByName @ 1462dbf80

UDataflowSubGraph * __thiscall UDataflow::FindSubGraphByName(UDataflow *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->DataflowSubGraphs).AllocatorInstance.Data;
  iVar2 = (this->DataflowSubGraphs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DataflowSubGraphs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((FName)(*(UDataflowSubGraph **)pFVar3)->_padding_ == param_1) {
      return *(UDataflowSubGraph **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UDataflowSubGraph *)0x0;
}

// FindSubGraphByName @ 1462dc000

UDataflowSubGraph * __thiscall UDataflow::FindSubGraphByName(UDataflow *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->DataflowSubGraphs).AllocatorInstance.Data;
  iVar2 = (this->DataflowSubGraphs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DataflowSubGraphs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((FName)(*(UDataflowSubGraph **)pFVar3)->_padding_ == param_1) {
      return *(UDataflowSubGraph **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UDataflowSubGraph *)0x0;
}

// GetDataflowAssetFromEdGraph @ 1462dc4c0

UDataflow * __cdecl UDataflow::GetDataflowAssetFromEdGraph(UEdGraph *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
code_r0x0001462dc4c0:
  if ((UDataflow *)param_1 != (UDataflow *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(((UDataflow *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UDataflow *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UDataflow *)param_1;
    }
  }
  if ((UDataflow *)param_1 == (UDataflow *)0x0) {
    return (UDataflow *)0x0;
  }
  param_1 = (UEdGraph *)((UDataflow *)param_1)->_padding_;
  if ((UDataflow *)param_1 != (UDataflow *)0x0) goto code_r0x0001462dc505;
  goto LAB_1462dc528;
code_r0x0001462dc505:
  pUVar2 = Z_Construct_UClass_UEdGraph_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(((UDataflow *)param_1)->_padding_ + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(((UDataflow *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) {
LAB_1462dc528:
    param_1 = (UEdGraph *)0x0;
  }
  goto code_r0x0001462dc4c0;
}

// GetDataflowAssetFromEdGraph @ 1462dc550

UDataflow * __cdecl UDataflow::GetDataflowAssetFromEdGraph(UEdGraph *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
code_r0x0001462dc550:
  if ((UDataflow *)param_1 != (UDataflow *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(((UDataflow *)param_1)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UDataflow *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UDataflow *)param_1;
    }
  }
  if ((UDataflow *)param_1 == (UDataflow *)0x0) {
    return (UDataflow *)0x0;
  }
  param_1 = (UEdGraph *)((UDataflow *)param_1)->_padding_;
  if ((UDataflow *)param_1 != (UDataflow *)0x0) goto code_r0x0001462dc595;
  goto LAB_1462dc5b8;
code_r0x0001462dc595:
  pUVar2 = Z_Construct_UClass_UEdGraph_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(((UDataflow *)param_1)->_padding_ + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(((UDataflow *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) {
LAB_1462dc5b8:
    param_1 = (UEdGraph *)0x0;
  }
  goto code_r0x0001462dc550;
}

// GetDataflowGraph @ 1462dc7b0

TSharedPtr<UE::Dataflow::FGraph,1> * __thiscall
UDataflow::GetDataflowGraph
          (UDataflow *this,TSharedPtr<UE::Dataflow::FGraph,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (FGraph *)this->_padding_;
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1462dda30

UClass * __cdecl UDataflow::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflow.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"Dataflow",
               &Z_Registration_Info_UClass_UDataflow.InnerSingleton,StaticRegisterNativesUDataflow,
               0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDataflow>,
               InternalVTableHelperCtorCaller<UDataflow>,local_res8,UEdGraph::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflow.InnerSingleton;
}

// GetSubGraphs @ 1462ded00

TArray<TObjectPtr<UDataflowSubGraph>,TSizedDefaultAllocator<32>_> * __thiscall
UDataflow::GetSubGraphs(UDataflow *this)

{
  return &this->DataflowSubGraphs;
}

// IsEditorOnly @ 1462dfca0

bool __thiscall UDataflow::IsEditorOnly(UDataflow *this)

{
  return true;
}

// OnBeginDestroy @ 1462e0040

FMeshDeformerBeginDestroyEvent * __thiscall UDataflow::OnBeginDestroy(UDataflow *this)

{
  return (FMeshDeformerBeginDestroyEvent *)&this->WireframeRenderTargets;
}

// PostEditCallback @ 1462e2150

void __thiscall UDataflow::PostEditCallback(UDataflow *this)

{
  return;
}

// PostLoad @ 1462e2160

void __thiscall UDataflow::PostLoad(UDataflow *this)

{
  ulong64 uVar1;
  
  uVar1 = UE::Dataflow::FTimestamp::Current();
  (this->LastModifiedRenderTarget).Value = uVar1;
  UObject::PostLoad((UObject *)this);
  return;
}

// RefreshEdNode @ 1462e2980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataflow::RefreshEdNode(UDataflow *this,TObjectPtr<UDataflowEdNode> param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UEdGraph *this_00;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  if (*(longlong *)param_1.field0_0x0 != 0) {
    if ((5 < (byte)DATAFLOWNODE_LOG._0_1_) &&
       (UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&DATAFLOWNODE_LOG),
       5 < (byte)DATAFLOWNODE_LOG._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&DATAFLOWNODE_LOG);
    }
    puVar6 = (undefined8 *)this->_padding_;
    puVar1 = puVar6 + (int)this->_padding_;
    if (puVar6 != puVar1) {
      do {
        if ((UEdGraphNode *)*puVar6 == *(UEdGraphNode **)param_1.field0_0x0) {
          UEdGraph::NotifyNodeChanged((UEdGraph *)this,*(UEdGraphNode **)param_1.field0_0x0);
          return;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
    iVar4 = (this->DataflowSubGraphs).ArrayNum;
    pFVar7 = (this->DataflowSubGraphs).AllocatorInstance.Data;
    pFVar2 = pFVar7 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->DataflowSubGraphs).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar7 == pFVar2) break;
      this_00 = *(UEdGraph **)pFVar7;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 != (UEdGraph *)0x0) goto LAB_1462e2a66;
      }
      else if (this_00 != (UEdGraph *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_00);
LAB_1462e2a66:
        pFVar5 = (this_00->Nodes).AllocatorInstance.Data;
        pFVar3 = pFVar5 + (longlong)(this_00->Nodes).ArrayNum * 8;
        if (pFVar5 != pFVar3) {
          do {
            if (*(UEdGraphNode **)pFVar5 == *(UEdGraphNode **)param_1.field0_0x0) {
              UEdGraph::NotifyNodeChanged(this_00,*(UEdGraphNode **)param_1.field0_0x0);
              return;
            }
            pFVar5 = pFVar5 + 8;
          } while (pFVar5 != pFVar3);
        }
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// RefreshEdNodeByGuid @ 1462e2ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataflow::RefreshEdNodeByGuid(UDataflow *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UEdGraph *this_00;
  FGuid *pFVar5;
  TObjectPtr<UDataflowEdNode> *pTVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  TObjectPtr<UDataflowEdNode>_u_0 TVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  TObjectPtr<UDataflowEdNode>_u_0 local_res18;
  <lambda_1> local_48;
  <lambda_1> local_38 [2];
  
  local_38[0].FoundNode = (TObjectPtr<UDataflowEdNode> *)&local_res18;
  local_48.FoundNode = (TObjectPtr<UDataflowEdNode> *)&local_res18;
  local_res18.DebugPtr = (UDataflowEdNode *)0x0;
  local_48.Guid = param_1;
  local_38[0].Guid = param_1;
  bVar7 = UE::Dataflow::Private::
          ForEachEdGraphNodeInEdGraph<_UDataflow::FindEdNodeByDataflowNodeGuid_::__l2::<lambda_1>_>
                    ((UEdGraph *)this,&local_48);
  pTVar6 = local_38[0].FoundNode;
  pFVar5 = local_38[0].Guid;
  if (bVar7) {
    pFVar11 = (this->DataflowSubGraphs).AllocatorInstance.Data;
    iVar4 = (this->DataflowSubGraphs).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->DataflowSubGraphs).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if ((pFVar11 == pFVar1) ||
         (local_38[0].Guid = pFVar5, local_38[0].FoundNode = pTVar6,
         bVar7 = UE::Dataflow::Private::
                 ForEachEdGraphNodeInEdGraph<_UDataflow::FindEdNodeByDataflowNodeGuid_::__l2::<lambda_1>_>
                           (*(UEdGraph **)pFVar11,local_38), !bVar7)) break;
      pFVar11 = pFVar11 + 8;
    }
  }
  if (local_res18.DebugPtr != (UDataflowEdNode *)0x0) {
    if ((5 < (byte)DATAFLOWNODE_LOG._0_1_) &&
       (UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&DATAFLOWNODE_LOG),
       5 < (byte)DATAFLOWNODE_LOG._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&DATAFLOWNODE_LOG);
    }
    plVar9 = (longlong *)this->_padding_;
    plVar2 = plVar9 + (int)this->_padding_;
    for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
      if ((UDataflowEdNode *)*plVar9 == local_res18.DebugPtr) {
        UEdGraph::NotifyNodeChanged((UEdGraph *)this,(UEdGraphNode *)local_res18.DebugPtr);
        return;
      }
    }
    pFVar11 = (this->DataflowSubGraphs).AllocatorInstance.Data;
    iVar4 = (this->DataflowSubGraphs).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar4 * 8;
    TVar10 = local_res18;
    while( true ) {
      if ((this->DataflowSubGraphs).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UDataflowSubGraph>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
        TVar10 = local_res18;
      }
      if (pFVar11 == pFVar1) break;
      this_00 = *(UEdGraph **)pFVar11;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 != (UEdGraph *)0x0) goto LAB_1462e2c5f;
      }
      else if (this_00 != (UEdGraph *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_00);
        TVar10 = local_res18;
LAB_1462e2c5f:
        pFVar8 = (this_00->Nodes).AllocatorInstance.Data;
        pFVar3 = pFVar8 + (longlong)(this_00->Nodes).ArrayNum * 8;
        for (; pFVar8 != pFVar3; pFVar8 = pFVar8 + 8) {
          if (*(UDataflowEdNode **)pFVar8 == TVar10.DebugPtr) {
            UEdGraph::NotifyNodeChanged(this_00,(UEdGraphNode *)TVar10.DebugPtr);
            return;
          }
        }
      }
      pFVar11 = pFVar11 + 8;
    }
  }
  return;
}

// RemoveRenderTarget @ 1462e3a80

void __thiscall
UDataflow::RemoveRenderTarget(UDataflow *this,TObjectPtr<UDataflowEdNode_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  uVar3 = UE::Dataflow::FTimestamp::Current();
  (this->LastModifiedRenderTarget).Value = uVar3;
  if (*(char *)(*(longlong *)param_1.field0_0x0 + 0xb9) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InNode->ShouldRenderNode()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowObject.cpp"
                       ,0xf5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TObjectPtr<UDataflowEdNode_const_>,TSizedDefaultAllocator<32>_>::Remove
            (&this->RenderTargets,(TObjectPtr<UDataflowEdNode_const_> *)param_1.field0_0x0);
  return;
}

// RemoveSubGraph @ 1462e3b00

void __thiscall UDataflow::RemoveSubGraph(UDataflow *this,UDataflowSubGraph *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDataflowSubGraph *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UDataflowSubGraph *local_38 [2];
  
  if (param_1 == (UDataflowSubGraph *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7472058740628258406>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowObject.cpp"
                       ,0x19a,"SubGraph");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_38[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this->DataflowSubGraphs).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar2 + (longlong)(this->DataflowSubGraphs).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->DataflowSubGraphs).ArrayNum;
    if (iVar1 != 0) {
      iVar9 = 0;
      pFVar2 = (this->DataflowSubGraphs).AllocatorInstance.Data;
      bVar4 = *(UDataflowSubGraph **)pFVar2 != local_38[0];
      lVar6 = 0;
      pUVar5 = local_38[0];
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        do {
          lVar6 = lVar6 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar6) break;
        } while (bVar4 == (*(UDataflowSubGraph **)(pFVar2 + lVar6 * 8) != pUVar5));
        if (bVar4 != false) {
          if (iVar9 != iVar7) {
            memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                    (longlong)(iVar8 - iVar7) << 3);
            pUVar5 = local_38[0];
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < iVar1);
      (this->DataflowSubGraphs).ArrayNum = iVar9;
    }
  }
  return;
}

// RemoveWireframeRenderTarget @ 1462e3ce0

void __thiscall
UDataflow::RemoveWireframeRenderTarget(UDataflow *this,TObjectPtr<UDataflowEdNode_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  uVar3 = UE::Dataflow::FTimestamp::Current();
  (this->LastModifiedRenderTarget).Value = uVar3;
  if (*(char *)(*(longlong *)param_1.field0_0x0 + 0xba) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InNode->ShouldWireframeRenderNode()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowObject.cpp"
                       ,0x103,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TObjectPtr<UDataflowEdNode_const_>,TSizedDefaultAllocator<32>_>::Remove
            (&this->WireframeRenderTargets,(TObjectPtr<UDataflowEdNode_const_> *)param_1.field0_0x0)
  ;
  return;
}

// Serialize @ 1462e42d0

void __thiscall UDataflow::Serialize(UDataflow *this,FArchive *param_1)

{
  FGraph *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((this->Dataflow).Object == (FGraph *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Dataflow).Object;
                    /* WARNING: Could not recover jumptable at 0x0001462e432f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1,this);
  return;
}

// Serialize @ 1462e4340

void __thiscall UDataflow::Serialize(UDataflow *this,FStructuredArchiveRecord param_1)

{
  FGraph *pFVar1;
  code *pcVar2;
  bool bVar3;
  FArchive *pFVar4;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar4);
  if ((this->Dataflow).Object == (FGraph *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Dataflow).Object;
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,pFVar4,this);
  return;
}

// StaticRegisterNativesUDataflow @ 1462e61e0

void __cdecl UDataflow::StaticRegisterNativesUDataflow(void)

{
  return;
}

// _getUObject @ 1462e8ff0

UObject * __thiscall UDataflow::_getUObject(UDataflow *this)

{
  return (UObject *)&this[-1].bActive;
}

// _getUObject`adjustor{8}' @ 1462e8ffc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UDataflow::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UDataflow::_getUObject_adjustor_8__(UDataflow *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDataflow *)&this[-1].BeginDestroyEvent.field_0x18);
  return (UObject *)pUVar1;
}

// operator() @ 1504e9100

bool __thiscall `UDataflow::EvaluateTerminalNodeByName'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7472058740628258670>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7472058740628258670>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

