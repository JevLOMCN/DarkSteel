// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 118

// StaticClass @ 146e781b0

UClass * __cdecl UBehaviorTreeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTreeComponent",
               &Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton,
               StaticRegisterNativesUBehaviorTreeComponent,0x2b8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBehaviorTreeComponent>,
               InternalVTableHelperCtorCaller<UBehaviorTreeComponent>,local_res8,
               UBrainComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton;
}

// UBehaviorTreeComponent @ 146e811a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBehaviorTreeComponent * __thiscall
UBehaviorTreeComponent::UBehaviorTreeComponent(UBehaviorTreeComponent *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UBrainComponent::UBrainComponent((UBrainComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SearchData).bFilterOutRequestFromDeactivatedBranch = 0;
  (this->SearchData).bPreserveActiveNodeMemoryOnRollback = 0;
  (this->SearchData).bSearchInProgress = 0;
  (this->SearchData).bPostponeSearch = 0;
  (this->ExecutionRequest).bTryNextChild = '\0';
  (this->ExecutionRequest).bIsRestart = '\0';
  (this->PendingExecution).bOutOfNodes = 0;
  (this->PendingExecution).bLocked = 0;
  (this->TreeStartInfo).bPendingInitialize = '\0';
  (this->InstanceStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceStack).ArrayNum = 0;
  (this->InstanceStack).ArrayMax = 0;
  (this->KnownInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownInstances).ArrayNum = 0;
  (this->KnownInstances).ArrayMax = 0;
  (this->NodeInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeInstances).ArrayNum = 0;
  (this->NodeInstances).ArrayMax = 0;
  (this->SearchData).OwnerComp = this;
  (this->SearchData).PendingUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchData).PendingUpdates.ArrayNum = 0;
  (this->SearchData).PendingUpdates.ArrayMax = 0;
  (this->SearchData).PendingNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchData).PendingNotifies.ArrayNum = 0;
  (this->SearchData).PendingNotifies.ArrayMax = 0;
  (this->SearchData).SearchRootNode.InstanceIndex = 0xffff;
  (this->SearchData).SearchRootNode.ExecutionIndex = 0xffff;
  (this->SearchData).SearchStart.InstanceIndex = 0xffff;
  (this->SearchData).SearchStart.ExecutionIndex = 0xffff;
  (this->SearchData).SearchEnd.InstanceIndex = 0xffff;
  (this->SearchData).SearchEnd.ExecutionIndex = 0xffff;
  (this->SearchData).RollbackInstanceIdx = -1;
  (this->SearchData).DeactivatedBranchStart.InstanceIndex = 0xffff;
  (this->SearchData).DeactivatedBranchStart.ExecutionIndex = 0xffff;
  (this->SearchData).DeactivatedBranchEnd.InstanceIndex = 0xffff;
  (this->SearchData).DeactivatedBranchEnd.ExecutionIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchStart.InstanceIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchStart.ExecutionIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchEnd.InstanceIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchEnd.ExecutionIndex = 0xffff;
  (this->ExecutionRequest).SearchStart.InstanceIndex = 0xffff;
  (this->ExecutionRequest).SearchStart.ExecutionIndex = 0xffff;
  (this->ExecutionRequest).SearchEnd.InstanceIndex = 0xffff;
  (this->ExecutionRequest).SearchEnd.ExecutionIndex = 0xffff;
  (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr = (UBTCompositeNode *)0x0;
  (this->PendingExecution).NextTask.field0_0x0.DebugPtr = (UBTTaskNode *)0x0;
  (this->PendingBranchActionRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingBranchActionRequests).ArrayNum = 0;
  (this->PendingBranchActionRequests).ArrayMax = 0;
  (this->TreeStartInfo).Asset = (UBehaviorTree *)0x0;
  (this->TreeStartInfo).ExecuteMode = Looped;
  *(undefined8 *)&this->TaskMessageObservers = 0;
  *(undefined8 *)&(this->TaskMessageObservers).field_0x8 = 0;
  *(undefined8 *)&(this->TaskMessageObservers).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UBehaviorTreeComponent__6B_;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x28 = 0;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x34 = 0;
  *(undefined8 *)&(this->TaskMessageObservers).field_0x40 = 0;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x48 = 0;
  *(undefined8 *)&this->CooldownTagsMap = 0;
  *(undefined8 *)&(this->CooldownTagsMap).field_0x8 = 0;
  *(undefined8 *)&(this->CooldownTagsMap).field_0x20 = 0;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x28 = 0;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x34 = 0;
  *(undefined8 *)&(this->CooldownTagsMap).field_0x40 = 0;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x48 = 0;
  this->CSVTickStatName = "BehaviorTreeTick";
  (this->DefaultBehaviorTreeAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  this->bTickedOnce = false;
  this->NextTickDeltaTime = 0.0;
  this->AccumulatedTickDeltaTime = 0.0;
  this->CurrentFrameDeltaTime = 0.0;
  this->LastRequestedDeltaTimeGameTime = 0.0;
  return this;
}

// UBehaviorTreeComponent @ 146e81380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBehaviorTreeComponent * __thiscall
UBehaviorTreeComponent::UBehaviorTreeComponent
          (UBehaviorTreeComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  UBrainComponent::UBrainComponent((UBrainComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SearchData).bFilterOutRequestFromDeactivatedBranch = 0;
  (this->SearchData).bPreserveActiveNodeMemoryOnRollback = 0;
  (this->SearchData).bSearchInProgress = 0;
  (this->SearchData).bPostponeSearch = 0;
  (this->ExecutionRequest).bTryNextChild = '\0';
  (this->ExecutionRequest).bIsRestart = '\0';
  (this->PendingExecution).bOutOfNodes = 0;
  (this->PendingExecution).bLocked = 0;
  (this->TreeStartInfo).bPendingInitialize = '\0';
  (this->InstanceStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceStack).ArrayNum = 0;
  (this->InstanceStack).ArrayMax = 0;
  (this->KnownInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownInstances).ArrayNum = 0;
  (this->KnownInstances).ArrayMax = 0;
  (this->NodeInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeInstances).ArrayNum = 0;
  (this->NodeInstances).ArrayMax = 0;
  (this->SearchData).OwnerComp = this;
  (this->SearchData).PendingUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchData).PendingUpdates.ArrayNum = 0;
  (this->SearchData).PendingUpdates.ArrayMax = 0;
  (this->SearchData).PendingNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchData).PendingNotifies.ArrayNum = 0;
  (this->SearchData).PendingNotifies.ArrayMax = 0;
  (this->SearchData).SearchRootNode.InstanceIndex = 0xffff;
  (this->SearchData).SearchRootNode.ExecutionIndex = 0xffff;
  (this->SearchData).SearchStart.InstanceIndex = 0xffff;
  (this->SearchData).SearchStart.ExecutionIndex = 0xffff;
  (this->SearchData).SearchEnd.InstanceIndex = 0xffff;
  (this->SearchData).SearchEnd.ExecutionIndex = 0xffff;
  (this->SearchData).RollbackInstanceIdx = -1;
  (this->SearchData).DeactivatedBranchStart.InstanceIndex = 0xffff;
  (this->SearchData).DeactivatedBranchStart.ExecutionIndex = 0xffff;
  (this->SearchData).DeactivatedBranchEnd.InstanceIndex = 0xffff;
  (this->SearchData).DeactivatedBranchEnd.ExecutionIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchStart.InstanceIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchStart.ExecutionIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchEnd.InstanceIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchEnd.ExecutionIndex = 0xffff;
  (this->ExecutionRequest).SearchStart.InstanceIndex = 0xffff;
  (this->ExecutionRequest).SearchStart.ExecutionIndex = 0xffff;
  (this->ExecutionRequest).SearchEnd.InstanceIndex = 0xffff;
  (this->ExecutionRequest).SearchEnd.ExecutionIndex = 0xffff;
  (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr = (UBTCompositeNode *)0x0;
  (this->PendingExecution).NextTask.field0_0x0.DebugPtr = (UBTTaskNode *)0x0;
  (this->PendingBranchActionRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingBranchActionRequests).ArrayNum = 0;
  (this->PendingBranchActionRequests).ArrayMax = 0;
  (this->TreeStartInfo).Asset = (UBehaviorTree *)0x0;
  (this->TreeStartInfo).ExecuteMode = Looped;
  *(undefined8 *)&this->TaskMessageObservers = 0;
  *(undefined8 *)&(this->TaskMessageObservers).field_0x8 = 0;
  *(undefined8 *)&(this->TaskMessageObservers).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UBehaviorTreeComponent__6B_;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x28 = 0;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x34 = 0;
  *(undefined8 *)&(this->TaskMessageObservers).field_0x40 = 0;
  *(undefined4 *)&(this->TaskMessageObservers).field_0x48 = 0;
  *(undefined8 *)&this->CooldownTagsMap = 0;
  *(undefined8 *)&(this->CooldownTagsMap).field_0x8 = 0;
  *(undefined8 *)&(this->CooldownTagsMap).field_0x20 = 0;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x28 = 0;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x34 = 0;
  *(undefined8 *)&(this->CooldownTagsMap).field_0x40 = 0;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->bLoopExecution = '\0';
  this->bIsPaused = '\0';
  this->bIsRunning = '\0';
  this->bRequestedFlowUpdate = '\0';
  this->bWaitingForLatentAborts = '\0';
  (this->DefaultBehaviorTreeAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  this->bTickedOnce = false;
  this->NextTickDeltaTime = 0.0;
  this->AccumulatedTickDeltaTime = 0.0;
  this->CurrentFrameDeltaTime = 0.0;
  this->LastRequestedDeltaTimeGameTime = 0.0;
  this->CSVTickStatName = "BehaviorTreeTick";
  this->ActiveInstanceIdx = 0;
  this->SuspendedBranchActions = None;
  if (bAddedEndFrameCallback == false) {
    bAddedEndFrameCallback = true;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEndFrame,(_func___cdecl_void *)local_res8);
  }
  return this;
}

// ~UBehaviorTreeComponent @ 146e81f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::~UBehaviorTreeComponent(UBehaviorTreeComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UBehaviorTreeComponent__6B_;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CooldownTagsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CooldownTagsMap);
  *(undefined4 *)&(this->TaskMessageObservers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TaskMessageObservers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TaskMessageObservers);
  pFVar2 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SearchData).PendingNotifies.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SearchData).PendingUpdates.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NodeInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FBehaviorTreeInstanceId,int>
            ((FBehaviorTreeInstanceId *)(this->KnownInstances).AllocatorInstance.Data,
             (this->KnownInstances).ArrayNum);
  pFVar2 = (this->KnownInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FBehaviorTreeInstance,int>
            ((FBehaviorTreeInstance *)(this->InstanceStack).AllocatorInstance.Data,
             (this->InstanceStack).ArrayNum);
  pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UBrainComponent::~UBrainComponent((UBrainComponent *)this);
  return;
}

// operator() @ 146e823e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UBehaviorTreeComponent::SetDynamicSubtree'::__l2::<lambda_1>::operator()
          (void *this,UBTTaskNode *param_1,FBehaviorTreeInstance *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  UBTTaskNode *pUVar2;
  UBTCompositeNode *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UBTTask_RunBehaviorDynamic *this_01;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 != (UBTTaskNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) && (param_1[1]._padding_ == *(longlong *)this)) {
      pFVar1 = (param_2->InstanceMemory).AllocatorInstance.Data;
      if (((param_2->InstanceMemory).ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = (UBTTask_RunBehaviorDynamic *)
                UBTNode::GetNodeInstance
                          ((UBTNode *)param_1,*(UBehaviorTreeComponent **)((longlong)this + 0x10),
                           (uchar *)(pFVar1 + *(ushort *)((longlong)&param_1->_padding_ + 2)));
      if (this_01 != (UBTTask_RunBehaviorDynamic *)0x0) {
        pUVar6 = Z_Construct_UClass_UBTTask_RunBehaviorDynamic_NoRegister();
        iVar5 = (int)pUVar6->_padding_;
        if (((iVar5 <= *(int *)(this_01->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
             &pUVar6->_padding_)) &&
           (bVar4 = UBTTask_RunBehaviorDynamic::SetBehaviorAsset
                              (this_01,*(UBehaviorTree **)((longlong)this + 8)), bVar4)) {
          if (FVisualLogger::bIsRecording != 0) {
            ::FName::ToString(this,&local_48);
            if (*(longlong *)((longlong)this + 8) == 0) {
              ::FString::FString(&local_58,L"None");
            }
            else {
              local_res10 = *(FName *)(*(longlong *)((longlong)this + 8) + 0x18);
              ::FName::ToString(&local_res10,&local_58);
            }
            UBehaviorTreeTypes::DescribeNodeHelper(&local_38,(UBTNode *)param_1);
            FVisualLogger::CategorizedLogfImpl
                      (*(UObject **)(*(longlong *)((longlong)this + 0x10) + 0xa8),
                       (FName *)&LogBehaviorTree.field_0x4,Log,
                       L"Replaced subtree in %s with %s (tag: %s)");
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          **(undefined1 **)((longlong)this + 0x18) = 1;
          if ((param_2->ActiveNodeType).Value == '\x01') {
            pUVar2 = (UBTTaskNode *)(param_2->ActiveNode).field0_0x0.DebugPtr;
            if (pUVar2 == (UBTTaskNode *)0x0) {
              bVar4 = param_1 == (UBTTaskNode *)0x0;
            }
            else {
              bVar4 = pUVar2 == param_1;
            }
            if (bVar4) {
              this_00 = (UBTCompositeNode *)param_1->_padding_;
              iVar5 = UBTCompositeNode::GetChildIndex(this_00,(UBTNode *)param_1);
              UBehaviorTreeComponent::RequestExecution
                        (*(UBehaviorTreeComponent **)((longlong)this + 0x10),this_00,param_3,
                         (UBTNode *)param_1,iVar5,Aborted,true);
            }
          }
        }
      }
    }
  }
  return;
}

// operator() @ 146e82640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UBehaviorTreeComponent::StopTree'::__l14::<lambda_2>::operator()
          (void *this,FBehaviorTreeParallelTask *param_1,int param_2)

{
  byte *pbVar1;
  UBTTaskNode *this_00;
  longlong lVar2;
  UBTTaskNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  FString local_38;
  FString local_28;
  
  if (((param_1->Status == Active) &&
      (this_00 = (param_1->TaskNode).field0_0x0.DebugPtr, this_00 != (UBTTaskNode *)0x0)) &&
     (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    UBehaviorTreeComponent::UnregisterMessageObserversFrom
              (*(UBehaviorTreeComponent **)((longlong)this + 8),this_00);
    lVar2 = *(longlong *)(*(longlong *)this + 0x30);
    if ((*(int *)(*(longlong *)this + 0x38) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar6 = UBTTaskNode::WrappedAbortTask
                      (this_00,*(UBehaviorTreeComponent **)((longlong)this + 8),
                       (uchar *)((ulonglong)*(ushort *)((longlong)&this_00->_padding_ + 2) + lVar2))
    ;
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_38,(UBTNode *)this_00);
      FVisualLogger::CategorizedLogfImpl
                (*(UObject **)(*(longlong *)((longlong)this + 8) + 0xa8),
                 (FName *)&LogBehaviorTree.field_0x4,Log,L"Parallel task aborted: %s (%s)");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (TVar6 == InProgress) {
      if (((param_2 < 0) || (((*(FBehaviorTreeInstance **)this)->ParallelTasks).ArrayNum <= param_2)
          ) || ((pUVar3 = (param_1->TaskNode).field0_0x0.DebugPtr, pUVar3 == (UBTTaskNode *)0x0 ||
                (pUVar3 != this_00)))) {
        if (FVisualLogger::bIsRecording != 0) {
          UBehaviorTreeTypes::DescribeNodeHelper(&local_28,(UBTNode *)this_00);
          FVisualLogger::CategorizedLogfImpl
                    (*(UObject **)(*(longlong *)((longlong)this + 8) + 0xa8),
                     (FName *)&LogBehaviorTree.field_0x4,Warning,
                     L"Parallel task %s was unregistered before completing Abort state!");
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        FBehaviorTreeInstance::MarkParallelTaskAsAbortingAt(*(FBehaviorTreeInstance **)this,param_2)
        ;
        pbVar1 = (byte *)(*(longlong *)((longlong)this + 8) + 0x28a);
        *pbVar1 = *pbVar1 | 2;
      }
    }
    UBehaviorTreeComponent::OnTaskFinished
              (*(UBehaviorTreeComponent **)((longlong)this + 8),this_00,TVar6);
  }
  return;
}

// operator() @ 146e82820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UBehaviorTreeComponent::TickComponent'::__l37::<lambda_3>::operator()
          (void *this,UBTAuxiliaryNode *param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FName local_18;
  byte local_10;
  
  lVar3 = *(longlong *)(*(longlong *)this + 0x30);
  if (*(int *)(*(longlong *)this + 0x38) < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = *(ushort *)((longlong)&param_1->_padding_ + 2);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_18,(UObjectBaseUtility *)param_1);
  bVar1 = **(byte **)((longlong)this + 0x10);
  bVar5 = UBTAuxiliaryNode::WrappedTickNode
                    (param_1,*(UBehaviorTreeComponent **)((longlong)this + 8),
                     (uchar *)((ulonglong)uVar2 + lVar3),*(float *)((longlong)this + 0x18),
                     *(float **)((longlong)this + 0x20));
  **(byte **)((longlong)this + 0x10) = bVar5 | bVar1;
  if ((local_10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_10 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_10 & 4) != 0) {
    FThreadStats::AddMessage(local_18,CycleScopeEnd);
  }
  return;
}

// operator() @ 146e82900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UBehaviorTreeComponent::TickComponent'::__l63::<lambda_4>::operator()
          (void *this,FBehaviorTreeParallelTask *param_1,int param_2)

{
  byte bVar1;
  UBTTaskNode *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FName local_18;
  byte local_10;
  
  this_00 = (param_1->TaskNode).field0_0x0.DebugPtr;
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_18,(UObjectBaseUtility *)this_00);
  lVar2 = *(longlong *)(*(longlong *)this + 0x30);
  if (*(int *)(*(longlong *)this + 0x38) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar1 = **(byte **)((longlong)this + 8);
  bVar4 = UBTTaskNode::WrappedTickTask
                    (this_00,*(UBehaviorTreeComponent **)((longlong)this + 0x10),
                     (uchar *)((ulonglong)*(ushort *)((longlong)&this_00->_padding_ + 2) + lVar2),
                     *(float *)((longlong)this + 0x18),*(float **)((longlong)this + 0x20));
  **(byte **)((longlong)this + 8) = bVar4 | bVar1;
  if ((local_10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_10 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_10 & 4) != 0) {
    FThreadStats::AddMessage(local_18,CycleScopeEnd);
  }
  return;
}

// AbortCurrentTask @ 146e83be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::AbortCurrentTask(UBehaviorTreeComponent *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UBTTaskNode *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  Type TVar8;
  uint uVar9;
  FString local_18;
  
  iVar2 = (this->InstanceStack).ArrayNum;
  uVar9 = iVar2 - 1;
  uVar7 = 0;
  if ((int)uVar9 < iVar2) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->InstanceStack).AllocatorInstance.Data;
  this_00 = *(UBTTaskNode **)(pFVar3 + (longlong)(int)uVar9 * 0x68 + 8);
  pFVar3[(longlong)(int)uVar9 * 0x68 + 0x41] = (FScriptContainerElement)0x2;
  UnregisterMessageObserversFrom(this,this_00);
  (this->SearchData).bPreserveActiveNodeMemoryOnRollback = 1;
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)this_00);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,L"Abort task: %s")
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  lVar4 = *(longlong *)(pFVar3 + (longlong)(int)uVar9 * 0x68 + 0x30);
  if ((*(int *)(pFVar3 + (longlong)(int)uVar9 * 0x68 + 0x38) < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TVar8 = UBTTaskNode::WrappedAbortTask
                    (this_00,this,
                     (uchar *)((ulonglong)*(ushort *)((longlong)&this_00->_padding_ + 2) + lVar4));
  if ((pFVar3[(longlong)(int)uVar9 * 0x68 + 0x41] == (FScriptContainerElement)0x2) &&
     (uVar9 == (this->InstanceStack).ArrayNum - 1U)) {
    OnTaskFinished(this,this_00,TVar8);
  }
  return;
}

// ActivateBranch @ 146e83d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::ActivateBranch
          (UBehaviorTreeComponent *this,UBTDecorator *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FString local_38;
  
  uVar6 = FindInstanceContainingNode(this,(UBTNode *)param_1);
  if (uVar6 == 0xffffffff) {
    return;
  }
  bVar4 = IsExecutingBranch(this,(UBTNode *)param_1,
                            (uint)*(byte *)((longlong)&param_1->_padding_ + 1));
  if ((this->bWaitingForLatentAborts == '\0') &&
     ((((this->PendingExecution).NextTask.field0_0x0.DebugPtr == (UBTTaskNode *)0x0 &&
       ((this->PendingExecution).bOutOfNodes == 0)) || ((this->PendingExecution).bLocked != 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((uVar6 == 0xffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceIdx != FBTNodeIndex::InvalidIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                         ,0x3e9,L"Index has used the InvalidIndex value!"), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->ExecutionRequest).ContinueWithResult.Value == '\x01') {
    lVar3 = param_1->_padding_;
    if (((uVar6 != (uVar6 & 0xffff)) || ((int)uVar6 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((ushort)lVar3 == (this->ExecutionRequest).SearchStart.ExecutionIndex) &&
       ((ushort)uVar6 == (this->ExecutionRequest).SearchStart.InstanceIndex)) {
      bVar5 = true;
      goto LAB_146e83e70;
    }
  }
  bVar5 = false;
LAB_146e83e70:
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeHelper(&local_38,(UBTNode *)param_1);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
               L"%s, ActivateBranch(%s) executingBranch:%d abortPending:%d deactivatingBranchRoot:%d => %s"
              );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    if (((param_2) || (bVar2)) || (bVar5)) {
      RequestExecution(this,(UBTCompositeNode *)param_1->_padding_,uVar6,(UBTNode *)param_1,
                       (uint)*(byte *)((longlong)&param_1->_padding_ + 1),Aborted,true);
    }
  }
  else {
    EvaluateBranch(this,param_1);
  }
  return;
}

// AddCooldownTagDuration @ 146e84000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::AddCooldownTagDuration
          (UBehaviorTreeComponent *this,FGameplayTag param_1,float param_2,bool param_3)

{
  TTuple<FGameplayTag,double> *pTVar1;
  UWorld *pUVar2;
  double *pdVar3;
  FName local_res10;
  TPairInitializer<FGameplayTag_const_&,double_&&> local_38;
  FName *local_28;
  double **local_20;
  
  if (param_1.TagName != (FName)0x0) {
    local_res10 = param_1.TagName;
    pTVar1 = TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
                     *)&this->CooldownTagsMap,(FGameplayTag *)&local_res10);
    pdVar3 = (double *)&pTVar1->field_0x8;
    if (pTVar1 == (TTuple<FGameplayTag,double> *)0x0) {
      pdVar3 = (double *)0x0;
    }
    if ((param_3) && (pdVar3 != (double *)0x0)) {
      *pdVar3 = (double)param_2 + *pdVar3;
    }
    else {
      pUVar2 = (UWorld *)this->_padding_;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      local_38.Value = (double *)((double)param_2 + pUVar2->TimeSeconds);
      local_28 = &local_res10;
      local_20 = &local_38.Value;
      TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,double_&&>_>
                ((TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
                  *)&this->CooldownTagsMap,&local_38,(bool *)&local_28);
    }
  }
  return;
}

// AddReferencedObjects @ 146e840e0

void __cdecl
UBehaviorTreeComponent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  UClass *pUVar4;
  FString *pFVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  if (param_1 == (UObject *)0x0) {
    pFVar5 = GetTypeName<UBehaviorTreeComponent>(&local_48);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar4 = GetPrivateStaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar4->_padding_)) {
    lVar7 = *(longlong *)(param_1 + 7);
    iVar1 = *(int *)&param_1[7].field_0x8;
    piVar9 = (int *)(lVar7 + 0x28);
    while( true ) {
      if (*(int *)&param_1[7].field_0x8 != iVar1) {
        `TCheckedPointerIterator<FBehaviorTreeInstance,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (piVar9 + -10 == (int *)((longlong)iVar1 * 0x68 + lVar7)) break;
      (**(code **)(param_2->_padding_ + 0x88))(param_2,piVar9 + -10,0);
      (**(code **)(param_2->_padding_ + 0x88))(param_2,piVar9 + -8,0);
      (**(code **)(param_2->_padding_ + 0x90))(param_2,*(undefined8 *)(piVar9 + -6),piVar9[-4],0,0);
      iVar2 = *piVar9;
      lVar6 = *(longlong *)(piVar9 + -2);
      lVar11 = (longlong)iVar2 * 0x10 + lVar6;
      while( true ) {
        if (*piVar9 != iVar2) {
          `TCheckedPointerIterator<FBehaviorTreeParallelTask,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (lVar6 == lVar11) break;
        (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar6);
        lVar6 = lVar6 + 0x10;
      }
      piVar9 = piVar9 + 0x1a;
    }
    iVar1 = *(int *)&param_1[8].field_0x18;
    lVar6 = *(longlong *)&param_1[8].field_0x10;
    lVar7 = lVar6 + (longlong)iVar1 * 0x18;
    while( true ) {
      if (*(int *)&param_1[8].field_0x18 != iVar1) {
        `TCheckedPointerIterator<FBehaviorTreeSearchUpdate,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      pcVar3 = *(code **)(param_2->_padding_ + 0x88);
      if (lVar6 == lVar7) break;
      (*pcVar3)(param_2,lVar6 + 8);
      (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar6);
      lVar6 = lVar6 + 0x18;
    }
    (*pcVar3)(param_2,&param_1[10].field_0x10,0,0);
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[10].field_0x20,0,0);
    iVar1 = *(int *)&param_1[0xb].field_0x18;
    lVar7 = *(longlong *)&param_1[0xb].field_0x10;
    lVar6 = (longlong)iVar1 * 0x10 + lVar7;
    while( true ) {
      if (*(int *)&param_1[0xb].field_0x18 != iVar1) {
        `TCheckedPointerIterator<UBehaviorTreeComponent::FBranchActionInfo,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (lVar7 == lVar6) break;
      (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar7,0,0);
      lVar7 = lVar7 + 0x10;
    }
    UActorComponent::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar5 = GetTypeName<UBehaviorTreeComponent>(&local_48);
  pwVar8 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UObject>(&local_38,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar10);
}

// ApplyAllSearchUpdates @ 146e84720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::ApplyAllSearchUpdates
          (UBehaviorTreeComponent *this,
          TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  UBehaviorTreeComponent *local_res8;
  code *local_28;
  UBehaviorTreeComponent **local_20;
  
  iVar4 = 0;
  if (param_3 != 0xffffffff) {
    do {
      ApplySearchUpdatesImpl(this,param_1,param_2,iVar4 == 1,param_4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(param_3 + 1));
  }
  if (FVisualLogger::bIsRecording != 0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,All,
                 L"Logging All Aux Nodes");
    }
    uVar5 = 0;
    if (0 < (this->InstanceStack).ArrayNum) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->InstanceStack).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_20 = &local_res8;
        local_28 = UE::Core::Private::Function::
                   TFunctionRefCaller<``UBehaviorTreeComponent::ApplyAllSearchUpdates'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,void,UBTAuxiliaryNode_const_&>
                   ::Call;
        local_res8 = this;
        FBehaviorTreeInstance::ExecuteOnEachAuxNode
                  ((FBehaviorTreeInstance *)
                   ((this->InstanceStack).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x68),
                   (TFunctionRef<void___cdecl(UBTAuxiliaryNode_const_&)> *)&local_28);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (this->InstanceStack).ArrayNum);
    }
  }
  return;
}

// ApplyDiscardedSearch @ 146e84880

void __thiscall UBehaviorTreeComponent::ApplyDiscardedSearch(UBehaviorTreeComponent *this)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (UE::BehaviorTree::bApplyAuxNodesFromFailedSearches) {
    uVar1 = this->ActiveInstanceIdx;
    if ((int)(uint)uVar1 < (this->InstanceStack).ArrayNum) {
      if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)
               ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar1 * 0x68 + 8);
      if (lVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)*(ushort *)(lVar3 + 0x50);
      }
    }
    ApplyAllSearchUpdates(this,&(this->SearchData).PendingUpdates,uVar6,true,false);
    TickNewlyAddedAuxNodesHelper(this);
  }
  iVar2 = (this->SearchData).PendingUpdates.ArrayMax;
  (this->SearchData).PendingUpdates.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->SearchData).PendingUpdates.AllocatorInstance,0,
               &(this->SearchData).PendingUpdates.ArrayMax);
  }
  iVar2 = (this->SearchData).PendingNotifies.ArrayMax;
  (this->SearchData).PendingNotifies.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->SearchData).PendingNotifies.AllocatorInstance,0,
               &(this->SearchData).PendingNotifies.ArrayMax);
  }
  return;
}

// ApplySearchData @ 146e849b0

void __thiscall
UBehaviorTreeComponent::ApplySearchData(UBehaviorTreeComponent *this,UBTNode *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  ushort uVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  FReadAccessScope local_68;
  
  uVar11 = 0;
  iVar10 = (this->SearchData).PendingNotifies.ArrayNum;
  (this->SearchData).RollbackDeactivatedBranchStart.InstanceIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchStart.ExecutionIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchEnd.InstanceIndex = 0xffff;
  (this->SearchData).RollbackDeactivatedBranchEnd.ExecutionIndex = 0xffff;
  (this->SearchData).RollbackInstanceIdx = -1;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->SearchData).PendingNotifies.AllocatorInstance.Data;
      uVar4 = *(ushort *)(pFVar5 + lVar12);
      if ((int)(uint)uVar4 < (this->InstanceStack).ArrayNum) {
        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar4) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar3 = pFVar5[lVar12 + 2];
        pFVar5 = (this->InstanceStack).AllocatorInstance.Data;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   (pFVar5 + (ulonglong)uVar4 * 0x68 + 0x48),&local_68);
        if ((*(int *)(pFVar5 + (ulonglong)uVar4 * 0x68 + 0x58) != 0) &&
           (plVar6 = *(longlong **)(pFVar5 + (ulonglong)uVar4 * 0x68 + 0x50),
           plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x68))(plVar6,this,FVar3);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
      }
      iVar10 = (this->SearchData).PendingNotifies.ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 4;
    } while ((int)uVar11 < iVar10);
  }
  if (param_1 == (UBTNode *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)param_1->ExecutionIndex;
  }
  (this->SearchData).bFilterOutRequestFromDeactivatedBranch = 1;
  ApplyAllSearchUpdates(this,&(this->SearchData).PendingUpdates,uVar11,true,true);
  (this->SearchData).bFilterOutRequestFromDeactivatedBranch = 0;
  TickNewlyAddedAuxNodesHelper(this);
  piVar2 = &(this->SearchData).PendingUpdates.ArrayMax;
  iVar10 = *piVar2;
  (this->SearchData).PendingUpdates.ArrayNum = 0;
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->SearchData).PendingUpdates.AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->SearchData).PendingNotifies.ArrayMax;
  iVar10 = *piVar2;
  (this->SearchData).PendingNotifies.ArrayNum = 0;
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->SearchData).PendingNotifies.AllocatorInstance,0,piVar2);
  }
  (this->SearchData).DeactivatedBranchStart.InstanceIndex = 0xffff;
  (this->SearchData).DeactivatedBranchStart.ExecutionIndex = 0xffff;
  (this->SearchData).DeactivatedBranchEnd.InstanceIndex = 0xffff;
  (this->SearchData).DeactivatedBranchEnd.ExecutionIndex = 0xffff;
  return;
}

// ApplySearchUpdates @ 146e84c30

void __thiscall
UBehaviorTreeComponent::ApplySearchUpdates
          (UBehaviorTreeComponent *this,
          TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          bool param_3)

{
  ApplySearchUpdatesImpl(this,param_1,param_2,param_3,true);
  return;
}

// ApplySearchUpdatesImpl @ 146e84c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::ApplySearchUpdatesImpl
          (UBehaviorTreeComponent *this,
          TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          bool param_3,bool param_4)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  UBTNode *pUVar5;
  longlong lVar6;
  UBTTaskNode *pUVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  Type TVar11;
  UBTNode *pUVar12;
  UClass *pUVar13;
  FBehaviorTreeParallelTask *pFVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  UBTNode *pUVar17;
  FBehaviorTreeInstance *this_00;
  int iVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  uint local_e8;
  longlong local_e0;
  TArrayView<FBehaviorTreeParallelTask_const_,int> local_d0;
  TArrayView<FBehaviorTreeParallelTask_const_,int> local_c0;
  TObjectPtr<UBTTaskNode_const_>_u_0 local_b0;
  undefined4 local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  iVar18 = param_1->ArrayNum;
  local_e8 = 0;
  if (0 < iVar18) {
    local_e0 = 0;
    do {
      uVar10 = 0;
      if ((int)local_e8 < iVar18) {
        uVar10 = ~local_e8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar20 = (param_1->AllocatorInstance).Data + local_e0;
      if (((bool)((byte)pFVar20[0x13] & 1) == param_3) &&
         ((int)(uint)*(ushort *)(pFVar20 + 0x10) < (this->InstanceStack).ArrayNum)) {
        uVar2 = this->ActiveInstanceIdx;
        this->ActiveInstanceIdx = *(ushort *)(pFVar20 + 0x10);
        uVar3 = *(ushort *)(pFVar20 + 0x10);
        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar3) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar18 = -1;
        this_00 = (FBehaviorTreeInstance *)
                  ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar3 * 0x68);
        if (*(longlong *)pFVar20 == 0) {
          if ((param_4) && (*(longlong *)(pFVar20 + 8) != 0)) {
            iVar18 = (this_00->ParallelTasks).ArrayNum;
            pFVar16 = (this_00->ParallelTasks).AllocatorInstance.Data;
            if ((iVar18 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (pFVar16 != pFVar16 + (longlong)iVar18 * 0x10) {
              pFVar19 = pFVar16;
              do {
                if (*(longlong *)pFVar19 == 0) {
                  bVar9 = *(longlong *)(pFVar20 + 8) == 0;
                }
                else {
                  bVar9 = *(longlong *)pFVar19 == *(longlong *)(pFVar20 + 8);
                }
                if (bVar9) {
                  iVar18 = (int)((longlong)pFVar19 - (longlong)pFVar16 >> 4);
                  if (iVar18 == -1) goto LAB_146e84e86;
                  local_d0.DataPtr =
                       (FBehaviorTreeParallelTask *)(this_00->ParallelTasks).AllocatorInstance.Data;
                  iVar4 = (this_00->ParallelTasks).ArrayNum;
                  if ((iVar4 < 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InCount >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xeb,L""), bVar9)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_d0.ArrayNum = iVar4;
                  pFVar14 = TArrayView<FBehaviorTreeParallelTask_const_,int>::operator[]
                                      (&local_d0,iVar18);
                  if (pFVar14->Status != Active) goto LAB_146e84e86;
                  bVar9 = true;
                  goto LAB_146e84e88;
                }
                pFVar19 = pFVar19 + 0x10;
              } while (pFVar19 != pFVar16 + (longlong)iVar18 * 0x10);
            }
            iVar18 = -1;
LAB_146e84e86:
            bVar9 = false;
            goto LAB_146e84e88;
          }
        }
        else {
          iVar4 = (this_00->ActiveAuxNodes).ArrayNum;
          pFVar16 = (this_00->ActiveAuxNodes).AllocatorInstance.Data;
          if ((iVar4 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar19 = pFVar16 + (longlong)iVar4 * 8;
          if (pFVar16 != pFVar19) {
            do {
              if (*(longlong *)pFVar20 == 0) {
                bVar9 = *(longlong *)pFVar16 == 0;
              }
              else {
                bVar9 = *(longlong *)pFVar20 == *(longlong *)pFVar16;
              }
              if (bVar9) {
                bVar9 = true;
                goto LAB_146e84e88;
              }
              pFVar16 = pFVar16 + 8;
            } while (pFVar16 != pFVar19);
          }
          bVar9 = false;
LAB_146e84e88:
          pUVar17 = *(UBTNode **)pFVar20;
          if (pUVar17 == (UBTNode *)0x0) {
            pUVar17 = *(UBTNode **)(pFVar20 + 8);
          }
          if (pFVar20[0x12] == (FScriptContainerElement)0x2) {
            if (bVar9) {
LAB_146e84ea9:
              if (FVisualLogger::bIsRecording != 0) {
                UBehaviorTreeTypes::DescribeNodeHelper(&local_70,pUVar17);
                UBehaviorTreeTypes::DescribeNodeUpdateMode(&local_80,(uint)(byte)pFVar20[0x12]);
                FVisualLogger::CategorizedLogfImpl
                          ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                           L"Applying: %s for %s: %s");
                if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_80.Data.AllocatorInstance.Data);
                }
                if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_70.Data.AllocatorInstance.Data);
                }
              }
              if (*(longlong *)pFVar20 == 0) {
                pUVar7 = *(UBTTaskNode **)(pFVar20 + 8);
                if (pUVar7 != (UBTTaskNode *)0x0) {
                  if (pFVar20[0x12] == (FScriptContainerElement)0x2) {
                    UnregisterMessageObserversFrom(this,pUVar7);
                    pFVar16 = (this_00->InstanceMemory).AllocatorInstance.Data;
                    if (((this_00->InstanceMemory).ArrayNum < 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("InCount >= 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0xeb,L""), bVar9)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    TVar11 = UBTTaskNode::WrappedAbortTask
                                       (*(UBTTaskNode **)(pFVar20 + 8),this,
                                        (uchar *)(pFVar16 + pUVar17->MemoryOffset));
                    if (FVisualLogger::bIsRecording != 0) {
                      UBehaviorTreeTypes::DescribeNodeHelper(&local_60,*(UBTNode **)(pFVar20 + 8));
                      FVisualLogger::CategorizedLogfImpl
                                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                                 L"Parallel task aborted: %s (%s)");
                      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_60.Data.AllocatorInstance.Data);
                      }
                    }
                    uVar3 = *(ushort *)(pFVar20 + 0x10);
                    if ((int)(uint)uVar3 < (this->InstanceStack).ArrayNum) {
                      if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar3) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar4 = *(int *)((this->InstanceStack).AllocatorInstance.Data +
                                      (ulonglong)uVar3 * 0x68 + 0x28);
                      if ((iVar4 < 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("InCount >= 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0xeb,L""), bVar9)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      if ((-1 < iVar18) && (iVar18 < iVar4)) {
                        uVar3 = *(ushort *)(pFVar20 + 0x10);
                        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar3) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar9)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pFVar16 = (this->InstanceStack).AllocatorInstance.Data;
                        local_c0.DataPtr =
                             *(FBehaviorTreeParallelTask **)
                              (pFVar16 + (ulonglong)uVar3 * 0x68 + 0x20);
                        iVar4 = *(int *)(pFVar16 + (ulonglong)uVar3 * 0x68 + 0x28);
                        if ((iVar4 < 0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("InCount >= 0",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                               ,0xeb,L""), bVar9)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        local_c0.ArrayNum = iVar4;
                        pFVar14 = TArrayView<FBehaviorTreeParallelTask_const_,int>::operator[]
                                            (&local_c0,iVar18);
                        pUVar7 = (pFVar14->TaskNode).field0_0x0.DebugPtr;
                        if (pUVar7 == (UBTTaskNode *)0x0) {
                          bVar9 = *(UBTTaskNode **)(pFVar20 + 8) == (UBTTaskNode *)0x0;
                        }
                        else {
                          bVar9 = pUVar7 == *(UBTTaskNode **)(pFVar20 + 8);
                        }
                        if (bVar9) {
                          if (TVar11 == InProgress) {
                            FBehaviorTreeInstance::MarkParallelTaskAsAbortingAt(this_00,iVar18);
                            this->bWaitingForLatentAborts = '\x01';
                          }
                          OnTaskFinished(this,*(UBTTaskNode **)(pFVar20 + 8),TVar11);
                        }
                      }
                    }
                  }
                  else {
                    if (FVisualLogger::bIsRecording != 0) {
                      UBehaviorTreeTypes::DescribeNodeHelper(&local_50,(UBTNode *)pUVar7);
                      FVisualLogger::CategorizedLogfImpl
                                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                                 Verbose,L"Parallel task: %s added to active list");
                      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_50.Data.AllocatorInstance.Data);
                      }
                    }
                    local_b0 = (TObjectPtr<UBTTaskNode_const_>_u_0)
                               ((TObjectPtr<UBTTaskNode_const_>_u_0 *)(pFVar20 + 8))->DebugPtr;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_b0.DebugPtr != (UBTTaskNode *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)local_b0.DebugPtr);
                    }
                    local_a8 = 0;
                    FBehaviorTreeInstance::AddToParallelTasks
                              (this_00,(FBehaviorTreeParallelTask *)&local_b0.ObjectPtr);
                  }
                }
              }
              else {
                if (this->bLoopExecution != 0) {
                  if (((this->InstanceStack).ArrayNum < 1) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar16 = (this->InstanceStack).AllocatorInstance.Data;
                  pUVar12 = UBTAuxiliaryNode::GetMyNode(*(UBTAuxiliaryNode **)pFVar20);
                  pUVar5 = *(UBTNode **)pFVar16;
                  if (pUVar5 == (UBTNode *)0x0) {
                    bVar9 = pUVar12 == (UBTNode *)0x0;
                  }
                  else {
                    bVar9 = pUVar5 == pUVar12;
                  }
                  if (bVar9) {
                    lVar6 = *(longlong *)pFVar20;
                    pUVar13 = Z_Construct_UClass_UBTService_NoRegister();
                    iVar18 = (int)pUVar13->_padding_;
                    if ((iVar18 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar18 * 8)
                        == &pUVar13->_padding_)) {
                      if (pFVar20[0x12] == (FScriptContainerElement)0x2) {
LAB_146e85282:
                        if (FVisualLogger::bIsRecording != 0) {
                          FVisualLogger::CategorizedLogfImpl
                                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                                     Verbose,L"> skip [looped execution]");
                        }
                        goto LAB_146e855ce;
                      }
                      if (((this->InstanceStack).ArrayNum < 1) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pFVar16 = (this->InstanceStack).AllocatorInstance.Data;
                      iVar18 = *(int *)(pFVar16 + 0x18);
                      plVar15 = *(longlong **)(pFVar16 + 0x10);
                      if ((iVar18 < 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("InCount >= 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0xeb,L""), bVar9)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      plVar1 = plVar15 + iVar18;
                      if (plVar15 != plVar1) {
                        do {
                          if (*(longlong *)pFVar20 == 0) {
                            bVar9 = *plVar15 == 0;
                          }
                          else {
                            bVar9 = *(longlong *)pFVar20 == *plVar15;
                          }
                          if (bVar9) goto LAB_146e85282;
                          plVar15 = plVar15 + 1;
                        } while (plVar15 != plVar1);
                      }
                    }
                  }
                }
                pFVar16 = (this_00->InstanceMemory).AllocatorInstance.Data;
                if (((this_00->InstanceMemory).ArrayNum < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar9)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar16 = pFVar16 + pUVar17->MemoryOffset;
                if (pFVar20[0x12] == (FScriptContainerElement)0x2) {
                  FBehaviorTreeInstance::RemoveFromActiveAuxNodes
                            (this_00,this,*(UBTAuxiliaryNode **)pFVar20);
                  UBTAuxiliaryNode::WrappedOnCeaseRelevant
                            (*(UBTAuxiliaryNode **)pFVar20,this,(uchar *)pFVar16);
                }
                else {
                  FBehaviorTreeInstance::AddToActiveAuxNodes
                            (this_00,this,*(UBTAuxiliaryNode **)pFVar20);
                  UBTAuxiliaryNode::WrappedOnBecomeRelevant
                            (*(UBTAuxiliaryNode **)pFVar20,this,(uchar *)pFVar16);
                }
              }
              goto LAB_146e855ce;
            }
          }
          else if ((pFVar20[0x12] != (FScriptContainerElement)0x1) ||
                  ((!bVar9 && ((int)(uint)pUVar17->ExecutionIndex <= param_2)))) goto LAB_146e84ea9;
          pFVar20[0x13] = (FScriptContainerElement)((byte)pFVar20[0x13] | 2);
          if (FVisualLogger::bIsRecording != 0) {
            UBehaviorTreeTypes::DescribeNodeHelper(&local_90,pUVar17);
            UBehaviorTreeTypes::DescribeNodeUpdateMode(&local_a0,(uint)(byte)pFVar20[0x12]);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                       L"Skipping: %s for %s: %s (already in the right state)");
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
        }
LAB_146e855ce:
        this->ActiveInstanceIdx = uVar2;
      }
      iVar18 = param_1->ArrayNum;
      local_e8 = local_e8 + 1;
      local_e0 = local_e0 + 0x18;
    } while ((int)local_e8 < iVar18);
  }
  return;
}

// CalculateRelativePriority @ 146e85e60

EBTNodeRelativePriority __thiscall
UBehaviorTreeComponent::CalculateRelativePriority
          (UBehaviorTreeComponent *this,UBTNode *param_1,UBTNode *param_2)

{
  EBTNodeRelativePriority EVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return Same;
  }
  iVar2 = FindInstanceContainingNode(this,param_1);
  iVar3 = FindInstanceContainingNode(this,param_2);
  if (iVar2 == iVar3) {
    EVar1 = -(param_1->ExecutionIndex < param_2->ExecutionIndex) & Higher;
  }
  else if ((iVar2 == -1) || (iVar3 == -1)) {
    EVar1 = Lower;
    if (iVar2 != -1) {
      EVar1 = Higher;
    }
  }
  else {
    EVar1 = Lower;
    if (iVar2 < iVar3) {
      EVar1 = Higher;
    }
  }
  return EVar1;
}

// Cleanup @ 146e863c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::Cleanup(UBehaviorTreeComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FBehaviorTreeInstanceId *pFVar3;
  FBehaviorTreeInstance *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_Cleanup> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  longlong lVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar15.Value = 0;
  FVar10 = StatPtr_STAT_AI_BehaviorTree_Cleanup;
  if (StatPtr_STAT_AI_BehaviorTree_Cleanup ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_Cleanup>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_AI_BehaviorTree_Cleanup");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_Cleanup>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_Cleanup,*pFVar9,
                        L"BT Cleanup Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                   ,0x1ee);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      FVar15.Value = FVar13.Value;
      goto LAB_146e86527;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_146e86527:
  if ((this->SuspendedBranchActions & Cleanup) == None) {
    StopTree(this,Forced);
    RemoveAllInstances(this);
    piVar1 = &(this->KnownInstances).ArrayMax;
    pFVar3 = (FBehaviorTreeInstanceId *)(this->KnownInstances).AllocatorInstance.Data;
    iVar8 = (this->KnownInstances).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FBehaviorTreeInstanceId,int>(pFVar3,iVar8);
      (this->KnownInstances).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->KnownInstances).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FBehaviorTreeInstanceId,int>(pFVar3,iVar8);
      (this->KnownInstances).ArrayNum = 0;
    }
    piVar1 = &(this->InstanceStack).ArrayMax;
    pFVar4 = (FBehaviorTreeInstance *)(this->InstanceStack).AllocatorInstance.Data;
    iVar8 = (this->InstanceStack).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FBehaviorTreeInstance,int>(pFVar4,iVar8);
      (this->InstanceStack).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,&(this->InstanceStack).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FBehaviorTreeInstance,int>(pFVar4,iVar8);
      (this->InstanceStack).ArrayNum = 0;
    }
    (this->NodeInstances).ArrayNum = 0;
    if ((this->NodeInstances).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->NodeInstances).AllocatorInstance,0,&(this->NodeInstances).ArrayMax);
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"Cleanup queued up");
    }
    iVar8 = (this->PendingBranchActionRequests).ArrayNum;
    piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
    }
    (this->PendingBranchActionRequests).ArrayNum = iVar8 + 1;
    lVar12 = (longlong)iVar8;
    pFVar2 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + lVar12 * 0x10) = 0;
    *(undefined4 *)(pFVar2 + lVar12 * 0x10 + 8) = 0;
    *(undefined2 *)(pFVar2 + lVar12 * 0x10 + 0xc) = 0x400;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// CopyInstanceMemoryFromPersistent @ 146e86b30

void __thiscall
UBehaviorTreeComponent::CopyInstanceMemoryFromPersistent(UBehaviorTreeComponent *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FBehaviorTreeInstance *this_00;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->InstanceStack).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->InstanceStack).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FBehaviorTreeInstance *)((this->InstanceStack).AllocatorInstance.Data + lVar6);
      bVar1 = this_00->InstanceIdIndex;
      if (((this->KnownInstances).ArrayNum <= (int)(uint)bVar1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FBehaviorTreeInstance::SetInstanceMemory
                (this_00,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                         ((this->KnownInstances).AllocatorInstance.Data +
                         (ulonglong)bVar1 * 0x38 + 0x20));
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x68;
    } while ((int)uVar5 < (this->InstanceStack).ArrayNum);
  }
  return;
}

// CopyInstanceMemoryToPersistent @ 146e86c50

void __thiscall UBehaviorTreeComponent::CopyInstanceMemoryToPersistent(UBehaviorTreeComponent *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->InstanceStack).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (this->InstanceStack).AllocatorInstance.Data;
      FVar1 = pFVar7[lVar9 + 0x40];
      if (((this->KnownInstances).ArrayNum <= (int)(uint)(byte)FVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _Src = *(void **)(pFVar7 + lVar9 + 0x30);
      iVar2 = *(int *)(pFVar7 + lVar9 + 0x38);
      pFVar7 = (this->KnownInstances).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = pFVar7 + (ulonglong)(byte)FVar1 * 0x38 + 0x20;
      iVar3 = *(int *)(pFVar7 + 0xc);
      *(int *)&pFVar7[8].field_0x0 = iVar2;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *(int *)(pFVar7 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,iVar3,(ForAnyElementType *)pFVar7,iVar2,(int *)(pFVar7 + 0xc));
        if (iVar2 != 0) {
          memcpy(*(void **)&pFVar7->field_0x0,_Src,(longlong)iVar2);
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x68;
    } while ((int)uVar8 < (this->InstanceStack).ArrayNum);
  }
  return;
}

// DeactivateBranch @ 146e876f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::DeactivateBranch(UBehaviorTreeComponent *this,UBTDecorator *param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  UBTCompositeNode *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UBTDecorator *local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar6 = IsExecutingBranch(this,(UBTNode *)param_1,
                            (uint)*(byte *)((longlong)&param_1->_padding_ + 1));
  if (bVar6) {
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_68,(UBTNode *)param_1);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"%s, Branch deactivation resulted in an evaluate branch");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    EvaluateBranch(this,param_1);
    return;
  }
  if (((param_1->_padding_ != 0) &&
      ((int)(uint)*(byte *)((longlong)&param_1->_padding_ + 1) < *(int *)(param_1->_padding_ + 0x60)
      )) || (local_res10 = param_1,
            bVar6 = `UBehaviorTreeComponent::DeactivateBranch'::__l9::<lambda_1>::operator()
                              (&local_res10), bVar6)) {
    if ((this->bWaitingForLatentAborts != '\0') ||
       ((((this->PendingExecution).NextTask.field0_0x0.DebugPtr != (UBTTaskNode *)0x0 ||
         ((this->PendingExecution).bOutOfNodes != 0)) && ((this->PendingExecution).bLocked == 0))))
    {
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(&local_58,(UBTNode *)param_1);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"%s, Branch deactivation resulted in a reevaluation of the parent composite node because the abort was pending"
                  );
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      iVar7 = FindInstanceContainingNode(this,(UBTNode *)param_1);
      RequestExecution(this,(UBTCompositeNode *)param_1->_padding_,iVar7,(UBTNode *)param_1,-1,
                       Aborted,true);
    }
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_48,(UBTNode *)param_1);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"%s, Branch deactivation resulted in aux nodes unregistration");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    lVar3 = param_1->_padding_;
    bVar2 = *(byte *)((longlong)&param_1->_padding_ + 1);
    if ((*(int *)(lVar3 + 0x60) <= (int)(uint)bVar2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar4 = *(UBTCompositeNode **)(*(longlong *)(lVar3 + 0x58) + (ulonglong)bVar2 * 0x30);
    if (pUVar4 != (UBTCompositeNode *)0x0) {
      if ((this->SuspendedBranchActions & UnregisterAuxNodes) == None) {
        UnregisterAuxNodesInBranch(this,pUVar4,true);
      }
      else {
        if (FVisualLogger::bIsRecording != 0) {
          UBehaviorTreeTypes::DescribeNodeHelper(&local_38,(UBTNode *)param_1);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                     L"%s, unregister aux nodes in branch queued up");
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        iVar7 = (this->PendingBranchActionRequests).ArrayNum;
        piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
        }
        pFVar8 = (this->PendingBranchActionRequests).AllocatorInstance.Data + (longlong)iVar7 * 0x10
        ;
        (this->PendingBranchActionRequests).ArrayNum = iVar7 + 1;
        *(UBTCompositeNode **)pFVar8 = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        *(undefined4 *)(pFVar8 + 8) = 0;
        *(undefined2 *)(pFVar8 + 0xc) = 0x10;
      }
    }
  }
  else if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeHelper(&local_28,(UBTNode *)param_1);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,
               L"The decorator %s does not have a parent or is not a valid child.");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// DeactivateUpTo @ 146e87a90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UBehaviorTreeComponent::DeactivateUpTo
          (UBehaviorTreeComponent *this,UBTCompositeNode *param_1,ushort param_2,Type *param_3,
          int *param_4)

{
  int *piVar1;
  TArray<FBehaviorTreeSearchUpdateNotify,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  UBTCompositeNode *pUVar11;
  UBTCompositeNode *this_00;
  FName local_res8;
  undefined4 local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  uVar9 = this->ActiveInstanceIdx;
  if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar6 = true;
  pUVar11 = *(UBTCompositeNode **)
             ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar9 * 0x68 + 8);
  if (pUVar11 == (UBTCompositeNode *)0x0) {
    uVar9 = this->ActiveInstanceIdx;
    if (uVar9 <= param_2) {
      return true;
    }
    if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar6 = false;
    pUVar11 = *(UBTCompositeNode **)
               ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar9 * 0x68);
    if (pUVar11 == (UBTCompositeNode *)0x0) {
      return true;
    }
  }
  do {
    this_00 = (UBTCompositeNode *)pUVar11->_padding_;
    if (this_00 == (UBTCompositeNode *)0x0) {
      if (bVar6) {
        uVar9 = this->ActiveInstanceIdx;
        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        UBTCompositeNode::OnNodeDeactivation
                  (*(UBTCompositeNode **)
                    ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar9 * 0x68),
                   &this->SearchData,param_3);
      }
      if (FVisualLogger::bIsRecording != 0) {
        uVar9 = this->ActiveInstanceIdx;
        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        UBehaviorTreeTypes::DescribeNodeHelper
                  (&local_50,
                   *(UBTNode **)
                    ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar9 * 0x68));
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                   (FName *)&LogBehaviorTree.field_0x4,Verbose,L"%s node: %s [leave subtree]");
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = true;
      if (this->ActiveInstanceIdx == 0) {
        if (FVisualLogger::bIsRecording != 0) {
          lVar4 = ((this->SearchData).OwnerComp)->_padding_;
          if (lVar4 == 0) {
            ::FString::FString(&local_70,L"None");
          }
          else {
            local_res8 = *(FName *)(lVar4 + 0x18);
            ::FName::ToString(&local_res8,&local_70);
          }
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                     (FName *)&LogBehaviorTree.field_0x4,Error,
                     L"Execution path does NOT contain common parent node, restarting tree! AI:%s");
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        RestartTree(this,ForceReevaluateRootNode);
        return false;
      }
      pTVar2 = &(this->SearchData).PendingNotifies;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      local_78._0_3_ = CONCAT12((char)*param_3,this->ActiveInstanceIdx);
      if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar3 + (longlong)(this->SearchData).PendingNotifies.ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar10 = (this->SearchData).PendingNotifies.ArrayNum;
      piVar1 = &(this->SearchData).PendingNotifies.ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x204,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SearchData).PendingNotifies.ArrayNum = iVar10 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_78;
      uVar9 = this->ActiveInstanceIdx - 1;
      this->ActiveInstanceIdx = uVar9;
      if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      this_00 = *(UBTCompositeNode **)
                 ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar9 * 0x68 + 8);
    }
    else {
      iVar10 = UBTCompositeNode::GetChildIndex(this_00,&this->SearchData,(UBTNode *)pUVar11);
      *param_4 = iVar10;
      UBTCompositeNode::OnChildDeactivation
                (this_00,&this->SearchData,iVar10,param_3,this->ActiveInstanceIdx <= param_2);
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(&local_60,(UBTNode *)pUVar11);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                   (FName *)&LogBehaviorTree.field_0x4,Verbose,L"Deactivate node: %s");
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((this_00 == param_1) || (pUVar11 = this_00, this_00 == (UBTCompositeNode *)0x0)) {
      return true;
    }
  } while( true );
}

// DescribeActiveTasks @ 146e87fc0

FString * __thiscall
UBehaviorTreeComponent::DescribeActiveTasks
          (UBehaviorTreeComponent *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,L"None");
  iVar1 = (this->InstanceStack).ArrayNum;
  uVar11 = 0;
  if (iVar1 != 0) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
    lVar8 = (longlong)(this->InstanceStack).ArrayNum * 0x68;
    pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
    if (pFVar2[lVar8 + -0x27] == (FScriptContainerElement)0x1) {
      pFVar7 = UBehaviorTreeTypes::DescribeNodeHelper
                         (&local_48,*(UBTNode **)(pFVar2 + lVar8 + -0x60));
      if (__return_storage_ptr__ != pFVar7) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  uVar5 = 0;
  uVar14 = uVar11;
  if (0 < (this->InstanceStack).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar6 = uVar5;
      if ((int)uVar10 < (this->InstanceStack).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar2 + uVar14 + 0x28);
      puVar9 = *(undefined8 **)(pFVar2 + uVar14 + 0x20);
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      puVar12 = puVar9 + (longlong)iVar1 * 2;
      for (; puVar9 != puVar12; puVar9 = puVar9 + 2) {
        if (*(int *)(puVar9 + 1) == 0) {
          pFVar7 = UBehaviorTreeTypes::DescribeNodeHelper(&local_38,(UBTNode *)*puVar9);
          iVar1 = (pFVar7->Data).ArrayNum;
          uVar6 = iVar1 - 1;
          if (iVar1 == 0) {
            uVar6 = uVar5;
          }
          ::FString::AppendChars(&local_68,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,uVar6);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          ::FString::AppendChars(&local_68,L", ",2);
        }
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar14 = uVar14 + 0x68;
    } while ((int)(uVar10 + 1) < (this->InstanceStack).ArrayNum);
  }
  uVar6 = local_68.Data.ArrayNum - 1;
  if (local_68.Data.ArrayNum == 0) {
    uVar6 = uVar5;
  }
  if (0 < (int)uVar6) {
    ::FString::AppendChars(__return_storage_ptr__,L" (",2);
    uVar6 = local_68.Data.ArrayNum - 1;
    if (local_68.Data.ArrayNum == 0) {
      uVar6 = uVar5;
    }
    if ((int)(uVar6 - 2) < (int)uVar6) {
      uVar6 = uVar6 - 2;
    }
    uVar10 = uVar5;
    if (0 < (int)uVar6) {
      uVar10 = uVar6;
    }
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar13.Data = local_68.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)FVar13.Data,uVar10);
    uVar6 = local_58.Data.ArrayNum - 1;
    if (local_58.Data.ArrayNum == 0) {
      uVar6 = uVar5;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar6);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(__return_storage_ptr__,L')');
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DescribeActiveTrees @ 146e882f0

FString * __thiscall
UBehaviorTreeComponent::DescribeActiveTrees
          (UBehaviorTreeComponent *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar4 = false;
  bVar3 = true;
  uVar10 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  uVar11 = 0;
  uVar12 = uVar10;
  uVar6 = 0;
  if (0 < (this->InstanceStack).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = uVar11;
      if ((int)uVar9 < (this->InstanceStack).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      FVar1 = (this->InstanceStack).AllocatorInstance.Data[uVar12 + 0x40];
      if (((this->KnownInstances).ArrayNum <= (int)(uint)(byte)FVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      local_res8 = *(FName *)(*(longlong *)
                               ((this->KnownInstances).AllocatorInstance.Data +
                               (ulonglong)(byte)FVar1 * 0x38) + 0x18);
      ::FName::ToString(&local_res8,&local_58);
      uVar6 = local_58.Data.ArrayNum - 1;
      if (local_58.Data.ArrayNum == 0) {
        uVar6 = uVar11;
      }
      ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar6);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_68,L", ",2);
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 0x68;
    } while ((int)(uVar9 + 1) < (this->InstanceStack).ArrayNum);
    uVar6 = local_68.Data.ArrayNum;
  }
  uVar9 = uVar6 - 1;
  if (uVar6 == 0) {
    uVar9 = 0;
  }
  if (uVar9 == 0) {
    pFVar7 = ::FString::FString(&local_38,L"None");
  }
  else {
    if ((int)(uVar9 - 2) < (int)uVar9) {
      uVar9 = uVar9 - 2;
    }
    if (0 < (int)uVar9) {
      uVar11 = uVar9;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (uVar6 != 0) {
      FVar8.Data = local_68.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)FVar8.Data,uVar11);
    pFVar7 = &local_48;
    bVar4 = true;
    bVar3 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DescribeSelfToVisLog @ 146e88560

/* WARNING: Removing unreachable block (ram,0x000146e890d8) */
/* WARNING: Removing unreachable block (ram,0x000146e88f7e) */
/* WARNING: Removing unreachable block (ram,0x000146e88a84) */
/* WARNING: Removing unreachable block (ram,0x000146e8929b) */
/* WARNING: Removing unreachable block (ram,0x000146e897dd) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::DescribeSelfToVisLog(UBehaviorTreeComponent *this,FVisualLogEntry *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement *pFVar5;
  UBTNode *this_00;
  short *psVar6;
  void *_Src;
  FVisualLogStatusCategory *pFVar7;
  code *pcVar8;
  TMap<FGameplayTag,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FString *pFVar14;
  longlong lVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  int iVar19;
  short *psVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint uVar24;
  UBTCompositeNode *this_01;
  uint uVar25;
  undefined1 *puVar26;
  uint *puVar27;
  TMap<FGameplayTag,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>_>
  *pTVar28;
  ulonglong uVar29;
  Type TVar30;
  uint uVar31;
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_318;
  undefined8 local_310;
  FVisualLogStatusCategory local_308;
  undefined8 local_2d0;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FVisualLogStatusCategory local_278;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  int *local_1d0;
  FString local_1c8;
  int local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  TMap<FGameplayTag,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  FName local_130;
  int local_128;
  TMap<FGameplayTag,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  void *local_90 [2];
  FString local_80 [2];
  undefined4 local_54;
  
  if ((this == (UBehaviorTreeComponent *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Test",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                          ,0x760,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    UBrainComponent::DescribeSelfToVisLog((UBrainComponent *)this,param_1);
    uVar16 = 0;
    local_res20 = 0;
    local_2d0 = 1;
    if (0 < (this->InstanceStack).ArrayNum) {
      local_1d0 = &(param_1->Status).ArrayMax;
      uVar29 = uVar16;
      do {
        TVar30 = (Type)local_2d0;
        uVar31 = 0;
        if ((int)(uint)uVar16 < (this->InstanceStack).ArrayNum) {
          uVar31 = ~(uint)uVar16 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (this->InstanceStack).AllocatorInstance.Data;
        FVar4 = pFVar5[uVar29 + 0x40];
        if (((this->KnownInstances).ArrayNum <= (int)(uint)(byte)FVar4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar13 = (this->KnownInstances).AllocatorInstance.Data;
        local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.Data.ArrayNum = 0;
        local_308.Data.ArrayMax = 0;
        ::FName::ToString(&UE::VisualLogger::NAME_UnnamedCategory,&local_308.Category);
        local_308.UniqueId = -1;
        local_308.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.Children.ArrayNum = 0;
        local_308.Children.ArrayMax = 0;
        lVar15 = *(longlong *)(pFVar13 + (ulonglong)(byte)FVar4 * 0x38);
        if (lVar15 == 0) {
          ::FString::FString(&local_1c8,L"None");
        }
        else {
          local_130 = *(FName *)(lVar15 + 0x18);
          ::FName::ToString(&local_130,&local_1c8);
        }
        ::FString::PrintfImpl(&local_1f0,L"BehaviorTree %d (asset: %s)");
        if (local_308.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Category.Data.AllocatorInstance.Data);
        }
        local_308.Category.Data.AllocatorInstance.Data = local_1f0.Data.AllocatorInstance.Data;
        local_308.Category.Data.ArrayNum = local_1f0.Data.ArrayNum;
        local_308.Category.Data.ArrayMax = local_1f0.Data.ArrayMax;
        local_1f0.Data.ArrayNum = 0;
        local_1f0.Data.ArrayMax = 0;
        local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        if (*(int *)(pFVar5 + uVar29 + 0x18) < 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else if (0 < *(int *)(pFVar5 + uVar29 + 0x18)) {
          puVar23 = *(undefined8 **)(pFVar5 + uVar29 + 0x10);
          local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e0.Data.ArrayNum = 0;
          local_1e0.Data.ArrayMax = 0;
          iVar11 = *(int *)(pFVar5 + uVar29 + 0x18);
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar3 = puVar23 + iVar11;
          for (; puVar23 != puVar3; puVar23 = puVar23 + 1) {
            this_00 = (UBTNode *)*puVar23;
            (**(code **)(this_00->_padding_ + 0x2f0))(this_00,local_90);
            UBTNode::GetNodeName(this_00,&local_a0);
            ::FString::PrintfImpl(&local_1b0,L"%d. %s: %s\n");
            iVar11 = local_1b0.Data.ArrayNum + -1;
            if (local_1b0.Data.ArrayNum == 0) {
              iVar11 = 0;
            }
            ::FString::AppendChars
                      (&local_1e0,(wchar_t *)local_1b0.Data.AllocatorInstance.Data,iVar11);
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if (local_90[0] != (void *)0x0) {
              FMemory::Free(local_90[0]);
            }
          }
          ::FString::FString(&local_1a0,L"Observers");
          FVar17.Data = local_1a0.Data.AllocatorInstance.Data;
          local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar11 = local_1a0.Data.ArrayNum;
          local_240.Data.ArrayNum = iVar11;
          if (iVar11 == 0) {
            local_240.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,0,(ForAnyElementType *)&local_240,iVar11,&local_240.Data.ArrayMax)
            ;
            memcpy(local_240.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar11 * 2);
          }
          pFVar14 = ::FString::AppendChar(&local_240,L'|');
          ::FString::ConcatFF(&local_2c8,pFVar14,&local_1e0);
          if (((local_308.Data.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2c8) &&
              ((FScriptContainerElement *)&local_2c8 <
               local_308.Data.AllocatorInstance.Data + (longlong)local_308.Data.ArrayMax * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = local_308.Data.ArrayNum;
          if (local_308.Data.ArrayNum == local_308.Data.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)&local_308,&local_308.Data.ArrayMax);
          }
          local_308.Data.ArrayNum = iVar11 + 1;
          lVar15 = (longlong)iVar11;
          *(undefined8 *)(local_308.Data.AllocatorInstance.Data + lVar15 * 0x10) = 0;
          *(FScriptContainerElement **)(local_308.Data.AllocatorInstance.Data + lVar15 * 0x10) =
               local_2c8.Data.AllocatorInstance.Data;
          *(int *)(local_308.Data.AllocatorInstance.Data + lVar15 * 0x10 + 8) =
               local_2c8.Data.ArrayNum;
          *(int *)(local_308.Data.AllocatorInstance.Data + lVar15 * 0x10 + 0xc) =
               local_2c8.Data.ArrayMax;
          local_2c8.Data.ArrayNum = 0;
          local_2c8.Data.ArrayMax = 0;
          local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          TVar30 = (Type)local_2d0;
        }
        uVar16 = 0;
        local_318.Data = (FScriptContainerElement *)0x0;
        local_310 = 0;
        this_01 = *(UBTCompositeNode **)(pFVar5 + uVar29 + 8);
        if (this_01 != (UBTCompositeNode *)0x0) {
          do {
            lVar15 = *(longlong *)(pFVar5 + uVar29 + 0x30);
            if ((*(int *)(pFVar5 + uVar29 + 0x38) < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar13 = (FScriptContainerElement *)
                      UBTNode::GetRuntimeDescription
                                ((UBTNode *)this_01,local_80,this,
                                 (uchar *)((ulonglong)*(ushort *)((longlong)&this_01->_padding_ + 2)
                                          + lVar15),TVar30);
            if (((local_318.Data <= pFVar13) &&
                (pFVar13 < local_318.Data + (longlong)local_310._4_4_ * 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = (int)local_310;
            if ((int)local_310 == local_310._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_318,(int *)((longlong)&local_310 + 4));
            }
            local_310 = CONCAT44(local_310._4_4_,iVar11 + 1);
            lVar15 = (longlong)iVar11;
            *(undefined8 *)(local_318.Data + lVar15 * 0x10) = 0;
            *(undefined8 *)(local_318.Data + lVar15 * 0x10) = *(undefined8 *)pFVar13;
            *(undefined8 *)pFVar13 = 0;
            *(int *)(local_318.Data + lVar15 * 0x10 + 8) = *(int *)(pFVar13 + 8);
            *(int *)(local_318.Data + lVar15 * 0x10 + 0xc) = *(int *)(pFVar13 + 0xc);
            *(undefined8 *)(pFVar13 + 8) = 0;
            if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
            }
            this_01 = (((TObjectPtr<UBTCompositeNode> *)&this_01->_padding_)->field0_0x0).DebugPtr;
          } while (this_01 != (UBTCompositeNode *)0x0);
          uVar16 = local_310 & 0xffffffff;
        }
        uVar31 = (int)uVar16 - 1;
        if (-1 < (int)uVar31) {
          lVar15 = (longlong)(int)uVar31 << 4;
          do {
            uVar24 = ~uVar31 >> 0x1f;
            uVar22 = 0;
            if ((int)uVar31 < (int)uVar16) {
              uVar22 = uVar24;
            }
            iVar11 = (int)uVar16;
            if (uVar22 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar11 = (int)local_310;
            }
            psVar6 = *(short **)(local_318.Data + lVar15);
            for (psVar20 = psVar6; psVar20 != psVar6 + *(int *)(local_318.Data + lVar15 + 8);
                psVar20 = psVar20 + 1) {
              if (*psVar20 == 0x2c) {
                uVar22 = (uint)((longlong)psVar20 - (longlong)psVar6 >> 1);
                if (uVar22 != 0xffffffff) {
                  uVar12 = 0;
                  if ((int)uVar31 < iVar11) {
                    uVar12 = uVar24;
                  }
                  if ((uVar12 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar11 = *(int *)(local_318.Data + lVar15 + 8);
                  uVar12 = iVar11 - 1;
                  if (iVar11 == 0) {
                    uVar12 = 0;
                  }
                  if ((int)uVar22 < (int)uVar12) {
                    uVar12 = uVar22;
                  }
                  uVar25 = 0;
                  if (0 < (int)uVar12) {
                    uVar25 = uVar12;
                  }
                  if (iVar11 == 0) {
                    pwVar18 = L"";
                  }
                  else {
                    pwVar18 = *(wchar_t **)(local_318.Data + lVar15);
                  }
                  ::FString::ConstructFromPtrSize(&local_190,pwVar18,uVar25);
                  uVar12 = 0;
                  if ((int)uVar31 < (int)local_310) {
                    uVar12 = uVar24;
                  }
                  if ((uVar12 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  ::FString::RightChop((FString *)(local_318.Data + lVar15),&local_f0,uVar22 + 1);
                  ::FString::TrimStart(&local_f0,&local_e0);
                  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                  }
                  FVar17.Data = local_190.Data.AllocatorInstance.Data;
                  local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar11 = local_190.Data.ArrayNum;
                  local_230.Data.ArrayNum = iVar11;
                  if (iVar11 == 0) {
                    local_230.Data.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar11,0,(ForAnyElementType *)&local_230,iVar11,
                               &local_230.Data.ArrayMax);
                    memcpy(local_230.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar11 * 2);
                  }
                  pFVar14 = ::FString::AppendChar(&local_230,L'|');
                  ::FString::ConcatFF(&local_2b8,pFVar14,&local_e0);
                  if (((local_308.Data.AllocatorInstance.Data <=
                        (FScriptContainerElement *)&local_2b8) &&
                      ((FScriptContainerElement *)&local_2b8 <
                       local_308.Data.AllocatorInstance.Data +
                       (longlong)local_308.Data.ArrayMax * 0x10)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar11 = local_308.Data.ArrayNum;
                  if (local_308.Data.ArrayNum == local_308.Data.ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,(ForAnyElementType *)&local_308,
                                        &local_308.Data.ArrayMax);
                  }
                  local_308.Data.ArrayNum = iVar11 + 1;
                  lVar21 = (longlong)iVar11;
                  *(undefined8 *)(local_308.Data.AllocatorInstance.Data + lVar21 * 0x10) = 0;
                  *(FScriptContainerElement **)
                   (local_308.Data.AllocatorInstance.Data + lVar21 * 0x10) =
                       local_2b8.Data.AllocatorInstance.Data;
                  *(int *)(local_308.Data.AllocatorInstance.Data + lVar21 * 0x10 + 8) =
                       local_2b8.Data.ArrayNum;
                  *(int *)(local_308.Data.AllocatorInstance.Data + lVar21 * 0x10 + 0xc) =
                       local_2b8.Data.ArrayMax;
                  local_2b8.Data.ArrayNum = 0;
                  local_2b8.Data.ArrayMax = 0;
                  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_230.Data.AllocatorInstance.Data);
                  }
                  FVar17.Data = local_190.Data.AllocatorInstance.Data;
                  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                    FVar17.Data = local_190.Data.AllocatorInstance.Data;
                  }
                  goto LAB_146e890f2;
                }
                break;
              }
            }
            ::FString::FString(&local_d0,L"");
            uVar22 = 0;
            if ((int)uVar31 < (int)local_310) {
              uVar22 = uVar24;
            }
            if ((uVar22 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_220.Data.ArrayNum = *(int *)(local_318.Data + lVar15 + 8);
            lVar21 = (longlong)local_220.Data.ArrayNum;
            _Src = *(void **)(local_318.Data + lVar15);
            if (local_220.Data.ArrayNum == 0) {
              local_220.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_220.Data.ArrayNum,0,(ForAnyElementType *)&local_220,
                         local_220.Data.ArrayNum,&local_220.Data.ArrayMax);
              memcpy(local_220.Data.AllocatorInstance.Data,_Src,lVar21 * 2);
            }
            pFVar14 = ::FString::AppendChar(&local_220,L'|');
            ::FString::ConcatFF(&local_2a8,pFVar14,&local_d0);
            if (((local_308.Data.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2a8) &&
                ((FScriptContainerElement *)&local_2a8 <
                 local_308.Data.AllocatorInstance.Data + (longlong)local_308.Data.ArrayMax * 0x10))
               && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = local_308.Data.ArrayNum;
            if (local_308.Data.ArrayNum == local_308.Data.ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)&local_308,&local_308.Data.ArrayMax);
            }
            local_308.Data.ArrayNum = iVar11 + 1;
            lVar21 = (longlong)iVar11;
            *(undefined8 *)(local_308.Data.AllocatorInstance.Data + lVar21 * 0x10) = 0;
            *(FScriptContainerElement **)(local_308.Data.AllocatorInstance.Data + lVar21 * 0x10) =
                 local_2a8.Data.AllocatorInstance.Data;
            *(int *)(local_308.Data.AllocatorInstance.Data + lVar21 * 0x10 + 8) =
                 local_2a8.Data.ArrayNum;
            *(int *)(local_308.Data.AllocatorInstance.Data + lVar21 * 0x10 + 0xc) =
                 local_2a8.Data.ArrayMax;
            local_2a8.Data.ArrayNum = 0;
            local_2a8.Data.ArrayMax = 0;
            local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar17.Data = local_d0.Data.AllocatorInstance.Data;
            if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_220.Data.AllocatorInstance.Data);
              FVar17.Data = local_d0.Data.AllocatorInstance.Data;
            }
LAB_146e890f2:
            if (FVar17.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar17.Data);
            }
            lVar15 = lVar15 + -0x10;
            uVar31 = uVar31 - 1;
            if ((int)uVar31 < 0) break;
            uVar16 = local_310 & 0xffffffff;
          } while( true );
        }
        if (local_308.Data.ArrayNum == 0) {
          ::FString::FString(&local_c0,L"not initialized");
          ::FString::FString(&local_180,L"root");
          FVar17.Data = local_180.Data.AllocatorInstance.Data;
          local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar11 = local_180.Data.ArrayNum;
          local_210.Data.ArrayNum = iVar11;
          if (iVar11 == 0) {
            local_210.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,0,(ForAnyElementType *)&local_210,iVar11,&local_210.Data.ArrayMax)
            ;
            memcpy(local_210.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar11 * 2);
          }
          pFVar14 = ::FString::AppendChar(&local_210,L'|');
          ::FString::ConcatFF(&local_298,pFVar14,&local_c0);
          if (((local_308.Data.AllocatorInstance.Data <= (FScriptContainerElement *)&local_298) &&
              ((FScriptContainerElement *)&local_298 <
               local_308.Data.AllocatorInstance.Data + (longlong)local_308.Data.ArrayMax * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = local_308.Data.ArrayNum;
          if (local_308.Data.ArrayNum == local_308.Data.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)&local_308,&local_308.Data.ArrayMax);
          }
          local_308.Data.ArrayNum = iVar11 + 1;
          lVar15 = (longlong)iVar11;
          *(undefined8 *)(local_308.Data.AllocatorInstance.Data + lVar15 * 0x10) = 0;
          *(FScriptContainerElement **)(local_308.Data.AllocatorInstance.Data + lVar15 * 0x10) =
               local_298.Data.AllocatorInstance.Data;
          *(int *)(local_308.Data.AllocatorInstance.Data + lVar15 * 0x10 + 8) =
               local_298.Data.ArrayNum;
          *(int *)(local_308.Data.AllocatorInstance.Data + lVar15 * 0x10 + 0xc) =
               local_298.Data.ArrayMax;
          local_298.Data.ArrayNum = 0;
          local_298.Data.ArrayMax = 0;
          local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
        piVar1 = local_1d0;
        pFVar7 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
        if (((pFVar7 <= &local_308) && (&local_308 < pFVar7 + *local_1d0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (param_1->Status).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&(param_1->Status).AllocatorInstance,piVar1);
        }
        (param_1->Status).ArrayNum = iVar11 + 1;
        FVisualLogStatusCategory::FVisualLogStatusCategory
                  ((FVisualLogStatusCategory *)
                   ((param_1->Status).AllocatorInstance.Data + (longlong)iVar11 * 0x38),&local_308);
        DestructItems<FString,int>((FString *)local_318.Data,(int)local_310);
        if (local_318.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data);
        }
        TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_>::
        ~TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_>(&local_308.Children);
        if (local_308.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Category.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_308.Data.AllocatorInstance.Data,local_308.Data.ArrayNum);
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        uVar29 = uVar29 + 0x68;
        local_res20 = local_res20 + 1;
        uVar16 = (ulonglong)local_res20;
      } while ((int)local_res20 < (this->InstanceStack).ArrayNum);
    }
    if (0 < *(int *)&(this->CooldownTagsMap).field_0x8 - *(int *)&(this->CooldownTagsMap).field_0x34
       ) {
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      ::FName::ToString(&UE::VisualLogger::NAME_UnnamedCategory,&local_278.Category);
      local_278.UniqueId = -1;
      local_278.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.Children.ArrayNum = 0;
      local_278.Children.ArrayMax = 0;
      ::FString::operator=(&local_278.Category,L"Cooldown Tags");
      pTVar28 = &this->CooldownTagsMap;
      local_140 = 0;
      puVar2 = &(this->CooldownTagsMap).field_0x10;
      iVar11 = *(int *)&(this->CooldownTagsMap).field_0x28;
      iStack_144 = 0;
      iStack_158 = 0;
      if (iVar11 == 0) {
LAB_146e894e3:
        uStack_154 = (uint)local_2d0;
      }
      else {
        puVar27 = *(uint **)&(this->CooldownTagsMap).field_0x20;
        if (puVar27 == (uint *)0x0) {
          puVar27 = (uint *)puVar2;
        }
        uStack_154 = *puVar27;
        while (uStack_154 == 0) {
          lVar15 = (longlong)iStack_158;
          local_140 = local_140 + 0x20;
          iStack_158 = iStack_158 + 1;
          iStack_144 = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158)
          goto LAB_146e894e3;
          uStack_154 = puVar27[lVar15 + 1];
        }
        uStack_154 = -uStack_154 & uStack_154;
        uVar16 = (ulonglong)uStack_154 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_128 = (int)lVar15;
        iStack_144 = local_128 + -1 + local_140;
        if (iVar11 < iStack_144) {
          iStack_144 = iVar11;
        }
      }
      uStack_13c = local_54;
      iStack_138 = *(int *)&(this->CooldownTagsMap).field_0x8 -
                   *(int *)&(this->CooldownTagsMap).field_0x34;
      uVar31 = *(uint *)&(this->CooldownTagsMap).field_0x28;
      uStack_148 = 0xffffffff;
      uVar22 = uVar31 & 0xffffffe0;
      TStack_118._padding_ = CONCAT44(uStack_154,iStack_158);
      TStack_118.CurrentBitIndex = iStack_144;
      TStack_118.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar31 >> 5;
      TStack_118._28_4_ = local_54;
      TStack_118.BaseBitIndex = local_140;
      uStack_f8 = CONCAT44(uStack_134,iStack_138);
      local_160 = pTVar28;
      local_150 = puVar2;
      local_120 = pTVar28;
      TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar31 < 0) || (iVar11 < (int)uVar31)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar24 = *(uint *)&(this->CooldownTagsMap).field_0x28;
      if (uVar31 != uVar24) {
        puVar26 = *(undefined1 **)&(this->CooldownTagsMap).field_0x20;
        if (puVar26 == (undefined1 *)0x0) {
          puVar26 = puVar2;
        }
        uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar19 * 4);
        while (uVar31 == 0) {
          lVar15 = (longlong)iVar19;
          uVar22 = uVar22 + 0x20;
          iVar19 = iVar19 + 1;
          uVar31 = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_146e89622;
          uVar31 = *(uint *)(puVar26 + lVar15 * 4 + 4);
        }
        uVar16 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_1b8 = (int)lVar15;
        uVar31 = local_1b8 + -1 + uVar22;
        if ((int)uVar24 < (int)uVar31) {
          uVar31 = uVar24;
        }
      }
LAB_146e89622:
      while( true ) {
        pTVar9 = local_120;
        if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FGameplayTag,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        lVar15 = (longlong)TStack_118.CurrentBitIndex;
        if (((TStack_118.CurrentBitIndex == uVar31) &&
            (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar9 == pTVar28)) break;
        lVar21 = *(longlong *)pTVar9;
        ::FString::PrintfImpl(&local_b0,L"%.2fs");
        ::FName::ToString((FName *)(lVar21 + lVar15 * 0x18),&local_170);
        FVar17.Data = local_170.Data.AllocatorInstance.Data;
        local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = local_170.Data.ArrayNum;
        local_200.Data.ArrayNum = iVar11;
        if (iVar11 == 0) {
          local_200.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,0,(ForAnyElementType *)&local_200,iVar11,&local_200.Data.ArrayMax);
          memcpy(local_200.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar11 * 2);
        }
        pFVar14 = ::FString::AppendChar(&local_200,L'|');
        ::FString::ConcatFF(&local_288,pFVar14,&local_b0);
        if (((local_278.Data.AllocatorInstance.Data <= (FScriptContainerElement *)&local_288) &&
            ((FScriptContainerElement *)&local_288 <
             local_278.Data.AllocatorInstance.Data + (longlong)local_278.Data.ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = local_278.Data.ArrayNum;
        if (local_278.Data.ArrayNum == local_278.Data.ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&local_278,&local_278.Data.ArrayMax);
        }
        local_278.Data.ArrayNum = iVar11 + 1;
        lVar15 = (longlong)iVar11;
        *(undefined8 *)(local_278.Data.AllocatorInstance.Data + lVar15 * 0x10) = 0;
        *(FScriptContainerElement **)(local_278.Data.AllocatorInstance.Data + lVar15 * 0x10) =
             local_288.Data.AllocatorInstance.Data;
        *(int *)(local_278.Data.AllocatorInstance.Data + lVar15 * 0x10 + 8) =
             local_288.Data.ArrayNum;
        *(int *)(local_278.Data.AllocatorInstance.Data + lVar15 * 0x10 + 0xc) =
             local_288.Data.ArrayMax;
        local_288.Data.ArrayNum = 0;
        local_288.Data.ArrayMax = 0;
        local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
      }
      pFVar7 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
      if (((pFVar7 <= &local_278) && (&local_278 < pFVar7 + (param_1->Status).ArrayMax)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (param_1->Status).ArrayNum;
      piVar1 = &(param_1->Status).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(param_1->Status).AllocatorInstance,piVar1);
      }
      (param_1->Status).ArrayNum = iVar11 + 1;
      FVisualLogStatusCategory::FVisualLogStatusCategory
                ((FVisualLogStatusCategory *)
                 ((param_1->Status).AllocatorInstance.Data + (longlong)iVar11 * 0x38),&local_278);
      DestructItems<FVisualLogStatusCategory,int>
                ((FVisualLogStatusCategory *)local_278.Children.AllocatorInstance.Data,
                 local_278.Children.ArrayNum);
      if ((FVisualLogStatusCategory *)local_278.Children.AllocatorInstance.Data !=
          (FVisualLogStatusCategory *)0x0) {
        FMemory::Free(local_278.Children.AllocatorInstance.Data);
      }
      if (local_278.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Category.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_278.Data.AllocatorInstance.Data,local_278.Data.ArrayNum);
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// EndFrame @ 146e8a590

void __cdecl UBehaviorTreeComponent::EndFrame(void)

{
  code *pcVar1;
  double dVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  float fVar5;
  
  pTVar3 = CVarBTRecordFrameSearchTimes.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (pTVar3->ShadowedValue[0] != 0) {
    if (NumSearchTimeCalls < 1) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = (FrameSearchTime * __real_408f400000000000) / (double)NumSearchTimeCalls;
    }
    fVar5 = (float)NumSearchTimeCalls;
    FGenericPlatformMisc::CustomNamedStat
              ("BehaviorTreeSearchTimeFrameMs",(float)(FrameSearchTime * __real_408f400000000000),
               "BehaviorTree","MilliSecs");
    FGenericPlatformMisc::CustomNamedStat
              ("BehaviorTreeSearchCallsFrame",fVar5,"BehaviorTree","Count");
    FGenericPlatformMisc::CustomNamedStat
              ("BehaviorTreeSearchTimeFrameAvMs",(float)dVar2,"BehaviorTree","MilliSecs");
    FrameSearchTime = 0.0;
    NumSearchTimeCalls = 0;
  }
  return;
}

// EvaluateBranch @ 146e8a6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::EvaluateBranch(UBehaviorTreeComponent *this,UBTDecorator *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UBTDecorator *pUVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uchar uVar12;
  undefined1 auStackY_1f8 [32];
  FString local_1b0;
  FString *local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar12 = (param_1->FlowAbortMode).Value;
  if ((uVar12 != '\0') &&
     (iVar7 = FindInstanceContainingNode(this,(UBTNode *)param_1->_padding_), iVar7 != -1)) {
    iVar1 = (this->InstanceStack).ArrayNum;
    bVar6 = 0;
    uVar11 = iVar1 - 1;
    uVar8 = 0;
    if ((int)uVar11 < iVar1) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (this->InstanceStack).ArrayNum;
    pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
    if ((pFVar2[(longlong)iVar1 * 0x68 + -0x27] == (FScriptContainerElement)0x1) &&
       (pUVar3 = *(UBTDecorator **)(pFVar2 + (longlong)iVar1 * 0x68 + -0x60), param_1 != pUVar3)) {
      iVar9 = FindInstanceContainingNode(this,(UBTNode *)param_1);
      iVar10 = FindInstanceContainingNode(this,(UBTNode *)pUVar3);
      if (iVar9 == iVar10) {
        bVar6 = -((ushort)param_1->_padding_ < *(ushort *)&pUVar3->_padding_) & 2;
      }
      else if ((iVar9 == -1) || (iVar10 == -1)) {
        bVar6 = 0;
        if (iVar9 != -1) {
          bVar6 = 2;
        }
      }
      else if (iVar9 < iVar10) {
        bVar6 = 2;
      }
      if (bVar6 == 0) {
        UBehaviorTreeTypes::DescribeNodeHelper
                  (&local_188,*(UBTNode **)(pFVar2 + (longlong)iVar1 * 0x68 + -0x60));
        UBehaviorTreeTypes::DescribeNodeHelper(&local_198,(UBTNode *)param_1);
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UBehaviorTreeComponent::EvaluateBranch",0x26,Yes);
        ::FString::PrintfImpl
                  (&local_1b0,
                   L"%s: decorator %s requesting restart has lower priority than Current Task %s");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,L"%s");
        }
        local_1a0 = &local_1b0;
        `UBehaviorTreeComponent::EvaluateBranch'::__l14::<lambda_1>::operator()(&local_1a0);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
      }
    }
    if (uVar12 == '\x03') {
      bVar5 = IsExecutingBranch(this,(UBTNode *)param_1,
                                (uint)*(byte *)((longlong)&param_1->_padding_ + 1));
      uVar12 = bVar5 + '\x01';
    }
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_178,(UBTNode *)param_1);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"%s, EvaluateBranch requested a new execution");
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    RequestExecution(this,(UBTCompositeNode *)param_1->_padding_,iVar7,(UBTNode *)param_1,
                     (uint)*(byte *)((longlong)&param_1->_padding_ + 1),(uVar12 != '\x02') + Failed,
                     true);
  }
  return;
}

// EvaluateBranch @ 146e8aa10

void __thiscall UBehaviorTreeComponent::EvaluateBranch(UBehaviorTreeComponent *this,Type param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UBTCompositeNode *pUVar6;
  UBTCompositeNode *pUVar7;
  
  uVar1 = this->ActiveInstanceIdx;
  if ((int)(uint)uVar1 < (this->InstanceStack).ArrayNum) {
    if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
    lVar5 = (ulonglong)uVar1 * 0x68;
    pUVar7 = *(UBTCompositeNode **)(pFVar2 + lVar5 + 8);
    if (pUVar7 == (UBTCompositeNode *)0x0) {
      pUVar6 = *(UBTCompositeNode **)(pFVar2 + lVar5);
      pUVar7 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UBTCompositeNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    else {
      pUVar6 = pUVar7;
      if (pFVar2[lVar5 + 0x41] != (FScriptContainerElement)0x0) {
        pUVar6 = (UBTCompositeNode *)pUVar7->_padding_;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
    }
    RequestExecution(this,pUVar6,(this->InstanceStack).ArrayNum + -1,(UBTNode *)pUVar7,-1,param_1,
                     false);
  }
  return;
}

// ExecuteTask @ 146e8b080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::ExecuteTask(UBehaviorTreeComponent *this,UBTTaskNode *param_1)

{
  ushort uVar1;
  int iVar2;
  UBTAuxiliaryNode *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  Type TVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_ExecutionTime> FVar14;
  UBTTaskNode *pUVar15;
  ulonglong uVar16;
  FName FVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  FBehaviorTreeInstance *this_00;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FColor_u_0 local_a8;
  uint local_a4;
  float local_a0 [2];
  FName local_98;
  byte local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FScriptContainerElement *local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  
  FVar14 = StatPtr_STAT_AI_BehaviorTree_ExecutionTime;
  if (StatPtr_STAT_AI_BehaviorTree_ExecutionTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_ExecutionTime>)0x0) {
    pFVar13 = ::FName::FName(&local_60,"STAT_AI_BehaviorTree_ExecutionTime");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_ExecutionTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_ExecutionTime,
                        *pFVar13,L"BT Execution Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar14;
  bVar10 = false;
  bVar8 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar11 = false;
  bVar9 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar10 = false;
      bVar8 = true;
      bVar11 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_88.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                   ,0x99a);
        bVar10 = true;
        bVar8 = true;
        bVar11 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_80 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      bVar7 = true;
      bVar11 = bVar10;
      bVar9 = bVar8;
      goto LAB_146e8b212;
    }
  }
  bVar7 = false;
  bVar6 = false;
  local_80 = local_78;
  FVar17 = local_78;
LAB_146e8b212:
  uVar1 = this->ActiveInstanceIdx;
  if ((int)(uint)uVar1 < (this->InstanceStack).ArrayNum) {
    if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a4 = (param_1->Services).ArrayNum;
    uVar16 = (ulonglong)(int)local_a4;
    pFVar19 = (param_1->Services).AllocatorInstance.Data;
    local_68 = pFVar19 + uVar16 * 8;
    this_00 = (FBehaviorTreeInstance *)
              ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar1 * 0x68);
    while( true ) {
      pFVar18 = local_68;
      if ((param_1->Services).ArrayNum != (int)uVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UBTService>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar19 == pFVar18) break;
      pUVar3 = *(UBTAuxiliaryNode **)pFVar19;
      pFVar18 = (this_00->InstanceMemory).AllocatorInstance.Data;
      if (((this_00->InstanceMemory).ArrayNum < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar1 = *(ushort *)((longlong)&pUVar3->_padding_ + 2);
      FBehaviorTreeInstance::AddToActiveAuxNodes(this_00,this,pUVar3);
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(&local_58,(UBTNode *)pUVar3);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                   L"Activating task service: %s");
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      UBTAuxiliaryNode::WrappedOnBecomeRelevant(pUVar3,this,(uchar *)(pFVar18 + uVar1));
      uVar16 = (ulonglong)local_a4;
      pFVar19 = pFVar19 + 8;
    }
    pFVar18 = (param_1->Services).AllocatorInstance.Data;
    iVar2 = (param_1->Services).ArrayNum;
    pFVar19 = pFVar18 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->Services).ArrayNum != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UBTService>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      FVar17 = local_80;
      if (pFVar18 == pFVar19) break;
      pUVar3 = *(UBTAuxiliaryNode **)pFVar18;
      pFVar4 = (this_00->InstanceMemory).AllocatorInstance.Data;
      if (((this_00->InstanceMemory).ArrayNum < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_a0[0] = 0.0;
      UBTAuxiliaryNode::WrappedTickNode
                (pUVar3,this,(uchar *)(pFVar4 + *(ushort *)((longlong)&pUVar3->_padding_ + 2)),
                 this->CurrentFrameDeltaTime,local_a0);
      pFVar18 = pFVar18 + 8;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTTaskNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this_00->ActiveNode).field0_0x0.DebugPtr = (UBTNode *)param_1;
    (this_00->ActiveNodeType).Value = '\x01';
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_48,(UBTNode *)param_1);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Execute task: %s");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_98,(UObjectBaseUtility *)param_1);
    pFVar19 = (this_00->InstanceMemory).AllocatorInstance.Data;
    if (((this_00->InstanceMemory).ArrayNum < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar12 = UBTTaskNode::WrappedExecuteTask
                       (param_1,this,
                        (uchar *)(pFVar19 + *(ushort *)((longlong)&param_1->_padding_ + 2)));
    if ((local_90 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_90 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_90 & 4) != 0) {
      FThreadStats::AddMessage(local_98,CycleScopeEnd);
    }
    pUVar15 = (UBTTaskNode *)GetActiveNode(this);
    if (pUVar15 == param_1) {
      OnTaskFinished(this,param_1,TVar12);
    }
    ResumeBranchActions(this);
    bVar10 = bVar11;
    bVar6 = bVar7;
    bVar8 = bVar9;
  }
  else {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8352778163046053475>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                        ,0x99d,"InstanceStack.IsValidIndex(ActiveInstanceIdx)");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// FindInstanceContainingNode @ 146e8c020

int __thiscall
UBehaviorTreeComponent::FindInstanceContainingNode(UBehaviorTreeComponent *this,UBTNode *param_1)

{
  ushort uVar1;
  UBTNode *pUVar2;
  code *pcVar3;
  UBTCompositeNode *pUVar4;
  UBTCompositeNode *pUVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UBTCompositeNode *pUVar9;
  uint uVar10;
  longlong lVar11;
  
  pUVar9 = (UBTCompositeNode *)FindTemplateNode(this,param_1);
  if ((pUVar9 == (UBTCompositeNode *)0x0) || (iVar7 = (this->InstanceStack).ArrayNum, iVar7 == 0)) {
    return -1;
  }
  uVar1 = this->ActiveInstanceIdx;
  if ((iVar7 <= (int)(uint)uVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  pUVar2 = *(UBTNode **)((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar1 * 0x68 + 8)
  ;
  if ((pUVar2 != (UBTNode *)0x0) && ((UBTCompositeNode *)pUVar2 == pUVar9)) {
    return (int)this->ActiveInstanceIdx;
  }
  pUVar5 = (((UBTNode *)pUVar9)->ParentNode).field0_0x0.DebugPtr;
  while (pUVar4 = pUVar5, pUVar4 != (UBTCompositeNode *)0x0) {
    pUVar9 = pUVar4;
    pUVar5 = (((TObjectPtr<UBTCompositeNode> *)&pUVar4->_padding_)->field0_0x0).DebugPtr;
  }
  uVar10 = 0;
  if (0 < (this->InstanceStack).ArrayNum) {
    lVar11 = 0;
    while( true ) {
      uVar8 = 0;
      if ((int)uVar10 < (this->InstanceStack).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      pUVar2 = *(UBTNode **)((this->InstanceStack).AllocatorInstance.Data + lVar11);
      if (pUVar2 == (UBTNode *)0x0) {
        bVar6 = pUVar9 == (UBTCompositeNode *)0x0;
      }
      else {
        bVar6 = (UBTCompositeNode *)pUVar2 == pUVar9;
      }
      if (bVar6) break;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x68;
      if ((this->InstanceStack).ArrayNum <= (int)uVar10) {
        return -1;
      }
    }
    return uVar10;
  }
  return -1;
}

// FindTemplateNode @ 146e8c930

UBTNode * __thiscall
UBehaviorTreeComponent::FindTemplateNode(UBehaviorTreeComponent *this,UBTNode *param_1)

{
  UBTNode *pUVar1;
  ushort uVar2;
  UBTCompositeNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UBTNode *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint local_res10;
  longlong local_res18;
  
  if (((param_1 == (UBTNode *)0x0) || (param_1->bIsInstanced == 0)) ||
     (pUVar3 = (param_1->ParentNode).field0_0x0.DebugPtr, pUVar3 == (UBTCompositeNode *)0x0)) {
    return param_1;
  }
  uVar12 = 0;
  local_res10 = 0;
  uVar14 = 0;
  if (0 < (pUVar3->Children).ArrayNum) {
    local_res18 = 0;
    uVar11 = uVar12;
    do {
      uVar6 = 0;
      if ((int)(uint)uVar11 < (pUVar3->Children).ArrayNum) {
        uVar6 = ~(uint)uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UBTNode *)(*pcVar4)();
        return pUVar7;
      }
      pFVar8 = (pUVar3->Children).AllocatorInstance.Data;
      pUVar7 = *(UBTNode **)(pFVar8 + local_res18 + 8);
      if (pUVar7 != (UBTNode *)0x0) {
        if (pUVar7->ExecutionIndex == param_1->ExecutionIndex) {
          return pUVar7;
        }
        uVar11 = uVar12;
        uVar13 = uVar12;
        if (0 < (int)pUVar7[1]._padding_) {
          do {
            pUVar1 = pUVar7 + 1;
            uVar10 = (uint)uVar11;
            uVar6 = uVar14;
            if ((int)uVar10 < (int)pUVar7[1]._padding_) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pUVar7 = (UBTNode *)(*pcVar4)();
              return pUVar7;
            }
            pUVar7 = *(UBTNode **)(pFVar8 + local_res18 + 8);
            if (*(ushort *)(*(longlong *)(uVar13 + pUVar1->_padding_) + 0x50) ==
                param_1->ExecutionIndex) {
              uVar14 = 0;
              if ((int)uVar10 < (int)pUVar7[1]._padding_) {
                uVar14 = ~uVar10 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pUVar7 = (UBTNode *)(*pcVar4)();
                return pUVar7;
              }
              pFVar8 = (FScriptContainerElement *)pUVar7[1]._padding_;
              lVar9 = (longlong)(int)uVar10;
              goto LAB_146e8cc30;
            }
            uVar11 = (ulonglong)(uVar10 + 1);
            uVar13 = uVar13 + 8;
          } while ((int)(uVar10 + 1) < (int)pUVar7[1]._padding_);
        }
      }
      uVar11 = uVar12;
      uVar13 = uVar12;
      if (0 < *(int *)(pFVar8 + local_res18 + 0x18)) {
        do {
          uVar10 = (uint)uVar11;
          uVar2 = param_1->ExecutionIndex;
          uVar6 = uVar14;
          if ((int)uVar10 < *(int *)(pFVar8 + local_res18 + 0x18)) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pUVar7 = (UBTNode *)(*pcVar4)();
            return pUVar7;
          }
          if (*(ushort *)(*(longlong *)(*(longlong *)(pFVar8 + local_res18 + 0x10) + uVar13) + 0x50)
              == uVar2) {
            uVar14 = 0;
            if ((int)uVar10 < *(int *)(pFVar8 + local_res18 + 0x18)) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pUVar7 = (UBTNode *)(*pcVar4)();
              return pUVar7;
            }
            pFVar8 = *(FScriptContainerElement **)(pFVar8 + local_res18 + 0x10);
            lVar9 = (longlong)(int)uVar10;
            goto LAB_146e8cc30;
          }
          uVar11 = (ulonglong)(uVar10 + 1);
          uVar13 = uVar13 + 8;
        } while ((int)(uVar10 + 1) < *(int *)(pFVar8 + local_res18 + 0x18));
      }
      local_res10 = local_res10 + 1;
      uVar11 = (ulonglong)local_res10;
      local_res18 = local_res18 + 0x30;
    } while ((int)local_res10 < (pUVar3->Children).ArrayNum);
  }
  uVar11 = uVar12;
  if (0 < (pUVar3->Services).ArrayNum) {
    do {
      uVar10 = (uint)uVar12;
      uVar6 = uVar14;
      if ((int)uVar10 < (pUVar3->Services).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UBTNode *)(*pcVar4)();
        return pUVar7;
      }
      if (*(ushort *)(*(longlong *)((pUVar3->Services).AllocatorInstance.Data + uVar11) + 0x50) ==
          param_1->ExecutionIndex) {
        if ((int)uVar10 < (pUVar3->Services).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UBTNode *)(*pcVar4)();
          return pUVar7;
        }
        pFVar8 = (pUVar3->Services).AllocatorInstance.Data;
        lVar9 = (longlong)(int)uVar10;
LAB_146e8cc30:
        return *(UBTNode **)(pFVar8 + lVar9 * 8);
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar10 + 1) < (pUVar3->Services).ArrayNum);
  }
  return (UBTNode *)0x0;
}

// ForEachChildTask @ 146e8d000

void __thiscall
UBehaviorTreeComponent::ForEachChildTask
          (UBehaviorTreeComponent *this,UBTCompositeNode *param_1,int param_2,
          TFunctionRef<void___cdecl(UBTTaskNode_&,FBehaviorTreeInstance_const_&,int)> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int local_res18 [4];
  TFunctionRef<void___cdecl(UBTTaskNode_&,FBehaviorTreeInstance_const_&,int)> local_38;
  
  if (((-1 < param_2) && (param_2 < (this->InstanceStack).ArrayNum)) &&
     (uVar5 = 0, 0 < (param_1->Children).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->Children).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Children).AllocatorInstance.Data;
      if (*(UBTCompositeNode **)(pFVar1 + lVar6) == (UBTCompositeNode *)0x0) {
        if (*(longlong *)(pFVar1 + lVar6 + 8) != 0) {
          uVar4 = 0;
          if (param_2 < (this->InstanceStack).ArrayNum) {
            uVar4 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_res18[0] = param_2;
          (**(code **)param_3)
                    (*(undefined8 *)&param_3->field_0x8,*(undefined8 *)(pFVar1 + lVar6 + 8),
                     (this->InstanceStack).AllocatorInstance.Data + (longlong)param_2 * 0x68,
                     local_res18);
        }
      }
      else {
        local_38._0_8_ = *(undefined8 *)param_3;
        local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
        ForEachChildTask(this,*(UBTCompositeNode **)(pFVar1 + lVar6),param_2,&local_38);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while ((int)uVar5 < (param_1->Children).ArrayNum);
  }
  return;
}

// ForEachChildTask @ 146e8d180

void __thiscall
UBehaviorTreeComponent::ForEachChildTask
          (UBehaviorTreeComponent *this,
          TFunctionRef<void___cdecl(UBTTaskNode_&,FBehaviorTreeInstance_const_&,int)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TFunctionRef<void___cdecl(UBTTaskNode_&,FBehaviorTreeInstance_const_&,int)> local_18;
  
  uVar4 = 0;
  if (0 < (this->InstanceStack).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->InstanceStack).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_18._0_8_ = *(undefined8 *)param_1;
      local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
      ForEachChildTask(this,*(UBTCompositeNode **)
                             ((this->InstanceStack).AllocatorInstance.Data + lVar5),uVar4,&local_18)
      ;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x68;
    } while ((int)uVar4 < (this->InstanceStack).ArrayNum);
  }
  return;
}

// GetActiveNode @ 146e8d320

UBTNode * __thiscall UBehaviorTreeComponent::GetActiveNode(UBehaviorTreeComponent *this)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UBTNode *pUVar5;
  
  iVar2 = (this->InstanceStack).ArrayNum;
  if (iVar2 == 0) {
    return (UBTNode *)0x0;
  }
  uVar1 = this->ActiveInstanceIdx;
  if (iVar2 <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UBTNode *)(*pcVar3)();
      return pUVar5;
    }
  }
  pUVar5 = *(UBTNode **)((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar1 * 0x68 + 8)
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBTNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  return pUVar5;
}

// GetDebugInfoString @ 146e8d8f0

FString * __thiscall
UBehaviorTreeComponent::GetDebugInfoString
          (UBehaviorTreeComponent *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  UBTCompositeNode *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  FName local_res8;
  FString *local_res10;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar9 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar11 = uVar9;
  local_res10 = __return_storage_ptr__;
  if (0 < (this->InstanceStack).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar10 < (this->InstanceStack).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
      pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
      FVar1 = pFVar2[uVar9 + 0x40];
      if (((this->KnownInstances).ArrayNum <= (int)(uint)(byte)FVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
      lVar3 = *(longlong *)
               ((this->KnownInstances).AllocatorInstance.Data + (ulonglong)(byte)FVar1 * 0x38);
      if (lVar3 == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        local_res8 = *(FName *)(lVar3 + 0x18);
        ::FName::ToString(&local_res8,&local_78);
      }
      ::FString::PrintfImpl(&local_68,L"Behavior tree: %s\n");
      uVar6 = local_68.Data.ArrayNum - 1;
      if (local_68.Data.ArrayNum == 0) {
        uVar6 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,uVar6);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      this_00 = *(UBTCompositeNode **)(pFVar2 + uVar9 + 8);
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      for (; this_00 != (UBTCompositeNode *)0x0;
          this_00 = (((TObjectPtr<UBTCompositeNode> *)&this_00->_padding_)->field0_0x0).DebugPtr) {
        lVar3 = *(longlong *)(pFVar2 + uVar9 + 0x30);
        if ((*(int *)(pFVar2 + uVar9 + 0x38) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar4)();
          return pFVar7;
        }
        UBTNode::GetRuntimeDescription
                  ((UBTNode *)this_00,&local_48,this,
                   (uchar *)((ulonglong)*(ushort *)((longlong)&this_00->_padding_ + 2) + lVar3),
                   Basic);
        ::FString::PrintfImpl(&local_58,L"  %s\n");
        ::FString::ConcatFF(&local_88,&local_58,&local_98);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        local_98.Data.ArrayNum = local_88.Data.ArrayNum;
        local_98.Data.ArrayMax = local_88.Data.ArrayMax;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        __return_storage_ptr__ = local_res10;
      }
      iVar8 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar8);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      uVar9 = uVar9 + 0x68;
      uVar11 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < (this->InstanceStack).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetNodeMemory @ 146e8e5c0

uchar * __thiscall
UBehaviorTreeComponent::GetNodeMemory(UBehaviorTreeComponent *this,UBTNode *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uchar *puVar5;
  uint uVar6;
  
  if ((-1 < param_2) && (param_2 < (this->InstanceStack).ArrayNum)) {
    uVar6 = 0;
    if (param_2 < (this->InstanceStack).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar3)();
        return puVar5;
      }
    }
    pFVar1 = (this->InstanceStack).AllocatorInstance.Data;
    lVar2 = *(longlong *)(pFVar1 + (longlong)param_2 * 0x68 + 0x30);
    if (*(int *)(pFVar1 + (longlong)param_2 * 0x68 + 0x38) < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar3)();
        return puVar5;
      }
    }
    return (uchar *)((ulonglong)param_1->MemoryOffset + lVar2);
  }
  return (uchar *)0x0;
}

// GetPrivateStaticClass @ 146e8f480

UClass * __cdecl UBehaviorTreeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTreeComponent",
               &Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton,
               StaticRegisterNativesUBehaviorTreeComponent,0x2b8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBehaviorTreeComponent>,
               InternalVTableHelperCtorCaller<UBehaviorTreeComponent>,local_res8,
               UBrainComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton;
}

// GetRootTree @ 146e8f8d0

UBehaviorTree * __thiscall UBehaviorTreeComponent::GetRootTree(UBehaviorTreeComponent *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UBehaviorTree *pUVar5;
  
  iVar2 = (this->InstanceStack).ArrayNum;
  if (iVar2 == 0) {
    return (UBehaviorTree *)0x0;
  }
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UBehaviorTree *)(*pcVar3)();
      return pUVar5;
    }
  }
  FVar1 = (this->InstanceStack).AllocatorInstance.Data[0x40];
  if ((this->KnownInstances).ArrayNum <= (int)(uint)(byte)FVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UBehaviorTree *)(*pcVar3)();
      return pUVar5;
    }
  }
  pUVar5 = *(UBehaviorTree **)
            ((this->KnownInstances).AllocatorInstance.Data + (ulonglong)(byte)FVar1 * 0x38);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  return pUVar5;
}

// GetTagCooldownEndTime @ 146e8fd60

double __thiscall
UBehaviorTreeComponent::GetTagCooldownEndTime(UBehaviorTreeComponent *this,FGameplayTag param_1)

{
  TTuple<FGameplayTag,double> *pTVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_1.TagName;
  pTVar1 = TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
                   *)&this->CooldownTagsMap,(FGameplayTag *)local_res10);
  if (pTVar1 != (TTuple<FGameplayTag,double> *)0x0) {
    return *(double *)&pTVar1->field_0x8;
  }
  return 0.0;
}

// GetTaskStatus @ 146e8fda0

Type __thiscall
UBehaviorTreeComponent::GetTaskStatus(UBehaviorTreeComponent *this,UBTTaskNode *param_1)

{
  short sVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UBTTaskNode *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  Type TVar8;
  Type TVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  TVar9 = Inactive;
  uVar7 = FindInstanceContainingNode(this,(UBTNode *)param_1);
  if (((int)uVar7 < 0) || ((this->InstanceStack).ArrayNum <= (int)uVar7)) {
    return Inactive;
  }
  sVar1 = (short)param_1->_padding_;
  TVar8 = Active;
  if ((int)uVar7 < (this->InstanceStack).ArrayNum) {
    TVar8 = ~uVar7 >> 0x1f;
  }
  if ((TVar8 == Active) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    TVar9 = (*pcVar5)();
    return TVar9;
  }
  pFVar3 = (this->InstanceStack).AllocatorInstance.Data;
  iVar2 = *(int *)(pFVar3 + (longlong)(int)uVar7 * 0x68 + 0x28);
  plVar11 = *(longlong **)(pFVar3 + (longlong)(int)uVar7 * 0x68 + 0x20);
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    TVar9 = (*pcVar5)();
    return TVar9;
  }
  plVar10 = plVar11 + (longlong)iVar2 * 2;
  do {
    if (plVar11 == plVar10) {
LAB_146e8febc:
      pUVar4 = *(UBTTaskNode **)(pFVar3 + (longlong)(int)uVar7 * 0x68 + 8);
      if (pUVar4 == (UBTTaskNode *)0x0) {
        bVar6 = param_1 == (UBTTaskNode *)0x0;
      }
      else {
        bVar6 = pUVar4 == param_1;
      }
      if (((bVar6) ||
          ((((param_1->_padding_ & 0x10000000000) != 0 && (pUVar4 != (UBTTaskNode *)0x0)) &&
           ((short)pUVar4->_padding_ == sVar1)))) &&
         (TVar9 = Active, pFVar3[(longlong)(int)uVar7 * 0x68 + 0x41] != (FScriptContainerElement)0x1
         )) {
        TVar9 = (pFVar3[(longlong)(int)uVar7 * 0x68 + 0x41] != (FScriptContainerElement)0x2) +
                Aborting;
      }
      return TVar9;
    }
    pUVar4 = (UBTTaskNode *)*plVar11;
    if (pUVar4 == (UBTTaskNode *)0x0) {
      bVar6 = param_1 == (UBTTaskNode *)0x0;
    }
    else {
      bVar6 = pUVar4 == param_1;
    }
    if ((bVar6) ||
       ((((param_1->_padding_ & 0x10000000000) != 0 && (pUVar4 != (UBTTaskNode *)0x0)) &&
        ((short)pUVar4->_padding_ == sVar1)))) {
      TVar9 = *(Type *)(plVar11 + 1);
      if (TVar9 != Inactive) {
        return TVar9;
      }
      goto LAB_146e8febc;
    }
    plVar11 = plVar11 + 2;
  } while( true );
}

// HandleMessage @ 146e908d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::HandleMessage(UBehaviorTreeComponent *this,FAIMessage *param_1)

{
  UBrainComponent::HandleMessage((UBrainComponent *)this,param_1);
  ScheduleNextTick(this,0.0);
  return;
}

// HasActiveLatentAborts @ 146e90900

bool __thiscall UBehaviorTreeComponent::HasActiveLatentAborts(UBehaviorTreeComponent *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar1 = (this->InstanceStack).ArrayNum;
  if (iVar1 == 0) {
    bVar4 = false;
  }
  else {
    uVar10 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar10 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = (this->InstanceStack).AllocatorInstance.Data
            [(longlong)(this->InstanceStack).ArrayNum * 0x68 + -0x27] ==
            (FScriptContainerElement)0x2;
  }
  uVar10 = 0;
  if ((this->InstanceStack).ArrayNum < 1) {
    return bVar4;
  }
  lVar11 = 0;
  do {
    if (bVar4 != false) {
      return bVar4;
    }
    uVar7 = 0;
    if ((int)uVar10 < (this->InstanceStack).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar2 + lVar11 + 0x28);
    lVar9 = *(longlong *)(pFVar2 + lVar11 + 0x20);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar8 = (longlong)iVar1 * 0x10 + lVar9;
    for (; lVar9 != lVar8; lVar9 = lVar9 + 0x10) {
      if (*(int *)(lVar9 + 8) == 1) {
        bVar4 = true;
        break;
      }
    }
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 0x68;
    if ((this->InstanceStack).ArrayNum <= (int)uVar10) {
      return bVar4;
    }
  } while( true );
}

// IsAuxNodeActive @ 146e92860

bool __thiscall
UBehaviorTreeComponent::IsAuxNodeActive(UBehaviorTreeComponent *this,UBTAuxiliaryNode *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  UBTAuxiliaryNode *pUVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong local_res18;
  
  if (param_1 != (UBTAuxiliaryNode *)0x0) {
    lVar6 = param_1->_padding_;
    uVar12 = 0;
    if (0 < (this->InstanceStack).ArrayNum) {
      local_res18 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar12 < (this->InstanceStack).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar3 = (this->InstanceStack).AllocatorInstance.Data;
        iVar2 = *(int *)(pFVar3 + local_res18 + 0x18);
        puVar11 = *(undefined8 **)(pFVar3 + local_res18 + 0x10);
        if ((iVar2 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        puVar1 = puVar11 + iVar2;
        for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
          pUVar10 = (UBTAuxiliaryNode *)*puVar11;
          if (pUVar10 == param_1) {
            return true;
          }
          if ((((param_1->_padding_ & 0x10000000000) != 0) && (pUVar10 != (UBTAuxiliaryNode *)0x0))
             && (*(ushort *)&pUVar10->_padding_ == (ushort)lVar6)) {
            lVar4 = *(longlong *)(pFVar3 + local_res18 + 0x30);
            if ((*(int *)(pFVar3 + local_res18 + 0x38) < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            pUVar10 = (UBTAuxiliaryNode *)
                      UBTNode::GetNodeInstance
                                ((UBTNode *)pUVar10,this,
                                 (uchar *)((ulonglong)*(ushort *)((longlong)&pUVar10->_padding_ + 2)
                                          + lVar4));
            if (pUVar10 == param_1) {
              return true;
            }
          }
        }
        uVar12 = uVar12 + 1;
        local_res18 = local_res18 + 0x68;
      } while ((int)uVar12 < (this->InstanceStack).ArrayNum);
    }
  }
  return false;
}

// IsAuxNodeActive @ 146e92a00

bool __thiscall
UBehaviorTreeComponent::IsAuxNodeActive
          (UBehaviorTreeComponent *this,UBTAuxiliaryNode *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong *plVar8;
  
  if ((-1 < param_2) && (param_2 < (this->InstanceStack).ArrayNum)) {
    uVar7 = 0;
    if (param_2 < (this->InstanceStack).ArrayNum) {
      uVar7 = (uint)~param_2 >> 0x1f;
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
    pFVar3 = (this->InstanceStack).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)param_2 * 0x68 + 0x18);
    plVar8 = *(longlong **)(pFVar3 + (longlong)param_2 * 0x68 + 0x10);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    plVar1 = plVar8 + iVar2;
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      if ((UBTAuxiliaryNode *)*plVar8 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsDebuggerActive @ 146e92b80

bool __cdecl UBehaviorTreeComponent::IsDebuggerActive(void)

{
  return false;
}

// IsExecutingBranch @ 146e92b90

bool __thiscall
UBehaviorTreeComponent::IsExecutingBranch(UBehaviorTreeComponent *this,UBTNode *param_1,int param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  UBTNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar8 = FindInstanceContainingNode(this,param_1);
  if ((-1 < (int)uVar8) && ((int)uVar8 < (this->InstanceStack).ArrayNum)) {
    uVar9 = 0;
    if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar10 = (longlong)(int)uVar8 * 0x68;
    if (*(longlong *)((this->InstanceStack).AllocatorInstance.Data + lVar10 + 8) != 0) {
      uVar9 = 0;
      if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
      pUVar3 = *(UBTNode **)(pFVar2 + lVar10);
      if (pUVar3 == (UBTNode *)0x0) {
        bVar5 = param_1 == (UBTNode *)0x0;
      }
      else {
        bVar5 = pUVar3 == param_1;
      }
      if (!bVar5) {
        pUVar3 = *(UBTNode **)(pFVar2 + lVar10 + 8);
        if (pUVar3 == (UBTNode *)0x0) {
          bVar5 = param_1 == (UBTNode *)0x0;
        }
        else {
          bVar5 = pUVar3 == param_1;
        }
        if (!bVar5) {
          uVar1 = pUVar3->ExecutionIndex;
          uVar7 = UBTCompositeNode::GetChildExecutionIndex
                            ((param_1->ParentNode).field0_0x0.DebugPtr,param_2 + 1,TaskNode);
          if (uVar1 < param_1->ExecutionIndex) {
            return false;
          }
          if (uVar7 <= uVar1) {
            return false;
          }
        }
      }
      return true;
    }
  }
  return false;
}

// IsPaused @ 146e92d30

bool __thiscall UBehaviorTreeComponent::IsPaused(UBehaviorTreeComponent *this)

{
  return this->bIsPaused;
}

// IsRunning @ 146e92dc0

bool __thiscall UBehaviorTreeComponent::IsRunning(UBehaviorTreeComponent *this)

{
  if (((this->bIsPaused == '\0') && (this->bIsRunning != '\0')) &&
     ((this->InstanceStack).ArrayNum != 0)) {
    return true;
  }
  return false;
}

// OnTaskFinished @ 146e961d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::OnTaskFinished
          (UBehaviorTreeComponent *this,UBTTaskNode *param_1,Type param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  ushort uVar3;
  UBTCompositeNode *this_00;
  UBTTaskNode *pUVar4;
  code *pcVar5;
  Type TVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uchar *puVar11;
  UBTNode *pUVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  Type local_res18 [4];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 == (UBTTaskNode *)0x0) {
    return;
  }
  if ((this->InstanceStack).ArrayNum == 0) {
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  local_res18[0] = param_2;
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeResult(&local_68,param_2);
    UBehaviorTreeTypes::DescribeNodeHelper(&local_78,(UBTNode *)param_1);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"Task %s finished: %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  this_00 = (UBTCompositeNode *)param_1->_padding_;
  uVar8 = FindInstanceContainingNode(this,(UBTNode *)param_1);
  lVar14 = (longlong)(int)uVar8;
  if ((int)uVar8 < 0) {
    return;
  }
  if ((this->InstanceStack).ArrayNum <= (int)uVar8) {
    return;
  }
  uVar9 = 0;
  if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
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
  puVar11 = UBTNode::GetNodeMemory<unsigned_char>
                      ((UBTNode *)this_00,
                       (FBehaviorTreeInstance *)
                       ((this->InstanceStack).AllocatorInstance.Data + lVar14 * 0x68));
  UBTCompositeNode::ConditionalNotifyChildExecution
            (this_00,this,puVar11,(UBTNode *)param_1,local_res18);
  if (local_res18[0] != InProgress) {
    IntCastChecked<unsigned_short,int>(uVar8);
    UnregisterMessageObserversFrom(this,param_1);
    uVar9 = 0;
    if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
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
    puVar11 = UBTNode::GetNodeMemory<unsigned_char>
                        ((UBTNode *)param_1,
                         (FBehaviorTreeInstance *)
                         ((this->InstanceStack).AllocatorInstance.Data + lVar14 * 0x68));
    UBTTaskNode::WrappedOnTaskFinished(param_1,this,puVar11,local_res18[0]);
    uVar3 = this->ActiveInstanceIdx;
    if ((int)(uint)uVar3 < (this->InstanceStack).ArrayNum) {
      if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = *(UBTTaskNode **)
                ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar3 * 0x68 + 8);
      if ((pUVar4 != (UBTTaskNode *)0x0) && (pUVar4 == param_1)) {
        uVar3 = this->ActiveInstanceIdx;
        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar3) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TVar6 = local_res18[0];
        pFVar13 = (this->InstanceStack).AllocatorInstance.Data;
        lVar14 = (ulonglong)uVar3 * 0x68;
        FVar2 = pFVar13[lVar14 + 0x41];
        pFVar13[lVar14 + 0x41] = (FScriptContainerElement)0x3;
        if (FVar2 == (FScriptContainerElement)0x2) {
          if ((((this->PendingExecution).NextTask.field0_0x0.DebugPtr != (UBTTaskNode *)0x0) ||
              ((this->PendingExecution).bOutOfNodes != 0)) &&
             ((this->PendingExecution).bLocked == 0)) {
            ScheduleExecutionUpdate(this);
          }
        }
        else if ((local_res18[0] != Aborted) && (local_res18[0] != InProgress)) {
          if ((this->SuspendedBranchActions & ActiveNodeEvaluate) == None) {
            EvaluateBranch(this,local_res18[0]);
          }
          else {
            pUVar12 = GetActiveNode(this);
            if (FVisualLogger::bIsRecording != 0) {
              UEnum::GetValueAsString<enum_EBTNodeResult::Type>(&local_48,TVar6);
              UBehaviorTreeTypes::DescribeNodeHelper(&local_58,pUVar12);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Request evaluation queued up for node(%s) with result(%s)");
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            iVar10 = (this->PendingBranchActionRequests).ArrayNum;
            piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,
                                  piVar1);
            }
            pFVar13 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
            (this->PendingBranchActionRequests).ArrayNum = iVar10 + 1;
            pFVar13 = pFVar13 + (longlong)iVar10 * 0x10;
            *(UBTNode **)pFVar13 = pUVar12;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UBTNode *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar12);
            }
            *(Type *)(pFVar13 + 8) = TVar6;
            *(undefined2 *)(pFVar13 + 0xc) = 0x80;
          }
        }
        goto LAB_146e966fc;
      }
    }
    if ((local_res18[0] == Aborted) && ((int)uVar8 < (this->InstanceStack).ArrayNum)) {
      uVar9 = 0;
      if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
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
      pUVar4 = *(UBTTaskNode **)((this->InstanceStack).AllocatorInstance.Data + lVar14 * 0x68 + 8);
      if ((pUVar4 != (UBTTaskNode *)0x0) && (pUVar4 == param_1)) {
        uVar9 = 0;
        if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->InstanceStack).AllocatorInstance.Data[lVar14 * 0x68 + 0x41] =
             (FScriptContainerElement)0x3;
      }
    }
  }
LAB_146e966fc:
  if (this->bWaitingForLatentAborts == '\0') {
    bVar7 = HasActiveLatentAborts(this);
    this->bWaitingForLatentAborts = bVar7;
  }
  if (((this->TreeStartInfo).bPendingInitialize != 0) &&
     ((this->TreeStartInfo).Asset != (UBehaviorTree *)0x0)) {
    ProcessPendingInitialize(this);
  }
  return;
}

// OnTreeFinished @ 146e96780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::OnTreeFinished(UBehaviorTreeComponent *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FBTNodeIndex local_res8 [2];
  
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
               L"Ran out of nodes to check, %s tree.");
  }
  this->ActiveInstanceIdx = 0;
  if ((this->bLoopExecution != 0) && (iVar1 = (this->InstanceStack).ArrayNum, iVar1 != 0)) {
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
    local_res8[0].InstanceIndex = 0;
    local_res8[0].ExecutionIndex = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
    pFVar2[0x41] = (FScriptContainerElement)0x0;
    UnregisterAuxNodesUpTo(this,local_res8);
    RequestExecution(this,*(UBTCompositeNode **)pFVar2,0,(UBTNode *)*(UBTCompositeNode **)pFVar2,0,
                     InProgress,true);
    return;
  }
  StopTree(this,Safe);
  return;
}

// PauseLogic @ 146e96a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::PauseLogic(UBehaviorTreeComponent *this,FString *param_1)

{
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"Execution updates: PAUSED (%s)");
  }
  this->bIsPaused = '\x01';
  if ((UBlackboardComponent *)this->_padding_ != (UBlackboardComponent *)0x0) {
    UBlackboardComponent::PauseObserverNotifications((UBlackboardComponent *)this->_padding_);
    return;
  }
  return;
}

// ProcessExecutionRequest @ 146e97d20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::ProcessExecutionRequest(UBehaviorTreeComponent *this)

{
  int *piVar1;
  FBehaviorTreeSearchData *this_00;
  FBTNodeExecutionInfo *pFVar2;
  TArray<FBehaviorTreeSearchUpdateNotify,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 uVar4;
  TAtomic<FMinimalName> TVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  double dVar15;
  TConsoleVariableData<int> *pTVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  ushort uVar21;
  uint uVar22;
  int iVar23;
  Type TVar24;
  TStatId TVar25;
  FThreadStats *pFVar26;
  FThreadStatsPool *pFVar27;
  ulonglong uVar28;
  uint uVar29;
  FBTNodeIndex *pFVar30;
  FName FVar31;
  undefined1 *puVar32;
  UBTCompositeNode *pUVar33;
  longlong lVar34;
  UBTCompositeNode *this_01;
  FScriptContainerElement *pFVar35;
  UBTTaskNode *pUVar36;
  Type local_res10 [2];
  FBTNodeIndex local_res18 [2];
  FBTNodeIndex local_res20 [2];
  undefined4 local_1e8;
  FBTNodeIndex local_1e4;
  FBTNodeIndex local_1e0;
  int local_1dc;
  uint local_1d8;
  FBTNodeIndex local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  UBTTaskNode *local_1c0;
  FColor_u_0 local_1b8 [2];
  FBehaviorTreeSearchData *local_1b0;
  FName local_1a8;
  FBTNodeExecutionInfo local_1a0;
  FName local_188;
  LARGE_INTEGER local_178;
  LARGE_INTEGER local_170;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  FStatMessage local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FStatMessage local_118;
  LARGE_INTEGER local_108;
  UBehaviorTreeComponent *local_100;
  FBTNodeIndex *local_f8;
  UBehaviorTreeComponent *local_f0;
  FBTNodeIndex *local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  this->bRequestedFlowUpdate = '\0';
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  uVar21 = this->ActiveInstanceIdx;
  if ((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) {
    return;
  }
  if (this->bIsPaused != '\0') {
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
               L"Ignoring ProcessExecutionRequest call due to BTComponent still being paused");
    return;
  }
  if (this->bWaitingForLatentAborts != '\0') {
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
               L"Ignoring ProcessExecutionRequest call, aborting task must finish first");
    return;
  }
  if (FVisualLogger::bIsRecording != 0) {
    if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UBehaviorTreeTypes::DescribeNodeHelper
              (&local_d8,
               *(UBTNode **)
                ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar21 * 0x68 + 8));
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,All,
               L"%hs Active Node %s");
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if ((((this->PendingExecution).NextTask.field0_0x0.DebugPtr != (UBTTaskNode *)0x0) ||
      ((this->PendingExecution).bOutOfNodes != 0)) && ((this->PendingExecution).bLocked == 0))
  goto LAB_146e990c5;
  pUVar33 = (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr;
  if (pUVar33 == (UBTCompositeNode *)0x0) {
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Display,
               L"Ignoring ProcessExecutionRequest call, node to be executed is not set.");
    return;
  }
  (this->SearchData).RollbackInstanceIdx = (uint)this->ActiveInstanceIdx;
  (this->SearchData).RollbackDeactivatedBranchStart = (this->SearchData).DeactivatedBranchStart;
  (this->SearchData).RollbackDeactivatedBranchEnd = (this->SearchData).DeactivatedBranchEnd;
  local_1e0.ExecutionIndex = (ushort)pUVar33->_padding_;
  local_1e0.InstanceIndex = (this->ExecutionRequest).ExecuteInstanceIdx;
  (this->SearchData).SearchRootNode = local_1e0;
  local_res10[0] = (Type)(this->ExecutionRequest).ContinueWithResult.Value;
  local_1c0 = (UBTTaskNode *)0x0;
  TVar25 = FThreadSafeStaticStatInner<FStat_STAT_AI_BehaviorTree_SearchTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_AI_BehaviorTree_SearchTime,1> *)
                      &StatPtr_STAT_AI_BehaviorTree_SearchTime);
  bVar12 = false;
  bVar17 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  bVar20 = false;
  bVar19 = false;
  TVar5 = (TVar25.StatIdPtr)->Name;
  FVar31 = *(FName *)TVar5;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (bVar11 = bVar12, FVar31.Number == 0)) {
LAB_146e98071:
    bVar12 = bVar20;
    bVar13 = false;
    bVar20 = false;
    FVar31 = local_188;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8[0]._s_0,(char *)*(FName *)((longlong)TVar5 + 0x10));
      bVar12 = false;
      bVar17 = true;
      bVar20 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a8.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_1a8.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)*(FName *)((longlong)TVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                   ,2000);
        bVar12 = true;
        bVar17 = true;
        bVar20 = true;
        bVar19 = true;
      }
    }
    bVar11 = bVar12;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e98071;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar20 = true;
    bVar13 = true;
    bVar19 = bVar17;
  }
  if (__CsvProfilerStat2004 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("BehaviorTreeSearch");
    __CsvProfilerStat2004 = true;
  }
  FCsvProfiler::BeginExclusiveStat("BehaviorTreeSearch","CSV_BehaviorTreeSearch");
  pTVar16 = CVarBTRecordFrameSearchTimes.Ref;
  bVar18 = IsInParallelGameThread();
  if (((!bVar18) && (bVar18 = IsInGameThread(), !bVar18)) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar15 = __real_4170000000000000;
  local_1c8 = pTVar16->ShadowedValue[0];
  if (local_1c8 == 0) {
    dVar10 = 0.0;
  }
  else {
    QueryPerformanceCounter(&local_178);
    NumSearchTimeCalls = NumSearchTimeCalls + 1;
    dVar10 = (double)local_178.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
  }
  CopyInstanceMemoryToPersistent(this);
  uVar21 = this->ActiveInstanceIdx;
  if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar33 = (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr;
  if (*(UBTCompositeNode **)
       ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar21 * 0x68 + 8) != pUVar33) {
    local_1dc = -1;
    bVar18 = DeactivateUpTo(this,pUVar33,(this->ExecutionRequest).ExecuteInstanceIdx,local_res10,
                            &local_1dc);
    iVar23 = local_1dc;
    if (!bVar18) {
      if (FVisualLogger::bIsRecording != 0) {
        uVar21 = this->ActiveInstanceIdx;
        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UBehaviorTreeTypes::DescribeNodeHelper
                  (&local_b8,
                   *(UBTNode **)
                    ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar21 * 0x68 + 8));
        UBehaviorTreeTypes::DescribeNodeHelper
                  (&local_c8,(UBTNode *)(this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                   (FName *)&LogBehaviorTree.field_0x4,Error,
                   L"Unable to deactivate up to %s. Active node is %s. All pending updates will be lost!"
                  );
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      iVar23 = (this->SearchData).PendingUpdates.ArrayMax;
      (this->SearchData).PendingUpdates.ArrayNum = 0;
      if (iVar23 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->SearchData).PendingUpdates.AllocatorInstance,0,
                   &(this->SearchData).PendingUpdates.ArrayMax);
      }
      if (local_1c8 != 0) {
        QueryPerformanceCounter(&local_170);
        FrameSearchTime =
             FrameSearchTime +
             (((double)local_170.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15) - dVar10
             );
      }
      FCsvProfiler::EndExclusiveStat("BehaviorTreeSearch");
      if (bVar17) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar20) {
        return;
      }
      if (FVar31 == (FName)0x0) {
        return;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return;
      }
      pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar26 == (FThreadStats *)0x0) {
        pFVar27 = FThreadStatsPool::Get();
        pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
      }
      if (pFVar26->ScopeCount <= pFVar26->bWaitForExplicitFlush) {
        return;
      }
      local_158.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
      local_158.NameAndInfo.Index.Value = FVar31.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_168);
      local_158.StatData.Pad[4] = '\0';
      local_158.StatData.Pad[5] = '\0';
      local_158.StatData.Pad[6] = '\0';
      local_158.StatData.Pad[7] = '\0';
      local_158.StatData.Pad[0] = local_168.s.LowPart._0_1_;
      local_158.StatData.Pad[1] = local_168.s.LowPart._1_1_;
      local_158.StatData.Pad[2] = local_168.s.LowPart._2_1_;
      local_158.StatData.Pad[3] = local_168.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar26,&local_158);
      piVar1 = &pFVar26->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar26,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive == false) {
        return;
      }
      FThreadStats::FlushRawStats(pFVar26,false,false);
      return;
    }
    if (local_1dc != -1) {
      local_res18[0].ExecutionIndex =
           UBTCompositeNode::GetChildExecutionIndex
                     ((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr,local_1dc,FirstNode);
      local_res18[0].InstanceIndex = (this->ExecutionRequest).ExecuteInstanceIdx;
      local_res20[0].ExecutionIndex =
           UBTCompositeNode::GetChildExecutionIndex
                     ((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr,iVar23 + 1,FirstNode)
      ;
      local_res20[0].InstanceIndex = (this->ExecutionRequest).ExecuteInstanceIdx;
      if ((this->SearchData).DeactivatedBranchStart.InstanceIndex != 0xffff) {
        local_f8 = local_res18;
        local_100 = this;
        `UBehaviorTreeComponent::ProcessExecutionRequest'::__l41::<lambda_1>::operator()(&local_100)
        ;
      }
      (this->SearchData).DeactivatedBranchStart = local_res18[0];
      if ((this->SearchData).DeactivatedBranchEnd.InstanceIndex != 0xffff) {
        local_e8 = local_res20;
        local_f0 = this;
        `UBehaviorTreeComponent::ProcessExecutionRequest'::__l41::<lambda_2>::operator()(&local_f0);
      }
      (this->SearchData).DeactivatedBranchEnd = local_res20[0];
    }
  }
  uVar21 = this->ActiveInstanceIdx;
  if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = (this->InstanceStack).AllocatorInstance.Data;
  this_00 = &this->SearchData;
  lVar34 = (ulonglong)uVar21 * 0x68;
  pUVar33 = (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr;
  FBehaviorTreeSearchData::AssignSearchId(this_00);
  (this->SearchData).bPostponeSearch = 0;
  (this->SearchData).bSearchInProgress = 1;
  if (*(longlong *)(pFVar6 + lVar34 + 8) == 0) {
    uVar28 = (ulonglong)this->ActiveInstanceIdx;
    local_1d8 = (uint)this->ActiveInstanceIdx;
    local_1b0 = this_00;
    if ((this->InstanceStack).ArrayNum <= (int)local_1d8) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar28 = (ulonglong)local_1d8;
    }
    pFVar35 = (this->InstanceStack).AllocatorInstance.Data + (uVar28 & 0xffff) * 0x68;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = *(UObject **)pFVar35, pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    *(undefined8 *)(pFVar6 + lVar34 + 8) = *(undefined8 *)pFVar35;
    UBTCompositeNode::OnNodeActivation(*(UBTCompositeNode **)(pFVar6 + lVar34),local_1b0);
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_a8,*(UBTNode **)(pFVar6 + lVar34));
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                 (FName *)&LogBehaviorTree.field_0x4,Verbose,L"Activated root node: %s");
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar2 = &this->ExecutionRequest;
  if ((this->ExecutionRequest).bTryNextChild == 0) {
    local_1d4.ExecutionIndex = (this->ExecutionRequest).SearchStart.ExecutionIndex;
    local_1d4.InstanceIndex = (pFVar2->SearchStart).InstanceIndex;
    pFVar30 = &local_1d4;
    if (local_1d4.ExecutionIndex == 0) {
      pFVar30 = &pFVar2->SearchStart;
    }
    local_1d4.ExecutionIndex = local_1d4.ExecutionIndex - 1;
    UnregisterAuxNodesUpTo(this,pFVar30);
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_98,(UBTNode *)pUVar33);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                 (FName *)&LogBehaviorTree.field_0x4,Verbose,L"Reactivate node: %s [restart]");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    UBTCompositeNode::OnNodeRestart
              ((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr,&this->SearchData);
    (this->SearchData).SearchStart = (this->ExecutionRequest).SearchStart;
    (this->SearchData).SearchEnd = (this->ExecutionRequest).SearchEnd;
    if (FVisualLogger::bIsRecording != 0) {
      ::FString::PrintfImpl(&local_138,L"[%d:%d]");
      ::FString::PrintfImpl(&local_148,L"[%d:%d]");
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                 (FName *)&LogBehaviorTree.field_0x4,Verbose,L"Clamping search range: %s .. %s");
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((this->ExecutionRequest).ContinueWithResult.Value == '\x01') {
      if (FVisualLogger::bIsRecording != 0) {
        ::FString::PrintfImpl(&local_128,L"[%d:%d]");
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                   (FName *)&LogBehaviorTree.field_0x4,Verbose,L"Unregistering aux nodes up to %s");
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      UnregisterAuxNodesUpTo(this,&pFVar2->SearchStart);
    }
    local_1d0 = 0xffffffff;
    local_1cc = 0xffffffff;
    (this->SearchData).SearchStart.InstanceIndex = 0xffff;
    (this->SearchData).SearchStart.ExecutionIndex = 0xffff;
    (this->SearchData).SearchEnd.InstanceIndex = 0xffff;
    (this->SearchData).SearchEnd.ExecutionIndex = 0xffff;
  }
  pUVar36 = local_1c0;
  if (pUVar33 == (UBTCompositeNode *)0x0) {
LAB_146e98d08:
    bVar17 = true;
LAB_146e98d0b:
    if ((this->SearchData).bPostponeSearch != 0) goto LAB_146e98d14;
  }
  else {
    do {
      while( true ) {
        if (pUVar36 != (UBTTaskNode *)0x0) goto LAB_146e98c3a;
        if (FVisualLogger::bIsRecording != 0) {
          UBehaviorTreeTypes::DescribeNodeHelper(&local_88,(UBTNode *)pUVar33);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                     (FName *)&LogBehaviorTree.field_0x4,Verbose,L"Testing node: %s");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        uVar22 = UBTCompositeNode::FindChildToExecute(pUVar33,&this->SearchData,local_res10);
        if ((this->SearchData).bPostponeSearch != 0) goto LAB_146e98d03;
        if (uVar22 != 0xfffffffe) break;
        this_01 = (UBTCompositeNode *)pUVar33->_padding_;
        if (this_01 == (UBTCompositeNode *)0x0) {
          UBTCompositeNode::OnNodeDeactivation(pUVar33,&this->SearchData,local_res10);
          if (this->ActiveInstanceIdx == 0) goto LAB_146e98d08;
          if (((this->InstanceStack).ArrayNum <= (int)(uint)this->ActiveInstanceIdx) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar21 = this->ActiveInstanceIdx;
          if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FBehaviorTreeInstance::DeactivateNodes
                    ((FBehaviorTreeInstance *)
                     ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar21 * 0x68),
                     &this->SearchData,this->ActiveInstanceIdx);
          pTVar3 = &(this->SearchData).PendingNotifies;
          pFVar6 = (pTVar3->AllocatorInstance).Data;
          local_1e8._0_3_ = CONCAT12((undefined1)local_res10[0],this->ActiveInstanceIdx);
          if (((pFVar6 <= (FScriptContainerElement *)&local_1e8) &&
              ((FScriptContainerElement *)&local_1e8 <
               pFVar6 + (longlong)(this->SearchData).PendingNotifies.ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar23 = (this->SearchData).PendingNotifies.ArrayNum;
          piVar1 = &(this->SearchData).PendingNotifies.ArrayMax;
          if (iVar23 == *piVar1) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x204,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->SearchData).PendingNotifies.ArrayNum = iVar23 + 1;
          *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_1e8;
          uVar21 = this->ActiveInstanceIdx - 1;
          this->ActiveInstanceIdx = uVar21;
          if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar21 = this->ActiveInstanceIdx;
          if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pUVar33 = *(UBTCompositeNode **)
                     ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar21 * 0x68 + 8);
          this_01 = (((TObjectPtr<UBTCompositeNode> *)&pUVar33->_padding_)->field0_0x0).DebugPtr;
          if (this_01 == (UBTCompositeNode *)0x0) goto LAB_146e98d08;
        }
        UBTCompositeNode::OnChildDeactivation
                  (this_01,&this->SearchData,(UBTNode *)pUVar33,local_res10,
                   this->ActiveInstanceIdx <= (this->ExecutionRequest).ExecuteInstanceIdx);
        pUVar33 = this_01;
      }
      if ((-1 < (int)uVar22) && ((int)uVar22 < (pUVar33->Children).ArrayNum)) {
        uVar29 = 0;
        if ((int)uVar22 < (pUVar33->Children).ArrayNum) {
          uVar29 = ~uVar22 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_1c0 = *(UBTTaskNode **)
                     ((pUVar33->Children).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x30 + 8)
        ;
        uVar29 = 0;
        if ((int)uVar22 < (pUVar33->Children).ArrayNum) {
          uVar29 = ~uVar22 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pUVar33 = *(UBTCompositeNode **)
                   ((pUVar33->Children).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x30);
        pUVar36 = local_1c0;
      }
    } while (pUVar33 != (UBTCompositeNode *)0x0);
    if (pUVar36 == (UBTTaskNode *)0x0) goto LAB_146e98d08;
LAB_146e98c3a:
    local_1e4.InstanceIndex = this->ActiveInstanceIdx;
    local_1e4.ExecutionIndex = (ushort)pUVar36->_padding_;
    bVar17 = FBTNodeIndex::TakesPriorityOver(&local_1e4,&(this->ExecutionRequest).SearchEnd);
    if (bVar17) {
      if (pUVar36->bIgnoreRestartSelf != 0) {
        uVar21 = this->ActiveInstanceIdx;
        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar21) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        bVar20 = FBehaviorTreeInstance::HasActiveNode
                           ((FBehaviorTreeInstance *)
                            ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar21 * 0x68
                            ),local_1e4.ExecutionIndex);
        if (bVar20) {
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)((this->SearchData).OwnerComp)->_padding_,
                       (FName *)&LogBehaviorTree.field_0x4,Verbose,
                       L"Task doesn\'t allow restart and it\'s already running! Discarding search.")
            ;
          }
LAB_146e98d03:
          bVar17 = false;
          goto LAB_146e98d14;
        }
      }
      goto LAB_146e98d0b;
    }
LAB_146e98d14:
    RollbackSearchChanges(this);
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"Search %s, reverted all changes.");
    }
  }
  (this->SearchData).bSearchInProgress = 0;
  if (local_1c8 != 0) {
    QueryPerformanceCounter(&local_160);
    FrameSearchTime =
         FrameSearchTime +
         (((double)local_160.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15) - dVar10);
  }
  FCsvProfiler::EndExclusiveStat("BehaviorTreeSearch");
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar26 == (FThreadStats *)0x0) {
      pFVar27 = FThreadStatsPool::Get();
      pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
    }
    if (pFVar26->bWaitForExplicitFlush < pFVar26->ScopeCount) {
      local_118.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
      local_118.NameAndInfo.Index.Value = FVar31.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_108);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_108.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_108.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_108.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_108.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar26,&local_118);
      piVar1 = &pFVar26->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar26,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar26,false,false);
      }
    }
  }
  if ((this->SearchData).bPostponeSearch != 0) {
    ScheduleExecutionUpdate(this);
    return;
  }
  local_1a0.bIsRestart = '\0';
  local_1a0.bTryNextChild = '\0';
  local_1a0.SearchStart.InstanceIndex = 0xffff;
  local_1a0.SearchStart.ExecutionIndex = 0xffff;
  local_1a0.SearchEnd.InstanceIndex = 0xffff;
  local_1a0.SearchEnd.ExecutionIndex = 0xffff;
  local_1a0.ExecuteNode.field0_0x0.DebugPtr = (TObjectPtr<UBTCompositeNode_const_>_u_0)0x0;
  FBTNodeExecutionInfo::operator=(&this->ExecutionRequest,&local_1a0);
  (this->PendingExecution).bLocked = 0;
  if (bVar17 != false) {
    iVar23 = (this->InstanceStack).ArrayNum;
    uVar29 = iVar23 - 1;
    uVar22 = 0;
    if ((int)uVar29 < iVar23) {
      uVar22 = ~uVar29 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((this->InstanceStack).AllocatorInstance.Data
        [(longlong)(this->InstanceStack).ArrayNum * 0x68 + -0x27] == (FScriptContainerElement)0x1) {
      iVar23 = (this->InstanceStack).ArrayNum;
      (this->SearchData).bFilterOutRequestFromDeactivatedBranch = 1;
      uVar29 = iVar23 - 1;
      uVar22 = 0;
      if ((int)uVar29 < iVar23) {
        uVar22 = ~uVar29 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this->InstanceStack).AllocatorInstance.Data;
      lVar34 = (longlong)(int)uVar29 * 0x68;
      pUVar36 = *(UBTTaskNode **)(pFVar6 + lVar34 + 8);
      pFVar6[lVar34 + 0x41] = (FScriptContainerElement)0x2;
      UnregisterMessageObserversFrom(this,pUVar36);
      (this->SearchData).bPreserveActiveNodeMemoryOnRollback = 1;
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(local_78,(UBTNode *)pUVar36);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                   L"Abort task: %s");
        if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
        }
      }
      lVar8 = *(longlong *)(pFVar6 + lVar34 + 0x30);
      if ((*(int *)(pFVar6 + lVar34 + 0x38) < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TVar24 = UBTTaskNode::WrappedAbortTask
                         (pUVar36,this,
                          (uchar *)((ulonglong)*(ushort *)((longlong)&pUVar36->_padding_ + 2) +
                                   lVar8));
      if ((pFVar6[lVar34 + 0x41] == (FScriptContainerElement)0x2) &&
         (uVar29 == (this->InstanceStack).ArrayNum - 1U)) {
        OnTaskFinished(this,pUVar36,TVar24);
      }
      (this->SearchData).bFilterOutRequestFromDeactivatedBranch = 0;
    }
    pUVar36 = local_1c0;
    puVar32 = &(this->PendingExecution).field_0x8;
    if ((this->PendingExecution).bLocked == 0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1c0 != (UBTTaskNode *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_1c0);
      }
      (this->PendingExecution).NextTask.field0_0x0.DebugPtr = pUVar36;
      (this->PendingExecution).bOutOfNodes = 0;
      *(uint *)puVar32 = *(uint *)puVar32 | (uint)(pUVar36 == (UBTTaskNode *)0x0);
    }
  }
LAB_146e990c5:
  ProcessPendingExecution(this);
  return;
}

// ProcessPendingExecution @ 146e99130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::ProcessPendingExecution(UBehaviorTreeComponent *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FBehaviorTreeInstance,TSizedDefaultAllocator<32>_> *this_00;
  UBTTaskNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FBTNodeIndex local_res8 [2];
  TObjectPtr<UBTTaskNode>_u_0 local_38;
  uint local_30;
  
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,All,L"%hs");
  }
  if (this->bWaitingForLatentAborts != '\0') {
    return;
  }
  pUVar3 = (this->PendingExecution).NextTask.field0_0x0.DebugPtr;
  if ((pUVar3 == (UBTTaskNode *)0x0) && ((this->PendingExecution).bOutOfNodes == 0)) {
    return;
  }
  if ((this->PendingExecution).bLocked != 0) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UBTTaskNode *)0x0)) {
    local_30 = local_30 & 0xfffffffc;
    local_38.DebugPtr = (UBTTaskNode *)0x0;
    FBTPendingExecutionInfo::operator=
              (&this->PendingExecution,(FBTPendingExecutionInfo *)&local_38.ObjectPtr);
    if (pUVar3 == (UBTTaskNode *)0x0) {
      local_res8[0].InstanceIndex = 0;
      local_res8[0].ExecutionIndex = 0;
      goto LAB_146e99247;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    local_30 = local_30 & 0xfffffffc;
    local_38.DebugPtr = (UBTTaskNode *)0x0;
    FBTPendingExecutionInfo::operator=
              (&this->PendingExecution,(FBTPendingExecutionInfo *)&local_38.ObjectPtr);
  }
  local_res8[0].ExecutionIndex = (ushort)pUVar3->_padding_;
  local_res8[0].InstanceIndex = this->ActiveInstanceIdx;
LAB_146e99247:
  UnregisterAuxNodesUpTo(this,local_res8);
  SuspendBranchActions(this,All);
  ApplySearchData(this,(UBTNode *)pUVar3);
  uVar8 = this->ActiveInstanceIdx + 1;
  if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->InstanceStack).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FBehaviorTreeInstance::Cleanup
                ((FBehaviorTreeInstance *)
                 ((this->InstanceStack).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x68),this,
                 StoreSubtree);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->InstanceStack).ArrayNum);
    this_00 = &this->InstanceStack;
    iVar10 = (this->InstanceStack).ArrayNum;
    piVar1 = &(this->InstanceStack).ArrayNum;
    iVar9 = this->ActiveInstanceIdx + 1;
    if (iVar10 < iVar9) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x68,8,iVar9 - iVar10,&this_00->AllocatorInstance,piVar1,
                         &(this->InstanceStack).ArrayMax);
      DefaultConstructItems<FBehaviorTreeInstance,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x68,iVar9 - iVar10);
    }
    else if (iVar9 < iVar10) {
      iVar10 = iVar10 - iVar9;
      if ((iVar10 < 0) &&
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
      if (iVar10 != 0) {
        TArray<FBehaviorTreeInstance,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,iVar9,iVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,&this_00->AllocatorInstance,*piVar1,&(this->InstanceStack).ArrayMax);
      }
    }
  }
  if ((pUVar3 == (UBTTaskNode *)0x0) ||
     ((this->InstanceStack).ArrayNum <= (int)(uint)this->ActiveInstanceIdx)) {
    ResumeBranchActions(this);
    (**(code **)(this->_padding_ + 0x570))(this);
  }
  else {
    ExecuteTask(this,pUVar3);
  }
  return;
}

// ProcessPendingInitialize @ 146e99460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::ProcessPendingInitialize(UBehaviorTreeComponent *this)

{
  int *piVar1;
  undefined1 *puVar2;
  UBehaviorTree *pUVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  int iVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  longlong lVar9;
  UAISystemBase *pUVar10;
  FName local_res8;
  FString local_18;
  
  if ((this->SuspendedBranchActions & ProcessPendingInitialize) != None) {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar3 = (this->TreeStartInfo).Asset;
      if (pUVar3 == (UBehaviorTree *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res8 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_res8,&local_18);
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"ProcessPendingInitialize(%s) queued up");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    iVar6 = (this->PendingBranchActionRequests).ArrayNum;
    piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
    }
    (this->PendingBranchActionRequests).ArrayNum = iVar6 + 1;
    lVar9 = (longlong)iVar6;
    pFVar4 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + lVar9 * 0x10) = 0;
    *(undefined4 *)(pFVar4 + lVar9 * 0x10 + 8) = 0;
    *(undefined2 *)(pFVar4 + lVar9 * 0x10 + 0xc) = 0x200;
    return;
  }
  StopTree(this,Safe);
  if (this->bWaitingForLatentAborts != '\0') {
    return;
  }
  RemoveAllInstances(this);
  pUVar7 = (UWorld *)this->_padding_;
  this->bLoopExecution = (this->TreeStartInfo).ExecuteMode == Looped;
  this->bIsRunning = '\x01';
  if ((pUVar7 == (UWorld *)0x0) &&
     (pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar7 == (UWorld *)0x0)
     ) goto LAB_146e9961e;
  pUVar10 = (pUVar7->AISystem).field0_0x0.DebugPtr;
  if (pUVar10 == (UAISystemBase *)0x0) {
LAB_146e995e4:
    pUVar10 = (UAISystemBase *)0x0;
  }
  else {
    pUVar8 = UAISystem::StaticClass();
    iVar6 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar8->_padding_)) goto LAB_146e995e4;
  }
  if ((pUVar10 != (UAISystemBase *)0x0) &&
     (FVar5 = pUVar10[2].AISystemModuleName, FVar5 != (FName)0x0)) {
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UBehaviorTreeComponent>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UBehaviorTreeComponent>_>
              ((TArray<TObjectPtr<UBehaviorTreeComponent>,TSizedDefaultAllocator<32>_> *)
               ((longlong)FVar5 + 0x40),(TObjectPtr<UBehaviorTreeComponent> *)&local_res8);
  }
LAB_146e9961e:
  PushInstance(this,(this->TreeStartInfo).Asset);
  (this->TreeStartInfo).bPendingInitialize = '\0';
  return;
}

// PushInstance @ 146e99650

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBehaviorTreeComponent::PushInstance(UBehaviorTreeComponent *this,UBehaviorTree *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  FName this_01;
  UBTCompositeNode *this_02;
  FScriptContainerElement *pFVar5;
  UBTService *this_03;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  uchar uVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  UBlackboardData *pUVar16;
  UWorld *pUVar17;
  UClass *pUVar18;
  UBTNode *pUVar19;
  longlong lVar20;
  UAISystemBase *pUVar21;
  TObjectPtr<UBTCompositeNode>_u_0 TVar22;
  longlong lVar23;
  TObjectPtr<UBTCompositeNode>_u_0 *pTVar24;
  FBehaviorTreeInstance *this_04;
  uint uVar25;
  ushort local_res18 [4];
  longlong local_res20;
  TObjectPtr<UBTCompositeNode>_u_0 local_118;
  int local_110 [2];
  FString local_108;
  FString local_f8;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FScriptContainerElement *local_c8;
  FName local_c0;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FDestructionSentinel local_70;
  FString local_58;
  FString local_48;
  
  if ((((param_1->BlackboardAsset).field0_0x0.DebugPtr != (UBlackboardData *)0x0) &&
      ((longlong *)this->_padding_ != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x4f8))(), cVar8 == '\0')) {
    if (FVisualLogger::bIsRecording == 0) {
      return false;
    }
    pUVar16 = UBlackboardComponent::GetBlackboardAsset((UBlackboardComponent *)this->_padding_);
    if (pUVar16 == (UBlackboardData *)0x0) {
      ::FString::FString(&local_f8,L"None");
    }
    else {
      local_e8 = (FName)pUVar16->_padding_;
      ::FName::ToString(&local_e8,&local_f8);
    }
    pUVar16 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar16 == (UBlackboardData *)0x0) {
      ::FString::FString(&local_108,L"None");
    }
    else {
      local_e0 = (FName)pUVar16->_padding_;
      ::FName::ToString(&local_e0,&local_108);
    }
    local_d8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_d8,&local_b0);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Warning,
               L"Failed to execute tree %s: blackboard %s is not compatibile with current: %s!");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    local_80.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
      local_80.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    }
    goto LAB_146e99f55;
  }
  pUVar17 = (UWorld *)this->_padding_;
  if ((pUVar17 != (UWorld *)0x0) ||
     (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar17 != (UWorld *)0x0)) {
    pUVar21 = (pUVar17->AISystem).field0_0x0.DebugPtr;
    if (pUVar21 == (UAISystemBase *)0x0) {
LAB_146e99807:
      pUVar21 = (UAISystemBase *)0x0;
    }
    else {
      pUVar18 = UAISystem::StaticClass();
      iVar14 = (int)pUVar18->_padding_;
      if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar18->_padding_)) goto LAB_146e99807;
    }
    if ((pUVar21 != (UAISystemBase *)0x0) &&
       (this_01 = pUVar21[2].AISystemModuleName, this_01 != (FName)0x0)) {
      pUVar19 = GetActiveNode(this);
      if ((pUVar19 == (UBTNode *)0x0) ||
         (this_02 = (pUVar19->ParentNode).field0_0x0.DebugPtr, this_02 == (UBTCompositeNode *)0x0))
      {
LAB_146e9999e:
        local_118.DebugPtr = (UBTCompositeNode *)0x0;
        local_res18[0] = 0;
        bVar9 = UBehaviorTreeManager::LoadTree
                          ((UBehaviorTreeManager *)this_01,param_1,&local_118.DebugPtr,local_res18);
        if (!bVar9) {
          return false;
        }
        iVar14 = (this->InstanceStack).ArrayNum;
        piVar1 = &(this->InstanceStack).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x868,&(this->InstanceStack).AllocatorInstance,piVar1);
        }
        (this->InstanceStack).ArrayNum = iVar14 + 1;
        this_04 = (FBehaviorTreeInstance *)
                  ((this->InstanceStack).AllocatorInstance.Data + (longlong)iVar14 * 0x68);
        DefaultConstructItems<FBehaviorTreeInstance,int>(this_04,1);
        uVar11 = UpdateInstanceId(this,param_1,pUVar19,(this->InstanceStack).ArrayNum + -1);
        TVar22 = local_118;
        this_04->InstanceIdIndex = uVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UBTCompositeNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        (this_04->RootNode).field0_0x0.DebugPtr = (UBTCompositeNode *)TVar22;
        (this_04->ActiveNode).field0_0x0.DebugPtr = (UBTNode *)0x0;
        bVar2 = this_04->InstanceIdIndex;
        (this_04->ActiveNodeType).Value = '\0';
        if (((this->KnownInstances).ArrayNum <= (int)(uint)bVar2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        local_c8 = (this->KnownInstances).AllocatorInstance.Data + (ulonglong)bVar2 * 0x38;
        local_110[0] = *(int *)(local_c8 + 0x30);
        this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(local_c8 + 0x20);
        local_res20 = CONCAT44(local_res20._4_4_,*(uint *)(local_c8 + 0x28));
        if (*(uint *)(local_c8 + 0x28) != (uint)local_res18[0]) {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,(uint)local_res18[0])
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar22.DebugPtr != (UBTCompositeNode *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar22.DebugPtr);
          }
          ((TObjectPtr<UBTCompositeNode>_u_0 *)(local_c8 + 8))->DebugPtr =
               (UBTCompositeNode *)TVar22;
        }
        FBehaviorTreeInstance::SetInstanceMemory(this_04,this_00);
        FBehaviorTreeInstance::Initialize
                  (this_04,this,TVar22.DebugPtr,local_110,
                   (uint)((uint)local_res20 == local_res18[0]));
        uVar13 = IntCastChecked<unsigned_short,int>((this->InstanceStack).ArrayNum + -1);
        uVar25 = 0;
        this->ActiveInstanceIdx = uVar13;
        if (0 < ((TVar22.DebugPtr)->Services).ArrayNum) {
          local_res20 = 0;
          do {
            lVar23 = local_res20;
            uVar15 = 0;
            if ((int)uVar25 < ((TVar22.DebugPtr)->Services).ArrayNum) {
              uVar15 = ~uVar25 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            uVar13 = this->ActiveInstanceIdx;
            this_03 = *(UBTService **)
                       (((TVar22.DebugPtr)->Services).AllocatorInstance.Data + lVar23);
            if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar13) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            pFVar5 = (this->InstanceStack).AllocatorInstance.Data;
            lVar20 = (ulonglong)uVar13 * 0x68;
            lVar23 = *(longlong *)(pFVar5 + lVar20 + 0x30);
            if ((*(int *)(pFVar5 + lVar20 + 0x38) < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            uVar13 = *(ushort *)((longlong)&this_03->_padding_ + 2);
            UBTService::NotifyParentActivation(this_03,&this->SearchData);
            uVar3 = this->ActiveInstanceIdx;
            if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar3) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            FBehaviorTreeInstance::AddToActiveAuxNodes
                      ((FBehaviorTreeInstance *)
                       ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar3 * 0x68),this
                       ,(UBTAuxiliaryNode *)this_03);
            UBTAuxiliaryNode::WrappedOnBecomeRelevant
                      ((UBTAuxiliaryNode *)this_03,this,(uchar *)((ulonglong)uVar13 + lVar23));
            uVar25 = uVar25 + 1;
            local_res20 = local_res20 + 8;
          } while ((int)uVar25 < ((TVar22.DebugPtr)->Services).ArrayNum);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FBehaviorTreeDelegates::OnTreeStarted,(FWriteAccessScope *)&local_70);
        bVar9 = false;
        FBehaviorTreeDelegates::OnTreeStarted._28_4_ =
             FBehaviorTreeDelegates::OnTreeStarted._28_4_ + 1;
        iVar14 = FBehaviorTreeDelegates::OnTreeStarted._16_4_ + -1;
        if (-1 < iVar14) {
          lVar23 = (longlong)iVar14 << 4;
          bVar9 = false;
          do {
            if (((int)FBehaviorTreeDelegates::OnTreeStarted._16_4_ <= iVar14) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (((*(int *)(lVar23 + 8 + FBehaviorTreeDelegates::OnTreeStarted._8_8_) == 0) ||
                (plVar6 = *(longlong **)(lVar23 + FBehaviorTreeDelegates::OnTreeStarted._8_8_),
                plVar6 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar6 + 0x68))(plVar6,this,param_1), cVar8 == '\0')) {
              bVar9 = true;
            }
            lVar23 = lVar23 + -0x10;
            iVar14 = iVar14 + -1;
            TVar22 = local_118;
          } while (-1 < iVar14);
        }
        FBehaviorTreeDelegates::OnTreeStarted._28_4_ =
             FBehaviorTreeDelegates::OnTreeStarted._28_4_ + -1;
        if (bVar9) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FBehaviorTreeDelegates::OnTreeStarted,false);
        }
        if (local_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
        }
        if ((this->SuspendedBranchActions & SubTreeEvaluate) == None) {
          RequestExecution(this,TVar22.DebugPtr,(uint)this->ActiveInstanceIdx,(UBTNode *)TVar22,0,
                           InProgress,true);
          return true;
        }
        if (FVisualLogger::bIsRecording != 0) {
          UBehaviorTreeTypes::DescribeNodeHelper(&local_48,(UBTNode *)TVar22.DebugPtr);
          local_c0 = (FName)param_1->_padding_;
          ::FName::ToString(&local_c0,&local_90);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                     L"Evaluate sub tree(%s) root(%s) queued up");
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        iVar14 = (this->PendingBranchActionRequests).ArrayNum;
        piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
        }
        (this->PendingBranchActionRequests).ArrayNum = iVar14 + 1;
        pTVar24 = (TObjectPtr<UBTCompositeNode>_u_0 *)
                  ((this->PendingBranchActionRequests).AllocatorInstance.Data +
                  (longlong)iVar14 * 0x10);
        pTVar24->DebugPtr = (UBTCompositeNode *)TVar22;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar22.DebugPtr != (UBTCompositeNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar22.DebugPtr);
        }
        *(undefined2 *)((longlong)pTVar24 + 0xc) = 0x100;
        *(undefined4 *)(pTVar24 + 1) = 0;
        return true;
      }
      iVar4 = (this->InstanceStack).ArrayNum;
      iVar14 = iVar4 + -1;
      if ((iVar14 < 0) || (iVar4 <= iVar14)) {
        lVar23 = 0;
      }
      else {
        if ((iVar4 <= iVar14) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar5 = (this->InstanceStack).AllocatorInstance.Data;
        lVar23 = *(longlong *)(pFVar5 + (longlong)iVar14 * 0x68 + 0x30);
        if ((*(int *)(pFVar5 + (longlong)iVar14 * 0x68 + 0x38) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        lVar23 = (ulonglong)*(ushort *)((longlong)&this_02->_padding_ + 2) + lVar23;
      }
      iVar14 = UBTCompositeNode::GetChildIndex(this_02,pUVar19);
      cVar8 = (**(code **)(this_02->_padding_ + 0x308))(this_02,this,lVar23,iVar14);
      if (cVar8 != '\0') goto LAB_146e9999e;
      if (FVisualLogger::bIsRecording == 0) {
        return false;
      }
      UBehaviorTreeTypes::DescribeNodeHelper(&local_58,(UBTNode *)this_02);
      local_d0 = (FName)param_1->_padding_;
      ::FName::ToString(&local_d0,&local_a0);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Warning,
                 L"Failed to execute tree %s: parent of active node does not allow it! (%s)");
      local_80.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        local_80.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      }
      goto LAB_146e99f55;
    }
  }
  if (FVisualLogger::bIsRecording == 0) {
    return false;
  }
  local_b8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_b8,&local_80);
  FVisualLogger::CategorizedLogfImpl
            ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Warning,
             L"Failed to execute tree %s: behavior tree manager not found!");
LAB_146e99f55:
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return false;
}

// RegisterComponentTickFunctions @ 146e9a2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RegisterComponentTickFunctions(UBehaviorTreeComponent *this,bool param_1)

{
  if (param_1) {
    ScheduleNextTick(this,0.0);
  }
  UActorComponent::RegisterComponentTickFunctions((UActorComponent *)this,param_1);
  return;
}

// RegisterMessageObserver @ 146e9a320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RegisterMessageObserver
          (UBehaviorTreeComponent *this,UBTTaskNode *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined2 local_res10;
  undefined2 local_res12;
  FName local_res18 [2];
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  code *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  bool local_a8;
  UBTTaskNode *local_98;
  undefined2 *local_90;
  TSharedPtr<FAIMessageObserver,1> *local_88;
  FString local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  TSharedPtr<FAIMessageObserver,1> local_50;
  FString local_40;
  
  if (param_1 != (UBTTaskNode *)0x0) {
    local_res12 = (undefined2)param_1->_padding_;
    uVar3 = (this->InstanceStack).ArrayNum - 1;
    local_res18[0] = param_2;
    if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2))
    {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res10 = (undefined2)uVar3;
    uStack_b0 = 0;
    local_b8 = UBTTaskNode::ReceivedMessage;
    iStack_ac = local_80.Data.ArrayMax;
    local_d8 = (undefined1  [8])0x0;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
               (FWriteAccessScope *)&local_70);
    local_58 = &local_d0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTaskNode____A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar4[3] = 0;
      local_98 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_98);
      puVar4[4] = local_b8;
      puVar4[5] = CONCAT44(iStack_ac,uStack_b0);
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    local_90 = &local_res10;
    local_88 = FAIMessageObserver::Create
                         (&local_50,(UBrainComponent *)this,local_res18[0],
                          (TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
                           *)local_d8);
    TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FBTNodeIndex_const_&,TSharedPtr<FAIMessageObserver,1>_&&>_>
              ((TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                *)&this->TaskMessageObservers,
               (TPairInitializer<FBTNodeIndex_const_&,TSharedPtr<FAIMessageObserver,1>_&&> *)
               (local_res18 + 1),(bool *)&local_90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
               (FWriteAccessScope *)&local_b8);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d0,0,0,0x10);
      local_d0.DelegateSize = 0;
    }
    if (local_a8 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(iStack_ac,uStack_b0),
                 (FDestructionSentinel *)&local_b8);
    }
    if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_d8);
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_80,(UBTNode *)param_1);
      ::FName::ToString(local_res18,&local_40);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Message[%s] observer added for %s");
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RegisterMessageObserver @ 146e9a5c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RegisterMessageObserver
          (UBehaviorTreeComponent *this,UBTTaskNode *param_1,FName param_2,FAIRequestID param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined2 local_res10;
  undefined2 local_res12;
  FName local_res18;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  code *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  bool local_a8;
  TPairInitializer<FBTNodeIndex_const_&,TSharedPtr<FAIMessageObserver,1>_&&> local_98;
  undefined2 *local_88;
  TSharedPtr<FAIMessageObserver,1> *local_80;
  FString local_78;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  TSharedPtr<FAIMessageObserver,1> local_48;
  FString local_38;
  
  if (param_1 != (UBTTaskNode *)0x0) {
    local_res12 = (undefined2)param_1->_padding_;
    uVar3 = (this->InstanceStack).ArrayNum - 1;
    local_res18 = param_2;
    if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2))
    {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res10 = (undefined2)uVar3;
    uStack_b0 = 0;
    local_b8 = UBTTaskNode::ReceivedMessage;
    iStack_ac = local_78.Data.ArrayMax;
    local_d8 = (undefined1  [8])0x0;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_d0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTaskNode____A6AXPEAVUBrainComponent__AEBUFAIMessage___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar4[3] = 0;
      local_98.Value = (TSharedPtr<FAIMessageObserver,1> *)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_98.Value);
      puVar4[4] = local_b8;
      puVar4[5] = CONCAT44(iStack_ac,uStack_b0);
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    local_88 = &local_res10;
    local_80 = FAIMessageObserver::Create
                         (&local_48,(UBrainComponent *)this,local_res18,param_3,
                          (TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
                           *)local_d8);
    TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FBTNodeIndex_const_&,TSharedPtr<FAIMessageObserver,1>_&&>_>
              ((TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                *)&this->TaskMessageObservers,&local_98,(bool *)&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
               (FWriteAccessScope *)&local_b8);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d0,0,0,0x10);
      local_d0.DelegateSize = 0;
    }
    if (local_a8 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(iStack_ac,uStack_b0),
                 (FDestructionSentinel *)&local_b8);
    }
    if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_d8);
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_78,(UBTNode *)param_1);
      ::FName::ToString(&local_res18,&local_38);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Message[%s:%d] observer added for %s");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RegisterParallelTask @ 146e9a870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RegisterParallelTask(UBehaviorTreeComponent *this,UBTTaskNode *param_1)

{
  ushort uVar1;
  UBTTaskNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  FBehaviorTreeInstance *this_00;
  TObjectPtr<UBTTaskNode_const_>_u_0 local_28;
  undefined4 local_20;
  FString local_18;
  
  uVar1 = this->ActiveInstanceIdx;
  if ((int)(uint)uVar1 < (this->InstanceStack).ArrayNum) {
    if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (FBehaviorTreeInstance *)
              ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar1 * 0x68);
    local_28.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTTaskNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_20 = 0;
    FBehaviorTreeInstance::AddToParallelTasks
              (this_00,(FBehaviorTreeParallelTask *)&local_28.ObjectPtr);
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)param_1);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"Parallel task: %s added to active list");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pUVar2 = (UBTTaskNode *)(this_00->ActiveNode).field0_0x0.DebugPtr;
    if (pUVar2 == (UBTTaskNode *)0x0) {
      bVar4 = param_1 == (UBTTaskNode *)0x0;
    }
    else {
      bVar4 = pUVar2 == param_1;
    }
    if (bVar4) {
      (this_00->ActiveNodeType).Value = '\x03';
    }
  }
  return;
}

// RemoveAllInstances @ 146e9b370

void __thiscall UBehaviorTreeComponent::RemoveAllInstances(UBehaviorTreeComponent *this)

{
  int *piVar1;
  TArray<FBehaviorTreeInstanceId,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FBehaviorTreeInstance *pFVar4;
  FScriptContainerElement *pFVar5;
  FBehaviorTreeInstanceId *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  UBehaviorTreeComponent *local_res10;
  TObjectPtr<UBTCompositeNode>_u_0 local_98 [8];
  undefined1 local_58;
  
  if (this->SuspendedBranchActions != None) {
    local_res8[0] = 0;
    `UBehaviorTreeComponent::RemoveAllInstances'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((this->InstanceStack).ArrayNum != 0) {
    StopTree(this,Forced);
  }
  if (((this->InstanceStack).ArrayNum != 0) &&
     (local_res10 = this,
     bVar8 = `UBehaviorTreeComponent::RemoveAllInstances'::__l6::<lambda_2>::operator()
                       (&local_res10), !bVar8)) {
    piVar1 = &(this->InstanceStack).ArrayMax;
    pFVar4 = (FBehaviorTreeInstance *)(this->InstanceStack).AllocatorInstance.Data;
    iVar3 = (this->InstanceStack).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FBehaviorTreeInstance,int>(pFVar4,iVar3);
      (this->InstanceStack).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,&(this->InstanceStack).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FBehaviorTreeInstance,int>(pFVar4,iVar3);
      (this->InstanceStack).ArrayNum = 0;
    }
  }
  FBehaviorTreeInstance::FBehaviorTreeInstance((FBehaviorTreeInstance *)&local_98[0].ObjectPtr);
  uVar10 = 0;
  pTVar2 = &this->KnownInstances;
  if (0 < (this->KnownInstances).ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar10 < (this->KnownInstances).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (*(int *)(pFVar5 + (longlong)(int)uVar10 * 0x38 + 0x28) != 0) {
        FBehaviorTreeInstance::SetInstanceMemory
                  ((FBehaviorTreeInstance *)&local_98[0].ObjectPtr,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                   (pFVar5 + (longlong)(int)uVar10 * 0x38 + 0x20));
        if (((uVar10 != (uVar10 & 0xff)) || ((int)uVar10 < 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_58 = (undefined1)uVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(pFVar5 + (longlong)(int)uVar10 * 0x38 + 8) != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)(pFVar5 + (longlong)(int)uVar10 * 0x38 + 8));
        }
        local_98[0] = *(TObjectPtr<UBTCompositeNode>_u_0 *)
                       (pFVar5 + (longlong)(int)uVar10 * 0x38 + 8);
        FBehaviorTreeInstance::Cleanup((FBehaviorTreeInstance *)&local_98[0].ObjectPtr,this,Destroy)
        ;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (this->KnownInstances).ArrayNum);
  }
  piVar1 = &(this->KnownInstances).ArrayMax;
  pFVar6 = (FBehaviorTreeInstanceId *)(pTVar2->AllocatorInstance).Data;
  iVar3 = (this->KnownInstances).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FBehaviorTreeInstanceId,int>(pFVar6,iVar3);
    (this->KnownInstances).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FBehaviorTreeInstanceId,int>(pFVar6,iVar3);
    (this->KnownInstances).ArrayNum = 0;
  }
  (this->NodeInstances).ArrayNum = 0;
  if ((this->NodeInstances).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NodeInstances).AllocatorInstance,0,&(this->NodeInstances).ArrayMax);
  }
  FBehaviorTreeInstance::~FBehaviorTreeInstance((FBehaviorTreeInstance *)&local_98[0].ObjectPtr);
  return;
}

// RequestBranchActivation @ 146e9b870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RequestBranchActivation
          (UBehaviorTreeComponent *this,UBTDecorator *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FString local_18;
  
  if ((this->SuspendedBranchActions & DecoratorActivate) != None) {
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)param_1);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"%s, Branch activation queued up");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = (this->PendingBranchActionRequests).ArrayNum;
    piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
    }
    (this->PendingBranchActionRequests).ArrayNum = iVar2 + 1;
    pFVar3 = (this->PendingBranchActionRequests).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
    *(UBTDecorator **)pFVar3 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTDecorator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(undefined4 *)(pFVar3 + 8) = 0;
    *(ushort *)(pFVar3 + 0xc) = (param_2 + 1) * 2;
    return;
  }
  ActivateBranch(this,param_1,param_2);
  return;
}

// RequestBranchDeactivation @ 146e9b990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RequestBranchDeactivation
          (UBehaviorTreeComponent *this,UBTDecorator *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FString local_18;
  
  if ((this->SuspendedBranchActions & DecoratorDeactivate) != None) {
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)param_1);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"%s, Branch deactivation queued up");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = (this->PendingBranchActionRequests).ArrayNum;
    piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
    }
    (this->PendingBranchActionRequests).ArrayNum = iVar2 + 1;
    pFVar3 = (this->PendingBranchActionRequests).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
    *(UBTDecorator **)pFVar3 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTDecorator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(undefined4 *)(pFVar3 + 8) = 0;
    *(undefined2 *)(pFVar3 + 0xc) = 8;
    return;
  }
  DeactivateBranch(this,param_1);
  return;
}

// RequestBranchEvaluation @ 146e9ba90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RequestBranchEvaluation(UBehaviorTreeComponent *this,UBTDecorator *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FString local_18;
  
  if ((this->SuspendedBranchActions & DecoratorEvaluate) != None) {
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)param_1);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"%s, Branch evaluation queued up");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = (this->PendingBranchActionRequests).ArrayNum;
    piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
    }
    (this->PendingBranchActionRequests).ArrayNum = iVar2 + 1;
    pFVar3 = (this->PendingBranchActionRequests).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
    *(UBTDecorator **)pFVar3 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBTDecorator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(undefined4 *)(pFVar3 + 8) = 0;
    *(undefined2 *)(pFVar3 + 0xc) = 1;
    return;
  }
  EvaluateBranch(this,param_1);
  return;
}

// RequestBranchEvaluation @ 146e9bb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RequestBranchEvaluation(UBehaviorTreeComponent *this,Type param_1)

{
  int *piVar1;
  int iVar2;
  UBTNode *pUVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  if (1 < param_1 - Aborted) {
    if ((this->SuspendedBranchActions & ActiveNodeEvaluate) != None) {
      pUVar3 = GetActiveNode(this);
      if (FVisualLogger::bIsRecording != 0) {
        UEnum::GetValueAsString<enum_EBTNodeResult::Type>(&local_18,param_1);
        UBehaviorTreeTypes::DescribeNodeHelper(&local_28,pUVar3);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"Request evaluation queued up for node(%s) with result(%s)");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      iVar2 = (this->PendingBranchActionRequests).ArrayNum;
      piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
      if (iVar2 == *piVar1) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
      }
      (this->PendingBranchActionRequests).ArrayNum = iVar2 + 1;
      pFVar4 = (this->PendingBranchActionRequests).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
      *(UBTNode **)pFVar4 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UBTNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      *(Type *)(pFVar4 + 8) = param_1;
      *(undefined2 *)(pFVar4 + 0xc) = 0x80;
      return;
    }
    EvaluateBranch(this,param_1);
  }
  return;
}

// RequestExecution @ 146e9bcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RequestExecution
          (UBehaviorTreeComponent *this,UBTCompositeNode *param_1,int param_2,UBTNode *param_3,
          int param_4,Type param_5,bool param_6)

{
  FBTNodeIndex *pFVar1;
  undefined1 *puVar2;
  FName FVar3;
  UBTCompositeNode *pUVar4;
  code *pcVar5;
  double dVar6;
  undefined1 uVar7;
  double dVar8;
  TConsoleVariableData<int> *pTVar9;
  TObjectPtr<UBTCompositeNode_const_>_u_0 TVar10;
  bool bVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_SearchTime> FVar17;
  ulonglong uVar18;
  UClass *pUVar19;
  UBTCompositeNode *pUVar20;
  UBTNode *pUVar21;
  byte bVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FNameEntryId FVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  wchar_t *pwVar28;
  uint uVar29;
  uint local_res8;
  uint uStackX_c;
  FBTNodeIndex local_1f8;
  undefined1 local_1f4 [2];
  ushort local_1f2;
  FBTNodeIndex local_1f0;
  ushort local_1ec [2];
  FName local_1e8;
  byte local_1e0;
  undefined1 local_1d8 [2];
  ushort local_1d6;
  FScriptContainerElement *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  TObjectPtr<UBTCompositeNode_const_>_u_0 local_1c0;
  FColor_u_0 local_1b8;
  uint local_1b4;
  int local_1b0;
  UBTCompositeNode *local_1a8;
  FName local_1a0;
  LARGE_INTEGER local_198;
  LARGE_INTEGER local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [4];
  
  FVar17 = StatPtr_STAT_AI_BehaviorTree_SearchTime;
  if (StatPtr_STAT_AI_BehaviorTree_SearchTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_SearchTime>)0x0) {
    pFVar16 = ::FName::FName(&local_c8,"STAT_AI_BehaviorTree_SearchTime");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_SearchTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_SearchTime,
                        *pFVar16,L"BT Search Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1e8.ComparisonIndex.Value = 0;
  local_1e8.Number = 0;
  local_1e0 = 0;
  FVar3 = *(FName *)FVar17;
  FVar25 = FVar3.ComparisonIndex.Value;
  uVar14 = FVar3.Number;
  if ((FVar25.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      local_1e0 = local_1e0 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar25.Value;
        local_1a0.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                   ,0x483);
        local_1e0 = local_1e0 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar25.Value;
      uStackX_c = uVar14;
      local_1e8 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_1e0 = local_1e0 | 4;
    }
  }
  if (__CsvProfilerStat1158 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("BehaviorTreeSearch");
    __CsvProfilerStat1158 = true;
  }
  FCsvProfiler::BeginExclusiveStat("BehaviorTreeSearch","CSV_BehaviorTreeSearch");
  pTVar9 = CVarBTRecordFrameSearchTimes.Ref;
  bVar11 = IsInParallelGameThread();
  if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar8 = __real_4170000000000000;
  local_1b0 = pTVar9->ShadowedValue[0];
  if (local_1b0 == 0) {
    dVar6 = 0.0;
  }
  else {
    QueryPerformanceCounter(&local_198);
    NumSearchTimeCalls = NumSearchTimeCalls + 1;
    dVar6 = (double)local_198.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
  }
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeResult(&local_b0,param_5);
    UBehaviorTreeTypes::DescribeNodeHelper(&local_c0,param_3);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"Execution request by %s (result: %s)");
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if (((this->bIsRunning == '\0') ||
      ((this->InstanceStack).ArrayNum <= (int)(uint)this->ActiveInstanceIdx)) ||
     ((lVar23 = this->_padding_, lVar23 != 0 &&
      (((*(byte *)(lVar23 + 0x5d) & 2) != 0 || ((*(uint *)(lVar23 + 8) >> 0x1e & 1) != 0)))))) {
    if (FVisualLogger::bIsRecording == 0) goto LAB_146e9ce89;
    pwVar28 = L"> skip: tree is not running";
  }
  else {
    if (((((this->PendingExecution).NextTask.field0_0x0.DebugPtr == (UBTTaskNode *)0x0) &&
         ((this->PendingExecution).bOutOfNodes == 0)) || ((this->PendingExecution).bLocked != 0)) ||
       ((this->PendingExecution).bOutOfNodes == 0)) {
      if ((param_2 == 0xffff) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceIdx != FBTNodeIndex::InvalidIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                              ,0x49c,L"Index has used the InvalidIndex value!"), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = IntCastChecked<unsigned_short,int>(param_2);
      local_1a8 = (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr;
      local_1f8.ExecutionIndex = param_3->ExecutionIndex;
      local_1f8.InstanceIndex = uVar12;
      local_1f2 = 0xffff;
      local_1d6 = uVar12;
      if (this->SuspendedBranchActions != None) {
        if (((this->SuspendedBranchActions & ~Changing_Topology_Actions) != None) &&
           (FVisualLogger::bIsRecording != 0)) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Warning,
                     L"Caller should be converted to new Evaluate/Activate/DeactivateBranch API instead of using this RequestExecution directly"
                    );
        }
        local_1b4 = (this->PendingBranchActionRequests).ArrayNum;
        uVar18 = (ulonglong)(int)local_1b4;
        pFVar26 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
        pFVar24 = pFVar26 + uVar18 * 0x10;
        local_1d0 = pFVar24;
        do {
          if ((this->PendingBranchActionRequests).ArrayNum != (int)uVar18) {
            local_res8 = local_res8 & 0xffffff00;
            `TCheckedPointerIterator<UBehaviorTreeComponent::FBranchActionInfo,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_res8);
          }
          uVar13 = local_1f2;
          uVar12 = local_1d6;
          if (pFVar26 == pFVar24) goto LAB_146e9c4a3;
          if (*(short *)(pFVar26 + 0xc) == 8) {
            if (*(longlong *)pFVar26 != 0) {
              pUVar19 = Z_Construct_UClass_UBTDecorator_NoRegister();
              bVar11 = FObjectPtr::IsA((FObjectPtr *)pFVar26,pUVar19);
              if (((bVar11) && (lVar23 = *(longlong *)pFVar26, lVar23 != 0)) &&
                 (lVar27 = *(longlong *)(lVar23 + 0x48), pFVar24 = local_1d0, lVar27 != 0)) {
                bVar22 = *(byte *)(lVar23 + 0x59);
                if ((int)(uint)bVar22 < *(int *)(lVar27 + 0x60)) {
                  if ((*(int *)(lVar27 + 0x60) <= (int)(uint)bVar22) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pUVar21 = *(UBTNode **)(*(longlong *)(lVar27 + 0x58) + (ulonglong)bVar22 * 0x30);
                  pFVar24 = local_1d0;
                  goto joined_r0x000146e9c211;
                }
              }
            }
          }
          else if ((*(short *)(pFVar26 + 0xc) == 0x10) && (*(longlong *)pFVar26 != 0)) {
            pUVar19 = Z_Construct_UClass_UBTCompositeNode_NoRegister();
            bVar11 = FObjectPtr::IsA((FObjectPtr *)pFVar26,pUVar19);
            if (bVar11) {
              pUVar21 = *(UBTNode **)pFVar26;
joined_r0x000146e9c211:
              if ((pUVar21 != (UBTNode *)0x0) &&
                 (uVar14 = FindInstanceContainingNode(this,pUVar21), pFVar24 = local_1d0,
                 uVar14 != 0xffffffff)) {
                if ((uVar14 == 0xffff) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("BranchRootInstanceIdx != FBTNodeIndex::InvalidIndex",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                                        ,0x4cc,L"Index has used the InvalidIndex value!"), bVar11))
                {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (((uVar14 != (uVar14 & 0xffff)) || ((int)uVar14 < 0)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IntFitsIn<OutType>(In)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                        ,0xaa,
                                        L"Loss of data caused by narrowing conversion, In = %lld"),
                   bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar24 = local_1d0;
                if (((local_1f8.InstanceIndex == (ushort)uVar14) &&
                    (pUVar21->ExecutionIndex <= local_1f8.ExecutionIndex)) &&
                   (local_1f8.ExecutionIndex <= *(ushort *)((longlong)&pUVar21[1]._padding_ + 4)))
                goto LAB_146e9c2c6;
              }
            }
          }
          uVar18 = (ulonglong)local_1b4;
          pFVar26 = pFVar26 + 0x10;
        } while( true );
      }
      uVar13 = 0xffff;
      if ((this->PendingBranchActionRequests).ArrayNum != 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PendingBranchActionRequests.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                            ,0x4db,
                            L"All pending branches should have been flushed before requesting an execution"
                           );
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = 0xffff;
      }
LAB_146e9c4a3:
      if ((param_5 == Aborted) && (-1 < param_4)) {
        uVar13 = UBTCompositeNode::GetChildExecutionIndex(param_1,param_4,FirstNode);
        local_1f8.ExecutionIndex = uVar13;
        uVar13 = UBTCompositeNode::GetChildExecutionIndex(param_1,param_4 + 1,FirstNode);
      }
      local_1f0.ExecutionIndex = uVar13;
      local_1f0.InstanceIndex = uVar12;
      if ((local_1a8 != (UBTCompositeNode *)0x0) &&
         (bVar11 = FBTNodeIndex::TakesPriorityOver(&(this->ExecutionRequest).SearchStart,&local_1f8)
         , bVar11)) {
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                     L"> skip: already has request with higher priority");
        }
        if ((this->ExecutionRequest).SearchEnd.InstanceIndex != 0xffff) {
          if (param_5 == Aborted) {
            bVar11 = FBTNodeIndex::TakesPriorityOver(&(this->ExecutionRequest).SearchEnd,&local_1f0)
            ;
            if (bVar11) {
              if (FVisualLogger::bIsRecording != 0) {
                FVisualLogger::CategorizedLogfImpl
                          ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                           L"> expanding end of search range!");
              }
              (this->ExecutionRequest).SearchEnd = local_1f0;
            }
          }
          else {
            if (FVisualLogger::bIsRecording != 0) {
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                         L"> removing limit from end of search range!");
            }
            local_1c8 = 0xffffffff;
            (this->ExecutionRequest).SearchEnd.InstanceIndex = 0xffff;
            (this->ExecutionRequest).SearchEnd.ExecutionIndex = 0xffff;
          }
        }
        goto LAB_146e9ce89;
      }
      if (((this->SearchData).bFilterOutRequestFromDeactivatedBranch != 0) ||
         (this->bWaitingForLatentAborts != '\0')) {
        pFVar1 = &(this->SearchData).SearchRootNode;
        if (((local_1f8.ExecutionIndex != (this->SearchData).SearchRootNode.ExecutionIndex) ||
            (local_1f8.InstanceIndex != pFVar1->InstanceIndex)) &&
           ((bVar11 = FBTNodeIndex::TakesPriorityOver(pFVar1,&local_1f8), bVar11 &&
            (uVar13 = (this->SearchData).DeactivatedBranchStart.InstanceIndex, uVar13 != 0xffff))))
        {
          if (uVar13 != (this->SearchData).DeactivatedBranchEnd.InstanceIndex) {
            local_1f4[0] = 0;
            `UBehaviorTreeComponent::RequestExecution'::__l109::<lambda_1>::operator()(local_1f4);
          }
          uVar13 = (this->SearchData).DeactivatedBranchStart.InstanceIndex;
          if (uVar13 < local_1f8.InstanceIndex) {
            if (FVisualLogger::bIsRecording != 0) {
              ::FString::PrintfImpl(&local_118,L"[%d:%d]");
              ::FString::PrintfImpl(&local_128,L"[%d:%d]");
              ::FString::PrintfImpl(&local_138,L"[%d:%d]");
              ::FString::PrintfImpl(&local_148,L"[%d:%d]");
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                         L"> skip: node index %s in a deactivated instance [%s..%s[ (applying search data for %s)"
                        );
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data.AllocatorInstance.Data);
              }
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_146e9ce89;
          }
          if (((local_1f8.InstanceIndex == uVar13) &&
              ((this->SearchData).DeactivatedBranchStart.ExecutionIndex <= local_1f8.ExecutionIndex)
              ) && (local_1f8.ExecutionIndex <
                    (this->SearchData).DeactivatedBranchEnd.ExecutionIndex)) {
            if (FVisualLogger::bIsRecording != 0) {
              ::FString::PrintfImpl(&local_d8,L"[%d:%d]");
              ::FString::PrintfImpl(&local_e8,L"[%d:%d]");
              ::FString::PrintfImpl(&local_f8,L"[%d:%d]");
              ::FString::PrintfImpl(&local_108,L"[%d:%d]");
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                         L"> skip: node index %s in a deactivated branch [%s..%s[ (applying search data for %s)"
                        );
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_146e9ce89;
          }
        }
      }
      if (param_5 == Aborted) {
        if (((-1 < param_4) && (bVar11 = IsExecutingBranch(this,param_3,param_4), !bVar11)) &&
           (bVar11 = UBTCompositeNode::DoDecoratorsAllowExecution(param_1,this,param_2,param_4),
           !bVar11)) {
          if (FVisualLogger::bIsRecording == 0) goto LAB_146e9ce89;
          pwVar28 = L"> skip: decorators are not allowing execution";
          goto LAB_146e9ce70;
        }
        pUVar20 = (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr;
        uVar13 = (this->ExecutionRequest).ExecuteInstanceIdx;
        if (pUVar20 == (UBTCompositeNode *)0x0) {
          uVar13 = this->ActiveInstanceIdx;
          if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar13) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar26 = (this->InstanceStack).AllocatorInstance.Data;
          lVar23 = (ulonglong)uVar13 * 0x68;
          pUVar20 = *(UBTCompositeNode **)(pFVar26 + lVar23 + 8);
          if (pUVar20 == (UBTCompositeNode *)0x0) {
            pUVar20 = *(UBTCompositeNode **)(pFVar26 + lVar23);
          }
          else if (pFVar26[lVar23 + 0x41] != (FScriptContainerElement)0x0) {
            pUVar20 = (UBTCompositeNode *)pUVar20->_padding_;
          }
          uVar13 = this->ActiveInstanceIdx;
        }
        pUVar4 = (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr;
        if (pUVar4 == (UBTCompositeNode *)0x0) {
          bVar11 = param_1 == (UBTCompositeNode *)0x0;
        }
        else {
          bVar11 = pUVar4 == param_1;
        }
        if (!bVar11) {
          local_1c0.DebugPtr = (UBTCompositeNode *)0x0;
          local_1ec[0] = 0xffff;
          FindCommonParent(&this->InstanceStack,&this->KnownInstances,param_1,uVar12,pUVar20,uVar13,
                           &local_1c0.DebugPtr,local_1ec);
          TVar10 = local_1c0;
          if (param_1 != (UBTCompositeNode *)0x0) {
            lVar23 = (longlong)param_2 * 0x68;
            do {
              if (param_1 == TVar10.DebugPtr) break;
              pUVar20 = (UBTCompositeNode *)param_1->_padding_;
              lVar27 = lVar23;
              if (pUVar20 == (UBTCompositeNode *)0x0) {
                if (param_2 < 1) break;
                param_2 = param_2 - 1;
                lVar27 = lVar23 + -0x68;
                uVar14 = 0;
                if (param_2 < (this->InstanceStack).ArrayNum) {
                  uVar14 = (uint)~param_2 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                param_1 = *(UBTCompositeNode **)
                           ((this->InstanceStack).AllocatorInstance.Data + lVar23 + -0x60);
                pUVar20 = (UBTCompositeNode *)param_1->_padding_;
              }
              iVar15 = UBTCompositeNode::GetChildIndex(pUVar20,(UBTNode *)param_1);
              bVar11 = UBTCompositeNode::DoDecoratorsAllowExecution(pUVar20,this,param_2,iVar15);
              if (!bVar11) {
                if (FVisualLogger::bIsRecording == 0) goto LAB_146e9ce89;
                pwVar28 = L"> skip: decorators are not allowing execution";
                goto LAB_146e9ce70;
              }
              lVar23 = lVar27;
              param_1 = pUVar20;
            } while (pUVar20 != (UBTCompositeNode *)0x0);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar10.DebugPtr != (UBTCompositeNode *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
          }
          (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr = (UBTCompositeNode *)TVar10;
          (this->ExecutionRequest).ExecuteInstanceIdx = local_1ec[0];
        }
      }
      else {
        if (((-1 < param_4) && (param_4 < (param_1->Children).ArrayNum)) &&
           (0 < *(int *)((param_1->Children).AllocatorInstance.Data +
                        (longlong)param_4 * 0x30 + 0x28))) {
          pUVar19 = Z_Construct_UClass_UBTDecorator_NoRegister();
          iVar15 = (int)pUVar19->_padding_;
          if (((iVar15 <= *(int *)(param_3->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
               &pUVar19->_padding_)) &&
             (bVar11 = UBTCompositeNode::DoDecoratorsAllowExecution(param_1,this,param_2,param_4),
             bVar11)) {
            if (FVisualLogger::bIsRecording == 0) goto LAB_146e9ce89;
            pwVar28 = L"> skip: decorators are still allowing execution";
            goto LAB_146e9ce70;
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UBTCompositeNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr = param_1;
        (this->ExecutionRequest).ExecuteInstanceIdx = uVar12;
      }
      if (((local_1a8 == (UBTCompositeNode *)0x0) && (param_5 == Aborted)) ||
         ((pFVar1 = &(this->ExecutionRequest).SearchEnd, pFVar1->InstanceIndex != 0xffff &&
          (bVar11 = FBTNodeIndex::TakesPriorityOver(pFVar1,&local_1f0), bVar11)))) {
        if ((FVisualLogger::bIsRecording != 0) && (local_1a8 != (UBTCompositeNode *)0x0)) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,L"%s");
        }
        (this->ExecutionRequest).SearchEnd = local_1f0;
      }
      (this->ExecutionRequest).bTryNextChild = '\0';
      (this->ExecutionRequest).SearchStart = local_1f8;
      (this->ExecutionRequest).ContinueWithResult.Value = (uchar)param_5;
      puVar2 = &(this->ExecutionRequest).field_0x13;
      *puVar2 = *puVar2 | param_5 != Aborted;
      pUVar21 = GetActiveNode(this);
      bVar22 = 0;
      if (param_3 != pUVar21) {
        bVar22 = 2;
      }
      (this->ExecutionRequest).bIsRestart = '\0';
      puVar2 = &(this->ExecutionRequest).field_0x13;
      *puVar2 = *puVar2 | bVar22;
      (this->PendingExecution).bLocked = 1;
      if ((this->SearchData).bSearchInProgress != 0) {
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                     L"> aborting current task search!");
        }
        (this->SearchData).bPostponeSearch = 1;
      }
      if ((this->InstanceStack).ArrayNum == 0) {
LAB_146e9cd9e:
        bVar11 = false;
      }
      else {
        iVar15 = (this->InstanceStack).ArrayNum;
        uVar29 = iVar15 - 1;
        uVar14 = 0;
        if ((int)uVar29 < iVar15) {
          uVar14 = ~uVar29 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this->InstanceStack).AllocatorInstance.Data
            [(longlong)(this->InstanceStack).ArrayNum * 0x68 + -0x27] !=
            (FScriptContainerElement)0x2) goto LAB_146e9cd9e;
        bVar11 = true;
      }
      if ((this->bWaitingForLatentAborts != '\0') || (bVar11)) {
        if ((this->ExecutionRequest).SearchEnd.InstanceIndex != 0xffff) {
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                       L"> removing limit from end of search range because of request during task abortion!"
                      );
          }
          local_1c4 = 0xffffffff;
          (this->ExecutionRequest).SearchEnd.InstanceIndex = 0xffff;
          (this->ExecutionRequest).SearchEnd.ExecutionIndex = 0xffff;
        }
        RollbackSearchChanges(this);
      }
      if ((~this->bWaitingForLatentAborts & 1) != 0) {
        ScheduleNextTick(this,0.0);
        if ((UE::BehaviorTree::bEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest != false)
           && (((((this->PendingExecution).NextTask.field0_0x0.DebugPtr == (UBTTaskNode *)0x0 &&
                 ((this->PendingExecution).bOutOfNodes == 0)) ||
                ((this->PendingExecution).bLocked != 0)) &&
               ((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr == (UBTCompositeNode *)0x0)
               ))) {
          `UBehaviorTreeComponent::ScheduleExecutionUpdate'::__l2::<lambda_1>::operator()(local_1d8)
          ;
        }
        this->bRequestedFlowUpdate = '\x01';
      }
      goto LAB_146e9ce89;
    }
    if (FVisualLogger::bIsRecording == 0) goto LAB_146e9ce89;
    pwVar28 = L"> skip: tree ran out of nodes on previous restart and needs to process it first";
  }
LAB_146e9ce70:
  FVisualLogger::CategorizedLogfImpl
            ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,pwVar28);
LAB_146e9ce89:
  if (local_1b0 != 0) {
    QueryPerformanceCounter(&local_190);
    FrameSearchTime =
         FrameSearchTime +
         (((double)local_190.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) - dVar6);
  }
  FCsvProfiler::EndExclusiveStat("BehaviorTreeSearch");
  if ((local_1e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_1e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_1e0 & 4) != 0) {
    FThreadStats::AddMessage(local_1e8,CycleScopeEnd);
  }
  return;
LAB_146e9c2c6:
  if (FVisualLogger::bIsRecording != 0) {
    UBehaviorTreeTypes::DescribeNodeHelper(local_80,*(UBTNode **)pFVar26);
    ::FString::PrintfImpl(&local_178,L"[%d:%d]");
    ::FString::PrintfImpl(&local_188,L"[%d:%d]");
    ::FString::PrintfImpl(&local_158,L"[%s...%s]");
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    UBehaviorTreeTypes::DescribeNodeHelper(&local_90,pUVar21);
    ::FString::PrintfImpl(&local_168,L"[%d:%d]");
    UBehaviorTreeTypes::DescribeNodeHelper(&local_a0,param_3);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"> skip: request by %s(%s) is in deactivated branch %s(%s) and was deactivated by %s"
              );
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
    }
  }
  goto LAB_146e9ce89;
}

// RequestUnregisterAuxNodesInBranch @ 146e9d0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RequestUnregisterAuxNodesInBranch
          (UBehaviorTreeComponent *this,UBTCompositeNode *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FString local_18;
  
  if (param_1 != (UBTCompositeNode *)0x0) {
    if ((this->SuspendedBranchActions & UnregisterAuxNodes) != None) {
      if (FVisualLogger::bIsRecording != 0) {
        UBehaviorTreeTypes::DescribeNodeHelper(&local_18,(UBTNode *)param_1);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"%s, unregister aux nodes in branch queued up");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      iVar2 = (this->PendingBranchActionRequests).ArrayNum;
      piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
      if (iVar2 == *piVar1) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
      }
      (this->PendingBranchActionRequests).ArrayNum = iVar2 + 1;
      pFVar3 = (this->PendingBranchActionRequests).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
      *(UBTCompositeNode **)pFVar3 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(undefined4 *)(pFVar3 + 8) = 0;
      *(undefined2 *)(pFVar3 + 0xc) = 0x10;
      return;
    }
    UnregisterAuxNodesInBranch(this,param_1,true);
  }
  return;
}

// RestartLogic @ 146e9d3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::RestartLogic(UBehaviorTreeComponent *this)

{
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (FVisualLogger::bIsRecording != 0) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UBehaviorTreeComponent::RestartLogic",0x24,Yes);
    local_148 = local_138.Ptr;
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,L"%s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  RestartTree(this,ForceReevaluateRootNode);
  return;
}

// RestartTree @ 146e9d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::RestartTree(UBehaviorTreeComponent *this,EBTRestartMode param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UBTCompositeNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  UBehaviorTree *pUVar6;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (FVisualLogger::bIsRecording != 0) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UBehaviorTreeComponent::RestartTree",0x23,Yes);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,L"%s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (this->bIsRunning == '\0') {
    if ((this->TreeStartInfo).Asset == (UBehaviorTree *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Warning,
                   L"\tFailed to restart tree logic since it has never been started and it\'s not possible to say which BT asset to use."
                  );
      }
    }
    else {
      (this->TreeStartInfo).bPendingInitialize = '\x01';
      ProcessPendingInitialize(this);
    }
  }
  else if (this->bRequestedStop == '\0') {
    iVar2 = (this->InstanceStack).ArrayNum;
    if (iVar2 != 0) {
      if (param_1 == ForceReevaluateRootNode) {
        if (iVar2 < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pUVar3 = *(UBTCompositeNode **)(this->InstanceStack).AllocatorInstance.Data;
        RequestExecution(this,pUVar3,0,(UBTNode *)pUVar3,-1,Aborted,true);
      }
      else if (param_1 == CompleteRestart) {
        pUVar6 = GetRootTree(this);
        (this->TreeStartInfo).bPendingInitialize = '\x01';
        (this->TreeStartInfo).Asset = pUVar6;
        (this->TreeStartInfo).ExecuteMode = this->bLoopExecution;
        ProcessPendingInitialize(this);
        StopTree(this,Safe);
      }
    }
  }
  else {
    (this->TreeStartInfo).bPendingInitialize = '\x01';
  }
  return;
}

// ResumeBranchActions @ 146e9d6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::ResumeBranchActions(UBehaviorTreeComponent *this)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UBTCompositeNode *pUVar5;
  code *pcVar6;
  bool bVar7;
  UBTDecorator *pUVar8;
  UBTCompositeNode *pUVar9;
  UClass *pUVar10;
  UEnum *this_00;
  FString *pFVar11;
  UBTNode *pUVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *this_01;
  wchar_t *pwVar14;
  FName local_res8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,All,
               L"Resuming branch actions.");
  }
  if ((this->SuspendedBranchActions == None) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SuspendedBranchActions != EBTBranchAction::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                         ,0x31a,L"Expecting SuspendBranchActions() be called before calling resume")
     , bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->SuspendedBranchActions = None;
  if (0 < (this->PendingBranchActionRequests).ArrayNum) {
    pwVar14 = L"";
    do {
      pFVar4 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
      (this->PendingBranchActionRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar2 = (this->PendingBranchActionRequests).ArrayNum;
      (this->PendingBranchActionRequests).ArrayNum = 0;
      (this->PendingBranchActionRequests).ArrayMax = 0;
      for (this_01 = pFVar4; this_01 != pFVar4 + (longlong)iVar2 * 0x10; this_01 = this_01 + 0x10) {
        uVar1 = *(ushort *)(this_01 + 0xc);
        if (0x40 < uVar1) {
          if (uVar1 == 0x80) {
            iVar3 = (this->InstanceStack).ArrayNum;
            if (iVar3 == 0) {
              pUVar12 = (UBTNode *)0x0;
            }
            else {
              uVar1 = this->ActiveInstanceIdx;
              if ((iVar3 <= (int)(uint)uVar1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pUVar12 = *(UBTNode **)
                         ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar1 * 0x68 + 8
                         );
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar12 != (UBTNode *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar12);
              }
            }
            if (*(UBTNode **)this_01 == (UBTNode *)0x0) {
              bVar7 = pUVar12 == (UBTNode *)0x0;
            }
            else {
              bVar7 = *(UBTNode **)this_01 == pUVar12;
            }
            if (bVar7) {
              EvaluateBranch(this,*(Type *)(this_01 + 8));
            }
            else if (FVisualLogger::bIsRecording != 0) {
              this_00 = StaticEnum<enum_EBTNodeResult::Type>();
              if ((this_00 == (UEnum *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("EnumClass != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0xca4,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              UEnum::GetNameByValue(this_00,(long64)&local_res8);
              ::FName::ToString(&local_res8,&local_b8);
              UBehaviorTreeTypes::DescribeNodeHelper(&local_68,pUVar12);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Request evaluation skipped because node(%s) is not active anymore");
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
            }
          }
          else if (uVar1 == 0x100) {
            if (*(longlong *)this_01 == 0) {
              pFVar11 = GetTypeName<UBTCompositeNode>(&local_38);
              if ((pFVar11->Data).ArrayNum != 0) {
                pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar14);
            }
            pUVar10 = Z_Construct_UClass_UBTCompositeNode_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar10);
            if ((!bVar7) ||
               (pUVar9 = *(UBTCompositeNode **)this_01, pUVar9 == (UBTCompositeNode *)0x0)) {
              pFVar11 = GetTypeName<UBTCompositeNode>(&local_58);
              if ((pFVar11->Data).ArrayNum == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
              }
              pFVar11 = GetFullNameForCastLogError<UBTNode_const_>(&local_48,*(UBTNode **)this_01);
              if ((pFVar11->Data).ArrayNum != 0) {
                pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar14,pwVar13);
            }
            iVar3 = (this->InstanceStack).ArrayNum;
            if (iVar3 != 0) {
              uVar1 = this->ActiveInstanceIdx;
              if ((iVar3 <= (int)(uint)uVar1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pUVar5 = *(UBTCompositeNode **)
                        ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar1 * 0x68);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar5 != (UBTCompositeNode *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
              if (pUVar5 == pUVar9) {
                RequestExecution(this,pUVar9,(uint)this->ActiveInstanceIdx,(UBTNode *)pUVar9,0,
                                 InProgress,true);
                goto switchD_146e9d7f0_caseD_3;
              }
            }
            if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeHelper(&local_78,(UBTNode *)pUVar9);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Sub tree evaluation skipped because node(%s) is not active anymore");
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
            }
          }
          else if (uVar1 == 0x200) {
            ProcessPendingInitialize(this);
          }
          else if (uVar1 == 0x400) {
            (**(code **)(this->_padding_ + 0x518))(this);
          }
          else if (uVar1 == 0x800) {
            RemoveAllInstances(this);
          }
          goto switchD_146e9d7f0_caseD_3;
        }
        if (uVar1 == 0x40) {
switchD_146e9d7f0_caseD_20:
          StopTree(this,(uint)(uVar1 == 0x40));
        }
        else {
          switch(uVar1) {
          case 1:
            pUVar8 = CastChecked<UBTDecorator,UBTNode_const_>
                               ((TObjectPtr<UBTNode_const_> *)this_01,NullChecked);
            bVar7 = IsAuxNodeActive(this,(UBTAuxiliaryNode *)pUVar8);
            if (bVar7) {
              EvaluateBranch(this,pUVar8);
            }
            else if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeHelper(&local_a8,(UBTNode *)pUVar8);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Request deactivation skipped because decorator(%s) is not active anymore"
                        );
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            break;
          case 2:
          case 4:
            pUVar8 = CastChecked<UBTDecorator,UBTNode_const_>
                               ((TObjectPtr<UBTNode_const_> *)this_01,NullChecked);
            bVar7 = IsAuxNodeActive(this,(UBTAuxiliaryNode *)pUVar8);
            if (bVar7) {
              ActivateBranch(this,pUVar8,*(short *)(this_01 + 0xc) == 4);
            }
            else if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeHelper(&local_98,(UBTNode *)pUVar8);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Request deactivation skipped because decorator(%s) is not active anymore"
                        );
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            break;
          case 8:
            pUVar8 = CastChecked<UBTDecorator,UBTNode_const_>
                               ((TObjectPtr<UBTNode_const_> *)this_01,NullChecked);
            bVar7 = IsAuxNodeActive(this,(UBTAuxiliaryNode *)pUVar8);
            if (bVar7) {
              DeactivateBranch(this,pUVar8);
            }
            else if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeHelper(&local_88,(UBTNode *)pUVar8);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                         L"Request deactivation skipped because decorator(%s) is not active anymore"
                        );
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            break;
          case 0x10:
            pUVar9 = CastChecked<UBTCompositeNode,UBTNode_const_>
                               ((TObjectPtr<UBTNode_const_> *)this_01,NullChecked);
            UnregisterAuxNodesInBranch(this,pUVar9,true);
            break;
          case 0x20:
            goto switchD_146e9d7f0_caseD_20;
          }
        }
switchD_146e9d7f0_caseD_3:
      }
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    } while (0 < (this->PendingBranchActionRequests).ArrayNum);
  }
  return;
}

// ResumeLogic @ 146e9de40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall UBehaviorTreeComponent::ResumeLogic(UBehaviorTreeComponent *this,FString *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  Type TVar3;
  undefined1 local_res8 [8];
  
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"Execution updates: RESUMED (%s)");
  }
  TVar3 = UBrainComponent::ResumeLogic((UBrainComponent *)this,param_1);
  if (this->bIsPaused != '\0') {
    this->field_0x28a = this->field_0x28a & 0xdf;
    ScheduleNextTick(this,0.0);
    if (TVar3 == Continue) {
      if ((UBlackboardComponent *)this->_padding_ != (UBlackboardComponent *)0x0) {
        UBlackboardComponent::ResumeObserverNotifications
                  ((UBlackboardComponent *)this->_padding_,true);
      }
      if (((((this->PendingExecution).NextTask.field0_0x0.DebugPtr == (UBTTaskNode *)0x0) &&
           ((this->PendingExecution).bOutOfNodes == 0)) || ((this->PendingExecution).bLocked != 0))
         || ((this->PendingExecution).bOutOfNodes == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr != (UBTCompositeNode *)0x0) ||
         (bVar2)) {
        ScheduleNextTick(this,0.0);
        if ((UE::BehaviorTree::bEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest != false)
           && (((((this->PendingExecution).NextTask.field0_0x0.DebugPtr == (UBTTaskNode *)0x0 &&
                 ((this->PendingExecution).bOutOfNodes == 0)) ||
                ((this->PendingExecution).bLocked != 0)) &&
               ((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr == (UBTCompositeNode *)0x0)
               ))) {
          `UBehaviorTreeComponent::ScheduleExecutionUpdate'::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        this->bRequestedFlowUpdate = '\x01';
      }
      return Continue;
    }
    if ((TVar3 == RestartedInstead) &&
       ((UBlackboardComponent *)this->_padding_ != (UBlackboardComponent *)0x0)) {
      UBlackboardComponent::ResumeObserverNotifications
                ((UBlackboardComponent *)this->_padding_,false);
    }
  }
  return TVar3;
}

// RollbackSearchChanges @ 146e9dff0

void __thiscall UBehaviorTreeComponent::RollbackSearchChanges(UBehaviorTreeComponent *this)

{
  undefined1 uVar1;
  byte bVar2;
  UBTNode *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FBehaviorTreeInstance *pFVar12;
  longlong lVar13;
  longlong local_res18;
  
  iVar10 = (this->SearchData).RollbackInstanceIdx;
  if (-1 < iVar10) {
    if ((iVar10 == 0xffff) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SearchData.RollbackInstanceIdx != FBTNodeIndex::InvalidIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                           ,0x8ed,L"Index has used the InvalidIndex value!"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = (this->SearchData).RollbackInstanceIdx;
    if (((uVar11 != (uVar11 & 0xffff)) || ((int)uVar11 < 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (this->SearchData).DeactivatedBranchStart = (this->SearchData).RollbackDeactivatedBranchStart;
    (this->SearchData).DeactivatedBranchEnd = (this->SearchData).RollbackDeactivatedBranchEnd;
    (this->SearchData).RollbackDeactivatedBranchStart.InstanceIndex = 0xffff;
    (this->SearchData).RollbackDeactivatedBranchStart.ExecutionIndex = 0xffff;
    (this->SearchData).RollbackDeactivatedBranchEnd.InstanceIndex = 0xffff;
    (this->SearchData).RollbackDeactivatedBranchEnd.ExecutionIndex = 0xffff;
    iVar10 = (this->InstanceStack).ArrayNum;
    this->ActiveInstanceIdx = (ushort)uVar11;
    (this->SearchData).RollbackInstanceIdx = -1;
    if ((this->SearchData).bPreserveActiveNodeMemoryOnRollback == 0) {
      uVar11 = 0;
      if (0 < iVar10) {
        lVar13 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar11 < (this->InstanceStack).ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar12 = (FBehaviorTreeInstance *)((this->InstanceStack).AllocatorInstance.Data + lVar13)
          ;
          bVar2 = pFVar12->InstanceIdIndex;
          if (((this->KnownInstances).ArrayNum <= (int)(uint)bVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FBehaviorTreeInstance::SetInstanceMemory
                    (pFVar12,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                             ((this->KnownInstances).AllocatorInstance.Data +
                             (ulonglong)bVar2 * 0x38 + 0x20));
          iVar10 = (this->InstanceStack).ArrayNum;
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 0x68;
        } while ((int)uVar11 < iVar10);
      }
    }
    else {
      uVar11 = 0;
      if (0 < iVar10) {
        local_res18 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar11 < (this->InstanceStack).ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar12 = (FBehaviorTreeInstance *)
                    ((this->InstanceStack).AllocatorInstance.Data + local_res18);
          bVar2 = pFVar12->InstanceIdIndex;
          if (((this->KnownInstances).ArrayNum <= (int)(uint)bVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pUVar3 = (pFVar12->ActiveNode).field0_0x0.DebugPtr;
          pFVar4 = (this->KnownInstances).AllocatorInstance.Data;
          if (pUVar3 != (UBTNode *)0x0) {
            uVar8 = (**(code **)(pUVar3->_padding_ + 0x2d0))();
            if (uVar8 != 0) {
              pUVar3 = (pFVar12->ActiveNode).field0_0x0.DebugPtr;
              pFVar5 = (pFVar12->InstanceMemory).AllocatorInstance.Data;
              if (((pFVar12->InstanceMemory).ArrayNum < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              memcpy((void *)((ulonglong)((pFVar12->ActiveNode).field0_0x0.DebugPtr)->MemoryOffset +
                             *(longlong *)(pFVar4 + (ulonglong)bVar2 * 0x38 + 0x20)),
                     pFVar5 + pUVar3->MemoryOffset,(ulonglong)uVar8);
            }
          }
          FBehaviorTreeInstance::SetInstanceMemory
                    (pFVar12,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                             (pFVar4 + (ulonglong)bVar2 * 0x38 + 0x20));
          uVar11 = uVar11 + 1;
          iVar10 = (this->InstanceStack).ArrayNum;
          local_res18 = local_res18 + 0x68;
        } while ((int)uVar11 < iVar10);
      }
    }
    if (UE::BehaviorTree::bApplyAuxNodesFromFailedSearches != false) {
      uVar8 = this->ActiveInstanceIdx;
      uVar11 = 0;
      if ((int)(uint)uVar8 < iVar10) {
        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar13 = *(longlong *)
                  ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar8 * 0x68 + 8);
        if (lVar13 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint)*(ushort *)(lVar13 + 0x50);
        }
      }
      ApplyAllSearchUpdates(this,&(this->SearchData).PendingUpdates,uVar11,true,false);
      TickNewlyAddedAuxNodesHelper(this);
    }
    iVar10 = (this->SearchData).PendingUpdates.ArrayMax;
    (this->SearchData).PendingUpdates.ArrayNum = 0;
    if (iVar10 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->SearchData).PendingUpdates.AllocatorInstance,0,
                 &(this->SearchData).PendingUpdates.ArrayMax);
    }
    iVar10 = (this->SearchData).PendingNotifies.ArrayMax;
    (this->SearchData).PendingNotifies.ArrayNum = 0;
    if (iVar10 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,0,&(this->SearchData).PendingNotifies.AllocatorInstance,0,
                 &(this->SearchData).PendingNotifies.ArrayMax);
    }
  }
  return;
}

// ScheduleExecutionUpdate @ 146e9e9d0

void __thiscall UBehaviorTreeComponent::ScheduleExecutionUpdate(UBehaviorTreeComponent *this)

{
  undefined1 local_res8 [32];
  
  ScheduleNextTick(this,0.0);
  if (((UE::BehaviorTree::bEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest != false) &&
      ((((this->PendingExecution).NextTask.field0_0x0.DebugPtr == (UBTTaskNode *)0x0 &&
        ((this->PendingExecution).bOutOfNodes == 0)) || ((this->PendingExecution).bLocked != 0))))
     && ((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr == (UBTCompositeNode *)0x0)) {
    `UBehaviorTreeComponent::ScheduleExecutionUpdate'::__l2::<lambda_1>::operator()(local_res8);
  }
  this->bRequestedFlowUpdate = '\x01';
  return;
}

// ScheduleNextTick @ 146e9ea30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::ScheduleNextTick(UBehaviorTreeComponent *this,float param_1)

{
  code *pcVar1;
  char cVar2;
  UWorld *pUVar3;
  float fVar4;
  
  this->NextTickDeltaTime = param_1;
  if (this->bRequestedFlowUpdate != '\0') {
    this->NextTickDeltaTime = 0.0;
  }
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,All,
               L"BT(%i) schedule next tick %f, asked %f.");
  }
  pcVar1 = *(code **)(this->_padding_ + 0x430);
  if (__real_7f7fffff == this->NextTickDeltaTime) {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      (**(code **)(this->_padding_ + 0x420))(this,0);
    }
  }
  else {
    cVar2 = (*pcVar1)(this);
    if (cVar2 == '\0') {
      (**(code **)(this->_padding_ + 0x420))(this,1);
    }
    if ((this->bTickedOnce != false) ||
       (fVar4 = __real_38d1b717,
       __real_38d1b717 < this->NextTickDeltaTime || __real_38d1b717 == this->NextTickDeltaTime)) {
      fVar4 = this->NextTickDeltaTime;
    }
    UActorComponent::SetComponentTickIntervalAndCooldown((UActorComponent *)this,fVar4);
  }
  pUVar3 = (UWorld *)this->_padding_;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar3 == (UWorld *)0x0) {
      this->LastRequestedDeltaTimeGameTime = 0.0;
      return;
    }
  }
  this->LastRequestedDeltaTimeGameTime = pUVar3->TimeSeconds;
  return;
}

// SetComponentTickEnabled @ 146e9ec40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::SetComponentTickEnabled(UBehaviorTreeComponent *this,bool param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x430))();
  UActorComponent::SetComponentTickEnabled((UActorComponent *)this,param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x430))(this);
    if (cVar1 != '\0') {
      this->bTickedOnce = false;
      ScheduleNextTick(this,0.0);
    }
  }
  return;
}

// SetDynamicSubtree @ 146e9ecb0

void __thiscall
UBehaviorTreeComponent::SetDynamicSubtree
          (UBehaviorTreeComponent *this,FGameplayTag param_1,UBehaviorTree *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146e9ecb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x560))();
  return;
}

// SetDynamicSubtree @ 146e9ecd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::SetDynamicSubtree
          (UBehaviorTreeComponent *this,FGameplayTag param_1,UBehaviorTree *param_2,
          UBTCompositeNode *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  char local_res8 [8];
  FName local_res10;
  FName local_res18;
  FString local_88;
  FString local_78;
  code *local_68;
  FName *local_60;
  code *local_58;
  FName *local_50;
  FName local_48;
  UBehaviorTree *local_40;
  UBehaviorTreeComponent *local_38;
  char *local_30;
  
  local_res8[0] = '\0';
  local_30 = local_res8;
  local_res10 = param_1.TagName;
  local_48 = param_1.TagName;
  local_40 = param_2;
  local_38 = this;
  if (param_3 == (UBTCompositeNode *)0x0) {
    uVar5 = 0;
    if ((this->InstanceStack).ArrayNum < 1) goto LAB_146e9edea;
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->InstanceStack).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_50 = &local_48;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UBehaviorTreeComponent::SetDynamicSubtree'::__l2::<lambda_1>,void,UBTTaskNode_&,FBehaviorTreeInstance_const_&,int>
                 ::Call;
      ForEachChildTask(this,*(UBTCompositeNode **)
                             ((this->InstanceStack).AllocatorInstance.Data + lVar6),uVar5,
                       (TFunctionRef<void___cdecl(UBTTaskNode_&,FBehaviorTreeInstance_const_&,int)>
                        *)&local_58);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x68;
    } while ((int)uVar5 < (this->InstanceStack).ArrayNum);
  }
  else {
    local_60 = &local_48;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UBehaviorTreeComponent::SetDynamicSubtree'::__l2::<lambda_1>,void,UBTTaskNode_&,FBehaviorTreeInstance_const_&,int>
               ::Call;
    iVar3 = FindInstanceContainingNode(this,(UBTNode *)param_3);
    ForEachChildTask(this,param_3,iVar3,
                     (TFunctionRef<void___cdecl(UBTTaskNode_&,FBehaviorTreeInstance_const_&,int)> *)
                     &local_68);
  }
  if (local_res8[0] != '\0') {
    return;
  }
LAB_146e9edea:
  if (FVisualLogger::bIsRecording != 0) {
    ::FName::ToString(&local_res10,&local_78);
    if (param_2 == (UBehaviorTree *)0x0) {
      ::FString::FString(&local_88,L"None");
    }
    else {
      local_res18 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res18,&local_88);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"Failed to inject subtree %s at tag %s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StartLogic @ 146e9f590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::StartLogic(UBehaviorTreeComponent *this)

{
  undefined1 *puVar1;
  UBehaviorTree *pUVar2;
  wchar_t *pwVar3;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (FVisualLogger::bIsRecording != 0) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UBehaviorTreeComponent::StartLogic",0x22,Yes);
    local_148 = local_138.Ptr;
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,L"%s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if ((this->bIsRunning == '\0') || ((this->InstanceStack).ArrayNum == 0)) {
    if (((this->TreeStartInfo).Asset != (UBehaviorTree *)0x0) ||
       (pUVar2 = (this->DefaultBehaviorTreeAsset).field0_0x0.DebugPtr,
       (this->TreeStartInfo).Asset = pUVar2, pUVar2 != (UBehaviorTree *)0x0)) {
      (this->TreeStartInfo).bPendingInitialize = '\x01';
      ProcessPendingInitialize(this);
      return;
    }
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UBehaviorTreeComponent::StartLogic",0x22,Yes);
    pwVar3 = L"%s: Could not find BehaviorTree asset to run.";
  }
  else {
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UBehaviorTreeComponent::StartLogic",0x22,Yes);
    pwVar3 = L"%s: Skipping, logic already started.";
  }
  local_148 = local_138.Ptr;
  FVisualLogger::CategorizedLogfImpl
            ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,pwVar3);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// StartTree @ 146e9f770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::StartTree(UBehaviorTreeComponent *this,UBehaviorTree *param_1,Type param_2)

{
  undefined1 *puVar1;
  UBehaviorTree *pUVar2;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  pUVar2 = GetRootTree(this);
  if (((pUVar2 == param_1) && (this->bIsRunning != '\0')) && ((this->InstanceStack).ArrayNum != 0))
  {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Skipping behavior start request - it\'s already running");
      return;
    }
  }
  else {
    if ((pUVar2 != (UBehaviorTree *)0x0) && (FVisualLogger::bIsRecording != 0)) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_28);
      local_res10 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res10,&local_38);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Abandoning behavior %s to start new one (%s)");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    StopTree(this,Safe);
    (this->TreeStartInfo).bPendingInitialize = '\x01';
    (this->TreeStartInfo).Asset = param_1;
    (this->TreeStartInfo).ExecuteMode = param_2;
    ProcessPendingInitialize(this);
  }
  return;
}

// StaticRegisterNativesUBehaviorTreeComponent @ 146ea01f0

void __cdecl UBehaviorTreeComponent::StaticRegisterNativesUBehaviorTreeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UBehaviorTreeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopLogic @ 146ea0270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::StopLogic(UBehaviorTreeComponent *this,FString *param_1)

{
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"Stopping BT, reason: \'%s\'");
  }
  StopTree(this,Safe);
  return;
}

// StopTree @ 146ea0310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::StopTree(UBehaviorTreeComponent *this,Type param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement FVar3;
  ushort uVar4;
  FScriptContainerElement *pFVar5;
  UBTTaskNode *pUVar6;
  code *pcVar7;
  UBTCompositeNode *pUVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  UBTCompositeNode *pUVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  Type TVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_StopTree> FVar19;
  UBehaviorTree *pUVar20;
  UClass *pUVar21;
  UBTCompositeNode *pUVar22;
  UBTCompositeNode *pUVar23;
  uchar *puVar24;
  longlong lVar25;
  char *pcVar26;
  uint uVar27;
  ulonglong uVar28;
  FName FVar29;
  undefined2 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  wchar_t *pwVar34;
  FBehaviorTreeInstance *pFVar35;
  longlong lVar36;
  UBTNode *pUVar37;
  Type local_res18 [2];
  FBTNodeIndex local_res20 [2];
  UBTTaskNode *local_168;
  FBTNodeIndex local_158 [2];
  longlong local_150;
  FColor_u_0 local_148;
  uint local_144;
  int local_140 [2];
  FName local_138;
  FName local_130;
  FName local_128;
  FBTNodeExecutionInfo local_118;
  FString local_100;
  FName local_f0;
  FBehaviorTreeInstance *local_e8;
  UBehaviorTreeComponent *local_e0;
  code *local_d8;
  FBehaviorTreeInstance **local_d0;
  FBehaviorTreeInstance *local_c8;
  UBehaviorTreeComponent *local_c0;
  code *local_b8;
  FBehaviorTreeInstance **local_b0;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  FVar19 = StatPtr_STAT_AI_BehaviorTree_StopTree;
  if (StatPtr_STAT_AI_BehaviorTree_StopTree ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_StopTree>)0x0) {
    pFVar18 = ::FName::FName(&local_a8,"STAT_AI_BehaviorTree_StopTree");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_StopTree>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_StopTree,*pFVar18
                        ,L"BT Stop Tree Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
                        L"Behavior Tree",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar19;
  bVar10 = false;
  bVar9 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_146ea0480:
    bVar10 = bVar14;
    bVar9 = bVar13;
    bVar13 = false;
    local_130 = local_128;
    FVar29 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_138.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                   ,0x12f);
        bVar10 = true;
        bVar9 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146ea0480;
    local_130 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar13 = true;
  }
  if ((this->SuspendedBranchActions & StopTree) != None) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"Stop tree(%s) queued up");
    }
    piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
    uVar30 = 0x20;
    if (param_1 == Forced) {
      uVar30 = 0x40;
    }
    iVar15 = (this->PendingBranchActionRequests).ArrayNum;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
    }
    (this->PendingBranchActionRequests).ArrayNum = iVar15 + 1;
    lVar25 = (longlong)iVar15;
    pFVar5 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + lVar25 * 0x10) = 0;
    *(undefined4 *)(pFVar5 + lVar25 * 0x10 + 8) = 0;
    *(undefined2 *)(pFVar5 + lVar25 * 0x10 + 0xc) = uVar30;
    goto LAB_146ea16bd;
  }
  if (FVisualLogger::bIsRecording != 0) {
    pUVar20 = GetRootTree(this);
    if (pUVar20 == (UBehaviorTree *)0x0) {
      ::FString::FString(&local_100,L"None");
    }
    else {
      local_f0 = (FName)pUVar20->_padding_;
      ::FName::ToString(&local_f0,&local_100);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
               L"StopTree %s, mode:%s");
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  SuspendBranchActions(this,All);
  if (this->bRequestedStop == '\0') {
    this->field_0x28a = this->field_0x28a | 8;
    iVar15 = (this->InstanceStack).ArrayNum + -1;
    if (-1 < iVar15) {
      uVar28 = (ulonglong)iVar15;
      lVar25 = uVar28 * 0x68;
      do {
        uVar27 = (uint)uVar28;
        uVar33 = 0;
        if ((int)uVar27 < (this->InstanceStack).ArrayNum) {
          uVar33 = ~uVar27 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_d0 = &local_e8;
        pFVar35 = (FBehaviorTreeInstance *)((this->InstanceStack).AllocatorInstance.Data + lVar25);
        local_d8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UBehaviorTreeComponent::StopTree'::__l15::<lambda_1>,void,UBTAuxiliaryNode_const_&>
                   ::Call;
        local_e8 = pFVar35;
        local_e0 = this;
        FBehaviorTreeInstance::ExecuteOnEachAuxNode
                  (pFVar35,(TFunctionRef<void___cdecl(UBTAuxiliaryNode_const_&)> *)&local_d8);
        FBehaviorTreeInstance::ResetActiveAuxNodes(pFVar35);
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UBehaviorTreeComponent::StopTree'::__l14::<lambda_2>,void,FBehaviorTreeParallelTask_const_&,int>
                   ::Call;
        local_c8 = pFVar35;
        local_c0 = this;
        local_b0 = &local_c8;
        FBehaviorTreeInstance::ExecuteOnEachParallelTask
                  (pFVar35,(TFunctionRef<void___cdecl(FBehaviorTreeParallelTask_const_&,int)> *)
                           &local_b8);
        if ((pFVar35->ActiveNodeType).Value == '\x01') {
          if ((pFVar35->ActiveNode).field0_0x0.DebugPtr == (UBTNode *)0x0) {
LAB_146ea09e7:
            local_168 = (UBTTaskNode *)0x0;
LAB_146ea09ee:
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskNode != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                                ,0x180,L"");
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          else {
            pUVar21 = Z_Construct_UClass_UBTTaskNode_NoRegister();
            bVar14 = FObjectPtr::IsA((FObjectPtr *)&pFVar35->ActiveNode,pUVar21);
            if (!bVar14) goto LAB_146ea09e7;
            local_168 = (UBTTaskNode *)(pFVar35->ActiveNode).field0_0x0.DebugPtr;
            if (local_168 == (UBTTaskNode *)0x0) goto LAB_146ea09ee;
            iVar15 = (this->InstanceStack).ArrayNum;
            if (iVar15 != 0) {
              uVar33 = 0;
              if ((int)(iVar15 - 1U) < iVar15) {
                uVar33 = ~(iVar15 - 1U) >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_res20[0].ExecutionIndex = *(ushort *)&local_168->_padding_;
              uVar33 = 0xffffffff;
              pUVar22 = (UBTCompositeNode *)FindTemplateNode(this,(UBTNode *)local_168);
              if ((pUVar22 != (UBTCompositeNode *)0x0) &&
                 (iVar15 = (this->InstanceStack).ArrayNum, iVar15 != 0)) {
                uVar4 = this->ActiveInstanceIdx;
                if ((iVar15 <= (int)(uint)uVar4) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pUVar37 = *(UBTNode **)
                           ((this->InstanceStack).AllocatorInstance.Data +
                           (ulonglong)uVar4 * 0x68 + 8);
                if ((pUVar37 == (UBTNode *)0x0) || ((UBTCompositeNode *)pUVar37 != pUVar22)) {
                  pUVar23 = (((TObjectPtr<UBTCompositeNode> *)&pUVar22->_padding_)->field0_0x0).
                            DebugPtr;
                  while (pUVar12 = pUVar23, pUVar12 != (UBTCompositeNode *)0x0) {
                    pUVar22 = pUVar12;
                    pUVar23 = (UBTCompositeNode *)pUVar12->_padding_;
                  }
                  uVar31 = 0;
                  if (0 < (this->InstanceStack).ArrayNum) {
                    lVar36 = 0;
                    do {
                      uVar32 = 0;
                      if ((int)uVar31 < (this->InstanceStack).ArrayNum) {
                        uVar32 = ~uVar31 >> 0x1f;
                      }
                      if ((uVar32 == 0) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar14)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pUVar23 = *(UBTCompositeNode **)
                                 ((this->InstanceStack).AllocatorInstance.Data + lVar36);
                      if (pUVar23 == (UBTCompositeNode *)0x0) {
                        bVar14 = pUVar22 == (UBTCompositeNode *)0x0;
                      }
                      else {
                        bVar14 = pUVar23 == pUVar22;
                      }
                      if (bVar14) goto LAB_146ea08f8;
                      uVar31 = uVar31 + 1;
                      lVar36 = lVar36 + 0x68;
                    } while ((int)uVar31 < (this->InstanceStack).ArrayNum);
                  }
                }
                else {
                  uVar31 = (uint)this->ActiveInstanceIdx;
LAB_146ea08f8:
                  uVar33 = uVar31;
                  if (uVar31 == 0xffff) {
                    pwVar34 = L"Index has used the InvalidIndex value!";
                    iVar15 = 0xa35;
                    pcVar26 = "InstanceContainingNodeIdx != FBTNodeIndex::InvalidIndex";
                  }
                  else {
                    if ((int)uVar31 < 0x10000) goto LAB_146ea0940;
                    pwVar34 = L"Narrowing conversion causing loss of data";
                    iVar15 = 0xa36;
                    pcVar26 = "InstanceContainingNodeIdx <= ((uint16) 0xffff)";
                  }
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     (pcVar26,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                                      ,iVar15,pwVar34);
                  if (bVar14) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
              }
LAB_146ea0940:
              local_res20[0].InstanceIndex = (ushort)uVar33;
              if (((*(int *)&(this->TaskMessageObservers).field_0x8 !=
                    *(int *)&(this->TaskMessageObservers).field_0x34) &&
                  (iVar15 = TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                            ::RemoveImpl<FBTNodeIndex>
                                      ((TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                                        *)&this->TaskMessageObservers,
                                       (uint)local_res20[0].ExecutionIndex ^ uVar33 & 0xffff,
                                       local_res20), iVar15 != 0)) &&
                 (FVisualLogger::bIsRecording != 0)) {
                FVisualLogger::CategorizedLogfImpl
                          ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                           L"Message observers removed for task[%d:%d] (num:%d)");
              }
            }
          }
          (pFVar35->ActiveNodeType).Value = '\x02';
          if (FVisualLogger::bIsRecording != 0) {
            UBehaviorTreeTypes::DescribeNodeHelper(&local_a0,(UBTNode *)local_168);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                       L"Abort task: %s");
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
          }
          pFVar5 = (pFVar35->InstanceMemory).AllocatorInstance.Data;
          if (((pFVar35->InstanceMemory).ArrayNum < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TVar16 = UBTTaskNode::WrappedAbortTask
                             (local_168,this,
                              (uchar *)(pFVar5 + *(ushort *)((longlong)&local_168->_padding_ + 2)));
          if ((((pFVar35->ActiveNodeType).Value == '\x02') &&
              (local_res18[0] = TVar16, (this->InstanceStack).ArrayNum != 0)) &&
             (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
            if (FVisualLogger::bIsRecording != 0) {
              UBehaviorTreeTypes::DescribeNodeResult(&local_80,TVar16);
              UBehaviorTreeTypes::DescribeNodeHelper(&local_90,(UBTNode *)local_168);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                         L"Task %s finished: %s");
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
            }
            pUVar22 = (UBTCompositeNode *)local_168->_padding_;
            pUVar23 = (UBTCompositeNode *)FindTemplateNode(this,(UBTNode *)local_168);
            if ((pUVar23 != (UBTCompositeNode *)0x0) &&
               (iVar15 = (this->InstanceStack).ArrayNum, iVar15 != 0)) {
              uVar4 = this->ActiveInstanceIdx;
              if ((iVar15 <= (int)(uint)uVar4) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pUVar37 = *(UBTNode **)
                         ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)uVar4 * 0x68 + 8
                         );
              if ((pUVar37 == (UBTNode *)0x0) || ((UBTCompositeNode *)pUVar37 != pUVar23)) {
                pUVar12 = (((UBTNode *)pUVar23)->ParentNode).field0_0x0.DebugPtr;
                while (pUVar8 = pUVar12, pUVar8 != (UBTCompositeNode *)0x0) {
                  pUVar23 = pUVar8;
                  pUVar12 = (((TObjectPtr<UBTCompositeNode> *)&pUVar8->_padding_)->field0_0x0).
                            DebugPtr;
                }
                uVar33 = 0;
                if (0 < (this->InstanceStack).ArrayNum) {
                  lVar36 = 0;
                  do {
                    uVar31 = 0;
                    if ((int)uVar33 < (this->InstanceStack).ArrayNum) {
                      uVar31 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar31 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pUVar37 = *(UBTNode **)((this->InstanceStack).AllocatorInstance.Data + lVar36);
                    if (pUVar37 == (UBTNode *)0x0) {
                      bVar14 = pUVar23 == (UBTCompositeNode *)0x0;
                    }
                    else {
                      bVar14 = (UBTCompositeNode *)pUVar37 == pUVar23;
                    }
                    if (bVar14) goto LAB_146ea0be6;
                    uVar33 = uVar33 + 1;
                    lVar36 = lVar36 + 0x68;
                  } while ((int)uVar33 < (this->InstanceStack).ArrayNum);
                }
              }
              else {
                uVar33 = (uint)this->ActiveInstanceIdx;
LAB_146ea0be6:
                if ((-1 < (int)uVar33) && ((int)uVar33 < (this->InstanceStack).ArrayNum)) {
                  local_144 = ~uVar33 >> 0x1f;
                  uVar31 = 0;
                  if ((int)uVar33 < (this->InstanceStack).ArrayNum) {
                    uVar31 = local_144;
                  }
                  if ((uVar31 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar36 = (longlong)(int)uVar33 * 0x68;
                  local_150 = lVar36;
                  puVar24 = UBTNode::GetNodeMemory<unsigned_char>
                                      ((UBTNode *)pUVar22,
                                       (FBehaviorTreeInstance *)
                                       ((this->InstanceStack).AllocatorInstance.Data + lVar36));
                  UBTCompositeNode::ConditionalNotifyChildExecution
                            (pUVar22,this,puVar24,(UBTNode *)local_168,local_res18);
                  if (local_res18[0] != InProgress) {
                    IntCastChecked<unsigned_short,int>(uVar33);
                    iVar15 = (this->InstanceStack).ArrayNum;
                    if (iVar15 != 0) {
                      uVar31 = 0;
                      if ((int)(iVar15 - 1U) < iVar15) {
                        uVar31 = ~(iVar15 - 1U) >> 0x1f;
                      }
                      if ((uVar31 == 0) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar14)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      local_158[0].ExecutionIndex = (ushort)local_168->_padding_;
                      uVar31 = 0xffffffff;
                      pUVar22 = (UBTCompositeNode *)FindTemplateNode(this,(UBTNode *)local_168);
                      if ((pUVar22 != (UBTCompositeNode *)0x0) &&
                         (iVar15 = (this->InstanceStack).ArrayNum, iVar15 != 0)) {
                        uVar4 = this->ActiveInstanceIdx;
                        if ((iVar15 <= (int)(uint)uVar4) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pUVar37 = *(UBTNode **)
                                   ((this->InstanceStack).AllocatorInstance.Data +
                                   (ulonglong)uVar4 * 0x68 + 8);
                        if ((pUVar37 == (UBTNode *)0x0) || ((UBTCompositeNode *)pUVar37 != pUVar22))
                        {
                          pUVar23 = (((UBTNode *)pUVar22)->ParentNode).field0_0x0.DebugPtr;
                          while (pUVar12 = pUVar23, pUVar12 != (UBTCompositeNode *)0x0) {
                            pUVar22 = pUVar12;
                            pUVar23 = (((TObjectPtr<UBTCompositeNode> *)&pUVar12->_padding_)->
                                      field0_0x0).DebugPtr;
                          }
                          uVar32 = 0;
                          if (0 < (this->InstanceStack).ArrayNum) {
                            lVar36 = 0;
                            do {
                              uVar17 = 0;
                              if ((int)uVar32 < (this->InstanceStack).ArrayNum) {
                                uVar17 = ~uVar32 >> 0x1f;
                              }
                              if ((uVar17 == 0) &&
                                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar14)) {
                                pcVar7 = (code *)swi(3);
                                (*pcVar7)();
                                return;
                              }
                              pUVar37 = *(UBTNode **)
                                         ((this->InstanceStack).AllocatorInstance.Data + lVar36);
                              if (pUVar37 == (UBTNode *)0x0) {
                                bVar14 = pUVar22 == (UBTCompositeNode *)0x0;
                              }
                              else {
                                bVar14 = (UBTCompositeNode *)pUVar37 == pUVar22;
                              }
                              if (bVar14) goto LAB_146ea0efe;
                              uVar32 = uVar32 + 1;
                              lVar36 = lVar36 + 0x68;
                            } while ((int)uVar32 < (this->InstanceStack).ArrayNum);
                          }
                        }
                        else {
                          uVar32 = (uint)this->ActiveInstanceIdx;
LAB_146ea0efe:
                          uVar31 = uVar32;
                          if (uVar31 == 0xffff) {
                            pwVar34 = L"Index has used the InvalidIndex value!";
                            iVar15 = 0xa35;
                            pcVar26 = "InstanceContainingNodeIdx != FBTNodeIndex::InvalidIndex";
                          }
                          else {
                            if ((int)uVar31 < 0x10000) goto LAB_146ea0f46;
                            pwVar34 = L"Narrowing conversion causing loss of data";
                            iVar15 = 0xa36;
                            pcVar26 = "InstanceContainingNodeIdx <= ((uint16) 0xffff)";
                          }
                          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             (pcVar26,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                                              ,iVar15,pwVar34);
                          if (bVar14) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                        }
                      }
LAB_146ea0f46:
                      local_158[0].InstanceIndex = (ushort)uVar31;
                      lVar36 = local_150;
                      if (((*(int *)&(this->TaskMessageObservers).field_0x8 !=
                            *(int *)&(this->TaskMessageObservers).field_0x34) &&
                          (iVar15 = TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                                    ::RemoveImpl<FBTNodeIndex>
                                              ((TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                                                *)&this->TaskMessageObservers,
                                               (uint)local_158[0].ExecutionIndex ^ uVar31 & 0xffff,
                                               local_158), lVar36 = local_150, iVar15 != 0)) &&
                         (FVisualLogger::bIsRecording != 0)) {
                        FVisualLogger::CategorizedLogfImpl
                                  ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                                   Log,L"Message observers removed for task[%d:%d] (num:%d)");
                        lVar36 = local_150;
                      }
                    }
                    uVar31 = 0;
                    if ((int)uVar33 < (this->InstanceStack).ArrayNum) {
                      uVar31 = local_144;
                    }
                    if ((uVar31 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    puVar24 = UBTNode::GetNodeMemory<unsigned_char>
                                        ((UBTNode *)local_168,
                                         (FBehaviorTreeInstance *)
                                         ((this->InstanceStack).AllocatorInstance.Data + lVar36));
                    UBTTaskNode::WrappedOnTaskFinished(local_168,this,puVar24,local_res18[0]);
                    uVar4 = this->ActiveInstanceIdx;
                    if ((int)(uint)uVar4 < (this->InstanceStack).ArrayNum) {
                      if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar4) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar14)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pUVar6 = *(UBTTaskNode **)
                                ((this->InstanceStack).AllocatorInstance.Data +
                                (ulonglong)uVar4 * 0x68 + 8);
                      if (pUVar6 == (UBTTaskNode *)0x0) {
                        bVar14 = local_168 == (UBTTaskNode *)0x0;
                      }
                      else {
                        bVar14 = pUVar6 == local_168;
                      }
                      if (bVar14) {
                        uVar4 = this->ActiveInstanceIdx;
                        if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar4) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        TVar16 = local_res18[0];
                        pFVar5 = (this->InstanceStack).AllocatorInstance.Data;
                        lVar36 = (ulonglong)uVar4 * 0x68;
                        FVar3 = pFVar5[lVar36 + 0x41];
                        pFVar5[lVar36 + 0x41] = (FScriptContainerElement)0x3;
                        if (FVar3 == (FScriptContainerElement)0x2) {
                          if ((((this->PendingExecution).NextTask.field0_0x0.DebugPtr !=
                                (UBTTaskNode *)0x0) || ((this->PendingExecution).bOutOfNodes != 0))
                             && ((this->PendingExecution).bLocked == 0)) {
                            ScheduleExecutionUpdate(this);
                          }
                        }
                        else if ((local_res18[0] != Aborted) && (local_res18[0] != InProgress)) {
                          if ((this->SuspendedBranchActions & ActiveNodeEvaluate) == None) {
                            EvaluateBranch(this,local_res18[0]);
                          }
                          else {
                            iVar15 = (this->InstanceStack).ArrayNum;
                            if (iVar15 == 0) {
                              pUVar37 = (UBTNode *)0x0;
                            }
                            else {
                              uVar4 = this->ActiveInstanceIdx;
                              if ((iVar15 <= (int)(uint)uVar4) &&
                                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar14)) {
                                pcVar7 = (code *)swi(3);
                                (*pcVar7)();
                                return;
                              }
                              pUVar37 = *(UBTNode **)
                                         ((this->InstanceStack).AllocatorInstance.Data +
                                         (ulonglong)uVar4 * 0x68 + 8);
                              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                 (pUVar37 != (UBTNode *)0x0)) {
                                UE::GC::MarkAsReachable((UObject *)pUVar37);
                              }
                            }
                            if (FVisualLogger::bIsRecording != 0) {
                              UEnum::GetValueAsString<enum_EBTNodeResult::Type>(local_60,TVar16);
                              UBehaviorTreeTypes::DescribeNodeHelper(&local_70,pUVar37);
                              FVisualLogger::CategorizedLogfImpl
                                        ((UObject *)this->_padding_,
                                         (FName *)&LogBehaviorTree.field_0x4,Verbose,
                                         L"Request evaluation queued up for node(%s) with result(%s)"
                                        );
                              if (local_70.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_70.Data.AllocatorInstance.Data);
                              }
                              if (local_60[0].Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                              }
                            }
                            iVar15 = (this->PendingBranchActionRequests).ArrayNum;
                            piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
                            if (iVar15 == *piVar1) {
                              iVar15 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x810,&(this->PendingBranchActionRequests).
                                                         AllocatorInstance,piVar1);
                            }
                            pFVar5 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
                            (this->PendingBranchActionRequests).ArrayNum = iVar15 + 1;
                            lVar36 = (longlong)iVar15;
                            *(UBTNode **)(pFVar5 + lVar36 * 0x10) = pUVar37;
                            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                               (pUVar37 != (UBTNode *)0x0)) {
                              UE::GC::MarkAsReachable((UObject *)pUVar37);
                            }
                            *(Type *)(pFVar5 + lVar36 * 0x10 + 8) = TVar16;
                            *(undefined2 *)(pFVar5 + lVar36 * 0x10 + 0xc) = 0x80;
                          }
                        }
                        goto LAB_146ea13bf;
                      }
                    }
                    if ((local_res18[0] == Aborted) &&
                       ((int)uVar33 < (this->InstanceStack).ArrayNum)) {
                      uVar31 = 0;
                      if ((int)uVar33 < (this->InstanceStack).ArrayNum) {
                        uVar31 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar31 == 0) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar14)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pUVar6 = *(UBTTaskNode **)
                                ((this->InstanceStack).AllocatorInstance.Data +
                                (longlong)(int)uVar33 * 0x68 + 8);
                      if (pUVar6 == (UBTTaskNode *)0x0) {
                        bVar14 = local_168 == (UBTTaskNode *)0x0;
                      }
                      else {
                        bVar14 = pUVar6 == local_168;
                      }
                      if (bVar14) {
                        uVar31 = 0;
                        if ((int)uVar33 < (this->InstanceStack).ArrayNum) {
                          uVar31 = ~uVar33 >> 0x1f;
                        }
                        if ((uVar31 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        (this->InstanceStack).AllocatorInstance.Data
                        [(longlong)(int)uVar33 * 0x68 + 0x41] = (FScriptContainerElement)0x3;
                      }
                    }
                  }
LAB_146ea13bf:
                  if (this->bWaitingForLatentAborts == '\0') {
                    bVar14 = HasActiveLatentAborts(this);
                    this->bWaitingForLatentAborts = bVar14;
                  }
                  if (((this->TreeStartInfo).bPendingInitialize != 0) &&
                     ((this->TreeStartInfo).Asset != (UBehaviorTree *)0x0)) {
                    ProcessPendingInitialize(this);
                  }
                }
              }
            }
          }
        }
        uVar28 = (ulonglong)(uVar27 - 1);
        lVar25 = lVar25 + -0x68;
        FVar29 = local_130;
      } while (-1 < (int)(uVar27 - 1));
    }
  }
  uVar33 = 0;
  if (this->bWaitingForLatentAborts == '\0') {
LAB_146ea14a2:
    iVar15 = (this->InstanceStack).ArrayNum;
    if (iVar15 != 0) {
      local_140[0] = -1;
      local_140[1] = 2;
      if ((iVar15 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      DeactivateUpTo(this,*(UBTCompositeNode **)(this->InstanceStack).AllocatorInstance.Data,0,
                     (Type *)(local_140 + 1),local_140);
    }
    piVar1 = &(this->InstanceStack).ArrayNum;
    iVar15 = *piVar1;
    if (0 < iVar15) {
      do {
        uVar27 = 0;
        if ((int)uVar33 < iVar15) {
          uVar27 = ~uVar33 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar27 = 0;
        if ((int)uVar33 < (this->InstanceStack).ArrayNum) {
          uVar27 = ~uVar33 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FBehaviorTreeInstance::Cleanup
                  ((FBehaviorTreeInstance *)
                   ((this->InstanceStack).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x68),
                   this,Destroy);
        iVar15 = *piVar1;
        uVar33 = uVar33 + 1;
      } while ((int)uVar33 < iVar15);
    }
    piVar1 = &(this->InstanceStack).ArrayMax;
    pFVar35 = (FBehaviorTreeInstance *)(this->InstanceStack).AllocatorInstance.Data;
    iVar15 = (this->InstanceStack).ArrayNum;
    if ((this->InstanceStack).ArrayMax < 0) {
      DestructItems<FBehaviorTreeInstance,int>(pFVar35,iVar15);
      (this->InstanceStack).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,&(this->InstanceStack).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FBehaviorTreeInstance,int>(pFVar35,iVar15);
      (this->InstanceStack).ArrayNum = 0;
    }
    TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
             *)&this->TaskMessageObservers);
    FBehaviorTreeSearchData::Reset(&this->SearchData);
    local_118.bIsRestart = '\0';
    local_118.bTryNextChild = '\0';
    local_118.SearchStart.InstanceIndex = 0xffff;
    local_118.SearchStart.ExecutionIndex = 0xffff;
    local_118.SearchEnd.InstanceIndex = 0xffff;
    local_118.SearchEnd.ExecutionIndex = 0xffff;
    local_118.ExecuteNode.field0_0x0.DebugPtr = (TObjectPtr<UBTCompositeNode_const_>_u_0)0x0;
    FBTNodeExecutionInfo::operator=(&this->ExecutionRequest,&local_118);
    fVar11 = __real_7f7fffff;
    (this->PendingExecution).NextTask.field0_0x0.DebugPtr = (UBTTaskNode *)0x0;
    (this->PendingExecution).bOutOfNodes = 0;
    (this->PendingExecution).bLocked = 0;
    this->bWaitingForLatentAborts = '\0';
    this->bIsRunning = '\0';
    this->bRequestedStop = '\0';
    this->bRequestedFlowUpdate = '\0';
    this->ActiveInstanceIdx = 0;
    ScheduleNextTick(this,fVar11);
  }
  else {
    if (param_1 == Forced) {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Warning,
                   L"StopTree was forced while waiting for tasks to finish aborting!");
      }
      goto LAB_146ea14a2;
    }
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"StopTree is waiting for aborting tasks to finish...");
    }
  }
  ResumeBranchActions(this);
LAB_146ea16bd:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  return;
}

// StoreDebuggerBlackboard @ 146ea1730

void __thiscall
UBehaviorTreeComponent::StoreDebuggerBlackboard
          (UBehaviorTreeComponent *this,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_1)

{
  return;
}

// StoreDebuggerExecutionStep @ 146ea1740

void __thiscall
UBehaviorTreeComponent::StoreDebuggerExecutionStep(UBehaviorTreeComponent *this,Type param_1)

{
  return;
}

// StoreDebuggerInstance @ 146ea1750

void __thiscall
UBehaviorTreeComponent::StoreDebuggerInstance
          (UBehaviorTreeComponent *this,FBehaviorTreeDebuggerInstance *param_1,ushort param_2,
          Type param_3)

{
  return;
}

// StoreDebuggerRemovedInstance @ 146ea1760

void __thiscall
UBehaviorTreeComponent::StoreDebuggerRemovedInstance(UBehaviorTreeComponent *this,ushort param_1)

{
  return;
}

// StoreDebuggerRestart @ 146ea1770

void __thiscall
UBehaviorTreeComponent::StoreDebuggerRestart
          (UBehaviorTreeComponent *this,UBTNode *param_1,ushort param_2,bool param_3)

{
  return;
}

// StoreDebuggerRuntimeValues @ 146ea1780

void __thiscall
UBehaviorTreeComponent::StoreDebuggerRuntimeValues
          (UBehaviorTreeComponent *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UBTNode *param_2,ushort param_3)

{
  return;
}

// StoreDebuggerSearchStep @ 146ea1790

void __thiscall
UBehaviorTreeComponent::StoreDebuggerSearchStep
          (UBehaviorTreeComponent *this,UBTNode *param_1,ushort param_2,Type param_3)

{
  return;
}

// StoreDebuggerSearchStep @ 146ea17a0

void __thiscall
UBehaviorTreeComponent::StoreDebuggerSearchStep
          (UBehaviorTreeComponent *this,UBTNode *param_1,ushort param_2,bool param_3)

{
  return;
}

// SuspendBranchActions @ 146ea1930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::SuspendBranchActions(UBehaviorTreeComponent *this,EBTBranchAction param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,All,
               L"Suspending branch actions.");
  }
  if (this->SuspendedBranchActions != None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SuspendedBranchActions == EBTBranchAction::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                       ,0x313,L"This logic does not support re-entrance");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SuspendedBranchActions = param_1;
  return;
}

// TickComponent @ 146ea1a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::TickComponent
          (UBehaviorTreeComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  UBTTaskNode *pUVar7;
  longlong lVar8;
  UBTAuxiliaryNode *this_00;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UWorld *pUVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AI_Overall> FVar15;
  FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_Tick> FVar16;
  FString *pFVar17;
  size_t sVar18;
  longlong lVar19;
  FName FVar20;
  byte bVar21;
  ulonglong uVar22;
  char *pcVar23;
  ulonglong uVar24;
  FName FVar25;
  uint uVar26;
  uint uVar27;
  undefined8 *puVar28;
  wchar_t *_Str;
  float fVar29;
  undefined1 auStackY_348 [32];
  byte local_2e8;
  byte local_2e7;
  byte local_2e6;
  char local_2e5;
  float local_2e4;
  undefined1 local_2e0;
  undefined1 local_2df;
  char local_2de;
  undefined8 *local_2d8;
  FName local_2d0;
  FName local_2c8;
  undefined4 local_2c0;
  FColor_u_0 local_2bc;
  FColor_u_0 local_2b8 [2];
  FName local_2b0;
  byte local_2a8;
  FName local_2a0;
  byte local_298;
  FString local_290;
  FName local_280;
  FName local_278;
  char *local_270;
  FName local_268;
  FName local_258;
  FString *local_248;
  code *local_240;
  FBehaviorTreeInstance **local_238;
  code *local_230;
  FBehaviorTreeInstance **local_228;
  FBehaviorTreeInstance *local_220;
  UBehaviorTreeComponent *local_218;
  byte *local_210;
  float local_208;
  float *local_200;
  FBehaviorTreeInstance *local_1f8;
  byte *local_1f0;
  UBehaviorTreeComponent *local_1e8;
  float local_1e0;
  float *local_1d8;
  FName local_1d0;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_348;
  if ((this->bIsRunning == '\0') && (__real_7f7fffff == this->NextTickDeltaTime)) {
    local_2e0 = 0;
    `UBehaviorTreeComponent::TickComponent'::__l2::<lambda_1>::operator()(&local_2e0);
  }
  pUVar13 = (UWorld *)this->_padding_;
  if (pUVar13 == (UWorld *)0x0) {
    pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((param_3 == (FActorComponentTickFunction *)0x0) || (pUVar13 == (UWorld *)0x0)) {
    bVar10 = false;
    fVar29 = param_1;
  }
  else {
    bVar10 = true;
    fVar29 = pUVar13->DeltaTimeSeconds;
  }
  this->CurrentFrameDeltaTime = fVar29;
  if ((((this->bTickedOnce != false) && (this->NextTickDeltaTime == 0.0)) && (bVar10)) &&
     ((__real_3f1a36e2e0000000 <
       (pUVar13->TimeSeconds - this->LastRequestedDeltaTimeGameTime) - (double)fVar29 &&
      (FVisualLogger::bIsRecording != 0)))) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,
               L"BT(%llu) expected to be tick next frame, current deltatime(%f) and calculated deltatime(%f)."
              );
  }
  fVar29 = this->NextTickDeltaTime - param_1;
  this->NextTickDeltaTime = fVar29;
  if (0.0 < fVar29) {
    if (((param_3 != (FActorComponentTickFunction *)0x0) && (__real_38d1b717 < fVar29)) &&
       (FVisualLogger::bIsRecording != 0)) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,
                 L"BT(%i) did not need to be tick, ask deltatime of %fs got %fs with a diff of %fs."
                );
    }
    this->AccumulatedTickDeltaTime = param_1 + this->AccumulatedTickDeltaTime;
    ScheduleNextTick(this,this->NextTickDeltaTime);
    return;
  }
  fVar29 = param_1 + this->AccumulatedTickDeltaTime;
  local_2de = this->bTickedOnce;
  local_2e8 = 0 < (int)this->_padding_;
  this->AccumulatedTickDeltaTime = fVar29;
  this->bTickedOnce = true;
  UBrainComponent::TickComponent((UBrainComponent *)this,fVar29,param_2,param_3);
  uVar27 = 0;
  FVar15 = StatPtr_STAT_AI_Overall;
  if (StatPtr_STAT_AI_Overall == (FThreadSafeStaticStat<FStat_STAT_AI_Overall>)0x0) {
    pFVar14 = ::FName::FName(&local_1d0,"STAT_AI_Overall");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_AI_Overall>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Overall,*pFVar14,
                        L"Overall AI Time","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar15;
  bVar21 = 0;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  local_2e6 = 0;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2bc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2bc._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar21 = 1;
      local_2e6 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_280.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_280.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_280,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                   ,0x6d3);
        bVar21 = 3;
        local_2e6 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2c8 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      local_2e6 = bVar21 | 4;
      goto LAB_146ea1da0;
    }
  }
  local_2c8 = local_268;
  FVar25 = local_268;
LAB_146ea1da0:
  FVar16 = StatPtr_STAT_AI_BehaviorTree_Tick;
  if (StatPtr_STAT_AI_BehaviorTree_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_Tick>)0x0) {
    pFVar14 = ::FName::FName(&local_1c8,"STAT_AI_BehaviorTree_Tick");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_Tick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_Tick,*pFVar14,
                        L"BT Tick","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar16;
  bVar21 = 0;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  local_2e7 = 0;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar20 = local_258, FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar21 = 1;
      local_2e7 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_278.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_278.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_278,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                   ,0x6d4);
        bVar21 = 3;
        local_2e7 = 3;
      }
    }
    FVar20 = local_258;
    if (FThreadStats::bPrimaryEnable != false) {
      local_2d0 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_2e7 = bVar21 | 4;
      FVar20 = FVar5;
    }
  }
  pcVar23 = this->CSVTickStatName;
  local_270 = pcVar23;
  FCsvProfiler::BeginExclusiveStat(pcVar23,(char *)0x0);
  if ((((uint)this->_padding_ >> 0x1e & 1) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidChecked(this)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                          ,0x6da,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2e4 = 3.4028235e+38;
  if (((this->PendingBranchActionRequests).ArrayNum != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PendingBranchActionRequests.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                          ,0x6dd,
                          L"Pending branches action requests should always be flushed immediately with the new system"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  SuspendBranchActions(this,Changing_Topology_Actions);
  uVar26 = uVar27;
  if (0 < (this->InstanceStack).ArrayNum) {
    do {
      uVar11 = 0;
      if ((int)uVar26 < (this->InstanceStack).ArrayNum) {
        uVar11 = ~uVar26 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_210 = &local_2e8;
      local_220 = (FBehaviorTreeInstance *)
                  ((this->InstanceStack).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x68);
      local_200 = &local_2e4;
      local_238 = &local_220;
      local_240 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UBehaviorTreeComponent::TickComponent'::__l37::<lambda_3>,void,UBTAuxiliaryNode_const_&>
                  ::Call;
      local_218 = this;
      local_208 = fVar29;
      FBehaviorTreeInstance::ExecuteOnEachAuxNode
                (local_220,(TFunctionRef<void___cdecl(UBTAuxiliaryNode_const_&)> *)&local_240);
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < (this->InstanceStack).ArrayNum);
  }
  ResumeBranchActions(this);
  if (this->bWaitingForLatentAborts != '\0') {
    bVar10 = HasActiveLatentAborts(this);
    uVar3 = this->field_0x28a;
    this->bWaitingForLatentAborts = bVar10;
    if ((~((byte)(uVar3 & 0xfd | bVar10 * '\x02') >> 1) & 1) != 0) {
      if (this->bRequestedStop == '\0') {
        if ((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr != (UBTCompositeNode *)0x0) {
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                       L"> found valid ExecutionRequest, locking PendingExecution data to force new search!"
                      );
          }
          (this->PendingExecution).bLocked = 1;
          if ((this->ExecutionRequest).SearchEnd.InstanceIndex != 0xffff) {
            if (FVisualLogger::bIsRecording != 0) {
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                         L"> removing limit from end of search range! [abort done]");
            }
            local_2c0 = 0xffffffff;
            (this->ExecutionRequest).SearchEnd.InstanceIndex = 0xffff;
            (this->ExecutionRequest).SearchEnd.ExecutionIndex = 0xffff;
          }
        }
        ScheduleNextTick(this,0.0);
        if (((UE::BehaviorTree::bEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest != false
             ) && ((((this->PendingExecution).NextTask.field0_0x0.DebugPtr == (UBTTaskNode *)0x0 &&
                    ((this->PendingExecution).bOutOfNodes == 0)) ||
                   ((this->PendingExecution).bLocked != 0)))) &&
           ((this->ExecutionRequest).ExecuteNode.field0_0x0.DebugPtr == (UBTCompositeNode *)0x0)) {
          local_2df = 0;
          `UBehaviorTreeComponent::ScheduleExecutionUpdate'::__l2::<lambda_1>::operator()
                    (&local_2df);
        }
        this->bRequestedFlowUpdate = '\x01';
      }
      else {
        StopTree(this,Safe);
      }
    }
  }
  bVar10 = this->bRequestedFlowUpdate != '\0';
  local_2e5 = 0;
  if (bVar10) {
    ProcessExecutionRequest(this);
    local_2e8 = 1;
    local_2e4 = 3.4028235e+38;
  }
  local_2e5 = bVar10;
  if ((0 < (this->InstanceStack).ArrayNum) &&
     (this->bIsRunning == '\x01' && this->bIsPaused == '\0')) {
    SuspendBranchActions(this,Changing_Topology_Actions);
    iVar12 = (this->InstanceStack).ArrayNum;
    if (0 < iVar12) {
      do {
        uVar26 = 0;
        if ((int)uVar27 < (this->InstanceStack).ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_1f0 = &local_2e8;
        local_1f8 = (FBehaviorTreeInstance *)
                    ((this->InstanceStack).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x68);
        local_1d8 = &local_2e4;
        local_228 = &local_1f8;
        local_230 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UBehaviorTreeComponent::TickComponent'::__l63::<lambda_4>,void,FBehaviorTreeParallelTask_const_&,int>
                    ::Call;
        local_1e8 = this;
        local_1e0 = fVar29;
        FBehaviorTreeInstance::ExecuteOnEachParallelTask
                  (local_1f8,
                   (TFunctionRef<void___cdecl(FBehaviorTreeParallelTask_const_&,int)> *)&local_230);
        iVar12 = (this->InstanceStack).ArrayNum;
        uVar27 = uVar27 + 1;
      } while ((int)uVar27 < iVar12);
    }
    uVar4 = this->ActiveInstanceIdx;
    if ((int)(uint)uVar4 < iVar12) {
      if (((this->InstanceStack).ArrayNum <= (int)(uint)uVar4) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this->InstanceStack).AllocatorInstance.Data;
      lVar19 = (ulonglong)uVar4 * 0x68;
      if ((pFVar6[lVar19 + 0x41] == (FScriptContainerElement)0x1) ||
         (pFVar6[lVar19 + 0x41] == (FScriptContainerElement)0x2)) {
        pUVar7 = *(UBTTaskNode **)(pFVar6 + lVar19 + 8);
        lVar8 = *(longlong *)(pFVar6 + lVar19 + 0x30);
        if ((*(int *)(pFVar6 + lVar19 + 0x38) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar4 = *(ushort *)((longlong)&pUVar7->_padding_ + 2);
        FScopeCycleCounterUObject::FScopeCycleCounterUObject
                  ((FScopeCycleCounterUObject *)&local_2b0,(UObjectBaseUtility *)pUVar7);
        bVar21 = local_2e8;
        bVar10 = UBTTaskNode::WrappedTickTask
                           (pUVar7,this,(uchar *)(lVar8 + (ulonglong)uVar4),fVar29,&local_2e4);
        local_2e8 = bVar10 | bVar21;
        if ((local_2a8 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_2a8 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_2a8 & 4) != 0) {
          FThreadStats::AddMessage(local_2b0,CycleScopeEnd);
        }
        local_2a8 = 0;
      }
    }
    if ((int)(this->ActiveInstanceIdx + 1) < (this->InstanceStack).ArrayNum) {
      iVar12 = (this->InstanceStack).ArrayNum;
      uVar26 = iVar12 - 1;
      uVar27 = 0;
      if ((int)uVar26 < iVar12) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar19 = (longlong)(this->InstanceStack).ArrayNum * 0x68;
      pFVar6 = (this->InstanceStack).AllocatorInstance.Data;
      if (pFVar6[lVar19 + -0x27] == (FScriptContainerElement)0x2) {
        pUVar7 = *(UBTTaskNode **)(pFVar6 + lVar19 + -0x60);
        lVar8 = *(longlong *)(pFVar6 + lVar19 + -0x38);
        if ((*(int *)(pFVar6 + lVar19 + -0x30) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar4 = *(ushort *)((longlong)&pUVar7->_padding_ + 2);
        FScopeCycleCounterUObject::FScopeCycleCounterUObject
                  ((FScopeCycleCounterUObject *)&local_2a0,(UObjectBaseUtility *)pUVar7);
        bVar21 = local_2e8;
        bVar10 = UBTTaskNode::WrappedTickTask
                           (pUVar7,this,(uchar *)(lVar8 + (ulonglong)uVar4),fVar29,&local_2e4);
        local_2e8 = bVar10 | bVar21;
        if ((local_298 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_298 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_298 & 4) != 0) {
          FThreadStats::AddMessage(local_2a0,CycleScopeEnd);
        }
        local_298 = 0;
      }
    }
    ResumeBranchActions(this);
  }
  uVar24 = 0;
  if ((local_2e5 != '\0') && (uVar22 = uVar24, 0 < (this->InstanceStack).ArrayNum)) {
    do {
      pcVar23 = local_270;
      FVar25 = local_2c8;
      if (local_2e4 <= 0.0) break;
      uVar26 = (uint)uVar24;
      uVar27 = 0;
      if ((int)uVar26 < (this->InstanceStack).ArrayNum) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this->InstanceStack).AllocatorInstance.Data;
      iVar12 = *(int *)(pFVar6 + uVar22 + 0x18);
      puVar28 = *(undefined8 **)(pFVar6 + uVar22 + 0x10);
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_2d8 = puVar28 + iVar12;
      if (puVar28 != local_2d8) {
        do {
          local_2d0 = *(FName *)(pFVar6 + uVar22 + 0x30);
          this_00 = (UBTAuxiliaryNode *)*puVar28;
          if ((*(int *)(pFVar6 + uVar22 + 0x38) < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar29 = UBTAuxiliaryNode::GetNextNeededDeltaTime
                             (this_00,this,
                              (uchar *)((ulonglong)*(ushort *)((longlong)&this_00->_padding_ + 2) +
                                       (longlong)local_2d0));
          if (fVar29 < local_2e4) {
            local_2e4 = fVar29;
          }
          puVar28 = puVar28 + 1;
        } while (puVar28 != local_2d8);
      }
      uVar24 = (ulonglong)(uVar26 + 1);
      pcVar23 = local_270;
      FVar25 = local_2c8;
      uVar22 = uVar22 + 0x68;
    } while ((int)(uVar26 + 1) < (this->InstanceStack).ArrayNum);
  }
  if (((local_2de != '\0') && (local_2e8 == 0)) && (FVisualLogger::bIsRecording != 0)) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,
               L"BT(%i) planned to do something but actually did not.");
  }
  ScheduleNextTick(this,local_2e4);
  if ((bWarnOnce == false) && (0 < (this->InstanceStack).ArrayNum)) {
    uVar22 = 0;
    local_2d0.ComparisonIndex.Value = 0;
    local_2d0.Number = 0;
    uVar24 = uVar22;
    do {
      uVar26 = (uint)uVar24;
      uVar27 = 0;
      if ((int)uVar26 < (this->InstanceStack).ArrayNum) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this->InstanceStack).AllocatorInstance.Data;
      pcVar23 = local_270;
      FVar25 = local_2c8;
      if (*(longlong *)(pFVar6 + uVar22 + 8) == 0) break;
      iVar12 = *(int *)(pFVar6 + uVar22 + 0x18);
      uVar4 = *(ushort *)(*(longlong *)(pFVar6 + uVar22 + 8) + 0x50);
      puVar28 = *(undefined8 **)(pFVar6 + uVar22 + 0x10);
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar2 = puVar28 + iVar12;
      if (puVar28 != puVar2) {
LAB_146ea2730:
        if (((UBTNode *)*puVar28)->ExecutionIndex < uVar4) goto code_r0x000146ea273a;
        UBehaviorTreeTypes::DescribeNodeHelper(&local_1c0,(UBTNode *)*puVar28);
        local_198._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_198,"UBehaviorTreeComponent::TickComponent",0x25,Yes);
        ::FString::PrintfImpl
                  (&local_290,
                   L"%s: leaving the tick of behavior tree with a lower priority active node %s, Current Tasks : "
                  );
        if ((void *)local_198._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_198._padding_);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        uVar27 = 0;
        if (-1 < (longlong)local_2d0) {
          lVar19 = 0;
          local_2d8 = (undefined8 *)((longlong)local_2d0 + 1);
          do {
            uVar11 = 0;
            if ((int)uVar27 < (this->InstanceStack).ArrayNum) {
              uVar11 = ~uVar27 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = UBehaviorTreeTypes::DescribeNodeHelper
                                (&local_1b0,
                                 *(UBTNode **)
                                  ((this->InstanceStack).AllocatorInstance.Data + lVar19 + 8));
            if ((pFVar17->Data).ArrayNum == 0) {
              _Str = L"";
            }
            else {
              _Str = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
            sVar18 = wcslen(_Str);
            ::FString::AppendChars(&local_290,_Str,(int)sVar18);
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
            ::FString::AppendChars(&local_290,L"\\",1);
            uVar27 = uVar27 + 1;
            lVar19 = lVar19 + 0x68;
            local_2d8 = (undefined8 *)((longlong)local_2d8 + -1);
          } while (local_2d8 != (undefined8 *)0x0);
        }
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,L"%s");
        }
        local_248 = &local_290;
        `UBehaviorTreeComponent::TickComponent'::__l107::<lambda_5>::operator()(&local_248);
        bWarnOnce = true;
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
      }
LAB_146ea291d:
      local_2d0 = (FName)((longlong)local_2d0 + 1);
      uVar24 = (ulonglong)(uVar26 + 1);
      uVar22 = uVar22 + 0x68;
      pcVar23 = local_270;
      FVar25 = local_2c8;
    } while ((int)(uVar26 + 1) < (this->InstanceStack).ArrayNum);
  }
  FCsvProfiler::EndExclusiveStat(pcVar23);
  bVar21 = local_2e7;
  if ((local_2e7 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar21 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar21 & 4) != 0) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  bVar21 = local_2e6;
  if ((local_2e6 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar21 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar21 & 4) != 0) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  this->AccumulatedTickDeltaTime = 0.0;
  return;
code_r0x000146ea273a:
  puVar28 = puVar28 + 1;
  if (puVar28 == puVar2) goto LAB_146ea291d;
  goto LAB_146ea2730;
}

// TickNewlyAddedAuxNodesHelper @ 146ea2a00

void __thiscall UBehaviorTreeComponent::TickNewlyAddedAuxNodesHelper(UBehaviorTreeComponent *this)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  float local_res10 [2];
  
  iVar3 = (this->SearchData).PendingUpdates.ArrayNum;
  pFVar9 = (this->SearchData).PendingUpdates.AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->SearchData).PendingUpdates.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBehaviorTreeSearchUpdate,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if (((((byte)pFVar9[0x13] & 2) == 0) && (pFVar9[0x12] == (FScriptContainerElement)0x1)) &&
       (*(longlong *)pFVar9 != 0)) {
      uVar2 = *(ushort *)(pFVar9 + 0x10);
      if ((int)(uint)uVar2 < (this->InstanceStack).ArrayNum) {
        if ((this->InstanceStack).ArrayNum <= (int)(uint)uVar2) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar4 = (this->InstanceStack).AllocatorInstance.Data;
        lVar5 = *(longlong *)pFVar9;
        lVar6 = *(longlong *)(pFVar4 + (ulonglong)uVar2 * 0x68 + 0x30);
        if (*(int *)(pFVar4 + (ulonglong)uVar2 * 0x68 + 0x38) < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_res10[0] = 0.0;
        UBTAuxiliaryNode::WrappedTickNode
                  (*(UBTAuxiliaryNode **)pFVar9,this,
                   (uchar *)((ulonglong)*(ushort *)(lVar5 + 0x52) + lVar6),
                   this->CurrentFrameDeltaTime,local_res10);
      }
    }
    pFVar9 = pFVar9 + 0x18;
  }
  return;
}

// TrackNewLatentAborts @ 146ea2dc0

void __thiscall UBehaviorTreeComponent::TrackNewLatentAborts(UBehaviorTreeComponent *this)

{
  bool bVar1;
  
  if (this->bWaitingForLatentAborts == '\0') {
    bVar1 = HasActiveLatentAborts(this);
    this->bWaitingForLatentAborts = bVar1;
  }
  return;
}

// TrackPendingLatentAborts @ 146ea2e00

bool __thiscall UBehaviorTreeComponent::TrackPendingLatentAborts(UBehaviorTreeComponent *this)

{
  byte bVar1;
  bool bVar2;
  
  if (this->bWaitingForLatentAborts == '\0') {
    return false;
  }
  bVar2 = HasActiveLatentAborts(this);
  bVar1 = this->field_0x28a;
  this->bWaitingForLatentAborts = bVar2;
  return (bool)(~((byte)(bVar1 & 0xfd | bVar2 * '\x02') >> 1) & 1);
}

// TreeHasBeenStarted @ 146ea2e50

bool __thiscall UBehaviorTreeComponent::TreeHasBeenStarted(UBehaviorTreeComponent *this)

{
  if ((this->bIsRunning != '\0') && ((this->InstanceStack).ArrayNum != 0)) {
    return true;
  }
  return false;
}

// UninitializeComponent @ 146ea3390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBehaviorTreeComponent::UninitializeComponent(UBehaviorTreeComponent *this)

{
  int *piVar1;
  FName FVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UWorld *pUVar8;
  UClass *pUVar9;
  UBehaviorTreeComponent *pUVar10;
  longlong lVar11;
  UAISystemBase *pUVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  UBehaviorTreeComponent *local_38 [2];
  
  pUVar8 = (UWorld *)this->_padding_;
  if ((pUVar8 == (UWorld *)0x0) &&
     (pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar8 == (UWorld *)0x0)
     ) goto LAB_146ea356d;
  pUVar12 = (pUVar8->AISystem).field0_0x0.DebugPtr;
  if (pUVar12 == (UAISystemBase *)0x0) {
LAB_146ea33e5:
    pUVar12 = (UAISystemBase *)0x0;
  }
  else {
    pUVar9 = UAISystem::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar9->_padding_)) goto LAB_146ea33e5;
  }
  if ((pUVar12 != (UAISystemBase *)0x0) &&
     (FVar2 = pUVar12[2].AISystemModuleName, FVar2 != (FName)0x0)) {
    local_38[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if (((*(UBehaviorTreeComponent ***)((longlong)FVar2 + 0x40) <= local_38) &&
        (local_38 <
         *(UBehaviorTreeComponent ***)((longlong)FVar2 + 0x40) + *(int *)((longlong)FVar2 + 0x4c)))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)((longlong)FVar2 + 0x48);
    if (iVar7 != 0) {
      iVar15 = 0;
      plVar3 = *(longlong **)((longlong)FVar2 + 0x40);
      bVar6 = (UBehaviorTreeComponent *)*plVar3 != local_38[0];
      lVar11 = 0;
      pUVar10 = local_38[0];
      iVar13 = 0;
      do {
        iVar14 = iVar13;
        do {
          lVar11 = lVar11 + 1;
          iVar14 = iVar14 + 1;
          if (iVar7 <= lVar11) break;
        } while (bVar6 == ((UBehaviorTreeComponent *)plVar3[lVar11] != pUVar10));
        if (bVar6 != false) {
          if (iVar15 != iVar13) {
            memmove(plVar3 + iVar15,plVar3 + iVar13,(longlong)(iVar14 - iVar13) << 3);
            pUVar10 = local_38[0];
          }
          iVar15 = iVar15 + (iVar14 - iVar13);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar13 = iVar14;
      } while (lVar11 < iVar7);
      *(int *)((longlong)FVar2 + 0x48) = iVar15;
    }
  }
LAB_146ea356d:
  if ((this->SuspendedBranchActions & UninitializeComponent) == None) {
    RemoveAllInstances(this);
    UActorComponent::UninitializeComponent((UActorComponent *)this);
    return;
  }
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
               L"UninitializeComponent queued up");
  }
  iVar7 = (this->PendingBranchActionRequests).ArrayNum;
  piVar1 = &(this->PendingBranchActionRequests).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->PendingBranchActionRequests).AllocatorInstance,piVar1);
  }
  (this->PendingBranchActionRequests).ArrayNum = iVar7 + 1;
  lVar11 = (longlong)iVar7;
  pFVar4 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
  *(undefined8 *)(pFVar4 + lVar11 * 0x10) = 0;
  *(undefined4 *)(pFVar4 + lVar11 * 0x10 + 8) = 0;
  *(undefined2 *)(pFVar4 + lVar11 * 0x10 + 0xc) = 0x800;
  UActorComponent::UninitializeComponent((UActorComponent *)this);
  return;
}

// UnregisterAuxNodesInBranch @ 146ea3630

void __thiscall
UBehaviorTreeComponent::UnregisterAuxNodesInBranch
          (UBehaviorTreeComponent *this,UBTCompositeNode *param_1,bool param_2)

{
  int *piVar1;
  TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  FBehaviorTreeSearchUpdate *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  FBTNodeIndex local_res20 [2];
  FBTNodeIndex local_48 [2];
  TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_> local_40;
  
  uVar10 = FindInstanceContainingNode(this,(UBTNode *)param_1);
  if (uVar10 != 0xffffffff) {
    if ((param_1 == (UBTCompositeNode *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                           ,0x97f,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((uVar10 == 0xffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceIdx != FBTNodeIndex::InvalidIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                           ,0x981,L"Index has used the InvalidIndex value!"), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((uVar10 != (uVar10 & 0xffff)) || ((int)uVar10 < 0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9))
    {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    if (param_2) {
      pTVar2 = &(this->SearchData).PendingUpdates;
      if (&local_40 != pTVar2) {
        uVar3 = (this->SearchData).PendingUpdates.ArrayNum;
        pFVar5 = (FBehaviorTreeSearchUpdate *)(pTVar2->AllocatorInstance).Data;
        local_40.ArrayMax = 0;
        local_40.ArrayNum = uVar3;
        if (uVar3 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar3,0,&local_40.AllocatorInstance,uVar3,&local_40.ArrayMax);
          ConstructItems<FBehaviorTreeSearchUpdate,FBehaviorTreeSearchUpdate,int>
                    (local_40.AllocatorInstance.Data,pFVar5,uVar3);
        }
      }
      iVar4 = (this->SearchData).PendingUpdates.ArrayMax;
      (this->SearchData).PendingUpdates.ArrayNum = 0;
      if (iVar4 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar2->AllocatorInstance,0,&(this->SearchData).PendingUpdates.ArrayMax
                  );
      }
    }
    local_48[0].ExecutionIndex = (ushort)param_1->_padding_;
    local_res20[0].ExecutionIndex = param_1->LastExecutionIndex;
    local_res20[0].InstanceIndex = (ushort)uVar10;
    local_48[0].InstanceIndex = (ushort)uVar10;
    UnregisterAuxNodesInRange(this,local_48,local_res20);
    if (param_2) {
      SuspendBranchActions(this,All);
      pTVar2 = &(this->SearchData).PendingUpdates;
      ApplyAllSearchUpdates(this,pTVar2,0,false,true);
      FVar7.Data = local_40.AllocatorInstance.Data;
      if (pTVar2 != &local_40) {
        iVar8 = local_40.ArrayNum;
        piVar1 = &(this->SearchData).PendingUpdates.ArrayMax;
        iVar4 = *piVar1;
        (this->SearchData).PendingUpdates.ArrayNum = local_40.ArrayNum;
        if ((local_40.ArrayNum == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_40.ArrayNum,iVar4,&pTVar2->AllocatorInstance,local_40.ArrayNum,
                     piVar1);
          ConstructItems<FBehaviorTreeSearchUpdate,FBehaviorTreeSearchUpdate,int>
                    ((pTVar2->AllocatorInstance).Data,(FBehaviorTreeSearchUpdate *)FVar7.Data,iVar8)
          ;
        }
      }
      ResumeBranchActions(this);
    }
    if ((FBehaviorTreeSearchUpdate *)local_40.AllocatorInstance.Data !=
        (FBehaviorTreeSearchUpdate *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
  }
  return;
}

// UnregisterAuxNodesInRange @ 146ea38b0

void __thiscall
UBehaviorTreeComponent::UnregisterAuxNodesInRange
          (UBehaviorTreeComponent *this,FBTNodeIndex *param_1,FBTNodeIndex *param_2)

{
  TObjectPtr<UBTAuxiliaryNode>_u_0 *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UBTAuxiliaryNode>_u_0 TVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TObjectPtr<UBTAuxiliaryNode>_u_0 *pTVar8;
  uint uVar9;
  FBTNodeIndex local_res8 [2];
  FBTNodeIndex *local_res10;
  FBTNodeIndex *local_res18;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_58;
  undefined8 local_50;
  ushort local_48;
  undefined1 local_46;
  byte local_45;
  
  uVar9 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if (0 < (this->InstanceStack).ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->InstanceStack).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->InstanceStack).AllocatorInstance.Data;
      iVar2 = *(int *)(pFVar3 + (longlong)(int)uVar9 * 0x68 + 0x18);
      pTVar8 = *(TObjectPtr<UBTAuxiliaryNode>_u_0 **)(pFVar3 + (longlong)(int)uVar9 * 0x68 + 0x10);
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar1 = pTVar8 + iVar2;
      if (pTVar8 != pTVar1) {
        do {
          TVar4 = (TObjectPtr<UBTAuxiliaryNode>_u_0)pTVar8->DebugPtr;
          if (((uVar9 != (uVar9 & 0xffff)) || ((int)uVar9 < 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_res8[0].ExecutionIndex = (ushort)(TVar4.DebugPtr)->_padding_;
          local_res8[0].InstanceIndex = (ushort)uVar9;
          bVar6 = FBTNodeIndex::TakesPriorityOver(local_res10,local_res8);
          if ((bVar6) && (bVar6 = FBTNodeIndex::TakesPriorityOver(local_res8,param_2), bVar6)) {
            local_58 = TVar4;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
            }
            local_45 = local_45 & 0xfc;
            local_50 = 0;
            local_46 = 2;
            local_48 = (ushort)uVar9;
            FBehaviorTreeSearchData::AddUniqueUpdate
                      (&this->SearchData,(FBehaviorTreeSearchUpdate *)&local_58.ObjectPtr);
            param_2 = local_res18;
          }
          pTVar8 = pTVar8 + 1;
        } while (pTVar8 != pTVar1);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->InstanceStack).ArrayNum);
  }
  return;
}

// UnregisterAuxNodesUpTo @ 146ea3aa0

void __thiscall
UBehaviorTreeComponent::UnregisterAuxNodesUpTo(UBehaviorTreeComponent *this,FBTNodeIndex *param_1)

{
  TObjectPtr<UBTAuxiliaryNode>_u_0 *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UBTAuxiliaryNode>_u_0 TVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TObjectPtr<UBTAuxiliaryNode>_u_0 *pTVar8;
  uint uVar9;
  FBTNodeIndex local_res8 [2];
  FBTNodeIndex *local_res10;
  TObjectPtr<UBTAuxiliaryNode>_u_0 local_58;
  undefined8 local_50;
  ushort local_48;
  undefined1 local_46;
  byte local_45;
  
  uVar9 = 0;
  local_res10 = param_1;
  if (0 < (this->InstanceStack).ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->InstanceStack).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->InstanceStack).AllocatorInstance.Data;
      iVar2 = *(int *)(pFVar3 + (longlong)(int)uVar9 * 0x68 + 0x18);
      pTVar8 = *(TObjectPtr<UBTAuxiliaryNode>_u_0 **)(pFVar3 + (longlong)(int)uVar9 * 0x68 + 0x10);
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar1 = pTVar8 + iVar2;
      if (pTVar8 != pTVar1) {
        do {
          TVar4 = (TObjectPtr<UBTAuxiliaryNode>_u_0)pTVar8->DebugPtr;
          if (((uVar9 != (uVar9 & 0xffff)) || ((int)uVar9 < 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_res8[0].ExecutionIndex = (ushort)(TVar4.DebugPtr)->_padding_;
          local_res8[0].InstanceIndex = (ushort)uVar9;
          bVar6 = FBTNodeIndex::TakesPriorityOver(param_1,local_res8);
          if (bVar6) {
            local_58 = TVar4;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
            }
            local_45 = local_45 & 0xfc;
            local_50 = 0;
            local_46 = 2;
            local_48 = (ushort)uVar9;
            FBehaviorTreeSearchData::AddUniqueUpdate
                      (&this->SearchData,(FBehaviorTreeSearchUpdate *)&local_58.ObjectPtr);
            param_1 = local_res10;
          }
          pTVar8 = pTVar8 + 1;
        } while (pTVar8 != pTVar1);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->InstanceStack).ArrayNum);
  }
  return;
}

// UnregisterMessageObserversFrom @ 146ea3ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::UnregisterMessageObserversFrom
          (UBehaviorTreeComponent *this,FBTNodeIndex *param_1)

{
  int iVar1;
  
  if (*(int *)&(this->TaskMessageObservers).field_0x8 !=
      *(int *)&(this->TaskMessageObservers).field_0x34) {
    iVar1 = TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
            ::RemoveImpl<FBTNodeIndex>
                      ((TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                        *)&this->TaskMessageObservers,
                       (uint)(param_1->ExecutionIndex ^ param_1->InstanceIndex),param_1);
    if ((iVar1 != 0) && (FVisualLogger::bIsRecording != 0)) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Message observers removed for task[%d:%d] (num:%d)");
    }
  }
  return;
}

// UnregisterMessageObserversFrom @ 146ea3f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::UnregisterMessageObserversFrom
          (UBehaviorTreeComponent *this,UBTTaskNode *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FBTNodeIndex local_res10 [2];
  
  if ((param_1 != (UBTTaskNode *)0x0) && (iVar5 = (this->InstanceStack).ArrayNum, iVar5 != 0)) {
    uVar4 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar4 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = (ushort)param_1->_padding_;
    local_res10[0].ExecutionIndex = uVar1;
    uVar4 = FindInstanceContainingNode(this,(UBTNode *)param_1);
    if (uVar4 == 0xffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceContainingNodeIdx != FBTNodeIndex::InvalidIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                         ,0xa35,L"Index has used the InvalidIndex value!");
      if (bVar3) {
code_r0x000146ea4062:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((0xffff < (int)uVar4) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("InstanceContainingNodeIdx <= ((uint16) 0xffff)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BehaviorTreeComponent.cpp"
                                ,0xa36,L"Narrowing conversion causing loss of data"), bVar3))
    goto code_r0x000146ea4062;
    local_res10[0].InstanceIndex = (ushort)uVar4;
    if (((*(int *)&(this->TaskMessageObservers).field_0x8 !=
          *(int *)&(this->TaskMessageObservers).field_0x34) &&
        (iVar5 = TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                 ::RemoveImpl<FBTNodeIndex>
                           ((TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>,1>,FDefaultSetAllocator>
                             *)&this->TaskMessageObservers,(uint)uVar1 ^ uVar4 & 0xffff,local_res10)
        , iVar5 != 0)) && (FVisualLogger::bIsRecording != 0)) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Message observers removed for task[%d:%d] (num:%d)");
    }
  }
  return;
}

// UnregisterParallelTask @ 146ea40e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBehaviorTreeComponent::UnregisterParallelTask
          (UBehaviorTreeComponent *this,UBTTaskNode *param_1,ushort param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UBTTaskNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FBehaviorTreeInstance *this_00;
  FString local_38;
  
  if ((int)(uint)param_2 < (this->InstanceStack).ArrayNum) {
    if (((this->InstanceStack).ArrayNum <= (int)(uint)param_2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (FBehaviorTreeInstance *)
              ((this->InstanceStack).AllocatorInstance.Data + (ulonglong)param_2 * 0x68);
    iVar1 = (this_00->ParallelTasks).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = iVar1 - 1;
    if (-1 < (int)uVar7) {
      lVar8 = (longlong)(int)uVar7 << 4;
      do {
        iVar1 = (this_00->ParallelTasks).ArrayNum;
        pFVar2 = (this_00->ParallelTasks).AllocatorInstance.Data;
        if ((iVar1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar7 < iVar1) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar3 = *(UBTTaskNode **)(pFVar2 + lVar8);
        if (pUVar3 == (UBTTaskNode *)0x0) {
          bVar5 = param_1 == (UBTTaskNode *)0x0;
        }
        else {
          bVar5 = pUVar3 == param_1;
        }
        if (bVar5) {
          if (FVisualLogger::bIsRecording != 0) {
            UBehaviorTreeTypes::DescribeNodeHelper(&local_38,(UBTNode *)param_1);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                       L"Parallel task: %s removed from active list");
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          FBehaviorTreeInstance::RemoveParallelTaskAt(this_00,uVar7);
          return;
        }
        lVar8 = lVar8 + -0x10;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
  }
  return;
}

// UpdateDebuggerAfterExecution @ 146ea4640

void __thiscall
UBehaviorTreeComponent::UpdateDebuggerAfterExecution
          (UBehaviorTreeComponent *this,UBTTaskNode *param_1,ushort param_2)

{
  return;
}

// UpdateInstanceId @ 146ea4680

uchar __thiscall
UBehaviorTreeComponent::UpdateInstanceId
          (UBehaviorTreeComponent *this,UBehaviorTree *param_1,UBTNode *param_2,int param_3)

{
  int *piVar1;
  TArray<FBehaviorTreeInstanceId,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UBehaviorTree>_u_0 *pTVar3;
  code *pcVar4;
  bool bVar5;
  uchar uVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ushort local_58 [2];
  undefined2 local_54 [2];
  TObjectPtr<UBehaviorTree>_u_0 local_50;
  undefined8 local_48;
  ForAnyElementType FStack_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  int local_20;
  
  uVar10 = 0;
  local_38 = 0;
  local_48 = 0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  uVar12 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = -1;
  local_38._0_4_ = uVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_38._0_4_ = 0, param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (param_2 == (UBTNode *)0x0) {
    local_58[0] = 0xffff;
  }
  else {
    local_58[0] = param_2->ExecutionIndex;
  }
  uVar7 = (uint)local_38;
  local_50.DebugPtr = param_1;
  if ((FStack_40.Data <= (FScriptContainerElement *)local_58) &&
     ((FScriptContainerElement *)local_58 < FStack_40.Data + (longlong)(int)local_38._4_4_ * 2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    uVar7 = (uint)local_38;
  }
  if (uVar7 == local_38._4_4_) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&FStack_40,(int *)((longlong)&local_38 + 4));
  }
  local_38 = CONCAT44(local_38._4_4_,uVar7 + 1);
  uVar11 = param_3 - 1;
  *(ushort *)(FStack_40.Data + (longlong)(int)uVar7 * 2) = local_58[0];
  if (-1 < (int)uVar11) {
    lVar13 = (longlong)(int)uVar11 * 0x68;
    do {
      uVar7 = uVar12;
      if ((int)uVar11 < (this->InstanceStack).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      if (*(longlong *)((this->InstanceStack).AllocatorInstance.Data + lVar13 + 8) == 0) {
        local_54[0] = 0xffff;
      }
      else {
        uVar7 = uVar12;
        if ((int)uVar11 < (this->InstanceStack).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
        local_54[0] = *(undefined2 *)
                       (*(longlong *)((this->InstanceStack).AllocatorInstance.Data + lVar13 + 8) +
                       0x50);
      }
      if (((FStack_40.Data <= (FScriptContainerElement *)local_54) &&
          ((FScriptContainerElement *)local_54 < FStack_40.Data + (longlong)(int)local_38._4_4_ * 2)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      iVar8 = (uint)local_38;
      if ((uint)local_38 == local_38._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&FStack_40,(int *)((longlong)&local_38 + 4));
      }
      local_38 = CONCAT44(local_38._4_4_,iVar8 + 1);
      lVar13 = lVar13 + -0x68;
      uVar11 = uVar11 - 1;
      *(undefined2 *)(FStack_40.Data + (longlong)iVar8 * 2) = local_54[0];
    } while (-1 < (int)uVar11);
  }
  pTVar2 = &this->KnownInstances;
  if (0 < (this->KnownInstances).ArrayNum) {
    do {
      uVar7 = uVar12;
      if ((int)uVar10 < (this->KnownInstances).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38;
      if (*(UBehaviorTree **)pFVar9 == local_50.DebugPtr) {
        iVar8 = *(int *)(pFVar9 + 0x18);
        if ((iVar8 == (uint)local_38) &&
           ((iVar8 == 0 ||
            (iVar8 = memcmp(*(void **)(pFVar9 + 0x10),FStack_40.Data,(longlong)iVar8 * 2),
            iVar8 == 0)))) {
          uVar12 = uVar10 & 0xff;
          if (uVar10 == uVar12) goto joined_r0x000146ea4b0c;
          goto LAB_146ea4a93;
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (this->KnownInstances).ArrayNum);
  }
  local_20 = (this->NodeInstances).ArrayNum;
  pTVar3 = (TObjectPtr<UBehaviorTree>_u_0 *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar3 <= &local_50) && (&local_50 < pTVar3 + (longlong)(this->KnownInstances).ArrayMax * 7)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar10 = (this->KnownInstances).ArrayNum;
  piVar1 = &(this->KnownInstances).ArrayMax;
  if (uVar10 == *piVar1) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,&pTVar2->AllocatorInstance,piVar1);
    (this->KnownInstances).ArrayNum = uVar10;
  }
  (this->KnownInstances).ArrayNum = uVar10 + 1;
  FBehaviorTreeInstanceId::FBehaviorTreeInstanceId
            ((FBehaviorTreeInstanceId *)
             ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38),
             (FBehaviorTreeInstanceId *)&local_50.ObjectPtr);
  uVar12 = uVar10 & 0xff;
  if (uVar10 == uVar12) {
joined_r0x000146ea4b0c:
    uVar6 = (uchar)uVar12;
    if (-1 < (int)uVar10) goto LAB_146ea4ab9;
  }
LAB_146ea4a93:
  uVar6 = (uchar)uVar12;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IntFitsIn<OutType>(In)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
LAB_146ea4ab9:
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  return uVar6;
}

// execAddCooldownTagDuration @ 146ea6250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UBehaviorTreeComponent::execAddCooldownTagDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  TTuple<FGameplayTag,double> *pTVar3;
  UWorld *pUVar4;
  double *pdVar5;
  bool bVar6;
  int local_res10 [4];
  float local_res20 [2];
  TPairInitializer<FGameplayTag_const_&,double_&&> local_58;
  FName local_48;
  double local_40;
  FName *local_38;
  double *local_30;
  
  local_58.Value = (double *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58.Value,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58.Value);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res20[0];
  bVar6 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = (FName)local_58.Value;
  if ((FName)local_58.Value != (FName)0x0) {
    pTVar3 = TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
                     *)&param_1[0xe].field_0x8,(FGameplayTag *)&local_48);
    pdVar5 = (double *)&pTVar3->field_0x8;
    if (pTVar3 == (TTuple<FGameplayTag,double> *)0x0) {
      pdVar5 = (double *)0x0;
    }
    if ((bVar6) || (pdVar5 == (double *)0x0)) {
      pUVar4 = *(UWorld **)&param_1[4].field_0x10;
      if (pUVar4 == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      local_40 = (double)fVar2 + pUVar4->TimeSeconds;
      local_38 = &local_48;
      local_30 = &local_40;
      TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,double_&&>_>
                ((TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
                  *)&param_1[0xe].field_0x8,&local_58,(bool *)&local_38);
    }
    else {
      *pdVar5 = (double)fVar2 + *pdVar5;
    }
  }
  return;
}

// execGetTagCooldownEndTime @ 146ea6740

void __cdecl
UBehaviorTreeComponent::execGetTagCooldownEndTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TTuple<FGameplayTag,double> *pTVar2;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FGameplayTag,double>,TDefaultMapHashableKeyFuncs<FGameplayTag,double,0>,FDefaultSetAllocator>
                   *)&param_1[0xe].field_0x8,(FGameplayTag *)&local_res10);
  if (pTVar2 != (TTuple<FGameplayTag,double> *)0x0) {
    *(undefined8 *)param_3 = *(undefined8 *)&pTVar2->field_0x8;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetDynamicSubtree @ 146ea7140

void __cdecl
UBehaviorTreeComponent::execSetDynamicSubtree(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x568))(param_1,local_res8,local_res10);
  return;
}

// operator() @ 1504fe240

bool __thiscall
`UBehaviorTreeComponent::RemoveAllInstances'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046053014>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8352778163046053014>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fe280

bool __thiscall
`UBehaviorTreeComponent::ScheduleExecutionUpdate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046054788>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8352778163046054788>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fe2c0

bool __thiscall `UBehaviorTreeComponent::TickComponent'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046054236>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8352778163046054236>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fe300

bool __thiscall `UBehaviorTreeComponent::DeactivateBranch'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046055196>);
  if (bVar2) {
    UBehaviorTreeTypes::DescribeNodeHelper(&local_18,*(UBTNode **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8352778163046055196>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504fe367;
    }
  }
  bVar2 = false;
LAB_1504fe367:
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

// operator() @ 1504fe3a0

bool __thiscall
`UBehaviorTreeComponent::ProcessExecutionRequest'::__l41::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046053901>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"[%d:%d]");
    ::FString::PrintfImpl(&local_28,L"[%d:%d]");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8352778163046053901>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504fe464;
    }
  }
  bVar4 = false;
LAB_1504fe464:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504fe4c0

bool __thiscall
`UBehaviorTreeComponent::RequestExecution'::__l109::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046054646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8352778163046054646>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fe500

bool __thiscall `UBehaviorTreeComponent::EvaluateBranch'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046054977>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_8352778163046054977>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504fe560

bool __thiscall
`UBehaviorTreeComponent::RemoveAllInstances'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UBehaviorTree *pUVar6;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046053007>);
  if (bVar4) {
    if (*(longlong *)(*(longlong *)this + 0x1d8) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0x1d8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    pUVar6 = UBehaviorTreeComponent::GetRootTree(*(UBehaviorTreeComponent **)this);
    if (pUVar6 == (UBehaviorTree *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18[0] = (FName)pUVar6->_padding_;
      ::FName::ToString(local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8352778163046053007>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504fe65b;
    }
  }
  bVar4 = false;
LAB_1504fe65b:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504fe6b0

bool __thiscall
`UBehaviorTreeComponent::ProcessExecutionRequest'::__l41::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046053899>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"[%d:%d]");
    ::FString::PrintfImpl(&local_28,L"[%d:%d]");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8352778163046053899>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504fe774;
    }
  }
  bVar4 = false;
LAB_1504fe774:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504fe7d0

bool __thiscall `UBehaviorTreeComponent::TickComponent'::__l107::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8352778163046054023>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_8352778163046054023>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

