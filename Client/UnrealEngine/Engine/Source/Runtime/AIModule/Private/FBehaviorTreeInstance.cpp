// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 33

// FBehaviorTreeInstance @ 146ec4520

/* WARNING: Enum "Type": Some values do not have unique names */

FBehaviorTreeInstance * __thiscall
FBehaviorTreeInstance::FBehaviorTreeInstance
          (FBehaviorTreeInstance *this,FBehaviorTreeInstance *param_1)

{
  TArray<TObjectPtr<UBTAuxiliaryNode>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FBehaviorTreeParallelTask,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UBTAuxiliaryNode>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FBehaviorTreeParallelTask,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  UBTCompositeNode *pUVar7;
  UBTNode *pUVar8;
  FScriptContainerElement *pFVar9;
  FName FVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances> FVar12;
  FName local_res8;
  
  pUVar7 = (param_1->RootNode).field0_0x0.DebugPtr;
  (this->RootNode).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UBTCompositeNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = (param_1->ActiveNode).field0_0x0.DebugPtr;
  (this->ActiveNode).field0_0x0.DebugPtr = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UBTNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->ActiveAuxNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->ActiveAuxNodes;
  (this->ActiveAuxNodes).ArrayNum = 0;
  (this->ActiveAuxNodes).ArrayMax = 0;
  pTVar2 = &this->ParallelTasks;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar3 = &this->InstanceMemory;
  (this->ParallelTasks).ArrayNum = 0;
  (this->ParallelTasks).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstanceMemory).ArrayNum = 0;
  (this->InstanceMemory).ArrayMax = 0;
  this->InstanceIdIndex = param_1->InstanceIdIndex;
  (this->ActiveNodeType).Value = (param_1->ActiveNodeType).Value;
  *(undefined8 *)&this->DeactivationNotify = 0;
  *(undefined8 *)&(this->DeactivationNotify).field_0x8 = 0;
  *(undefined4 *)&(this->DeactivationNotify).field_0x10 = 0;
  TDelegate<void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->DeactivationNotify,&param_1->DeactivationNotify);
  pTVar4 = &param_1->ActiveAuxNodes;
  this->bIteratingNodes = false;
  this->ParallelTaskIndex = -1;
  if (pTVar1 != pTVar4) {
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ActiveAuxNodes).ArrayNum = (param_1->ActiveAuxNodes).ArrayNum;
    (this->ActiveAuxNodes).ArrayMax = (param_1->ActiveAuxNodes).ArrayMax;
    (param_1->ActiveAuxNodes).ArrayNum = 0;
    (param_1->ActiveAuxNodes).ArrayMax = 0;
  }
  pTVar5 = &param_1->ParallelTasks;
  if (pTVar2 != pTVar5) {
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParallelTasks).ArrayNum = (param_1->ParallelTasks).ArrayNum;
    (this->ParallelTasks).ArrayMax = (param_1->ParallelTasks).ArrayMax;
    (param_1->ParallelTasks).ArrayNum = 0;
    (param_1->ParallelTasks).ArrayMax = 0;
  }
  pTVar6 = &param_1->InstanceMemory;
  if (pTVar3 != pTVar6) {
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InstanceMemory).ArrayNum = (param_1->InstanceMemory).ArrayNum;
    (this->InstanceMemory).ArrayMax = (param_1->InstanceMemory).ArrayMax;
    (param_1->InstanceMemory).ArrayNum = 0;
    (param_1->InstanceMemory).ArrayMax = 0;
  }
  this->bIteratingNodes = param_1->bIteratingNodes;
  this->ParallelTaskIndex = param_1->ParallelTaskIndex;
  IncMemoryStats(this);
  FVar12 = StatPtr_STAT_AI_BehaviorTree_NumInstances;
  if (StatPtr_STAT_AI_BehaviorTree_NumInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)0x0) {
    pFVar11 = ::FName::FName(&local_res8,"STAT_AI_BehaviorTree_NumInstances");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumInstances,
                        *pFVar11,L"Num Instances","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar12;
  local_res8.ComparisonIndex = FVar10.ComparisonIndex.Value;
  local_res8.Number = FVar10.Number;
  FThreadStats::AddMessage<__int64>(FVar10,Add,1,false);
  return this;
}

// FBehaviorTreeInstance @ 146ec4740

/* WARNING: Enum "Type": Some values do not have unique names */

FBehaviorTreeInstance * __thiscall
FBehaviorTreeInstance::FBehaviorTreeInstance
          (FBehaviorTreeInstance *this,FBehaviorTreeInstance *param_1)

{
  TArray<TObjectPtr<UBTAuxiliaryNode>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FBehaviorTreeParallelTask,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  UBTCompositeNode *pUVar6;
  UBTNode *pUVar7;
  FScriptContainerElement *pFVar8;
  FBehaviorTreeParallelTask *pFVar9;
  FName FVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances> FVar12;
  FName local_res8;
  
  pUVar6 = (param_1->RootNode).field0_0x0.DebugPtr;
  (this->RootNode).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBTCompositeNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = (param_1->ActiveNode).field0_0x0.DebugPtr;
  (this->ActiveNode).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UBTNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ActiveAuxNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAuxNodes).ArrayNum = 0;
  pTVar1 = &this->ActiveAuxNodes;
  (this->ActiveAuxNodes).ArrayMax = 0;
  pTVar2 = &this->ParallelTasks;
  (this->ParallelTasks).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->ActiveAuxNodes).ArrayMax;
  (this->ParallelTasks).ArrayNum = 0;
  piVar4 = &(this->ParallelTasks).ArrayMax;
  (this->InstanceMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceMemory).ArrayNum = 0;
  (this->InstanceMemory).ArrayMax = 0;
  this->InstanceIdIndex = param_1->InstanceIdIndex;
  (this->ActiveNodeType).Value = (param_1->ActiveNodeType).Value;
  *(undefined8 *)&this->DeactivationNotify = 0;
  *(undefined8 *)&(this->DeactivationNotify).field_0x8 = 0;
  *(undefined4 *)&(this->DeactivationNotify).field_0x10 = 0;
  TDelegate<void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->DeactivationNotify,&param_1->DeactivationNotify);
  this->bIteratingNodes = false;
  this->ParallelTaskIndex = -1;
  if (pTVar1 != &param_1->ActiveAuxNodes) {
    iVar5 = (param_1->ActiveAuxNodes).ArrayNum;
    pFVar8 = (param_1->ActiveAuxNodes).AllocatorInstance.Data;
    (this->ActiveAuxNodes).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar3,&pTVar1->AllocatorInstance,iVar5,piVar3);
      ConstructItems<TObjectPtr<UBTAuxiliaryNode>,TObjectPtr<UBTAuxiliaryNode>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UBTAuxiliaryNode> *)pFVar8,iVar5);
    }
  }
  if (pTVar2 != &param_1->ParallelTasks) {
    iVar5 = (param_1->ParallelTasks).ArrayNum;
    pFVar9 = (FBehaviorTreeParallelTask *)(param_1->ParallelTasks).AllocatorInstance.Data;
    (this->ParallelTasks).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar4 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar4,&pTVar2->AllocatorInstance,iVar5,piVar4);
      ConstructItems<FBehaviorTreeParallelTask,FBehaviorTreeParallelTask,int>
                ((pTVar2->AllocatorInstance).Data,pFVar9,iVar5);
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this->InstanceMemory,&param_1->InstanceMemory);
  this->bIteratingNodes = param_1->bIteratingNodes;
  this->ParallelTaskIndex = param_1->ParallelTaskIndex;
  IncMemoryStats(this);
  FVar12 = StatPtr_STAT_AI_BehaviorTree_NumInstances;
  if (StatPtr_STAT_AI_BehaviorTree_NumInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)0x0) {
    pFVar11 = ::FName::FName(&local_res8,"STAT_AI_BehaviorTree_NumInstances");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumInstances,
                        *pFVar11,L"Num Instances","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar12;
  local_res8.ComparisonIndex = FVar10.ComparisonIndex.Value;
  local_res8.Number = FVar10.Number;
  FThreadStats::AddMessage<__int64>(FVar10,Add,1,false);
  return this;
}

// FBehaviorTreeInstance @ 146ec49c0

/* WARNING: Enum "Type": Some values do not have unique names */

FBehaviorTreeInstance * __thiscall
FBehaviorTreeInstance::FBehaviorTreeInstance(FBehaviorTreeInstance *this,int param_1)

{
  int *piVar1;
  FName FVar2;
  int iVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances> FVar5;
  int *piVar6;
  FName local_res8;
  
  (this->RootNode).field0_0x0.DebugPtr = (UBTCompositeNode *)0x0;
  (this->ActiveNode).field0_0x0.DebugPtr = (UBTNode *)0x0;
  piVar1 = &(this->InstanceMemory).ArrayMax;
  (this->ActiveAuxNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAuxNodes).ArrayNum = 0;
  (this->ActiveAuxNodes).ArrayMax = 0;
  (this->ParallelTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParallelTasks).ArrayNum = 0;
  (this->ParallelTasks).ArrayMax = 0;
  (this->InstanceMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar6 = &(this->InstanceMemory).ArrayNum;
  *piVar1 = 0;
  *piVar6 = 0;
  *(undefined8 *)&this->DeactivationNotify = 0;
  *(undefined8 *)&(this->DeactivationNotify).field_0x8 = 0;
  *(undefined4 *)&(this->DeactivationNotify).field_0x10 = 0;
  this->bIteratingNodes = false;
  this->ParallelTaskIndex = -1;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_1,&(this->InstanceMemory).AllocatorInstance,piVar6,piVar1);
  memset((this->InstanceMemory).AllocatorInstance.Data + iVar3,0,(longlong)param_1);
  IncMemoryStats(this);
  FVar5 = StatPtr_STAT_AI_BehaviorTree_NumInstances;
  if (StatPtr_STAT_AI_BehaviorTree_NumInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_AI_BehaviorTree_NumInstances");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumInstances,
                       *pFVar4,L"Num Instances","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                       L"Behavior Tree",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar5;
  local_res8.ComparisonIndex = FVar2.ComparisonIndex.Value;
  local_res8.Number = FVar2.Number;
  FThreadStats::AddMessage<__int64>(FVar2,Add,1,false);
  return this;
}

// FBehaviorTreeInstance @ 146ec4b10

/* WARNING: Enum "Type": Some values do not have unique names */

FBehaviorTreeInstance * __thiscall
FBehaviorTreeInstance::FBehaviorTreeInstance(FBehaviorTreeInstance *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances> FVar3;
  FName local_res8;
  
  this->ParallelTaskIndex = -1;
  (this->RootNode).field0_0x0.DebugPtr = (UBTCompositeNode *)0x0;
  (this->ActiveNode).field0_0x0.DebugPtr = (UBTNode *)0x0;
  (this->ActiveAuxNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAuxNodes).ArrayNum = 0;
  (this->ActiveAuxNodes).ArrayMax = 0;
  (this->ParallelTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParallelTasks).ArrayNum = 0;
  (this->ParallelTasks).ArrayMax = 0;
  (this->InstanceMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceMemory).ArrayNum = 0;
  (this->InstanceMemory).ArrayMax = 0;
  *(undefined8 *)&this->DeactivationNotify = 0;
  *(undefined8 *)&(this->DeactivationNotify).field_0x8 = 0;
  *(undefined4 *)&(this->DeactivationNotify).field_0x10 = 0;
  this->bIteratingNodes = false;
  IncMemoryStats(this);
  FVar3 = StatPtr_STAT_AI_BehaviorTree_NumInstances;
  if (StatPtr_STAT_AI_BehaviorTree_NumInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_AI_BehaviorTree_NumInstances");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumInstances,
                       *pFVar2,L"Num Instances","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                       L"Behavior Tree",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res8.Number = FVar1.Number;
  FThreadStats::AddMessage<__int64>(FVar1,Add,1,false);
  return this;
}

// ~FBehaviorTreeInstance @ 146ecc680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBehaviorTreeInstance::~FBehaviorTreeInstance(FBehaviorTreeInstance *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar5;
  FName local_res8;
  FMemScope local_res10;
  FName local_res18;
  
  DecMemoryStats(this);
  FVar4 = StatPtr_STAT_AI_BehaviorTree_NumInstances;
  if (StatPtr_STAT_AI_BehaviorTree_NumInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_AI_BehaviorTree_NumInstances");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumInstances,
                       *pFVar3,L"Num Instances","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                       L"Behavior Tree",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar4;
  local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res8.Number = FVar1.Number;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_res18 = FVar1;
    FLLMScope::FLLMScope((FLLMScope *)&local_res8,Stats,false,None,Default,true);
    FMemScope::FMemScope(&local_res10,Stats,true);
    this_00->MemoryMessageScope = this_00->MemoryMessageScope + 1;
    puVar5 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                       (0x10,&(this_00->Packet).StatMessages);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 1;
      puVar5[1] = (ulonglong)FVar1 & 0xffffbfffffffffff | 0xb00000000000;
    }
    this_00->MemoryMessageScope = this_00->MemoryMessageScope + -1;
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    FStatsTrace::Add(&local_res18,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DeactivationNotify);
  pFVar2 = (this->InstanceMemory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ParallelTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveAuxNodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 146ecdf30

/* WARNING: Enum "Type": Some values do not have unique names */

FBehaviorTreeInstance * __thiscall
FBehaviorTreeInstance::operator=(FBehaviorTreeInstance *this,FBehaviorTreeInstance *param_1)

{
  TArray<TObjectPtr<UBTAuxiliaryNode>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UBTAuxiliaryNode>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FBehaviorTreeParallelTask,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FBehaviorTreeParallelTask,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  UBTCompositeNode *pUVar7;
  UBTNode *pUVar8;
  FScriptContainerElement *pFVar9;
  FName FVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances> FVar12;
  FName local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar7 = (param_1->RootNode).field0_0x0.DebugPtr, pUVar7 != (UBTCompositeNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->RootNode).field0_0x0 = (param_1->RootNode).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->ActiveNode).field0_0x0.DebugPtr, pUVar8 != (UBTNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->ActiveNode).field0_0x0 = (param_1->ActiveNode).field0_0x0;
  this->InstanceIdIndex = param_1->InstanceIdIndex;
  (this->ActiveNodeType).Value = (param_1->ActiveNodeType).Value;
  TDelegate<void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->DeactivationNotify,&param_1->DeactivationNotify);
  pTVar1 = &param_1->ActiveAuxNodes;
  pTVar2 = &this->ActiveAuxNodes;
  if (pTVar2 != pTVar1) {
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ActiveAuxNodes).ArrayNum = (param_1->ActiveAuxNodes).ArrayNum;
    (this->ActiveAuxNodes).ArrayMax = (param_1->ActiveAuxNodes).ArrayMax;
    (param_1->ActiveAuxNodes).ArrayNum = 0;
    (param_1->ActiveAuxNodes).ArrayMax = 0;
  }
  pTVar3 = &param_1->ParallelTasks;
  pTVar4 = &this->ParallelTasks;
  if (pTVar4 != pTVar3) {
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParallelTasks).ArrayNum = (param_1->ParallelTasks).ArrayNum;
    (this->ParallelTasks).ArrayMax = (param_1->ParallelTasks).ArrayMax;
    (param_1->ParallelTasks).ArrayNum = 0;
    (param_1->ParallelTasks).ArrayMax = 0;
  }
  pTVar5 = &param_1->InstanceMemory;
  pTVar6 = &this->InstanceMemory;
  if (pTVar6 != pTVar5) {
    pFVar9 = (pTVar6->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InstanceMemory).ArrayNum = (param_1->InstanceMemory).ArrayNum;
    (this->InstanceMemory).ArrayMax = (param_1->InstanceMemory).ArrayMax;
    (param_1->InstanceMemory).ArrayNum = 0;
    (param_1->InstanceMemory).ArrayMax = 0;
  }
  this->bIteratingNodes = param_1->bIteratingNodes;
  this->ParallelTaskIndex = param_1->ParallelTaskIndex;
  IncMemoryStats(this);
  FVar12 = StatPtr_STAT_AI_BehaviorTree_NumInstances;
  if (StatPtr_STAT_AI_BehaviorTree_NumInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)0x0) {
    pFVar11 = ::FName::FName(&local_res8,"STAT_AI_BehaviorTree_NumInstances");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumInstances,
                        *pFVar11,L"Num Instances","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar12;
  local_res8.ComparisonIndex = FVar10.ComparisonIndex.Value;
  local_res8.Number = FVar10.Number;
  FThreadStats::AddMessage<__int64>(FVar10,Add,1,false);
  return this;
}

// AddToActiveAuxNodes @ 146ed36a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBehaviorTreeInstance::AddToActiveAuxNodes
          (FBehaviorTreeInstance *this,UBehaviorTreeComponent *param_1,UBTAuxiliaryNode *param_2)

{
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)param_2);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,L"%hs %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  AddToActiveAuxNodesImpl(this,param_2);
  return;
}

// AddToActiveAuxNodes @ 146ed3740

void __thiscall
FBehaviorTreeInstance::AddToActiveAuxNodes(FBehaviorTreeInstance *this,UBTAuxiliaryNode *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackX_8 [8];
  UBTAuxiliaryNode *apUStack_18 [2];
  
  if (this->bIteratingNodes != false) {
    auStackX_8[0] = 0;
    `FBehaviorTreeInstance::AddToActiveAuxNodesImpl'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  DecMemoryStats(this);
  apUStack_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTAuxiliaryNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ActiveAuxNodes).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)apUStack_18) &&
     ((FScriptContainerElement *)apUStack_18 <
      pFVar2 + (longlong)(this->ActiveAuxNodes).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ActiveAuxNodes).ArrayNum;
  piVar1 = &(this->ActiveAuxNodes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ActiveAuxNodes).AllocatorInstance,piVar1);
  }
  (this->ActiveAuxNodes).ArrayNum = iVar5 + 1;
  *(UBTAuxiliaryNode **)((this->ActiveAuxNodes).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       apUStack_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (apUStack_18[0] != (UBTAuxiliaryNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apUStack_18[0]);
  }
  IncMemoryStats(this);
  return;
}

// AddToActiveAuxNodesImpl @ 146ed3750

void __thiscall
FBehaviorTreeInstance::AddToActiveAuxNodesImpl
          (FBehaviorTreeInstance *this,UBTAuxiliaryNode *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 local_res8 [8];
  UBTAuxiliaryNode *local_18 [2];
  
  if (this->bIteratingNodes != false) {
    local_res8[0] = 0;
    `FBehaviorTreeInstance::AddToActiveAuxNodesImpl'::__l2::<lambda_1>::operator()(local_res8);
  }
  DecMemoryStats(this);
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTAuxiliaryNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ActiveAuxNodes).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->ActiveAuxNodes).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ActiveAuxNodes).ArrayNum;
  piVar1 = &(this->ActiveAuxNodes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ActiveAuxNodes).AllocatorInstance,piVar1);
  }
  (this->ActiveAuxNodes).ArrayNum = iVar5 + 1;
  *(UBTAuxiliaryNode **)((this->ActiveAuxNodes).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UBTAuxiliaryNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  IncMemoryStats(this);
  return;
}

// AddToParallelTasks @ 146ed3880

void __thiscall
FBehaviorTreeInstance::AddToParallelTasks
          (FBehaviorTreeInstance *this,FBehaviorTreeParallelTask *param_1)

{
  int *piVar1;
  FBehaviorTreeParallelTask *pFVar2;
  UBTTaskNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if (this->ParallelTaskIndex != -1) {
    local_res8[0] = 0;
    `FBehaviorTreeInstance::AddToParallelTasks'::__l2::<lambda_1>::operator()(local_res8);
  }
  DecMemoryStats(this);
  pFVar2 = (FBehaviorTreeParallelTask *)(this->ParallelTasks).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->ParallelTasks).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ParallelTasks).ArrayNum;
  piVar1 = &(this->ParallelTasks).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ParallelTasks).AllocatorInstance,piVar1);
  }
  pFVar7 = (this->ParallelTasks).AllocatorInstance.Data;
  (this->ParallelTasks).ArrayNum = iVar6 + 1;
  pFVar7 = pFVar7 + (longlong)iVar6 * 0x10;
  pUVar3 = (param_1->TaskNode).field0_0x0.DebugPtr;
  *(UBTTaskNode **)pFVar7 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UBTTaskNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(Type *)(pFVar7 + 8) = param_1->Status;
  IncMemoryStats(this);
  return;
}

// Cleanup @ 146ed5bb0

void __thiscall
FBehaviorTreeInstance::Cleanup
          (FBehaviorTreeInstance *this,UBehaviorTreeComponent *param_1,Type param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  FScriptContainerElement *_Src;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FBehaviorTreeInstance *local_38;
  UBehaviorTreeComponent *local_30;
  
  piVar2 = &(param_1->KnownInstances).ArrayNum;
  if (((int)(uint)this->InstanceIdIndex < *piVar2) ||
     (local_38 = this, local_30 = param_1,
     bVar9 = `FBehaviorTreeInstance::Cleanup'::__l3::<lambda_1>::operator()(&local_38), bVar9)) {
    bVar3 = this->InstanceIdIndex;
    if (((param_1->KnownInstances).ArrayNum <= (int)(uint)bVar3) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (param_1->KnownInstances).AllocatorInstance.Data;
    if (-1 < *(int *)(pFVar5 + (ulonglong)bVar3 * 0x38 + 0x30)) {
      bVar4 = this->InstanceIdIndex;
      iVar13 = (param_1->NodeInstances).ArrayNum;
      iVar11 = bVar4 + 1;
      if (iVar11 < *piVar2) {
        if (((param_1->KnownInstances).ArrayNum <= iVar11) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (param_1->KnownInstances).AllocatorInstance.Data;
        lVar12 = (ulonglong)bVar4 * 0x38;
        if (*(int *)(pFVar6 + lVar12 + 0x68) < iVar13) {
          iVar13 = *(int *)(pFVar6 + lVar12 + 0x68);
        }
      }
      uVar15 = (ulonglong)*(int *)(pFVar5 + (ulonglong)bVar3 * 0x38 + 0x30);
      uVar16 = uVar15;
      for (; (longlong)uVar15 < (longlong)iVar13; uVar15 = uVar15 + 1) {
        uVar14 = (uint)uVar16;
        uVar10 = 0;
        if ((int)uVar14 < (param_1->NodeInstances).ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar7 = *(longlong **)((param_1->NodeInstances).AllocatorInstance.Data + uVar15 * 8);
        (**(code **)(*plVar7 + 0x2e0))(plVar7,param_1);
        uVar16 = (ulonglong)(uVar14 + 1);
      }
    }
    CleanupNodes(this,param_1,(this->RootNode).field0_0x0.DebugPtr,param_2);
    pFVar6 = pFVar5 + (ulonglong)bVar3 * 0x38 + 0x20;
    if (param_2 == Destroy) {
      *(undefined4 *)(pFVar5 + (ulonglong)bVar3 * 0x38 + 0x28) = 0;
      if (*(int *)(pFVar5 + (ulonglong)bVar3 * 0x38 + 0x2c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)pFVar6,0,
                   (int *)(pFVar5 + (ulonglong)bVar3 * 0x38 + 0x2c));
      }
    }
    else if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)pFVar6 != &this->InstanceMemory) {
      iVar13 = (this->InstanceMemory).ArrayNum;
      pFVar1 = pFVar5 + (ulonglong)bVar3 * 0x38 + 0x2c;
      _Src = (this->InstanceMemory).AllocatorInstance.Data;
      iVar11 = *(int *)pFVar1;
      *(int *)(pFVar5 + (ulonglong)bVar3 * 0x38 + 0x28) = iVar13;
      if ((iVar13 == 0) && (iVar11 == 0)) {
        *(int *)pFVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar13,iVar11,(ForAnyElementType *)pFVar6,iVar13,(int *)pFVar1);
        if (iVar13 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar6->field_0x0,_Src,(longlong)iVar13);
        }
      }
    }
  }
  return;
}

// CleanupNodes @ 146ed5fa0

void __thiscall
FBehaviorTreeInstance::CleanupNodes
          (FBehaviorTreeInstance *this,UBehaviorTreeComponent *param_1,UBTCompositeNode *param_2,
          Type param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UBTNode *pUVar6;
  UBTCompositeNode *pUVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint local_48;
  longlong local_40;
  
  uVar8 = 0;
  pTVar1 = &this->InstanceMemory;
  if (0 < (param_2->Services).ArrayNum) {
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (param_2->Services).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = *(UBTNode **)((param_2->Services).AllocatorInstance.Data + lVar11);
      uVar5 = 0;
      if ((int)uVar8 < (param_2->Services).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      lVar2 = *(longlong *)((param_2->Services).AllocatorInstance.Data + lVar11);
      if (((this->InstanceMemory).ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = pFVar10 + *(ushort *)(lVar2 + 0x52);
      if (pUVar6->bCreateNodeInstance != '\0') {
        pUVar6 = UBTNode::GetNodeInstance(pUVar6,param_1,(uchar *)pFVar10);
      }
      if (pUVar6 != (UBTNode *)0x0) {
        (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,param_1,pFVar10,param_3);
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar8 < (param_2->Services).ArrayNum);
  }
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  if (((this->InstanceMemory).ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = pFVar10 + *(ushort *)((longlong)&param_2->_padding_ + 2);
  pUVar7 = param_2;
  if ((param_2->_padding_ & 0x40000000000) != 0) {
    pUVar7 = (UBTCompositeNode *)
             UBTNode::GetNodeInstance((UBTNode *)param_2,param_1,(uchar *)pFVar10);
  }
  if (pUVar7 != (UBTCompositeNode *)0x0) {
    (**(code **)(pUVar7->_padding_ + 0x2c0))(pUVar7,param_1,pFVar10,param_3);
  }
  local_48 = 0;
  if (0 < (param_2->Children).ArrayNum) {
    local_40 = 0;
    do {
      uVar8 = 0;
      if ((int)local_48 < (param_2->Children).ArrayNum) {
        uVar8 = ~local_48 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = 0;
      pFVar10 = (param_2->Children).AllocatorInstance.Data + local_40;
      if (0 < *(int *)(pFVar10 + 0x18)) {
        lVar11 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < *(int *)(pFVar10 + 0x18)) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar6 = *(UBTNode **)(lVar11 + *(longlong *)(pFVar10 + 0x10));
          uVar5 = 0;
          if ((int)uVar8 < *(int *)(pFVar10 + 0x18)) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = (pTVar1->AllocatorInstance).Data;
          lVar2 = *(longlong *)(lVar11 + *(longlong *)(pFVar10 + 0x10));
          if (((this->InstanceMemory).ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = pFVar9 + *(ushort *)(lVar2 + 0x52);
          if (pUVar6->bCreateNodeInstance != '\0') {
            pUVar6 = UBTNode::GetNodeInstance(pUVar6,param_1,(uchar *)pFVar9);
          }
          if (pUVar6 != (UBTNode *)0x0) {
            (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,param_1,pFVar9,param_3);
          }
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 8;
        } while ((int)uVar8 < *(int *)(pFVar10 + 0x18));
      }
      if (*(UBTCompositeNode **)pFVar10 == (UBTCompositeNode *)0x0) {
        pUVar6 = *(UBTNode **)(pFVar10 + 8);
        if (pUVar6 != (UBTNode *)0x0) {
          uVar8 = 0;
          if (0 < (int)pUVar6[1]._padding_) {
            lVar11 = 0;
            do {
              uVar5 = 0;
              if ((int)uVar8 < (int)pUVar6[1]._padding_) {
                uVar5 = ~uVar8 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar2 = *(longlong *)(pFVar10 + 8);
              pUVar6 = *(UBTNode **)(lVar11 + pUVar6[1]._padding_);
              uVar5 = 0;
              if ((int)uVar8 < *(int *)(lVar2 + 0x60)) {
                uVar5 = ~uVar8 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar9 = (pTVar1->AllocatorInstance).Data;
              lVar2 = *(longlong *)(lVar11 + *(longlong *)(lVar2 + 0x58));
              if (((this->InstanceMemory).ArrayNum < 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar9 = pFVar9 + *(ushort *)(lVar2 + 0x52);
              if (pUVar6->bCreateNodeInstance != '\0') {
                pUVar6 = UBTNode::GetNodeInstance(pUVar6,param_1,(uchar *)pFVar9);
              }
              if (pUVar6 != (UBTNode *)0x0) {
                (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,param_1,pFVar9,param_3);
              }
              pUVar6 = *(UBTNode **)(pFVar10 + 8);
              uVar8 = uVar8 + 1;
              lVar11 = lVar11 + 8;
            } while ((int)uVar8 < (int)pUVar6[1]._padding_);
          }
          pFVar10 = (pTVar1->AllocatorInstance).Data;
          if (((this->InstanceMemory).ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar10 = pFVar10 + pUVar6->MemoryOffset;
          if (pUVar6->bCreateNodeInstance != '\0') {
            pUVar6 = UBTNode::GetNodeInstance(pUVar6,param_1,(uchar *)pFVar10);
          }
          if (pUVar6 != (UBTNode *)0x0) {
            (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,param_1,pFVar10,param_3);
          }
        }
      }
      else {
        CleanupNodes(this,param_1,*(UBTCompositeNode **)pFVar10,param_3);
      }
      local_40 = local_40 + 0x30;
      local_48 = local_48 + 1;
    } while ((int)local_48 < (param_2->Children).ArrayNum);
  }
  return;
}

// DeactivateNodes @ 146ed9230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBehaviorTreeInstance::DeactivateNodes
          (FBehaviorTreeInstance *this,FBehaviorTreeSearchData *param_1,ushort param_2)

{
  int *piVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  UBTNode *pUVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  FString local_88;
  FString local_78;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_68;
  UObject *local_60;
  ushort local_58;
  undefined1 local_56;
  byte local_55;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_50;
  undefined8 local_48;
  ushort local_40;
  undefined1 local_3e;
  byte local_3d;
  
  uVar12 = (param_1->PendingUpdates).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar11 = (longlong)(int)uVar12 * 0x18;
    do {
      uVar14 = ~uVar12 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar12 < (param_1->PendingUpdates).ArrayNum) {
        uVar5 = uVar14;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (param_1->PendingUpdates).AllocatorInstance.Data;
      if ((*(ushort *)(pFVar6 + lVar11 + 0x10) == param_2) &&
         (pFVar6[lVar11 + 0x12] == (FScriptContainerElement)0x1)) {
        if (FVisualLogger::bIsRecording != 0) {
          pUVar8 = *(UBTNode **)(pFVar6 + lVar11);
          if (pUVar8 == (UBTNode *)0x0) {
            pUVar8 = *(UBTNode **)(pFVar6 + lVar11 + 8);
          }
          UBehaviorTreeTypes::DescribeNodeHelper(&local_78,pUVar8);
          UBehaviorTreeTypes::DescribeNodeUpdateMode(&local_88,Remove);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                     Verbose,L"Search node update[%s]: %s");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        uVar5 = 0;
        if ((int)uVar12 < (param_1->PendingUpdates).ArrayNum) {
          uVar5 = uVar14;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = (param_1->PendingUpdates).AllocatorInstance.Data + lVar11;
        iVar7 = (param_1->PendingUpdates).ArrayNum + ~uVar12;
        if (iVar7 != 0) {
          memmove(pFVar6,pFVar6 + 0x18,(longlong)iVar7 * 0x18);
        }
        piVar1 = &(param_1->PendingUpdates).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar11 = lVar11 + -0x18;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  uVar10 = 0;
  uVar12 = 0;
  uVar9 = uVar10;
  uVar13 = uVar10;
  if (0 < (this->ParallelTasks).ArrayNum) {
    do {
      uVar14 = (uint)uVar9;
      uVar5 = uVar12;
      if ((int)uVar14 < (this->ParallelTasks).ArrayNum) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->ParallelTasks).AllocatorInstance.Data;
      pUVar2 = *(UObject **)(pFVar6 + uVar13);
      if ((pUVar2 != (UObject *)0x0) && (*(int *)(pFVar6 + uVar13 + 8) == 0)) {
        local_68.DebugPtr = (UBTAuxiliaryNode *)0x0;
        local_60 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_55 = local_55 & 0xfc;
        local_56 = 2;
        local_58 = param_2;
        FBehaviorTreeSearchData::AddUniqueUpdate
                  (param_1,(FBehaviorTreeSearchUpdate *)&local_68.ObjectPtr);
      }
      uVar9 = (ulonglong)(uVar14 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar14 + 1) < (this->ParallelTasks).ArrayNum);
  }
  uVar9 = uVar10;
  if (0 < (this->ActiveAuxNodes).ArrayNum) {
    do {
      uVar14 = (uint)uVar10;
      uVar5 = uVar12;
      if ((int)uVar14 < (this->ActiveAuxNodes).ArrayNum) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->ActiveAuxNodes).AllocatorInstance.Data + uVar9) != 0) {
        uVar5 = uVar12;
        if ((int)uVar14 < (this->ActiveAuxNodes).ArrayNum) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_50 = (TObjectPtr<UBTAuxiliaryNode>_u_0)
                   ((TObjectPtr<UBTAuxiliaryNode>_u_0 *)
                   ((this->ActiveAuxNodes).AllocatorInstance.Data + uVar9))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_50.DebugPtr != (UBTAuxiliaryNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_50.DebugPtr);
        }
        local_3d = local_3d & 0xfc;
        local_48 = 0;
        local_3e = 2;
        local_40 = param_2;
        FBehaviorTreeSearchData::AddUniqueUpdate
                  (param_1,(FBehaviorTreeSearchUpdate *)&local_50.ObjectPtr);
      }
      uVar10 = (ulonglong)(uVar14 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar14 + 1) < (this->ActiveAuxNodes).ArrayNum);
  }
  return;
}

// DecMemoryStats @ 146ed95f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBehaviorTreeInstance::DecMemoryStats(FBehaviorTreeInstance *this)

{
  uint uVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_InstanceMemory> FVar4;
  FName local_res8 [4];
  
  uVar1 = (this->InstanceMemory).ArrayMax + 0x68 +
          ((this->ActiveAuxNodes).ArrayMax + (this->ParallelTasks).ArrayMax * 2) * 8;
  if (uVar1 != 0) {
    FVar4 = StatPtr_STAT_AI_BehaviorTree_InstanceMemory;
    if (StatPtr_STAT_AI_BehaviorTree_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_InstanceMemory>)0x0) {
      pFVar3 = ::FName::FName(local_res8,"STAT_AI_BehaviorTree_InstanceMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_InstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_InstanceMemory,
                         *pFVar3,L"Instance memory","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                         L"Behavior Tree",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    local_res8[0].ComparisonIndex = FVar2.ComparisonIndex.Value;
    local_res8[0].Number = FVar2.Number;
    FThreadStats::AddMessage<__int64>(FVar2,Subtract,(ulonglong)uVar1,false);
    return;
  }
  return;
}

// ExecuteOnEachAuxNode @ 146ee0980

void __thiscall
FBehaviorTreeInstance::ExecuteOnEachAuxNode
          (FBehaviorTreeInstance *this,TFunctionRef<void___cdecl(UBTAuxiliaryNode_const_&)> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  bVar2 = this->bIteratingNodes;
  this->bIteratingNodes = true;
  pFVar7 = (this->ActiveAuxNodes).AllocatorInstance.Data;
  iVar3 = (this->ActiveAuxNodes).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ActiveAuxNodes).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UBTAuxiliaryNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    lVar4 = *(longlong *)pFVar7;
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AuxNode != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeTypes.cpp"
                         ,0x16b,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar4);
    pFVar7 = pFVar7 + 8;
  }
  this->bIteratingNodes = bVar2;
  return;
}

// ExecuteOnEachParallelTask @ 146ee0a30

void __thiscall
FBehaviorTreeInstance::ExecuteOnEachParallelTask
          (FBehaviorTreeInstance *this,
          TFunctionRef<void___cdecl(FBehaviorTreeParallelTask_const_&,int)> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint local_res8 [2];
  
  uVar7 = 0;
  if (0 < (this->ParallelTasks).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->ParallelTasks).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (this->ParallelTasks).AllocatorInstance.Data + lVar9;
      lVar2 = *(longlong *)pFVar8;
      if ((this->ParallelTaskIndex != -1) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2323149021587177094>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeTypes.cpp"
                             ,0x17a,"ParallelTaskIndex == INDEX_NONE"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = this->ParallelTaskIndex;
      this->ParallelTaskIndex = uVar7;
      local_res8[0] = uVar7;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar8,local_res8);
      if (((int)uVar7 < 0) || (iVar6 = (this->ParallelTasks).ArrayNum, iVar6 <= (int)uVar7)) {
        iVar6 = (this->ParallelTasks).ArrayNum;
LAB_146ee0b34:
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + -0x10;
      }
      else {
        if (*(longlong *)pFVar8 == 0) {
          bVar4 = lVar2 == 0;
        }
        else {
          bVar4 = *(longlong *)pFVar8 == lVar2;
        }
        if (!bVar4) goto LAB_146ee0b34;
      }
      uVar7 = uVar7 + 1;
      this->ParallelTaskIndex = iVar1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < iVar6);
  }
  return;
}

// GetAllocatedSize @ 146ee39f0

uint __thiscall FBehaviorTreeInstance::GetAllocatedSize(FBehaviorTreeInstance *this)

{
  return (this->InstanceMemory).ArrayMax +
         ((this->ActiveAuxNodes).ArrayMax + (this->ParallelTasks).ArrayMax * 2) * 8 + 0x68;
}

// HasActiveNode @ 146ef02e0

bool __thiscall FBehaviorTreeInstance::HasActiveNode(FBehaviorTreeInstance *this,ushort param_1)

{
  UBTNode *pUVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  pUVar1 = (this->ActiveNode).field0_0x0.DebugPtr;
  if ((pUVar1 != (UBTNode *)0x0) && (pUVar1->ExecutionIndex == param_1)) {
    return (this->ActiveNodeType).Value == '\x01';
  }
  uVar9 = 0;
  if (0 < (this->ParallelTasks).ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->ParallelTasks).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (this->ParallelTasks).AllocatorInstance.Data;
      lVar3 = *(longlong *)(pFVar2 + lVar8);
      if ((lVar3 != 0) && (*(ushort *)(lVar3 + 0x50) == param_1)) {
        return *(int *)(pFVar2 + lVar8 + 8) == 0;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar9 < (this->ParallelTasks).ArrayNum);
  }
  uVar9 = 0;
  if (0 < (this->ActiveAuxNodes).ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->ActiveAuxNodes).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(longlong *)((this->ActiveAuxNodes).AllocatorInstance.Data + lVar8) != 0) {
        uVar7 = 0;
        if ((int)uVar9 < (this->ActiveAuxNodes).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if (*(ushort *)(*(longlong *)((this->ActiveAuxNodes).AllocatorInstance.Data + lVar8) + 0x50)
            == param_1) {
          return true;
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar9 < (this->ActiveAuxNodes).ArrayNum);
  }
  return false;
}

// IncMemoryStats @ 146ef0820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBehaviorTreeInstance::IncMemoryStats(FBehaviorTreeInstance *this)

{
  uint uVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_InstanceMemory> FVar4;
  FName local_res8 [4];
  
  uVar1 = (this->InstanceMemory).ArrayMax + 0x68 +
          ((this->ActiveAuxNodes).ArrayMax + (this->ParallelTasks).ArrayMax * 2) * 8;
  if (uVar1 != 0) {
    FVar4 = StatPtr_STAT_AI_BehaviorTree_InstanceMemory;
    if (StatPtr_STAT_AI_BehaviorTree_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_InstanceMemory>)0x0) {
      pFVar3 = ::FName::FName(local_res8,"STAT_AI_BehaviorTree_InstanceMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_InstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_InstanceMemory,
                         *pFVar3,L"Instance memory","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                         L"Behavior Tree",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    local_res8[0].ComparisonIndex = FVar2.ComparisonIndex.Value;
    local_res8[0].Number = FVar2.Number;
    FThreadStats::AddMessage<__int64>(FVar2,Add,(ulonglong)uVar1,false);
    return;
  }
  return;
}

// Initialize @ 146ef0a90

void __thiscall
FBehaviorTreeInstance::Initialize
          (FBehaviorTreeInstance *this,UBehaviorTreeComponent *param_1,UBTCompositeNode *param_2,
          int *param_3,Type param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UBTNode *pUVar6;
  UClass *pUVar7;
  UBTNode *pUVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  longlong local_48;
  
  uVar9 = 0;
  if (0 < (param_2->Services).ArrayNum) {
    lVar12 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar9 < (param_2->Services).ArrayNum) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = *(UBTNode **)((param_2->Services).AllocatorInstance.Data + lVar12);
      uVar13 = 0;
      if ((int)uVar9 < (param_2->Services).ArrayNum) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->InstanceMemory).AllocatorInstance.Data;
      lVar2 = *(longlong *)((param_2->Services).AllocatorInstance.Data + lVar12);
      if (((this->InstanceMemory).ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UBTNode::InitializeInSubtree
                (pUVar6,param_1,(uchar *)(pFVar10 + *(ushort *)(lVar2 + 0x52)),param_3,param_4);
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar9 < (param_2->Services).ArrayNum);
  }
  pFVar10 = (this->InstanceMemory).AllocatorInstance.Data;
  if (((this->InstanceMemory).ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = pFVar10 + *(ushort *)((longlong)&param_2->_padding_ + 2);
  UBTNode::InitializeInSubtree((UBTNode *)param_2,param_1,(uchar *)pFVar10,param_3,param_4);
  pUVar6 = UBTNode::GetNodeInstance((UBTNode *)param_2,param_1,(uchar *)pFVar10);
  if (pUVar6 != (UBTNode *)0x0) {
    pUVar7 = UBTCompositeNode::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      *(ushort *)((longlong)&pUVar6[1]._padding_ + 4) = param_2->LastExecutionIndex;
    }
  }
  uVar9 = 0;
  if (0 < (param_2->Children).ArrayNum) {
    local_48 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar9 < (param_2->Children).ArrayNum) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = 0;
      pFVar10 = (param_2->Children).AllocatorInstance.Data + local_48;
      if (0 < *(int *)(pFVar10 + 0x18)) {
        lVar12 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar13 < *(int *)(pFVar10 + 0x18)) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = (this->InstanceMemory).AllocatorInstance.Data;
          pUVar6 = *(UBTNode **)(lVar12 + *(longlong *)(pFVar10 + 0x10));
          if (((this->InstanceMemory).ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = pFVar11 + pUVar6->MemoryOffset;
          UBTNode::InitializeInSubtree(pUVar6,param_1,(uchar *)pFVar11,param_3,param_4);
          pUVar8 = UBTNode::GetNodeInstance(pUVar6,param_1,(uchar *)pFVar11);
          if (pUVar8 != (UBTNode *)0x0) {
            pUVar7 = UBTDecorator::StaticClass();
            iVar1 = (int)pUVar7->_padding_;
            if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar7->_padding_)) {
              *(undefined1 *)((longlong)&pUVar8[1]._padding_ + 1) =
                   *(undefined1 *)((longlong)&pUVar6[1]._padding_ + 1);
            }
          }
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 8;
        } while ((int)uVar13 < *(int *)(pFVar10 + 0x18));
      }
      if (*(UBTCompositeNode **)pFVar10 == (UBTCompositeNode *)0x0) {
        pUVar6 = *(UBTNode **)(pFVar10 + 8);
        if (pUVar6 != (UBTNode *)0x0) {
          uVar13 = 0;
          if (0 < (int)pUVar6[1]._padding_) {
            lVar12 = 0;
            do {
              uVar5 = 0;
              if ((int)uVar13 < (int)pUVar6[1]._padding_) {
                uVar5 = ~uVar13 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar11 = (this->InstanceMemory).AllocatorInstance.Data;
              pUVar6 = *(UBTNode **)(lVar12 + pUVar6[1]._padding_);
              if (((this->InstanceMemory).ArrayNum < 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar11 = pFVar11 + pUVar6->MemoryOffset;
              UBTNode::InitializeInSubtree(pUVar6,param_1,(uchar *)pFVar11,param_3,param_4);
              pUVar8 = UBTNode::GetNodeInstance(pUVar6,param_1,(uchar *)pFVar11);
              if (pUVar8 != (UBTNode *)0x0) {
                pUVar7 = UBTService::StaticClass();
                iVar1 = (int)pUVar7->_padding_;
                if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    == &pUVar7->_padding_)) {
                  *(undefined1 *)((longlong)&pUVar8[1]._padding_ + 1) =
                       *(undefined1 *)((longlong)&pUVar6[1]._padding_ + 1);
                }
              }
              pUVar6 = *(UBTNode **)(pFVar10 + 8);
              uVar13 = uVar13 + 1;
              lVar12 = lVar12 + 8;
            } while ((int)uVar13 < (int)pUVar6[1]._padding_);
          }
          pFVar10 = (this->InstanceMemory).AllocatorInstance.Data;
          if (((this->InstanceMemory).ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UBTNode::InitializeInSubtree
                    (pUVar6,param_1,(uchar *)(pFVar10 + pUVar6->MemoryOffset),param_3,param_4);
        }
      }
      else {
        Initialize(this,param_1,*(UBTCompositeNode **)pFVar10,param_3,param_4);
      }
      local_48 = local_48 + 0x30;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (param_2->Children).ArrayNum);
  }
  return;
}

// MarkParallelTaskAsAbortingAt @ 146ef4270

void __thiscall
FBehaviorTreeInstance::MarkParallelTaskAsAbortingAt(FBehaviorTreeInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 < 0) || ((this->ParallelTasks).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParallelTasks.IsValidIndex(TaskIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeTypes.cpp"
                       ,0x158,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->ParallelTasks).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)((this->ParallelTasks).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8) = 1;
  return;
}

// RemoveFromActiveAuxNodes @ 146efd600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBehaviorTreeInstance::RemoveFromActiveAuxNodes
          (FBehaviorTreeInstance *this,UBehaviorTreeComponent *param_1,UBTAuxiliaryNode *param_2)

{
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)param_2);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,L"%hs %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  RemoveFromActiveAuxNodesImpl(this,param_2);
  return;
}

// RemoveFromActiveAuxNodes @ 146efd6a0

void __thiscall
FBehaviorTreeInstance::RemoveFromActiveAuxNodes
          (FBehaviorTreeInstance *this,UBTAuxiliaryNode *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackX_8 [8];
  
  if (this->bIteratingNodes != false) {
    auStackX_8[0] = 0;
    `FBehaviorTreeInstance::RemoveFromActiveAuxNodesImpl'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  DecMemoryStats(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTAuxiliaryNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->ActiveAuxNodes).AllocatorInstance.Data;
  iVar6 = (this->ActiveAuxNodes).ArrayNum;
  pFVar9 = pFVar3;
  do {
    if (pFVar9 == pFVar3 + (longlong)iVar6 * 8) {
LAB_146efd7e4:
      IncMemoryStats(this);
      return;
    }
    if (*(UBTAuxiliaryNode **)pFVar9 == param_1) {
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
      if (uVar8 != 0xffffffff) {
        uVar7 = 0;
        if ((int)(uVar8 + 1) <= iVar6) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->ActiveAuxNodes).ArrayNum;
        pFVar3 = (this->ActiveAuxNodes).AllocatorInstance.Data;
        iVar6 = iVar2 + ~uVar8;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                  (longlong)iVar6 << 3);
        }
        piVar1 = &(this->ActiveAuxNodes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->ActiveAuxNodes).AllocatorInstance,(this->ActiveAuxNodes).ArrayNum,
                   &(this->ActiveAuxNodes).ArrayMax);
      }
      goto LAB_146efd7e4;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// RemoveFromActiveAuxNodesImpl @ 146efd6b0

void __thiscall
FBehaviorTreeInstance::RemoveFromActiveAuxNodesImpl
          (FBehaviorTreeInstance *this,UBTAuxiliaryNode *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  if (this->bIteratingNodes != false) {
    local_res8[0] = 0;
    `FBehaviorTreeInstance::RemoveFromActiveAuxNodesImpl'::__l2::<lambda_1>::operator()(local_res8);
  }
  DecMemoryStats(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTAuxiliaryNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->ActiveAuxNodes).AllocatorInstance.Data;
  iVar6 = (this->ActiveAuxNodes).ArrayNum;
  pFVar9 = pFVar3;
  do {
    if (pFVar9 == pFVar3 + (longlong)iVar6 * 8) {
LAB_146efd7e4:
      IncMemoryStats(this);
      return;
    }
    if (*(UBTAuxiliaryNode **)pFVar9 == param_1) {
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
      if (uVar8 != 0xffffffff) {
        uVar7 = 0;
        if ((int)(uVar8 + 1) <= iVar6) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->ActiveAuxNodes).ArrayNum;
        pFVar3 = (this->ActiveAuxNodes).AllocatorInstance.Data;
        iVar6 = iVar2 + ~uVar8;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                  (longlong)iVar6 << 3);
        }
        piVar1 = &(this->ActiveAuxNodes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->ActiveAuxNodes).AllocatorInstance,(this->ActiveAuxNodes).ArrayNum,
                   &(this->ActiveAuxNodes).ArrayMax);
      }
      goto LAB_146efd7e4;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// RemoveParallelTaskAt @ 146efd800

void __thiscall FBehaviorTreeInstance::RemoveParallelTaskAt(FBehaviorTreeInstance *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  undefined1 local_res10 [8];
  
  if ((param_1 < 0) || ((this->ParallelTasks).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParallelTasks.IsValidIndex(TaskIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeTypes.cpp"
                       ,0x14d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->ParallelTaskIndex != -1) && (this->ParallelTaskIndex != param_1)) {
    local_res10[0] = 0;
    `FBehaviorTreeInstance::RemoveParallelTaskAt'::__l2::<lambda_1>::operator()(local_res10);
  }
  DecMemoryStats(this);
  uVar4 = 0;
  if (param_1 + 1 <= (this->ParallelTasks).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  _Dst = (this->ParallelTasks).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  iVar5 = (this->ParallelTasks).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 4);
  }
  piVar1 = &(this->ParallelTasks).ArrayNum;
  *piVar1 = *piVar1 + -1;
  IncMemoryStats(this);
  return;
}

// ResetActiveAuxNodes @ 146efda80

void __thiscall FBehaviorTreeInstance::ResetActiveAuxNodes(FBehaviorTreeInstance *this)

{
  undefined1 local_res8 [32];
  
  if (this->bIteratingNodes != false) {
    `FBehaviorTreeInstance::ResetActiveAuxNodes'::__l2::<lambda_1>::operator()(local_res8);
  }
  DecMemoryStats(this);
  (this->ActiveAuxNodes).ArrayNum = 0;
  if ((this->ActiveAuxNodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveAuxNodes).AllocatorInstance,0,&(this->ActiveAuxNodes).ArrayMax);
  }
  IncMemoryStats(this);
  return;
}

// SetInstanceMemory @ 146eff980

void __thiscall
FBehaviorTreeInstance::SetInstanceMemory
          (FBehaviorTreeInstance *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  DecMemoryStats(this);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->InstanceMemory,param_1);
  IncMemoryStats(this);
  return;
}

// operator() @ 1504fe8f0

bool __thiscall
`FBehaviorTreeInstance::AddToActiveAuxNodesImpl'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2323149021587177195>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2323149021587177195>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fe930

bool __thiscall
`FBehaviorTreeInstance::AddToParallelTasks'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2323149021587177146>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2323149021587177146>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fe970

bool __thiscall
`FBehaviorTreeInstance::RemoveFromActiveAuxNodesImpl'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2323149021587177172>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2323149021587177172>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fe9b0

bool __thiscall
`FBehaviorTreeInstance::RemoveParallelTaskAt'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2323149021587177136>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2323149021587177136>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fe9f0

bool __thiscall
`FBehaviorTreeInstance::ResetActiveAuxNodes'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2323149021587177154>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2323149021587177154>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fea30

bool __thiscall `FBehaviorTreeInstance::Cleanup'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2323149021587177379>);
  if (bVar2) {
    if (*(longlong *)(**(longlong **)this + 0x40) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x40) + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2323149021587177379>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504feaeb;
    }
  }
  bVar2 = false;
LAB_1504feaeb:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

