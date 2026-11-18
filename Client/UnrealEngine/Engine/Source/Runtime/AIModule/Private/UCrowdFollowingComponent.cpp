// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 76

// StaticClass @ 146f831e0

UClass * __cdecl UCrowdFollowingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdFollowingComponent",
               &Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton,
               StaticRegisterNativesUCrowdFollowingComponent,0x378,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCrowdFollowingComponent>,
               InternalVTableHelperCtorCaller<UCrowdFollowingComponent>,local_res8,
               UPathFollowingComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton;
}

// UCrowdFollowingComponent @ 146f951c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCrowdFollowingComponent * __thiscall
UCrowdFollowingComponent::UCrowdFollowingComponent
          (UCrowdFollowingComponent *this,FVTableHelper *param_1)

{
  UPathFollowingComponent::UPathFollowingComponent((UPathFollowingComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  this->_padding_ = (longlong)&___7UCrowdFollowingComponent__6B_;
  (this->AvoidanceInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->AvoidanceInterface).InterfaceInstance = (IRVOAvoidanceInterface *)0x0;
  return this;
}

// UCrowdFollowingComponent @ 146f95240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCrowdFollowingComponent * __thiscall
UCrowdFollowingComponent::UCrowdFollowingComponent
          (UCrowdFollowingComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UPathFollowingComponent::UPathFollowingComponent((UPathFollowingComponent *)this,param_1);
  this->bEnableSimulationReplanOnResume = '\x01';
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  this->_padding_ = (longlong)&___7UCrowdFollowingComponent__6B_;
  (this->AvoidanceInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->AvoidanceInterface).InterfaceInstance = (IRVOAvoidanceInterface *)0x0;
  this->AvoidanceQuality = '\0';
  this->SimulationState = Enabled;
  this->SeparationWeight = 2.0;
  this->CollisionQueryRange = 400.0;
  puVar2 = &this->field_0x358;
  this->bAffectFallingVelocity = '\0';
  this->bEnableSeparation = '\0';
  this->bEnableObstacleAvoidance = '\x01';
  this->bEnableAnticipateTurns = '\0';
  this->bSuspendCrowdSimulation = '\0';
  this->bRegisteredWithCrowdSimulation = '\0';
  this->bRotateToVelocity = '\x01';
  this->PathOptimizationRange = 1000.0;
  this->AvoidanceRangeMultiplier = 1.0;
  puVar2 = &this->field_0x359;
  this->bEnableOptimizeVisibility = '\x01';
  this->bCanUpdatePathPartInTick = '\x01';
  this->bCanCheckMovingTooFar = '\x01';
  this->bEnableSlowdownAtGoal = '\x01';
  this->bEnablePathOffset = '\0';
  this->bEnableOptimizeTopology = '\x01';
  return this;
}

// ~UCrowdFollowingComponent @ 146f96df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::~UCrowdFollowingComponent(UCrowdFollowingComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  this->_padding_ = (longlong)&___7ICrowdAgentInterface__6B_;
  UPathFollowingComponent::~UPathFollowingComponent((UPathFollowingComponent *)this);
  return;
}

// AbortMove @ 146f99890

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
UCrowdFollowingComponent::AbortMove
          (UCrowdFollowingComponent *this,UObject *param_1,ushort param_2,FAIRequestID param_3,
          EPathFollowingVelocityMode param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  UWorld *pUVar4;
  UCrowdManager *this_00;
  FName local_res8;
  ushort local_res20;
  undefined1 local_res22;
  FString local_28;
  
  if ((((this->SimulationState == Enabled) && (*(char *)((longlong)&this->_padding_ + 4) != '\0'))
      && (uVar2 = (uint)this->_padding_, uVar2 != 0xffffffff)) &&
     ((param_3.RequestID != 0xffffffff &&
      (((param_3.RequestID == uVar2 || (param_3.RequestID == 0)) || (uVar2 == 0)))))) {
    pUVar4 = (UWorld *)this->_padding_;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = UCrowdManager::GetCurrent(pUVar4);
    if (this_00 != (UCrowdManager *)0x0) {
      UCrowdManager::ClearAgentMoveTarget(this_00,this);
    }
  }
  if (FVisualLogger::bIsRecording != 0) {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_28);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
               L"AbortMove: RequestID(%u) Instigator(%s)");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (((*(char *)((longlong)&this->_padding_ + 4) != '\0') &&
      (uVar2 = (uint)this->_padding_, uVar2 != 0xffffffff)) &&
     ((param_3.RequestID != 0xffffffff &&
      (((param_3.RequestID == uVar2 || (param_3.RequestID == 0)) || (uVar2 == 0)))))) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 & 0x7f;
    local_res22 = 3;
    bVar3 = 0;
    if (param_4 == Reset) {
      bVar3 = 0x80;
    }
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 | bVar3;
    local_res20 = param_2 & 0xfff8 | CodeLookup[3];
    (**(code **)(this->_padding_ + 0x530))(this,&local_res20);
  }
  return;
}

// ApplyCrowdAgentPosition @ 146f9b930

void __thiscall
UCrowdFollowingComponent::ApplyCrowdAgentPosition
          (UCrowdFollowingComponent *this,TVector<double> *param_1)

{
  return;
}

// ApplyCrowdAgentVelocity @ 146f9b940

void __thiscall
UCrowdFollowingComponent::ApplyCrowdAgentVelocity
          (UCrowdFollowingComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          bool param_3,bool param_4)

{
  longlong *this_00;
  double dVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  INavMovementInterface *pIVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double local_38;
  double dStack_30;
  double local_28;
  
  if ((param_3) || (!param_4)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 0x20;
  }
  this->bCanCheckMovingTooFar = '\0';
  this->field_0x359 = this->field_0x359 | bVar2;
  if ((((this->SimulationState != Enabled) || (*(char *)((longlong)&this->_padding_ + 4) != '\x03'))
      || (this_00 = &this->_padding_, this->_padding_ == 0)) ||
     (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar3)) goto LAB_146f9bb0f;
  bVar3 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    ((TWeakInterfacePtr<INavMovementInterface> *)this_00,(void *)0x0);
  if (bVar3) {
LAB_146f9b9f2:
    bVar3 = true;
  }
  else {
    pIVar5 = TWeakInterfacePtr<INavMovementInterface>::operator->
                       ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
    cVar4 = (**(code **)((longlong)*pIVar5 + 0xd8))(pIVar5);
    if (cVar4 == '\0') goto LAB_146f9b9f2;
    bVar3 = false;
  }
  if ((this->bAffectFallingVelocity != 0) || (bVar3)) {
    UpdateCachedDirections(this,param_1,param_2,param_3);
    pIVar5 = TWeakInterfacePtr<INavMovementInterface>::operator->
                       ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
    bVar3 = INavMovementInterface::UseAccelerationForPathFollowing(pIVar5);
    if (bVar3) {
      fVar6 = (float)(**(code **)(this->_padding_ + 0x28))();
      dVar7 = (param_1->field0_0x0)._s_0.Y;
      dVar1 = (param_1->field0_0x0)._s_0.Z;
      dVar10 = (param_1->field0_0x0)._s_0.X;
      auVar8._0_8_ = dVar1 * dVar1;
      auVar8._8_8_ = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar7 * dVar7 + dVar10 * dVar10 + auVar8._0_8_;
      auVar9 = sqrtpd(auVar8,auVar9);
      dVar7 = auVar9._0_8_;
      dVar10 = dVar7 / (double)fVar6;
      if (__real_3ff0000000000000 <= dVar7 / (double)fVar6) {
        dVar10 = __real_3ff0000000000000;
      }
      if (dVar10 <= 0.0) {
        dVar10 = 0.0;
      }
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (__real_3e45798ee2308c3a < dVar7) {
        dVar7 = __real_3ff0000000000000 / dVar7;
        local_28 = dVar7 * dVar1 * dVar10;
        local_38 = dVar7 * (param_1->field0_0x0)._s_0.X * dVar10;
        dStack_30 = dVar7 * (param_1->field0_0x0)._s_0.Y * dVar10;
      }
      pIVar5 = TWeakInterfacePtr<INavMovementInterface>::operator->
                         ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
      (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,&local_38);
    }
    else {
      pIVar5 = TWeakInterfacePtr<INavMovementInterface>::operator->
                         ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
      (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5,param_1,0);
    }
  }
LAB_146f9bb0f:
                    /* WARNING: Could not recover jumptable at 0x000146f9bb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x648))(this,param_1,param_2,param_3);
  return;
}

// ApplyCrowdAgentVelocity @ 146f9bb50

void __thiscall
UCrowdFollowingComponent::ApplyCrowdAgentVelocity
          (UCrowdFollowingComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          bool param_3)

{
  return;
}

// BeginDestroy @ 146f9bcb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::BeginDestroy(UCrowdFollowingComponent *this)

{
  UActorComponent::BeginDestroy((UActorComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x000146f9bcc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x500))(this);
  return;
}

// Cleanup @ 146f9c3b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::Cleanup(UCrowdFollowingComponent *this)

{
  UWorld *pUVar1;
  UCrowdManager *this_00;
  UClass *pUVar2;
  ICrowdAgentInterface *pIVar3;
  
  (**(code **)(this->_padding_ + 0x550))(this,0);
  (**(code **)(this->_padding_ + 0x5a8))(this);
  if (this->bRegisteredWithCrowdSimulation != '\0') {
    pUVar1 = (UWorld *)this->_padding_;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = UCrowdManager::GetCurrent(pUVar1);
    if (this_00 != (UCrowdManager *)0x0) {
      pUVar2 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
      pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar2);
      UCrowdManager::UnregisterAgent(this_00,pIVar3);
      this->bRegisteredWithCrowdSimulation = '\0';
      this->SimulationState = Disabled;
    }
  }
  return;
}

// DescribeSelfToVisLog @ 146fa3fb0

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
UCrowdFollowingComponent::DescribeSelfToVisLog
          (UCrowdFollowingComponent *this,FVisualLogEntry *param_1)

{
  int *piVar1;
  FNavigationPath *this_00;
  FVisualLogStatusCategory *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FNavMeshPath *pFVar8;
  FNavMeshPath *pFVar9;
  UWorld *pUVar10;
  UCrowdManager *pUVar11;
  FCrowdAgentData *pFVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FNavMeshPath *pFVar16;
  FName local_res8;
  FName local_res18 [2];
  FVisualLogStatusCategory local_118;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (this->SimulationState != Enabled) {
    UPathFollowingComponent::DescribeSelfToVisLog((UPathFollowingComponent *)this,param_1);
    return;
  }
  pFVar16 = (FNavMeshPath *)0x0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  ::FName::ToString(&UE::VisualLogger::NAME_UnnamedCategory,&local_118.Category);
  local_118.UniqueId = -1;
  local_118.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Children.ArrayNum = 0;
  local_118.Children.ArrayMax = 0;
  ::FString::operator=(&local_118.Category,L"Path following");
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_e0,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_res8.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_res8,&local_e0);
    }
    ::FString::FString(&local_b0,L"Goal");
    FVisualLogStatusCategory::Add(&local_118,&local_b0,&local_e0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  UPathFollowingComponent::GetStatusDesc((UPathFollowingComponent *)this,&local_c0);
  this_00 = (FNavigationPath *)this->_padding_;
  pFVar8 = pFVar16;
  pFVar9 = pFVar16;
  if (this_00 != (FNavigationPath *)0x0) {
    pFVar8 = FNavigationPath::CastPath<FNavMeshPath>(this_00);
    pFVar9 = (FNavMeshPath *)FNavigationPath::CastPath<FAbstractNavigationPath>(this_00);
  }
  if (*(char *)((longlong)&this->_padding_ + 4) == '\x03') {
    ::FString::PrintfImpl(&local_d0,L" [path:%d, visited:%d]");
    iVar6 = local_d0.Data.ArrayNum + -1;
    if (local_d0.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_c0,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar6);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_a0,L"Status");
  FVisualLogStatusCategory::Add(&local_118,&local_a0,&local_c0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (this->_padding_ == 0) {
    pwVar13 = L"none";
  }
  else if (pFVar8 == (FNavMeshPath *)0x0) {
    pwVar13 = L"unknown";
    if (pFVar9 != (FNavMeshPath *)0x0) {
      pwVar13 = L"direct";
    }
  }
  else {
    pwVar13 = L"navmesh";
  }
  ::FString::FString(&local_80,pwVar13);
  ::FString::FString(&local_90,L"Path");
  FVisualLogStatusCategory::Add(&local_118,&local_90,&local_80);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar7 != (UObject *)0x0) {
    local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
    local_res18[0].Number = *(uint *)&pUVar7->field_0x1c;
    ::FName::ToString(local_res18,&local_60);
    ::FString::FString(&local_70,L"SmartLink");
    FVisualLogStatusCategory::Add(&local_118,&local_70,&local_60);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  pUVar10 = (UWorld *)this->_padding_;
  if (pUVar10 == (UWorld *)0x0) {
    pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pUVar11 = UCrowdManager::GetCurrent(pUVar10);
  if (pUVar11 != (UCrowdManager *)0x0) {
    pFVar8 = (FNavMeshPath *)&this->_padding_;
    if (this == (UCrowdFollowingComponent *)0x0) {
      pFVar8 = pFVar16;
    }
    pFVar12 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
              ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                      *)&pUVar11->ActiveAgents,(ICrowdAgentInterface *)pFVar8);
    if ((pFVar12 == (FCrowdAgentData *)0x0) || (pFVar12->AgentIndex < 0)) {
      ::FString::FString(&local_40,L"unable to register!");
      ::FString::FString(&local_50,L"Simulation");
      FVisualLogStatusCategory::Add(&local_118,&local_50,&local_40);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar2 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
  if (((pFVar2 <= &local_118) && (&local_118 < pFVar2 + (param_1->Status).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (param_1->Status).ArrayNum;
  piVar1 = &(param_1->Status).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(param_1->Status).AllocatorInstance,piVar1);
  }
  FVar4.Data = local_118.Data.AllocatorInstance.Data;
  pFVar14 = (param_1->Status).AllocatorInstance.Data;
  (param_1->Status).ArrayNum = iVar6 + 1;
  pFVar14 = pFVar14 + (longlong)iVar6 * 0x38;
  *(undefined8 *)&pFVar14->field_0x0 = 0;
  iVar6 = local_118.Data.ArrayNum;
  *(int *)&pFVar14[8].field_0x0 = local_118.Data.ArrayNum;
  if (local_118.Data.ArrayNum == 0) {
    *(int *)(pFVar14 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_118.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,local_118.Data.ArrayNum
               ,(int *)(pFVar14 + 0xc));
    ConstructItems<FString,FString,int>(*(void **)&pFVar14->field_0x0,(FString *)FVar4.Data,iVar6);
  }
  ::FString::FString((FString *)(pFVar14 + 0x10),&local_118.Category);
  FVar4.Data = local_118.Children.AllocatorInstance.Data;
  *(int *)&pFVar14[0x20].field_0x0 = local_118.UniqueId;
  pFVar15 = pFVar14 + 0x28;
  *(undefined8 *)&pFVar15->field_0x0 = 0;
  iVar6 = local_118.Children.ArrayNum;
  *(int *)&pFVar14[0x30].field_0x0 = local_118.Children.ArrayNum;
  if (local_118.Children.ArrayNum == 0) {
    *(int *)(pFVar14 + 0x34) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,local_118.Children.ArrayNum,0,(ForAnyElementType *)pFVar15,
               local_118.Children.ArrayNum,(int *)(pFVar14 + 0x34));
    ConstructItems<FVisualLogStatusCategory,FVisualLogStatusCategory,int>
              (*(void **)&pFVar15->field_0x0,(FVisualLogStatusCategory *)FVar4.Data,iVar6);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FVisualLogStatusCategory,int>
            ((FVisualLogStatusCategory *)local_118.Children.AllocatorInstance.Data,
             local_118.Children.ArrayNum);
  if ((FVisualLogStatusCategory *)local_118.Children.AllocatorInstance.Data !=
      (FVisualLogStatusCategory *)0x0) {
    FMemory::Free(local_118.Children.AllocatorInstance.Data);
  }
  if (local_118.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Category.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_118.Data.AllocatorInstance.Data,local_118.Data.ArrayNum);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// DetermineStartingPathPoint @ 146fa4d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
UCrowdFollowingComponent::DetermineStartingPathPoint
          (UCrowdFollowingComponent *this,FNavigationPath *param_1)

{
  int iVar1;
  
  if (this->SimulationState != Enabled) {
    iVar1 = UPathFollowingComponent::DetermineStartingPathPoint
                      ((UPathFollowingComponent *)this,param_1);
    return iVar1;
  }
  if ((param_1 == (FNavigationPath *)0x0) && (this->_padding_ != 0)) {
    return this->LastPathPolyIndex;
  }
  return this->PathStartIndex;
}

// FinishUsingCustomLink @ 146faa5a0

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
UCrowdFollowingComponent::FinishUsingCustomLink
          (UCrowdFollowingComponent *this,INavLinkCustomInterface *param_1)

{
  longlong *this_00;
  bool bVar1;
  bool bVar2;
  UObject *this_01;
  UWorld *pUVar3;
  UCrowdManager *pUVar4;
  UClass *pUVar5;
  ICrowdAgentInterface *pIVar6;
  FCrowdAgentData *pFVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  FString local_38;
  
  this_00 = &this->_padding_;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (param_1 != (INavLinkCustomInterface *)0x0) {
    this_01 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_01);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_01);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    if ((((int)*this_00 == local_res8.ObjectIndex) &&
        (*(int *)((longlong)&this->_padding_ + 4) == local_res8.ObjectSerialNumber)) ||
       ((bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar2 &&
        (bVar2 = FWeakObjectPtr::IsValid(&local_res8), !bVar2)))) {
      if (FVisualLogger::bIsRecording != 0) {
        if (this_01 == (UObject *)0x0) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_38,(UObject *)0x0);
        }
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                   L"Finish custom move using navlink: %s");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)((longlong)*param_1 + 0x68))(param_1,this);
      *this_00 = 0;
    }
  }
  if (this->SimulationState == Enabled) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    pUVar3 = (UWorld *)this->_padding_;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pUVar4 = UCrowdManager::GetCurrent(pUVar3);
    if (((bVar1) && (!bVar2)) && (pUVar4 != (UCrowdManager *)0x0)) {
      pUVar5 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
      pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar5);
      pFVar7 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
               ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                       *)&pUVar4->ActiveAgents,pIVar6);
      if (((pUVar4->DetourCrowd != (dtCrowd *)0x0) && (pFVar7 != (FCrowdAgentData *)0x0)) &&
         (-1 < pFVar7->AgentIndex)) {
        dtCrowd::setAgentBackOnLink(pUVar4->DetourCrowd,pFVar7->AgentIndex);
      }
    }
  }
  return;
}

// FollowPathSegment @ 146faa8f0

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
UCrowdFollowingComponent::FollowPathSegment(UCrowdFollowingComponent *this,float param_1)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  FNavigationPath *pFVar4;
  AActor *pAVar5;
  UWorld *pUVar6;
  UCrowdManager *this_00;
  double dVar7;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  double local_38;
  double local_30;
  double local_28;
  TVector<double>_u_0 local_20;
  
  if (this->SimulationState == Enabled) {
    if (this->bUpdateDirectMoveVelocity != '\0') {
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
      if (bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        lVar1 = *(longlong *)(pUVar3 + 0xb);
        local_20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_20._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_20._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (lVar1 != 0) {
          local_20._s_0.Z = *(double *)(lVar1 + 0x220);
          local_20._s_0.X = *(double *)(lVar1 + 0x210);
          local_20._s_0.Y = *(double *)(lVar1 + 0x218);
        }
      }
      else {
        FBasedPosition::operator*
                  ((FBasedPosition *)&this->_padding_,(TVector<double> *)&local_20._s_0);
      }
      local_50._s_0.X = local_20._s_0.X;
      local_50._s_0.Y = local_20._s_0.Y;
      local_50._s_0.Z = local_20._s_0.Z;
      (**(code **)(this->_padding_ + 0x10))(&this->_padding_,&local_38);
      local_20._s_0.X = local_50._s_0.X - local_38;
      local_20._s_0.Y = local_50._s_0.Y - local_30;
      local_20._s_0.Z = local_50._s_0.Z - local_28;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_20._s_0,(TVector<double> *)&local_68._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      dVar7 = local_68._s_0.X - (this->CrowdAgentMoveDirection).field0_0x0._s_0.X;
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (dVar7 = local_68._s_0.Y - (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y,
          __real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (dVar7 = local_68._s_0.Z - (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z,
         __real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        pFVar4 = TSharedPtr<FNavigationPath,1>::operator->
                           ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
        pAVar5 = (AActor *)FWeakObjectPtr::Get(&(pFVar4->Base).WeakPtr);
        FBasedPosition::Set((FBasedPosition *)&this->_padding_,pAVar5,
                            (TVector<double> *)&local_50._s_0);
        pUVar6 = (UWorld *)this->_padding_;
        (this->CrowdAgentMoveDirection).field0_0x0._s_0.X = local_68._s_0.X;
        (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y = local_68._s_0.Y;
        (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z = local_68._s_0.Z;
        this->_padding_ = (longlong)local_68._s_0.X;
        this->_padding_ = (longlong)local_68._s_0.Y;
        this->_padding_ = (longlong)local_68._s_0.Z;
        if (pUVar6 == (UWorld *)0x0) {
          pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        this_00 = UCrowdManager::GetCurrent(pUVar6);
        UCrowdManager::SetAgentMoveDirection(this_00,this,(TVector<double> *)&local_68._s_0);
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,
                     L"Updated direct move direction for crowd agent.");
        }
      }
    }
  }
  else {
    UPathFollowingComponent::FollowPathSegment((UPathFollowingComponent *)this,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146faab24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x630))(this);
  return;
}

// GetAvoidanceGroup @ 146fabfd0

int __thiscall UCrowdFollowingComponent::GetAvoidanceGroup(UCrowdFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) {
    return 0;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface);
  if (bVar2) {
    if ((((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000146fac035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)((longlong)*(this->AvoidanceInterface).InterfaceInstance + 0x60))();
    return iVar3;
  }
  return 0;
}

// GetCrowdAgentAvoidanceGroup @ 146facc10

int __thiscall UCrowdFollowingComponent::GetCrowdAgentAvoidanceGroup(UCrowdFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->_padding_ == 0) {
    return 0;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    if (((this->_padding_ == 0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000146facc72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x60))();
    return iVar3;
  }
  return 0;
}

// GetCrowdAgentCollisions @ 146facca0

void __thiscall
UCrowdFollowingComponent::GetCrowdAgentCollisions
          (UCrowdFollowingComponent *this,float *param_1,float *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar5;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  if (this[-1]._padding_ == 0) {
    return;
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_);
  if (!bVar3) {
    return;
  }
  if (((this[-1]._padding_ == 0) ||
      (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar4 = (longlong *)this[-1]._padding_;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x98))(plVar4,local_res8);
  if (*plVar4 == 0) {
    return;
  }
  if (((this[-1]._padding_ == 0) ||
      (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (FObjectPtr_u_0 *)
            (**(code **)(*(longlong *)this[-1]._padding_ + 0x98))
                      ((longlong *)this[-1]._padding_,local_res20);
  if (this_00->Handle != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if ((bVar3) && (pUVar1 = this_00->Handle, pUVar1 != (UObject *)0x0)) {
      (**(code **)(*(longlong *)pUVar1 + 0x5a8))(pUVar1,param_1,param_2);
    }
  }
  return;
}

// GetCrowdAgentGroupsToAvoid @ 146facde0

int __thiscall UCrowdFollowingComponent::GetCrowdAgentGroupsToAvoid(UCrowdFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->_padding_ == 0) {
    return 0;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    if (((this->_padding_ == 0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000146face42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x70))();
    return iVar3;
  }
  return 0;
}

// GetCrowdAgentGroupsToIgnore @ 146face70

int __thiscall UCrowdFollowingComponent::GetCrowdAgentGroupsToIgnore(UCrowdFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->_padding_ == 0) {
    return 0;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    if (((this->_padding_ == 0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000146faced2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x80))();
    return iVar3;
  }
  return 0;
}

// GetCrowdAgentLocation @ 146facf20

TVector<double> * __thiscall
UCrowdFollowingComponent::GetCrowdAgentLocation
          (UCrowdFollowingComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  double *pdVar6;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20 [24];
  
  if (this[-1]._padding_ != 0) {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_);
    if (bVar4) {
      if (this[-1]._padding_ == 0) {
LAB_146facf5a:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TVector<double> *)(*pcVar2)();
          return pTVar5;
        }
      }
      else {
        bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_);
        if (!bVar4) goto LAB_146facf5a;
      }
      pdVar6 = (double *)
               (**(code **)(*(longlong *)this[-1]._padding_ + 0x80))
                         ((longlong *)this[-1]._padding_,local_20);
      goto LAB_146facfb3;
    }
  }
  pdVar6 = &local_38;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_146facfb3:
  dVar3 = pdVar6[1];
  dVar1 = pdVar6[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetCrowdAgentMaxSpeed @ 146facff0

float __thiscall UCrowdFollowingComponent::GetCrowdAgentMaxSpeed(UCrowdFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this[-1]._padding_ == 0) {
    return 0.0;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_);
  if (bVar2) {
    if (((this[-1]._padding_ == 0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000146fad055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(**(code **)(*(longlong *)this[-1]._padding_ + 200))();
    return fVar3;
  }
  return 0.0;
}

// GetCrowdAgentVelocity @ 146fad0a0

TVector<double> * __thiscall
UCrowdFollowingComponent::GetCrowdAgentVelocity
          (UCrowdFollowingComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  char cVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  double *pdVar9;
  double dVar10;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20 [24];
  
  if ((this[-1]._padding_ == 0) ||
     (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_), !bVar7)) {
    pdVar9 = &local_38;
    local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    if (((this[-1]._padding_ == 0) ||
        (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this[-1]._padding_), !bVar7)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar3)();
      return pTVar8;
    }
    pdVar9 = (double *)
             (**(code **)(*(longlong *)this[-1]._padding_ + 0xc0))
                       ((longlong *)this[-1]._padding_,local_20);
  }
  cVar2 = *(char *)((longlong)&this[-1]._padding_ + 4);
  dVar6 = *pdVar9;
  dVar5 = pdVar9[1];
  dVar10 = pdVar9[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  dVar10 = __real_3fd0000000000000;
  if (cVar2 == '\x03') {
    dVar10 = __real_3ff0000000000000;
  }
  dVar5 = dVar5 * dVar10;
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar6 * dVar10;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10 * dVar1;
  return __return_storage_ptr__;
}

// GetCurrentPathElement @ 146fad8b0

int __thiscall UCrowdFollowingComponent::GetCurrentPathElement(UCrowdFollowingComponent *this)

{
  return this->LastPathPolyIndex;
}

// GetDebugStringTokens @ 146fae0b0

/* WARNING: Removing unreachable block (ram,0x000146faeea3) */
/* WARNING: Removing unreachable block (ram,0x000146faeb24) */
/* WARNING: Removing unreachable block (ram,0x000146fae822) */
/* WARNING: Removing unreachable block (ram,0x000146fae384) */
/* WARNING: Removing unreachable block (ram,0x000146fae4f9) */
/* WARNING: Removing unreachable block (ram,0x000146fae9a5) */
/* WARNING: Removing unreachable block (ram,0x000146faeca8) */
/* WARNING: Removing unreachable block (ram,0x000146faf021) */
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
UCrowdFollowingComponent::GetDebugStringTokens
          (UCrowdFollowingComponent *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EPathFollowingDebugTokens::Type,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UWorld *pUVar8;
  UCrowdManager *pUVar9;
  FCrowdAgentData *pFVar10;
  FNavigationPath *pFVar11;
  FNavMeshPath *pFVar12;
  FAbstractNavigationPath *pFVar13;
  INavMovementInterface *pIVar14;
  longlong lVar15;
  ICrowdAgentInterface *pIVar16;
  wchar_t *pwVar17;
  undefined1 in_XMM2 [16];
  float fVar18;
  uchar local_res8 [8];
  uchar local_res20 [8];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  undefined4 local_144;
  int local_140;
  undefined4 local_13c;
  int local_138;
  float local_134;
  float local_130;
  float local_12c;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined4 local_a8;
  float local_a4;
  FString local_a0;
  TVector<double>_u_0 local_90;
  double local_78;
  double local_70;
  double local_68;
  FString local_60 [3];
  
  if (this->SimulationState != Enabled) {
    UPathFollowingComponent::GetDebugStringTokens((UPathFollowingComponent *)this,param_1,param_2);
    return;
  }
  pFVar7 = (FScriptContainerElement *)
           UPathFollowingComponent::GetStatusDesc((UPathFollowingComponent *)this,local_60);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar15 = (longlong)iVar6;
  param_1->ArrayNum = iVar6 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).Data
  ;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar1 + lVar15 * 0x10 + 8) = *(int *)&pFVar7[8].field_0x0;
  *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = *(int *)&pFVar7[0xc].field_0x0;
  *(undefined8 *)&pFVar7[8].field_0x0 = 0;
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_158 = 0;
  if (((pFVar1 <= (FScriptContainerElement *)&local_158) &&
      ((FScriptContainerElement *)&local_158 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_158;
  pUVar8 = (UWorld *)this->_padding_;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pUVar9 = UCrowdManager::GetCurrent(pUVar8);
  if (pUVar9 != (UCrowdManager *)0x0) {
    pIVar16 = (ICrowdAgentInterface *)&this->_padding_;
    if (this == (UCrowdFollowingComponent *)0x0) {
      pIVar16 = (ICrowdAgentInterface *)0x0;
    }
    pFVar10 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
              ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                      *)&pUVar9->ActiveAgents,pIVar16);
    if ((pFVar10 == (FCrowdAgentData *)0x0) || (pFVar10->AgentIndex < 0)) {
      ::FString::FString(&local_128,L"simulation");
      pFVar1 = (param_1->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_128) &&
         (((FScriptContainerElement *)&local_128 < pFVar1 + (longlong)param_1->ArrayMax * 0x10 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar15 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) = local_128.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar15 * 0x10 + 8) = local_128.Data.ArrayNum;
      *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = local_128.Data.ArrayMax;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_154 = 1;
      if (((pFVar1 <= (FScriptContainerElement *)&local_154) &&
          ((FScriptContainerElement *)&local_154 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_154;
      ::FString::FString(&local_118,L"NOT ACTIVE");
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar15 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) = local_118.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar15 * 0x10 + 8) = local_118.Data.ArrayNum;
      *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_150 = 2;
      if (((pFVar1 <= (FScriptContainerElement *)&local_150) &&
          ((FScriptContainerElement *)&local_150 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_150;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 4) == '\x03') {
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (this->_padding_ != 0) {
      pFVar11 = TSharedPtr<FNavigationPath,1>::operator->
                          ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
      pFVar12 = FNavigationPath::CastPath<FNavMeshPath>(pFVar11);
      if (pFVar12 == (FNavMeshPath *)0x0) {
        pFVar11 = TSharedPtr<FNavigationPath,1>::operator->
                            ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
        pFVar13 = FNavigationPath::CastPath<FAbstractNavigationPath>(pFVar11);
        if (pFVar13 == (FAbstractNavigationPath *)0x0) {
          iVar6 = 0xf;
          pwVar17 = L" (unknown path)";
        }
        else {
          iVar6 = 9;
          pwVar17 = L" (direct)";
        }
        ::FString::AppendChars((FString *)pFVar1,pwVar17,iVar6);
      }
      else {
        ::FString::PrintfImpl(&local_a0,L" (path:%d, visited:%d)");
        iVar6 = local_a0.Data.ArrayNum + -1;
        if (local_a0.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars
                  ((FString *)pFVar1,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar6);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
    }
    local_12c = 0.0;
    local_a8 = 0;
    if (((this->_padding_ == 0) ||
        (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0xa0))
              ((longlong *)this->_padding_,&local_12c,&local_a8);
    if (this->bFinalPathPart == '\0') {
      pIVar14 = TWeakInterfacePtr<INavMovementInterface>::operator->
                          ((TWeakInterfacePtr<INavMovementInterface> *)&this->_padding_);
      (**(code **)((longlong)*pIVar14 + 0x80))(pIVar14,&local_78);
      FBasedPosition::operator*
                ((FBasedPosition *)&this->_padding_,(TVector<double> *)&local_90._s_0);
      fVar18 = local_12c * __real_40a00000;
      dVar4 = (local_90._s_0.Y - local_70) * (local_90._s_0.Y - local_70) +
              (local_90._s_0.X - local_78) * (local_90._s_0.X - local_78) +
              (local_90._s_0.Z - local_68) * (local_90._s_0.Z - local_68);
      ::FString::FString(&local_c8,L"distance");
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar15 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) = local_c8.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar15 * 0x10 + 8) = local_c8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_13c = 1;
      if (((pFVar1 <= (FScriptContainerElement *)&local_13c) &&
          ((FScriptContainerElement *)&local_13c < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar4;
      sqrtpd(in_XMM2,auVar3);
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_13c;
      ::FString::PrintfImpl(&local_b8,L"%.0f");
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar15 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) = local_b8.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar15 * 0x10 + 8) = local_b8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_138 = (dVar4 < (double)(fVar18 * fVar18)) + 2;
      if (((pFVar1 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
    }
    else {
      local_a4 = 0.0;
      local_134 = 0.0;
      local_130 = 0.0;
      local_res20[0] = '\0';
      local_res8[0] = '\0';
      UPathFollowingComponent::DebugReachTest
                ((UPathFollowingComponent *)this,&local_a4,&local_134,&local_130,local_res8,
                 local_res20,local_res8);
      ::FString::FString(&local_108,L"dist2D");
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar15 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) = local_108.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar15 * 0x10 + 8) = local_108.Data.ArrayNum;
      *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = local_108.Data.ArrayMax;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_14c = 1;
      if (((pFVar1 <= (FScriptContainerElement *)&local_14c) &&
          ((FScriptContainerElement *)&local_14c < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_14c;
      ::FString::PrintfImpl(&local_f8,L"%.0f");
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar15 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) = local_f8.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar15 * 0x10 + 8) = local_f8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = local_f8.Data.ArrayMax;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148 = 3 - (uint)(local_res20[0] != '\0');
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_148;
      ::FString::FString(&local_e8,L"distZ");
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar15 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) = local_e8.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar15 * 0x10 + 8) = local_e8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_144 = 1;
      if (((pFVar1 <= (FScriptContainerElement *)&local_144) &&
          ((FScriptContainerElement *)&local_144 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_144;
      ::FString::PrintfImpl(&local_d8,L"%.0f");
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar15 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar15 * 0x10) = local_d8.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar15 * 0x10 + 8) = local_d8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar15 * 0x10 + 0xc) = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_140 = 3 - (uint)(local_res8[0] != '\0');
      if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
          ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      local_138 = local_140;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        local_138 = local_140;
      }
    }
    param_2->ArrayNum = iVar6 + 1;
    *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_138;
  }
  return;
}

// GetGroupsToAvoid @ 146fb1370

int __thiscall UCrowdFollowingComponent::GetGroupsToAvoid(UCrowdFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) {
    return 0;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface);
  if (bVar2) {
    if ((((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000146fb13d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)((longlong)*(this->AvoidanceInterface).InterfaceInstance + 0x70))();
    return iVar3;
  }
  return 0;
}

// GetGroupsToIgnore @ 146fb13f0

int __thiscall UCrowdFollowingComponent::GetGroupsToIgnore(UCrowdFollowingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) {
    return 0;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface);
  if (bVar2) {
    if ((((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000146fb1455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)((longlong)*(this->AvoidanceInterface).InterfaceInstance + 0x80))();
    return iVar3;
  }
  return 0;
}

// GetMoveFocus @ 146fb23b0

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
UCrowdFollowingComponent::GetMoveFocus
          (UCrowdFollowingComponent *this,TVector<double> *__return_storage_ptr__,bool param_1)

{
  longlong *this_00;
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  INavMovementInterface *pIVar7;
  longlong lVar8;
  double *pdVar9;
  TVector<double> *pTVar10;
  UObject *pUVar11;
  double dVar12;
  double local_58;
  double dStack_50;
  double local_48;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  if (!param_1) {
    this_00 = &this->_padding_;
    if ((this->_padding_ == 0) ||
       (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar5)) {
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_146fb25a0;
    }
    if (this->SimulationState == Enabled) {
      pIVar7 = TWeakInterfacePtr<INavMovementInterface>::operator->
                         ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
      (**(code **)((longlong)*pIVar7 + 0x78))(pIVar7,&local_40);
      pIVar7 = TWeakInterfacePtr<INavMovementInterface>::operator->
                         ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
      lVar8 = (**(code **)((longlong)*pIVar7 + 0x90))(pIVar7);
      if (lVar8 != 0) {
        if (*(char *)((longlong)&this->_padding_ + 4) == '\x03') {
          pIVar7 = TWeakInterfacePtr<INavMovementInterface>::operator->
                             ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
          cVar6 = (**(code **)((longlong)*pIVar7 + 0xd8))(pIVar7);
          if ((cVar6 == '\0') &&
             (bVar5 = UE::Math::TVector<double>::IsNearlyZero
                                (&this->CrowdAgentMoveDirection,__real_3f1a36e2e0000000), !bVar5))
          goto LAB_146fb24a4;
        }
        pIVar7 = TWeakInterfacePtr<INavMovementInterface>::operator->
                           ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
        pdVar9 = (double *)(**(code **)((longlong)*pIVar7 + 0xb0))(pIVar7,&local_28);
        goto LAB_146fb2542;
      }
LAB_146fb24a4:
      local_58 = (this->CrowdAgentMoveDirection).field0_0x0._s_0.X;
      dStack_50 = (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y;
      dVar2 = dStack_50 * dStack_50 + local_58 * local_58;
      if (dVar2 == __real_3ff0000000000000) {
        if ((this->CrowdAgentMoveDirection).field0_0x0._s_0.Z == 0.0) {
          local_58 = (this->CrowdAgentMoveDirection).field0_0x0._s_0.X;
          dStack_50 = (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y;
          local_48 = (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z;
        }
        else {
LAB_146fb252b:
          local_48 = 0.0;
        }
      }
      else {
        if (__real_3e45798ee0000000 <= dVar2) {
          local_58 = local_58 * (__real_3ff0000000000000 / SQRT(dVar2));
          dStack_50 = dStack_50 * (__real_3ff0000000000000 / SQRT(dVar2));
          goto LAB_146fb252b;
        }
        local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      pdVar9 = &local_58;
LAB_146fb2542:
      dVar2 = *pdVar9;
      dVar1 = pdVar9[1];
      dVar12 = (double)FAIConfig::Navigation::FocalPointDistance;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar12 * pdVar9[2] + local_40._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar2 + local_40._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12 * dVar1 + local_40._s_0.Y;
      return __return_storage_ptr__;
    }
  }
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((param_1) && (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar5)) {
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    lVar8 = *(longlong *)(pUVar11 + 0xb);
    if (lVar8 != 0) {
      dVar1 = *(double *)(lVar8 + 0x218);
      dVar2 = *(double *)(lVar8 + 0x220);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar8 + 0x210);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar4;
    return __return_storage_ptr__;
  }
LAB_146fb25a0:
  UPathFollowingComponent::GetCurrentDirection
            ((UPathFollowingComponent *)this,(TVector<double> *)&local_40._s_0);
  pTVar10 = FBasedPosition::operator*((FBasedPosition *)&this->_padding_,&local_28);
  dVar12 = (double)FAIConfig::Navigation::FocalPointDistance;
  dVar2 = (pTVar10->field0_0x0)._s_0.Y;
  dVar1 = (pTVar10->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar12 * local_40._s_0.X + (pTVar10->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12 * local_40._s_0.Y + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar12 * local_40._s_0.Z + dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146fb3ef0

UClass * __cdecl UCrowdFollowingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdFollowingComponent",
               &Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton,
               StaticRegisterNativesUCrowdFollowingComponent,0x378,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCrowdFollowingComponent>,
               InternalVTableHelperCtorCaller<UCrowdFollowingComponent>,local_res8,
               UPathFollowingComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton;
}

// HasMovedDuringPause @ 146fb6e00

bool __thiscall UCrowdFollowingComponent::HasMovedDuringPause(UCrowdFollowingComponent *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  float local_res8 [2];
  float local_res10 [2];
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = &this->_padding_;
  bVar2 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    ((TWeakInterfacePtr<INavMovementInterface> *)this_00,(void *)0x0);
  if (!bVar2) {
    local_res8[0] = 0.0;
    local_res10[0] = 0.0;
    if (((this->_padding_ == 0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0xa0))
              ((longlong *)this->_padding_,local_res8,local_res10);
    if (((this->_padding_ == 0) ||
        (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), !bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x80))((longlong *)this->_padding_,&local_28);
    local_28 = local_28 - (double)this->_padding_;
    local_20 = local_20 - (double)this->_padding_;
    if (local_20 * local_20 + local_28 * local_28 < (double)(local_res8[0] * local_res8[0])) {
      local_18 = local_18 - (double)this->_padding_;
      return (double)(local_res10[0] * __real_3f000000) <=
             (double)CONCAT44((uint)((ulonglong)local_18 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    }
  }
  return true;
}

// Initialize @ 146fb89d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::Initialize(UCrowdFollowingComponent *this)

{
  uint uVar1;
  int iVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UNavigationSystemBase *pUVar5;
  
  (**(code **)(this->_padding_ + 0x508))();
  uVar1 = (uint)this->_padding_;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,uVar1,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
  }
  if (this->SimulationState == Disabled) {
    return;
  }
  RegisterCrowdAgent(this);
  if (this->bRegisteredWithCrowdSimulation != '\0') {
    return;
  }
  pUVar3 = (UWorld *)this->_padding_;
  if ((pUVar3 == (UWorld *)0x0) &&
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 == (UWorld *)0x0)
     ) goto LAB_146fb8ae5;
  pUVar5 = (pUVar3->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fb8a92:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) goto LAB_146fb8a92;
  }
  if ((pUVar5 != (UNavigationSystemBase *)0x0) && ((pUVar5[0x1f].field_0x22 & 4) == 0)) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCrowdFollowingComponent>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (pUVar5 + 8),(UCrowdFollowingComponent *)&stack0x00000008,(pmf_33292e38 *)this);
    return;
  }
LAB_146fb8ae5:
  this->SimulationState = Disabled;
  return;
}

// IsOnPath @ 146fb9b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UCrowdFollowingComponent::IsOnPath(UCrowdFollowingComponent *this)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  UObject *pUVar3;
  FNavigationPath *pFVar4;
  FNavMeshPath *pFVar5;
  bool bVar6;
  FNavLocation local_28;
  
  if (this->SimulationState == Enabled) {
    return true;
  }
  lVar1 = this->_padding_;
  bVar6 = false;
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 0xa0) & 2) != 0)) && (1 < *(int *)(lVar1 + 0x30))) &&
     ((*(uint *)(lVar1 + 0xa0) & 1) != 0)) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0xa4));
    if (pUVar3 != (UObject *)0x0) {
      pFVar4 = TSharedPtr<FNavigationPath,1>::operator->
                         ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
      pFVar5 = FNavigationPath::CastPath<FNavMeshPath>(pFVar4);
      if (pFVar5 != (FNavMeshPath *)0x0) {
        UPathFollowingComponent::GetCurrentNavLocation((UPathFollowingComponent *)this,&local_28);
        pFVar4 = TSharedPtr<FNavigationPath,1>::operator->
                           ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
        UNRECOVERED_JUMPTABLE = *(code **)(pFVar4->_padding_ + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000146fb9bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(pFVar4,local_28.NodeRef,UNRECOVERED_JUMPTABLE);
        return (bool)uVar2;
      }
      bVar6 = true;
    }
  }
  return bVar6;
}

// OnLanded @ 146fbcc70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::OnLanded(UCrowdFollowingComponent *this)

{
  longlong *this_00;
  UWorld *pUVar1;
  UCrowdManager *this_01;
  UClass *pUVar2;
  ICrowdAgentInterface *pIVar3;
  
  this_00 = &this[-1]._padding_;
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xdf;
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    pUVar1 = *(UWorld **)&this[-1].SeparationWeight;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
    }
    this_01 = UCrowdManager::GetCurrent(pUVar1);
    if (this_01 != (UCrowdManager *)0x0) {
      if (this_00 == (longlong *)0x0) {
        pIVar3 = (ICrowdAgentInterface *)0x0;
      }
      else {
        pUVar2 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
        pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar2);
      }
      UCrowdManager::UpdateAgentState(this_01,pIVar3);
    }
  }
  return;
}

// OnNavNodeChanged @ 146fbf290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCrowdFollowingComponent::OnNavNodeChanged
          (UCrowdFollowingComponent *this,ulong64 param_1,ulong64 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  FNavMeshPath *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((this->SimulationState == Enabled) && (*(char *)((longlong)&this->_padding_ + 4) != '\0')) {
    if (((FNavigationPath *)this->_padding_ != (FNavigationPath *)0x0) &&
       ((pFVar4 = FNavigationPath::CastPath<FNavMeshPath>((FNavigationPath *)this->_padding_),
        pFVar4 != (FNavMeshPath *)0x0 &&
        (uVar6 = (ulonglong)this->LastPathPolyIndex,
        this->LastPathPolyIndex < (pFVar4->PathCorridor).ArrayNum)))) {
      lVar7 = uVar6 * 8;
      do {
        uVar5 = (uint)uVar6;
        uVar2 = 0;
        if ((int)uVar5 < (pFVar4->PathCorridor).ArrayNum) {
          uVar2 = ~uVar5 >> 0x1f;
        }
        if ((uVar2 == 0) &&
           (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar1)) {
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        if (*(ulong64 *)((pFVar4->PathCorridor).AllocatorInstance.Data + lVar7) == param_1) {
          this->LastPathPolyIndex = uVar5;
          break;
        }
        uVar6 = (ulonglong)(uVar5 + 1);
        lVar7 = lVar7 + 8;
      } while ((int)(uVar5 + 1) < (pFVar4->PathCorridor).ArrayNum);
    }
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Verbose,
                 L"OnNavNodeChanged, CorridorSize:%d, LastVisitedIndex:%d");
    }
    if ((param_3 < 3) && (this->bFinalPathPart == '\0')) {
      uVar3 = (**(code **)(this->_padding_ + 0x608))(this,0);
      UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x5c0);
                    /* WARNING: Could not recover jumptable at 0x000146fbf3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(this,uVar3,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}

// OnNavigationInitDone @ 146fbf410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::OnNavigationInitDone(UCrowdFollowingComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  longlong lVar2;
  
  UPathFollowingComponent::OnNavigationInitDone((UPathFollowingComponent *)this);
  RegisterCrowdAgent(this);
  if (this->bRegisteredWithCrowdSimulation == '\0') {
    this->SimulationState = Disabled;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x550);
  if (this->_padding_ != 0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      lVar2 = this->_padding_;
      goto LAB_146fbf46e;
    }
  }
  lVar2 = 0;
LAB_146fbf46e:
                    /* WARNING: Could not recover jumptable at 0x000146fbf483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,lVar2);
  return;
}

// OnPathFinished @ 146fc02c0

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
UCrowdFollowingComponent::OnPathFinished
          (UCrowdFollowingComponent *this,FPathFollowingResult *param_1)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  UNavigationSystemBase *pUVar4;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar2 != (UWorld *)0x0) goto LAB_146fc02eb;
  }
  else {
LAB_146fc02eb:
    pUVar4 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
    if (pUVar4 == (UNavigationSystemBase *)0x0) {
LAB_146fc031a:
      pUVar4 = (UNavigationSystemBase *)0x0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) goto LAB_146fc031a;
    }
    if (pUVar4 != (UNavigationSystemBase *)0x0) {
      this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[8].field_0x20);
      if (this_00 != (UCrowdManager *)0x0) {
        pUVar3 = UCrowdManager::StaticClass();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) goto LAB_146fc035a;
      }
    }
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fc035a:
  if ((this->SimulationState == Enabled) && (this_00 != (UCrowdManager *)0x0)) {
    UCrowdManager::ClearAgentMoveTarget(this_00,this);
  }
  UPathFollowingComponent::OnPathFinished((UPathFollowingComponent *)this,param_1);
  return;
}

// OnPathUpdated @ 146fc0870

void __thiscall UCrowdFollowingComponent::OnPathUpdated(UCrowdFollowingComponent *this)

{
  this->PathStartIndex = 0;
  this->LastPathPolyIndex = 0;
  return;
}

// OnPathfindingQuery @ 146fc08b0

void __thiscall
UCrowdFollowingComponent::OnPathfindingQuery
          (UCrowdFollowingComponent *this,FPathFindingQuery *param_1)

{
  if (this->SimulationState == Enabled) {
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 1;
  }
  return;
}

// PauseMove @ 146fc2340

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
UCrowdFollowingComponent::PauseMove
          (UCrowdFollowingComponent *this,FAIRequestID param_1,EPathFollowingVelocityMode param_2)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  UWorld *pUVar5;
  UCrowdManager *this_00;
  INavMovementInterface *pIVar6;
  double *pdVar7;
  FNavigationPath *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20 [24];
  
  if (((((this->SimulationState == Enabled) && (*(char *)((longlong)&this->_padding_ + 4) != '\x02')
        ) && (uVar1 = (uint)this->_padding_, uVar1 != 0xffffffff)) &&
      (param_1.RequestID != 0xffffffff)) &&
     (((param_1.RequestID == uVar1 || (param_1.RequestID == 0)) || (uVar1 == 0)))) {
    pUVar5 = (UWorld *)this->_padding_;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = UCrowdManager::GetCurrent(pUVar5);
    if (this_00 != (UCrowdManager *)0x0) {
      UCrowdManager::PauseAgent(this_00,this);
    }
  }
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
               L"PauseMove: RequestID(%u)");
  }
  if (*(char *)((longlong)&this->_padding_ + 4) == '\x02') {
    return;
  }
  uVar1 = (uint)this->_padding_;
  if (uVar1 == 0xffffffff) {
    return;
  }
  if (param_1.RequestID == 0xffffffff) {
    return;
  }
  if (((param_1.RequestID != uVar1) && (param_1.RequestID != 0)) && (uVar1 != 0)) {
    return;
  }
  if (param_2 == Reset) {
    if (this->_padding_ != 0) {
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
      if ((bVar4) &&
         (bVar4 = UPathFollowingComponent::HasMovementAuthority((UPathFollowingComponent *)this),
         bVar4)) {
        pIVar6 = TWeakInterfacePtr<INavMovementInterface>::operator->
                           ((TWeakInterfacePtr<INavMovementInterface> *)&this->_padding_);
        (**(code **)((longlong)*pIVar6 + 0x100))(pIVar6);
      }
      goto LAB_146fc2457;
    }
  }
  else {
LAB_146fc2457:
    if ((this->_padding_ != 0) &&
       (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar4)) {
      pIVar6 = TWeakInterfacePtr<INavMovementInterface>::operator->
                         ((TWeakInterfacePtr<INavMovementInterface> *)&this->_padding_);
      pdVar7 = (double *)(**(code **)((longlong)*pIVar6 + 0x80))(pIVar6,local_20);
      goto LAB_146fc24b3;
    }
  }
  pdVar7 = &local_38;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_146fc24b3:
  dVar3 = pdVar7[1];
  this->_padding_ = (longlong)*pdVar7;
  this->_padding_ = (longlong)dVar3;
  this->_padding_ = (longlong)pdVar7[2];
  if (this->_padding_ == 0) {
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    pFVar8 = TSharedPtr<FNavigationPath,1>::operator->
                       ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
    uVar9 = SUB84(pFVar8->LastUpdateTimeStamp,0);
    uVar10 = (undefined4)((ulonglong)pFVar8->LastUpdateTimeStamp >> 0x20);
  }
  lVar2 = this->_padding_;
  this->_padding_ = CONCAT44(uVar10,uVar9);
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 2;
  (**(code **)(lVar2 + 0x630))(this);
  return;
}

// RegisterCrowdAgent @ 146fc6f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::RegisterCrowdAgent(UCrowdFollowingComponent *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar6;
  UNavigationSystemBase *pUVar7;
  
  pUVar4 = (UWorld *)this->_padding_;
  if (pUVar4 == (UWorld *)0x0) {
    pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar4 == (UWorld *)0x0) goto LAB_146fc7014;
  }
  pUVar7 = (pUVar4->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar7 == (UNavigationSystemBase *)0x0) {
LAB_146fc6f66:
    pUVar7 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_146fc6f66;
  }
  if (pUVar7 == (UNavigationSystemBase *)0x0) goto LAB_146fc7014;
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[8].field_0x20);
  if (this_00 == (UCrowdManager *)0x0) {
LAB_146fc6fa8:
    this_00 = (UCrowdManager *)0x0;
  }
  else {
    pUVar5 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_146fc6fa8;
  }
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar5 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar5);
    if (pIVar6 == (ICrowdAgentInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IAgent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdFollowingComponent.cpp"
                         ,0x450,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UCrowdManager::RegisterAgent(this_00,pIVar6);
    this->bRegisteredWithCrowdSimulation = '\x01';
    return;
  }
LAB_146fc7014:
  this->bRegisteredWithCrowdSimulation = '\0';
  return;
}

// Reset @ 146fcd6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::Reset(UCrowdFollowingComponent *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UPathFollowingComponent::Reset((UPathFollowingComponent *)this);
  this->PathStartIndex = 0;
  this->LastPathPolyIndex = 0;
  this->bUpdateDirectMoveVelocity = '\0';
  puVar2 = &this->field_0x359;
  this->bFinalPathPart = '\0';
  this->bCheckMovementAngle = '\0';
  this->bCanCheckMovingTooFar = '\x01';
  return;
}

// ResumeMove @ 146fcde00

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
UCrowdFollowingComponent::ResumeMove(UCrowdFollowingComponent *this,FAIRequestID param_1)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  UWorld *pUVar4;
  UCrowdManager *this_00;
  
  if ((((this->SimulationState != Enabled) || (*(char *)((longlong)&this->_padding_ + 4) != '\x02'))
      || (uVar1 = (uint)this->_padding_, uVar1 == 0xffffffff)) ||
     ((param_1.RequestID == 0xffffffff ||
      (((param_1.RequestID != uVar1 && (param_1.RequestID != 0)) && (uVar1 != 0))))))
  goto LAB_146fcdeba;
  pUVar4 = (UWorld *)this->_padding_;
  if (pUVar4 == (UWorld *)0x0) {
    pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_00 = UCrowdManager::GetCurrent(pUVar4);
  if (this_00 != (UCrowdManager *)0x0) {
    if (this->bEnableSimulationReplanOnResume == 0) {
LAB_146fcde89:
      bVar3 = false;
    }
    else {
      bVar3 = HasMovedDuringPause(this);
      if (!bVar3) goto LAB_146fcde89;
      bVar3 = true;
    }
    UCrowdManager::ResumeAgent(this_00,this,bVar3);
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CrowdAgentMoveDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y = (double)uVar2;
  (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_146fcdeba:
  UPathFollowingComponent::ResumeMove((UPathFollowingComponent *)this,param_1);
  return;
}

// SetAvoidanceGroup @ 146fcf8b0

void __thiscall
UCrowdFollowingComponent::SetAvoidanceGroup(UCrowdFollowingComponent *this,int param_1,bool param_2)

{
  IRVOAvoidanceInterface **ppIVar1;
  IRVOAvoidanceInterface *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  ppIVar1 = &(this->AvoidanceInterface).InterfaceInstance;
  if ((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) {
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface);
  if (!bVar4) {
    return;
  }
  if (((*ppIVar1 == (IRVOAvoidanceInterface *)0x0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (**(code **)((longlong)**ppIVar1 + 0x60))();
  if (iVar5 == param_1) {
    return;
  }
  if ((((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (this->AvoidanceInterface).InterfaceInstance;
  (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,param_1);
  if (param_2) {
    UpdateCrowdAgentParams(this);
  }
  return;
}

// SetCrowdAffectFallingVelocity @ 146fcfab0

void __thiscall
UCrowdFollowingComponent::SetCrowdAffectFallingVelocity(UCrowdFollowingComponent *this,bool param_1)

{
  this->bAffectFallingVelocity = '\0';
  this->field_0x358 = this->field_0x358 | param_1;
  return;
}

// SetCrowdAnticipateTurns @ 146fcfad0

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
UCrowdFollowingComponent::SetCrowdAnticipateTurns
          (UCrowdFollowingComponent *this,bool param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((this->bEnableAnticipateTurns == param_1) ||
     (this->field_0x358 = this->field_0x358 & 0xdf | param_1 << 5, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdAvoidanceQuality @ 146fcfb10

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
UCrowdFollowingComponent::SetCrowdAvoidanceQuality
          (UCrowdFollowingComponent *this,Type param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if (((this->AvoidanceQuality).Value == param_1) ||
     ((this->AvoidanceQuality).Value = (uchar)param_1, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdAvoidanceRangeMultiplier @ 146fcfb40

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
UCrowdFollowingComponent::SetCrowdAvoidanceRangeMultiplier
          (UCrowdFollowingComponent *this,float param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((param_1 == this->AvoidanceRangeMultiplier) ||
     (this->AvoidanceRangeMultiplier = param_1, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdCollisionQueryRange @ 146fcfb70

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
UCrowdFollowingComponent::SetCrowdCollisionQueryRange
          (UCrowdFollowingComponent *this,float param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((param_1 == this->CollisionQueryRange) || (this->CollisionQueryRange = param_1, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdObstacleAvoidance @ 146fcfba0

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
UCrowdFollowingComponent::SetCrowdObstacleAvoidance
          (UCrowdFollowingComponent *this,bool param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((this->bEnableObstacleAvoidance == param_1) ||
     (this->field_0x358 = this->field_0x358 & 0xbf | param_1 << 6, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdOptimizeTopology @ 146fcfbe0

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
UCrowdFollowingComponent::SetCrowdOptimizeTopology
          (UCrowdFollowingComponent *this,bool param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((this->bEnableOptimizeTopology == param_1) ||
     (this->field_0x359 = this->field_0x359 & 0xfd | param_1 * '\x02', !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdOptimizeVisibility @ 146fcfc20

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
UCrowdFollowingComponent::SetCrowdOptimizeVisibility
          (UCrowdFollowingComponent *this,bool param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((this->bEnableOptimizeVisibility == param_1) ||
     (this->field_0x359 = this->field_0x359 & 0xfe | param_1, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdPathOffset @ 146fcfc50

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
UCrowdFollowingComponent::SetCrowdPathOffset
          (UCrowdFollowingComponent *this,bool param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((this->bEnablePathOffset == param_1) ||
     (this->field_0x359 = this->field_0x359 & 0xfb | param_1 << 2, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdPathOptimizationRange @ 146fcfc90

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
UCrowdFollowingComponent::SetCrowdPathOptimizationRange
          (UCrowdFollowingComponent *this,float param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((param_1 == this->PathOptimizationRange) || (this->PathOptimizationRange = param_1, !param_2))
  {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdRotateToVelocity @ 146fcfcc0

void __thiscall
UCrowdFollowingComponent::SetCrowdRotateToVelocity(UCrowdFollowingComponent *this,bool param_1)

{
  this->bRotateToVelocity = '\0';
  this->field_0x358 = this->field_0x358 | param_1 * '\x02';
  return;
}

// SetCrowdSeparation @ 146fcfce0

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
UCrowdFollowingComponent::SetCrowdSeparation
          (UCrowdFollowingComponent *this,bool param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((this->bEnableSeparation == param_1) ||
     (this->field_0x358 = this->field_0x358 & 0x7f | param_1 << 7, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdSeparationWeight @ 146fcfd20

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
UCrowdFollowingComponent::SetCrowdSeparationWeight
          (UCrowdFollowingComponent *this,float param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((param_1 == this->SeparationWeight) || (this->SeparationWeight = param_1, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetCrowdSimulationState @ 146fcfd50

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
UCrowdFollowingComponent::SetCrowdSimulationState
          (UCrowdFollowingComponent *this,ECrowdSimulationState param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UCrowdManager *this_00;
  UClass *pUVar4;
  ICrowdAgentInterface *pIVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(CrowdSimulationDesc,L"Enabled");
    ::FString::FString(CrowdSimulationDesc + 1,L"ObstacleOnly");
    ::FString::FString(CrowdSimulationDesc + 2,L"Disabled");
    atexit(`UCrowdFollowingComponent::SetCrowdSimulationState'::__l2::
           _dynamic_atexit_destructor_for__CrowdSimulationDesc__);
    _Init_thread_footer(&::_TSS0);
  }
  if (param_1 != this->SimulationState) {
    if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      pUVar3 = (UWorld *)this->_padding_;
      if (pUVar3 == (UWorld *)0x0) {
        pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_00 = UCrowdManager::GetCurrent(pUVar3);
      if (this_00 == (UCrowdManager *)0x0) {
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,
                     L"SetCrowdSimulation: NewState %s: Crowd manager can\'t be found, disabling simulation."
                    );
        }
        this->SimulationState = Disabled;
      }
      else {
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,
                     L"SetCrowdSimulation: %s");
        }
        this->SimulationState = param_1;
        if ((param_1 != Disabled) != this->bRegisteredWithCrowdSimulation) {
          pUVar4 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
          pIVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar4);
          if (param_1 == Disabled) {
            UCrowdManager::UnregisterAgent(this_00,pIVar5);
          }
          else {
            if ((pIVar5 == (ICrowdAgentInterface *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IAgent != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdFollowingComponent.cpp"
                                   ,0x1c4,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            UCrowdManager::RegisterAgent(this_00,pIVar5);
          }
          this->bRegisteredWithCrowdSimulation = '\0';
          this->field_0x358 = this->field_0x358 | (param_1 != Disabled) << 3;
        }
      }
    }
    else if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Warning,
                 L"SetCrowdSimulation failed, agent is not in Idle state!");
      return;
    }
  }
  return;
}

// SetCrowdSlowdownAtGoal @ 146fcffc0

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
UCrowdFollowingComponent::SetCrowdSlowdownAtGoal
          (UCrowdFollowingComponent *this,bool param_1,bool param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  if ((this->bEnableSlowdownAtGoal == param_1) ||
     (this->field_0x359 = this->field_0x359 & 0xf7 | param_1 << 3, !param_2)) {
    return;
  }
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// SetGroupsToAvoid @ 146fd0360

void __thiscall
UCrowdFollowingComponent::SetGroupsToAvoid(UCrowdFollowingComponent *this,int param_1,bool param_2)

{
  IRVOAvoidanceInterface **ppIVar1;
  IRVOAvoidanceInterface *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  ppIVar1 = &(this->AvoidanceInterface).InterfaceInstance;
  if ((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) {
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface);
  if (!bVar4) {
    return;
  }
  if (((*ppIVar1 == (IRVOAvoidanceInterface *)0x0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (**(code **)((longlong)**ppIVar1 + 0x70))();
  if (iVar5 == param_1) {
    return;
  }
  if ((((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (this->AvoidanceInterface).InterfaceInstance;
  (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2,param_1);
  if (param_2) {
    UpdateCrowdAgentParams(this);
  }
  return;
}

// SetGroupsToIgnore @ 146fd0470

void __thiscall
UCrowdFollowingComponent::SetGroupsToIgnore(UCrowdFollowingComponent *this,int param_1,bool param_2)

{
  IRVOAvoidanceInterface **ppIVar1;
  IRVOAvoidanceInterface *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  ppIVar1 = &(this->AvoidanceInterface).InterfaceInstance;
  if ((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) {
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface);
  if (!bVar4) {
    return;
  }
  if (((*ppIVar1 == (IRVOAvoidanceInterface *)0x0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (**(code **)((longlong)**ppIVar1 + 0x80))();
  if (iVar5 == param_1) {
    return;
  }
  if ((((this->AvoidanceInterface).InterfaceInstance == (IRVOAvoidanceInterface *)0x0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->AvoidanceInterface), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (this->AvoidanceInterface).InterfaceInstance;
  (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2,param_1);
  if (param_2) {
    UpdateCrowdAgentParams(this);
  }
  return;
}

// SetMoveSegment @ 146fd0750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::SetMoveSegment(UCrowdFollowingComponent *this,int param_1)

{
  longlong *this_00;
  longlong *plVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  int iVar12;
  FNavigationPath *pFVar13;
  longlong lVar14;
  FNavMeshPath *pFVar15;
  FAbstractNavigationPath *pFVar16;
  UWorld *pUVar17;
  UCrowdManager *pUVar18;
  ARecastNavMesh *this_01;
  UClass *pUVar19;
  AActor *pAVar20;
  INavMovementInterface *pIVar21;
  TVector<double> *pTVar22;
  UObject *pUVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  ushort *puVar27;
  uint uVar28;
  ushort local_res8;
  undefined1 local_resa;
  ushort local_res18;
  undefined1 local_res1a;
  ushort local_res20;
  undefined1 local_res22;
  ushort local_108;
  undefined1 local_106;
  TVector<double>_u_0 local_100;
  UCrowdManager *local_e8;
  FString local_e0;
  FName local_d0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double> local_98;
  TVector<double> local_80;
  undefined1 local_68 [24];
  TVector<double> local_50;
  
  if (this->SimulationState != Enabled) {
    UPathFollowingComponent::SetMoveSegment((UPathFollowingComponent *)this,param_1);
    return;
  }
  this_00 = &this->_padding_;
  this->PathStartIndex = param_1;
  this->LastPathPolyIndex = param_1;
  if (*this_00 == 0) {
    return;
  }
  uVar28 = *(uint *)(*this_00 + 0xa0);
  if ((uVar28 & 2) == 0) {
    return;
  }
  if (*(int *)(*this_00 + 0x30) < 2) {
    return;
  }
  if ((uVar28 & 1) == 0) {
    return;
  }
  plVar1 = &this->_padding_;
  if (*plVar1 == 0) {
    return;
  }
  pFVar13 = TSharedPtr<FNavigationPath,1>::operator->((TSharedPtr<FNavigationPath,1> *)this_00);
  iVar24 = (pFVar13->PathPoints).ArrayNum;
  uVar26 = iVar24 - 1;
  uVar28 = 0;
  if ((int)uVar26 < iVar24) {
    uVar28 = ~uVar26 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar14 = (longlong)(pFVar13->PathPoints).ArrayNum;
  pFVar5 = (pFVar13->PathPoints).AllocatorInstance.Data;
  pFVar3 = pFVar5 + lVar14 * 0x30 + -0x30;
  local_100._s_0.X = (double)*(undefined8 *)pFVar3;
  local_100._s_0.Y = (double)*(undefined8 *)(pFVar3 + 8);
  local_100._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar14 * 0x30 + -0x20);
  pFVar13 = TSharedPtr<FNavigationPath,1>::operator->((TSharedPtr<FNavigationPath,1> *)this_00);
  pFVar15 = FNavigationPath::CastPath<FNavMeshPath>(pFVar13);
  pFVar13 = TSharedPtr<FNavigationPath,1>::operator->((TSharedPtr<FNavigationPath,1> *)this_00);
  pFVar16 = FNavigationPath::CastPath<FAbstractNavigationPath>(pFVar13);
  if (pFVar15 == (FNavMeshPath *)0x0) {
    if (pFVar16 == (FAbstractNavigationPath *)0x0) {
      if (FVisualLogger::bIsRecording == 0) {
        return;
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)*plVar1,(FName *)&LogCrowdFollowing.field_0x4,Error,
                 L"SetMoveSegment, unknown path type!");
      return;
    }
    pIVar21 = TWeakInterfacePtr<INavMovementInterface>::operator->
                        ((TWeakInterfacePtr<INavMovementInterface> *)&this->_padding_);
    (**(code **)((longlong)*pIVar21 + 0x80))(pIVar21,&local_c8);
    this->bFinalPathPart = '\x01';
    this->bCheckMovementAngle = '\x01';
    this->bUpdateDirectMoveVelocity = '\x01';
    pFVar13 = TSharedPtr<FNavigationPath,1>::operator->
                        ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
    pAVar20 = (AActor *)FWeakObjectPtr::Get(&(pFVar13->Base).WeakPtr);
    FBasedPosition::Set((FBasedPosition *)&this->_padding_,pAVar20,
                        (TVector<double> *)&local_100._s_0);
    local_b0._s_0.X = local_100._s_0.X - local_c8._s_0.X;
    local_b0._s_0.Y = local_100._s_0.Y - local_c8._s_0.Y;
    local_b0._s_0.Z = local_100._s_0.Z - local_c8._s_0.Z;
    pTVar22 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_b0._s_0,&local_50,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
    dVar4 = (pTVar22->field0_0x0)._s_0.Y;
    (this->CrowdAgentMoveDirection).field0_0x0._s_0.X = (pTVar22->field0_0x0)._s_0.X;
    (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar22->field0_0x0)._s_0.Z;
    (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z = dVar4;
    dVar7 = (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(this->CrowdAgentMoveDirection).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar7;
    this->_padding_ = (longlong)dVar4;
    if ((FVisualLogger::bIsRecording != 0) &&
       (FVisualLogger::CategorizedLogfImpl
                  ((UObject *)*plVar1,(FName *)&LogCrowdFollowing.field_0x4,Log,
                   L"SetMoveSegment, direct move"), FVisualLogger::bIsRecording != 0)) {
      FVisualLogger::SegmentLogfImpl
                ((UObject *)*plVar1,(FName *)&LogCrowdFollowing.field_0x4,Log,
                 (TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_100._s_0,&FColor::Red,0
                 ,L"path");
    }
    pUVar17 = (UWorld *)this->_padding_;
    if (pUVar17 == (UWorld *)0x0) {
      pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pUVar18 = UCrowdManager::GetCurrent(pUVar17);
    if (pUVar18 == (UCrowdManager *)0x0) {
      return;
    }
    UCrowdManager::SetAgentMoveDirection(pUVar18,this,&this->CrowdAgentMoveDirection);
    return;
  }
  iVar24 = (pFVar15->PathCorridor).ArrayNum;
  if (iVar24 == 0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)*plVar1,(FName *)&LogCrowdFollowing.field_0x4,Error,
                 L"Can\'t switch path segments: empty path corridor!");
    }
    local_res8 = CodeLookup[3] | 0x20;
    local_resa = 3;
    (**(code **)(this->_padding_ + 0x530))(this,&local_res8);
    return;
  }
  if ((this->PathStartIndex < 0) || (iVar24 <= this->PathStartIndex)) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)*plVar1,(FName *)&LogCrowdFollowing.field_0x4,Error,
                 L"SegmentStartIndex in call to UCrowdFollowingComponent::SetMoveSegment is out of path corridor array\'s bounds (index: %d, array size %d)"
                );
    }
    iVar24 = (pFVar15->PathCorridor).ArrayNum + -1;
    if (this->PathStartIndex < iVar24) {
      iVar24 = this->PathStartIndex;
    }
    iVar12 = 0;
    if (0 < iVar24) {
      iVar12 = iVar24;
    }
    this->PathStartIndex = iVar12;
  }
  pUVar17 = (UWorld *)this->_padding_;
  if (pUVar17 == (UWorld *)0x0) {
    pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pUVar18 = UCrowdManager::GetCurrent(pUVar17);
  local_e8 = pUVar18;
  if (pUVar18 == (UCrowdManager *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)*plVar1,(FName *)&LogCrowdFollowing.field_0x4,Error,
                 L"Can\'t switch path segments: missing crowd manager!");
    }
    puVar27 = &local_res18;
    local_res18 = CodeLookup[3] | 0x20;
    local_res1a = 3;
    lVar14 = this->_padding_;
  }
  else {
    this_01 = (ARecastNavMesh *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar15->_padding_ + 4));
    if (this_01 != (ARecastNavMesh *)0x0) {
      pUVar19 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
      iVar24 = (int)pUVar19->_padding_;
      if ((iVar24 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
          &pUVar19->_padding_)) {
        if ((ARecastNavMesh *)(pUVar18->MyNavData).field0_0x0.DebugPtr == this_01) {
          uVar28 = this->PathStartIndex;
          uVar25 = (pFVar15->PathCorridor).ArrayNum - 1;
          uVar26 = uVar25;
          if ((int)(uVar28 + 0xf) < (int)uVar25) {
            uVar26 = uVar28 + 0xf;
          }
          this->bFinalPathPart = '\0';
          bVar10 = 0;
          if (uVar26 == uVar25) {
            bVar10 = 0x10;
          }
          this->field_0x359 = this->field_0x359 | bVar10;
          uVar25 = 0;
          if ((int)uVar28 < (pFVar15->PathCorridor).ArrayNum) {
            uVar25 = ~uVar28 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar9 = ARecastNavMesh::GetLinkEndPoints
                            (this_01,*(ulong64 *)
                                      ((pFVar15->PathCorridor).AllocatorInstance.Data +
                                      (longlong)(int)uVar28 * 8),&local_80,&local_98);
          if (bVar9) {
            iVar24 = this->PathStartIndex + -1;
            if (iVar24 < 0) {
              iVar24 = 0;
            }
            this->PathStartIndex = iVar24;
          }
          if (this->bFinalPathPart == '\0') {
            uVar28 = 0;
            if ((int)uVar26 < (pFVar15->PathCorridor).ArrayNum) {
              uVar28 = ~uVar26 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar9 = ARecastNavMesh::GetLinkEndPoints
                              (this_01,*(ulong64 *)
                                        ((pFVar15->PathCorridor).AllocatorInstance.Data +
                                        (longlong)(int)uVar26 * 8),&local_80,&local_98);
            uVar28 = uVar26 - 1;
            if ((int)uVar26 < 1) {
              bVar11 = false;
            }
            else {
              uVar25 = 0;
              if ((int)uVar28 < (pFVar15->PathCorridor).ArrayNum) {
                uVar25 = ~uVar28 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar11 = ARecastNavMesh::GetLinkEndPoints
                                 (this_01,*(ulong64 *)
                                           ((pFVar15->PathCorridor).AllocatorInstance.Data +
                                           (longlong)(int)uVar28 * 8),&local_80,&local_98);
            }
            if ((bVar9) && (uVar26 = uVar28, (int)uVar28 < 0)) {
              uVar26 = 0;
            }
            if ((bVar11 != false) && (uVar26 = uVar26 - 2, (int)uVar26 < 0)) {
              uVar26 = 0;
            }
            uVar28 = 0;
            if ((int)uVar26 < (pFVar15->PathCorridor).ArrayNum) {
              uVar28 = ~uVar26 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            ARecastNavMesh::GetPolyCenter
                      (this_01,*(ulong64 *)
                                ((pFVar15->PathCorridor).AllocatorInstance.Data +
                                (longlong)(int)uVar26 * 8),(TVector<double> *)&local_100._s_0);
            pUVar18 = local_e8;
          }
          else if (((uint)pFVar15->_padding_ >> 2 & 1) != 0) {
            pFVar13 = TSharedPtr<FNavigationPath,1>::operator->
                                ((TSharedPtr<FNavigationPath,1> *)this_00);
            iVar24 = (pFVar13->PathPoints).ArrayNum;
            uVar25 = iVar24 - 1;
            uVar28 = 0;
            if ((int)uVar25 < iVar24) {
              uVar28 = ~uVar25 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar24 = (pFVar13->PathPoints).ArrayNum;
            pFVar3 = (pFVar13->PathPoints).AllocatorInstance.Data;
            uVar28 = 0;
            if ((int)uVar26 < (pFVar15->PathCorridor).ArrayNum) {
              uVar28 = ~uVar26 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            ARecastNavMesh::GetClosestPointOnPoly
                      (this_01,*(ulong64 *)
                                ((pFVar15->PathCorridor).AllocatorInstance.Data +
                                (longlong)(int)uVar26 * 8),
                       (TVector<double> *)(pFVar3 + (longlong)(iVar24 + -1) * 0x30),
                       (TVector<double> *)&local_100._s_0);
            pUVar18 = local_e8;
          }
          uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          (this->CrowdAgentMoveDirection).field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y = (double)uVar8;
          (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          this->_padding_ = uVar8;
          this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          pFVar13 = TSharedPtr<FNavigationPath,1>::operator->
                              ((TSharedPtr<FNavigationPath,1> *)this_00);
          pAVar20 = (AActor *)FWeakObjectPtr::Get(&(pFVar13->Base).WeakPtr);
          FBasedPosition::Set((FBasedPosition *)&this->_padding_,pAVar20,
                              (TVector<double> *)&local_100._s_0);
          LogPathPartHelper((AActor *)this->_padding_,pFVar15,this->PathStartIndex,uVar26);
          if (FVisualLogger::bIsRecording != 0) {
            pIVar21 = TWeakInterfacePtr<INavMovementInterface>::operator->
                                ((TWeakInterfacePtr<INavMovementInterface> *)&this->_padding_);
            pTVar22 = (TVector<double> *)(**(code **)((longlong)*pIVar21 + 0x80))(pIVar21,local_68);
            FVisualLogger::SegmentLogfImpl
                      ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,pTVar22,
                       (TVector<double> *)&local_100._s_0,&FColor::Red,0,L"path part");
            if (FVisualLogger::bIsRecording != 0) {
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,
                         L"SetMoveSegment, from:%d segments:%d%s");
            }
          }
          UCrowdManager::SetAgentMovePath
                    (pUVar18,this,pFVar15,this->PathStartIndex,uVar26,
                     (TVector<double> *)&local_100._s_0);
          return;
        }
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)*plVar1,(FName *)&LogCrowdFollowing.field_0x4,Error,
                     L"Invalid navigation data in UCrowdFollowingComponent::SetMoveSegment, expected 0x%X, got: 0x%X"
                    );
        }
        puVar27 = &local_res20;
        local_res20 = CodeLookup[3] | 0x20;
        local_res22 = 3;
        lVar14 = this->_padding_;
        goto LAB_146fd09d6;
      }
    }
    if (FVisualLogger::bIsRecording != 0) {
      pUVar23 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar15->_padding_ + 4));
      if (pUVar23 == (UObject *)0x0) {
        ::FString::FString(&local_e0,L"None");
      }
      else {
        local_d0.ComparisonIndex.Value = *(uint *)&pUVar23->field_0x18;
        local_d0.Number = *(uint *)&pUVar23->field_0x1c;
        ::FName::ToString(&local_d0,&local_e0);
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)*plVar1,(FName *)&LogCrowdFollowing.field_0x4,Error,
                 L"Invalid navigation data in UCrowdFollowingComponent::SetMoveSegment, expected ARecastNavMesh class, got: %s"
                );
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    puVar27 = &local_108;
    local_108 = CodeLookup[3] | 0x20;
    local_106 = 3;
    lVar14 = this->_padding_;
  }
LAB_146fd09d6:
  (**(code **)(lVar14 + 0x530))(this,puVar27);
  return;
}

// ShouldCheckPathOnResume @ 146fd2e30

bool __thiscall UCrowdFollowingComponent::ShouldCheckPathOnResume(UCrowdFollowingComponent *this)

{
  bool bVar1;
  
  if (this->SimulationState == Enabled) {
    return false;
  }
  bVar1 = HasMovedDuringPause(this);
  return bVar1;
}

// ShouldSwitchPathPart @ 146fd3050

bool __thiscall
UCrowdFollowingComponent::ShouldSwitchPathPart(UCrowdFollowingComponent *this,int param_1)

{
  return param_1 < 3;
}

// ShouldTrackMovingGoal @ 146fd3060

bool __thiscall
UCrowdFollowingComponent::ShouldTrackMovingGoal
          (UCrowdFollowingComponent *this,TVector<double> *param_1)

{
  int iVar1;
  double dVar2;
  FMetaNavMeshPath *pFVar3;
  FNavigationPath *pFVar4;
  UObject *pUVar5;
  TVector<double> *pTVar6;
  TVector<double> local_28;
  
  if ((((this->_padding_ & 0x1000000000000) != 0) &&
      ((FNavigationPath *)this->_padding_ != (FNavigationPath *)0x0)) &&
     (pFVar3 = FNavigationPath::CastPath<FMetaNavMeshPath>((FNavigationPath *)this->_padding_),
     pFVar3 != (FMetaNavMeshPath *)0x0)) {
    iVar1 = (pFVar3->Waypoints).ArrayNum;
    if (pFVar3->TargetWaypointIdx != iVar1 + -1) {
      return false;
    }
    if (iVar1 < 1) {
      return false;
    }
  }
  if ((((this->bFinalPathPart != '\0') && (this->bUpdateDirectMoveVelocity == '\0')) &&
      ((this->_padding_ != 0 &&
       (((*(uint *)(this->_padding_ + 0xa0) >> 2 & 1) == 0 &&
        (pFVar4 = TSharedPtr<FNavigationPath,1>::operator->
                            ((TSharedPtr<FNavigationPath,1> *)&this->_padding_),
        pFVar4->bObservingGoalActor != 0)))))) &&
     (pUVar5 = FWeakObjectPtr::Get(&(pFVar4->GoalActor).WeakPtr), pUVar5 != (UObject *)0x0)) {
    pFVar4 = TSharedPtr<FNavigationPath,1>::operator->
                       ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
    pTVar6 = FNavigationPath::GetGoalLocation(pFVar4,&local_28);
    dVar2 = (pTVar6->field0_0x0)._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (pTVar6->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar2;
    (param_1->field0_0x0)._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
    return true;
  }
  return false;
}

// StaticRegisterNativesUCrowdFollowingComponent @ 146fd3680

void __cdecl UCrowdFollowingComponent::StaticRegisterNativesUCrowdFollowingComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCrowdFollowingComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SuspendCrowdSteering @ 146fd78a0

void __thiscall
UCrowdFollowingComponent::SuspendCrowdSteering(UCrowdFollowingComponent *this,bool param_1)

{
  if (this->bSuspendCrowdSimulation != param_1) {
    this->field_0x358 = this->field_0x358 & 0xef | param_1 << 4;
    UpdateCrowdAgentParams(this);
    return;
  }
  return;
}

// SwitchToNextPathPart @ 146fd78e0

void __thiscall UCrowdFollowingComponent::SwitchToNextPathPart(UCrowdFollowingComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x608))(this,0);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x5c0);
                    /* WARNING: Could not recover jumptable at 0x000146fd7908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,uVar1,UNRECOVERED_JUMPTABLE);
  return;
}

// UpdateCachedDirections @ 146fdf950

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
UCrowdFollowingComponent::UpdateCachedDirections
          (UCrowdFollowingComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          bool param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UObject *pUVar6;
  TVector<double>_u_0 *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double local_d8;
  double local_d0;
  double local_c8;
  TVector<double> local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  undefined1 local_78 [16];
  double local_68;
  TVector<double> local_60;
  TVector<double> local_48 [2];
  
  (**(code **)(this->_padding_ + 0x10))();
  dVar11 = (param_2->field0_0x0)._s_0.X - local_d8;
  dVar8 = (param_2->field0_0x0)._s_0.Y - local_d0;
  dVar10 = (param_2->field0_0x0)._s_0.Z - local_c8;
  dVar9 = dVar8 * dVar8 + dVar11 * dVar11 + dVar10 * dVar10;
  if (__real_4059000000000000 < dVar9) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    local_68 = dVar10 * dVar9;
    dVar11 = dVar11 * dVar9;
    uVar12 = SUB84(dVar8 * dVar9,0);
    uVar13 = (undefined4)((ulonglong)(dVar8 * dVar9) >> 0x20);
    auVar1._8_4_ = uVar12;
    auVar1._0_8_ = dVar11;
    auVar1._12_4_ = uVar13;
    this->_padding_ = (longlong)dVar11;
    this->_padding_ = auVar1._8_8_;
    this->_padding_ = (longlong)local_68;
    local_78._8_4_ = uVar12;
    local_78._0_8_ = dVar11;
    local_78._12_4_ = uVar13;
  }
  bVar4 = TWeakInterfacePtr<INavMovementInterface>::operator==
                    ((TWeakInterfacePtr<INavMovementInterface> *)&this->_padding_,(void *)0x0);
  if (!bVar4) {
    if (((this->_padding_ == 0) ||
        (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
    if (cVar5 != '\0') {
      return;
    }
  }
  if (this->bUpdateDirectMoveVelocity == '\0') {
    if (((this->bRotateToVelocity == '\0') && (!param_3)) ||
       (dVar8 = (param_1->field0_0x0)._s_0.X, dVar9 = (param_1->field0_0x0)._s_0.Y,
       dVar10 = (param_1->field0_0x0)._s_0.Z,
       dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10 <= __real_3f1a36e2e0000000)) {
      pTVar7 = &local_90;
      local_90._s_0.X = (double)this->_padding_;
      local_90._s_0.Y = (double)this->_padding_;
      local_90._s_0.Z = (double)this->_padding_;
    }
    else {
      pTVar7 = &UE::Math::TVector<double>::GetSafeNormal
                          (param_1,local_48,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector)->field0_0x0;
    }
  }
  else {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      lVar2 = *(longlong *)(pUVar6 + 0xb);
      if (lVar2 == 0) {
        uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        dVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_c0.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        local_c0.field0_0x0._s_0.Z = *(double *)(lVar2 + 0x220);
        auVar1 = *(undefined1 (*) [16])(lVar2 + 0x210);
        uVar12 = auVar1._0_4_;
        uVar13 = auVar1._4_4_;
        dVar8 = auVar1._8_8_;
      }
    }
    else {
      FBasedPosition::operator*((FBasedPosition *)&this->_padding_,&local_c0);
      uVar12 = local_c0.field0_0x0._0_4_;
      uVar13 = local_c0.field0_0x0._4_4_;
      dVar8 = local_c0.field0_0x0._8_8_;
    }
    local_a8._s_0.X = (double)CONCAT44(uVar13,uVar12) - local_d8;
    local_a8._s_0.Y = dVar8 - local_d0;
    local_a8._s_0.Z = local_c0.field0_0x0._s_0.Z - local_c8;
    pTVar7 = &UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_a8._s_0,&local_60,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector)->field0_0x0;
  }
  dVar8 = (pTVar7->_s_0).Y;
  (this->CrowdAgentMoveDirection).field0_0x0._s_0.X =
       (((TVector<double>_u_0 *)&(pTVar7->_s_0).X)->_s_0).X;
  (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y = dVar8;
  (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z = (pTVar7->_s_0).Z;
  return;
}

// UpdateCrowdAgentParams @ 146fdfc00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::UpdateCrowdAgentParams(UCrowdFollowingComponent *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *this_00;
  ICrowdAgentInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
LAB_146fdfc57:
    pUVar5 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146fdfc57;
  }
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return;
  }
  this_00 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = UCrowdManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fdfc97;
  }
  this_00 = (UCrowdManager *)0x0;
LAB_146fdfc97:
  if (this_00 != (UCrowdManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UCrowdManager::UpdateAgentParams(this_00,pIVar4);
  }
  return;
}

// UpdateDestinationForMovingGoal @ 146fdffb0

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
UCrowdFollowingComponent::UpdateDestinationForMovingGoal
          (UCrowdFollowingComponent *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  AActor *pAVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pAVar3 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x38));
  FBasedPosition::Set((FBasedPosition *)&this->_padding_,pAVar3,param_1);
  return;
}

// UpdateMovementComponent @ 146fe07b0

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
UCrowdFollowingComponent::UpdateMovementComponent(UCrowdFollowingComponent *this,bool param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UObject *local_res8;
  FWeakObjectPtr local_18;
  IRVOAvoidanceInterface *pIStack_10;
  
  bVar1 = UPathFollowingComponent::UpdateMovementComponent((UPathFollowingComponent *)this,param_1);
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_18.ObjectIndex = 0;
  local_18.ObjectSerialNumber = 0;
  if (local_res8 == (UObject *)0x0) {
    pIStack_10 = (IRVOAvoidanceInterface *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
    pIStack_10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)local_res8,pUVar2);
    if (pIStack_10 != (IRVOAvoidanceInterface *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_res8);
    }
  }
  (this->AvoidanceInterface).ObjectInstance.WeakPtr = local_18;
  (this->AvoidanceInterface).InterfaceInstance = pIStack_10;
  return bVar1;
}

// UpdatePathSegment @ 146fe1050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdFollowingComponent::UpdatePathSegment(UCrowdFollowingComponent *this)

{
  longlong *this_00;
  TVector<double> *this_01;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  ushort uVar12;
  FNavigationPath *pFVar13;
  INavMovementInterface *pIVar14;
  double *pdVar15;
  FMetaNavMeshPath *pFVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 unaff_XMM12 [16];
  double local_res8;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  undefined1 local_f0 [16];
  double local_e0;
  TVector<double> local_d8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [32];
  
  if (this->SimulationState != Enabled) {
    UPathFollowingComponent::UpdatePathSegment((UPathFollowingComponent *)this);
    return;
  }
  if (this->_padding_ != 0) {
    this_00 = &this->_padding_;
    bVar10 = TWeakInterfacePtr<INavMovementInterface>::operator==
                       ((TWeakInterfacePtr<INavMovementInterface> *)this_00,(void *)0x0);
    if (!bVar10) {
      pFVar13 = TSharedPtr<FNavigationPath,1>::operator->
                          ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
      if (((pFVar13->bIsReady == 0) || ((pFVar13->PathPoints).ArrayNum < 2)) ||
         (pFVar13->bUpToDate == 0)) {
        pFVar13 = TSharedPtr<FNavigationPath,1>::operator->
                            ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
        if (pFVar13->bWaitingForRepath == 0) {
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                       L"Aborting move due to path being invalid and not waiting for repath");
          }
          goto LAB_146fe110e;
        }
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                     L"Updating path points in invalid & pending path!");
        }
      }
      pIVar14 = TWeakInterfacePtr<INavMovementInterface>::operator->
                          ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
      (**(code **)((longlong)*pIVar14 + 0x80))(pIVar14,&local_d8);
      pIVar14 = TWeakInterfacePtr<INavMovementInterface>::operator->
                          ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
      cVar11 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14);
      if (cVar11 == '\0') {
        return;
      }
      if (*(char *)((longlong)&this->_padding_ + 4) == '\x03') {
        FBasedPosition::operator*
                  ((FBasedPosition *)&this->_padding_,(TVector<double> *)&local_108._s_0);
        if ((this->_padding_ & 0x200000000000) == 0) {
          if (this->bFinalPathPart == '\0') {
            if ((this->bCanUpdatePathPartInTick != '\0') &&
               (bVar10 = UPathFollowingComponent::HasReachedInternal
                                   ((UPathFollowingComponent *)this,
                                    (TVector<double> *)&local_108._s_0,0.0,0.0,&local_d8,0.0,
                                    __real_40800000), bVar10)) {
              SwitchToNextPathPart(this);
            }
            goto LAB_146fe1806;
          }
          pIVar14 = TWeakInterfacePtr<INavMovementInterface>::operator->
                              ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
          pdVar15 = (double *)(**(code **)((longlong)*pIVar14 + 0x80))(pIVar14,local_f0);
          dVar5 = local_108._s_0.Z - pdVar15[2];
          dVar3 = local_108._s_0.X - *pdVar15;
          dVar4 = local_108._s_0.Y - pdVar15[1];
          local_e0 = dVar5;
          if (((bool)this->bCheckMovementAngle) || (this->bCanCheckMovingTooFar != '\0')) {
            this_01 = &this->CrowdAgentMoveDirection;
            bVar10 = UE::Math::TVector<double>::IsNearlyZero(this_01,__real_3f1a36e2e0000000);
            if ((bVar10) ||
               (0.0 <= dVar3 * (this_01->field0_0x0)._s_0.X +
                       dVar4 * (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y +
                       dVar5 * (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z))
            goto LAB_146fe1690;
            bVar10 = true;
            pIVar14 = TWeakInterfacePtr<INavMovementInterface>::operator->
                                ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
            (**(code **)((longlong)*pIVar14 + 0x80))(pIVar14,&local_128);
            dVar9 = __real_4059000000000000;
            if (FVisualLogger::bIsRecording != 0) {
              local_148._s_0.X =
                   (this_01->field0_0x0)._s_0.X * __real_4059000000000000 + local_128._s_0.X;
              local_148._s_0.Z =
                   (this->CrowdAgentMoveDirection).field0_0x0._s_0.Z * __real_4059000000000000 +
                   local_128._s_0.Z;
              local_148._s_0.Y =
                   (this->CrowdAgentMoveDirection).field0_0x0._s_0.Y * __real_4059000000000000 +
                   local_128._s_0.Y;
              FVisualLogger::SegmentLogfImpl
                        ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,
                         (TVector<double> *)&local_128._s_0,(TVector<double> *)&local_148._s_0,
                         &FColor::Cyan,0,L"moveDir");
              dVar8 = __real_3ff0000000000000;
              if (FVisualLogger::bIsRecording != 0) {
                dVar2 = dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5;
                uVar18 = dVar4;
                uVar6 = dVar5;
                uVar7 = dVar3;
                if ((dVar2 != __real_3ff0000000000000) &&
                   (uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                   uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                   uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                   __real_3e45798ee0000000 <= dVar2)) {
                  local_res8 = __real_3ff0000000000000 / SQRT(dVar2);
                  uVar18 = dVar4 * local_res8;
                  uVar6 = dVar5 * local_res8;
                  uVar7 = local_res8 * dVar3;
                }
                local_148._s_0.X = (double)uVar7 * dVar9 + local_128._s_0.X;
                local_148._s_0.Y = (double)uVar18 * dVar9 + local_128._s_0.Y;
                local_148._s_0.Z = (double)uVar6 * dVar9 + local_128._s_0.Z;
                FVisualLogger::SegmentLogfImpl
                          ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,
                           (TVector<double> *)&local_128._s_0,(TVector<double> *)&local_148._s_0,
                           &FColor::Cyan,0,L"toTarget");
                if (FVisualLogger::bIsRecording != 0) {
                  pIVar14 = TWeakInterfacePtr<INavMovementInterface>::operator->
                                      ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
                  pdVar15 = (double *)(**(code **)((longlong)*pIVar14 + 0xc0))(pIVar14,local_c0);
                  auVar1._8_8_ = 0;
                  auVar1._0_8_ = pdVar15[1] * pdVar15[1] + *pdVar15 * *pdVar15 +
                                 pdVar15[2] * pdVar15[2];
                  sqrtpd(unaff_XMM12,auVar1);
                  pIVar14 = TWeakInterfacePtr<INavMovementInterface>::operator->
                                      ((TWeakInterfacePtr<INavMovementInterface> *)this_00);
                  (**(code **)((longlong)*pIVar14 + 0xc0))(pIVar14,local_a8);
                  ::FString::PrintfImpl((FString *)&local_148._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
                  dVar3 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
                  if ((dVar3 != dVar8) && (__real_3e45798ee0000000 <= dVar3)) {
                    local_res8 = dVar8 / SQRT(dVar3);
                  }
                  FVisualLogger::CategorizedLogfImpl
                            ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,
                             L"Moved too far, dotValue: %.2f (normalized dot: %.2f) velocity:%s (speed:%.0f)"
                            );
                  if ((void *)local_148._s_0.X != (void *)0x0) {
                    FMemory::Free((void *)local_148._s_0.X);
                  }
                }
              }
            }
          }
          else {
LAB_146fe1690:
            bVar10 = false;
          }
          dVar4 = (double)this->_padding_;
          dVar5 = (double)this->_padding_;
          dVar3 = (double)this->_padding_;
          pFVar13 = TSharedPtr<FNavigationPath,1>::operator*<FNavigationPath>
                              ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
          local_128._s_0.X = dVar4;
          local_128._s_0.Y = dVar5;
          local_128._s_0.Z = dVar3;
          fVar17 = UPathFollowingComponent::GetFinalAcceptanceRadius
                             ((UPathFollowingComponent *)this,pFVar13,
                              (TVector<double> *)&local_128._s_0,(TVector<double> *)&local_108._s_0)
          ;
          if (!bVar10) {
            if ((this->_padding_ & 0x10000000000) == 0) {
              fVar19 = 0.0;
            }
            else {
              fVar19 = *(float *)((longlong)&this->_padding_ + 4);
            }
            bVar10 = UPathFollowingComponent::HasReachedInternal
                               ((UPathFollowingComponent *)this,(TVector<double> *)&local_108._s_0,
                                0.0,0.0,&local_d8,fVar17,fVar19);
            if (!bVar10) goto LAB_146fe1806;
          }
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this->_padding_,(FName *)&LogCrowdFollowing.field_0x4,Log,
                       L"Last path segment finished due to \'%s\'");
          }
        }
        else {
          (**(code **)(this->_padding_ + 0x538))(this);
        }
        local_res8._0_3_ = (uint3)CodeLookup[0];
        (**(code **)(this->_padding_ + 0x530))(this,&local_res8);
      }
LAB_146fe1806:
      if (*(char *)((longlong)&this->_padding_ + 4) != '\x03') {
        return;
      }
      if ((this->_padding_ & 0x1000000000000) != 0) {
        pFVar13 = TSharedPtr<FNavigationPath,1>::operator->
                            ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
        pFVar16 = FNavigationPath::CastPath<FMetaNavMeshPath>(pFVar13);
        if ((pFVar16 != (FMetaNavMeshPath *)0x0) &&
           (*(char *)((longlong)&this->_padding_ + 4) == '\x03')) {
          (**(code **)(pFVar16->_padding_ + 0x88))(pFVar16,&local_d8,1);
        }
      }
      cVar11 = (**(code **)(this->_padding_ + 0x5e0))(this);
      if (cVar11 == '\0') {
        return;
      }
      bVar10 = UPathFollowingComponent::IsBlocked((UPathFollowingComponent *)this);
      if (!bVar10) {
        return;
      }
      local_res8 = (double)CONCAT53(local_res8._3_5_,0x10000);
      uVar12 = CodeLookup[1];
      goto LAB_146fe1120;
    }
  }
LAB_146fe110e:
  local_res8 = (double)CONCAT53(local_res8._3_5_,0x30000);
  uVar12 = CodeLookup[3] | 0x20;
LAB_146fe1120:
  local_res8 = (double)CONCAT62(local_res8._2_6_,uVar12);
  (**(code **)(this->_padding_ + 0x530))(this,&local_res8);
  return;
}

// _getUObject @ 146fe4090

UObject * __thiscall UCrowdFollowingComponent::_getUObject(UCrowdFollowingComponent *this)

{
  return (UObject *)((longlong)&this[-1].CrowdAgentMoveDirection.field0_0x0 + 0x10);
}

// _getUObject`adjustor{768}' @ 146fe409c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCrowdFollowingComponent::_getUObject`adjustor{768}' (void)const __ptr64 */

UObject * __thiscall
UCrowdFollowingComponent::_getUObject_adjustor_768__(UCrowdFollowingComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCrowdFollowingComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{152}' @ 146fe40b0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCrowdFollowingComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UCrowdFollowingComponent::_getUObject_adjustor_152__(UCrowdFollowingComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCrowdFollowingComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{160}' @ 146fe40c4

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCrowdFollowingComponent::_getUObject`adjustor{160}' (void)const __ptr64 */

UObject * __thiscall
UCrowdFollowingComponent::_getUObject_adjustor_160__(UCrowdFollowingComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCrowdFollowingComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execSuspendCrowdSteering @ 146fe8410

void __cdecl
UCrowdFollowingComponent::execSuspendCrowdSteering(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_res8[0] != 0);
  return;
}

