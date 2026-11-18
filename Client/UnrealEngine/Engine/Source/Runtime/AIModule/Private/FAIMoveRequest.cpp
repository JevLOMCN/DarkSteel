// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticStruct @ 146e78ef0

UScriptStruct * __cdecl FAIMoveRequest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIMoveRequest.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIMoveRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIMoveRequest,(UObject *)pUVar1,L"AIMoveRequest"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAIMoveRequest.OuterSingleton;
}

// FAIMoveRequest @ 146e800f0

FAIMoveRequest * __thiscall
FAIMoveRequest::FAIMoveRequest(FAIMoveRequest *this,TVector<double> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  undefined8 local_res8;
  
  (this->GoalActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (this->GoalLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->GoalLocation).field0_0x0._s_0.Y = dVar4;
  (this->GoalLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->FilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  puVar2 = &this->field_0x28;
  this->bInitialized = 1;
  fVar5 = UPathFollowingComponent::DefaultAcceptanceRadius;
  this->bCanStrafe = 0;
  this->bReachTestIncludesGoalRadius = 1;
  this->bReachTestIncludesAgentRadius = 1;
  this->bStartFromPreviousPath = 0;
  this->bProjectGoalOnNavigation = 1;
  this->bApplyCostLimitFromHeuristic = 0;
  this->bRequireNavigableEndLocation = 1;
  this->bAllowPartialPath = 1;
  this->bUsePathfinding = 1;
  this->bMoveToActor = 0;
  (this->UserData).Object = (FMoveRequestCustomData *)0x0;
  (this->UserData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->UserFlags = 0;
  this->AcceptanceRadius = fVar5;
  this->CostLimitFactor = 3.4028235e+38;
  this->MinimumCostLimit = 0.0;
  return this;
}

// FAIMoveRequest @ 146e80180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAIMoveRequest * __thiscall FAIMoveRequest::FAIMoveRequest(FAIMoveRequest *this,AActor *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  AActor *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->GoalActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  uVar4 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->GoalLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->GoalLocation).field0_0x0._s_0.Y = (double)uVar4;
  (this->GoalLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->FilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  puVar2 = &this->field_0x28;
  this->bInitialized = 1;
  fVar5 = UPathFollowingComponent::DefaultAcceptanceRadius;
  this->bCanStrafe = 0;
  this->bReachTestIncludesGoalRadius = 1;
  this->bReachTestIncludesAgentRadius = 1;
  this->bStartFromPreviousPath = 0;
  this->bProjectGoalOnNavigation = 1;
  this->bApplyCostLimitFromHeuristic = 0;
  this->bRequireNavigableEndLocation = 1;
  this->bAllowPartialPath = 1;
  this->bUsePathfinding = 1;
  this->bMoveToActor = 1;
  (this->UserData).Object = (FMoveRequestCustomData *)0x0;
  (this->UserData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->UserFlags = 0;
  this->AcceptanceRadius = fVar5;
  this->CostLimitFactor = 3.4028235e+38;
  this->MinimumCostLimit = 0.0;
  return this;
}

// FAIMoveRequest @ 146e80240

FAIMoveRequest * __thiscall FAIMoveRequest::FAIMoveRequest(FAIMoveRequest *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  (this->GoalActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  uVar4 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->GoalLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->GoalLocation).field0_0x0._s_0.Y = (double)uVar4;
  (this->GoalLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  puVar2 = &this->field_0x28;
  this->bInitialized = 0;
  this->bCanStrafe = 0;
  this->bReachTestIncludesGoalRadius = 1;
  this->bReachTestIncludesAgentRadius = 1;
  this->bStartFromPreviousPath = 0;
  this->bProjectGoalOnNavigation = 1;
  this->bApplyCostLimitFromHeuristic = 0;
  this->bRequireNavigableEndLocation = 1;
  this->bAllowPartialPath = 1;
  this->bUsePathfinding = 1;
  this->bMoveToActor = 0;
  (this->FilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->AcceptanceRadius = UPathFollowingComponent::DefaultAcceptanceRadius;
  this->CostLimitFactor = 3.4028235e+38;
  this->MinimumCostLimit = 0.0;
  (this->UserData).Object = (FMoveRequestCustomData *)0x0;
  (this->UserData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->UserFlags = 0;
  return this;
}

// GetDestination @ 146e8dbd0

TVector<double> * __thiscall
FAIMoveRequest::GetDestination(FAIMoveRequest *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (this->bMoveToActor == 0) {
    local_28 = (this->GoalLocation).field0_0x0._s_0.X;
    dStack_20 = (this->GoalLocation).field0_0x0._s_0.Y;
    local_18 = (this->GoalLocation).field0_0x0._s_0.Z;
  }
  else {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      lVar1 = *(longlong *)(pUVar3 + 0xb);
      if (lVar1 == 0) {
        local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        local_28 = *(double *)(lVar1 + 0x210);
        dStack_20 = *(double *)(lVar1 + 0x218);
        local_18 = *(double *)(lVar1 + 0x220);
      }
    }
    else {
      local_28 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      dStack_20 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
      local_18 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// SetGoalActor @ 146e9f070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAIMoveRequest::SetGoalActor(FAIMoveRequest *this,AActor *param_1)

{
  undefined1 *puVar1;
  AActor *local_res8 [4];
  
  if (this->bInitialized == 0) {
    local_res8[0] = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)local_res8);
    this->bInitialized = 1;
    this->bMoveToActor = 1;
  }
  return;
}

// SetGoalLocation @ 146e9f0c0

void __thiscall FAIMoveRequest::SetGoalLocation(FAIMoveRequest *this,TVector<double> *param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  uVar1 = *(undefined4 *)&this->field_0x28;
  if (ZPULL(uVar1,0,1) == 0) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    (this->GoalLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->GoalLocation).field0_0x0._s_0.Y = dVar2;
    (this->GoalLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    *(uint *)&this->field_0x28 = uVar1 | 1;
  }
  return;
}

// ToString @ 146ea2b50

FString * __thiscall FAIMoveRequest::ToString(FAIMoveRequest *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar2 = (this->FilterClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (pUVar2 = (this->FilterClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)
       ) {
      local_res8 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res8,&local_58);
      goto LAB_146ea2c34;
    }
  }
  ::FString::FString(&local_58,L"None");
LAB_146ea2c34:
  if (this->bMoveToActor == 0) {
    ::FString::PrintfImpl(local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
    bVar4 = false;
    bVar3 = true;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_68,L"None");
      bVar4 = true;
      bVar3 = false;
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res8.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res8,&local_68);
      bVar4 = true;
      bVar3 = false;
    }
  }
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s(%s) Mode(%s) Filter(%s) AcceptanceRadius(%.1f%s) StartsFromPreviousPath(%s))");
  if ((bVar3) && (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdateGoalLocation @ 146ea4650

bool __thiscall FAIMoveRequest::UpdateGoalLocation(FAIMoveRequest *this,TVector<double> *param_1)

{
  double dVar1;
  
  if (this->bMoveToActor == 0) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->GoalLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->GoalLocation).field0_0x0._s_0.Y = dVar1;
    (this->GoalLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    return true;
  }
  return false;
}

