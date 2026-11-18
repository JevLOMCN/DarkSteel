// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 8

// StaticStruct @ 14d52a250

UScriptStruct * __cdecl FStateTreeRunParallelStateTreeTask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTask.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask,
                         (UObject *)pUVar1,L"StateTreeRunParallelStateTreeTask");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTask.OuterSingleton;
}

// FStateTreeRunParallelStateTreeTask @ 14d52cb00

FStateTreeRunParallelStateTreeTask * __thiscall
FStateTreeRunParallelStateTreeTask::FStateTreeRunParallelStateTreeTask
          (FStateTreeRunParallelStateTreeTask *this)

{
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)&this->_padding_ + 4) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  this->_padding_ = (longlong)&___7FStateTreeRunParallelStateTreeTask__6B_;
  *(undefined2 *)&this->_padding_ = 0x2a3;
  (this->StateTreeOverrideTag).TagName = (FName)0x0;
  return this;
}

// EnterState @ 14d52eda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EStateTreeRunStatus __thiscall
FStateTreeRunParallelStateTreeTask::EnterState
          (FStateTreeRunParallelStateTreeTask *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  TWeakPtr<FStateTreeInstanceStorage,1> *pTVar1;
  TWeakPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1> *pTVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  UStateTree *pUVar9;
  UStateTree *pUVar10;
  TObjectPtr<UStateTree_const_> TVar11;
  FWeakObjectPtr FVar12;
  FWeakObjectPtr FVar13;
  UScriptStruct *pUVar14;
  code *pcVar15;
  uchar *puVar16;
  EStateTreeRunStatus EVar17;
  FScheduledTickHandle FVar18;
  TObjectPtr<UStateTree_const_>_u_0 *pTVar19;
  TObjectPtr<UStateTree_const_>_u_0 *this_00;
  TArrayView<FStateTreeExecutionFrame_const_,int> *pTVar20;
  TSharedRef<FStateTreeEventQueue,1> *pTVar21;
  FStateTreeWeakExecutionContext *pFVar22;
  UPackage *pUVar23;
  uchar *puVar24;
  undefined4 extraout_var;
  FStateTreeInstanceStorage *pFVar25;
  uint uVar26;
  FStateTreeExecutionFrame *pFVar27;
  FStateTreeExecutionFrame *pFVar28;
  uint uVar29;
  FStateTreeExecutionFrame *pFVar30;
  bool bVar31;
  undefined1 auStack_378 [32];
  TObjectPtr<UScriptStruct_const_>_u_0 local_358;
  uchar *puStack_350;
  FStateTreeInstanceStorage *local_348;
  TReferenceControllerBase<1> *local_340;
  ITemporaryStorage *local_338;
  TReferenceControllerBase<1> *local_330;
  TObjectPtr<UStateTree_const_>_u_0 *local_328;
  TObjectPtr<UScriptStruct_const_>_u_0 local_320;
  undefined8 uStack_318;
  FStateTreeEventQueue *local_310;
  TReferenceControllerBase<1> *pTStack_308;
  int local_300;
  char local_2fc;
  undefined1 local_2f8 [8];
  FStateTreeExecutionContext *local_2f0;
  FStateTreeRunParallelStateTreeTaskInstanceData *local_2e8;
  FName local_2e0;
  FString local_2d8;
  FStartParameters local_2c8;
  TArrayView<FStateTreeExecutionFrame_const_,int> local_290 [3];
  undefined8 local_260;
  TReferenceControllerBase<1> *local_258;
  ITemporaryStorage *apIStack_250 [5];
  FStateTreeWeakExecutionContext local_228;
  FStateTreeExecutionContext local_1e8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_2f0 = param_1;
  pTVar19 = (TObjectPtr<UStateTree_const_>_u_0 *)
            FStateTreeExecutionContext::GetInstanceData<FStateTreeRunParallelStateTreeTask>
                      (param_1,this);
  local_2e8 = (FStateTreeRunParallelStateTreeTaskInstanceData *)pTVar19;
  if (((this->StateTreeOverrideTag).TagName == (FName)0x0) ||
     (this_00 = (TObjectPtr<UStateTree_const_>_u_0 *)
                FStateTreeExecutionContext::GetLinkedStateTreeOverrideForTag
                          (param_1,(FGameplayTag)(this->StateTreeOverrideTag).TagName),
     this_00 == (TObjectPtr<UStateTree_const_>_u_0 *)0x0)) {
    this_00 = pTVar19;
  }
  if (this_00->DebugPtr == (UStateTree *)0x0) {
    return Failed;
  }
  pTVar20 = FStateTreeReadOnlyExecutionContext::GetActiveFrames
                      ((FStateTreeReadOnlyExecutionContext *)param_1,local_290);
  pUVar9 = this_00->DebugPtr;
  pFVar27 = pTVar20->DataPtr;
  pFVar30 = pFVar27 + pTVar20->ArrayNum;
  for (; pFVar28 = (FStateTreeExecutionFrame *)0x0, pFVar27 != pFVar30; pFVar27 = pFVar27 + 1) {
    pUVar10 = (pFVar27->StateTree).field0_0x0.DebugPtr;
    if (pUVar10 == (UStateTree *)0x0) {
      bVar31 = pUVar9 == (UStateTree *)0x0;
    }
    else {
      bVar31 = pUVar10 == pUVar9;
    }
    pFVar28 = pFVar27;
    if (bVar31) break;
  }
  bVar31 = false;
  if (param_1->CurrentlyProcessedFrame != (FStateTreeExecutionFrame *)0x0) {
    pUVar10 = (param_1->CurrentlyProcessedFrame->StateTree).field0_0x0.DebugPtr;
    if (pUVar10 == (UStateTree *)0x0) {
      bVar31 = pUVar9 == (UStateTree *)0x0;
    }
    else {
      bVar31 = pUVar10 == pUVar9;
    }
  }
  if ((pFVar28 != (FStateTreeExecutionFrame *)0x0) || (bVar31)) {
    if ((byte)LogStateTree._0_1_ < 3) {
      return Failed;
    }
    local_2e0.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
    local_2e0.Number = *(uint *)&pUVar9->field_0x1c;
    ::FName::ToString(&local_2e0,&local_2d8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    if (local_2d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return Failed;
    }
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    return Failed;
  }
  if (((FScheduledTickHandle *)(pTVar19 + 8))->Value != 0) {
    FStateTreeMinimalExecutionContext::RemoveScheduledTickRequest
              ((FStateTreeMinimalExecutionContext *)param_1,
               (FScheduledTickHandle)((FScheduledTickHandle *)(pTVar19 + 8))->Value);
  }
  if (param_1->InstanceData != (FStateTreeInstanceData *)0x0) {
    pTVar21 = FStateTreeInstanceData::GetSharedMutableEventQueue(param_1->InstanceData);
    FStateTreeInstanceData::SetSharedEventQueue((FStateTreeInstanceData *)(pTVar19 + 5),pTVar21);
  }
  TVar11.field0_0x0 = (TObjectPtr<UStateTree_const_>_u_0)this_00->DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar11.field0_0x0 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar11.field0_0x0);
  }
  pTVar19[7] = TVar11.field0_0x0;
  FStateTreeExecutionContext::FStateTreeExecutionContext
            (&local_1e8,param_1,(UStateTree *)TVar11.field0_0x0,
             (FStateTreeInstanceData *)(pTVar19 + 5));
  bVar31 = UStateTree::IsReadyToRun((UStateTree *)local_1e8._padding_);
  if (!bVar31) {
    FStateTreeExecutionContext::~FStateTreeExecutionContext(&local_1e8);
    return Failed;
  }
  local_258 = (TReferenceControllerBase<1> *)0x0;
  apIStack_250[0] = (ITemporaryStorage *)0x0;
  local_348 = (FStateTreeInstanceStorage *)0x0;
  local_330 = (TReferenceControllerBase<1> *)0x0;
  pFVar22 = FStateTreeExecutionContext::MakeWeakExecutionContext(param_1,&local_228);
  FVar12 = (pFVar22->Owner).WeakPtr;
  pTVar1 = &pFVar22->Storage;
  FVar13 = (pFVar22->StateTree).WeakPtr;
  if ((TWeakPtr<FStateTreeInstanceStorage,1> *)&local_260 == pTVar1) {
    local_340 = local_258;
  }
  else {
    local_348 = pTVar1->Object;
    local_340 = (pFVar22->Storage).WeakReferenceCount.ReferenceController;
    pTVar1->Object = (FStateTreeInstanceStorage *)0x0;
    (pFVar22->Storage).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  pTVar2 = &pFVar22->TemporaryStorage;
  if ((TWeakPtr<UE::StateTree::ExecutionContext::ITemporaryStorage,1> *)apIStack_250 == pTVar2) {
    local_338 = apIStack_250[0];
  }
  else {
    local_338 = pTVar2->Object;
    local_330 = (pFVar22->TemporaryStorage).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (ITemporaryStorage *)0x0;
    (pFVar22->TemporaryStorage).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  uVar6 = (pFVar22->FrameID).Value;
  uVar7 = (pFVar22->StateID).Value;
  uVar5 = (pFVar22->NodeIndex).Value;
  if (local_228.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &(local_228.TemporaryStorage.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_228.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ +
                  8))();
    }
  }
  if (local_228.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    paVar3 = &(local_228.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_228.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
    }
  }
  FStateTreeReference::ConditionallySyncParameters((FStateTreeReference *)&this_00->ObjectPtr);
  local_328 = this_00 + 1;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_358.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar23 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension,
                         (UObject *)pUVar23,L"StateTreeRunParallelStateTreeExecutionExtension");
  }
  puVar24 = puStack_350;
  pUVar14 = Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
            OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
      OuterSingleton == local_358.DebugPtr) {
    (*(code *)**(undefined8 **)puStack_350)(puStack_350);
  }
  else {
    FInstancedStruct::Reset((FInstancedStruct *)&local_358.ObjectPtr);
    uVar29 = (uint)*(short *)((longlong)&pUVar14->_padding_ + 4);
    uVar26 = (int)pUVar14->_padding_ + -1 + uVar29 & -uVar29;
    if ((int)uVar26 < 1) {
      uVar26 = 1;
    }
    puVar24 = FMemory::Malloc((longlong)(int)uVar26,uVar29);
    local_358.DebugPtr = pUVar14;
    puStack_350 = puVar24;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
  }
  if ((puVar24 == (uchar *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Memory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                          ,0x74,L""), bVar31)) {
    pcVar15 = (code *)swi(3);
    EVar17 = (*pcVar15)();
    return EVar17;
  }
  puVar16 = puStack_350;
  *(undefined ***)puVar24 = &___7FStateTreeRunParallelStateTreeExecutionExtension__6B_;
  *(FWeakObjectPtr *)(puVar24 + 0x10) = FVar13;
  *(FWeakObjectPtr *)(puVar24 + 8) = FVar12;
  *(FStateTreeInstanceStorage **)(puVar24 + 0x18) = local_348;
  *(TReferenceControllerBase<1> **)(puVar24 + 0x20) = local_340;
  *(ITemporaryStorage **)(puVar24 + 0x28) = local_338;
  *(TReferenceControllerBase<1> **)(puVar24 + 0x30) = local_330;
  *(uint *)(puVar24 + 0x38) = uVar6;
  *(uint *)(puVar24 + 0x3c) = uVar7;
  *(ushort *)(puVar24 + 0x40) = uVar5;
  puVar24[0x48] = '\0';
  puVar24[0x49] = '\0';
  puVar24[0x4a] = '\0';
  puVar24[0x4b] = '\0';
  local_320.DebugPtr = local_358.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_358.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_358.DebugPtr);
  }
  local_2fc = '\0';
  local_2c8.GlobalParameters = (FInstancedPropertyBag *)local_328;
  local_358.DebugPtr = (UScriptStruct *)0x0;
  puStack_350 = (uchar *)0x0;
  local_310 = (FStateTreeEventQueue *)0x0;
  pTStack_308 = (TReferenceControllerBase<1> *)0x0;
  local_2c8.ExecutionExtension.InstancedStruct.ScriptStruct.field0_0x0 = local_320;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_320.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_320.DebugPtr);
  }
  local_2c8.SharedEventQueue.Object = local_310;
  local_2c8.ExecutionExtension.InstancedStruct.StructMemory = puVar16;
  local_2c8.SharedEventQueue.SharedReferenceCount.ReferenceController = pTStack_308;
  local_320.DebugPtr = (UScriptStruct *)0x0;
  uStack_318 = 0;
  if (pTStack_308 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_308->SharedReferenceCount = (atomic<int>)((int)pTStack_308->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_2fc != '\0') {
    local_2c8.RandomSeed.TypedValue = local_300;
  }
  local_2c8.RandomSeed.bIsSet = (bool)local_2fc;
  EVar17 = FStateTreeExecutionContext::Start(&local_1e8,&local_2c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_308);
  FInstancedStruct::Reset((FInstancedStruct *)&local_320.ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_358.ObjectPtr);
  FStateTreeReadOnlyExecutionContext::GetNextScheduledTick
            ((FStateTreeReadOnlyExecutionContext *)&local_1e8);
  FVar18 = FStateTreeMinimalExecutionContext::AddScheduledTickRequest
                     ((FStateTreeMinimalExecutionContext *)local_2f0,
                      (FStateTreeScheduledTick)local_2f8);
  uVar6 = *(uint *)CONCAT44(extraout_var,FVar18.Value);
  (local_2e8->ScheduledTickHandle).Value = uVar6;
  pFVar25 = FStateTreeInstanceData::GetMutableStorage(&local_2e8->TreeInstanceData);
  puVar24 = (pFVar25->ExecutionState).ExecutionExtension.InstancedStruct.StructMemory;
  pUVar14 = (pFVar25->ExecutionState).ExecutionExtension.InstancedStruct.ScriptStruct.field0_0x0.
            DebugPtr;
  if ((puVar24 == (uchar *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Memory != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                          ,0xd1,L""), bVar31)) {
    pcVar15 = (code *)swi(3);
    EVar17 = (*pcVar15)();
    return EVar17;
  }
  if ((pUVar14 == (UScriptStruct *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Struct != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                          ,0xd2,L""), bVar31)) {
    pcVar15 = (code *)swi(3);
    EVar17 = (*pcVar15)();
    return EVar17;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar23 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension,
                         (UObject *)pUVar23,L"StateTreeRunParallelStateTreeExecutionExtension");
    if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d52f2d5;
  }
  else {
LAB_14d52f2d5:
    iVar8 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension
                 .OuterSingleton)->_padding_;
    if (((int)pUVar14->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar8 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
         OuterSingleton)->_padding_)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    if (bVar31) goto LAB_14d52f31b;
  }
  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                     ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                      ,0xd3,L"");
  if (bVar31) {
    pcVar15 = (code *)swi(3);
    EVar17 = (*pcVar15)();
    return EVar17;
  }
LAB_14d52f31b:
  *(uint *)(puVar24 + 0x48) = uVar6;
  FStateTreeExecutionContext::~FStateTreeExecutionContext(&local_1e8);
  return EVar17;
}

// ExitState @ 14d52f6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStateTreeRunParallelStateTreeTask::ExitState
          (FStateTreeRunParallelStateTreeTask *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  UStateTree *pUVar1;
  bool bVar2;
  FStateTreeRunParallelStateTreeTaskInstanceData *pFVar3;
  undefined1 auStack_1d8 [32];
  FStateTreeExecutionContext local_1b8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar3 = FStateTreeExecutionContext::GetInstanceData<FStateTreeRunParallelStateTreeTask>
                     (param_1,this);
  pUVar1 = (pFVar3->RunningStateTree).field0_0x0.DebugPtr;
  if (pUVar1 != (UStateTree *)0x0) {
    FStateTreeExecutionContext::FStateTreeExecutionContext
              (&local_1b8,param_1,pUVar1,&pFVar3->TreeInstanceData);
    bVar2 = UStateTree::IsReadyToRun((UStateTree *)local_1b8._padding_);
    if (bVar2) {
      FStateTreeExecutionContext::Stop(&local_1b8,Stopped);
      FStateTreeMinimalExecutionContext::RemoveScheduledTickRequest
                ((FStateTreeMinimalExecutionContext *)param_1,
                 (FScheduledTickHandle)(pFVar3->ScheduledTickHandle).Value);
    }
    FStateTreeExecutionContext::~FStateTreeExecutionContext(&local_1b8);
  }
  return;
}

// GetInstanceDataType @ 14d5304e0

UStruct * __thiscall
FStateTreeRunParallelStateTreeTask::GetInstanceDataType(FStateTreeRunParallelStateTreeTask *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData,
                           (UObject *)pUVar1,L"StateTreeRunParallelStateTreeTaskInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData.
         OuterSingleton;
}

// GetStateTreeToRun @ 14d531150

FStateTreeReference * __thiscall
FStateTreeRunParallelStateTreeTask::GetStateTreeToRun
          (FStateTreeRunParallelStateTreeTask *this,FStateTreeExecutionContext *param_1,
          FStateTreeRunParallelStateTreeTaskInstanceData *param_2)

{
  FStateTreeRunParallelStateTreeTaskInstanceData *pFVar1;
  
  if ((this->StateTreeOverrideTag).TagName != (FName)0x0) {
    pFVar1 = (FStateTreeRunParallelStateTreeTaskInstanceData *)
             FStateTreeExecutionContext::GetLinkedStateTreeOverrideForTag
                       (param_1,(FGameplayTag)(this->StateTreeOverrideTag).TagName);
    if (pFVar1 != (FStateTreeRunParallelStateTreeTaskInstanceData *)0x0) {
      param_2 = pFVar1;
    }
  }
  return &param_2->StateTree;
}

// Tick @ 14d5344c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EStateTreeRunStatus __thiscall
FStateTreeRunParallelStateTreeTask::Tick
          (FStateTreeRunParallelStateTreeTask *this,FStateTreeExecutionContext *param_1,
          float param_2)

{
  UStateTree *pUVar1;
  bool bVar2;
  EStateTreeRunStatus EVar3;
  FStateTreeRunParallelStateTreeTaskInstanceData *pFVar4;
  FStateTreeScheduledTick FVar5;
  undefined1 auStack_208 [40];
  FStateTreeExecutionContext local_1e0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  pFVar4 = FStateTreeExecutionContext::GetInstanceData<FStateTreeRunParallelStateTreeTask>
                     (param_1,this);
  pUVar1 = (pFVar4->RunningStateTree).field0_0x0.DebugPtr;
  if (pUVar1 == (UStateTree *)0x0) {
    EVar3 = Failed;
  }
  else {
    FStateTreeExecutionContext::FStateTreeExecutionContext
              (&local_1e0,param_1,pUVar1,&pFVar4->TreeInstanceData);
    bVar2 = UStateTree::IsReadyToRun((UStateTree *)local_1e0._padding_);
    if (bVar2) {
      EVar3 = FStateTreeExecutionContext::TickUpdateTasks(&local_1e0,param_2);
      FVar5 = FStateTreeReadOnlyExecutionContext::GetNextScheduledTick
                        ((FStateTreeReadOnlyExecutionContext *)&local_1e0);
      FStateTreeMinimalExecutionContext::UpdateScheduledTickRequest
                ((FStateTreeMinimalExecutionContext *)param_1,
                 (FScheduledTickHandle)(pFVar4->ScheduledTickHandle).Value,
                 *(FStateTreeScheduledTick *)FVar5);
    }
    else {
      EVar3 = Failed;
    }
    FStateTreeExecutionContext::~FStateTreeExecutionContext(&local_1e0);
  }
  return EVar3;
}

// TriggerTransitions @ 14d534660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStateTreeRunParallelStateTreeTask::TriggerTransitions
          (FStateTreeRunParallelStateTreeTask *this,FStateTreeExecutionContext *param_1)

{
  EStateTreeRunStatus EVar1;
  EStateTreeRunStatus EVar2;
  UStateTree *pUVar3;
  code *pcVar4;
  bool bVar5;
  FStateTreeRunParallelStateTreeTaskInstanceData *pFVar6;
  FStateTreeInstanceStorage *pFVar7;
  FStateTreeScheduledTick FVar8;
  undefined1 auStackY_208 [32];
  FStateTreeExecutionContext local_1d0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar6 = FStateTreeExecutionContext::GetInstanceData<FStateTreeRunParallelStateTreeTask>
                     (param_1,this);
  pUVar3 = (pFVar6->RunningStateTree).field0_0x0.DebugPtr;
  if (pUVar3 != (UStateTree *)0x0) {
    FStateTreeExecutionContext::FStateTreeExecutionContext
              (&local_1d0,param_1,pUVar3,&pFVar6->TreeInstanceData);
    bVar5 = UStateTree::IsReadyToRun((UStateTree *)local_1d0._padding_);
    if (bVar5) {
      pFVar7 = FStateTreeInstanceData::GetStorage(&pFVar6->TreeInstanceData);
      EVar1 = (pFVar7->ExecutionState).TreeRunStatus;
      FStateTreeExecutionContext::TickTriggerTransitions(&local_1d0);
      pFVar7 = FStateTreeInstanceData::GetStorage(&pFVar6->TreeInstanceData);
      EVar2 = (pFVar7->ExecutionState).TreeRunStatus;
      if (EVar1 != EVar2) {
        if (EVar2 == Running) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8556439756966199177>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Tasks\\StateTreeRunParallelStateTreeTask.cpp"
                             ,0x77,"NewTreeRunStatus != EStateTreeRunStatus::Running");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FStateTreeExecutionContext::FinishTask
                  (param_1,(FStateTreeTaskBase *)this,EVar2 == Succeeded);
      }
      FVar8 = FStateTreeReadOnlyExecutionContext::GetNextScheduledTick
                        ((FStateTreeReadOnlyExecutionContext *)&local_1d0);
      FStateTreeMinimalExecutionContext::UpdateScheduledTickRequest
                ((FStateTreeMinimalExecutionContext *)param_1,
                 (FScheduledTickHandle)(pFVar6->ScheduledTickHandle).Value,
                 *(FStateTreeScheduledTick *)FVar8);
    }
    FStateTreeExecutionContext::~FStateTreeExecutionContext(&local_1d0);
  }
  return;
}

