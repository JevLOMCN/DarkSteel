// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146eaf280

UClass * __cdecl UBTTask_GameplayTaskBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_GameplayTaskBase",
               &Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.InnerSingleton,
               StaticRegisterNativesUBTTask_GameplayTaskBase,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_GameplayTaskBase>,
               InternalVTableHelperCtorCaller<UBTTask_GameplayTaskBase>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.InnerSingleton;
}

// UBTTask_GameplayTaskBase @ 146ec8dd0

UBTTask_GameplayTaskBase * __thiscall
UBTTask_GameplayTaskBase::UBTTask_GameplayTaskBase
          (UBTTask_GameplayTaskBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->bWaitForGameplayTask)._padding_ = 0;
  *(undefined2 *)&(this->bWaitForGameplayTask)._padding_ = 0xffff;
  (this->bWaitForGameplayTask).DefaultValue = false;
  return this;
}

// UBTTask_GameplayTaskBase @ 146ec8e30

UBTTask_GameplayTaskBase * __thiscall
UBTTask_GameplayTaskBase::UBTTask_GameplayTaskBase
          (UBTTask_GameplayTaskBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FString local_28;
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  plVar2 = &this->_padding_;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *plVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->bWaitForGameplayTask)._padding_ = 0;
  *(undefined2 *)&(this->bWaitForGameplayTask)._padding_ = 0xffff;
  (this->bWaitForGameplayTask).DefaultValue = false;
  ::FString::FString(&local_28,"GameplayTask Base");
  if ((FString *)plVar2 != &local_28) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_28.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_28.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
  (this->bWaitForGameplayTask)._padding_ = 0;
  (this->bWaitForGameplayTask)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->bWaitForGameplayTask).DefaultValue = true;
  *(undefined3 *)&(this->bWaitForGameplayTask).field_0xd = uStack_c._1_3_;
  return this;
}

// ~UBTTask_GameplayTaskBase @ 146ecd530

void __thiscall UBTTask_GameplayTaskBase::~UBTTask_GameplayTaskBase(UBTTask_GameplayTaskBase *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 146ed1740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_GameplayTaskBase::AbortTask
          (UBTTask_GameplayTaskBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  char cVar1;
  FBTGameplayTaskMemory *this_00;
  UObject *pUVar2;
  
  this_00 = UBTNode::CastInstanceNodeMemory<FBTGameplayTaskMemory>((UBTNode *)this,param_2);
  this_00->bObserverCanFinishTask = '\0';
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if ((pUVar2 != (UObject *)0x0) && (pUVar2[1].field_0x11 != '\x04')) {
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      cVar1 = (this->bWaitForGameplayTask).DefaultValue;
    }
    else {
      cVar1 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                        ((UBlackboardComponent *)param_1->_padding_,
                         (FName *)&this->bWaitForGameplayTask,
                         (FKey *)&(this->bWaitForGameplayTask)._padding_,
                         &(this->bWaitForGameplayTask).DefaultValue);
    }
    if (cVar1 == '\0') {
      *(uint *)&pUVar2[1].field_0x14 = *(uint *)&pUVar2[1].field_0x14 | 0x80;
    }
    else {
      (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
    }
  }
  return Aborted;
}

// CleanupMemory @ 146ed5f60

void __thiscall
UBTTask_GameplayTaskBase::CleanupMemory
          (UBTTask_GameplayTaskBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  return;
}

// DetermineGameplayTaskResult @ 146ede940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_GameplayTaskBase::DetermineGameplayTaskResult
          (UBTTask_GameplayTaskBase *this,UAITask *param_1)

{
  return Succeeded;
}

// GetInstanceMemorySize @ 146ee5ac0

ushort __thiscall UBTTask_GameplayTaskBase::GetInstanceMemorySize(UBTTask_GameplayTaskBase *this)

{
  return 0xc;
}

// GetPrivateStaticClass @ 146ee8820

UClass * __cdecl UBTTask_GameplayTaskBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_GameplayTaskBase",
               &Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.InnerSingleton,
               StaticRegisterNativesUBTTask_GameplayTaskBase,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_GameplayTaskBase>,
               InternalVTableHelperCtorCaller<UBTTask_GameplayTaskBase>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.InnerSingleton;
}

// InitializeMemory @ 146ef2fc0

void __thiscall
UBTTask_GameplayTaskBase::InitializeMemory
          (UBTTask_GameplayTaskBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  if (param_3 == Initialize) {
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTGameplayTaskMemory>((UBTNode *)this,param_2);
  return;
}

// OnGameplayTaskDeactivated @ 146ef7a70

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
UBTTask_GameplayTaskBase::OnGameplayTaskDeactivated
          (UBTTask_GameplayTaskBase *this,UGameplayTask *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  Type TVar4;
  UClass *pUVar5;
  uchar *puVar6;
  FBTGameplayTaskMemory *this_00;
  longlong *this_01;
  UBehaviorTreeComponent *this_02;
  undefined1 local_res10 [8];
  
  if (param_1 == (UGameplayTask *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UAITask_NoRegister();
  iVar3 = (int)pUVar5->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar3) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  if (param_1[1]._padding_ == 0) {
    return;
  }
  if (param_1->TaskState == Paused) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UAITask_NoRegister();
  iVar3 = (int)pUVar5->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar3) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  lVar1 = param_1[1]._padding_;
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x3b8) != 0) {
    pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)(lVar1 + 0x3b8),pUVar5);
    if (bVar2) {
      this_02 = *(UBehaviorTreeComponent **)(lVar1 + 0x3b8);
      goto LAB_146ef7b33;
    }
  }
  this_02 = (UBehaviorTreeComponent *)0x0;
LAB_146ef7b33:
  if (this_02 != (UBehaviorTreeComponent *)0x0) {
    this_01 = &this[-1]._padding_;
    iVar3 = UBehaviorTreeComponent::FindInstanceContainingNode(this_02,(UBTNode *)this_01);
    puVar6 = UBehaviorTreeComponent::GetNodeMemory(this_02,(UBTNode *)this_01,iVar3);
    this_00 = UBTNode::CastInstanceNodeMemory<FBTGameplayTaskMemory>((UBTNode *)this_01,puVar6);
    if ((((this_00 != (FBTGameplayTaskMemory *)0x0) ||
         (bVar2 = `UBTTask_GameplayTaskBase::OnGameplayTaskDeactivated'::__l9::<lambda_1>::
                  operator()(local_res10), bVar2)) && (this_00->bObserverCanFinishTask != 0)) &&
       (bVar2 = TWeakObjectPtr<UAITask,FWeakObjectPtr>::UEOpEquals<UAITask,bool>
                          (&this_00->Task,(UAITask *)param_1), bVar2)) {
      TVar4 = (**(code **)(*this_01 + 0x328))(this_01,param_1);
      UBTTaskNode::FinishLatentTask((UBTTaskNode *)this_01,this_02,TVar4);
    }
  }
  return;
}

// OnTaskFinished @ 146efa060

void __thiscall
UBTTask_GameplayTaskBase::OnTaskFinished
          (UBTTask_GameplayTaskBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  FBTGameplayTaskMemory *pFVar1;
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTGameplayTaskMemory>((UBTNode *)this,param_2);
  (pFVar1->Task).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// StartGameplayTask @ 146f007c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_GameplayTaskBase::StartGameplayTask
          (UBTTask_GameplayTaskBase *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          UAITask *param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  Type TVar4;
  FBTGameplayTaskMemory *this_00;
  IGameplayTaskOwnerInterface *pIVar5;
  UBTTask_GameplayTaskBase *pUVar6;
  UClass *pUVar7;
  UBTTask_GameplayTaskBase *pUVar8;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pUVar8 = (UBTTask_GameplayTaskBase *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_00 = UBTNode::CastInstanceNodeMemory<FBTGameplayTaskMemory>((UBTNode *)this,param_2);
  this_00->bObserverCanFinishTask = '\0';
  local_res8 = (FName)param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UAITask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  pIVar5 = UGameplayTask::GetTaskOwner((UGameplayTask *)param_3);
  if ((pIVar5 != (IGameplayTaskOwnerInterface *)0x0) &&
     (pUVar6 = (UBTTask_GameplayTaskBase *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5),
     pUVar6 != (UBTTask_GameplayTaskBase *)0x0)) {
    pUVar7 = Z_Construct_UClass_UObject_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_146f00877;
  }
  pUVar6 = pUVar8;
LAB_146f00877:
  if (FVisualLogger::bIsRecording != 0) {
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      cVar2 = (this->bWaitForGameplayTask).DefaultValue;
    }
    else {
      cVar2 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                        ((UBlackboardComponent *)param_1->_padding_,
                         (FName *)&this->bWaitForGameplayTask,
                         (FKey *)&(this->bWaitForGameplayTask)._padding_,
                         &(this->bWaitForGameplayTask).DefaultValue);
    }
    if ((cVar2 != '\0') && (pUVar6 != this)) {
      if (pUVar6 == (UBTTask_GameplayTaskBase *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res8 = (FName)pUVar6->_padding_;
        ::FName::ToString(&local_res8,&local_68);
      }
      pUVar8 = (UBTTask_GameplayTaskBase *)&DAT_00000003;
      ::FString::PrintfImpl(&local_48,L"UNKNOWN (gameplay task owner: %s)");
    }
    local_res8 = (FName)param_3->_padding_;
    ::FName::ToString(&local_res8,&local_58);
    UBehaviorTreeTypes::DescribeNodeHelper(&local_38,(UBTNode *)this);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"%s is ready to execute gameplay task: %s, finish %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pUVar8 & 2) != 0) &&
       (pUVar8 = (UBTTask_GameplayTaskBase *)(ulonglong)((uint)pUVar8 & 0xfffffffd),
       local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pUVar8 & 1) != 0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  UGameplayTask::ReadyForActivation((UGameplayTask *)param_3);
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    bVar3 = (this->bWaitForGameplayTask).DefaultValue;
  }
  else {
    bVar3 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                      ((UBlackboardComponent *)param_1->_padding_,
                       (FName *)&this->bWaitForGameplayTask,
                       (FKey *)&(this->bWaitForGameplayTask)._padding_,
                       &(this->bWaitForGameplayTask).DefaultValue);
  }
  this_00->field_0x8 = this_00->field_0x8 ^ (this_00->bObserverCanFinishTask ^ bVar3) & 1;
  if (*(char *)((longlong)&param_3->_padding_ + 1) != '\x04') {
    return InProgress;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f00a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar4 = (**(code **)(this->_padding_ + 0x328))(this,param_3);
  return TVar4;
}

// StaticRegisterNativesUBTTask_GameplayTaskBase @ 146f00dc0

void __cdecl UBTTask_GameplayTaskBase::StaticRegisterNativesUBTTask_GameplayTaskBase(void)

{
  return;
}

// operator() @ 1504feca0

bool __thiscall
`UBTTask_GameplayTaskBase::OnGameplayTaskDeactivated'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6910068596433485742>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6910068596433485742>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

