// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 101

// StaticClass @ 146e7a360

UClass * __cdecl AAIController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAIController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIController",
               &Z_Registration_Info_UClass_AAIController.InnerSingleton,
               StaticRegisterNativesAAIController,0x400,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAIController>,
               InternalVTableHelperCtorCaller<AAIController>,local_res8,AController::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAIController.InnerSingleton;
}

// AAIController @ 146e7fe70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AAIController * __thiscall AAIController::AAIController(AAIController *this,FVTableHelper *param_1)

{
  AController::AController((AController *)this,param_1);
  (this->TeamID).TeamID = 0xff;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__IAIPerceptionListenerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IGenericTeamAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  (this->ScriptClaimedResources).Flags = 0;
  (this->FocusInformation).Priorities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FocusInformation).Priorities.ArrayNum = 0;
  (this->FocusInformation).Priorities.ArrayMax = 0;
  (this->PathFollowingComponent).field0_0x0.DebugPtr = (UPathFollowingComponent *)0x0;
  (this->BrainComponent).field0_0x0.DebugPtr = (UBrainComponent *)0x0;
  (this->PerceptionComponent).field0_0x0.DebugPtr = (UAIPerceptionComponent *)0x0;
  (this->Blackboard).field0_0x0.DebugPtr = (UBlackboardComponent *)0x0;
  (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr = (UGameplayTasksComponent *)0x0;
  (this->DefaultNavigationFilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->ReceiveMoveCompleted = 0;
  *(undefined8 *)&(this->ReceiveMoveCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->ReceiveMoveCompleted).field_0x10 = 0;
  return this;
}

// AAIController @ 146e7ff40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AAIController * __thiscall
AAIController::AAIController(AAIController *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  FName FVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UPathFollowingComponent *pUVar7;
  FName local_res8;
  
  AController::AController((AController *)this,param_1);
  (this->TeamID).TeamID = 0xff;
  (this->ScriptClaimedResources).Flags = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->FocusInformation).Priorities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->FocusInformation).Priorities.ArrayNum = 0;
  (this->FocusInformation).Priorities.ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAIPerceptionListenerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IGenericTeamAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  (this->PathFollowingComponent).field0_0x0.DebugPtr = (UPathFollowingComponent *)0x0;
  (this->BrainComponent).field0_0x0.DebugPtr = (UBrainComponent *)0x0;
  (this->PerceptionComponent).field0_0x0.DebugPtr = (UAIPerceptionComponent *)0x0;
  (this->Blackboard).field0_0x0.DebugPtr = (UBlackboardComponent *)0x0;
  (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr = (UGameplayTasksComponent *)0x0;
  (this->DefaultNavigationFilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->ReceiveMoveCompleted = 0;
  *(undefined8 *)&(this->ReceiveMoveCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->ReceiveMoveCompleted).field_0x10 = 0;
  this->bSetControlRotationFromPawnOrientation = 1;
  pFVar5 = ::FName::FName(&local_res8,L"PathFollowingComponent");
  FVar4 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UPathFollowingComponent_NoRegister();
  pUVar7 = (UPathFollowingComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar6,pUVar6,false,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar7 == (UPathFollowingComponent *)0x0)) {
    (this->PathFollowingComponent).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UPathFollowingComponent *)0x0) goto LAB_146e800a1;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
    (this->PathFollowingComponent).field0_0x0.DebugPtr = pUVar7;
  }
  TMulticastDelegateRegistration<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<AAIController>
            ((TMulticastDelegateRegistration<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar7->OnRequestFinished,(AAIController *)&local_res8,(pmf_a3879154 *)this);
LAB_146e800a1:
  this->bSkipExtraLOSChecks = 1;
  this->bWantsPlayerState = 0;
  (this->TeamID).TeamID = FGenericTeamId::NoTeam.TeamID;
  puVar2 = &this->field_0x3a8;
  this->bStartAILogicOnPossess = 0;
  this->bWantsPlayerState = 0;
  this->bSkipExtraLOSChecks = 1;
  this->bStopAILogicOnUnposses = 1;
  return this;
}

// ~AAIController @ 146e81980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::~AAIController(AAIController *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__IAIPerceptionListenerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IGenericTeamAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  pvVar1 = *(void **)&(this->ReceiveMoveCompleted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReceiveMoveCompleted);
  pFVar2 = (this->FocusInformation).Priorities.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IVisualLoggerDebugSnapshotInterface__6B_;
  this->_padding_ = (longlong)&___7IGenericTeamAgentInterface__6B_;
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  this->_padding_ = (longlong)&___7IAIPerceptionListenerInterface__6B_;
  AController::~AController((AController *)this);
  return;
}

// ActorsPerceptionUpdated @ 146e83fb0

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
AAIController::ActorsPerceptionUpdated
          (AAIController *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// BuildPathfindingQuery @ 146e856a0

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
AAIController::BuildPathfindingQuery
          (AAIController *this,FAIMoveRequest *param_1,FPathFindingQuery *param_2)

{
  bool bVar1;
  TVector<double> *pTVar2;
  undefined1 local_28 [32];
  
  pTVar2 = (TVector<double> *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_,local_28);
  bVar1 = BuildPathfindingQuery(this,param_1,pTVar2,param_2);
  return bVar1;
}

// BuildPathfindingQuery @ 146e85700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
AAIController::BuildPathfindingQuery
          (AAIController *this,FAIMoveRequest *param_1,TVector<double> *param_2,
          FPathFindingQuery *param_3)

{
  TSharedPtr<FNavigationPath,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  UPathFollowingComponent *pUVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  UWorld *pUVar14;
  UClass *pUVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ANavigationData *pAVar18;
  UObject *pUVar19;
  longlong *plVar20;
  double *pdVar21;
  FPathFindingQuery *pFVar22;
  uint uVar23;
  UNavigationSystemBase *pUVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 local_298 [16];
  TSharedPtr<FNavigationQueryFilter_const_,1> local_288;
  double local_278;
  double dStack_270;
  undefined8 local_268;
  TSharedPtr<FNavigationPath,1> local_260;
  double local_250;
  double dStack_248;
  double local_240;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_238;
  double local_228;
  double dStack_220;
  double local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  TReferenceControllerBase<1> *pTStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  undefined1 local_1c8 [24];
  undefined1 local_1b0 [24];
  undefined1 local_198 [344];
  
  local_298._0_8_ = param_2;
  pUVar14 = AActor::GetWorld((AActor *)this);
  if ((pUVar14 != (UWorld *)0x0) &&
     (pUVar24 = (pUVar14->NavigationSystem).field0_0x0.DebugPtr,
     pUVar24 != (UNavigationSystemBase *)0x0)) {
    pUVar15 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar15->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar15->_padding_)) goto LAB_146e85768;
  }
  pUVar24 = (UNavigationSystemBase *)0x0;
LAB_146e85768:
  if (pUVar24 == (UNavigationSystemBase *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Warning,
                 L"Unable AAIController::BuildPathfindingQuery due to no NavigationSystem present. Note that even pathfinding-less movement requires presence of NavigationSystem."
                );
    }
    return false;
  }
  if (param_1->bUsePathfinding == 0) {
    pAVar18 = *(ANavigationData **)&pUVar24[1].field_0x8;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)pUVar24 + 0x350);
    uVar16 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_,local_1c8);
    uVar17 = (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
    pAVar18 = (ANavigationData *)
              (*pcVar3)(pUVar24,uVar17,uVar16,&UE::Math::TVector<double>::ZeroVector);
    param_2 = (TVector<double> *)local_298._0_8_;
  }
  if (pAVar18 == (ANavigationData *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Warning,
                 L"Unable to find NavigationData instance while calling AAIController::BuildPathfindingQuery"
                );
    }
    bVar12 = false;
  }
  else {
    _local_278 = *(undefined1 (*) [16])&(param_1->GoalLocation).field0_0x0;
    local_268 = (param_1->GoalLocation).field0_0x0._s_0.Z;
    if (param_1->bMoveToActor != 0) {
      pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
      if (pUVar19 == (UObject *)0x0) {
        plVar20 = (longlong *)0x0;
      }
      else {
        pUVar15 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
        plVar20 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar19,pUVar15);
      }
      if (plVar20 == (longlong *)0x0) {
        if (param_1->bMoveToActor == 0) {
          pUVar19 = (UObject *)0x0;
        }
        else {
          pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
        }
        lVar4 = *(longlong *)(pUVar19 + 0xb);
        local_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (lVar4 != 0) {
          local_218 = *(double *)(lVar4 + 0x220);
          local_228 = *(double *)(lVar4 + 0x210);
          dStack_220 = *(double *)(lVar4 + 0x218);
          local_268 = local_218;
          local_278 = local_228;
          dStack_270 = dStack_220;
        }
      }
      else {
        (**(code **)(*plVar20 + 0x28))(plVar20,&local_250,this);
        pdVar21 = (double *)(**(code **)(*plVar20 + 0x18))(plVar20,local_1b0);
        if (param_1->bMoveToActor == 0) {
          pUVar19 = (UObject *)0x0;
        }
        else {
          pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
        }
        lVar4 = *(longlong *)(pUVar19 + 0xb);
        if (lVar4 == 0) {
          uVar31 = 0;
          uVar32 = 0;
          uVar33 = 0;
          uVar34 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1d8 = ___xmm_3ff00000000000000000000000000000;
          pTStack_1d0 = _UNK_15061cbc8;
          dVar30 = ___xmm_3ff00000000000000000000000000000;
          local_260.SharedReferenceCount.ReferenceController = _UNK_15061cbc8;
        }
        else {
          uVar31 = *(undefined4 *)(lVar4 + 0x1f0);
          uVar32 = *(undefined4 *)(lVar4 + 500);
          uVar33 = *(undefined4 *)(lVar4 + 0x1f8);
          uVar34 = *(undefined4 *)(lVar4 + 0x1fc);
          local_1f8 = *(double *)(lVar4 + 0x200);
          pTStack_1f0 = *(TReferenceControllerBase<1> **)(lVar4 + 0x208);
          dVar30 = local_1f8;
          local_260.SharedReferenceCount.ReferenceController = pTStack_1f0;
          local_208 = uVar31;
          uStack_204 = uVar32;
          uStack_200 = uVar33;
          uStack_1fc = uVar34;
        }
        dVar27 = dVar30 * __real_4000000000000000;
        dVar28 = (double)CONCAT44(uVar32,uVar31) * __real_4000000000000000;
        dVar9 = (double)CONCAT44(uVar32,uVar31) * dVar28;
        dVar11 = (double)CONCAT44(uVar32,uVar31) * dVar27;
        dVar26 = (double)CONCAT44(uVar34,uVar33) * __real_4000000000000000;
        dVar10 = (double)CONCAT44(uVar34,uVar33) * dVar27;
        dVar28 = (double)local_260.SharedReferenceCount.ReferenceController * dVar28;
        dVar29 = (double)CONCAT44(uVar32,uVar31) * dVar26;
        dVar8 = (double)CONCAT44(uVar34,uVar33) * dVar26;
        local_260.Object =
             (FNavigationPath *)
             ((double)local_260.SharedReferenceCount.ReferenceController * dVar27 + dVar29);
        dVar6 = dVar11 - (double)local_260.SharedReferenceCount.ReferenceController * dVar26;
        local_298._8_4_ = uVar33;
        local_298._0_8_ = dVar6;
        local_298._12_4_ = uVar34;
        dVar7 = pdVar21[1] * __real_3ff0000000000000 +
                (dVar10 - dVar28) * local_240 +
                (__real_3ff0000000000000 - (dVar30 * dVar27 + dVar9)) * dStack_248 +
                (double)local_260.Object * local_250;
        local_268 = pdVar21[2] * __real_3ff0000000000000 +
                    (__real_3ff0000000000000 - (dVar8 + dVar9)) * local_240 +
                    (dVar28 + dVar10) * dStack_248 + dVar6 * local_250;
        unique0x1000021e = SUB84(dVar7,0);
        local_278 = *pdVar21 * __real_3ff0000000000000 +
                    ((double)local_260.SharedReferenceCount.ReferenceController * dVar26 + dVar11) *
                    local_240 +
                    (dVar29 - (double)local_260.SharedReferenceCount.ReferenceController * dVar27) *
                    dStack_248 + (__real_3ff0000000000000 - (dVar30 * dVar27 + dVar8)) * local_250;
        unique0x10000222 = (int)((ulonglong)dVar7 >> 0x20);
        local_218 = (double)local_268;
      }
    }
    pUVar15 = (param_1->FilterClass).Class.field0_0x0.DebugPtr;
    local_298._0_8_ = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    UNavigationQueryFilter::GetQueryFilter
              (&local_288,pAVar18,(UObject *)this,(TSubclassOf<UNavigationQueryFilter>)local_298);
    local_238.Object = local_288.Object;
    local_238.SharedReferenceCount.ReferenceController =
         local_288.SharedReferenceCount.ReferenceController;
    local_260.Object = (FNavigationPath *)0x0;
    local_260.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar22 = FPathFindingQuery::FPathFindingQuery
                        ((FPathFindingQuery *)local_198,(INavAgentInterface *)&this->_padding_,
                         pAVar18,param_2,(TVector<double> *)&local_278,&local_238,&local_260,
                         __real_7fefffffffffffff,true);
    param_3->_padding_ = pFVar22->_padding_;
    plVar20 = &pFVar22->_padding_;
    lVar4 = pFVar22->_padding_;
    param_3->_padding_ = pFVar22->_padding_;
    param_3->_padding_ = lVar4;
    param_3->_padding_ = pFVar22->_padding_;
    lVar4 = pFVar22->_padding_;
    param_3->_padding_ = pFVar22->_padding_;
    param_3->_padding_ = lVar4;
    param_3->_padding_ = pFVar22->_padding_;
    if (&param_3->_padding_ != plVar20) {
      param_3->_padding_ = *plVar20;
      *plVar20 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&param_3->_padding_,
                 (FSharedReferencer<1> *)&pFVar22->_padding_);
    }
    pTVar1 = &pFVar22->PathInstanceToFill;
    uVar23 = *(uint *)((longlong)&param_3->_padding_ + 4);
    param_3->_padding_ = pFVar22->_padding_;
    *(int *)&param_3->_padding_ = (int)pFVar22->_padding_;
    uVar23 = (uVar23 ^ *(uint *)((longlong)&pFVar22->_padding_ + 4)) & 1 ^
             *(uint *)((longlong)&param_3->_padding_ + 4);
    *(uint *)((longlong)&param_3->_padding_ + 4) = uVar23;
    *(uint *)((longlong)&param_3->_padding_ + 4) =
         (uVar23 ^ *(uint *)((longlong)&pFVar22->_padding_ + 4)) & 2 ^ uVar23;
    (param_3->NavData).WeakPtr = (pFVar22->NavData).WeakPtr;
    if (&param_3->PathInstanceToFill != pTVar1) {
      (param_3->PathInstanceToFill).Object = pTVar1->Object;
      pTVar1->Object = (FNavigationPath *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_3->PathInstanceToFill).SharedReferenceCount,
                 &(pFVar22->PathInstanceToFill).SharedReferenceCount);
    }
    FNavAgentProperties::operator=(&param_3->NavAgentProperties,&pFVar22->NavAgentProperties);
    if ((void *)local_198._152_8_ != (void *)0x0) {
      FMemory::Free((void *)local_198._152_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_198._104_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_198._64_8_);
    uVar23 = (param_1->bAllowPartialPath ^ *(uint *)((longlong)&param_3->_padding_ + 4)) & 1 ^
             *(uint *)((longlong)&param_3->_padding_ + 4);
    *(uint *)((longlong)&param_3->_padding_ + 4) = uVar23;
    *(uint *)((longlong)&param_3->_padding_ + 4) =
         ((*(uint *)&param_1->field_0x28 >> 4 & 0xff) * 2 ^ uVar23) & 2 ^ uVar23;
    if (param_1->bApplyCostLimitFromHeuristic != 0) {
      if ((local_288.Object == (FNavigationQueryFilter *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        uVar13 = (*pcVar3)();
        return (bool)uVar13;
      }
      if ((((local_288.Object)->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0)
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        uVar13 = (*pcVar3)();
        return (bool)uVar13;
      }
      fVar25 = (float)(**(code **)((longlong)*((local_288.Object)->QueryFilterImpl).Object + 0x48))
                                ();
      dVar30 = FPathFindingQuery::ComputeCostLimitFromHeuristic
                         ((TVector<double> *)&param_3->_padding_,
                          (TVector<double> *)&param_3->_padding_,(double)fVar25,
                          (double)param_1->CostLimitFactor,(double)param_1->MinimumCostLimit);
      param_3->_padding_ = (longlong)dVar30;
    }
    pUVar5 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
    if (pUVar5 != (UPathFollowingComponent *)0x0) {
      (**(code **)(pUVar5->_padding_ + 0x5a0))(pUVar5,param_3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_288.SharedReferenceCount.ReferenceController);
    bVar12 = true;
  }
  return bVar12;
}

// ClaimTaskResource @ 146e861b0

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
AAIController::ClaimTaskResource(AAIController *this,TSubclassOf<UGameplayTaskResource> param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  UClass *pUVar6;
  UGameplayTask *pUVar7;
  longlong lVar8;
  FName local_res8;
  UObject *local_res18;
  FString local_28;
  
  if ((this->CachedGameplayTasksComponent).field0_0x0.DebugPtr == (UGameplayTasksComponent *)0x0) {
    return;
  }
  bVar4 = UGameplayTaskResource::GetResourceID
                    ((TSubclassOf<UGameplayTaskResource> *)param_1.Class.field0_0x0);
  if ((0xf < bVar4) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_27176809292365737>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                         ,0x57,"ResourceID < MaxResources"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->ScriptClaimedResources).Flags >> (bVar4 & 0x1f) & 1) != 0) {
    return;
  }
  if ((0xf < bVar4) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_27176809292365749>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                         ,0x4b,"ResourceID < MaxResources"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->ScriptClaimedResources).Flags =
       (this->ScriptClaimedResources).Flags | (ushort)(1 << (bVar4 & 0x1f));
  if (FVisualLogger::bIsRecording != 0) {
    pUVar6 = TSubclassOf<UGameplayTaskResource>::operator*
                       ((TSubclassOf<UGameplayTaskResource> *)param_1.Class.field0_0x0);
    if (pUVar6 == (UClass *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_res8,&local_28);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Log,L"ClaimTaskResource %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  lVar8 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar8 != 0) &&
     (pUVar6 = Z_Construct_UClass_UGameplayTaskResource_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar8 = *(longlong *)param_1.Class.field0_0x0;
      goto LAB_146e86323;
    }
  }
  lVar8 = 0;
LAB_146e86323:
  local_res18 = *(UObject **)param_1.Class.field0_0x0;
  FVar2 = *(FName *)(lVar8 + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  pUVar7 = (UGameplayTask *)
           UGameplayTask_ClaimResource::ClaimResource
                     ((IGameplayTaskOwnerInterface *)&this->_padding_,
                      (TSubclassOf<UGameplayTaskResource>)&local_res18,0xc0,FVar2);
  if (pUVar7 != (UGameplayTask *)0x0) {
    UGameplayTasksComponent::AddTaskReadyForActivation
              ((this->CachedGameplayTasksComponent).field0_0x0.DebugPtr,pUVar7);
  }
  if (((FVisualLogger::bIsRecording != 0) && (pUVar7 == (UGameplayTask *)0x0)) &&
     (FVisualLogger::bIsRecording != 0)) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Warning,
               L"ClaimTaskResource failed to create UGameplayTask_ClaimResource instance");
  }
  return;
}

// CleanupBrainComponent @ 146e867b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::CleanupBrainComponent(AAIController *this)

{
  UBrainComponent *pUVar1;
  
  pUVar1 = (this->BrainComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UBrainComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146e867bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x518))();
    return;
  }
  return;
}

// ClearFocus @ 146e86880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::ClearFocus(AAIController *this,uchar param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  longlong lVar10;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  double local_res20;
  
  if ((int)(uint)param_1 < (this->FocusInformation).Priorities.ArrayNum) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    FVar8 = local_res8;
    if (((this->FocusInformation).Priorities.ArrayNum <= (int)(uint)param_1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar10 = (ulonglong)param_1 * 0x20;
    *(FWeakObjectPtr *)((this->FocusInformation).Priorities.AllocatorInstance.Data + lVar10) = FVar8
    ;
    uVar7 = FAISystem::InvalidLocation.field0_0x0._12_4_;
    uVar6 = FAISystem::InvalidLocation.field0_0x0._8_4_;
    uVar5 = FAISystem::InvalidLocation.field0_0x0._4_4_;
    uVar4 = FAISystem::InvalidLocation.field0_0x0._0_4_;
    local_res20 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
    if (((this->FocusInformation).Priorities.ArrayNum <= (int)(uint)param_1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->FocusInformation).Priorities.AllocatorInstance.Data;
    pFVar1 = pFVar2 + lVar10 + 8;
    *(undefined4 *)pFVar1 = uVar4;
    *(undefined4 *)(pFVar1 + 4) = uVar5;
    *(undefined4 *)(pFVar1 + 8) = uVar6;
    *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    *(double *)(pFVar2 + lVar10 + 0x18) = local_res20;
  }
  return;
}

// DisplayDebug @ 146e89a40

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
AAIController::DisplayDebug
          (AAIController *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
          float *param_4)

{
  FScriptContainerElement *pFVar1;
  UPathFollowingComponent *pUVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  AActor *pAVar4;
  FScriptContainerElement *pFVar5;
  float local_res18 [4];
  FName local_48;
  FString local_40;
  FString local_30;
  
  AController::DisplayDebug((AController *)this,param_1,param_2,param_3,param_4);
  FVar3 = FNameEntryId::FromValidEName((EName)local_res18);
  pFVar5 = (param_2->DisplayNames).AllocatorInstance.Data;
  local_res18[0] = *(float *)CONCAT44(extraout_var,FVar3.Value);
  local_res18[1] = 0.0;
  pFVar1 = pFVar5 + (longlong)(param_2->DisplayNames).ArrayNum * 8;
  if (pFVar5 != pFVar1) {
    do {
      if (*(ulonglong *)pFVar5 == (ulonglong)(uint)local_res18[0]) {
        pUVar2 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
        if (pUVar2 != (UPathFollowingComponent *)0x0) {
          (**(code **)(pUVar2->_padding_ + 0x578))(pUVar2,param_1,param_2,param_3,param_4);
        }
        pAVar4 = GetFocusActor(this);
        if (pAVar4 == (AActor *)0x0) {
          return;
        }
        local_48 = (FName)pAVar4->_padding_;
        local_res18[0] = 0.0;
        ::FName::ToString(&local_48,&local_40);
        ::FString::PrintfImpl(&local_30,L"      Focus %s");
        FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_30,local_res18);
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
        if (local_40.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        return;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1);
  }
  return;
}

// FindPathForMoveRequest @ 146e8c2b0

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
AAIController::FindPathForMoveRequest
          (AAIController *this,FAIMoveRequest *param_1,FPathFindingQuery *param_2,
          TSharedPtr<FNavigationPath,1> *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FNavigationPath *this_00;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AI_Overall> FVar13;
  UWorld *pUVar14;
  UClass *pUVar15;
  AActor *pAVar16;
  UObject *pUVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  TVector<double>_u_0 *pTVar18;
  UNavigationSystemV1 *this_03;
  FName local_1d8;
  FColor_u_0 local_1c8 [2];
  FName local_1c0;
  FName local_1b8;
  FPathFindingResult local_1b0;
  FString local_198;
  FString local_188;
  FName local_178;
  LARGE_INTEGER local_170;
  FString local_168;
  FStatMessage local_158;
  FNavigationPath *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  FName local_138;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  FPathFindingQuery local_e8;
  
  FVar13 = StatPtr_STAT_AI_Overall;
  if (StatPtr_STAT_AI_Overall == (FThreadSafeStaticStat<FStat_STAT_AI_Overall>)0x0) {
    pFVar12 = ::FName::FName(&local_138,"STAT_AI_Overall");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AI_Overall>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Overall,*pFVar12,
                        L"Overall AI Time","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar4 = *(FName *)FVar13;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AIController.cpp"
                   ,0x372);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c0 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar10 = true;
      local_1d8 = FVar4;
    }
  }
  pUVar14 = AActor::GetWorld((AActor *)this);
  if ((pUVar14 == (UWorld *)0x0) ||
     (this_03 = (UNavigationSystemV1 *)(pUVar14->NavigationSystem).field0_0x0.DebugPtr,
     this_03 == (UNavigationSystemV1 *)0x0)) {
LAB_146e8c439:
    this_03 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar15 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&this_03->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_03->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar15->_padding_)) goto LAB_146e8c439;
  }
  if (this_03 == (UNavigationSystemV1 *)0x0) goto LAB_146e8c82b;
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_ = param_2->_padding_;
  if (local_e8._padding_ != 0) {
    LOCK();
    *(int *)(local_e8._padding_ + 8) = *(int *)(local_e8._padding_ + 8) + 1;
    UNLOCK();
  }
  local_e8._padding_._0_4_ = (undefined4)param_2->_padding_;
  uVar3 = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_e8._padding_ = param_2->_padding_;
  local_e8._padding_._4_4_ = local_e8._padding_._4_4_ & 0xfffffffe | uVar3 & 1;
  local_e8.NavData.WeakPtr = (param_2->NavData).WeakPtr;
  local_e8.PathInstanceToFill.Object = (param_2->PathInstanceToFill).Object;
  local_e8._padding_._4_4_ = (uVar3 ^ local_e8._padding_._4_4_) & 2 ^ local_e8._padding_._4_4_;
  local_e8.PathInstanceToFill.SharedReferenceCount.ReferenceController =
       (param_2->PathInstanceToFill).SharedReferenceCount.ReferenceController;
  if (local_e8.PathInstanceToFill.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.PathInstanceToFill.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.PathInstanceToFill.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties
            (&local_e8.NavAgentProperties,&param_2->NavAgentProperties);
  UNavigationSystemV1::FindPathSync(this_03,&local_1b0,&local_e8,Regular);
  this_00 = local_1b0.Path.Object;
  if (local_1b0.Result == Error) {
    if (FVisualLogger::bIsRecording != 0) {
      if (param_1->bMoveToActor == 0) {
        ::FString::PrintfImpl(&local_168,L"X=%3.3f Y=%3.3f Z=%3.3f");
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                   L"Trying to find path to %s resulted in Error");
        local_198.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
      }
      else {
        pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
        if (pUVar17 == (UObject *)0x0) {
          ::FString::FString(&local_198,L"None");
        }
        else {
          local_1c0.ComparisonIndex.Value = *(uint *)&pUVar17->field_0x18;
          local_1c0.Number = *(uint *)&pUVar17->field_0x1c;
          ::FName::ToString(&local_1c0,&local_198);
        }
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                   L"Trying to find path to %s resulted in Error");
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (FVisualLogger::bIsRecording != 0) {
        if ((param_1->bMoveToActor == 0) ||
           (pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1), pUVar17 == (UObject *)0x0)) {
          ::FString::FString(&local_188,L"None");
        }
        else {
          local_178.ComparisonIndex.Value = *(uint *)&pUVar17->field_0x18;
          local_178.Number = *(uint *)&pUVar17->field_0x1c;
          ::FName::ToString(&local_178,&local_188);
        }
        local_100._s_0.X = (param_1->GoalLocation).field0_0x0._s_0.X;
        local_100._s_0.Y = (param_1->GoalLocation).field0_0x0._s_0.Y;
        local_100._s_0.Z = (param_1->GoalLocation).field0_0x0._s_0.Z;
        pUVar17 = (UObject *)this->_padding_;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar17 == (UObject *)0x0) goto LAB_146e8c7b8;
LAB_146e8c758:
          pUVar17 = (UObject *)this->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar17);
          }
          lVar5 = *(longlong *)(pUVar17 + 0xb);
          if (lVar5 == 0) {
            pTVar18 = &local_130;
            local_130._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_130._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_130._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          else {
            local_130._s_0.X = *(double *)(lVar5 + 0x210);
            local_130._s_0.Y = *(double *)(lVar5 + 0x218);
            pTVar18 = &local_130;
            local_130._s_0.Z = *(double *)(lVar5 + 0x220);
          }
        }
        else {
          if (pUVar17 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar17);
            goto LAB_146e8c758;
          }
LAB_146e8c7b8:
          pTVar18 = &local_118;
          local_118._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
          local_118._s_0.Y = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
          local_118._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
        }
        FVisualLogger::SegmentLogfImpl
                  ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                   (TVector<double> *)&pTVar18->_s_0,(TVector<double> *)&local_100._s_0,&FColor::Red
                   ,0,L"Failed move to %s");
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else if ((local_1b0.Result == Success) && (local_1b0.Path.Object != (FNavigationPath *)0x0)) {
    if (param_1->bMoveToActor != 0) {
      pAVar16 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
      FNavigationPath::SetGoalActorObservation(this_00,pAVar16,__real_42c80000);
    }
    if ((local_1b0.Path.Object == (FNavigationPath *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (local_1b0.Path.Object)->bDoAutoUpdateOnInvalidation = 1;
    local_148 = local_1b0.Path.Object;
    pTStack_140 = local_1b0.Path.SharedReferenceCount.ReferenceController;
    if (local_1b0.Path.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b0.Path.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b0.Path.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
           );
      UNLOCK();
    }
    pTVar7 = (param_3->SharedReferenceCount).ReferenceController;
    param_3->Object = local_1b0.Path.Object;
    (param_3->SharedReferenceCount).ReferenceController =
         local_1b0.Path.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.Path.SharedReferenceCount.ReferenceController);
LAB_146e8c82b:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (local_1d8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_158.NameAndInfo.Index = local_1d8.ComparisonIndex.Value;
      local_158.NameAndInfo.Number = local_1d8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_158.StatData.Pad[4] = '\0';
      local_158.StatData.Pad[5] = '\0';
      local_158.StatData.Pad[6] = '\0';
      local_158.StatData.Pad[7] = '\0';
      local_158.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_158.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_158.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_158.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_158);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// GetCurrentMoveRequestID @ 146e8d870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAIRequestID __thiscall AAIController::GetCurrentMoveRequestID(AAIController *this)

{
  UPathFollowingComponent *pUVar1;
  uint *in_RDX;
  
  pUVar1 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UPathFollowingComponent *)0x0) {
    *in_RDX = (pUVar1->CurrentRequestId).RequestID;
    return (FAIRequestID)(uint)in_RDX;
  }
  *in_RDX = FAIRequestID::InvalidRequest.RequestID;
  return (FAIRequestID)(uint)in_RDX;
}

// GetDebugIcon @ 146e8d8a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
AAIController::GetDebugIcon(AAIController *this,FString *__return_storage_ptr__)

{
  UBrainComponent *pUVar1;
  char cVar2;
  wchar_t *pwVar3;
  
  pUVar1 = (this->BrainComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UBrainComponent *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x530))();
    pwVar3 = L"/Engine/EngineResources/AICON-Green.AICON-Green";
    if (cVar2 != '\0') goto LAB_146e8d8d0;
  }
  pwVar3 = L"/Engine/EngineResources/AICON-Red.AICON-Red";
LAB_146e8d8d0:
  ::FString::FString(__return_storage_ptr__,pwVar3);
  return __return_storage_ptr__;
}

// GetFocalPoint @ 146e8dca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
AAIController::GetFocalPoint(AAIController *this,TVector<double> *__return_storage_ptr__)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  TVector<double> *pTVar6;
  UObject *pUVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  FWeakObjectPtr *this_00;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FWeakObjectPtr FVar15;
  undefined1 local_38 [48];
  
  uVar3 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  uVar9 = (this->FocusInformation).Priorities.ArrayNum - 1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  dVar2 = __real_c7efffffe0000000;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 5;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->FocusInformation).Priorities.ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar1)();
        return pTVar6;
      }
      this_00 = (FWeakObjectPtr *)
                ((this->FocusInformation).Priorities.AllocatorInstance.Data + lVar10);
      pUVar7 = FWeakObjectPtr::Get(this_00);
      if (pUVar7 != (UObject *)0x0) {
        piVar8 = (int *)(**(code **)(this->_padding_ + 0x910))(this,local_38,pUVar7);
        iVar11 = *piVar8;
        iVar12 = piVar8[1];
        iVar13 = piVar8[2];
        iVar14 = piVar8[3];
        FVar15 = *(FWeakObjectPtr *)(piVar8 + 4);
LAB_146e8ddd4:
        *(int *)&__return_storage_ptr__->field0_0x0 = iVar11;
        *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = iVar12;
        *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar13;
        *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar14;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)FVar15;
        return __return_storage_ptr__;
      }
      if ((((dVar2 < (double)this_00[1]) && ((double)this_00[1] < __real_47efffffe0000000)) &&
          (dVar2 < (double)this_00[2])) &&
         ((((double)this_00[2] < __real_47efffffe0000000 && (dVar2 < (double)this_00[3])) &&
          ((double)this_00[3] < __real_47efffffe0000000)))) {
        iVar11 = this_00[1].ObjectIndex;
        iVar12 = this_00[1].ObjectSerialNumber;
        iVar13 = this_00[2].ObjectIndex;
        iVar14 = this_00[2].ObjectSerialNumber;
        FVar15 = this_00[3];
        goto LAB_146e8ddd4;
      }
      lVar10 = lVar10 + -0x20;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return __return_storage_ptr__;
}

// GetFocalPointForPriority @ 146e8de10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
AAIController::GetFocalPointForPriority
          (AAIController *this,TVector<double> *__return_storage_ptr__,uchar param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  int *piVar3;
  FWeakObjectPtr *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FWeakObjectPtr FVar8;
  undefined1 local_28 [32];
  
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  if ((int)(uint)param_1 < (this->FocusInformation).Priorities.ArrayNum) {
    this_00 = (FWeakObjectPtr *)
              ((this->FocusInformation).Priorities.AllocatorInstance.Data +
              (ulonglong)param_1 * 0x20);
    pUVar2 = FWeakObjectPtr::Get(this_00);
    if (pUVar2 == (UObject *)0x0) {
      iVar4 = this_00[1].ObjectIndex;
      iVar5 = this_00[1].ObjectSerialNumber;
      iVar6 = this_00[2].ObjectIndex;
      iVar7 = this_00[2].ObjectSerialNumber;
      FVar8 = this_00[3];
    }
    else {
      piVar3 = (int *)(**(code **)(this->_padding_ + 0x910))(this,local_28,pUVar2);
      iVar4 = *piVar3;
      iVar5 = piVar3[1];
      iVar6 = piVar3[2];
      iVar7 = piVar3[3];
      FVar8 = *(FWeakObjectPtr *)(piVar3 + 4);
    }
    *(int *)&__return_storage_ptr__->field0_0x0 = iVar4;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = iVar5;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar6;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)FVar8;
  }
  return __return_storage_ptr__;
}

// GetFocalPointOnActor @ 146e8deb0

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

TVector<double> * __thiscall
AAIController::GetFocalPointOnActor
          (AAIController *this,TVector<double> *__return_storage_ptr__,AActor *param_1)

{
  USceneComponent *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (param_1 == (AActor *)0x0) {
    local_28 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
    dStack_20 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    local_18 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  }
  else {
    pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar1 == (USceneComponent *)0x0) {
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_28 = (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[0];
      dStack_20 = (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[1];
      local_18 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetFocusActor @ 146e8df40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall AAIController::GetFocusActor(AAIController *this)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  AActor *pAVar5;
  uint uVar6;
  longlong lVar7;
  FWeakObjectPtr *this_00;
  
  dVar2 = __real_c7efffffe0000000;
  uVar6 = (this->FocusInformation).Priorities.ArrayNum - 1;
  if ((int)uVar6 < 0) {
    return (AActor *)0x0;
  }
  lVar7 = (longlong)(int)uVar6 << 5;
  while( true ) {
    uVar4 = 0;
    if ((int)uVar6 < (this->FocusInformation).Priorities.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pAVar5 = (AActor *)(*pcVar1)();
      return pAVar5;
    }
    this_00 = (FWeakObjectPtr *)((this->FocusInformation).Priorities.AllocatorInstance.Data + lVar7)
    ;
    pAVar5 = (AActor *)FWeakObjectPtr::Get(this_00);
    if (pAVar5 != (AActor *)0x0) {
      return pAVar5;
    }
    if ((((dVar2 < (double)this_00[1]) && ((double)this_00[1] < __real_47efffffe0000000)) &&
        (dVar2 < (double)this_00[2])) &&
       ((((double)this_00[2] < __real_47efffffe0000000 && (dVar2 < (double)this_00[3])) &&
        ((double)this_00[3] < __real_47efffffe0000000)))) break;
    lVar7 = lVar7 + -0x20;
    uVar6 = uVar6 - 1;
    if ((int)uVar6 < 0) {
      return (AActor *)0x0;
    }
  }
  return (AActor *)0x0;
}

// GetGameplayTaskAvatar @ 146e8e060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall AAIController::GetGameplayTaskAvatar(AAIController *this,UGameplayTask *param_1)

{
  AActor *pAVar1;
  
  pAVar1 = (AActor *)this[-1].FocusInformation.Priorities.AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  return pAVar1;
}

// GetGameplayTaskDefaultPriority @ 146e8e090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall AAIController::GetGameplayTaskDefaultPriority(AAIController *this)

{
  return '~';
}

// GetGameplayTaskOwner @ 146e8e0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall AAIController::GetGameplayTaskOwner(AAIController *this,UGameplayTask *param_1)

{
  return (AActor *)&this[-1]._padding_;
}

// GetGameplayTasksComponent @ 146e8e0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGameplayTasksComponent * __thiscall
AAIController::GetGameplayTasksComponent(AAIController *this,UGameplayTask *param_1)

{
  return (UGameplayTasksComponent *)this->_padding_;
}

// GetGenericTeamId @ 146e8e0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGenericTeamId __thiscall AAIController::GetGenericTeamId(AAIController *this)

{
  undefined1 *in_RDX;
  
  *in_RDX = (char)this->_padding_;
  return (FGenericTeamId)(uchar)in_RDX;
}

// GetImmediateMoveDestination @ 146e8e170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
AAIController::GetImmediateMoveDestination
          (AAIController *this,TVector<double> *__return_storage_ptr__)

{
  UPathFollowingComponent *pUVar1;
  TVector<double>_u_0 local_28;
  
  pUVar1 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UPathFollowingComponent *)0x0) {
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    FBasedPosition::operator*(&pUVar1->CurrentDestination,(TVector<double> *)&local_28._s_0);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// GetMoveStatus @ 146e8e5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall AAIController::GetMoveStatus(AAIController *this)

{
  UPathFollowingComponent *pUVar1;
  
  pUVar1 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UPathFollowingComponent *)0x0) {
    return (Type)(pUVar1->Status).Value;
  }
  return Idle;
}

// GetPathFollowingAgent @ 146e8e700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

IPathFollowingAgentInterface * __thiscall AAIController::GetPathFollowingAgent(AAIController *this)

{
  IPathFollowingAgentInterface *pIVar1;
  
  pIVar1 = (IPathFollowingAgentInterface *)(this->_padding_ + 200);
  if (this->_padding_ == 0) {
    pIVar1 = (IPathFollowingAgentInterface *)0x0;
  }
  return pIVar1;
}

// GetPerceptionComponent @ 146e8e720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAIPerceptionComponent * __thiscall AAIController::GetPerceptionComponent(AAIController *this)

{
  return (UAIPerceptionComponent *)this->_padding_;
}

// GetPrivateStaticClass @ 146e8e740

UClass * __cdecl AAIController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAIController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIController",
               &Z_Registration_Info_UClass_AAIController.InnerSingleton,
               StaticRegisterNativesAAIController,0x400,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAIController>,
               InternalVTableHelperCtorCaller<AAIController>,local_res8,AController::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAIController.InnerSingleton;
}

// GrabDebugSnapshot @ 146e90370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::GrabDebugSnapshot(AAIController *this,FVisualLogEntry *param_1)

{
  int *piVar1;
  double dVar2;
  UObject *pUVar3;
  FVisualLogStatusCategory *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  int iVar8;
  AActor *pAVar9;
  FString *pFVar10;
  TVector<double> *pTVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  FName local_res8;
  FName local_res10;
  FVisualLogStatusCategory local_128;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  TVector<double> local_60;
  TVector<double> local_48;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  ::FName::ToString(&UE::VisualLogger::NAME_UnnamedCategory,&local_128.Category);
  local_128.UniqueId = -1;
  local_128.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Children.ArrayNum = 0;
  local_128.Children.ArrayMax = 0;
  ::FString::operator=(&local_128.Category,L"AI Controller");
  pUVar3 = (UObject *)this[-1]._padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UObject *)0x0) goto LAB_146e90499;
  }
  else {
    if (pUVar3 == (UObject *)0x0) {
LAB_146e90499:
      ::FString::FString(&local_e0,L"None");
      goto LAB_146e90418;
    }
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
  local_res8.Number = *(uint *)&pUVar3->field_0x1c;
  ::FName::ToString(&local_res8,&local_e0);
LAB_146e90418:
  ::FString::FString(&local_c0,L"Pawn");
  FVisualLogStatusCategory::Add(&local_128,&local_c0,&local_e0);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pAVar9 = GetFocusActor((AAIController *)&this[-1]._padding_);
  bVar15 = pAVar9 == (AActor *)0x0;
  if (bVar15) {
    pFVar10 = ::FString::FString(&local_70,L"NULL");
  }
  else {
    local_res10 = (FName)pAVar9->_padding_;
    ::FName::ToString(&local_res10,&local_b0);
    pFVar10 = &local_b0;
  }
  local_f0.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  local_f0.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  if ((bVar15) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((!bVar15) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  bVar15 = false;
  ::FString::FString(&local_a0,L"Focus");
  FVisualLogStatusCategory::Add(&local_128,&local_a0,&local_f0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (pAVar9 == (AActor *)0x0) {
    pTVar11 = GetFocalPoint((AAIController *)&this[-1]._padding_,&local_60);
    dVar2 = (pTVar11->field0_0x0)._s_0.X;
    if ((((dVar2 <= __real_c7efffffe0000000) || (__real_47efffffe0000000 <= dVar2)) ||
        (dVar2 = (pTVar11->field0_0x0)._s_0.Y, dVar2 <= __real_c7efffffe0000000)) ||
       (((__real_47efffffe0000000 <= dVar2 ||
         (dVar2 = (pTVar11->field0_0x0)._s_0.Z, dVar2 <= __real_c7efffffe0000000)) ||
        (__real_47efffffe0000000 <= dVar2)))) {
      FVar12.Data = (FScriptContainerElement *)L"Invalid";
    }
    else {
      GetFocalPoint((AAIController *)&this[-1]._padding_,&local_48);
      ::FString::PrintfImpl(&local_d0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      bVar15 = true;
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        FVar12.Data = local_d0.Data.AllocatorInstance.Data;
      }
    }
    ::FString::FString(&local_80,(wchar_t *)FVar12.Data);
    ::FString::FString(&local_90,L"Focus Location");
    FVisualLogStatusCategory::Add(&local_128,&local_90,&local_80);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if ((bVar15) && (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
  if (((pFVar4 <= &local_128) && (&local_128 < pFVar4 + (param_1->Status).ArrayMax)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar8 = (param_1->Status).ArrayNum;
  piVar1 = &(param_1->Status).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(param_1->Status).AllocatorInstance,piVar1);
  }
  FVar12.Data = local_128.Data.AllocatorInstance.Data;
  pFVar13 = (param_1->Status).AllocatorInstance.Data;
  (param_1->Status).ArrayNum = iVar8 + 1;
  pFVar13 = pFVar13 + (longlong)iVar8 * 0x38;
  *(undefined8 *)&pFVar13->field_0x0 = 0;
  iVar8 = local_128.Data.ArrayNum;
  *(int *)&pFVar13[8].field_0x0 = local_128.Data.ArrayNum;
  if (local_128.Data.ArrayNum == 0) {
    *(int *)(pFVar13 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_128.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_128.Data.ArrayNum
               ,(int *)(pFVar13 + 0xc));
    ConstructItems<FString,FString,int>(*(void **)&pFVar13->field_0x0,(FString *)FVar12.Data,iVar8);
  }
  ::FString::FString((FString *)(pFVar13 + 0x10),&local_128.Category);
  FVar12.Data = local_128.Children.AllocatorInstance.Data;
  *(int *)&pFVar13[0x20].field_0x0 = local_128.UniqueId;
  pFVar14 = pFVar13 + 0x28;
  *(undefined8 *)&pFVar14->field_0x0 = 0;
  iVar8 = local_128.Children.ArrayNum;
  *(int *)&pFVar13[0x30].field_0x0 = local_128.Children.ArrayNum;
  if (local_128.Children.ArrayNum == 0) {
    *(int *)(pFVar13 + 0x34) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,local_128.Children.ArrayNum,0,(ForAnyElementType *)pFVar14,
               local_128.Children.ArrayNum,(int *)(pFVar13 + 0x34));
    ConstructItems<FVisualLogStatusCategory,FVisualLogStatusCategory,int>
              (*(void **)&pFVar14->field_0x0,(FVisualLogStatusCategory *)FVar12.Data,iVar8);
  }
  if ((UObject *)this[-1]._padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this[-1]._padding_);
    }
    pUVar3 = (UObject *)this[-1]._padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    lVar5 = *(longlong *)(pUVar3 + 0xb);
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar5 != 0) {
      uVar16 = *(undefined4 *)(lVar5 + 0x210);
      uVar17 = *(undefined4 *)(lVar5 + 0x214);
      uVar18 = *(undefined4 *)(lVar5 + 0x218);
      uVar19 = *(undefined4 *)(lVar5 + 0x21c);
      uVar20 = *(double *)(lVar5 + 0x220);
    }
    *(undefined4 *)&(param_1->Location).field0_0x0 = uVar16;
    *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 4) = uVar17;
    *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 8) = uVar18;
    *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 0xc) = uVar19;
    (param_1->Location).field0_0x0._s_0.Z = (double)uVar20;
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x580))(plVar6,param_1);
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x540))(plVar6,param_1);
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x508))(plVar6,param_1);
  }
  DestructItems<FVisualLogStatusCategory,int>
            ((FVisualLogStatusCategory *)local_128.Children.AllocatorInstance.Data,
             local_128.Children.ArrayNum);
  if ((FVisualLogStatusCategory *)local_128.Children.AllocatorInstance.Data !=
      (FVisualLogStatusCategory *)0x0) {
    FMemory::Free(local_128.Children.AllocatorInstance.Data);
  }
  if (local_128.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Category.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_128.Data.AllocatorInstance.Data,local_128.Data.ArrayNum);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// HasPartialPath @ 146e90aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AAIController::HasPartialPath(AAIController *this)

{
  UPathFollowingComponent *pUVar1;
  FNavigationPath *pFVar2;
  
  pUVar1 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (((pUVar1 != (UPathFollowingComponent *)0x0) &&
      (pFVar2 = (pUVar1->Path).Object, pFVar2 != (FNavigationPath *)0x0)) &&
     (pFVar2->bIsPartial != 0)) {
    return true;
  }
  return false;
}

// InitializeBlackboard @ 146e90bf0

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
AAIController::InitializeBlackboard
          (AAIController *this,UBlackboardComponent *param_1,UBlackboardData *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UFunction *pUVar5;
  FName local_res8;
  UBlackboardComponent *local_18;
  UBlackboardData *local_10;
  
  if ((AAIController *)param_1->_padding_ != this) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlackboardComp.GetOwner() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AIController.cpp"
                       ,0x437,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = UBlackboardComponent::InitializeBlackboard(param_1,param_2);
  if (bVar3) {
    UBlackboardData::GetKeyID(param_2,&local_res8);
    if (local_res8.ComparisonIndex.Value._0_2_ != 0xffff) {
      pUVar1 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      UBlackboardComponent::SetValue<UBlackboardKeyType_Object>
                (param_1,local_res8.ComparisonIndex.Value._0_2_,pUVar1);
    }
    local_18 = param_1;
    local_10 = param_2;
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_AAIController_OnUsingBlackBoard);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_18);
    return true;
  }
  return false;
}

// IsFollowingAPath @ 146e92d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AAIController::IsFollowingAPath(AAIController *this)

{
  if ((this->_padding_ != 0) && (*(char *)(this->_padding_ + 0x264) != '\0')) {
    return true;
  }
  return false;
}

// K2_ClearFocus @ 146e92e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::K2_ClearFocus(AAIController *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146e92e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x938))(this,2);
  return;
}

// K2_SetFocalPoint @ 146e92ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::K2_SetFocalPoint(AAIController *this,TVector<double> *param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  local_28 = *(undefined4 *)&param_1->field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_18 = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(this->_padding_ + 0x928))(local_28,&local_28,2);
  return;
}

// K2_SetFocus @ 146e92ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::K2_SetFocus(AAIController *this,AActor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146e92ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x930))(this,param_1,2);
  return;
}

// LineOfSightTo @ 146e92f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
AAIController::LineOfSightTo
          (AAIController *this,AActor *param_1,TVector<double> *param_2,bool param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  longlong lVar3;
  USceneComponent *pUVar4;
  double dVar5;
  bool bVar6;
  FName *pFVar7;
  UWorld *pUVar8;
  UClass *pUVar9;
  int iVar10;
  int iVar11;
  AActor *pAVar12;
  AActor *pAVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_248 [32];
  float local_1e8;
  float local_1e4;
  TVector<double>_u_0 local_1e0;
  TStatId local_1c8;
  FName local_1c0;
  TVector<double> local_1b8;
  FCollisionQueryParams local_198;
  undefined1 local_108 [16];
  double local_f8;
  undefined1 local_f0 [16];
  double local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_c0 [16];
  double local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((param_1 == (AActor *)0x0) ||
     (((((param_2->field0_0x0)._s_0.X == 0.0 && ((param_2->field0_0x0)._s_0.Y == 0.0)) &&
       ((param_2->field0_0x0)._s_0.Z == 0.0)) &&
      ((((**(code **)(this->_padding_ + 0x720))(this,param_2,&local_1e0),
        (param_2->field0_0x0)._s_0.X == 0.0 && ((param_2->field0_0x0)._s_0.Y == 0.0)) &&
       ((param_2->field0_0x0)._s_0.Z == 0.0)))))) {
    return false;
  }
  pUVar1 = (UObject *)this->_padding_;
  pcVar2 = *(code **)(param_1->_padding_ + 0x728);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (*pcVar2)(param_1,&local_1b8,pUVar1);
  pAVar13 = (AActor *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar13 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar13);
  }
  pAVar12 = (AActor *)0x0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_LineOfSight =
         (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_AAIController::LineOfSightTo(AActor_const_*,UE::Math::TVector<double>,bool)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_LineOfSight>
          )0x0;
    pFVar7 = ::FName::FName(&local_1c0,"LineOfSight");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_LineOfSight,*pFVar7,L"LineOfSight",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_1c8.StatIdPtr = (TStatIdData *)StatPtr_LineOfSight;
  if (StatPtr_LineOfSight ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_AAIController::LineOfSightTo(AActor_const_*,UE::Math::TVector<double>,bool)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_LineOfSight>
       )0x0) {
    pFVar7 = ::FName::FName(&local_1c0,"LineOfSight");
    local_1c8.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_LineOfSight,*pFVar7,L"LineOfSight",
                    "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64
                    ,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"LineOfSight");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams(&local_198,::StaticName,&local_1c8,true,pAVar13);
  FCollisionQueryParams::AddIgnoredActor(&local_198,param_1);
  pUVar8 = AActor::GetWorld((AActor *)this);
  bVar6 = UWorld::LineTraceTestByChannel
                    (pUVar8,param_2,&local_1b8,ECC_Visibility,&local_198,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (!bVar6) {
LAB_146e9311e:
    bVar6 = true;
    goto LAB_146e934e0;
  }
  pUVar9 = Z_Construct_UClass_APawn_NoRegister();
  iVar10 = (int)pUVar9->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar10) ||
     (pAVar13 = param_1,
     (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar10 * 8)
     != &pUVar9->_padding_)) {
    pUVar4 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar4 != (USceneComponent *)0x0) {
      pUVar9 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
      lVar3 = pUVar4->_padding_;
      iVar10 = (int)pUVar9->_padding_;
      if ((iVar10 <= *(int *)(lVar3 + 0x38)) &&
         (pAVar13 = pAVar12,
         (longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar10 * 8) ==
         &pUVar9->_padding_)) goto LAB_146e93192;
    }
  }
  else {
LAB_146e93192:
    pUVar4 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar4 == (USceneComponent *)0x0) {
      uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar16 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      uVar15 = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.ZW.m128d_f64;
      uVar16 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.ZW.m128d_f64 + 4);
      uVar27 = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64;
      uVar28 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uVar29 = *(undefined4 *)((pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uVar30 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    }
    dVar5 = (double)CONCAT44(uVar16,uVar15);
    dVar17 = (double)CONCAT44(uVar28,uVar27) - (param_2->field0_0x0)._s_0.X;
    dVar20 = dVar5 - (param_2->field0_0x0)._s_0.Z;
    dVar19 = (double)CONCAT44(uVar30,uVar29) - (param_2->field0_0x0)._s_0.Y;
    dVar20 = dVar19 * dVar19 + dVar17 * dVar17 + dVar20 * dVar20;
    local_1e0._s_0.Z = dVar5;
    if ((dVar20 <= ___real_418e848000000000) &&
       ((pAVar13 != (AActor *)0x0 || (dVar20 <= ___real_414e848000000000)))) {
      (**(code **)(param_1->_padding_ + 0x688))(param_1,&local_1e4,&local_1e8);
      if ((!param_3) || (this->bLOSflag == 0)) {
        pUVar8 = AActor::GetWorld((AActor *)this);
        local_1e0._s_0.X = (double)CONCAT44(uVar28,uVar27);
        local_1e0._s_0.Z = (double)local_1e8 + dVar5;
        local_1e0._s_0.Y = (double)CONCAT44(uVar30,uVar29);
        bVar6 = UWorld::LineTraceTestByChannel
                          (pUVar8,param_2,(TVector<double> *)&local_1e0._s_0,ECC_Visibility,
                           &local_198,&FCollisionResponseParams::DefaultResponseParam);
        if (!bVar6) {
          bVar6 = true;
          goto LAB_146e934e0;
        }
      }
      if ((this->bSkipExtraLOSChecks == 0) &&
         (((!param_3 || (this->bLOSflag != 0)) &&
          (dVar20 = (param_2->field0_0x0)._s_0.Y,
          dVar19 = (double)CONCAT44(uVar28,uVar27) - (param_2->field0_0x0)._s_0.X,
          dVar23 = (double)CONCAT44(uVar30,uVar29) - dVar20,
          dVar17 = dVar5 - (param_2->field0_0x0)._s_0.Z,
          __real_3f1a36e2e0000000 <=
          (double)(local_1e4 * local_1e4) / (dVar23 * dVar23 + dVar19 * dVar19 + dVar17 * dVar17))))
         ) {
        dVar19 = (double)local_1e4;
        iVar10 = 0;
        dVar21 = (double)CONCAT44(uVar30,uVar29) - dVar19;
        dVar24 = (double)CONCAT44(uVar30,uVar29) - (double)(local_1e4 * __real_bf800000);
        dVar25 = dVar19 + (double)CONCAT44(uVar28,uVar27);
        dVar26 = dVar19 + (double)CONCAT44(uVar30,uVar29);
        dVar19 = (double)CONCAT44(uVar28,uVar27) - dVar19;
        dVar18 = dVar5 - (param_2->field0_0x0)._s_0.Z;
        dVar17 = dVar5 - (param_2->field0_0x0)._s_0.Z;
        dVar22 = (double)(local_1e4 * __real_bf800000) + (double)CONCAT44(uVar30,uVar29);
        local_108._8_4_ = SUB84(dVar24,0);
        local_108._0_8_ = dVar19;
        local_108._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        local_f0._8_4_ = SUB84(dVar26,0);
        local_f0._0_8_ = dVar25;
        local_f0._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        dVar18 = dVar18 * dVar18;
        dVar23 = dVar19 - (param_2->field0_0x0)._s_0.X;
        local_d8._8_4_ = SUB84(dVar21,0);
        local_d8._0_8_ = dVar19;
        local_d8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        dVar19 = dVar25 - (param_2->field0_0x0)._s_0.X;
        dVar19 = dVar19 * dVar19;
        dVar23 = dVar23 * dVar23;
        dVar17 = dVar17 * dVar17;
        local_c0._8_4_ = SUB84(dVar22,0);
        local_c0._0_8_ = dVar25;
        local_c0._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        dVar26 = (dVar26 - dVar20) * (dVar26 - dVar20) + dVar19 + dVar17;
        dVar25 = (dVar24 - dVar20) * (dVar24 - dVar20) + dVar23 + dVar18;
        dVar24 = dVar25;
        if (dVar26 <= dVar25) {
          iVar14 = 0;
          if (dVar26 < dVar25) {
            iVar10 = 1;
            dVar24 = dVar26;
            iVar14 = 0;
          }
        }
        else {
          dVar25 = dVar26;
          iVar14 = 1;
          iVar10 = 0;
        }
        dVar18 = (dVar21 - dVar20) * (dVar21 - dVar20) + dVar23 + dVar18;
        if (dVar18 <= dVar25) {
          if (dVar18 < dVar24) {
            iVar10 = 2;
            dVar24 = dVar18;
          }
        }
        else {
          iVar14 = 2;
          dVar25 = dVar18;
        }
        dVar17 = (dVar22 - dVar20) * (dVar22 - dVar20) + dVar19 + dVar17;
        local_f8 = dVar5;
        local_e0 = dVar5;
        local_c8 = dVar5;
        local_b0 = dVar5;
        if (dVar17 <= dVar25) {
          if (dVar17 < dVar24) {
            iVar10 = 3;
          }
        }
        else {
          iVar14 = 3;
        }
        do {
          iVar11 = (int)pAVar12;
          if ((iVar11 != iVar10) && (iVar11 != iVar14)) {
            pUVar8 = AActor::GetWorld((AActor *)this);
            bVar6 = UWorld::LineTraceTestByChannel
                              (pUVar8,param_2,
                               (TVector<double> *)(local_108 + (longlong)iVar11 * 0x18),
                               ECC_Visibility,&local_198,
                               &FCollisionResponseParams::DefaultResponseParam);
            if (!bVar6) goto LAB_146e9311e;
          }
          pAVar12 = (AActor *)(ulonglong)(iVar11 + 1U);
        } while ((int)(iVar11 + 1U) < 4);
      }
    }
  }
  bVar6 = false;
LAB_146e934e0:
  if (local_198.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_198.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_198.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_198.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar6;
}

// MergePaths @ 146e94380

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
AAIController::MergePaths
          (AAIController *this,TSharedPtr<FNavigationPath,1> *param_1,
          TSharedPtr<FNavigationPath,1> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UPathFollowingComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNavigationPath *pFVar7;
  FNavigationPath *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar7 = param_1->Object;
  if ((((pFVar7 == (FNavigationPath *)0x0) || (pFVar7->bIsReady == 0)) ||
      ((pFVar7->PathPoints).ArrayNum < 2)) || (pFVar7->bUpToDate == 0)) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                 L"%hs: InitialPath is Invalid");
    }
    if (1 < (byte)LogAINavigation._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAINavigation);
      return;
    }
  }
  else {
    if (param_2->Object != (FNavigationPath *)0x0) {
      pFVar7 = TSharedPtr<FNavigationPath,1>::operator->(param_2);
      if (((pFVar7->bIsReady != 0) && (1 < (pFVar7->PathPoints).ArrayNum)) &&
         (pFVar7->bUpToDate != 0)) {
        pFVar7 = TSharedPtr<FNavigationPath,1>::operator->(param_1);
        pFVar8 = TSharedPtr<FNavigationPath,1>::operator->(param_2);
        iVar14 = (pFVar7->PathPoints).ArrayNum;
        uVar12 = 0;
        uVar10 = iVar14 - 1;
        uVar11 = uVar12;
        if ((int)uVar10 < iVar14) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar9 = (longlong)(pFVar7->PathPoints).ArrayNum;
        piVar1 = &(pFVar8->PathPoints).ArrayNum;
        pFVar13 = (pFVar7->PathPoints).AllocatorInstance.Data;
        if ((*piVar1 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pFVar8->PathPoints).AllocatorInstance.Data;
        if ((((double)CONCAT44((uint)((ulonglong)
                                      (*(double *)(pFVar13 + lVar9 * 0x30 + -0x30) -
                                      *(double *)pFVar2) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(*(double *)(pFVar13 + lVar9 * 0x30 + -0x30) - *(double *)pFVar2
                                     ,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000) &&
            ((double)CONCAT44((uint)((ulonglong)
                                     (*(double *)(pFVar13 + lVar9 * 0x30 + -0x28) -
                                     *(double *)(pFVar2 + 8)) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(*(double *)(pFVar13 + lVar9 * 0x30 + -0x28) -
                                    *(double *)(pFVar2 + 8),0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000)) &&
           ((double)CONCAT44((uint)((ulonglong)
                                    (*(double *)(pFVar13 + lVar9 * 0x30 + -0x20) -
                                    *(double *)(pFVar2 + 0x10)) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(*(double *)(pFVar13 + lVar9 * 0x30 + -0x20) -
                                   *(double *)(pFVar2 + 0x10),0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) {
          pUVar3 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
          if (pUVar3 != (UPathFollowingComponent *)0x0) {
            uVar12 = pUVar3->MoveSegmentStartIndex;
          }
          iVar14 = (pFVar7->PathPoints).ArrayNum;
          if (iVar14 <= (int)uVar12) {
            return;
          }
          iVar14 = iVar14 + ~uVar12;
          if (((int)uVar12 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar13 = (pFVar7->PathPoints).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x30;
          if ((pFVar13 == (FScriptContainerElement *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ptr != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x793,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x30,8,iVar14,&(pFVar8->PathPoints).AllocatorInstance,piVar1,
                             &(pFVar8->PathPoints).ArrayMax);
          pFVar2 = (pFVar8->PathPoints).AllocatorInstance.Data;
          memmove(pFVar2 + (longlong)iVar14 * 0x30,pFVar2,(longlong)iVar6 * 0x30);
          if (iVar14 == 0) {
            return;
          }
          memcpy((pFVar8->PathPoints).AllocatorInstance.Data,pFVar13,(longlong)iVar14 * 0x30);
          return;
        }
        if (FVisualLogger::bIsRecording != 0) {
          if ((*piVar1 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
          iVar14 = (pFVar7->PathPoints).ArrayNum;
          uVar11 = iVar14 - 1;
          uVar12 = 0;
          if ((int)uVar11 < iVar14) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                     L"%hs: last %s and first %s points don\'t match.");
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if ((byte)LogAINavigation._0_1_ < 2) {
          return;
        }
        if ((*piVar1 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
        iVar14 = (pFVar7->PathPoints).ArrayNum;
        uVar11 = iVar14 - 1;
        uVar12 = 0;
        if ((int)uVar11 < iVar14) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAINavigation);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
    }
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                 L"%hs: InOutMergedPath is Invalid");
    }
    if (1 < (byte)LogAINavigation._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAINavigation);
      return;
    }
  }
  return;
}

// MoveTo @ 146e949f0

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

FPathFollowingRequestResult __thiscall
AAIController::MoveTo
          (AAIController *this,FAIMoveRequest *param_1,TSharedPtr<FNavigationPath,1> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  UPathFollowingComponent *pUVar4;
  FNavigationPath *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FAIRequestID FVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_MoveTo> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  UWorld *pUVar21;
  UClass *pUVar22;
  longlong lVar23;
  ANavigationData *pAVar24;
  FPathFollowingRequestResult FVar25;
  uint *puVar26;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar27;
  wchar_t *pwVar28;
  uint uVar29;
  UNavigationSystemV1 *this_00;
  longlong *in_R9;
  TVector<double>_u_0 *pTVar30;
  FNameEntryId FVar31;
  uint uVar32;
  FColor_u_0 local_res18 [2];
  longlong *local_res20;
  FName local_298;
  undefined4 local_288 [2];
  uint local_280;
  uint uStack_27c;
  longlong local_278;
  TReferenceControllerBase<1> *pTStack_270;
  FName local_268;
  TVector<double>_u_0 local_260;
  undefined1 local_248 [8];
  LARGE_INTEGER local_240;
  LARGE_INTEGER local_238;
  LARGE_INTEGER local_230;
  FStatMessage local_228;
  FString local_218;
  FNavigationPath *local_208;
  TReferenceControllerBase<1> *local_200;
  FStatMessage local_1f8;
  FStatMessage local_1e8;
  undefined1 local_1d8 [152];
  void *local_140;
  undefined8 local_138;
  TVector<double>_u_0 local_128;
  undefined8 local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  FName local_d8;
  FString local_d0;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_c0;
  longlong local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FString local_98;
  TVector<double>_u_0 local_88;
  TReferenceControllerBase<1> *local_70;
  FNavigationPath *pFStack_68;
  TReferenceControllerBase<1> *local_60;
  
  local_288[0] = 0;
  bVar14 = false;
  FVar18 = StatPtr_STAT_MoveTo;
  local_res20 = in_R9;
  if (StatPtr_STAT_MoveTo == (FThreadSafeStaticStat<FStat_STAT_MoveTo>)0x0) {
    pFVar17 = ::FName::FName(&local_d8,"STAT_MoveTo");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_MoveTo>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoveTo,*pFVar17,L"MoveTo",
                        "STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_298.ComparisonIndex.Value = 0;
  local_298.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar3 = *(FName *)FVar18;
  FVar31 = FVar3.ComparisonIndex.Value;
  uVar29 = FVar3.Number;
  if ((FVar31.Value != 0) || (uVar29 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = FVar31.Value;
        local_268.Number = uVar29;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AIController.cpp"
                   ,0x28a);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_280 = FVar31.Value;
      uStack_27c = uVar29;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar10 = true;
      local_298 = FVar3;
    }
  }
  if (FVisualLogger::bIsRecording != 0) {
    FAIMoveRequest::ToString((FAIMoveRequest *)param_2,&local_d0);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Log,L"MoveTo: %s");
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  (param_1->GoalActor).WeakPtr.ObjectIndex = FAIRequestID::InvalidRequest.RequestID;
  *(undefined1 *)&(param_1->GoalActor).WeakPtr.ObjectSerialNumber = 0;
  pTVar11 = param_2[2].SharedReferenceCount.ReferenceController;
  FVar31 = local_298.ComparisonIndex.Value;
  uVar29 = local_298.Number;
  if ((((ulonglong)pTVar11 & 1) == 0) ||
     ((((ulonglong)pTVar11 & 2) != 0 &&
      (bVar13 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2), !bVar13)))) {
    if (FVisualLogger::bIsRecording != 0) {
      FAIMoveRequest::ToString((FAIMoveRequest *)param_2,&local_98);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                 L"MoveTo request failed due MoveRequest not being valid. Most probably desired Goal Actor not longer exists. MoveRequest: \'%s\'"
                );
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar10) {
      return (FPathFollowingRequestResult)param_1;
    }
    if (local_298 == (FName)0x0) {
      return (FPathFollowingRequestResult)param_1;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return (FPathFollowingRequestResult)param_1;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return (FPathFollowingRequestResult)param_1;
    }
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->ScopeCount <= pFVar19->bWaitForExplicitFlush) {
      return (FPathFollowingRequestResult)param_1;
    }
    local_1e8.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
    local_1e8.NameAndInfo.Index.Value = FVar31.Value;
    QueryPerformanceCounter(&local_230);
    local_1e8.StatData.Pad[4] = '\0';
    local_1e8.StatData.Pad[5] = '\0';
    local_1e8.StatData.Pad[6] = '\0';
    local_1e8.StatData.Pad[7] = '\0';
    local_1e8.StatData.Pad[0] = local_230.s.LowPart._0_1_;
    local_1e8.StatData.Pad[1] = local_230.s.LowPart._1_1_;
    local_1e8.StatData.Pad[2] = local_230.s.LowPart._2_1_;
    local_1e8.StatData.Pad[3] = local_230.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(pFVar19,&local_1e8);
    piVar1 = &pFVar19->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar15 = *piVar1;
joined_r0x000146e9560c:
    if (iVar15 == 0) {
      FThreadStats::Flush(pFVar19,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar19,false,false);
    }
    return (FPathFollowingRequestResult)param_1;
  }
  pUVar4 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar4 == (UPathFollowingComponent *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                 L"MoveTo request failed due missing PathFollowingComponent");
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar10) {
      return (FPathFollowingRequestResult)param_1;
    }
    if (local_298 == (FName)0x0) {
      return (FPathFollowingRequestResult)param_1;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return (FPathFollowingRequestResult)param_1;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return (FPathFollowingRequestResult)param_1;
    }
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->ScopeCount <= pFVar19->bWaitForExplicitFlush) {
      return (FPathFollowingRequestResult)param_1;
    }
    local_228.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
    local_228.NameAndInfo.Index.Value = FVar31.Value;
    QueryPerformanceCounter(&local_240);
    local_228.StatData.Pad[4] = '\0';
    local_228.StatData.Pad[5] = '\0';
    local_228.StatData.Pad[6] = '\0';
    local_228.StatData.Pad[7] = '\0';
    local_228.StatData.Pad[0] = local_240.s.LowPart._0_1_;
    local_228.StatData.Pad[1] = local_240.s.LowPart._1_1_;
    local_228.StatData.Pad[2] = local_240.s.LowPart._2_1_;
    local_228.StatData.Pad[3] = local_240.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(pFVar19,&local_228);
    piVar1 = &pFVar19->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar15 = *piVar1;
    goto joined_r0x000146e9560c;
  }
  bVar13 = true;
  if ((*(uint *)&param_2[2].SharedReferenceCount.ReferenceController >> 1 & 1) == 0) {
    local_260._s_0.Z = (double)param_2[1].SharedReferenceCount.ReferenceController;
    pFVar5 = param_2[1].Object;
    iVar15 = _finite((double)(param_2->SharedReferenceCount).ReferenceController);
    dVar12 = __real_c7efffffe0000000;
    if (((iVar15 == 0) || (iVar15 = _finite((double)pFVar5), iVar15 == 0)) ||
       (iVar15 = _finite(local_260._s_0.Z), iVar15 == 0)) {
LAB_146e94f97:
      if (FVisualLogger::bIsRecording != 0) {
        pTVar11 = (param_2->SharedReferenceCount).ReferenceController;
        local_260._s_0.Z = (double)param_2[1].SharedReferenceCount.ReferenceController;
        if (((((dVar12 < (double)pTVar11) && ((double)pTVar11 < __real_47efffffe0000000)) &&
             (dVar12 < (double)param_2[1].Object)) &&
            (((double)param_2[1].Object < __real_47efffffe0000000 && (dVar12 < local_260._s_0.Z))))
           && (local_260._s_0.Z < __real_47efffffe0000000)) {
          local_70 = (param_2->SharedReferenceCount).ReferenceController;
          pFStack_68 = param_2[1].Object;
          bVar14 = true;
          local_60 = param_2[1].SharedReferenceCount.ReferenceController;
          ::FString::PrintfImpl(&local_218,L"X=%3.3f Y=%3.3f Z=%3.3f");
        }
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                   L"AAIController::MoveTo: Destination is not valid! Goal(%s)");
        if ((bVar14) && (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
      }
      bVar14 = false;
    }
    else {
      pTVar11 = (param_2->SharedReferenceCount).ReferenceController;
      local_260._s_0.Z = (double)param_2[1].SharedReferenceCount.ReferenceController;
      if (((((double)pTVar11 <= dVar12) || (__real_47efffffe0000000 <= (double)pTVar11)) ||
          (((double)param_2[1].Object <= dVar12 ||
           ((__real_47efffffe0000000 <= (double)param_2[1].Object || (local_260._s_0.Z <= dVar12))))
          )) || (__real_47efffffe0000000 <= local_260._s_0.Z)) goto LAB_146e94f97;
      if ((*(uint *)&param_2[2].SharedReferenceCount.ReferenceController >> 6 & 1) != 0) {
        pUVar21 = AActor::GetWorld((AActor *)this);
        if ((pUVar21 == (UWorld *)0x0) ||
           (this_00 = (UNavigationSystemV1 *)(pUVar21->NavigationSystem).field0_0x0.DebugPtr,
           this_00 == (UNavigationSystemV1 *)0x0)) {
LAB_146e94df0:
          this_00 = (UNavigationSystemV1 *)0x0;
        }
        else {
          pUVar22 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
          iVar15 = (int)pUVar22->_padding_;
          if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar15) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
              &pUVar22->_padding_)) goto LAB_146e94df0;
        }
        lVar23 = (**(code **)(this->_padding_ + 0x10))();
        local_110 = 0;
        local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (this_00 != (UNavigationSystemV1 *)0x0) {
          local_108._s_0.Z = (double)param_2[1].SharedReferenceCount.ReferenceController;
          local_108._s_0.X = (double)(param_2->SharedReferenceCount).ReferenceController;
          local_108._s_0.Y = (double)param_2[1].Object;
          local_c0.Object = (FNavigationQueryFilter *)0x0;
          local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (lVar23 == 0) {
            pAVar24 = UNavigationSystemV1::GetDefaultNavDataInstance(this_00,DontCreate);
          }
          else {
            pAVar24 = (ANavigationData *)
                      (**(code **)(*(longlong *)this_00 + 0x350))
                                (this_00,lVar23,&local_108,&UE::Math::TVector<double>::ZeroVector);
          }
          bVar14 = UNavigationSystemV1::ProjectPointToNavigation
                             (this_00,(TVector<double> *)&local_108._s_0,
                              (FNavLocation *)&local_128._s_0,&UE::Math::TVector<double>::ZeroVector
                              ,pAVar24,&local_c0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if (!bVar14) {
            if ((*(uint *)&param_2[2].SharedReferenceCount.ReferenceController >> 2 & 1) == 0) {
              if (FVisualLogger::bIsRecording != 0) {
                local_260._s_0.X = (double)(param_2->SharedReferenceCount).ReferenceController;
                local_260._s_0.Y = (double)param_2[1].Object;
                pwVar28 = 
                L"AAIController::MoveTo failed to project destination location to navmesh, path finding is disabled perhaps disable goal projection ?"
                ;
                local_260._s_0.Z = (double)param_2[1].SharedReferenceCount.ReferenceController;
                pTVar30 = &local_260;
                goto LAB_146e94f1c;
              }
            }
            else if (FVisualLogger::bIsRecording != 0) {
              local_88._s_0.X = (double)(param_2->SharedReferenceCount).ReferenceController;
              local_88._s_0.Y = (double)param_2[1].Object;
              pwVar28 = L"AAIController::MoveTo failed to project destination location to navmesh";
              local_88._s_0.Z = (double)param_2[1].SharedReferenceCount.ReferenceController;
              pTVar30 = &local_88;
LAB_146e94f1c:
              FVisualLogger::LocationLogfImpl
                        ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Error,
                         (TVector<double> *)&pTVar30->_s_0,0x1e,&FColor::Red,pwVar28);
            }
            bVar13 = false;
          }
        }
        if (((ulonglong)param_2[2].SharedReferenceCount.ReferenceController & 2) == 0) {
          (param_2->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)local_128._s_0.X;
          param_2[1].Object = (FNavigationPath *)local_128._s_0.Y;
          param_2[1].SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_128._s_0.Z;
        }
        if (!bVar13) goto LAB_146e953ee;
      }
      bVar14 = true;
      bVar13 = UPathFollowingComponent::HasReached
                         ((this->PathFollowingComponent).field0_0x0.DebugPtr,
                          (FAIMoveRequest *)param_2);
      if (bVar13) goto LAB_146e952ef;
    }
    if (!bVar14) goto LAB_146e953ee;
  }
  else {
    bVar14 = UPathFollowingComponent::HasReached(pUVar4,(FAIMoveRequest *)param_2);
    if (bVar14) {
LAB_146e952ef:
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogAINavigation.field_0x4,Log,
                   L"MoveTo: already at goal!");
      }
      FVar16 = UPathFollowingComponent::RequestMoveWithImmediateFinish
                         ((this->PathFollowingComponent).field0_0x0.DebugPtr,(Type)local_288,Reset);
      (param_1->GoalActor).WeakPtr.ObjectIndex = *(int *)CONCAT44(extraout_var,FVar16.RequestID);
      *(undefined1 *)&(param_1->GoalActor).WeakPtr.ObjectSerialNumber = 1;
      goto LAB_146e953ee;
    }
  }
  local_1d8._84_4_ = local_1d8._84_4_ | 3;
  bVar13 = false;
  bVar14 = false;
  local_1d8[0x70] = local_1d8[0x70] & 0xe0;
  local_1d8._24_8_ = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  local_1d8._48_8_ = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  local_1d8._72_8_ = __real_7fefffffffffffff;
  local_1d8._96_8_ = (FNavigationPath *)0x0;
  local_1d8._104_8_ = (TReferenceControllerBase<1> *)0x0;
  local_1d8._0_8_ = 0;
  local_1d8._8_8_ = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  local_1d8._16_8_ = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  local_1d8._56_8_ = 0;
  local_1d8._32_8_ = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  local_1d8._40_8_ = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  local_1d8._64_8_ = (TReferenceControllerBase<1> *)0x0;
  local_1d8._80_4_ = 0;
  local_1d8._88_4_ = 0;
  local_1d8._92_4_ = 0;
  local_1d8._116_4_ = -1.0;
  local_1d8._120_4_ = -1.0;
  local_1d8._124_4_ = -1.0;
  local_1d8._128_4_ = 0.5;
  local_1d8._136_8_ = 0;
  local_1d8._144_8_ = 0;
  local_140 = (void *)0x0;
  local_138 = 0;
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_,&local_f0);
  if ((*(uint *)&param_2[2].SharedReferenceCount.ReferenceController >> 7 & 1) != 0) {
    pUVar4 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
    pTVar11 = (pUVar4->Path).SharedReferenceCount.ReferenceController;
    pFVar5 = (pUVar4->Path).Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = bVar13;
    if ((((pFVar5 != (FNavigationPath *)0x0) && (pFVar5->bIsReady != 0)) &&
        (1 < (pFVar5->PathPoints).ArrayNum)) && (pFVar5->bUpToDate != 0)) {
      iVar15 = (pFVar5->PathPoints).ArrayNum;
      uVar27 = iVar15 - 1;
      uVar32 = 0;
      if ((int)uVar27 < iVar15) {
        uVar32 = ~uVar27 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        FVar25 = (FPathFollowingRequestResult)(*pcVar7)();
        return FVar25;
      }
      lVar23 = (longlong)(pFVar5->PathPoints).ArrayNum;
      bVar14 = true;
      pFVar6 = (pFVar5->PathPoints).AllocatorInstance.Data;
      pFVar2 = pFVar6 + lVar23 * 0x30 + -0x30;
      local_f0._s_0.X = (double)*(undefined8 *)pFVar2;
      local_f0._s_0.Y = (double)*(undefined8 *)(pFVar2 + 8);
      local_f0._s_0.Z = (double)*(undefined8 *)(pFVar6 + lVar23 * 0x30 + -0x20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  bVar13 = BuildPathfindingQuery
                     (this,(FAIMoveRequest *)param_2,(TVector<double> *)&local_f0._s_0,
                      (FPathFindingQuery *)local_1d8);
  if (bVar13) {
    local_278 = 0;
    pTStack_270 = (TReferenceControllerBase<1> *)0x0;
    (**(code **)(this->_padding_ + 0x8c0))(this,param_2,local_1d8,&local_278);
    if (bVar14) {
      FVar16 = FAIRequestID::InvalidRequest;
      if (local_278 != 0) {
        pUVar4 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
        pcVar7 = *(code **)(this->_padding_ + 0x8f8);
        local_208 = (pUVar4->Path).Object;
        local_200 = (pUVar4->Path).SharedReferenceCount.ReferenceController;
        if (local_200 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_200->SharedReferenceCount = (atomic<int>)((int)local_200->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar7)(this,&local_208);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_200);
        goto LAB_146e95292;
      }
    }
    else {
LAB_146e95292:
      FVar16.RequestID = FAIRequestID::InvalidRequest.RequestID;
      if (local_278 != 0) {
        local_a8 = local_278;
        pTStack_a0 = pTStack_270;
        pcVar7 = *(code **)(this->_padding_ + 0x8b8);
        if (pTStack_270 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_270->SharedReferenceCount =
               (atomic<int>)((int)pTStack_270->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar26 = (uint *)(*pcVar7)(this,local_248,param_2,&local_a8);
        FVar16.RequestID = *puVar26;
      }
    }
    if (FVar16.RequestID != 0xffffffff) {
      *(uint *)&this->field_0x3a8 =
           ((*(uint *)&param_2[2].SharedReferenceCount.ReferenceController >> 10 & 0xff) << 4 ^
           *(uint *)&this->field_0x3a8) & 0x10 ^ *(uint *)&this->field_0x3a8;
      (param_1->GoalActor).WeakPtr.ObjectIndex = FVar16.RequestID;
      *(undefined1 *)&(param_1->GoalActor).WeakPtr.ObjectSerialNumber = 2;
      if (local_res20 != (longlong *)0x0) {
        if (pTStack_270 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_270->SharedReferenceCount =
               (atomic<int>)((int)pTStack_270->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar11 = (TReferenceControllerBase<1> *)local_res20[1];
        *local_res20 = local_278;
        local_res20[1] = (longlong)pTStack_270;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_270)
    ;
  }
  if (local_140 != (void *)0x0) {
    FMemory::Free(local_140);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1d8._104_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1d8._64_8_);
LAB_146e953ee:
  if ((char)(param_1->GoalActor).WeakPtr.ObjectSerialNumber == '\0') {
    FVar16 = UPathFollowingComponent::RequestMoveWithImmediateFinish
                       ((this->PathFollowingComponent).field0_0x0.DebugPtr,(Type)&local_280,5);
    (param_1->GoalActor).WeakPtr.ObjectIndex = *(int *)CONCAT44(extraout_var_00,FVar16.RequestID);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar10) {
    return (FPathFollowingRequestResult)param_1;
  }
  if (local_298 == (FName)0x0) {
    return (FPathFollowingRequestResult)param_1;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return (FPathFollowingRequestResult)param_1;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return (FPathFollowingRequestResult)param_1;
  }
  pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
  if (pFVar19 == (FThreadStats *)0x0) {
    pFVar20 = FThreadStatsPool::Get();
    pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
  }
  if (pFVar19->ScopeCount <= pFVar19->bWaitForExplicitFlush) {
    return (FPathFollowingRequestResult)param_1;
  }
  local_1f8.NameAndInfo.Number = uVar29 & 0xffff6fff | 0x6000;
  local_1f8.NameAndInfo.Index.Value = FVar31.Value;
  QueryPerformanceCounter(&local_238);
  local_1f8.StatData.Pad[4] = '\0';
  local_1f8.StatData.Pad[5] = '\0';
  local_1f8.StatData.Pad[6] = '\0';
  local_1f8.StatData.Pad[7] = '\0';
  local_1f8.StatData.Pad[0] = local_238.s.LowPart._0_1_;
  local_1f8.StatData.Pad[1] = local_238.s.LowPart._1_1_;
  local_1f8.StatData.Pad[2] = local_238.s.LowPart._2_1_;
  local_1f8.StatData.Pad[3] = local_238.s.LowPart._3_1_;
  FThreadStats::AddStatMessage(pFVar19,&local_1f8);
  piVar1 = &pFVar19->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(pFVar19,false,false);
    return (FPathFollowingRequestResult)param_1;
  }
  if (FThreadStats::bIsRawStatsActive == false) {
    return (FPathFollowingRequestResult)param_1;
  }
  FThreadStats::FlushRawStats(pFVar19,false,false);
  return (FPathFollowingRequestResult)param_1;
}

// MoveToActor @ 146e95650

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
AAIController::MoveToActor
          (AAIController *this,AActor *param_1,float param_2,bool param_3,bool param_4,bool param_5,
          TSubclassOf<UNavigationQueryFilter> param_6,bool param_7)

{
  byte bVar1;
  int iVar2;
  UPathFollowingComponent *pUVar3;
  bool bVar4;
  TSubclassOf<UNavigationQueryFilter> TVar5;
  UClass *pUVar6;
  longlong lVar7;
  AActor *local_res8;
  FWeakObjectPtr local_68;
  double local_60;
  double dStack_58;
  double local_50;
  UClass *local_48;
  uint local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *local_28;
  undefined4 local_20;
  
  pUVar3 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPathFollowingComponent *)0x0) && ((pUVar3->Status).Value != '\0')) {
    (**(code **)(pUVar3->_padding_ + 0x518))
              (pUVar3,this,0x180,FAIRequestID::CurrentRequest.RequestID,1);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res8);
  TVar5 = param_6;
  local_48 = (UClass *)0x0;
  local_30 = 0;
  local_40 = ((uint)param_7 * 2 | (uint)param_4) << 2 | local_40 & 0xfffffb53 | 0x353;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_20 = 0;
  local_60 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  dStack_58 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  local_38 = 0x7f7fffff;
  lVar7 = *(longlong *)param_6.Class.field0_0x0;
  local_3c = UPathFollowingComponent::DefaultAcceptanceRadius;
  local_50 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  if (lVar7 != 0) {
    pUVar6 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar7 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (pUVar6 = *(UClass **)TVar5.Class.field0_0x0, pUVar6 != (UClass *)0x0))
      goto LAB_146e957b9;
    }
  }
  pUVar6 = (this->DefaultNavigationFilterClass).Class.field0_0x0.DebugPtr;
LAB_146e957b9:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  local_40 = ((uint)param_5 << 2 | (uint)param_3) << 8 | local_40 & 0xfffffaff;
  local_48 = pUVar6;
  local_3c = param_2;
  lVar7 = (**(code **)(this->_padding_ + 0x8b0))(this,&param_6,&local_68,0);
  bVar1 = *(byte *)(lVar7 + 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return (uint)bVar1;
}

// MoveToLocation @ 146e95870

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
AAIController::MoveToLocation
          (AAIController *this,TVector<double> *param_1,float param_2,bool param_3,bool param_4,
          bool param_5,bool param_6,TSubclassOf<UNavigationQueryFilter> param_7,bool param_8)

{
  byte bVar1;
  int iVar2;
  UPathFollowingComponent *pUVar3;
  bool bVar4;
  TSubclassOf<UNavigationQueryFilter> TVar5;
  UClass *pUVar6;
  longlong lVar7;
  undefined8 local_res8;
  FWeakObjectPtr local_68;
  double local_60;
  double dStack_58;
  double local_50;
  UClass *local_48;
  uint local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *local_28;
  undefined4 local_20;
  
  pUVar3 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPathFollowingComponent *)0x0) && ((pUVar3->Status).Value != '\0')) {
    (**(code **)(pUVar3->_padding_ + 0x518))
              (pUVar3,this,0x180,FAIRequestID::CurrentRequest.RequestID,1);
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res8);
  TVar5 = param_7;
  local_60 = (param_1->field0_0x0)._s_0.X;
  dStack_58 = (param_1->field0_0x0)._s_0.Y;
  local_50 = (param_1->field0_0x0)._s_0.Z;
  local_48 = (UClass *)0x0;
  local_30 = 0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_40 = (((uint)param_5 << 3 | (uint)param_8) * 2 | (uint)param_4) << 2 | local_40 & 0xfffffb11
             | 0x311;
  local_20 = 0;
  local_38 = 0x7f7fffff;
  lVar7 = *(longlong *)param_7.Class.field0_0x0;
  local_3c = UPathFollowingComponent::DefaultAcceptanceRadius;
  if (lVar7 != 0) {
    pUVar6 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar7 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (pUVar6 = *(UClass **)TVar5.Class.field0_0x0, pUVar6 != (UClass *)0x0))
      goto LAB_146e959af;
    }
  }
  pUVar6 = (this->DefaultNavigationFilterClass).Class.field0_0x0.DebugPtr;
LAB_146e959af:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  local_40 = ((uint)param_6 << 2 | (uint)param_3) << 8 | local_40 & 0xfffffaff;
  local_48 = pUVar6;
  local_3c = param_2;
  lVar7 = (**(code **)(this->_padding_ + 0x8b0))(this,&param_7,&local_68,0);
  bVar1 = *(byte *)(lVar7 + 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return (uint)bVar1;
}

// OnGameplayTaskActivated @ 146e95a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::OnGameplayTaskActivated(AAIController *this,UGameplayTask *param_1)

{
  return;
}

// OnGameplayTaskDeactivated @ 146e95a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::OnGameplayTaskDeactivated(AAIController *this,UGameplayTask *param_1)

{
  return;
}

// OnGameplayTaskInitialized @ 146e95a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::OnGameplayTaskInitialized(AAIController *this,UGameplayTask *param_1)

{
  return;
}

// OnGameplayTaskResourcesClaimed @ 146e95aa0

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
AAIController::OnGameplayTaskResourcesClaimed
          (AAIController *this,FGameplayResourceSet param_1,FGameplayResourceSet param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  UClass *this_00;
  longlong *plVar4;
  uint uVar5;
  
  if ((this->BrainComponent).field0_0x0.DebugPtr != (UBrainComponent *)0x0) {
    this_00 = UAIResource_Logic::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    bVar2 = UGameplayTaskResource::GetResourceID
                      ((UGameplayTaskResource *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr);
    if ((0xf < bVar2) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_27176809292365737>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                           ,0x57,"ResourceID < MaxResources"), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = 1 << (bVar2 & 0x1f);
    if ((uVar5 & param_1.Flags) == 0) {
      if ((0xf < bVar2) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_27176809292365737>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                             ,0x57,"ResourceID < MaxResources"), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((uVar5 & param_2.Flags) != 0) {
        plVar4 = &((this->BrainComponent).field0_0x0.DebugPtr)->_padding_;
        (**(code **)(*plVar4 + 0x18))(plVar4,1);
      }
    }
    else {
      plVar4 = &((this->BrainComponent).field0_0x0.DebugPtr)->_padding_;
      (**(code **)(*plVar4 + 0x10))(plVar4,1);
    }
  }
  return;
}

// OnMoveCompleted @ 146e95bc0

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
AAIController::OnMoveCompleted
          (AAIController *this,FAIRequestID param_1,FPathFollowingResult *param_2)

{
  uint local_res8;
  uchar local_resc;
  
  local_resc = (param_2->Code).Value;
  local_res8 = param_1.RequestID;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ReceiveMoveCompleted,
             &local_res8);
                    /* WARNING: Could not recover jumptable at 0x000146e95c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x8d8))(this,param_1.RequestID,(param_2->Code).Value);
  return;
}

// OnMoveCompleted @ 146e95c20

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
AAIController::OnMoveCompleted(AAIController *this,FAIRequestID param_1,Type param_2)

{
  return;
}

// OnPossess @ 146e95d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall AAIController::OnPossess(AAIController *this,APawn *param_1)

{
  UPathFollowingComponent *pUVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  UBlackboardComponent *this_00;
  UBrainComponent *pUVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  UGameplayTasksComponent *pUVar8;
  FName *pFVar9;
  UClass *pUVar10;
  AAIController *pAVar11;
  char *pcVar12;
  UObject *pUVar13;
  UFunction *pUVar14;
  UBlackboardData *pUVar15;
  longlong *plVar16;
  char *pcVar17;
  FWeakObjectPtr *pFVar18;
  FWeakObjectPtr *this_01;
  undefined1 auStack_1c8 [32];
  char *local_1a8;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196;
  <lambda_1> local_195 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  FWeakObjectPtr local_188;
  FName local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  FName local_170;
  undefined1 local_168 [8];
  UClass *local_160;
  FName local_158;
  AAIController *local_150;
  FName *local_148;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_140;
  FDestructionSentinel local_130;
  FName local_118;
  FName local_110;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FReadAccessScope local_d8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((param_1 != (APawn *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    return;
  }
  AController::OnPossess((AController *)this,param_1);
  pUVar13 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar13 == (UObject *)0x0) {
      return;
    }
  }
  else {
    if (pUVar13 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar13);
  }
  if (param_1 == (APawn *)0x0) {
    return;
  }
  pUVar1 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UPathFollowingComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x4f8))();
  }
  if (this->bWantsPlayerState != 0) {
    pcVar2 = *(code **)(this->_padding_ + 0x7a0);
    FVar7 = FNameEntryId::FromValidEName((EName)local_168);
    uStack_174 = 0;
    local_178 = *(undefined4 *)CONCAT44(extraout_var,FVar7.Value);
    (*pcVar2)(this,local_178);
  }
  pUVar8 = (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr;
  if (pUVar8 == (UGameplayTasksComponent *)0x0) {
    pcVar2 = *(code **)(param_1->_padding_ + 0x738);
    local_160 = Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_160);
    }
    pUVar8 = (UGameplayTasksComponent *)(*pcVar2)(param_1,&local_160);
    if (pUVar8 == (UGameplayTasksComponent *)0x0) {
      pFVar9 = ::FName::FName(&local_118,L"GameplayTasksComponent");
      FVar3 = *pFVar9;
      if (FVar3 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)param_1,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar10 = Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar10);
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._24_4_ = RF_NoFlags;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._8_8_ = param_1;
      local_b8._16_8_ = FVar3;
      pUVar8 = (UGameplayTasksComponent *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar16 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      UActorComponent::RegisterComponent((UActorComponent *)pUVar8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UGameplayTasksComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UGameplayTasksComponent *)0x0) goto LAB_146e96136;
  }
  pFVar9 = ::FName::FName(&local_110,0x1e,L"OnGameplayTaskResourcesClaimed",FNAME_Add);
  FVar3 = *pFVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar8->OnClaimedResourcesChange,&local_108);
  this_01 = *(FWeakObjectPtr **)&(pUVar8->OnClaimedResourcesChange).field_0x8;
  pFVar18 = this_01 + (longlong)*(int *)&(pUVar8->OnClaimedResourcesChange).field_0x10 * 2;
  for (; this_01 != pFVar18; this_01 = this_01 + 2) {
    local_198 = 0;
    FVar4.ComparisonIndex.Value = this_01[1].ObjectIndex;
    FVar4.Number = this_01[1].ObjectSerialNumber;
    if ((FVar4 == FVar3) && (local_197 = 0, this != (AAIController *)0x0)) {
      local_196 = 0;
      pAVar11 = (AAIController *)FWeakObjectPtr::GetEvenIfUnreachable(this_01);
      if (this == pAVar11) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_108);
        if (this_01 != (FWeakObjectPtr *)0x0) goto LAB_146e96136;
        goto LAB_146e95f58;
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_108);
LAB_146e95f58:
  pUVar8 = (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr;
  pcVar12 = strstr("&AAIController::OnGameplayTaskResourcesClaimed","::");
  if (pcVar12 == (char *)0x0) {
LAB_146e95fc1:
    pcVar17 = &DAT_00000002;
LAB_146e95fc6:
    local_1a8 = "&AAIController::OnGameplayTaskResourcesClaimed";
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar17 = pcVar12;
      pcVar12 = strstr(pcVar17 + 1,"::");
    } while (pcVar12 != (char *)0x0);
    if (pcVar17 == (char *)0x0) goto LAB_146e95fc1;
    pcVar17 = pcVar17 + 2;
    if (*pcVar17 == '0') goto LAB_146e95fc6;
  }
  ::FName::FName(&local_158,pcVar17);
  local_150 = this;
  if (this == (AAIController *)0x0) {
    local_150 = (AAIController *)0x0;
  }
  local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_188.ObjectIndex = 0;
  local_188.ObjectSerialNumber = 0;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  local_170 = local_158;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_150);
  }
  FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_150);
  local_180 = local_170;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_190,&local_f0);
  if ((local_180 == (FName)0x0) ||
     (pUVar13 = FWeakObjectPtr::Get(&local_188), pUVar13 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
LAB_146e960aa:
    local_148 = &local_170;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FGameplayResourceSet,FGameplayResourceSet>
    ::__Internal_BindDynamic<AAIController>'::__l2::<lambda_1>::operator()(&local_148);
  }
  else {
    pUVar14 = UObject::FindFunction(pUVar13,local_180);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    if (pUVar14 == (UFunction *)0x0) goto LAB_146e960aa;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_190,&local_d8);
  local_140.Object = local_188;
  local_140.FunctionName = local_180;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar8->OnClaimedResourcesChange,(FWriteAccessScope *)&local_130);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar8->OnClaimedResourcesChange).field_0x8,local_195,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pUVar8->OnClaimedResourcesChange,&local_140);
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
LAB_146e96136:
  this_00 = (this->Blackboard).field0_0x0.DebugPtr;
  if ((this_00 != (UBlackboardComponent *)0x0) &&
     (pUVar15 = UBlackboardComponent::GetBlackboardAsset(this_00), pUVar15 != (UBlackboardData *)0x0
     )) {
    pcVar2 = *(code **)(this->_padding_ + 0x908);
    pUVar15 = UBlackboardComponent::GetBlackboardAsset((this->Blackboard).field0_0x0.DebugPtr);
    (*pcVar2)(this,(this->Blackboard).field0_0x0.DebugPtr,pUVar15);
  }
  if ((this->bStartAILogicOnPossess != 0) &&
     (pUVar5 = (this->BrainComponent).field0_0x0.DebugPtr, pUVar5 != (UBrainComponent *)0x0)) {
    (**(code **)(pUVar5->_padding_ + 0x500))();
  }
  return;
}

// OnUnPossess @ 146e968b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::OnUnPossess(AAIController *this)

{
  UObject *pUVar1;
  UPathFollowingComponent *pUVar2;
  UGameplayTasksComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  FName local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  AController::OnUnPossess((AController *)this);
  pUVar2 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UPathFollowingComponent *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x500))();
  }
  pUVar3 = (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr;
  if ((pUVar3 == (UGameplayTasksComponent *)0x0) || ((UObject *)pUVar3->_padding_ != pUVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    UGameplayTasksComponent::EndAllResourceConsumingTasksOwnedBy
              (pUVar3,(IGameplayTaskOwnerInterface *)&this->_padding_);
  }
  if (this->bStopAILogicOnUnposses != 0) {
    (**(code **)(this->_padding_ + 0x8f0))(this);
  }
  if (!bVar5) {
    return;
  }
  pUVar3 = (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr;
  pcVar6 = strstr("&AAIController::OnGameplayTaskResourcesClaimed","::");
  if (pcVar6 == (char *)0x0) {
LAB_146e9699b:
    pcVar7 = &DAT_00000002;
  }
  else {
    do {
      pcVar7 = pcVar6;
      pcVar6 = strstr(pcVar7 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_146e9699b;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 != '0') goto LAB_146e969ce;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146e969ce:
  ::FName::FName(&local_res8,pcVar7);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pUVar3->OnClaimedResourcesChange,(UObject *)this,local_res8);
  (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr = (UGameplayTasksComponent *)0x0;
  return;
}

// OnUsingBlackBoard @ 146e96a20

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
AAIController::OnUsingBlackBoard
          (AAIController *this,UBlackboardComponent *param_1,UBlackboardData *param_2)

{
  UFunction *pUVar1;
  UBlackboardComponent *local_18;
  UBlackboardData *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AAIController_OnUsingBlackBoard);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// PauseMove @ 146e96af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AAIController::PauseMove(AAIController *this,FAIRequestID param_1)

{
  uint uVar1;
  UPathFollowingComponent *pUVar2;
  
  pUVar2 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if ((((pUVar2 != (UPathFollowingComponent *)0x0) &&
       (uVar1 = (pUVar2->CurrentRequestId).RequestID, uVar1 != 0xffffffff)) &&
      (param_1.RequestID != 0xffffffff)) &&
     (((param_1.RequestID == uVar1 || (param_1.RequestID == 0)) || (uVar1 == 0)))) {
    (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2,param_1.RequestID,0);
    return true;
  }
  return false;
}

// PostInitializeComponents @ 146e97540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::PostInitializeComponents(AAIController *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  ENetMode EVar8;
  uint uVar9;
  int iVar10;
  UBrainComponent *pUVar11;
  UBlackboardComponent *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  FVisualLogger *this_00;
  UObject *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  UClass *local_res20;
  undefined4 uStack_bc;
  UClass *local_b8;
  FName local_b0;
  FName local_a8;
  FString local_a0;
  FString local_90;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  AController::PostInitializeComponents((AController *)this);
  if (((this->bWantsPlayerState != 0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
     (EVar8 = AActor::InternalGetNetMode((AActor *)this), EVar8 != NM_Client)) {
    (**(code **)(this->_padding_ + 0x830))(this);
  }
  if ((this->BrainComponent).field0_0x0.DebugPtr == (UBrainComponent *)0x0) {
    pcVar4 = *(code **)(this->_padding_ + 0x738);
    local_res20 = Z_Construct_UClass_UBrainComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    pUVar11 = (UBrainComponent *)(*pcVar4)(this,&local_res20);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UBrainComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (this->BrainComponent).field0_0x0.DebugPtr = pUVar11;
  }
  if ((this->Blackboard).field0_0x0.DebugPtr == (UBlackboardComponent *)0x0) {
    pcVar4 = *(code **)(this->_padding_ + 0x738);
    local_b8 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8);
    }
    pUVar12 = (UBlackboardComponent *)(*pcVar4)(this,&local_b8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UBlackboardComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->Blackboard).field0_0x0.DebugPtr = pUVar12;
  }
  pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                        *)&this->_padding_);
  iVar3 = *(int *)&(pTVar13->Elements).field_0x28;
  iVar17 = 0;
  uVar9 = 1;
  iVar19 = 0;
  puVar1 = &(pTVar13->Elements).field_0x10;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(pTVar13->Elements).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_146e976cd;
      uVar16 = puVar20[lVar15 + 1];
    }
    uVar9 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar10 = iVar19 + -1 + local_res10;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_146e976cd:
  uVar16 = *(uint *)&(pTVar13->Elements).field_0x28;
  uVar21 = uVar16 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar9,iVar17);
  TStack_78.CurrentBitIndex = iVar10;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iVar10;
  TStack_78.BaseBitIndex = iVar19;
  uStack_58 = CONCAT44(uStack_bc,
                       *(int *)&(pTVar13->Elements).field_0x8 -
                       *(int *)&(pTVar13->Elements).field_0x34);
  local_80 = pTVar13;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(uint *)&(pTVar13->Elements).field_0x28;
  if (uVar16 != uVar9) {
    puVar18 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_146e977d0;
      uVar16 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar16 = local_res18 + -1 + uVar21;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_146e977d0:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar13))
    break;
    pUVar5 = *(UObject **)
              (*(longlong *)&pTVar6->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
    if (pUVar5 != (UObject *)0x0) {
      this_00 = FVisualLogger::Get();
      SRWLock = &this_00->RedirectRWLock;
      if ((SRWLock == (FPlatformRWLock *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      pUVar14 = FVisualLogger::RedirectInternal(this_00,pUVar5,(UObject *)this);
      if (SRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      if (((FVisualLogger::bIsRecording != 0) && (pUVar14 != (UObject *)0x0)) &&
         (FVisualLogger::bIsRecording != 0)) {
        local_b0.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
        local_b0.Number = *(uint *)&pUVar14->field_0x1c;
        ::FName::ToString(&local_b0,&local_90);
        local_a8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
        local_a8.Number = *(uint *)&pUVar5->field_0x1c;
        ::FName::ToString(&local_a8,&local_a0);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar5,(FName *)&LogVisual.field_0x4,Log,L"Redirected \'%s\' to \'%s\'");
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// PostRegisterAllComponents @ 146e97980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::PostRegisterAllComponents(AAIController *this)

{
  code *pcVar1;
  UAIPerceptionComponent *pUVar2;
  UClass *local_res8;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  pUVar2 = (this->PerceptionComponent).field0_0x0.DebugPtr;
  if ((pUVar2 == (UAIPerceptionComponent *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    pcVar1 = *(code **)(this->_padding_ + 0x738);
    local_res8 = Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar2 = (UAIPerceptionComponent *)(*pcVar1)(this,&local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UAIPerceptionComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->PerceptionComponent).field0_0x0.DebugPtr = pUVar2;
  }
  return;
}

// PreparePathfinding @ 146e97a10

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
AAIController::PreparePathfinding
          (AAIController *this,FAIMoveRequest *param_1,FPathFindingQuery *param_2)

{
  bool bVar1;
  TVector<double> *pTVar2;
  undefined1 local_28 [32];
  
  pTVar2 = (TVector<double> *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_,local_28);
  bVar1 = BuildPathfindingQuery(this,param_1,pTVar2,param_2);
  return bVar1;
}

// RequestMove @ 146e9cf70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAIRequestID __thiscall
AAIController::RequestMove
          (AAIController *this,FAIMoveRequest *param_1,TSharedPtr<FNavigationPath,1> *param_2)

{
  UPathFollowingComponent *pUVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FAIRequestID FVar4;
  uint *puVar5;
  undefined8 *in_R9;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong local_10;
  
  pUVar1 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  FVar4.RequestID = FAIRequestID::InvalidRequest.RequestID;
  if (pUVar1 != (UPathFollowingComponent *)0x0) {
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x510);
    local_18 = *in_R9;
    local_10 = in_R9[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    puVar5 = (uint *)(*pcVar2)(pUVar1,local_res8,param_2,&local_18);
    FVar4.RequestID = *puVar5;
  }
  pTVar3 = (TReferenceControllerBase<1> *)in_R9[1];
  (param_1->GoalActor).WeakPtr.ObjectIndex = FVar4.RequestID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (FAIRequestID)(uint)param_1;
}

// RequestPathAndMove @ 146e9cff0

/* WARNING: Removing unreachable block (ram,0x000146e9d038) */
/* WARNING: Removing unreachable block (ram,0x000146e9d05d) */
/* WARNING: Removing unreachable block (ram,0x000146e9d061) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAIRequestID __thiscall
AAIController::RequestPathAndMove
          (AAIController *this,FAIMoveRequest *param_1,FPathFindingQuery *param_2)

{
  (param_1->GoalActor).WeakPtr.ObjectIndex = FAIRequestID::InvalidRequest.RequestID;
  (**(code **)(this->_padding_ + 0x8c0))(this,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (FAIRequestID)(uint)param_1;
}

// Reset @ 146e9d230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::Reset(AAIController *this)

{
  UPathFollowingComponent *pUVar1;
  
  AController::Reset((AController *)this);
  pUVar1 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UPathFollowingComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x518))
              (pUVar1,this,0x110,FAIRequestID::CurrentRequest.RequestID,0);
  }
  return;
}

// ResumeMove @ 146e9dfa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AAIController::ResumeMove(AAIController *this,FAIRequestID param_1)

{
  uint uVar1;
  UPathFollowingComponent *pUVar2;
  
  pUVar2 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if ((((pUVar2 != (UPathFollowingComponent *)0x0) &&
       (uVar1 = (pUVar2->CurrentRequestId).RequestID, uVar1 != 0xffffffff)) &&
      (param_1.RequestID != 0xffffffff)) &&
     (((param_1.RequestID == uVar1 || (param_1.RequestID == 0)) || (uVar1 == 0)))) {
    (**(code **)(pUVar2->_padding_ + 0x528))();
    return true;
  }
  return false;
}

// RunBehaviorTree @ 146e9e470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall AAIController::RunBehaviorTree(AAIController *this,UBehaviorTree *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UBehaviorTreeComponent *this_00;
  UBehaviorTree *pUVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  TObjectPtr<UBlackboardComponent>_u_0 local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (param_1 == (UBehaviorTree *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogBehaviorTree.field_0x4,Warning,
                 L"RunBehaviorTree: Unable to run NULL behavior tree");
    }
    return false;
  }
  local_f8 = (TObjectPtr<UBlackboardComponent>_u_0)(this->Blackboard).field0_0x0.DebugPtr;
  bVar4 = true;
  if (((param_1->BlackboardAsset).field0_0x0.DebugPtr != (UBlackboardData *)0x0) &&
     (((local_f8.DebugPtr == (UBlackboardComponent *)0x0 ||
       (cVar3 = (**(code **)((local_f8.DebugPtr)->_padding_ + 0x4f8))(), cVar3 == '\0')) &&
      (bVar4 = UseBlackboard(this,(param_1->BlackboardAsset).field0_0x0.DebugPtr,&local_f8.DebugPtr)
      , !bVar4)))) {
    return bVar4;
  }
  if ((this->BrainComponent).field0_0x0.DebugPtr != (UBrainComponent *)0x0) {
    pUVar7 = UBehaviorTreeComponent::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->BrainComponent,pUVar7);
    if ((bVar5) &&
       (this_00 = (UBehaviorTreeComponent *)(this->BrainComponent).field0_0x0.DebugPtr,
       this_00 != (UBehaviorTreeComponent *)0x0)) goto LAB_146e9e5eb;
  }
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogBehaviorTree.field_0x4,Log,
               L"RunBehaviorTree: spawning BehaviorTreeComponent..");
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UBehaviorTreeComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar7);
  local_b8._8_8_ = this;
  this_00 = (UBehaviorTreeComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  FVisualLogger::Redirect((UObject *)this_00,(UObject *)this);
LAB_146e9e5eb:
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (this_00 == (UBehaviorTreeComponent *)0x0)) {
    (this->BrainComponent).field0_0x0.DebugPtr = (UBrainComponent *)this_00;
    if ((this_00 == (UBehaviorTreeComponent *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BTComp != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AIController.cpp"
                           ,0x3fb,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_00);
    (this->BrainComponent).field0_0x0.DebugPtr = (UBrainComponent *)this_00;
  }
  pUVar8 = UBehaviorTreeComponent::GetRootTree(this_00);
  if (((pUVar8 == param_1) && (this_00->bIsRunning != '\0')) &&
     ((this_00->InstanceStack).ArrayNum != 0)) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this_00->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Skipping behavior start request - it\'s already running");
    }
  }
  else {
    if ((pUVar8 != (UBehaviorTree *)0x0) && (FVisualLogger::bIsRecording != 0)) {
      local_f0 = (FName)param_1->_padding_;
      ::FName::ToString(&local_f0,&local_d0);
      local_e8 = (FName)pUVar8->_padding_;
      local_100 = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        local_100 = local_d0.Data.AllocatorInstance.Data;
      }
      ::FName::ToString(&local_e8,&local_e0);
      local_108 = (FScriptContainerElement *)L"";
      if (local_e0.Data.ArrayNum != 0) {
        local_108 = local_e0.Data.AllocatorInstance.Data;
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this_00->_padding_,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"Abandoning behavior %s to start new one (%s)");
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    UBehaviorTreeComponent::StopTree(this_00,Safe);
    (this_00->TreeStartInfo).bPendingInitialize = '\x01';
    (this_00->TreeStartInfo).Asset = param_1;
    (this_00->TreeStartInfo).ExecuteMode = Looped;
    UBehaviorTreeComponent::ProcessPendingInitialize(this_00);
  }
  return bVar4;
}

// SetFocalPoint @ 146e9eeb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
AAIController::SetFocalPoint(AAIController *this,TVector<double> *param_1,uchar param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  longlong lVar7;
  
  (**(code **)(this->_padding_ + 0x938))(this,(ulonglong)param_2);
  if ((this->FocusInformation).Priorities.ArrayNum <= (int)(uint)param_2) {
    TArray<FFocusKnowledge::FFocusItem,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->FocusInformation).Priorities,param_2 + 1,Default);
  }
  if ((this->FocusInformation).Priorities.ArrayNum <= (int)(uint)param_2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->FocusInformation).Priorities.AllocatorInstance.Data;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  lVar7 = (ulonglong)param_2 * 0x20;
  pFVar1 = pFVar3 + lVar7 + 8;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar5;
  *(double *)(pFVar3 + lVar7 + 0x18) = dVar2;
  return;
}

// SetFocus @ 146e9ef70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall AAIController::SetFocus(AAIController *this,AActor *param_1,uchar param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  AActor *local_res8;
  
  (**(code **)(this->_padding_ + 0x938))(this,(ulonglong)param_2);
  if (param_1 != (AActor *)0x0) {
    uVar4 = (uint)param_2;
    if ((this->FocusInformation).Priorities.ArrayNum <= (int)uVar4) {
      TArray<FFocusKnowledge::FFocusItem,TSizedDefaultAllocator<32>_>::SetNum
                (&(this->FocusInformation).Priorities,uVar4 + 1,Default);
    }
    if ((this->FocusInformation).Priorities.ArrayNum <= (int)uVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->FocusInformation).Priorities.AllocatorInstance.Data;
    local_res8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)(pFVar1 + (ulonglong)param_2 * 0x20),(FObjectPtr)&local_res8);
  }
  return;
}

// SetGenericTeamId @ 146e9f040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::SetGenericTeamId(AAIController *this,FGenericTeamId *param_1)

{
  if ((uchar)this->_padding_ != param_1->TeamID) {
    *(uchar *)&this->_padding_ = param_1->TeamID;
  }
  return;
}

// SetMoveBlockDetection @ 146e9f170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::SetMoveBlockDetection(AAIController *this,bool param_1)

{
  int *piVar1;
  UPathFollowingComponent *pUVar2;
  
  pUVar2 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (UPathFollowingComponent *)0x0) {
    return;
  }
  pUVar2->bUseBlockDetection = '\0';
  pUVar2->field_0x265 = pUVar2->field_0x265 | param_1 << 4;
  pUVar2->LastSampleTime = 0.0;
  pUVar2->NextSampleIdx = 0;
  piVar1 = &(pUVar2->LocationSamples).ArrayMax;
  (pUVar2->LocationSamples).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(pUVar2->LocationSamples).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetPathFollowingComponent @ 146e9f2e0

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
AAIController::SetPathFollowingComponent(AAIController *this,UPathFollowingComponent *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPathFollowingComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->PathFollowingComponent).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->PathFollowingComponent).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UPathFollowingComponent *)0x0) {
      return;
    }
  }
  FVisualLogger::Redirect((UObject *)param_1,(UObject *)this);
  return;
}

// SetPawn @ 146e9f340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::SetPawn(AAIController *this,APawn *param_1)

{
  UBlackboardComponent *pUVar1;
  UObject *pUVar2;
  UBlackboardData *this_00;
  FName local_res8;
  
  AController::SetPawn((AController *)this,param_1);
  pUVar1 = (this->Blackboard).field0_0x0.DebugPtr;
  if (pUVar1 != (UBlackboardComponent *)0x0) {
    this_00 = UBlackboardComponent::GetBlackboardAsset(pUVar1);
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::GetKeyID(this_00,&local_res8);
      if (local_res8.ComparisonIndex.Value._0_2_ != 0xffff) {
        pUVar1 = (this->Blackboard).field0_0x0.DebugPtr;
        pUVar2 = (UObject *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        UBlackboardComponent::SetValue<UBlackboardKeyType_Object>
                  (pUVar1,local_res8.ComparisonIndex.Value._0_2_,pUVar2);
      }
    }
  }
  return;
}

// SetPerceptionComponent @ 146e9f3e0

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
AAIController::SetPerceptionComponent(AAIController *this,UAIPerceptionComponent *param_1)

{
  if (((this->PerceptionComponent).field0_0x0.DebugPtr != (UAIPerceptionComponent *)0x0) &&
     (FVisualLogger::bIsRecording != 0)) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogAIPerception.field_0x4,Warning,
               L"Setting perception component while AIController already has one!");
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UAIPerceptionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PerceptionComponent).field0_0x0.DebugPtr = param_1;
  return;
}

// ShouldPostponePathUpdates @ 146e9f4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AAIController::ShouldPostponePathUpdates(AAIController *this)

{
  bool bVar1;
  
  if ((this->_padding_ != 0) && ((*(byte *)(this->_padding_ + 0x266) & 2) != 0)) {
    return true;
  }
  bVar1 = AController::ShouldPostponePathUpdates((AController *)this);
  return bVar1;
}

// ShouldSyncBlackboardWith @ 146e9f510

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
AAIController::ShouldSyncBlackboardWith(AAIController *this,UBlackboardComponent *param_1)

{
  UBlackboardComponent *this_00;
  bool bVar1;
  UBlackboardData *pUVar2;
  UBlackboardData *pUVar3;
  
  this_00 = (this->Blackboard).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardComponent *)0x0) {
    pUVar2 = UBlackboardComponent::GetBlackboardAsset(this_00);
    if (pUVar2 != (UBlackboardData *)0x0) {
      pUVar2 = UBlackboardComponent::GetBlackboardAsset(param_1);
      if (pUVar2 != (UBlackboardData *)0x0) {
        pUVar2 = UBlackboardComponent::GetBlackboardAsset((this->Blackboard).field0_0x0.DebugPtr);
        pUVar3 = UBlackboardComponent::GetBlackboardAsset(param_1);
        bVar1 = UBlackboardData::IsRelatedTo(pUVar2,pUVar3);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// StaticRegisterNativesAAIController @ 146ea0040

void __cdecl AAIController::StaticRegisterNativesAAIController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_AAIController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopMovement @ 146ea02d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::StopMovement(AAIController *this)

{
  UPathFollowingComponent *pUVar1;
  
  pUVar1 = (this->PathFollowingComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UPathFollowingComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x518))
              (pUVar1,this,0x140,FAIRequestID::CurrentRequest.RequestID,0);
  }
  return;
}

// SuggestTossVelocity @ 146ea17b0

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
AAIController::SuggestTossVelocity
          (AAIController *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4,bool param_5,float param_6,bool param_7)

{
  UObject *pUVar1;
  bool bVar2;
  longlong *plVar3;
  FSuggestProjectileVelocityParameters local_98;
  
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    pUVar1 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    plVar3 = (longlong *)(**(code **)(*(longlong *)pUVar1 + 0x510))(pUVar1);
    if (plVar3 != (longlong *)0x0) {
      local_98.OverrideGravityZ = (float)(**(code **)(*plVar3 + 0x788))(plVar3);
      goto LAB_146ea183c;
    }
  }
  local_98.OverrideGravityZ = 0.0;
LAB_146ea183c:
  local_98.Start.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_98.Start.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_98.Start.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_98.ActorsToIgnore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.End.field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_98.End.field0_0x0._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_98.ActorsToIgnore.ArrayNum = 0;
  local_98.ActorsToIgnore.ArrayMax = 0;
  local_98.bDrawDebug = false;
  local_98.bAcceptClosestOnNoSolutions = false;
  local_98.TossSpeed = param_4;
  local_98.bFavorHighArc = param_5;
  local_98.TraceOption = param_7 + TraceFullPath;
  local_98.End.field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_98.ResponseParam.CollisionResponse.field0_0x0._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_98.ResponseParam.CollisionResponse.field0_0x0._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_98.CollisionRadius = param_6;
  local_98.ResponseParam.CollisionResponse.field0_0x0._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_98.ResponseParam.CollisionResponse.field0_0x0._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_98.WorldContextObject = (UObject *)this;
  bVar2 = UGameplayStatics::SuggestProjectileVelocity(&local_98,param_1);
  if (local_98.ActorsToIgnore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ActorsToIgnore.AllocatorInstance.Data);
  }
  return bVar2;
}

// Tick @ 146ea19e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::Tick(AAIController *this,float param_1)

{
  AActor::Tick((AActor *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146ea1a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x920))(this,param_1,1);
  return;
}

// UnclaimTaskResource @ 146ea2f10

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
AAIController::UnclaimTaskResource(AAIController *this,TSubclassOf<UGameplayTaskResource> param_1)

{
  int iVar1;
  UGameplayTasksComponent *this_00;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  UClass *pUVar5;
  UGameplayTask *this_01;
  longlong lVar6;
  FName local_res8;
  FString local_28;
  
  if ((this->CachedGameplayTasksComponent).field0_0x0.DebugPtr == (UGameplayTasksComponent *)0x0) {
    return;
  }
  bVar3 = UGameplayTaskResource::GetResourceID
                    ((TSubclassOf<UGameplayTaskResource> *)param_1.Class.field0_0x0);
  if ((0xf < bVar3) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_27176809292365737>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                         ,0x57,"ResourceID < MaxResources"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->ScriptClaimedResources).Flags >> (bVar3 & 0x1f) & 1) == 0) {
    return;
  }
  if ((0xf < bVar3) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_27176809292365743>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                         ,0x51,"ResourceID < MaxResources"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->ScriptClaimedResources).Flags =
       (this->ScriptClaimedResources).Flags & ~(ushort)(1 << (bVar3 & 0x1f));
  if (FVisualLogger::bIsRecording != 0) {
    pUVar5 = TSubclassOf<UGameplayTaskResource>::operator*
                       ((TSubclassOf<UGameplayTaskResource> *)param_1.Class.field0_0x0);
    if (pUVar5 == (UClass *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_res8,&local_28);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Log,L"UnclaimTaskResource %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  this_00 = (this->CachedGameplayTasksComponent).field0_0x0.DebugPtr;
  if ((lVar6 != 0) &&
     (pUVar5 = Z_Construct_UClass_UGameplayTaskResource_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = *(longlong *)param_1.Class.field0_0x0;
      goto LAB_146ea308c;
    }
  }
  lVar6 = 0;
LAB_146ea308c:
  this_01 = UGameplayTasksComponent::FindResourceConsumingTaskByName
                      (this_00,*(FName *)(lVar6 + 0x18));
  if (this_01 != (UGameplayTask *)0x0) {
    UGameplayTask::EndTask(this_01);
  }
  if (((FVisualLogger::bIsRecording != 0) && (this_01 == (UGameplayTask *)0x0)) &&
     (FVisualLogger::bIsRecording != 0)) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Warning,
               L"UnclaimTaskResource failed to find UGameplayTask_ClaimResource instance");
  }
  return;
}

// UpdateControlRotation @ 146ea42d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AAIController::UpdateControlRotation(AAIController *this,float param_1,bool param_2)

{
  AActor *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  int iVar9;
  double *pdVar10;
  AActor *pAVar11;
  UClass *pUVar12;
  TRotator<double> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar29;
  undefined1 auVar24 [16];
  double dVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double local_f8;
  double dStack_f0;
  double dStack_e8;
  TVector<double>_u_0 local_e0;
  TRotator<double> local_c8;
  TRotator<double> local_a8 [6];
  
  this_00 = (AActor *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (this_00 == (AActor *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 == (AActor *)0x0) {
    return;
  }
  (**(code **)(this->_padding_ + 0x7a8))(this,&local_f8);
  GetFocalPoint(this,(TVector<double> *)&local_e0._s_0);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = __real_c7efffffe0000000;
  if (((((local_e0._s_0.X <= __real_c7efffffe0000000) ||
        (__real_47efffffe0000000 <= local_e0._s_0.X)) ||
       (local_e0._s_0.Y <= __real_c7efffffe0000000)) ||
      ((__real_47efffffe0000000 <= local_e0._s_0.Y || (local_e0._s_0.Z <= __real_c7efffffe0000000)))
      ) || (__real_47efffffe0000000 <= local_e0._s_0.Z)) {
    if (this->bSetControlRotationFromPawnOrientation == 0) {
      uVar37 = SUB84(local_f8,0);
      uVar38 = (undefined4)((ulonglong)local_f8 >> 0x20);
    }
    else {
      pTVar13 = AActor::GetActorRotation(this_00,local_a8);
      uVar37 = *(undefined4 *)&pTVar13->Pitch;
      uVar38 = *(undefined4 *)((longlong)&pTVar13->Pitch + 4);
      local_f8 = pTVar13->Pitch;
      dStack_f0 = pTVar13->Yaw;
      dStack_e8 = pTVar13->Roll;
    }
  }
  else {
    pdVar10 = (double *)(**(code **)(this_00->_padding_ + 0x838))(this_00,local_a8);
    local_e0._s_0.Z = local_e0._s_0.Z - pdVar10[2];
    local_e0._s_0.Y = local_e0._s_0.Y - pdVar10[1];
    local_e0._s_0.X = local_e0._s_0.X - *pdVar10;
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_e0._s_0,&local_c8);
    uVar37 = SUB84(local_c8.Pitch,0);
    uVar38 = (undefined4)((ulonglong)local_c8.Pitch >> 0x20);
    dStack_f0 = local_c8.Yaw;
    dStack_e8 = local_c8.Roll;
    local_f8 = local_c8.Pitch;
  }
  if ((double)CONCAT44(uVar38,uVar37) != 0.0) {
    pAVar11 = GetFocusActor(this);
    if (pAVar11 != (AActor *)0x0) {
      pUVar12 = Z_Construct_UClass_APawn_NoRegister();
      iVar9 = (int)pUVar12->_padding_;
      if ((iVar9 <= *(int *)(pAVar11->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar12->_padding_)) goto LAB_146ea447b;
    }
    local_f8 = 0.0;
  }
LAB_146ea447b:
  (**(code **)(this->_padding_ + 0x7b0))(this,&local_f8);
  if (param_2) {
    pAVar11 = this_00;
    pTVar13 = AActor::GetActorRotation(this_00,&local_c8);
    local_c8.Yaw = local_c8.Yaw - dStack_f0;
    auVar20._8_4_ = SUB84(local_c8.Yaw,0);
    auVar20._0_8_ = local_c8.Pitch - local_f8;
    auVar20._12_4_ = (int)((ulonglong)local_c8.Yaw >> 0x20);
    auVar21 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar31 = roundpd(auVar31,auVar21,3);
    dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar32._0_8_ = auVar31._0_8_ * dVar4;
    dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar32._8_8_ = auVar31._8_8_ * dVar5;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = local_c8.Roll - dStack_e8;
    auVar31 = divpd(auVar22,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar30 = (local_c8.Pitch - local_f8) - auVar32._0_8_;
    local_c8.Yaw = local_c8.Yaw - auVar32._8_8_;
    auVar31 = roundpd(auVar32,auVar31,3);
    dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    dVar7 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar23._8_4_ = SUB84(local_c8.Yaw,0);
    auVar23._0_8_ = dVar30;
    auVar23._12_4_ = (int)((ulonglong)local_c8.Yaw >> 0x20);
    dVar29 = auVar23._8_8_ + dVar5;
    dVar2 = (local_c8.Roll - dStack_e8) - auVar31._0_8_ * dVar6;
    dVar3 = 0.0 - auVar31._8_8_ * dVar7;
    uVar15 = -(ulonglong)(0.0 <= dVar30);
    uVar16 = -(ulonglong)(0.0 <= local_c8.Yaw);
    auVar33._0_8_ = uVar15 & (ulonglong)dVar30;
    auVar33._8_4_ = (undefined4)(uVar16 & (ulonglong)local_c8.Yaw);
    auVar33._12_4_ = (undefined4)((uVar16 & (ulonglong)local_c8.Yaw) >> 0x20);
    auVar39._0_4_ = ~(uint)uVar15 & SUB84(dVar30 + dVar4,0);
    auVar39._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar30 + dVar4) >> 0x20);
    auVar39._8_4_ = ~(uint)uVar16 & SUB84(dVar29,0);
    auVar39._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar29 >> 0x20);
    auVar39 = auVar39 | auVar33;
    auVar24._8_4_ = SUB84(dVar3,0);
    auVar24._0_8_ = dVar2;
    auVar24._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dVar30 = auVar24._8_8_ + dVar7;
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar39._0_8_);
    uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar39._8_8_);
    uVar15 = -(ulonglong)(0.0 <= dVar2);
    uVar18 = -(ulonglong)(0.0 <= dVar3);
    auVar40._0_4_ = ~(uint)uVar15 & SUB84(dVar2 + dVar6,0);
    auVar40._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar6) >> 0x20);
    auVar40._8_4_ = ~(uint)uVar18 & SUB84(dVar30,0);
    auVar40._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar30 >> 0x20);
    auVar21._8_4_ = (int)((ulonglong)dVar3 & uVar18);
    auVar21._0_8_ = (ulonglong)dVar2 & uVar15;
    auVar21._12_4_ = (int)(((ulonglong)dVar3 & uVar18) >> 0x20);
    auVar40 = auVar40 | auVar21;
    auVar25._0_8_ = (ulonglong)(auVar39._0_8_ - dVar4) & uVar16;
    uVar15 = uVar17 & (ulonglong)(auVar39._8_8_ - dVar5);
    auVar25._8_4_ = (undefined4)uVar15;
    auVar25._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar34._0_4_ = ~(uint)uVar16 & auVar39._0_4_;
    auVar34._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar39._4_4_;
    auVar34._8_4_ = ~(uint)uVar17 & auVar39._8_4_;
    auVar34._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar39._12_4_;
    auVar25 = auVar25 | auVar34;
    auVar35._8_4_ = SUB84(__real_3f50624de0000000,0);
    auVar35._0_8_ = __real_3f50624de0000000;
    auVar35._12_4_ = (int)((ulonglong)__real_3f50624de0000000 >> 0x20);
    auVar26._0_8_ =
         (double)CONCAT44(auVar25._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar25._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar26._8_4_ = auVar25._8_4_ & _UNK_15061cc88;
    auVar26._12_4_ = auVar25._12_4_ & _UNK_15061cc8c;
    auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < auVar26._8_8_);
    auVar36._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar26._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar40._0_8_);
    uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar40._8_8_);
    iVar9 = movmskpd((int)pTVar13,auVar36);
    auVar27._0_8_ = uVar16 & (ulonglong)(auVar40._0_8_ - dVar6);
    uVar15 = uVar17 & (ulonglong)(auVar40._8_8_ - dVar7);
    auVar27._8_4_ = (undefined4)uVar15;
    auVar27._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar1._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar40._4_4_;
    auVar1._0_4_ = ~(uint)uVar16 & auVar40._0_4_;
    auVar1._8_4_ = ~(uint)uVar17 & auVar40._8_4_;
    auVar1._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar40._12_4_;
    auVar27 = auVar27 | auVar1;
    auVar28._0_8_ =
         (double)CONCAT44(auVar27._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar27._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar28._8_4_ = auVar27._8_4_ & _UNK_15061cc88;
    auVar28._12_4_ = auVar27._12_4_ & _UNK_15061cc8c;
    lVar19 = -(ulonglong)(__real_3f50624de0000000 < auVar28._8_8_);
    auVar8._8_4_ = (int)lVar19;
    auVar8._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar28._0_8_);
    auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar14 = movmskpd((int)pAVar11,auVar8);
    if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
      local_c8.Pitch = local_f8;
      local_c8.Yaw = dStack_f0;
      local_c8.Roll = dStack_e8;
      (**(code **)(this_00->_padding_ + 0x850))(this_00,&local_c8,param_1);
    }
  }
  return;
}

// UseBlackboard @ 146ea4b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
AAIController::UseBlackboard
          (AAIController *this,UBlackboardData *param_1,UBlackboardComponent **param_2)

{
  code *pcVar1;
  FName FVar2;
  undefined1 uVar3;
  UBlackboardComponent *pUVar4;
  UBlackboardData *pUVar5;
  FName *pFVar6;
  UClass *pUVar7;
  longlong *plVar8;
  ForAnyElementType FVar9;
  undefined1 auStack_118 [32];
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1 == (UBlackboardData *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"UseBlackboard: trying to use NULL Blackboard asset. Ignoring");
    }
    return false;
  }
  uVar3 = 1;
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_e8 = (FName)Z_Construct_UClass_UBlackboardComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e8);
  }
  pUVar4 = (UBlackboardComponent *)(*pcVar1)(this,&local_e8);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar4 == (UBlackboardComponent *)0x0)) {
    (this->Blackboard).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UBlackboardComponent *)0x0) {
      pFVar6 = ::FName::FName(&local_e8,L"BlackboardComponent");
      FVar2 = *pFVar6;
      if (FVar2 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar7 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar7);
      local_b8._24_4_ = RF_NoFlags;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._8_8_ = this;
      local_b8._16_8_ = FVar2;
      pUVar4 = (UBlackboardComponent *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar8 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UBlackboardComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->Blackboard).field0_0x0.DebugPtr = pUVar4;
      FVisualLogger::Redirect((UObject *)pUVar4,(UObject *)this);
      pUVar4 = (this->Blackboard).field0_0x0.DebugPtr;
      if (pUVar4 != (UBlackboardComponent *)0x0) {
        uVar3 = (**(code **)(this->_padding_ + 0x908))(this,pUVar4,param_1);
        UActorComponent::RegisterComponent
                  ((UActorComponent *)(this->Blackboard).field0_0x0.DebugPtr);
      }
      goto LAB_146ea4dc8;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->Blackboard).field0_0x0.DebugPtr = pUVar4;
  }
  pUVar5 = UBlackboardComponent::GetBlackboardAsset(pUVar4);
  if (pUVar5 != (UBlackboardData *)0x0) {
    pUVar5 = UBlackboardComponent::GetBlackboardAsset((this->Blackboard).field0_0x0.DebugPtr);
    if (pUVar5 == param_1) goto LAB_146ea4dc8;
    if (FVisualLogger::bIsRecording != 0) {
      pUVar5 = UBlackboardComponent::GetBlackboardAsset((this->Blackboard).field0_0x0.DebugPtr);
      if (pUVar5 == (UBlackboardData *)0x0) {
        ::FString::FString(&local_e0,L"None");
      }
      else {
        local_e8 = (FName)pUVar5->_padding_;
        ::FName::ToString(&local_e8,&local_e0);
      }
      local_e8 = (FName)param_1->_padding_;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_e0.Data.ArrayNum != 0) {
        FVar9.Data = local_e0.Data.AllocatorInstance.Data;
      }
      ::FName::ToString(&local_e8,&local_d0);
      local_f8 = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        local_f8 = local_d0.Data.AllocatorInstance.Data;
      }
      local_f0 = FVar9.Data;
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"UseBlackboard: requested blackboard %s while already has %s instantiated. Forcing new BB."
                );
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar3 = (**(code **)(this->_padding_ + 0x908))
                    (this,(this->Blackboard).field0_0x0.DebugPtr,param_1);
LAB_146ea4dc8:
  *param_2 = (UBlackboardComponent *)(this->Blackboard).field0_0x0;
  return (bool)uVar3;
}

// _getUObject @ 146ea6130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall AAIController::_getUObject(AAIController *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{176}' @ 146ea6140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl AAIController::_getUObject`adjustor{176}'
   (void)const __ptr64 */

UObject * __thiscall AAIController::_getUObject_adjustor_176__(AAIController *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((AAIController *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{184}' @ 146ea6154

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl AAIController::_getUObject`adjustor{184}'
   (void)const __ptr64 */

UObject * __thiscall AAIController::_getUObject_adjustor_184__(AAIController *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((AAIController *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{192}' @ 146ea6168

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl AAIController::_getUObject`adjustor{192}'
   (void)const __ptr64 */

UObject * __thiscall AAIController::_getUObject_adjustor_192__(AAIController *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((AAIController *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{200}' @ 146ea617c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl AAIController::_getUObject`adjustor{200}'
   (void)const __ptr64 */

UObject * __thiscall AAIController::_getUObject_adjustor_200__(AAIController *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((AAIController *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execClaimTaskResource @ 146ea6420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl AAIController::execClaimTaskResource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  ClaimTaskResource((AAIController *)param_1,(TSubclassOf<UGameplayTaskResource>)&local_res20);
  return;
}

// execGetAIPerceptionComponent @ 146ea64d0

void __cdecl
AAIController::execGetAIPerceptionComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x18);
  return;
}

// execGetFocalPoint @ 146ea6500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl AAIController::execGetFocalPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetFocalPoint((AAIController *)param_1,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// execGetFocalPointOnActor @ 146ea6550

void __cdecl AAIController::execGetFocalPointOnActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  undefined1 local_28 [32];
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x910))(param_1,local_28,local_res8);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetFocusActor @ 146ea6610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl AAIController::execGetFocusActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  AActor *pAVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar1 = GetFocusActor((AAIController *)param_1);
  *(AActor **)param_3 = pAVar1;
  return;
}

// execGetImmediateMoveDestination @ 146ea6650

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
AAIController::execGetImmediateMoveDestination(UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector<double>_u_0 local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x17].field_0x18 == 0) {
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    FBasedPosition::operator*
              ((FBasedPosition *)(*(longlong *)&param_1[0x17].field_0x18 + 400),
               (TVector<double> *)&local_28._s_0);
  }
  *(double *)param_3 = local_28._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_28._s_0.Z;
  return;
}

// execGetMoveStatus @ 146ea66d0

void __cdecl AAIController::execGetMoveStatus(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x17].field_0x18 != 0) {
    *(undefined1 *)param_3 = *(undefined1 *)(*(longlong *)&param_1[0x17].field_0x18 + 0x264);
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetPathFollowingComponent @ 146ea6710

void __cdecl
AAIController::execGetPathFollowingComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x17].field_0x18;
  return;
}

// execHasPartialPath @ 146ea6800

void __cdecl AAIController::execHasPartialPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(longlong *)&param_1[0x17].field_0x18 != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)&param_1[0x17].field_0x18 + 0x138), lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 0xa0) >> 2 & 1) != 0)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execK2_ClearFocus @ 146ea6850

void __cdecl AAIController::execK2_ClearFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146ea686a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x938))(param_1,2);
  return;
}

// execK2_SetFocalPoint @ 146ea6880

void __cdecl AAIController::execK2_SetFocalPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x928))(param_1,&local_28,2);
  return;
}

// execK2_SetFocus @ 146ea6920

void __cdecl AAIController::execK2_SetFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x930))(param_1,local_res8,2);
  return;
}

// execMoveToActor @ 146ea69c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl AAIController::execMoveToActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  Type TVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_68;
  float local_64;
  UObject *local_60;
  AActor *local_58;
  UObject *local_50 [2];
  
  local_58 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_64 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_64,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_64);
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
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  local_60 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  bVar6 = local_68 != 0;
  local_50[0] = local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
  }
  TVar2 = MoveToActor((AAIController *)param_1,local_58,local_64,bVar3,bVar4,bVar5,
                      (TSubclassOf<UNavigationQueryFilter>)local_50,bVar6);
  *(char *)param_3 = (char)TVar2;
  return;
}

// execMoveToLocation @ 146ea6c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl AAIController::execMoveToLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  Type TVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [2];
  undefined1 *local_res18;
  int local_res20 [2];
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  UObject *local_78;
  UObject *local_70;
  TVector<double> *local_68;
  TVector<double> local_60;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_7c = 0.0;
  local_68 = &local_60;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    local_68 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7c);
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
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_88 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  bVar5 = local_88 != 0;
  local_84 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  bVar6 = local_84 != 0;
  local_78 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_80 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  bVar7 = local_80 != 0;
  local_70 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  TVar2 = MoveToLocation((AAIController *)param_1,local_68,local_7c,bVar3,bVar4,bVar5,bVar6,
                         (TSubclassOf<UNavigationQueryFilter>)&local_70,bVar7);
  *local_res18 = (char)TVar2;
  return;
}

// execOnGameplayTaskResourcesClaimed @ 146ea6ee0

void __cdecl
AAIController::execOnGameplayTaskResourcesClaimed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x940))(param_1,local_res10[0],local_res8[0]);
  return;
}

// execRunBehaviorTree @ 146ea7090

void __cdecl AAIController::execRunBehaviorTree(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x8e8))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSetMoveBlockDetection @ 146ea7220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
AAIController::execSetMoveBlockDetection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UPathFollowingComponent **)&param_1[0x17].field_0x18 != (UPathFollowingComponent *)0x0) {
    UPathFollowingComponent::SetBlockDetectionState
              (*(UPathFollowingComponent **)&param_1[0x17].field_0x18,local_res8[0] != 0);
  }
  return;
}

// execSetPathFollowingComponent @ 146ea72c0

void __cdecl
AAIController::execSetPathFollowingComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0x17].field_0x18 = pUVar2;
  if (pUVar2 != (UObject *)0x0) {
    FVisualLogger::Redirect(pUVar2,param_1);
  }
  return;
}

// execUnclaimTaskResource @ 146ea7370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl AAIController::execUnclaimTaskResource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  UnclaimTaskResource((AAIController *)param_1,(TSubclassOf<UGameplayTaskResource>)&local_res20);
  return;
}

// execUseBlackboard @ 146ea7420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl AAIController::execUseBlackboard(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  UBlackboardData *pUVar11;
  undefined1 uVar12;
  UBlackboardComponent *this;
  UBlackboardData *pUVar13;
  FName *pFVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  uchar *puVar19;
  undefined1 auStack_138 [32];
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  FName local_108;
  uchar local_100 [8];
  UBlackboardData *local_f8;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_f8 = (UBlackboardData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_100[0] = '\0';
  local_100[1] = '\0';
  local_100[2] = '\0';
  local_100[3] = '\0';
  local_100[4] = '\0';
  local_100[5] = '\0';
  local_100[6] = '\0';
  local_100[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_100);
  }
  pUVar11 = local_f8;
  puVar19 = local_100;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar19 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f8 == (UBlackboardData *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogBehaviorTree.field_0x4,Log,
                 L"UseBlackboard: trying to use NULL Blackboard asset. Ignoring");
    }
    uVar12 = 0;
    goto LAB_146ea7780;
  }
  uVar12 = 1;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x738);
  local_108 = (FName)Z_Construct_UClass_UBlackboardComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_108);
  }
  this = (UBlackboardComponent *)(*pcVar2)(param_1,&local_108);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this == (UBlackboardComponent *)0x0))
  {
    *(UBlackboardComponent **)&param_1[0x18].field_0x8 = this;
    if (this != (UBlackboardComponent *)0x0) goto LAB_146ea7589;
    pFVar14 = ::FName::FName(&local_108,L"BlackboardComponent");
    FVar3 = *pFVar14;
    if (FVar3 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar15 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar15);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = param_1;
    local_c8._16_8_ = FVar3;
    pUVar16 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar17 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar16);
    }
    *(UObject **)&param_1[0x18].field_0x8 = pUVar16;
    FVisualLogger::Redirect(pUVar16,param_1);
    if (*(longlong *)&param_1[0x18].field_0x8 != 0) {
      uVar12 = (**(code **)(*(longlong *)param_1 + 0x908))
                         (param_1,*(longlong *)&param_1[0x18].field_0x8,pUVar11);
      UActorComponent::RegisterComponent(*(UActorComponent **)&param_1[0x18].field_0x8);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    *(UBlackboardComponent **)&param_1[0x18].field_0x8 = this;
LAB_146ea7589:
    pUVar13 = UBlackboardComponent::GetBlackboardAsset(this);
    if (pUVar13 != (UBlackboardData *)0x0) {
      pUVar13 = UBlackboardComponent::GetBlackboardAsset
                          (*(UBlackboardComponent **)&param_1[0x18].field_0x8);
      if (pUVar13 == pUVar11) goto LAB_146ea7776;
      if (FVisualLogger::bIsRecording != 0) {
        pUVar13 = UBlackboardComponent::GetBlackboardAsset
                            (*(UBlackboardComponent **)&param_1[0x18].field_0x8);
        if (pUVar13 == (UBlackboardData *)0x0) {
          ::FString::FString(&local_f0,L"None");
        }
        else {
          local_108 = (FName)pUVar13->_padding_;
          ::FName::ToString(&local_108,&local_f0);
        }
        local_108 = (FName)pUVar11->_padding_;
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_f0.Data.ArrayNum != 0) {
          FVar18.Data = local_f0.Data.AllocatorInstance.Data;
        }
        ::FName::ToString(&local_108,&local_e0);
        local_118 = (FScriptContainerElement *)L"";
        if (local_e0.Data.ArrayNum != 0) {
          local_118 = local_e0.Data.AllocatorInstance.Data;
        }
        local_110 = FVar18.Data;
        FVisualLogger::CategorizedLogfImpl
                  (param_1,(FName *)&LogBehaviorTree.field_0x4,Log,
                   L"UseBlackboard: requested blackboard %s while already has %s instantiated. Forcing new BB."
                  );
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar12 = (**(code **)(*(longlong *)param_1 + 0x908))
                       (param_1,*(undefined8 *)&param_1[0x18].field_0x8,pUVar11);
  }
LAB_146ea7776:
  uVar4 = param_1[0x18].field_0x9;
  uVar5 = param_1[0x18].field_0xa;
  uVar6 = param_1[0x18].field_0xb;
  uVar7 = param_1[0x18].field_0xc;
  uVar8 = param_1[0x18].field_0xd;
  uVar9 = param_1[0x18].field_0xe;
  uVar10 = param_1[0x18].field_0xf;
  puVar19[0] = param_1[0x18].field_0x8;
  puVar19[1] = uVar4;
  puVar19[2] = uVar5;
  puVar19[3] = uVar6;
  puVar19[4] = uVar7;
  puVar19[5] = uVar8;
  puVar19[6] = uVar9;
  puVar19[7] = uVar10;
LAB_146ea7780:
  *(undefined1 *)param_3 = uVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar19 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar19);
  }
  return;
}

// GetFocusActorForPriority @ 146ee54f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall AAIController::GetFocusActorForPriority(AAIController *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  AActor *pAVar3;
  
  if ((this->FocusInformation).Priorities.ArrayNum <= (int)(uint)param_1) {
    return (AActor *)0x0;
  }
  if ((this->FocusInformation).Priorities.ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (AActor *)(*pcVar1)();
      return pAVar3;
    }
  }
  pAVar3 = (AActor *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)
                               ((this->FocusInformation).Priorities.AllocatorInstance.Data +
                               (ulonglong)param_1 * 0x20));
  return pAVar3;
}

// GetDefaultNavigationFilterClass @ 146fafd90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSubclassOf<UNavigationQueryFilter> __thiscall
AAIController::GetDefaultNavigationFilterClass(AAIController *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->DefaultNavigationFilterClass).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UNavigationQueryFilter>)in_RDX.field0_0x0;
}

