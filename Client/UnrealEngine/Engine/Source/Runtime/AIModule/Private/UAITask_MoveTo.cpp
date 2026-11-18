// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 23

// StaticClass @ 146fe8c80

UClass * __cdecl UAITask_MoveTo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_MoveTo",
               &Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton,
               StaticRegisterNativesUAITask_MoveTo,0x160,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAITask_MoveTo>,
               InternalVTableHelperCtorCaller<UAITask_MoveTo>,local_res8,UAITask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton;
}

// UAITask_MoveTo @ 146febf40

UAITask_MoveTo * __thiscall
UAITask_MoveTo::UAITask_MoveTo(UAITask_MoveTo *this,FVTableHelper *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  *(undefined8 *)&(this->OnMoveTaskFinished).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnMoveTaskFinished = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&(this->OnMoveTaskFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoveTaskFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnRequestFailed = 0;
  *(undefined8 *)&(this->OnRequestFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestFailed).field_0x10 = 0;
  *(undefined8 *)&this->OnMoveFinished = 0;
  *(undefined8 *)&(this->OnMoveFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoveFinished).field_0x10 = 0;
  FAIMoveRequest::FAIMoveRequest(&this->MoveRequest);
  (this->PathFinishDelegateHandle).ID = 0;
  (this->PathUpdateDelegateHandle).ID = 0;
  (this->MoveRetryTimerHandle).Handle = 0;
  (this->PathRetryTimerHandle).Handle = 0;
  (this->MoveRequestID).RequestID = 0xffffffff;
  (this->Path).Object = (FNavigationPath *)0x0;
  (this->Path).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAITask_MoveTo @ 146fec010

UAITask_MoveTo * __thiscall
UAITask_MoveTo::UAITask_MoveTo(UAITask_MoveTo *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  uint uVar2;
  UClass *pUVar3;
  UClass *local_res8;
  
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0x7f;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnMoveTaskFinished = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&(this->OnMoveTaskFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoveTaskFinished).field_0x10 = 0;
  *(undefined8 *)&(this->OnMoveTaskFinished).field_0x18 = 2;
  *(undefined8 *)&this->OnRequestFailed = 0;
  *(undefined8 *)&(this->OnRequestFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestFailed).field_0x10 = 0;
  *(undefined8 *)&this->OnMoveFinished = 0;
  *(undefined8 *)&(this->OnMoveFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoveFinished).field_0x10 = 0;
  FAIMoveRequest::FAIMoveRequest(&this->MoveRequest);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 8;
  (this->MoveRequestID).RequestID = 0xffffffff;
  (this->PathFinishDelegateHandle).ID = 0;
  (this->PathUpdateDelegateHandle).ID = 0;
  (this->MoveRetryTimerHandle).Handle = 0;
  (this->PathRetryTimerHandle).Handle = 0;
  (this->Path).Object = (FNavigationPath *)0x0;
  (this->Path).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MoveRequestID).RequestID = FAIRequestID::InvalidRequest.RequestID;
  pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  (this->MoveRequest).AcceptanceRadius =
       *(float *)&(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x20;
  pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  uVar2 = *(uint *)&(this->MoveRequest).field_0x28;
  *(uint *)&(this->MoveRequest).field_0x28 =
       ((uint)(byte)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x4 << 8 ^ uVar2) &
       0x100 ^ uVar2;
  pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  uVar2 = *(uint *)&(this->MoveRequest).field_0x28;
  *(uint *)&(this->MoveRequest).field_0x28 =
       ((uint)(byte)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x5 << 3 ^ uVar2) & 8
       ^ uVar2 | 4;
  local_res8 = Z_Construct_UClass_UAIResource_Movement_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  UGameplayTask::AddRequiredResource
            ((UGameplayTask *)this,(TSubclassOf<UGameplayTaskResource>)&local_res8);
  local_res8 = Z_Construct_UClass_UAIResource_Movement_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  UGameplayTask::AddClaimedResource
            ((UGameplayTask *)this,(TSubclassOf<UGameplayTaskResource>)&local_res8);
  this->bUseContinuousTracking = '\0';
  (this->MoveResult).Value = '\x05';
  return this;
}

// ~UAITask_MoveTo @ 146fec850

void __thiscall UAITask_MoveTo::~UAITask_MoveTo(UAITask_MoveTo *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Path).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MoveRequest).UserData.SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnMoveFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoveFinished);
  pvVar1 = *(void **)&(this->OnRequestFailed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRequestFailed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoveTaskFinished).field_0x8,*(int *)&(this->OnMoveTaskFinished).field_0x10);
  pvVar1 = *(void **)&(this->OnMoveTaskFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoveTaskFinished);
  this->_padding_ = (longlong)&UAITask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UAITask::_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  return;
}

// AIMoveTo @ 146fed240

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAITask_MoveTo * __cdecl
UAITask_MoveTo::AIMoveTo
          (AAIController *param_1,TVector<double> *param_2,AActor *param_3,float param_4,
          Type param_5,Type param_6,bool param_7,bool param_8,bool param_9,Type param_10,
          Type param_11)

{
  undefined1 *puVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  TReferenceControllerBase<1> *pTVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UAITask_MoveTo *this;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_158 [32];
  UClass *local_138 [2];
  FAIMoveRequest local_128;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_1 == (AAIController *)0x0) {
    this = (UAITask_MoveTo *)0x0;
  }
  else {
    pUVar4 = StaticClass();
    local_138[0] = (UClass *)0x0;
    pUVar5 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = StaticClass();
    CheckIsClassChildOf_Internal(pUVar6,pUVar4);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar4);
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_d8._16_4_ = 0;
    local_d8._20_4_ = 0;
    local_d8._24_4_ = RF_NoFlags;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_d8._8_8_ = pUVar5;
    this = (UAITask_MoveTo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar8 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    *(FNameEntryId *)&this->_padding_ = 0;
    *(uint *)((longlong)&this->_padding_ + 4) = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this->_padding_ = (longlong)param_1;
    UGameplayTask::InitTask
              ((UGameplayTask *)this,(IGameplayTaskOwnerInterface *)&param_1->_padding_,0xc0);
    FAIMoveRequest::FAIMoveRequest(&local_128);
    if (param_3 == (AActor *)0x0) {
      FAIMoveRequest::SetGoalLocation(&local_128,param_2);
    }
    else {
      FAIMoveRequest::SetGoalActor(&local_128,param_3);
    }
    if (param_5 == Default) {
      uVar9 = (uint)local_128._40_4_ >> 8;
    }
    else {
      uVar9 = (uint)(param_5 == Enable);
    }
    if (param_6 == Default) {
      uVar7 = (local_128._40_4_ & 0xfffffeff) >> 3;
    }
    else {
      uVar7 = (uint)(param_6 == Enable);
    }
    uVar9 = (uVar9 & 1) << 8 | local_128._40_4_ & 0xfffffef3;
    local_128._40_4_ = ((uVar7 & 1) * 2 | (uint)param_7) << 2 | uVar9;
    if (param_10 == Default) {
      uVar9 = uVar9 >> 6;
    }
    else {
      uVar9 = (uint)(param_10 == Enable);
    }
    local_128._40_4_ = (uVar9 << 6 ^ local_128._40_4_) & 0x40 ^ local_128._40_4_;
    if (param_11 == Default) {
      uVar9 = (uint)local_128._40_4_ >> 4;
    }
    else {
      uVar9 = (uint)(param_11 == Enable);
    }
    local_128._40_4_ = (uVar9 << 4 ^ local_128._40_4_) & 0x10 ^ local_128._40_4_;
    TVar2 = (TObjectPtr<UClass>_u_0)
            (param_1->DefaultNavigationFilterClass).Class.field0_0x0.DebugPtr;
    local_128.AcceptanceRadius = param_4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar2.DebugPtr != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
    }
    local_128.bCanStrafe = param_1->bAllowStrafe;
    local_128.FilterClass.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this->_padding_ = (longlong)param_1;
    (this->MoveRequest).GoalLocation.field0_0x0._s_0.X = local_128.GoalLocation.field0_0x0._s_0.X;
    (this->MoveRequest).GoalLocation.field0_0x0._s_0.Y = local_128.GoalLocation.field0_0x0._s_0.Y;
    (this->MoveRequest).GoalActor.WeakPtr = local_128.GoalActor.WeakPtr;
    (this->MoveRequest).GoalLocation.field0_0x0._s_0.Z = local_128.GoalLocation.field0_0x0._s_0.Z;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_128.FilterClass.Class.field0_0x0.DebugPtr != (TObjectPtr<UClass>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_128.FilterClass.Class.field0_0x0);
    }
    (this->MoveRequest).FilterClass.Class.field0_0x0.DebugPtr =
         (UClass *)local_128.FilterClass.Class.field0_0x0;
    (this->MoveRequest).bInitialized = 0;
    (this->MoveRequest).bCanStrafe = 0;
    (this->MoveRequest).bReachTestIncludesGoalRadius = 0;
    (this->MoveRequest).bReachTestIncludesAgentRadius = 0;
    (this->MoveRequest).bStartFromPreviousPath = 0;
    (this->MoveRequest).bProjectGoalOnNavigation = 0;
    (this->MoveRequest).bApplyCostLimitFromHeuristic = 0;
    (this->MoveRequest).bRequireNavigableEndLocation = 0;
    (this->MoveRequest).bAllowPartialPath = 0;
    (this->MoveRequest).bUsePathfinding = 0;
    (this->MoveRequest).bMoveToActor = 0;
    puVar1 = &(this->MoveRequest).field_0x28;
    *(uint *)puVar1 = *(uint *)puVar1 | local_128._40_4_ & 0x7ff;
    (this->MoveRequest).AcceptanceRadius = local_128.AcceptanceRadius;
    (this->MoveRequest).CostLimitFactor = local_128.CostLimitFactor;
    (this->MoveRequest).MinimumCostLimit = local_128.MinimumCostLimit;
    if (local_128.UserData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.UserData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.UserData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    pTVar3 = (this->MoveRequest).UserData.SharedReferenceCount.ReferenceController;
    (this->MoveRequest).UserData.Object = local_128.UserData.Object;
    (this->MoveRequest).UserData.SharedReferenceCount.ReferenceController =
         local_128.UserData.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    (this->MoveRequest).UserFlags = local_128.UserFlags;
    this->bUseContinuousTracking = '\0';
    this->field_0x159 = this->field_0x159 | param_9;
    if (param_8) {
      local_138[0] = Z_Construct_UClass_UAIResource_Logic_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_138[0] != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_138[0]);
      }
      UGameplayTask::AddClaimedResource
                ((UGameplayTask *)this,(TSubclassOf<UGameplayTaskResource>)local_138);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.UserData.SharedReferenceCount.ReferenceController);
  }
  return this;
}

// Activate @ 146fed6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAITask_MoveTo::Activate(UAITask_MoveTo *this)

{
  UObject *pUVar1;
  
  UAITask::Activate((UAITask *)this);
  if (((FVisualLogger::bIsRecording != 0) && (this->bUseContinuousTracking != 0)) &&
     (FVisualLogger::bIsRecording != 0)) {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Log,
               L"Continuous goal tracking requested, moving to: %s");
  }
  (this->MoveRequestID).RequestID = FAIRequestID::InvalidRequest.RequestID;
  ConditionalPerformMove(this);
  return;
}

// ConditionalPerformMove @ 146fedcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAITask_MoveTo::ConditionalPerformMove(UAITask_MoveTo *this)

{
  char cVar1;
  UObject *pUVar2;
  FTimerManager *this_00;
  FName local_res8;
  FString local_18;
  
  if ((((this->MoveRequest).bUsePathfinding != 0) && (this->_padding_ != 0)) &&
     (cVar1 = (**(code **)(*(longlong *)(this->_padding_ + 0x2c0) + 0x40))(), cVar1 != '\0')) {
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FVisualLogger::CategorizedLogfImpl
                (pUVar2,(FName *)&LogGameplayTasks.field_0x4,Log,
                 L"%s> can\'t path right now, waiting...");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this_00 = AActor::GetWorldTimerManager((AActor *)this->_padding_);
    local_18.Data._8_8_ = (ulonglong)(uint)local_18.Data.ArrayMax << 0x20;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)ConditionalPerformMove;
    FTimerManager::SetTimer<UAITask_MoveTo>
              (this_00,&this->MoveRetryTimerHandle,this,(pmf_f8d6f193 *)&local_18,__real_3e4ccccd,
               false,__real_bf800000);
    return;
  }
  (this->MoveRetryTimerHandle).Handle = 0;
                    /* WARNING: Could not recover jumptable at 0x000146feddfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this);
  return;
}

// ConditionalUpdatePath @ 146fede10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAITask_MoveTo::ConditionalUpdatePath(UAITask_MoveTo *this)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  FNavigationPath *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  UObject *pUVar9;
  FTimerManager *this_00;
  FName local_res8;
  FName local_res10;
  FString local_68;
  FString local_58;
  code *local_48;
  longlong lStack_40;
  FNavPathRecalculationRequest local_38;
  
  pFVar4 = (this->Path).Object;
  if (pFVar4 != (FNavigationPath *)0x0) {
    pFVar4->bWaitingForRepath = 1;
  }
  if ((((this->MoveRequest).bUsePathfinding != 0) && (this->_padding_ != 0)) &&
     (cVar7 = (**(code **)(*(longlong *)(this->_padding_ + 0x2c0) + 0x40))(), cVar7 != '\0')) {
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_68);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FVisualLogger::CategorizedLogfImpl
                (pUVar9,(FName *)&LogGameplayTasks.field_0x4,Log,
                 L"%s> can\'t path right now, waiting...");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    this_00 = AActor::GetWorldTimerManager((AActor *)this->_padding_);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)ConditionalUpdatePath;
    local_58.Data.ArrayNum = 0;
    lStack_40 = (ulonglong)(uint)local_58.Data.ArrayMax << 0x20;
    local_48 = ConditionalUpdatePath;
    FTimerManager::SetTimer<UAITask_MoveTo>
              (this_00,&this->PathRetryTimerHandle,this,(pmf_f8d6f193 *)&local_48,__real_3e4ccccd,
               false,__real_bf800000);
    return;
  }
  pFVar4 = (this->Path).Object;
  (this->PathRetryTimerHandle).Handle = 0;
  if ((pFVar4 == (FNavigationPath *)0x0) ||
     (pUVar9 = FWeakObjectPtr::Get(&(pFVar4->NavigationDataUsed).WeakPtr), pUVar9 == (UObject *)0x0)
     ) {
    if (FVisualLogger::bIsRecording != 0) {
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_58);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FVisualLogger::CategorizedLogfImpl
                (pUVar9,(FName *)&LogGameplayTasks.field_0x4,Log,L"%s> unable to repath, aborting!")
      ;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    FinishMoveTask(this,Aborted);
  }
  else {
    pFVar4 = (this->Path).Object;
    pTVar5 = (this->Path).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                           ,0x2fe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar4 == (FNavigationPath *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == (FNavigationPath *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_38.Path.Object = pFVar4;
    local_38.Path.WeakReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    local_38.Reason = NavigationChanged;
    TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNavPathRecalculationRequest>
              ((TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_> *)
               &pUVar9[0x19].field_0x18,&local_38);
    if (local_38.Path.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      paVar1 = &(local_38.Path.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_38.Path.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.Path.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// FinishMoveTask @ 146ff0420

void __thiscall UAITask_MoveTo::FinishMoveTask(UAITask_MoveTo *this,Type param_1)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(TEnumAsByte<EPathFollowingResult::Type>,AAIController_*),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffff88;
  uchar local_68 [8];
  longlong local_60;
  FDestructionSentinel local_58;
  FReadAccessScope local_40;
  
  if (((((this->MoveRequestID).RequestID != 0xffffffff) && (this->_padding_ != 0)) &&
      (plVar11 = *(longlong **)(this->_padding_ + 0x3b0), plVar11 != (longlong *)0x0)) &&
     (*(char *)((longlong)plVar11 + 0x264) != '\0')) {
    (**(code **)(this->_padding_ + 0x310))();
    (**(code **)(*plVar11 + 0x518))
              (plVar11,this,0x10,(this->MoveRequestID).RequestID,
               in_stack_ffffffffffffff88 & 0xffffffffffffff00);
  }
  (this->MoveResult).Value = (uchar)param_1;
  UGameplayTask::EndTask((UGameplayTask *)this);
  if (param_1 == Invalid) {
    UGameplayTask::FGenericGameplayTaskDelegate_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnRequestFailed);
  }
  else {
    local_60 = this->_padding_;
    local_68[0] = (uchar)param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMoveFinished,
               local_68);
  }
  this_00 = &this->OnMoveTaskFinished;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_40);
  iVar2 = *(int *)&(this->OnMoveTaskFinished).field_0x10;
  plVar11 = *(longlong **)&(this->OnMoveTaskFinished).field_0x8;
  plVar12 = plVar11 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&(this->OnMoveTaskFinished).field_0x10 != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (plVar11 == plVar12) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      return;
    }
    if (((int)plVar11[1] != 0) && (*plVar11 != 0)) break;
    plVar11 = plVar11 + 2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  lVar3 = this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_58);
  puVar1 = &(this->OnMoveTaskFinished).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar10 = *(int *)&(this->OnMoveTaskFinished).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&(this->OnMoveTaskFinished).field_0x10) {
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
      lVar4 = *(longlong *)&(this->OnMoveTaskFinished).field_0x8;
      if (((*(int *)(lVar13 + 8 + lVar4) == 0) ||
          (plVar11 = *(longlong **)(lVar13 + lVar4), plVar11 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar11 + 0x68))(plVar11,param_1 & 0xff,lVar3), cVar8 == '\0')) {
        bVar6 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnMoveTaskFinished).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

// GetPrivateStaticClass @ 146ff0b70

UClass * __cdecl UAITask_MoveTo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_MoveTo",
               &Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton,
               StaticRegisterNativesUAITask_MoveTo,0x160,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAITask_MoveTo>,
               InternalVTableHelperCtorCaller<UAITask_MoveTo>,local_res8,UAITask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton;
}

// OnDestroy @ 146ff18c0

void __thiscall UAITask_MoveTo::OnDestroy(UAITask_MoveTo *this,bool param_1)

{
  longlong *plVar1;
  TSharedPtr<FNavigationPath,1> local_18;
  
  UGameplayTask::OnDestroy((UGameplayTask *)this,param_1);
  (**(code **)(this->_padding_ + 0x310))(this);
  (**(code **)(this->_padding_ + 0x318))(this);
  if (((((this->MoveRequestID).RequestID != 0xffffffff) && (this->_padding_ != 0)) &&
      (plVar1 = *(longlong **)(this->_padding_ + 0x3b0), plVar1 != (longlong *)0x0)) &&
     (*(char *)((longlong)plVar1 + 0x264) != '\0')) {
    (**(code **)(*plVar1 + 0x518))(plVar1,this,0x10,(this->MoveRequestID).RequestID,0);
  }
  local_18.Object = (FNavigationPath *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<FNavigationPath,1>::operator=(&this->Path,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnPathEvent @ 146ff1f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAITask_MoveTo::OnPathEvent(UAITask_MoveTo *this,FNavigationPath *param_1,Type param_2)

{
  UObject *pUVar1;
  AActor *pAVar2;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    NavPathEventEnum = StaticEnum<enum_ENavPathEvent::Type>();
    _Init_thread_footer(&::_TSS0);
  }
  if (FVisualLogger::bIsRecording != 0) {
    UEnum::GetNameStringByValue(NavPathEventEnum,&local_28,(longlong)(int)param_2);
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_38);
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FVisualLogger::CategorizedLogfImpl
              (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Log,L"%s> Path event: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  switch(param_2) {
  case Cleared:
  case RePathFailed:
    if (FVisualLogger::bIsRecording != 0) {
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FVisualLogger::CategorizedLogfImpl
                (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Log,L">> no path, aborting!");
    }
    break;
  case NewPath:
  case UpdatedDueToGoalMoved:
  case UpdatedDueToNavigationChanged:
    if (((param_1 == (FNavigationPath *)0x0) || (param_1->bIsPartial == 0)) ||
       ((this->MoveRequest).bAllowPartialPath != 0)) {
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x03') {
        return;
      }
      if ((this->MoveRequest).bMoveToActor != 0) {
        pAVar2 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->MoveRequest);
        UPathFollowingComponent::LogPathHelper((AActor *)this->_padding_,param_1,pAVar2);
        return;
      }
      UPathFollowingComponent::LogPathHelper((AActor *)this->_padding_,param_1,(AActor *)0x0);
      return;
    }
    if (FVisualLogger::bIsRecording != 0) {
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FVisualLogger::CategorizedLogfImpl
                (pUVar1,(FName *)&LogGameplayTasks.field_0x4,Log,
                 L">> partial path is not allowed, aborting");
    }
    if ((this->MoveRequest).bMoveToActor == 0) {
      UPathFollowingComponent::LogPathHelper((AActor *)this->_padding_,param_1,(AActor *)0x0);
    }
    else {
      pAVar2 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->MoveRequest);
      UPathFollowingComponent::LogPathHelper((AActor *)this->_padding_,param_1,pAVar2);
    }
    break;
  case Invalidated:
    ConditionalUpdatePath(this);
    return;
  default:
    goto switchD_146ff202b_default;
  }
  FinishMoveTask(this,Aborted);
switchD_146ff202b_default:
  return;
}

// OnRequestFinished @ 146ff21a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAITask_MoveTo::OnRequestFinished
          (UAITask_MoveTo *this,FAIRequestID param_1,FPathFollowingResult *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  UObject *pUVar3;
  UWorld *this_00;
  FTimerManager *this_01;
  Type TVar4;
  wchar_t *pwVar5;
  FName local_res8;
  FString local_18;
  
  if (param_1.RequestID == (this->MoveRequestID).RequestID) {
    uVar2 = param_2->Flags;
    if ((((uVar2 & 8) == 0) || (-1 < (char)uVar2)) || ((uVar2 >> 8 & 1) != 0)) {
      (this->MoveRequestID).RequestID = FAIRequestID::InvalidRequest.RequestID;
      if (((this->bUseContinuousTracking != 0) && ((this->MoveRequest).bMoveToActor != 0)) &&
         ((param_2->Flags & 1) != 0)) {
        if (FVisualLogger::bIsRecording != 0) {
          local_res8 = (FName)this->_padding_;
          ::FName::ToString(&local_res8,&local_18);
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar3,(FName *)&LogGameplayTasks.field_0x4,Log,
                     L"%s> received OnRequestFinished and goal tracking is active! Moving again in next tick"
                    );
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        this_01 = UWorld::GetTimerManager(this_00);
        local_18.Data._8_8_ = (ulonglong)(uint)local_18.Data.ArrayMax << 0x20;
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)_vcall__800__flat______;
        FTimerManager::SetTimerForNextTick<UAITask_MoveTo>
                  (this_01,(UAITask_MoveTo *)&local_res8,(pmf_f8d6f193 *)this);
        return;
      }
      FinishMoveTask(this,(uint)(param_2->Code).Value);
      return;
    }
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pwVar5 = L"%s> ignoring OnRequestFinished, move was aborted by new request";
    TVar4 = Log;
  }
  else {
    if (*(char *)((longlong)&this->_padding_ + 1) != '\x03') {
      return;
    }
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pwVar5 = L"%s> received OnRequestFinished with not matching RequestID!";
    TVar4 = Warning;
  }
  FVisualLogger::CategorizedLogfImpl(pUVar3,(FName *)&LogGameplayTasks.field_0x4,TVar4,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Pause @ 146ff2670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAITask_MoveTo::Pause(UAITask_MoveTo *this)

{
  FAIRequestID FVar1;
  
  if (((AAIController *)this->_padding_ != (AAIController *)0x0) &&
     (FVar1.RequestID = (this->MoveRequestID).RequestID, FVar1.RequestID != 0xffffffff)) {
    AAIController::PauseMove((AAIController *)this->_padding_,FVar1);
  }
  (**(code **)(this->_padding_ + 0x318))(this);
  UGameplayTask::Pause((UGameplayTask *)this);
  return;
}

// PerformMove @ 146ff26c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAITask_MoveTo::PerformMove(UAITask_MoveTo *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FDelegateHandle FVar4;
  UObject *pUVar5;
  FPathFollowingResult *pFVar6;
  FPathFollowingResult local_res8 [2];
  FAIRequestID local_res10;
  char local_res14;
  FName local_res18 [2];
  FString local_58;
  FNavigationPath *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  code *local_38;
  longlong lStack_30;
  TSharedPtr<FNavigationPath,1> local_28;
  
  if ((this->_padding_ != 0) && (lVar1 = *(longlong *)(this->_padding_ + 0x3b0), lVar1 != 0)) {
    (**(code **)(this->_padding_ + 0x310))();
    (**(code **)(this->_padding_ + 0x318))(this);
    local_48 = (FNavigationPath *)0x0;
    pTStack_40 = (TReferenceControllerBase<1> *)0x0;
    (**(code **)(*(longlong *)this->_padding_ + 0x8b0))
              ((longlong *)this->_padding_,&local_res10,&this->MoveRequest,&local_48);
    if (local_res14 == '\0') {
      FinishMoveTask(this,Invalid);
    }
    else {
      if (local_res14 == '\x01') {
        (this->MoveRequestID).RequestID = local_res10.RequestID;
        pcVar2 = *(code **)(this->_padding_ + 0x330);
        pFVar6 = FPathFollowingResult::FPathFollowingResult(local_res8,Success,0x200);
        (*pcVar2)(this,local_res10.RequestID,pFVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_40);
        return;
      }
      if (local_res14 == '\x02') {
        (this->MoveRequestID).RequestID = local_res10.RequestID;
        local_58.Data.ArrayNum = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)_vcall__816__flat______;
        lStack_30 = (ulonglong)(uint)local_58.Data.ArrayMax << 0x20;
        local_38 = _vcall__816__flat______;
        FVar4 = TMulticastDelegateRegistration<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                ::AddUObject<UAITask_MoveTo>
                          ((TMulticastDelegateRegistration<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
                            *)(lVar1 + 0xe8),(UAITask_MoveTo *)(local_res18 + 1),
                           (pmf_6b7b8d8c *)this);
        local_28.Object = local_48;
        local_28.SharedReferenceCount.ReferenceController = pTStack_40;
                    /* WARNING: Load size is inaccurate */
        (this->PathFinishDelegateHandle).ID = *FVar4.ID;
        if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_40->SharedReferenceCount =
               (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
          UNLOCK();
        }
        SetObservedPath(this,&local_28);
        if ((*(char *)((longlong)&this->_padding_ + 1) == '\x04') &&
           (FVisualLogger::bIsRecording != 0)) {
          local_res18[0] = (FName)this->_padding_;
          ::FName::ToString(local_res18,&local_58);
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          FVisualLogger::CategorizedLogfImpl
                    (pUVar5,(FName *)&LogGameplayTasks.field_0x4,Error,
                     L"%s> re-Activating Finished task!");
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_40);
            return;
          }
        }
      }
      else {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Tasks\\AITask_MoveTo.cpp"
                           ,0xb3,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
    return;
  }
  FinishMoveTask(this,Invalid);
  return;
}

// ResetObservers @ 146ff2f90

void __thiscall UAITask_MoveTo::ResetObservers(UAITask_MoveTo *this)

{
  FNavigationPath *pFVar1;
  FDelegateHandle FVar2;
  longlong lVar3;
  
  pFVar1 = (this->Path).Object;
  if (pFVar1 != (FNavigationPath *)0x0) {
    FNavigationPath::DisableGoalActorObservation(pFVar1);
  }
  FVar2.ID = (this->PathFinishDelegateHandle).ID;
  if (FVar2.ID != 0) {
    if ((this->_padding_ != 0) && (lVar3 = *(longlong *)(this->_padding_ + 0x3b0), lVar3 != 0)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0xe8),FVar2);
    }
    (this->PathFinishDelegateHandle).ID = 0;
  }
  FVar2.ID = (this->PathUpdateDelegateHandle).ID;
  if (FVar2.ID != 0) {
    pFVar1 = (this->Path).Object;
    if (pFVar1 != (FNavigationPath *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar1->ObserverDelegate,
                 FVar2);
    }
    (this->PathUpdateDelegateHandle).ID = 0;
  }
  return;
}

// ResetTimers @ 146ff3020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAITask_MoveTo::ResetTimers(UAITask_MoveTo *this)

{
  UWorld *pUVar1;
  FTimerManager *this_00;
  
  if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
    pUVar1 = AActor::GetWorld((AActor *)this->_padding_);
    if ((pUVar1 != (UWorld *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
      this_00 = AActor::GetWorldTimerManager((AActor *)this->_padding_);
      FTimerManager::InternalClearAllTimers(this_00,this);
    }
  }
  (this->MoveRetryTimerHandle).Handle = 0;
  (this->PathRetryTimerHandle).Handle = 0;
  return;
}

// Resume @ 146ff3090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAITask_MoveTo::Resume(UAITask_MoveTo *this)

{
  FAIRequestID FVar1;
  bool bVar2;
  UObject *pUVar3;
  FName local_res8;
  FString local_18;
  
  UGameplayTask::Resume((UGameplayTask *)this);
  FVar1.RequestID = (this->MoveRequestID).RequestID;
  if ((FVar1.RequestID != 0xffffffff) &&
     (((AAIController *)this->_padding_ == (AAIController *)0x0 ||
      (bVar2 = AAIController::ResumeMove((AAIController *)this->_padding_,FVar1), bVar2)))) {
    return;
  }
  if (((FVisualLogger::bIsRecording != 0) && ((this->MoveRequestID).RequestID != 0xffffffff)) &&
     (FVisualLogger::bIsRecording != 0)) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FVisualLogger::CategorizedLogfImpl
              (pUVar3,(FName *)&LogGameplayTasks.field_0x4,Log,
               L"%s> Resume move failed, starting new one.");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ConditionalPerformMove(this);
  return;
}

// SetContinuousGoalTracking @ 146ff3520

void __thiscall UAITask_MoveTo::SetContinuousGoalTracking(UAITask_MoveTo *this,bool param_1)

{
  this->bUseContinuousTracking = '\0';
  this->field_0x159 = this->field_0x159 | param_1;
  return;
}

// SetObservedPath @ 146ff3540

void __thiscall
UAITask_MoveTo::SetObservedPath(UAITask_MoveTo *this,TSharedPtr<FNavigationPath,1> *param_1)

{
  undefined1 *puVar1;
  FDelegateHandle FVar2;
  FNavigationPath *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UAITask_MoveTo *local_res8;
  ulong64 local_res10;
  ulonglong uStack_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  FVar2.ID = (this->PathUpdateDelegateHandle).ID;
  if ((FVar2.ID != 0) && (pFVar3 = (this->Path).Object, pFVar3 != (FNavigationPath *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar3->ObserverDelegate,FVar2
              );
  }
  (this->PathUpdateDelegateHandle).ID = 0;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->Path).SharedReferenceCount.ReferenceController;
  (this->Path).Object = pFVar3;
  (this->Path).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar3 = (this->Path).Object;
  if (pFVar3 != (FNavigationPath *)0x0) {
    pFVar3->bDoAutoUpdateOnInvalidation = 0;
    if ((this->Path).Object == (FNavigationPath *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->Path).Object;
    uStack_80 = (ulonglong)pTVar6 & 0xffffffff00000000;
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_MoveTo____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
      puVar8[4] = _vcall__808__flat______;
      puVar8[5] = uStack_80;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TMulticastDelegateRegistration<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
    ::Add(&pFVar3->ObserverDelegate,
          (TDelegate<void___cdecl(FNavigationPath_*,ENavPathEvent::Type),FDefaultDelegateUserPolicy>
           *)&local_res10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    (this->PathUpdateDelegateHandle).ID = local_res10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetUp @ 146ff39f0

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
UAITask_MoveTo::SetUp(UAITask_MoveTo *this,AAIController *param_1,FAIMoveRequest *param_2)

{
  undefined4 uVar1;
  UClass *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMoveRequestCustomData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  double dVar6;
  uint uVar7;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  (this->MoveRequest).GoalActor.WeakPtr = (param_2->GoalActor).WeakPtr;
  dVar6 = (param_2->GoalLocation).field0_0x0._s_0.Y;
  (this->MoveRequest).GoalLocation.field0_0x0._s_0.X = (param_2->GoalLocation).field0_0x0._s_0.X;
  (this->MoveRequest).GoalLocation.field0_0x0._s_0.Y = dVar6;
  (this->MoveRequest).GoalLocation.field0_0x0._s_0.Z = (param_2->GoalLocation).field0_0x0._s_0.Z;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_2->FilterClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->MoveRequest).FilterClass.Class.field0_0x0 = (param_2->FilterClass).Class.field0_0x0;
  uVar1 = *(undefined4 *)&(this->MoveRequest).field_0x28;
  uVar7 = (ZPULL(uVar1,0,1) ^ param_2->bInitialized) & 1 ^ uVar1;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 2 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 4 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 8 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 0x10 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 0x20 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 0x40 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 0x80 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 0x100 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 0x200 ^ uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = uVar7;
  *(uint *)&(this->MoveRequest).field_0x28 = (uVar7 ^ *(uint *)&param_2->field_0x28) & 0x400 ^ uVar7
  ;
  (this->MoveRequest).AcceptanceRadius = param_2->AcceptanceRadius;
  (this->MoveRequest).CostLimitFactor = param_2->CostLimitFactor;
  (this->MoveRequest).MinimumCostLimit = param_2->MinimumCostLimit;
  pTVar3 = (param_2->UserData).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_2->UserData).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->MoveRequest).UserData.SharedReferenceCount.ReferenceController;
  (this->MoveRequest).UserData.Object = pFVar4;
  (this->MoveRequest).UserData.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->MoveRequest).UserFlags = param_2->UserFlags;
  return;
}

// StaticRegisterNativesUAITask_MoveTo @ 146ff3cc0

void __cdecl UAITask_MoveTo::StaticRegisterNativesUAITask_MoveTo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAITask_MoveTo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAIMoveTo @ 146ff4da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UAITask_MoveTo::execAIMoveTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAITask_MoveTo *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte local_res10 [8];
  byte local_res18 [8];
  byte local_res20 [8];
  byte local_98 [4];
  int local_94;
  int local_90;
  int local_8c;
  float local_88 [2];
  AActor *local_80;
  AAIController *local_78;
  double local_70;
  double dStack_68;
  double local_60;
  TVector<double>_u_0 local_58;
  
  local_78 = (AAIController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_80 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_98[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_94 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  bVar3 = local_94 != 0;
  local_90 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  bVar4 = local_90 != 0;
  local_8c = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_8c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_8c);
  }
  bVar5 = local_8c != 0;
  local_res18[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58._s_0.X = local_70;
  local_58._s_0.Y = dStack_68;
  local_58._s_0.Z = local_60;
  pUVar2 = AIMoveTo(local_78,(TVector<double> *)&local_58._s_0,local_80,local_88[0],
                    (uint)local_98[0],(uint)local_res20[0],bVar3,bVar4,bVar5,(uint)local_res18[0],
                    (uint)local_res10[0]);
  *(UAITask_MoveTo **)param_3 = pUVar2;
  return;
}

