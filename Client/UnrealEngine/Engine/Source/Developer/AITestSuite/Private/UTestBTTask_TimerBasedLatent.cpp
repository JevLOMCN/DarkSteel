// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 13

// StaticClass @ 147012450

UClass * __cdecl UTestBTTask_TimerBasedLatent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_TimerBasedLatent",
               &Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.InnerSingleton,
               StaticRegisterNativesUTestBTTask_TimerBasedLatent,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTTask_TimerBasedLatent>,
               InternalVTableHelperCtorCaller<UTestBTTask_TimerBasedLatent>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.InnerSingleton;
}

// UTestBTTask_TimerBasedLatent @ 14704b350

UTestBTTask_TimerBasedLatent * __thiscall
UTestBTTask_TimerBasedLatent::UTestBTTask_TimerBasedLatent
          (UTestBTTask_TimerBasedLatent *this,FVTableHelper *param_1)

{
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,param_1);
  this->LogIndexExecuteStart = -1;
  this->LogIndexExecuteFinish = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->NumTicksExecuting = 0;
  this->NumTicksAborting = 0;
  (this->LogResult).Value = '\0';
  this->LogIndexAbortStart = -1;
  this->LogIndexAbortFinish = -1;
  return this;
}

// UTestBTTask_TimerBasedLatent @ 14704b3b0

UTestBTTask_TimerBasedLatent * __thiscall
UTestBTTask_TimerBasedLatent::UTestBTTask_TimerBasedLatent(UTestBTTask_TimerBasedLatent *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UBTTaskNode::UBTTaskNode((UBTTaskNode *)this,pFVar1);
  this->LogIndexExecuteStart = -1;
  this->LogIndexExecuteFinish = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->LogResult).Value = '\0';
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff9;
  this->NumTicksExecuting = 0;
  this->NumTicksAborting = 0;
  this->LogIndexAbortStart = -1;
  this->LogIndexAbortFinish = -1;
  return this;
}

// ~UTestBTTask_TimerBasedLatent @ 14704bb80

void __thiscall
UTestBTTask_TimerBasedLatent::~UTestBTTask_TimerBasedLatent(UTestBTTask_TimerBasedLatent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// operator() @ 14704bbc0

void __thiscall
`UTestBTTask_TimerBasedLatent::ExecuteTask'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  **(undefined8 **)((longlong)this + 8) = 0;
  if ((*(byte *)(*(longlong *)((longlong)this + 8) + 8) & 1) != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2076779660150046685>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\BehaviorTree\\TestBTTask_TimerBasedLatent.cpp"
                       ,0x23,"!TaskMemory->bIsAborting");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UTestBTTask_TimerBasedLatent::LogExecution
            (*(UTestBTTask_TimerBasedLatent **)((longlong)this + 0x10),
             *(UBehaviorTreeComponent **)this,
             (*(UTestBTTask_TimerBasedLatent **)((longlong)this + 0x10))->LogIndexExecuteFinish);
  UBTTaskNode::FinishLatentTask
            (*(UBTTaskNode **)((longlong)this + 0x10),*(UBehaviorTreeComponent **)this,
             (uint)(byte)(*(UBTTaskNode **)((longlong)this + 0x10))[1]._padding_);
  return;
}

// AbortTask @ 14704f240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall
UTestBTTask_TimerBasedLatent::AbortTask
          (UTestBTTask_TimerBasedLatent *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  FBTTimerBasedLatentTaskMemory *pFVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar2;
  ulong64 uVar3;
  float fVar4;
  UTestBTTask_TimerBasedLatent *local_res8;
  FDelegateAllocation local_48 [2];
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTTimerBasedLatentTaskMemory>((UBTNode *)this,param_2);
  pFVar1->bIsAborting = '\x01';
  LogExecution(this,param_1,this->LogIndexAbortStart);
  if (this->NumTicksAborting == 0) {
    LogExecution(this,param_1,this->LogIndexAbortFinish);
    return Aborted;
  }
  this_00 = (UWorld *)param_1->_padding_;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     this_00 == (UWorld *)0x0)) {
    return InProgress;
  }
  fVar4 = (float)this->NumTicksAborting * __real_3d088889;
  this_01 = UWorld::GetTimerManager(this_00);
  local_48[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48[0].DelegateSize = 0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UTestBTTask_TimerBasedLatent::AbortTask'::`8'::<lambda_1>_>
               ::_vftable_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = param_1;
    puVar2[5] = pFVar1;
    puVar2[6] = this;
  }
  FTimerManager::SetTimer
            (this_01,&pFVar1->TimerHandle,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)local_48,
             fVar4,false,__real_bf800000);
  if ((local_48[0].DelegateSize != 0) &&
     (local_48[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48[0].DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)local_48,0,0,0x10);
    local_48[0].DelegateSize = 0;
  }
  if (local_48[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48[0].DelegateAllocator);
  }
  return InProgress;
}

// CleanupMemory @ 147050980

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
UTestBTTask_TimerBasedLatent::CleanupMemory
          (UTestBTTask_TimerBasedLatent *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  FBTTimerBasedLatentTaskMemory *pFVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar2;
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTTimerBasedLatentTaskMemory>((UBTNode *)this,param_2);
  if ((pFVar1->TimerHandle).Handle != 0) {
    this_00 = (UWorld *)param_1->_padding_;
    if ((this_00 == (UWorld *)0x0) &&
       (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
       this_00 == (UWorld *)0x0)) {
      return;
    }
    this_01 = UWorld::GetTimerManager(this_00);
    pFVar1 = UBTNode::CastInstanceNodeMemory<FBTTimerBasedLatentTaskMemory>((UBTNode *)this,param_2)
    ;
    pFVar2 = FTimerManager::FindTimer(this_01,&pFVar1->TimerHandle);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(pFVar1->TimerHandle).Handle);
    }
    (pFVar1->TimerHandle).Handle = 0;
  }
  return;
}

// ExecuteTask @ 147051f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall
UTestBTTask_TimerBasedLatent::ExecuteTask
          (UTestBTTask_TimerBasedLatent *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  FBTTimerBasedLatentTaskMemory *pFVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar2;
  ulong64 uVar3;
  float fVar4;
  UTestBTTask_TimerBasedLatent *local_res8;
  FDelegateAllocation local_48 [2];
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTTimerBasedLatentTaskMemory>((UBTNode *)this,param_2);
  pFVar1->bIsAborting = '\0';
  LogExecution(this,param_1,this->LogIndexExecuteStart);
  if (this->NumTicksExecuting == 0) {
    LogExecution(this,param_1,this->LogIndexExecuteFinish);
    return (Type)(this->LogResult).Value;
  }
  this_00 = (UWorld *)param_1->_padding_;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     this_00 == (UWorld *)0x0)) {
    return InProgress;
  }
  fVar4 = (float)this->NumTicksExecuting * __real_3d088889;
  this_01 = UWorld::GetTimerManager(this_00);
  local_48[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48[0].DelegateSize = 0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UTestBTTask_TimerBasedLatent::ExecuteTask'::`8'::<lambda_1>_>
               ::_vftable_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = param_1;
    puVar2[5] = pFVar1;
    puVar2[6] = this;
  }
  FTimerManager::SetTimer
            (this_01,&pFVar1->TimerHandle,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)local_48,
             fVar4,false,__real_bf800000);
  if ((local_48[0].DelegateSize != 0) &&
     (local_48[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48[0].DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)local_48,0,0,0x10);
    local_48[0].DelegateSize = 0;
  }
  if (local_48[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48[0].DelegateAllocator);
  }
  return InProgress;
}

// GetInstanceMemorySize @ 147052320

ushort __thiscall
UTestBTTask_TimerBasedLatent::GetInstanceMemorySize(UTestBTTask_TimerBasedLatent *this)

{
  return 0x10;
}

// GetPrivateStaticClass @ 147053230

UClass * __cdecl UTestBTTask_TimerBasedLatent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_TimerBasedLatent",
               &Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.InnerSingleton,
               StaticRegisterNativesUTestBTTask_TimerBasedLatent,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTTask_TimerBasedLatent>,
               InternalVTableHelperCtorCaller<UTestBTTask_TimerBasedLatent>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_TimerBasedLatent.InnerSingleton;
}

// InitializeMemory @ 147053800

void __thiscall
UTestBTTask_TimerBasedLatent::InitializeMemory
          (UTestBTTask_TimerBasedLatent *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  if (param_3 == Initialize) {
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTTimerBasedLatentTaskMemory>((UBTNode *)this,param_2);
  return;
}

// LogExecution @ 147057960

void __thiscall
UTestBTTask_TimerBasedLatent::LogExecution
          (UTestBTTask_TimerBasedLatent *this,UBehaviorTreeComponent *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int local_res18 [4];
  
  if (-1 < param_2) {
    local_res18[0] = param_2;
    if (((UMockAI_BT::ExecutionLog.AllocatorInstance.Data <= (FScriptContainerElement *)local_res18)
        && ((FScriptContainerElement *)local_res18 <
            UMockAI_BT::ExecutionLog.AllocatorInstance.Data +
            (longlong)UMockAI_BT::ExecutionLog.ArrayMax * 4)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (UMockAI_BT::ExecutionLog.ArrayNum == UMockAI_BT::ExecutionLog.ArrayMax) {
      UMockAI_BT::ExecutionLog.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&UMockAI_BT::ExecutionLog.AllocatorInstance,
                      &UMockAI_BT::ExecutionLog.ArrayMax);
    }
    lVar3 = (longlong)UMockAI_BT::ExecutionLog.ArrayNum;
    UMockAI_BT::ExecutionLog.ArrayNum = UMockAI_BT::ExecutionLog.ArrayNum + 1;
    *(int *)(UMockAI_BT::ExecutionLog.AllocatorInstance.Data + lVar3 * 4) = local_res18[0];
  }
  return;
}

// StaticRegisterNativesUTestBTTask_TimerBasedLatent @ 147059a40

void __cdecl UTestBTTask_TimerBasedLatent::StaticRegisterNativesUTestBTTask_TimerBasedLatent(void)

{
  return;
}

