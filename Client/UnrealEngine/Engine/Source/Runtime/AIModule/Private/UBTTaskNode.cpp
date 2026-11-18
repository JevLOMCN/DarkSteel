// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 24

// StaticClass @ 146ea95c0

UClass * __cdecl UBTTaskNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTaskNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTaskNode",
               &Z_Registration_Info_UClass_UBTTaskNode.InnerSingleton,
               StaticRegisterNativesUBTTaskNode,0x70,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Game",InternalConstructor<UBTTaskNode>,InternalVTableHelperCtorCaller<UBTTaskNode>
               ,local_res8,UBTNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTaskNode.InnerSingleton;
}

// UBTTaskNode @ 146ec8700

UBTTaskNode * __thiscall UBTTaskNode::UBTTaskNode(UBTTaskNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Services).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Services).ArrayNum = 0;
  (this->Services).ArrayMax = 0;
  return this;
}

// UBTTaskNode @ 146ec8750

UBTTaskNode * __thiscall UBTTaskNode::UBTTaskNode(UBTTaskNode *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this->bIgnoreRestartSelf = 0;
  this->bNotifyTaskFinished = 0;
  this->bNotifyTick = 0;
  this->bTickIntervals = '\0';
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Services).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Services).ArrayNum = 0;
  (this->Services).ArrayMax = 0;
  return this;
}

// ~UBTTaskNode @ 146ecd3e0

void __thiscall UBTTaskNode::~UBTTaskNode(UBTTaskNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->Services).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AbortTask @ 146ed1580

Type __thiscall
UBTTaskNode::AbortTask(UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  return Aborted;
}

// ExecuteTask @ 146ee0b80

Type __thiscall
UBTTaskNode::ExecuteTask(UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  return Succeeded;
}

// FinishLatentAbort @ 146ee3940

void __thiscall UBTTaskNode::FinishLatentAbort(UBTTaskNode *this,UBehaviorTreeComponent *param_1)

{
  UBTTaskNode *pUVar1;
  
  pUVar1 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
  UBehaviorTreeComponent::OnTaskFinished(param_1,pUVar1,Aborted);
  return;
}

// FinishLatentTask @ 146ee3970

void __thiscall
UBTTaskNode::FinishLatentTask(UBTTaskNode *this,UBehaviorTreeComponent *param_1,Type param_2)

{
  UBTTaskNode *pUVar1;
  
  pUVar1 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
  UBehaviorTreeComponent::OnTaskFinished(param_1,pUVar1,param_2);
  return;
}

// GetPrivateStaticClass @ 146ee8520

UClass * __cdecl UBTTaskNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTaskNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTaskNode",
               &Z_Registration_Info_UClass_UBTTaskNode.InnerSingleton,
               StaticRegisterNativesUBTTaskNode,0x70,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Game",InternalConstructor<UBTTaskNode>,InternalVTableHelperCtorCaller<UBTTaskNode>
               ,local_res8,UBTNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTaskNode.InnerSingleton;
}

// GetSpecialMemorySize @ 146eeaf00

ushort __thiscall UBTTaskNode::GetSpecialMemorySize(UBTTaskNode *this)

{
  if (this->bTickIntervals != 0) {
    return 0xc;
  }
  return (ushort)(*(byte *)((longlong)&this->_padding_ + 5) >> 2 & 1) << 2;
}

// OnGameplayTaskDeactivated @ 146ef7950

void __thiscall UBTTaskNode::OnGameplayTaskDeactivated(UBTTaskNode *this,UGameplayTask *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  UBehaviorTreeComponent *pUVar7;
  UClass *pUVar8;
  UBTTaskNode *pUVar9;
  Type TVar10;
  UBehaviorTreeComponent *this_00;
  
  plVar1 = &this[-1]._padding_;
  pUVar7 = (UBehaviorTreeComponent *)UGameplayTask::GetTaskOwner(param_1);
  this_00 = (UBehaviorTreeComponent *)0x0;
  TVar10 = Succeeded;
  if (plVar1 == (longlong *)0x0) {
    this = (UBTTaskNode *)this_00;
  }
  if ((pUVar7 != (UBehaviorTreeComponent *)this) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6332924742466535652>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTTaskNode.cpp"
                         ,0xe4,"Task.GetTaskOwner() == this"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 != (UGameplayTask *)0x0) {
    pUVar8 = Z_Construct_UClass_UAITask_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar8->_padding_)) && (lVar3 = param_1[1]._padding_, lVar3 != 0)) {
      if (*(longlong *)(lVar3 + 0x3b8) != 0) {
        pUVar8 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar3 + 0x3b8),pUVar8);
        if (bVar5) {
          this_00 = *(UBehaviorTreeComponent **)(lVar3 + 0x3b8);
        }
      }
      if (this_00 != (UBehaviorTreeComponent *)0x0) {
        TVar6 = UBehaviorTreeComponent::GetTaskStatus(this_00,(UBTTaskNode *)plVar1);
        pUVar9 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(this_00,(UBTNode *)plVar1);
        if (TVar6 == Aborting) {
          TVar10 = Aborted;
        }
        UBehaviorTreeComponent::OnTaskFinished(this_00,pUVar9,TVar10);
      }
    }
  }
  return;
}

// OnMessage @ 146ef80e0

void __thiscall
UBTTaskNode::OnMessage
          (UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,FName param_3,
          int param_4,bool param_5)

{
  Type TVar1;
  UBTTaskNode *pUVar2;
  Type TVar3;
  
  TVar1 = UBehaviorTreeComponent::GetTaskStatus(param_1,this);
  if (TVar1 == Active) {
    pUVar2 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
    TVar3 = param_5 ^ Failed;
  }
  else {
    if (TVar1 != Aborting) {
      return;
    }
    pUVar2 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
    TVar3 = Aborted;
  }
  UBehaviorTreeComponent::OnTaskFinished(param_1,pUVar2,TVar3);
  return;
}

// OnTaskFinished @ 146ef9f70

void __thiscall
UBTTaskNode::OnTaskFinished
          (UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// ReceivedMessage @ 146efc5a0

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
UBTTaskNode::ReceivedMessage(UBTTaskNode *this,UBrainComponent *param_1,FAIMessage *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FString local_18;
  
  if ((param_1 == (UBrainComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerComp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTTaskNode.cpp"
                         ,0x8e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = UBehaviorTreeComponent::FindInstanceContainingNode
                    ((UBehaviorTreeComponent *)param_1,(UBTNode *)this);
  if (((int)uVar4 < 0) || ((int)param_1[1]._padding_ <= (int)uVar4)) {
    if (FVisualLogger::bIsRecording != 0) {
      UBTNode::GetNodeName((UBTNode *)this,&local_18);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Warning,
                 L"UBTTaskNode::ReceivedMessage called while %s node no longer in active BT");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    uVar5 = 0;
    if ((int)uVar4 < (int)param_1[1]._padding_) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = *(longlong *)((longlong)(int)uVar4 * 0x68 + 0x30 + param_1[1]._padding_);
    if ((*(int *)((longlong)(int)uVar4 * 0x68 + 0x38 + param_1[1]._padding_) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(this->_padding_ + 0x318))
              (this,param_1,(ulonglong)*(ushort *)((longlong)&this->_padding_ + 2) + lVar1,
               param_2->MessageName,(param_2->RequestID).RequestID,(param_2->Status).Value == '\x01'
              );
  }
  return;
}

// SetNextTickTime @ 146effa40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UBTTaskNode::SetNextTickTime(UBTTaskNode *this,uchar *param_1,float param_2)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = _DAT_00000004;
  if ((this->bTickIntervals != 0) &&
     (uVar2 = (**(code **)(this->_padding_ + 0x2e8))(), fVar1 = param_2, uVar2 != 0)) {
    *(float *)(param_1 + (4 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc))) = param_2;
    return;
  }
  _DAT_00000004 = fVar1;
  return;
}

// StaticRegisterNativesUBTTaskNode @ 146f00d50

void __cdecl UBTTaskNode::StaticRegisterNativesUBTTaskNode(void)

{
  return;
}

// StopWaitingForMessages @ 146f010c0

void __thiscall
UBTTaskNode::StopWaitingForMessages(UBTTaskNode *this,UBehaviorTreeComponent *param_1)

{
  UBehaviorTreeComponent::UnregisterMessageObserversFrom(param_1,this);
  return;
}

// TickTask @ 146f02140

void __thiscall
UBTTaskNode::TickTask
          (UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
  return;
}

// WaitForMessage @ 146f04070

void __thiscall
UBTTaskNode::WaitForMessage(UBTTaskNode *this,UBehaviorTreeComponent *param_1,FName param_2)

{
  UBehaviorTreeComponent::RegisterMessageObserver(param_1,this,param_2);
  return;
}

// WaitForMessage @ 146f04090

void __thiscall
UBTTaskNode::WaitForMessage
          (UBTTaskNode *this,UBehaviorTreeComponent *param_1,FName param_2,int param_3)

{
  UBehaviorTreeComponent::RegisterMessageObserver(param_1,this,param_2,(FAIRequestID)param_3);
  return;
}

// WrappedAbortTask @ 146f040b0

Type __thiscall
UBTTaskNode::WrappedAbortTask(UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  Type TVar1;
  
  if ((this->_padding_ & 0x40000000000) != 0) {
    this = (UBTTaskNode *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
  }
  if (this != (UBTTaskNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f040e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TVar1 = (**(code **)(this->_padding_ + 0x308))(this,param_1,param_2);
    return TVar1;
  }
  return Aborted;
}

// WrappedExecuteTask @ 146f04270

Type __thiscall
UBTTaskNode::WrappedExecuteTask(UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  float fVar1;
  ushort uVar2;
  Type TVar3;
  UBTTaskNode *pUVar4;
  longlong lVar5;
  
  pUVar4 = this;
  if ((this->_padding_ & 0x40000000000) != 0) {
    pUVar4 = (UBTTaskNode *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
  }
  if (pUVar4 != (UBTTaskNode *)0x0) {
    TVar3 = (**(code **)(pUVar4->_padding_ + 0x300))(pUVar4,param_1,param_2);
    if (this->bTickIntervals != 0) {
      fVar1 = param_1->AccumulatedTickDeltaTime;
      uVar2 = (**(code **)(this->_padding_ + 0x2e8))(this);
      if (uVar2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (longlong)param_2 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc);
      }
      *(uint *)(lVar5 + 8) = (uint)fVar1 ^ __xmm_80000000800000008000000080000000;
      *(float *)(lVar5 + 4) = fVar1 + *(float *)(lVar5 + 4);
    }
    return TVar3;
  }
  return Failed;
}

// WrappedOnTaskFinished @ 146f047a0

void __thiscall
UBTTaskNode::WrappedOnTaskFinished
          (UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  UGameplayTasksComponent *this_00;
  
  if ((this->_padding_ & 0x40000000000) != 0) {
    this = (UBTTaskNode *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
  }
  if (this != (UBTTaskNode *)0x0) {
    if (this->bNotifyTaskFinished != 0) {
      (**(code **)(this->_padding_ + 800))(this,param_1,param_2,param_3);
    }
    if ((((*(byte *)((longlong)&this->_padding_ + 5) & 8) != 0) && (param_1->_padding_ != 0)) &&
       (this_00 = *(UGameplayTasksComponent **)(param_1->_padding_ + 0x3d0),
       this_00 != (UGameplayTasksComponent *)0x0)) {
      UGameplayTasksComponent::EndAllResourceConsumingTasksOwnedBy
                (this_00,(IGameplayTaskOwnerInterface *)&this->_padding_);
    }
  }
  return;
}

// WrappedTickTask @ 146f04bb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UBTTaskNode::WrappedTickTask
          (UBTTaskNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3,
          float *param_4)

{
  bool bVar1;
  ushort uVar2;
  UBTTaskNode *pUVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  FString local_38 [2];
  
  if (this->bNotifyTick != 0) {
    pUVar3 = this;
    if ((this->_padding_ & 0x40000000000) != 0) {
      pUVar3 = (UBTTaskNode *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
    }
    if (pUVar3 != (UBTTaskNode *)0x0) {
      if (pUVar3->bTickIntervals == 0) {
        (**(code **)(pUVar3->_padding_ + 0x310))(pUVar3,param_1,param_2,param_3);
        *param_4 = 0.0;
        return true;
      }
      uVar2 = (**(code **)(this->_padding_ + 0x2e8))(this);
      lVar4 = 0;
      if (uVar2 != 0) {
        lVar4 = (longlong)param_2 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc);
      }
      fVar5 = *(float *)(lVar4 + 4) - param_3;
      fVar6 = param_3 + *(float *)(lVar4 + 8);
      *(float *)(lVar4 + 4) = fVar5;
      *(float *)(lVar4 + 8) = fVar6;
      bVar1 = fVar5 <= 0.0;
      if (bVar1) {
        *(undefined8 *)(lVar4 + 4) = 0;
        if (FVisualLogger::bIsRecording != 0) {
          UBehaviorTreeTypes::DescribeNodeHelper(local_38,(UBTNode *)this);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                     L"Ticking aux node: %s");
          if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
          }
        }
        (**(code **)(pUVar3->_padding_ + 0x310))(pUVar3,param_1,param_2,fVar6);
      }
      if (*param_4 <= *(float *)(lVar4 + 4)) {
        return bVar1;
      }
      *param_4 = *(float *)(lVar4 + 4);
      return bVar1;
    }
  }
  return false;
}

