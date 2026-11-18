// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 19

// StaticClass @ 146eb0020

UClass * __cdecl UBTTask_MoveTo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_MoveTo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_MoveTo",
               &Z_Registration_Info_UClass_UBTTask_MoveTo.InnerSingleton,
               StaticRegisterNativesUBTTask_MoveTo,0x160,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_MoveTo>,
               InternalVTableHelperCtorCaller<UBTTask_MoveTo>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_MoveTo.InnerSingleton;
}

// UBTTask_MoveTo @ 146ec9180

UBTTask_MoveTo * __thiscall
UBTTask_MoveTo::UBTTask_MoveTo(UBTTask_MoveTo *this,FVTableHelper *param_1)

{
  UClass *pUVar1;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AcceptableRadius)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined2 *)&(this->AcceptableRadius)._padding_ = 0xffff;
  *(undefined8 *)&(this->AcceptableRadius).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->FilterClass)._padding_ + 4) = 0;
  *(undefined2 *)&(this->FilterClass)._padding_ = 0xffff;
  (this->FilterClass).DefaultValue.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar1 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
  (this->FilterClass).BaseClass.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ObservedBlackboardValueTolerance)._padding_ = 0;
  *(undefined2 *)&(this->ObservedBlackboardValueTolerance)._padding_ = 0xffff;
  *(undefined8 *)&(this->ObservedBlackboardValueTolerance).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->bAllowStrafe)._padding_ + 4) = 0;
  *(undefined2 *)&(this->bAllowStrafe)._padding_ = 0xffff;
  (this->bAllowStrafe).DefaultValue = false;
  (this->bAllowPartialPath)._padding_ = 0;
  *(undefined2 *)&(this->bAllowPartialPath)._padding_ = 0xffff;
  (this->bAllowPartialPath).DefaultValue = false;
  (this->bTrackMovingGoal)._padding_ = 0;
  *(undefined2 *)&(this->bTrackMovingGoal)._padding_ = 0xffff;
  (this->bTrackMovingGoal).DefaultValue = false;
  (this->bRequireNavigableEndLocation)._padding_ = 0;
  *(undefined2 *)&(this->bRequireNavigableEndLocation)._padding_ = 0xffff;
  (this->bRequireNavigableEndLocation).DefaultValue = false;
  (this->bProjectGoalLocation)._padding_ = 0;
  *(undefined2 *)&(this->bProjectGoalLocation)._padding_ = 0xffff;
  (this->bProjectGoalLocation).DefaultValue = false;
  (this->bReachTestIncludesAgentRadius)._padding_ = 0;
  *(undefined2 *)&(this->bReachTestIncludesAgentRadius)._padding_ = 0xffff;
  (this->bReachTestIncludesAgentRadius).DefaultValue = false;
  (this->bReachTestIncludesGoalRadius)._padding_ = 0;
  *(undefined2 *)&(this->bReachTestIncludesGoalRadius)._padding_ = 0xffff;
  (this->bReachTestIncludesGoalRadius).DefaultValue = false;
  (this->bStartFromPreviousPath)._padding_ = 0;
  *(undefined2 *)&(this->bStartFromPreviousPath)._padding_ = 0xffff;
  (this->bStartFromPreviousPath).DefaultValue = false;
  return this;
}

// UBTTask_MoveTo @ 146ec92e0

UBTTask_MoveTo * __thiscall
UBTTask_MoveTo::UBTTask_MoveTo(UBTTask_MoveTo *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_res18;
  FString local_38;
  undefined8 local_28;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  float fStack_1c;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AcceptableRadius)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AcceptableRadius).DefaultValue = 0.0;
  *(undefined2 *)&(this->AcceptableRadius)._padding_ = 0xffff;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FValueOrBBKey_Class::FValueOrBBKey_Class<UNavigationQueryFilter>
            (&this->FilterClass,(TSubclassOf<UNavigationQueryFilter>)&local_res8);
  (this->ObservedBlackboardValueTolerance)._padding_ = 0;
  *(undefined2 *)&(this->ObservedBlackboardValueTolerance)._padding_ = 0xffff;
  *(undefined8 *)&(this->ObservedBlackboardValueTolerance).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->bAllowStrafe)._padding_ + 4) = 0;
  *(undefined2 *)&(this->bAllowStrafe)._padding_ = 0xffff;
  (this->bAllowStrafe).DefaultValue = false;
  (this->bAllowPartialPath)._padding_ = 0;
  *(undefined2 *)&(this->bAllowPartialPath)._padding_ = 0xffff;
  (this->bAllowPartialPath).DefaultValue = false;
  (this->bTrackMovingGoal)._padding_ = 0;
  *(undefined2 *)&(this->bTrackMovingGoal)._padding_ = 0xffff;
  (this->bTrackMovingGoal).DefaultValue = false;
  (this->bRequireNavigableEndLocation)._padding_ = 0;
  *(undefined2 *)&(this->bRequireNavigableEndLocation)._padding_ = 0xffff;
  (this->bRequireNavigableEndLocation).DefaultValue = false;
  (this->bProjectGoalLocation)._padding_ = 0;
  *(undefined2 *)&(this->bProjectGoalLocation)._padding_ = 0xffff;
  (this->bProjectGoalLocation).DefaultValue = false;
  (this->bReachTestIncludesAgentRadius)._padding_ = 0;
  *(undefined2 *)&(this->bReachTestIncludesAgentRadius)._padding_ = 0xffff;
  (this->bReachTestIncludesAgentRadius).DefaultValue = false;
  (this->bReachTestIncludesGoalRadius)._padding_ = 0;
  *(undefined2 *)&(this->bReachTestIncludesGoalRadius)._padding_ = 0xffff;
  (this->bReachTestIncludesGoalRadius).DefaultValue = false;
  (this->bStartFromPreviousPath)._padding_ = 0;
  *(undefined2 *)&(this->bStartFromPreviousPath)._padding_ = 0xffff;
  (this->bStartFromPreviousPath).DefaultValue = false;
  ::FString::FString(&local_38,"Move To");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_38) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_38.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_38.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
  pUVar4 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  fVar2 = *(float *)&(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x20;
  fStack_1c = fVar2 * __real_3f733333;
  *(undefined4 *)&(this->AcceptableRadius)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->AcceptableRadius)._padding_ + 4) = 0;
  (this->AcceptableRadius)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->AcceptableRadius).DefaultValue = fVar2;
  local_28 = 0;
  uStack_20 = 0xffff;
  *(undefined4 *)&(this->ObservedBlackboardValueTolerance)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ObservedBlackboardValueTolerance)._padding_ + 4) = 0;
  (this->ObservedBlackboardValueTolerance)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->ObservedBlackboardValueTolerance).DefaultValue = fStack_1c;
  pUVar4 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  local_28 = 0;
  uStack_20 = 0xffff;
  uVar3 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x4;
  fStack_1c = (float)CONCAT31(fStack_1c._1_3_,uVar3);
  (this->bReachTestIncludesAgentRadius)._padding_ = 0;
  (this->bReachTestIncludesAgentRadius)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bReachTestIncludesAgentRadius).DefaultValue = (bool)uVar3;
  *(uint3 *)&(this->bReachTestIncludesAgentRadius).field_0xd = fStack_1c._1_3_;
  (this->bReachTestIncludesGoalRadius)._padding_ = 0;
  (this->bReachTestIncludesGoalRadius)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bReachTestIncludesGoalRadius).DefaultValue = (bool)uVar3;
  *(uint3 *)&(this->bReachTestIncludesGoalRadius).field_0xd = fStack_1c._1_3_;
  pUVar4 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  local_28 = 0;
  uStack_20 = 0xffff;
  uVar3 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x6;
  fStack_1c = (float)CONCAT31(fStack_1c._1_3_,uVar3);
  (this->bAllowStrafe)._padding_ = 0;
  (this->bAllowStrafe)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bAllowStrafe).DefaultValue = (bool)uVar3;
  *(uint3 *)&(this->bAllowStrafe).field_0xd = fStack_1c._1_3_;
  pUVar4 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  uVar3 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x5;
  this->bUsePathfinding = 1;
  (this->bAllowPartialPath)._padding_ = 0;
  (this->bAllowPartialPath)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bAllowPartialPath).DefaultValue = (bool)uVar3;
  *(uint3 *)&(this->bAllowPartialPath).field_0xd = fStack_1c._1_3_;
  (this->bTrackMovingGoal)._padding_ = 0;
  (this->bTrackMovingGoal)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bTrackMovingGoal).DefaultValue = true;
  *(uint3 *)&(this->bTrackMovingGoal).field_0xd = fStack_1c._1_3_;
  (this->bRequireNavigableEndLocation)._padding_ = 0;
  (this->bRequireNavigableEndLocation)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bRequireNavigableEndLocation).DefaultValue = true;
  *(uint3 *)&(this->bRequireNavigableEndLocation).field_0xd = fStack_1c._1_3_;
  local_28 = 0;
  uStack_20 = 0xffff;
  (this->bProjectGoalLocation)._padding_ = 0;
  (this->bProjectGoalLocation)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bProjectGoalLocation).DefaultValue = true;
  *(uint3 *)&(this->bProjectGoalLocation).field_0xd = fStack_1c._1_3_;
  fStack_1c = (float)((uint)fStack_1c._1_3_ << 8);
  (this->bStartFromPreviousPath)._padding_ = 0;
  (this->bStartFromPreviousPath)._padding_ = CONCAT22(uStack_1e,0xffff);
  (this->bStartFromPreviousPath).DefaultValue = (bool)SUB41(fStack_1c,0);
  *(int3 *)&(this->bStartFromPreviousPath).field_0xd = (int3)((uint)fStack_1c >> 8);
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar5 = ::FName::FName(&local_res18,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar5,
             (TSubclassOf<UObject>)&local_res8);
  pFVar5 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar5);
  return this;
}

// ~UBTTask_MoveTo @ 146ecd5b0

void __thiscall UBTTask_MoveTo::~UBTTask_MoveTo(UBTTask_MoveTo *this)

{
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 146ed17d0

Type __thiscall
UBTTask_MoveTo::AbortTask(UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  longlong *plVar2;
  FBTMoveToTaskMemory *pFVar3;
  UObject *pUVar4;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>((UBTNode *)this,param_2);
  uVar1 = (pFVar3->MoveRequestID).RequestID;
  if (uVar1 == 0xffffffff) {
    pFVar3->bObserverCanFinishTask = '\0';
    pUVar4 = FWeakObjectPtr::Get(&(pFVar3->Task).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x2d0))(pUVar4);
    }
  }
  else if ((param_1->_padding_ != 0) &&
          (plVar2 = *(longlong **)(param_1->_padding_ + 0x3b0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x518))(plVar2,this,0x10,uVar1,0);
    return Aborted;
  }
  return Aborted;
}

// CleanupMemory @ 146ed5f70

void __thiscall
UBTTask_MoveTo::CleanupMemory
          (UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// DescribeRuntimeValues @ 146edc5b0

/* WARNING: Removing unreachable block (ram,0x000146edc76c) */
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
UBTTask_MoveTo::DescribeRuntimeValues
          (UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBTMoveToTaskMemory *pFVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 != (UBlackboardComponent *)0x0) {
    uVar1 = (uint)this->_padding_;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UBlackboardComponent::DescribeKeyValue(this_00,&local_18,(FKey)(ushort)uVar1,OnlyValue);
    pFVar5 = UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>((UBTNode *)this,param_2);
    bVar3 = FWeakObjectPtr::IsValid(&(pFVar5->Task).WeakPtr);
    pwVar6 = L"";
    if (bVar3) {
      pwVar6 = L"(task)";
    }
    ::FString::FString(&local_28,pwVar6);
    ::FString::PrintfImpl(&local_38,L"move target: %s%s");
    pFVar7 = (param_4->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar7 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar4 + 1;
    pFVar7 = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(FScriptContainerElement **)pFVar7 = local_38.Data.AllocatorInstance.Data;
    *(int *)(pFVar7 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar7 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteTask @ 146ee0e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_MoveTo::ExecuteTask(UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  UObject *pUVar2;
  UBlackboardComponent *this_00;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  Type TVar6;
  FBTMoveToTaskMemory *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FDelegateHandle FVar10;
  UBTTask_MoveTo *local_res10 [2];
  undefined1 local_res20 [8];
  FDelegateAllocation local_78;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FString local_58;
  undefined1 local_48;
  undefined8 local_40;
  
  pFVar7 = UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>((UBTNode *)this,param_2);
  uVar4 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (pFVar7->PreviousGoalLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (pFVar7->PreviousGoalLocation).field0_0x0._s_0.Y = (double)uVar4;
  (pFVar7->PreviousGoalLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  (pFVar7->MoveRequestID).RequestID = FAIRequestID::InvalidRequest.RequestID;
  pUVar2 = (UObject *)param_1->_padding_;
  if (pUVar2 == (UObject *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Error,
                 L"UBTTask_MoveTo::ExecuteTask failed since AIController is missing.");
    }
    return Failed;
  }
  TVar6 = (**(code **)(this->_padding_ + 0x328))(this,param_1,param_2);
  if ((TVar6 == InProgress) && (this->bObserveBlackboardValue != 0)) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    if (this_00 == (UBlackboardComponent *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2793099098960429117>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Tasks\\BTTask_MoveTo.cpp"
                         ,0x3d,"BlackboardComp");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        TVar6 = (*pcVar3)();
        return TVar6;
      }
    }
    else {
      if ((pFVar7->BBObserverDelegateHandle).ID != 0) {
        if (FVisualLogger::bIsRecording != 0) {
          UBTNode::GetNodeName((UBTNode *)this,&local_58);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar2,(FName *)&LogBehaviorTree.field_0x4,Warning,
                     L"UBTTask_MoveTo::ExecuteTask \'%s\' Old BBObserverDelegateHandle is still valid! Removing old Observer."
                    );
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        FVar10.ID = (pFVar7->BBObserverDelegateHandle).ID;
        uVar1 = (uint)this->_padding_;
        if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar6 = (*pcVar3)();
          return TVar6;
        }
        UBlackboardComponent::UnregisterObserver(this_00,(FKey)(ushort)uVar1,FVar10);
      }
      local_68 = OnBlackboardValueChange;
      uStack_5c = local_40._4_4_;
      local_48 = 0;
      local_40 = &local_78;
      uStack_60 = 0;
      local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_78.DelegateSize = 0;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_78);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_MoveTo____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[3] = 0;
        local_res10[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)local_res10);
        puVar8[4] = local_68;
        puVar8[5] = CONCAT44(uStack_5c,uStack_60);
      }
      uVar1 = (uint)this->_padding_;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5
         )) {
        pcVar3 = (code *)swi(3);
        TVar6 = (*pcVar3)();
        return TVar6;
      }
      FVar10 = UBlackboardComponent::RegisterObserver
                         (this_00,(FKey)(ushort)local_res20,(UObject *)(ulonglong)(ushort)uVar1,
                          (TDelegate<EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
                           *)this);
                    /* WARNING: Load size is inaccurate */
      (pFVar7->BBObserverDelegateHandle).ID = *FVar10.ID;
    }
  }
  return TVar6;
}

// GetInstanceMemorySize @ 146ee5ad0

ushort __thiscall UBTTask_MoveTo::GetInstanceMemorySize(UBTTask_MoveTo *this)

{
  return 0x38;
}

// GetPrivateStaticClass @ 146ee8a60

UClass * __cdecl UBTTask_MoveTo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_MoveTo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_MoveTo",
               &Z_Registration_Info_UClass_UBTTask_MoveTo.InnerSingleton,
               StaticRegisterNativesUBTTask_MoveTo,0x160,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_MoveTo>,
               InternalVTableHelperCtorCaller<UBTTask_MoveTo>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_MoveTo.InnerSingleton;
}

// GetStaticDescription @ 146eecb20

FString * __thiscall
UBTTask_MoveTo::GetStaticDescription(UBTTask_MoveTo *this,FString *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  UClass *pUVar7;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,"invalid");
  lVar2 = this->_padding_;
  pUVar7 = (UClass *)0x0;
  pUVar5 = pUVar7;
  if ((lVar2 != 0) && (pUVar4 = UBlackboardKeyType::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (UClass *)this->_padding_;
    }
  }
  pUVar4 = UBlackboardKeyType_Object::StaticClass();
  if (pUVar5 != pUVar4) {
    lVar2 = this->_padding_;
    if ((lVar2 != 0) && (pUVar5 = UBlackboardKeyType::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar7 = (UClass *)this->_padding_;
      }
    }
    pUVar5 = UBlackboardKeyType_Vector::StaticClass();
    if (pUVar7 != pUVar5) goto LAB_146eecc46;
  }
  pFVar6 = ::FName::ToString((FName *)&this->_padding_,&local_18);
  if (&local_28 != pFVar6) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_146eecc46:
  UBehaviorTreeTypes::GetShortTypeName(&local_18,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef2fe0

void __thiscall
UBTTask_MoveTo::InitializeMemory
          (UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  if (param_3 == Initialize) {
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[0x30] = '\0';
    param_2[0x31] = '\0';
    param_2[0x32] = '\0';
    param_2[0x33] = '\0';
    param_2[0x34] = '\0';
    param_2[0x35] = '\0';
    param_2[0x36] = '\0';
    param_2[0x37] = '\0';
    param_2[0] = 0xff;
    param_2[1] = 0xff;
    param_2[2] = 0xff;
    param_2[3] = 0xff;
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x28] = '\0';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>((UBTNode *)this,param_2);
  return;
}

// OnBlackboardValueChange @ 146ef6b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
UBTTask_MoveTo::OnBlackboardValueChange
          (UBTTask_MoveTo *this,UBlackboardComponent *param_1,FKey param_2)

{
  uint uVar1;
  UBehaviorTreeComponent *this_00;
  UObject *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  EBlackboardNotificationResult EVar10;
  int iVar11;
  Type TVar12;
  Type TVar13;
  UClass *pUVar14;
  uchar *puVar15;
  FBTMoveToTaskMemory *pFVar16;
  UClass *pUVar17;
  float fVar18;
  FString local_78;
  TVector<double>_u_0 local_68 [3];
  
  this_00 = (UBehaviorTreeComponent *)(param_1->BrainComp).field0_0x0.DebugPtr;
  if (this_00 == (UBehaviorTreeComponent *)0x0) {
    return RemoveObserver;
  }
  pUVar14 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
  iVar11 = (int)pUVar14->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar11) {
    return RemoveObserver;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8)
      != &pUVar14->_padding_) {
    return RemoveObserver;
  }
  pUVar2 = (UObject *)this_00->_padding_;
  iVar11 = UBehaviorTreeComponent::FindInstanceContainingNode(this_00,(UBTNode *)this);
  puVar15 = UBehaviorTreeComponent::GetNodeMemory(this_00,(UBTNode *)this,iVar11);
  pFVar16 = UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>((UBTNode *)this,puVar15);
  TVar12 = UBehaviorTreeComponent::GetTaskStatus(this_00,(UBTTaskNode *)this);
  if (TVar12 != Active) {
    if (FVisualLogger::bIsRecording != 0) {
      UBTNode::GetNodeName((UBTNode *)this,&local_78);
      FVisualLogger::CategorizedLogfImpl
                (pUVar2,(FName *)&LogBehaviorTree.field_0x4,Error,
                 L"BT MoveTo \'%s\' task observing BB entry while no longer being active!");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    (pFVar16->BBObserverDelegateHandle).ID = 0;
    return RemoveObserver;
  }
  if (pFVar16 == (FBTMoveToTaskMemory *)0x0) {
    return ContinueObserving;
  }
  if (this_00->_padding_ == 0) {
    return ContinueObserving;
  }
  if ((*(longlong *)(this_00->_padding_ + 0x3b0) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BehaviorComp->GetAIOwner()->GetPathFollowingComponent()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Tasks\\BTTask_MoveTo.cpp"
                         ,0xcb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    EVar10 = (*pcVar5)();
    return EVar10;
  }
  lVar3 = this->_padding_;
  if ((lVar3 != 0) && (pUVar14 = UBlackboardKeyType::StaticClass(), pUVar14 != (UClass *)0x0)) {
    iVar11 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar14->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      pUVar14 = (UClass *)this->_padding_;
      goto LAB_146ef6d0a;
    }
  }
  pUVar14 = (UClass *)0x0;
LAB_146ef6d0a:
  pUVar17 = UBlackboardKeyType_Vector::StaticClass();
  if (pUVar14 == pUVar17) {
    uVar1 = (uint)this->_padding_;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9))
    {
      pcVar5 = (code *)swi(3);
      EVar10 = (*pcVar5)();
      return EVar10;
    }
    UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
              (param_1,(TVector<double> *)&local_68[0]._s_0,(FKey)(ushort)uVar1);
    dVar7 = (pFVar16->PreviousGoalLocation).field0_0x0._s_0.X - (double)local_68[0]._0_8_;
    dVar8 = (pFVar16->PreviousGoalLocation).field0_0x0._s_0.Y - (double)local_68[0]._8_8_;
    dVar6 = (pFVar16->PreviousGoalLocation).field0_0x0._s_0.Z - (double)local_68[0]._16_8_;
    fVar18 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                       (param_1,(FName *)&this->ObservedBlackboardValueTolerance,
                        (FKey *)&(this->ObservedBlackboardValueTolerance)._padding_,
                        &(this->ObservedBlackboardValueTolerance).DefaultValue);
    if (dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6 <= (double)(fVar18 * fVar18)) {
      return ContinueObserving;
    }
  }
  if ((pFVar16->MoveRequestID).RequestID != 0xffffffff) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                (pUVar2,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Blackboard value for goal has changed, aborting current move request");
    }
    UBehaviorTreeComponent::UnregisterMessageObserversFrom(this_00,(UBTTaskNode *)this);
    plVar4 = *(longlong **)(this_00->_padding_ + 0x3b0);
    (**(code **)(*plVar4 + 0x518))(plVar4,this,0x80,(pFVar16->MoveRequestID).RequestID,1);
  }
  TVar13 = (**(code **)(this->_padding_ + 0x328))(this,this_00,puVar15);
  if (TVar13 != InProgress) {
    UBTTaskNode::FinishLatentTask((UBTTaskNode *)this,this_00,TVar13);
  }
  return ContinueObserving;
}

// OnGameplayTaskDeactivated @ 146ef7bd0

void __thiscall
UBTTask_MoveTo::OnGameplayTaskDeactivated(UBTTask_MoveTo *this,UGameplayTask *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  uchar *puVar5;
  FBTMoveToTaskMemory *pFVar6;
  FValueOrBBKey_Bool *this_00;
  UBehaviorTreeComponent *this_01;
  
  if (param_1 != (UGameplayTask *)0x0) {
    pUVar4 = Z_Construct_UClass_UAITask_MoveTo_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar4->_padding_)) && (param_1[1]._padding_ != 0)) && (param_1->TaskState != Paused)) {
      pUVar4 = Z_Construct_UClass_UAITask_NoRegister();
      iVar3 = (int)pUVar4->_padding_;
      if (((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar4->_padding_)) && (lVar1 = param_1[1]._padding_, lVar1 != 0)) {
        this_01 = (UBehaviorTreeComponent *)0x0;
        if (*(longlong *)(lVar1 + 0x3b8) != 0) {
          pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
          bVar2 = FObjectPtr::IsA((FObjectPtr *)(lVar1 + 0x3b8),pUVar4);
          if (bVar2) {
            this_01 = *(UBehaviorTreeComponent **)(lVar1 + 0x3b8);
          }
        }
        if (this_01 != (UBehaviorTreeComponent *)0x0) {
          this_00 = &this[-1].bReachTestIncludesGoalRadius;
          iVar3 = UBehaviorTreeComponent::FindInstanceContainingNode(this_01,(UBTNode *)this_00);
          puVar5 = UBehaviorTreeComponent::GetNodeMemory(this_01,(UBTNode *)this_00,iVar3);
          pFVar6 = UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>((UBTNode *)this_00,puVar5);
          if (((pFVar6 != (FBTMoveToTaskMemory *)0x0) && (pFVar6->bObserverCanFinishTask != 0)) &&
             (bVar2 = TWeakObjectPtr<UAITask_MoveTo,FWeakObjectPtr>::UEOpEquals<UAITask_MoveTo,bool>
                                (&pFVar6->Task,(UAITask_MoveTo *)param_1), bVar2)) {
            UBTTaskNode::FinishLatentTask
                      ((UBTTaskNode *)this_00,this_01,
                       (uint)(*(char *)&param_1[2].DebugDescription.Data.AllocatorInstance.Data !=
                             '\0'));
          }
        }
      }
    }
  }
  return;
}

// OnMessage @ 146ef8150

void __thiscall
UBTTask_MoveTo::OnMessage
          (UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,uchar *param_2,FName param_3,
          int param_4,bool param_5)

{
  Type TVar1;
  UBTTaskNode *pUVar2;
  Type TVar3;
  bool bVar4;
  
  bVar4 = param_3 == UBrainComponent::AIMessage_RepathFailed;
  TVar1 = UBehaviorTreeComponent::GetTaskStatus(param_1,(UBTTaskNode *)this);
  if (TVar1 == Active) {
    pUVar2 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
    TVar3 = (uint)param_5 & (bVar4 ^ Failed) ^ Failed;
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

// OnTaskFinished @ 146efa080

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
UBTTask_MoveTo::OnTaskFinished
          (UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  FDelegateHandle FVar2;
  code *pcVar3;
  bool bVar4;
  FBTMoveToTaskMemory *pFVar5;
  
  pFVar5 = UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>((UBTNode *)this,param_2);
  (pFVar5->Task).WeakPtr = (FWeakObjectPtr)0x0;
  if (this->bObserveBlackboardValue != 0) {
    this_00 = (UBlackboardComponent *)param_1->_padding_;
    if (this_00 == (UBlackboardComponent *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2793099098960429323>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Tasks\\BTTask_MoveTo.cpp"
                         ,0x10b,"BlackboardComp");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      FVar2.ID = (pFVar5->BBObserverDelegateHandle).ID;
      if (FVar2.ID != 0) {
        uVar1 = (uint)this->_padding_;
        if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UBlackboardComponent::UnregisterObserver(this_00,(FKey)(ushort)uVar1,FVar2);
      }
    }
    (pFVar5->BBObserverDelegateHandle).ID = 0;
  }
  return;
}

// PerformMoveTask @ 146efa220

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

Type __thiscall
UBTTask_MoveTo::PerformMoveTask(UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  uint uVar2;
  UBlackboardComponent *this_00;
  UObject *pUVar3;
  longlong lVar4;
  USceneComponent *pUVar5;
  code *pcVar6;
  bool bVar7;
  Type TVar8;
  FBTMoveToTaskMemory *pFVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  AActor *pAVar13;
  UObject *pUVar14;
  UAITask_MoveTo *this_01;
  TObjectPtr<UClass>_u_0 local_res20;
  FAIMoveRequest local_158;
  FName local_108;
  FName local_100;
  UAITask_MoveTo *local_f8;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TVector<double>_u_0 local_b8;
  TObjectPtr<UClass>_u_0 local_a0;
  TObjectPtr<UClass>_u_0 local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  TVector<double>_u_0 local_50;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  pFVar9 = UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>((UBTNode *)this,param_2);
  pUVar3 = (UObject *)param_1->_padding_;
  TVar8 = Failed;
  if (pUVar3 == (UObject *)0x0) {
    return Failed;
  }
  if (this_00 == (UBlackboardComponent *)0x0) {
    return Failed;
  }
  local_res20 = (this->FilterClass).DefaultValue.field0_0x0;
  TVar10.DebugPtr =
       FBlackboard::GetValue<UBlackboardKeyType_Class>
                 (this_00,(FName *)&this->FilterClass,(FKey *)&(this->FilterClass)._padding_,
                  &local_res20.DebugPtr);
  bVar7 = true;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (TVar10.DebugPtr == (UClass *)0x0)) {
    FAIMoveRequest::FAIMoveRequest(&local_158);
    if (TVar10.DebugPtr != (UClass *)0x0) goto LAB_146efa2d4;
LAB_146efa313:
    TVar10 = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)&pUVar3[0x18].field_0x18;
    local_98 = TVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar10.DebugPtr != (UClass *)0x0) {
LAB_146efa32c:
        UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar10.DebugPtr != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar10.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
        }
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
    FAIMoveRequest::FAIMoveRequest(&local_158);
LAB_146efa2d4:
    pUVar11 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_146efa313;
    iVar1 = (int)pUVar11->_padding_;
    if (((int)(TVar10.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar10.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    if (!bVar7) goto LAB_146efa313;
    local_a0.DebugPtr = TVar10.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) goto LAB_146efa32c;
  }
  local_158.FilterClass.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar10;
  bVar7 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                    (this_00,(FName *)&this->bAllowPartialPath,
                     (FKey *)&(this->bAllowPartialPath)._padding_,
                     &(this->bAllowPartialPath).DefaultValue);
  local_158._40_4_ = (uint)bVar7 << 3 | local_158._40_4_ & 0xfffffff7;
  local_158.AcceptanceRadius =
       FBlackboard::GetValue<UBlackboardKeyType_Float>
                 (this_00,(FName *)&this->AcceptableRadius,
                  (FKey *)&(this->AcceptableRadius)._padding_,&(this->AcceptableRadius).DefaultValue
                 );
  bVar7 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                    (this_00,(FName *)&this->bAllowStrafe,(FKey *)&(this->bAllowStrafe)._padding_,
                     &(this->bAllowStrafe).DefaultValue);
  local_158._40_4_ = (uint)bVar7 << 10 | local_158._40_4_ & 0xfffffbff;
  bVar7 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                    (this_00,(FName *)&this->bReachTestIncludesAgentRadius,
                     (FKey *)&(this->bReachTestIncludesAgentRadius)._padding_,
                     &(this->bReachTestIncludesAgentRadius).DefaultValue);
  local_158._40_4_ = (uint)bVar7 << 8 | local_158._40_4_ & 0xfffffeff;
  bVar7 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                    (this_00,(FName *)&this->bReachTestIncludesGoalRadius,
                     (FKey *)&(this->bReachTestIncludesGoalRadius)._padding_,
                     &(this->bReachTestIncludesGoalRadius).DefaultValue);
  local_158._40_4_ = (uint)bVar7 << 9 | local_158._40_4_ & 0xfffffdff;
  bVar7 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                    (this_00,(FName *)&this->bRequireNavigableEndLocation,
                     (FKey *)&(this->bRequireNavigableEndLocation)._padding_,
                     &(this->bRequireNavigableEndLocation).DefaultValue);
  local_158._40_4_ = (uint)bVar7 << 4 | local_158._40_4_ & 0xffffffef;
  bVar7 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                    (this_00,(FName *)&this->bProjectGoalLocation,
                     (FKey *)&(this->bProjectGoalLocation)._padding_,
                     &(this->bProjectGoalLocation).DefaultValue);
  local_158._40_4_ = (this->bUsePathfinding | (uint)bVar7 << 4) << 2 | local_158._40_4_ & 0xffffffbb
  ;
  bVar7 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                    (this_00,(FName *)&this->bStartFromPreviousPath,
                     (FKey *)&(this->bStartFromPreviousPath)._padding_,
                     &(this->bStartFromPreviousPath).DefaultValue);
  lVar4 = this->_padding_;
  local_158._40_4_ = (uint)bVar7 << 7 | local_158._40_4_ & 0xffffff7f;
  if ((lVar4 == 0) || (pUVar11 = UBlackboardKeyType::StaticClass(), pUVar11 == (UClass *)0x0)) {
LAB_146efa500:
    pUVar11 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_146efa500;
    pUVar11 = (UClass *)this->_padding_;
  }
  pUVar12 = UBlackboardKeyType_Object::StaticClass();
  if (pUVar11 == pUVar12) {
    uVar2 = (uint)this->_padding_;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar6 = (code *)swi(3);
      TVar8 = (*pcVar6)();
      return TVar8;
    }
    pAVar13 = (AActor *)
              UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(this_00,(FKey)(ushort)uVar2)
    ;
    if (pAVar13 != (AActor *)0x0) {
      pUVar11 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar11->_padding_;
      if ((iVar1 <= *(int *)(pAVar13->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar11->_padding_)) {
        bVar7 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                          (this_00,(FName *)&this->bTrackMovingGoal,
                           (FKey *)&(this->bTrackMovingGoal)._padding_,
                           &(this->bTrackMovingGoal).DefaultValue);
        if (bVar7) {
          FAIMoveRequest::SetGoalActor(&local_158,pAVar13);
        }
        else {
          pUVar5 = (pAVar13->RootComponent).field0_0x0.DebugPtr;
          local_50._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_50._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          local_50._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          local_50._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_50._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (pUVar5 != (USceneComponent *)0x0) {
            local_50._0_4_ = *(undefined4 *)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64;
            local_50._4_4_ =
                 *(undefined4 *)((longlong)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 4);
            local_50._8_4_ =
                 *(undefined4 *)((pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 1);
            local_50._12_4_ =
                 *(undefined4 *)
                  ((longlong)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
            local_50._s_0.Z = (pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[0];
          }
          FAIMoveRequest::SetGoalLocation(&local_158,(TVector<double> *)&local_50._s_0);
        }
        goto LAB_146efa72a;
      }
    }
    if (FVisualLogger::bIsRecording != 0) {
      ::FName::ToString((FName *)&this->_padding_,&local_90);
      FVisualLogger::CategorizedLogfImpl
                (pUVar3,(FName *)&LogBehaviorTree.field_0x4,Warning,
                 L"UBTTask_MoveTo::ExecuteTask tried to go to actor while BB %s entry was empty");
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_146efa72a;
  }
  lVar4 = this->_padding_;
  if ((lVar4 == 0) || (pUVar11 = UBlackboardKeyType::StaticClass(), pUVar11 == (UClass *)0x0)) {
LAB_146efa6af:
    pUVar11 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_146efa6af;
    pUVar11 = (UClass *)this->_padding_;
  }
  pUVar12 = UBlackboardKeyType_Vector::StaticClass();
  if (pUVar11 == pUVar12) {
    uVar2 = (uint)this->_padding_;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar6 = (code *)swi(3);
      TVar8 = (*pcVar6)();
      return TVar8;
    }
    UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
              (this_00,(TVector<double> *)&local_b8._s_0,(FKey)(ushort)uVar2);
    FAIMoveRequest::SetGoalLocation(&local_158,(TVector<double> *)&local_b8._s_0);
    (pFVar9->PreviousGoalLocation).field0_0x0._s_0.X = local_b8._s_0.X;
    (pFVar9->PreviousGoalLocation).field0_0x0._s_0.Y = local_b8._s_0.Y;
    (pFVar9->PreviousGoalLocation).field0_0x0._s_0.Z = local_b8._s_0.Z;
  }
LAB_146efa72a:
  if ((local_158.bInitialized != 0) &&
     ((local_158.bMoveToActor == 0 ||
      (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_158), bVar7)))) {
    pUVar14 = FWeakObjectPtr::Get(&(pFVar9->Task).WeakPtr);
    this_01 = (UAITask_MoveTo *)
              (**(code **)(this->_padding_ + 0x330))(this,param_1,pUVar14,&local_158);
    if (this_01 != (UAITask_MoveTo *)0x0) {
      pFVar9->bObserverCanFinishTask = '\0';
      if (pUVar14 == (UObject *)0x0) {
        local_f8 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FWeakObjectPtr::operator=(&(pFVar9->Task).WeakPtr,(FObjectPtr)&local_f8);
        if (FVisualLogger::bIsRecording != 0) {
          local_f0 = (FName)this_01->_padding_;
          ::FName::ToString(&local_f0,&local_c8);
          UBTNode::GetNodeName((UBTNode *)this,&local_60);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar3,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                     L"\'%s\' task implementing move with task %s");
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        UGameplayTask::ReadyForActivation((UGameplayTask *)this_01);
      }
      else if (*(char *)((longlong)&this_01->_padding_ + 1) == '\x03') {
        if (FVisualLogger::bIsRecording != 0) {
          local_108 = (FName)this_01->_padding_;
          ::FName::ToString(&local_108,&local_e8);
          UBTNode::GetNodeName((UBTNode *)this,&local_80);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar3,(FName *)&LogBehaviorTree.field_0x4,Verbose,L"\'%s\' reusing AITask %s")
          ;
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
        UAITask_MoveTo::ConditionalPerformMove(this_01);
      }
      else if (FVisualLogger::bIsRecording != 0) {
        local_100 = (FName)this_01->_padding_;
        ::FName::ToString(&local_100,&local_d8);
        UBTNode::GetNodeName((UBTNode *)this,&local_70);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar3,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                   L"\'%s\' reusing AITask %s, but task is not active - handing over move performing to task mechanics"
                  );
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar9->bObserverCanFinishTask = '\x01';
      if (*(char *)((longlong)&this_01->_padding_ + 1) == '\x04') {
        TVar8 = (Type)((this_01->MoveResult).Value != '\0');
      }
      else {
        TVar8 = InProgress;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.UserData.SharedReferenceCount.ReferenceController);
  return TVar8;
}

// PrepareMoveTask @ 146efbad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAITask_MoveTo * __thiscall
UBTTask_MoveTo::PrepareMoveTask
          (UBTTask_MoveTo *this,UBehaviorTreeComponent *param_1,UAITask_MoveTo *param_2,
          FAIMoveRequest *param_3)

{
  byte *pbVar1;
  AAIController *pAVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  UAITask_MoveTo *pUVar6;
  FName *pFVar7;
  UClass *pUVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  FName local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 == (UAITask_MoveTo *)0x0) {
    if ((param_1->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BTComponent.GetAIOwner()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                           ,0xcb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (UAITask_MoveTo *)(*pcVar4)();
      return pUVar6;
    }
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 | 8;
    pFVar7 = ::FName::FName(&local_e0,L"Behavior");
    pAVar2 = (AAIController *)param_1->_padding_;
    FVar3 = *pFVar7;
    pUVar8 = Z_Construct_UClass_UAITask_MoveTo_NoRegister();
    local_e8 = 0;
    pUVar9 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UAITask_MoveTo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar10,pUVar8);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar8);
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_d8._16_4_ = 0;
    local_d8._20_4_ = 0;
    local_d8._24_4_ = RF_NoFlags;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_d8._8_8_ = pUVar9;
    param_2 = (UAITask_MoveTo *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar11 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    param_2->_padding_ = (longlong)FVar3;
    UAITask::InitAITask((UAITask *)param_2,pAVar2,(IGameplayTaskOwnerInterface *)&this->_padding_);
    if (param_2 == (UAITask_MoveTo *)0x0) {
      return (UAITask_MoveTo *)0x0;
    }
  }
  UAITask_MoveTo::SetUp(param_2,(AAIController *)param_2->_padding_,param_3);
  return param_2;
}

// StaticRegisterNativesUBTTask_MoveTo @ 146f00df0

void __cdecl UBTTask_MoveTo::StaticRegisterNativesUBTTask_MoveTo(void)

{
  return;
}

