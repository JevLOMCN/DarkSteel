// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 129

// GetDebugWidgetComponent @ 14b48ca90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetDebugWidgetComponent(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>)in_RDX;
}

// GetHitSphereComponent @ 14b48cd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::GetHitSphereComponent
          (FDS_EntityBase *this,int param_1,TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *param_2
          )

{
  return false;
}

// GetHitSphereComponents @ 14b48cd80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::GetHitSphereComponents
          (FDS_EntityBase *this,
          TMap<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>_>
          *param_1)

{
  return false;
}

// GetParentEntity @ 14b48cd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<AActor,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetParentEntity(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->ParentEntityActor).WeakPtr;
  return (TWeakObjectPtr<AActor,FWeakObjectPtr>)in_RDX;
}

// IsInteractingWithMainCharacter @ 14b48d6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsInteractingWithMainCharacter(FDS_EntityBase *this)

{
  return false;
}

// IsMovementCoreTickEnabled @ 14b48d6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsMovementCoreTickEnabled(FDS_EntityBase *this)

{
  return true;
}

// OnStartSkill @ 14b48d700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnStartSkill(FDS_EntityBase *this,int *param_1)

{
  return;
}

// RefreshInteractionState @ 14b48d710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::RefreshInteractionState(FDS_EntityBase *this)

{
  return;
}

// ResetEntityOnCharacterSwitch @ 14b48d720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::ResetEntityOnCharacterSwitch(FDS_EntityBase *this)

{
  return;
}

// ShowMultiHitCollision @ 14b48d740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::ShowMultiHitCollision(FDS_EntityBase *this,bool *param_1)

{
  return;
}

// FDS_EntityBase @ 14b491f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __thiscall FDS_EntityBase::FDS_EntityBase(FDS_EntityBase *this)

{
  undefined8 uVar1;
  
  this->EntityID = 1;
  this->_padding_ = (longlong)&___7FDS_EntityBase__6B_;
  this->TableID = 0;
  this->SpawnTableID = 0;
  this->UnbeatableTime = 0.0;
  this->EntityType = None;
  (this->HitDirection2D).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->EntityScaleVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->EntityScaleVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->EntityScaleVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->ScaledCapsuleHalfHeight = 0.0;
  this->ScaledCapsuleRadius = 0.0;
  this->DefaultCollisionProfileName = ::COLLISION_PROFILE_NOCOLLISION;
  *(undefined8 *)&this->GlobalAnimRateScaleMap = 0;
  *(undefined8 *)&(this->GlobalAnimRateScaleMap).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalAnimRateScaleMap).field_0x20 = 0;
  this->HiddenPolicy = None;
  this->bIsSavedShowEntityData = false;
  this->bSavedActorEnableCollision = false;
  this->OriginViewDistance = 0.0;
  this->OriginOutViewDistance = 0.0;
  *(undefined4 *)&(this->GlobalAnimRateScaleMap).field_0x28 = 0;
  *(undefined4 *)&(this->GlobalAnimRateScaleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GlobalAnimRateScaleMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlobalAnimRateScaleMap).field_0x34 = 0;
  *(undefined8 *)&(this->GlobalAnimRateScaleMap).field_0x40 = 0;
  *(undefined4 *)&(this->GlobalAnimRateScaleMap).field_0x48 = 0;
  (this->OnChangedTagCallbackHandle).ID = 0;
  *(undefined8 *)&this->MainPlayerInteractionOverlappedMap = 0;
  *(undefined8 *)&(this->MainPlayerInteractionOverlappedMap).field_0x8 = 0;
  *(undefined8 *)&(this->MainPlayerInteractionOverlappedMap).field_0x20 = 0;
  this->CurGlobalAnimRateScale = 1.0;
  *(undefined4 *)&(this->MainPlayerInteractionOverlappedMap).field_0x28 = 0;
  *(undefined4 *)&(this->MainPlayerInteractionOverlappedMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MainPlayerInteractionOverlappedMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MainPlayerInteractionOverlappedMap).field_0x34 = 0;
  *(undefined8 *)&(this->MainPlayerInteractionOverlappedMap).field_0x40 = 0;
  *(undefined4 *)&(this->MainPlayerInteractionOverlappedMap).field_0x48 = 0;
  *(undefined8 *)&this->InteractionOverlapDelegate = 0;
  *(undefined8 *)&(this->InteractionOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->InteractionOverlapDelegate).field_0x18 = 2;
  *(undefined8 *)&this->EntityMaterialMap = 0;
  *(undefined8 *)&(this->EntityMaterialMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityMaterialMap).field_0x20 = 0;
  this->MaterialOpacity = 1.0;
  *(undefined4 *)&(this->EntityMaterialMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityMaterialMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityMaterialMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityMaterialMap).field_0x34 = 0;
  *(undefined8 *)&(this->EntityMaterialMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityMaterialMap).field_0x48 = 0;
  *(undefined8 *)&this->OnDesiredEquipmentAppearanceDelegate = 0;
  *(undefined8 *)&(this->OnDesiredEquipmentAppearanceDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDesiredEquipmentAppearanceDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnDesiredEquipmentAppearanceDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangeParentActorDelegate = 0;
  *(undefined8 *)&(this->ChangeParentActorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeParentActorDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeParentActorDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnLoadCompletePartsSystemControl = 0;
  *(undefined8 *)&(this->OnLoadCompletePartsSystemControl).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadCompletePartsSystemControl).field_0x10 = 0;
  *(undefined8 *)&(this->OnLoadCompletePartsSystemControl).field_0x18 = 2;
  *(undefined8 *)&this->DataPropertyDelegate_BattleState = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BattleState).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_BattleState).field_0x10 = 0;
  (this->ParentEntityActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurEntityMaterialType = Default;
  this->BattleState = false;
  (this->OutlineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)&this->OnRemoveDelegate = 0;
  *(undefined8 *)&(this->OnRemoveDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnRemoveDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangeUserFocusedDelegate = 0;
  *(undefined8 *)&(this->ChangeUserFocusedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeUserFocusedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeUserFocusedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnHitDelegate = 0;
  *(undefined8 *)&(this->OnHitDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnHitDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnHitDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnAbnormalEventDelegate = 0;
  *(undefined8 *)&(this->OnAbnormalEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnAbnormalEventDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnAbnormalEventDelegate).field_0x18 = 2;
  (this->LastStruckInfo).HasDamage = false;
  (this->LastStruckInfo).AttackerEntityID = 0;
  (this->LastStruckInfo).DefenderEntityID = 0;
  (this->LastStruckInfo).SkillAttackID = 0;
  (this->LastStruckInfo).Damage = 0;
  (this->LastStruckInfo).EventTime = 0.0;
  (this->LastStruckInfo).ExecuteTime = 0.0;
  (this->LastStruckInfo).AbnormalID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastStruckInfo).DamageInfo = 0;
  (this->LastStruckInfo).AbnormalDestination.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastStruckInfo).AbnormalDestination.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastStruckInfo).AbnormalDestination.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastStruckInfo).MultiHitPointIndex = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastStruckInfo).EffectLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastStruckInfo).EffectLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastStruckInfo).EffectLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsRemoveReserved = false;
  (this->TimerHandle).Handle = 0;
  this->bIsUserFocused = false;
  this->bIsHiddenEntityActor = false;
  this->bIsShowMapIndex = false;
  this->IsQuestActor = false;
  this->DefaultCustomDepthValue = 0;
  this->DebugUIComponent = (UWidgetComponent *)0x0;
  return this;
}

// ~FDS_EntityBase @ 14b493200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::~FDS_EntityBase(FDS_EntityBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FDS_EntityBase__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAbnormalEventDelegate).field_0x8,
             *(int *)&(this->OnAbnormalEventDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnAbnormalEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAbnormalEventDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnHitDelegate).field_0x8,*(int *)&(this->OnHitDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnHitDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHitDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeUserFocusedDelegate).field_0x8,
             *(int *)&(this->ChangeUserFocusedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeUserFocusedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeUserFocusedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemoveDelegate).field_0x8,*(int *)&(this->OnRemoveDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnRemoveDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveDelegate);
  pvVar1 = *(void **)&(this->DataPropertyDelegate_BattleState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_BattleState);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoadCompletePartsSystemControl).field_0x8,
             *(int *)&(this->OnLoadCompletePartsSystemControl).field_0x10);
  pvVar1 = *(void **)&(this->OnLoadCompletePartsSystemControl).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadCompletePartsSystemControl);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeParentActorDelegate).field_0x8,
             *(int *)&(this->ChangeParentActorDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeParentActorDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeParentActorDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDesiredEquipmentAppearanceDelegate).field_0x8,
             *(int *)&(this->OnDesiredEquipmentAppearanceDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnDesiredEquipmentAppearanceDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDesiredEquipmentAppearanceDelegate);
  *(undefined4 *)&(this->EntityMaterialMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntityMaterialMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityMaterialType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityMaterialType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EntityMaterialMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionOverlapDelegate).field_0x8,
             *(int *)&(this->InteractionOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionOverlapDelegate);
  *(undefined4 *)&(this->MainPlayerInteractionOverlappedMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MainPlayerInteractionOverlappedMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InteractionType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InteractionType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MainPlayerInteractionOverlappedMap);
  *(undefined4 *)&(this->GlobalAnimRateScaleMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GlobalAnimRateScaleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_GlobalAnimRateScaleType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_GlobalAnimRateScaleType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->GlobalAnimRateScaleMap);
  return;
}

// ChangeMaterial @ 14b494270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::ChangeMaterial(FDS_EntityBase *this,UMaterialInterface *param_1)

{
  return;
}

// GetNameTagUIComponent @ 14b494ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetNameTagUIComponent(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr>)in_RDX;
}

// GetResourcePresetTableRow @ 14b4954c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_ResourcePresetTableRow * __thiscall
FDS_EntityBase::GetResourcePresetTableRow(FDS_EntityBase *this)

{
  return &FDS_ResourcePresetTableRow::DefaultObject;
}

// GetSkeletalMeshComponent @ 14b4954d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetSkeletalMeshComponent(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>)in_RDX;
}

// GetSyncRecvComponent @ 14b495510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetSyncRecvComponent(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>)in_RDX;
}

// GetTrajectoryComponent @ 14b495550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_CharacterTrajectoryComponent,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetTrajectoryComponent(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_CharacterTrajectoryComponent,FWeakObjectPtr>)in_RDX;
}

// HasTriggerOverlap @ 14b4955c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::HasTriggerOverlap(FDS_EntityBase *this,EDS_TriggerType param_1)

{
  return false;
}

// OnChangedShowEntity @ 14b495660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnChangedShowEntity(FDS_EntityBase *this,bool *param_1)

{
  return;
}

// OnChangedTagCallback @ 14b495670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::OnChangedTagCallback(FDS_EntityBase *this,FGameplayTag *param_1,bool param_2)

{
  return;
}

// OnDetectedByPlayerSkill @ 14b495680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnDetectedByPlayerSkill(FDS_EntityBase *this)

{
  return;
}

// OnTriggerBeginOverlap @ 14b495690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::OnTriggerBeginOverlap
          (FDS_EntityBase *this,UDS_TriggerComponent *param_1,UPrimitiveComponent *param_2,
          AActor *param_3,UPrimitiveComponent *param_4)

{
  return;
}

// OnTriggerEndOverlap @ 14b4956a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::OnTriggerEndOverlap
          (FDS_EntityBase *this,UDS_TriggerComponent *param_1,UPrimitiveComponent *param_2,
          AActor *param_3,UPrimitiveComponent *param_4)

{
  return;
}

// PlayDestructionEffect @ 14b4956b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::PlayDestructionEffect(FDS_EntityBase *this)

{
  return true;
}

// ResetToDefaultMaterial @ 14b4956c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::ResetToDefaultMaterial(FDS_EntityBase *this)

{
  return;
}

// ActivateEntityMaterial @ 14bc2c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::ActivateEntityMaterial
          (FDS_EntityBase *this,EDS_EntityMaterialType *param_1,FSoftObjectPath *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityMaterialInfo *this_00;
  UAssetManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TSharedPtr<FStreamableHandle,1> *pTVar7;
  undefined1 auStackY_4b8 [32];
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  FDelegateAllocation local_458;
  undefined1 local_448 [16];
  undefined8 local_438;
  FSourceLocation local_428;
  EDS_EntityMaterialType *local_408;
  undefined1 *local_400;
  FDestructionSentinel local_3f8;
  FDestructionSentinel local_3e0;
  FDelegateAllocation *local_3c8;
  TSharedPtr<FStreamableHandle,1> local_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  if ((*param_1 == Default) || (*param_1 == Max)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557071457>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x39f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_EntityBase::ActivateEntityMaterial",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_168.Ptr,0x3a0,L"InMaterialType is invalid.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else if ((param_2->AssetPath).PackageName == (FName)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557071450>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x3a6,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"FDS_EntityBase::ActivateEntityMaterial",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_3a8.Ptr,0x3a7,L"InMaterialPath is invalid.");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  else {
    this_00 = (FDS_EntityMaterialInfo *)(**(code **)(this->_padding_ + 0x130))();
    if ((this_00->EntityMaterialType == Default) || (this_00->EntityMaterialType == Max)) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1011015776557071441>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                         ,0x3af,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"FDS_EntityBase::ActivateEntityMaterial",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_288.Ptr,0x3b0,L"materialInfo is invalid.");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else {
      bVar2 = FSoftObjectPath::operator==(&this_00->MaterialPath,param_2);
      if (!bVar2) {
        FDS_EntityMaterialInfo::ResetInfo(this_00);
      }
      FSoftObjectPath::operator=(&this_00->MaterialPath,param_2);
      if ((this_00->MaterialInterface).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
        pUVar4 = UAssetManager::Get();
        local_448._8_8_ = (bool *)0x0;
        local_438 = 0;
        local_460 = (undefined1  [8])0x0;
        local_458.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_458.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
                   (FWriteAccessScope *)&local_3e0);
        local_3c8 = &local_458;
        puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_458);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EDS_EntityMaterialType____6B_
          ;
          *(EDS_EntityMaterialType *)(puVar5 + 1) = *param_1;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &
                    ___7__TBaseRawMethodDelegateInstance__0A_VFDS_EntityBase____A6AXXZUFDefaultDelegateUserPolicy__W4EDS_EntityMaterialType____6B_
          ;
          puVar5[4] = OnCompleteLoadEntityMaterial;
          puVar5[3] = this;
        }
        if (local_3e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
        }
        local_428.Impl._Line = 0x3bf;
        local_428.Impl._Function =
             "void __cdecl FDS_EntityBase::ActivateEntityMaterial(const enum EDS_EntityMaterialType &,const struct FSoftObjectPath &)"
        ;
        local_428.Impl._File =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp";
        local_428.Impl._Column = 0x50;
        pTVar7 = FStreamableManager::
                 RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                           (&pUVar4->StreamableManager,&local_3c0,&this_00->MaterialPath,
                            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_460,0,
                            false,false,(FString *)(local_448 + 8),&local_428);
        TSharedPtr<FStreamableHandle,1>::operator=(&this_00->MaterialAsyncLoadHandle,pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3c0.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
                   (FWriteAccessScope *)&local_3f8);
        if ((local_458.DelegateSize != 0) &&
           (local_458.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_458.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_458,0,0,0x10);
          local_458.DelegateSize = 0;
        }
        if (local_3f8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
        }
        if (local_458.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_458.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_460);
      }
      local_400 = local_468;
      local_468[0] = 1;
      local_408 = param_1;
      TSet<TTuple<enum_EDS_EntityMaterialType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_EntityMaterialType_const_&,bool_&&>_>
                (&this->EntityMaterialMap,
                 (TPairInitializer<EDS_EntityMaterialType_const_&,bool_&&> *)local_448,
                 (bool *)&local_408);
      AdjustEntityMaterial(this);
    }
  }
  return;
}

// AddHiddenPolicy @ 14bc2d100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::AddHiddenPolicy(FDS_EntityBase *this,EDS_EntityHiddenPolicy *param_1,float param_2)

{
  this->HiddenPolicy = this->HiddenPolicy | *param_1;
  UpdateHiddenPolicy(this);
  return;
}

// AddStateTag @ 14bc2d250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_EntityBase::AddStateTag(ulong64 *param_1,EDS_StateTagType *param_2)

{
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar1;
  FWeakObjectPtr *pFVar2;
  undefined1 local_res18 [16];
  
  this = UDS_EntityManager::GetInst();
  if (this != (UDS_EntityManager *)0x0) {
    pFVar1 = UDS_EntityManager::FindEntityBase(this,*param_1);
    if (pFVar1 != (FDS_EntityBase *)0x0) {
      pFVar2 = (FWeakObjectPtr *)(**(code **)(pFVar1->_padding_ + 0x178))(pFVar1,local_res18);
      UDS_AbilitySystemComponent::AddStateTag
                ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar2,param_2);
    }
  }
  return;
}

// AdjustEntityMaterial @ 14bc2d450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::AdjustEntityMaterial(FDS_EntityBase *this)

{
  TMap<EDS_EntityMaterialType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EntityMaterialType,bool,0>_>
  *this_00;
  EDS_EntityMaterialType EVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  bool *pbVar6;
  int *piVar7;
  UDS_LogManager *pUVar8;
  undefined1 *puVar9;
  EDS_EntityMaterialType EVar10;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [4];
  EDS_EntityMaterialType local_164;
  TPairInitializer<EDS_EntityMaterialType_const_&,bool_&&> local_160;
  undefined1 *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  EVar1 = this->CurEntityMaterialType;
  this_00 = &this->EntityMaterialMap;
  this->CurEntityMaterialType = Default;
  EVar10 = Abnormal_Lapidification;
  do {
    local_164 = EVar10;
    if (*(int *)&(this->EntityMaterialMap).field_0x8 !=
        *(int *)&(this->EntityMaterialMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->EntityMaterialMap).field_0x40;
      puVar9 = &(this->EntityMaterialMap).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar9 = puVar2;
      }
      iVar5 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->EntityMaterialMap).field_0x48 - Default & EVar10) *
                                4);
      if (iVar5 != -1) {
        do {
          if (*(EDS_EntityMaterialType *)(*(longlong *)this_00 + (longlong)iVar5 * 0x10) == EVar10)
          goto LAB_14bc2d52a;
          iVar5 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    local_168[0] = EVar10 == Default;
    local_160.Value = (bool *)&local_164;
    local_150 = local_168;
    TSet<TTuple<enum_EDS_EntityMaterialType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_EntityMaterialType_const_&,bool_&&>_>
              (this_00,&local_160,(bool *)&local_160.Value);
LAB_14bc2d52a:
    pbVar6 = TMapBase<enum_EDS_EntityMaterialType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,bool,0>_>
             ::FindChecked(this_00,local_164);
    if (*pbVar6 != false) {
      this->CurEntityMaterialType = local_164;
      goto LAB_14bc2d551;
    }
    EVar10 = EVar10 + Default;
    if (1 < (int)EVar10) {
LAB_14bc2d551:
      if (this->CurEntityMaterialType != EVar1) {
        if (this->CurEntityMaterialType == Default) {
          (**(code **)(this->_padding_ + 0x120))();
        }
        else {
          piVar7 = (int *)(**(code **)(this->_padding_ + 0x130))(this);
          if ((*piVar7 == 1) || (*piVar7 == 2)) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1011015776557071197>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                               ,0x4a3,"false");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              local_148._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_148,"FDS_EntityBase::AdjustEntityMaterial",0x24,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Warning,local_148.Ptr,0x4a4,L"materialInfo is invalid.");
              if ((void *)local_148._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_148._padding_);
              }
            }
          }
          else if (*(longlong *)(piVar7 + 0xe) != 0) {
            (**(code **)(this->_padding_ + 0x128))(this);
          }
        }
      }
      return;
    }
  } while( true );
}

// AdjustGlobalAnimRateScale @ 14bc2d690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::AdjustGlobalAnimRateScale(FDS_EntityBase *this)

{
  TMap<EDS_GlobalAnimRateScaleType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GlobalAnimRateScaleType,float,0>_>
  *this_00;
  float fVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  UObject *pUVar9;
  undefined1 *puVar10;
  EDS_GlobalAnimRateScaleType EVar11;
  FWeakObjectPtr local_res8;
  undefined4 local_res10 [2];
  TPairInitializer<EDS_GlobalAnimRateScaleType_const_&,float_&&> local_res18;
  FWeakObjectPtr *local_68;
  undefined4 *local_60;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  this_00 = &this->GlobalAnimRateScaleMap;
  fVar1 = this->CurGlobalAnimRateScale;
  EVar11 = Abnormal_Lapidification;
  this->CurGlobalAnimRateScale = 1.0;
  do {
    local_res8.ObjectIndex = EVar11;
    if (*(int *)&(this->GlobalAnimRateScaleMap).field_0x8 !=
        *(int *)&(this->GlobalAnimRateScaleMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->GlobalAnimRateScaleMap).field_0x40;
      puVar10 = &(this->GlobalAnimRateScaleMap).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar10 = puVar2;
      }
      iVar7 = *(int *)(puVar10 +
                      (ulonglong)
                      (*(int *)&(this->GlobalAnimRateScaleMap).field_0x48 - ImpactEffect & EVar11) *
                      4);
      if (iVar7 != -1) {
        do {
          if (*(EDS_GlobalAnimRateScaleType *)(*(longlong *)this_00 + (longlong)iVar7 * 0x10) ==
              EVar11) goto LAB_14bc2d788;
          iVar7 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    local_68 = &local_res8;
    local_res10[0] = 0x3f800000;
    local_60 = local_res10;
    TSet<TTuple<enum_EDS_GlobalAnimRateScaleType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_GlobalAnimRateScaleType,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_GlobalAnimRateScaleType_const_&,float_&&>_>
              (this_00,&local_res18,(bool *)&local_68);
LAB_14bc2d788:
    pfVar8 = TMapBase<enum_EDS_GlobalAnimRateScaleType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GlobalAnimRateScaleType,float,0>_>
             ::FindChecked(this_00,local_res8.ObjectIndex);
    if (fVar3 < (float)((uint)(*pfVar8 - fVar4) & uVar5)) {
      this->CurGlobalAnimRateScale = *pfVar8;
      goto LAB_14bc2d7bd;
    }
    EVar11 = EVar11 + ImpactEffect;
    if (2 < (int)EVar11) {
LAB_14bc2d7bd:
      if (fVar3 < (float)((uint)(fVar1 - this->CurGlobalAnimRateScale) & uVar5)) {
        (**(code **)(this->_padding_ + 0x80))(this);
        bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                           (void *)0x0);
        if (!bVar6) {
          fVar1 = this->CurGlobalAnimRateScale;
          pUVar9 = FWeakObjectPtr::Get(&local_res8);
          *(float *)&pUVar9[0x44].field_0x20 = fVar1;
        }
      }
      return;
    }
  } while( true );
}

// BindDebugUI @ 14bc2e840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::BindDebugUI(FDS_EntityBase *this)

{
  int iVar1;
  UWidgetComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_00;
  UObject *pUVar9;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TVector<double>_u_0 local_38;
  
  pUVar2 = this->DebugUIComponent;
  if (pUVar2 == (UWidgetComponent *)0x0) {
    return;
  }
  if ((pUVar2->field_0x9b & 0x40) != 0) {
    return;
  }
  pUVar5 = (UObject *)(**(code **)(*(longlong *)pUVar2 + 0xb50))();
  pUVar9 = (UObject *)0x0;
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bc2e8af;
  }
  pUVar5 = pUVar9;
LAB_14bc2e8af:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    pUVar7 = ::operator_new(0x28);
    pUVar5 = pUVar9;
    if (pUVar7 != (UObject *)0x0) {
      *(undefined8 *)&pUVar7->field_0x18 = 0;
      *(undefined8 *)&pUVar7->field_0x8 = 0;
      *(undefined8 *)&pUVar7->field_0x10 = 0;
      *(undefined ***)pUVar7 = &___7FDS_ViewModelContext_Entity__6B_;
      *(undefined8 *)&pUVar7->field_0x20 = 0;
      pUVar5 = pUVar7;
    }
    pUVar7 = ::operator_new(0x20);
    if (pUVar7 != (UObject *)0x0) {
      *(undefined4 *)&pUVar7->field_0x8 = 1;
      *(code **)&pUVar7->field_0x10 = ViewModelContextDeleter;
      *(undefined ***)pUVar7 =
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Entity__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)&pUVar7->field_0xc = 1;
      *(UObject **)&pUVar7->field_0x18 = pUVar5;
      pUVar9 = pUVar7;
    }
    if ((pUVar5 == (UObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_Entity::StaticStruct();
    *(UScriptStruct **)&pUVar5->field_0x8 = pUVar8;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pUVar9 != (UObject *)0x0) {
        LOCK();
        *(int *)&pUVar9->field_0x8 = *(int *)&pUVar9->field_0x8 + 1;
        UNLOCK();
      }
      local_58.Object = (FDS_ViewModelContext *)pUVar5;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar9;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    *(undefined4 *)&pUVar5->field_0x18 = 0x159;
    *(ulong64 *)&pUVar5->field_0x20 = this->EntityID;
    if (pUVar9 != (UObject *)0x0) {
      LOCK();
      *(int *)&pUVar9->field_0x8 = *(int *)&pUVar9->field_0x8 + 1;
      UNLOCK();
    }
    local_48.Object = (FDS_ViewModelContext *)pUVar5;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar9;
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_48,false);
    local_38._s_0.X = (this->EntityScaleVector).field0_0x0._s_0.X;
    local_38._s_0.Y = (this->EntityScaleVector).field0_0x0._s_0.Y;
    local_38._s_0.Z = (this->EntityScaleVector).field0_0x0._s_0.Z;
    USceneComponent::SetRelativeLocation
              ((USceneComponent *)this->DebugUIComponent,(TVector<double> *)&local_38._s_0,false,
               (FHitResult *)0x0,None);
    USceneComponent::SetVisibility((USceneComponent *)this->DebugUIComponent,true,DirtyOnly);
    USceneComponent::SetHiddenInGame((USceneComponent *)this->DebugUIComponent,false,DirtyOnly);
    USceneComponent::UpdateComponentToWorld((USceneComponent *)this->DebugUIComponent,None,None);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this->DebugUIComponent);
    (**(code **)(*(longlong *)this->DebugUIComponent + 0xb38))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar9);
  }
  return;
}

// DeActivateSkillAbility @ 14bc381a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::DeActivateSkillAbility
          (FDS_EntityBase *this,int param_1,EDS_AbilityDeactivateType param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar4;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_158 [8];
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_158[0] = param_2;
  UDS_SkillData::GetData((ulong64)&local_150,this->EntityID,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_150);
    (**(code **)(this->_padding_ + 0x178))(this);
    bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)local_148,
                       (void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_EntityBase::DeactivateAbility",0x21,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x2dd,L"asc is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(local_148);
      pFVar4 = FDS_GameplayTags::GetAbilityTag(&pUVar2[2].field_0x18);
      UDS_AbilitySystemComponent::DeactivateAbilityByTag(this_00,pFVar4,local_158);
    }
  }
  return;
}

// DeactivateAbility @ 14bc38300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::DeactivateAbility
          (FDS_EntityBase *this,EDS_AbilityTagType *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(this->_padding_ + 0x178))();
  bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)local_158,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_EntityBase::DeactivateAbility",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x2dd,L"asc is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(local_158);
    pFVar3 = FDS_GameplayTags::GetAbilityTag(param_1);
    bVar1 = UDS_AbilitySystemComponent::DeactivateAbilityByTag(this_00,pFVar3,param_2);
  }
  return bVar1;
}

// DeactivateEntityMaterial @ 14bc38410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::DeactivateEntityMaterial(FDS_EntityBase *this,EDS_EntityMaterialType *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_EntityMaterialInfo *this_00;
  UDS_LogManager *pUVar3;
  void *pvVar4;
  undefined1 auStackY_2a8 [32];
  undefined1 local_278 [4];
  undefined1 local_274 [4];
  EDS_EntityMaterialType *local_270;
  undefined1 *local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if ((*param_1 == Default) || (*param_1 == Max)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557071411>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x3cd,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_EntityBase::DeactivateEntityMaterial",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x3ce,L"InMaterialType is invalid.");
    pvVar4 = (void *)local_138._padding_;
  }
  else {
    this_00 = (FDS_EntityMaterialInfo *)(**(code **)(this->_padding_ + 0x130))();
    if ((this_00->EntityMaterialType != Default) && (this_00->EntityMaterialType != Max)) {
      FDS_EntityMaterialInfo::ResetInfo(this_00);
      local_268 = local_278;
      local_278[0] = 0;
      local_270 = param_1;
      TSet<TTuple<enum_EDS_EntityMaterialType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_EntityMaterialType_const_&,bool_&&>_>
                (&this->EntityMaterialMap,
                 (TPairInitializer<EDS_EntityMaterialType_const_&,bool_&&> *)local_274,
                 (bool *)(local_274 + 4));
      AdjustEntityMaterial(this);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557071402>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x3d6,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"FDS_EntityBase::DeactivateEntityMaterial",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x3d7,L"materialInfo is invalid.");
    pvVar4 = (void *)local_258._padding_;
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  return;
}

// GetAbilitySystemComponent @ 14bc3eeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetAbilitySystemComponent(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>)in_RDX;
}

// GetActorFromEntityID @ 14bc3f080

TWeakObjectPtr<AActor,FWeakObjectPtr> __cdecl FDS_EntityBase::GetActorFromEntityID(ulong64 *param_1)

{
  UDS_EntityManager *local_res18;
  ulong64 local_res20;
  
  local_res18 = UDS_EntityManager::GetInst();
  if (local_res18 == (UDS_EntityManager *)0x0) {
    *param_1 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<AActor,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_EntityManager::FindEntity(local_res18,(ulong64)&local_res20);
  *param_1 = local_res20;
  return (TWeakObjectPtr<AActor,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetCapsuleComponent @ 14bc3fbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetCapsuleComponent(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>)in_RDX;
}

// GetCharBuffData @ 14bc3fc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetCharBuffData(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  
  UDS_CharBuffData::GetData((ulong64)in_RDX);
  return (TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)in_RDX;
}

// GetCharInfoData @ 14bc3fc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetCharInfoData(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  
  UDS_CharInfoData::GetData((ulong64)in_RDX);
  return (TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)in_RDX;
}

// GetCharStateData @ 14bc3fc60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetCharStateData(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  
  UDS_CharStateData::GetData((ulong64)in_RDX);
  return (TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)in_RDX;
}

// GetCharStatusData @ 14bc3fc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetCharStatusData(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  
  UDS_CharStatusData::GetData((ulong64)in_RDX);
  return (TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>)in_RDX;
}

// GetCollisionComponents @ 14bc40010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FDS_EntityBase::GetCollisionComponents
          (FDS_EntityBase *this,
          TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurOutViewDistance @ 14bc400c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

double __thiscall FDS_EntityBase::GetCurOutViewDistance(FDS_EntityBase *this)

{
  UDS_EntityManager *pUVar1;
  UDS_LogManager *pUVar2;
  double dVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  dVar3 = this->OriginOutViewDistance;
  if (0.0 < dVar3) {
    pUVar1 = UDS_EntityManager::GetInst();
    if (pUVar1 == (UDS_EntityManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_EntityBase::GetCurOutViewDistance",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x20a,L"entityMng is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      dVar3 = (double)pUVar1->EntityViewRangeAdd + dVar3;
    }
  }
  return dVar3;
}

// GetCurViewDistance @ 14bc401d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

double __thiscall FDS_EntityBase::GetCurViewDistance(FDS_EntityBase *this)

{
  UDS_EntityManager *pUVar1;
  UDS_LogManager *pUVar2;
  double dVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  dVar3 = this->OriginViewDistance;
  if (0.0 < dVar3) {
    pUVar1 = UDS_EntityManager::GetInst();
    if (pUVar1 == (UDS_EntityManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_EntityBase::GetCurViewDistance",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x1f6,L"entityMng is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      dVar3 = (double)pUVar1->EntityViewRangeAdd + dVar3;
    }
  }
  return dVar3;
}

// GetEntityBase @ 14bc40740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __cdecl FDS_EntityBase::GetEntityBase(ulong64 *param_1)

{
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar1;
  
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    return (FDS_EntityBase *)0x0;
  }
  pFVar1 = UDS_EntityManager::FindEntityBase(this,*param_1);
  return pFVar1;
}

// GetEntityBaseFromActor @ 14bc40770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __cdecl
FDS_EntityBase::GetEntityBaseFromActor(TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return (FDS_EntityBase *)&pUVar3[0x11].field_0x18;
      }
    }
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return (FDS_EntityBase *)&pUVar3[0x29].field_0x10;
      }
    }
  }
  return (FDS_EntityBase *)0x0;
}

// GetEntityMaterialInfo @ 14bc409d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityMaterialInfo * __thiscall
FDS_EntityBase::GetEntityMaterialInfo(FDS_EntityBase *this,EDS_EntityMaterialType *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FDS_EntityBase::GetEntityMaterialInfo'::__l2::
             _dynamic_atexit_destructor_for__emptyInfo__);
      _Init_thread_footer(&::_TSS0);
      return &emptyInfo;
    }
  }
  return &emptyInfo;
}

// GetEntityRotation @ 14bc40a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TRotator<double> * __thiscall
FDS_EntityBase::GetEntityRotation(FDS_EntityBase *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  TRotator<double> *pTVar5;
  FWeakObjectPtr local_res8 [4];
  TRotator<double> local_28;
  
  (**(code **)(this->_padding_ + 0x150))();
  bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)local_res8,(void *)0x0);
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(local_res8);
    if (*(USceneComponent **)(pUVar4 + 0xb) == (USceneComponent *)0x0) {
      pTVar5 = &local_28;
      local_28.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_28.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_28.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      pTVar5 = USceneComponent::GetComponentRotation(*(USceneComponent **)(pUVar4 + 0xb),&local_28);
    }
    dVar2 = pTVar5->Yaw;
    dVar1 = pTVar5->Roll;
    __return_storage_ptr__->Pitch = pTVar5->Pitch;
    __return_storage_ptr__->Yaw = dVar2;
    __return_storage_ptr__->Roll = dVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  __return_storage_ptr__->Yaw = dVar1;
  __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return __return_storage_ptr__;
}

// GetInputData @ 14bc41840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetInputData(FDS_EntityBase *this)

{
  FWeakObjectPtr in_RDX;
  
  TDS_DataSetGetter<UDS_InputData>::Get((ulong64)in_RDX);
  return (TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>)in_RDX;
}

// GetIsMultiHitCollision @ 14bc41910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::GetIsMultiHitCollision(FDS_EntityBase *this)

{
  FDS_NpcBaseTableRow *pFVar1;
  FDS_NpcBattleTableRow *pFVar2;
  
  if ((this->EntityType == NPC) && (0 < this->TableID)) {
    pFVar1 = FDS_NpcBaseTableRow::Get(this->TableID,true);
    if ((pFVar1 != (FDS_NpcBaseTableRow *)0x0) && (0 < pFVar1->ID_NpcBattle)) {
      pFVar2 = FDS_NpcBattleTableRow::Get((longlong)pFVar1->ID_NpcBattle,true);
      if (pFVar2 != (FDS_NpcBattleTableRow *)0x0) {
        return pFVar2->IsMultiHitCollision;
      }
    }
  }
  return false;
}

// GetIsQuestActor @ 14bc41970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::GetIsQuestActor(FDS_EntityBase *this)

{
  return this->IsQuestActor;
}

// GetIsShowMapIndex @ 14bc41980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::GetIsShowMapIndex(FDS_EntityBase *this)

{
  return this->bIsShowMapIndex;
}

// GetMainPlayerEntityBase @ 14bc42020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __cdecl FDS_EntityBase::GetMainPlayerEntityBase(bool param_1)

{
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar1;
  
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    return (FDS_EntityBase *)0x0;
  }
  pFVar1 = UDS_EntityManager::GetCurrentMainCharEntityBase(this,param_1);
  return pFVar1;
}

// GetMainPlayerEntityID @ 14bc42050

ulong64 __cdecl FDS_EntityBase::GetMainPlayerEntityID(bool param_1)

{
  UDS_EntityManager *this;
  ulong64 uVar1;
  
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    return 0;
  }
  uVar1 = UDS_EntityManager::GetCurrentMainCharEntityID(this,param_1);
  return uVar1;
}

// GetNearestHitSphereComponent @ 14bc429c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<USphereComponent,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetNearestHitSphereComponent(FDS_EntityBase *this,TVector<double> *param_1)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  ulonglong uVar7;
  uint uVar8;
  double *in_R8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_148 [32];
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  longlong *local_108;
  undefined1 auStack_100 [16];
  uint uStack_f0;
  uint uStack_ec;
  longlong local_e8;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_e0;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_d8;
  undefined2 local_d0;
  undefined1 local_c8 [32];
  longlong local_a8;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  cVar3 = (**(code **)(this->_padding_ + 0xf0))(this,local_98);
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  if (cVar3 == '\0') {
    (param_1->field0_0x0)._s_0.X = 0.0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_118);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    iVar5 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  else {
    local_110.ObjectIndex = 0;
    local_110.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_118);
    fVar12 = __real_c2c80000;
    TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_c8,
               (TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)local_98);
    local_d8 = (TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)local_98;
    local_d0 = 0;
    stack0xffffffffffffff08 = local_c8._16_16_;
    local_108 = (longlong *)local_c8._0_8_;
    auStack_100._0_8_ = local_c8._8_8_;
    local_e8 = local_a8;
    pTStack_e0 = pTStack_a0;
    uVar7 = local_c8._24_8_ >> 0x20;
    if (local_c8._28_4_ < *(int *)(local_c8._16_8_ + 0x18)) {
      do {
        local_118 = *(FWeakObjectPtr *)(*local_108 + 4 + (longlong)(int)uVar7 * 0x14);
        bVar4 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_118,(void *)0x0
                          );
        if (!bVar4) {
          pUVar6 = FWeakObjectPtr::Get(&local_118);
          dVar9 = *(double *)&pUVar6[0xd].field_0x8 - *in_R8;
          dVar2 = *(double *)&pUVar6[0xd].field_0x18 - in_R8[2];
          dVar10 = *(double *)&pUVar6[0xd].field_0x10 - in_R8[1];
          fVar11 = (float)SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar2 * dVar2);
          if ((fVar12 < 0.0) || (fVar11 < fVar12)) {
            local_110 = local_118;
            fVar12 = fVar11;
          }
        }
        uStack_f0 = uStack_f0 & ~auStack_100._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_100);
        uVar7 = (ulonglong)uStack_ec;
      } while ((int)uStack_ec < *(int *)(auStack_100._8_8_ + 0x18));
      if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
        uVar8 = *(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34;
        if (uVar8 < 4) {
          iVar5 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_d8->HashSize < iVar5)) || (iVar5 < local_d8->HashSize)) {
          local_d8->HashSize = iVar5;
          TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_d8);
        }
      }
    }
    (param_1->field0_0x0)._s_0.X = (double)local_110;
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return (TWeakObjectPtr<USphereComponent,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetParentEntityID @ 14bc42fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ulong64 __thiscall FDS_EntityBase::GetParentEntityID(FDS_EntityBase *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentEntityActor).WeakPtr);
  if (bVar1) {
    pFVar2 = GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->ParentEntityActor).WeakPtr);
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      return pFVar2->EntityID;
    }
  }
  return 0;
}

// GetParentEntityType @ 14bc43020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

EDS_EntityType __thiscall FDS_EntityBase::GetParentEntityType(FDS_EntityBase *this)

{
  FDS_EntityBase *pFVar1;
  
  pFVar1 = GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->ParentEntityActor).WeakPtr);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    return pFVar1->EntityType;
  }
  return None;
}

// GetPlayerRotationInterpSpeed @ 14bc43150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

float __thiscall FDS_EntityBase::GetPlayerRotationInterpSpeed(FDS_EntityBase *this)

{
  return __real_41200000;
}

// GetSkillData @ 14bc43fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> __thiscall
FDS_EntityBase::GetSkillData(FDS_EntityBase *this,int param_1)

{
  int in_register_00000014;
  FWeakObjectPtr FVar1;
  bool in_R8B;
  
  FVar1.ObjectSerialNumber = in_register_00000014;
  FVar1.ObjectIndex = param_1;
  UDS_SkillData::GetData((ulong64)FVar1,this->EntityID,in_R8B);
  return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)FVar1;
}

// HandleAbnormal @ 14bc45350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::HandleAbnormal(FDS_EntityBase *this,FDS_StruckInfo *param_1)

{
  bool bVar1;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar2;
  UDS_AbnormalAbilityData *this_01;
  FWeakObjectPtr local_res20;
  FDS_AbnormalInfo local_d8;
  
  bVar1 = UDS_GameInstance::IsClientAbnormal();
  if (!bVar1) {
    if (this->EntityType == MainCharacter) {
      this_00 = UDS_EntityManager::GetInst();
      if (this_00 != (UDS_EntityManager *)0x0) {
        pFVar2 = UDS_EntityManager::FindEntityBase(this_00,20000);
        if (pFVar2 != (FDS_EntityBase *)0x0) {
          (**(code **)(pFVar2->_padding_ + 0x1a8))(pFVar2,param_1);
        }
      }
    }
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_res20,(EDS_AbilityTagType *)&this->EntityID);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      local_d8.AbnormalType = None;
      local_d8.AbnormalGroup = None;
      local_d8.AttackerEntityID = 0;
      local_d8.SkillAttackID = 0;
      local_d8.AbnormalActionID = 0;
      local_d8.ActionGrade = 0;
      local_d8.AbnormalHeight = 0;
      local_d8.AbnormalStartTime = 0.0;
      local_d8.AbnormalValue = 0;
      local_d8.AbnormalMoveEndTime = 0.0;
      local_d8.AbnormalEndTime = 0.0;
      local_d8.AbnormalWaitTime = 0.0;
      local_d8.AbnormalMoveTime = 0.0;
      local_d8.AbnormalTime = 0.0;
      local_d8.AbnormalGetupTime = 0.0;
      local_d8.IsAbnormalRotation = false;
      ::FString::FString(&local_d8.AtkAttachSocket,L"");
      ::FString::FString(&local_d8.DefAttachSocket,L"");
      local_d8.AbnormalDestinationFloor.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_d8.AbnormalClientDestination.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_d8.AbnormalStartTime = param_1->EventTime;
      local_d8.AbnormalDestinationFloor.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_d8.AbnormalDestinationFloor.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_d8.AbnormalClientDestination.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_d8.AbnormalClientDestination.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_d8.AbnormalActionID = param_1->AbnormalID;
      local_d8.SkillAttackID = param_1->SkillAttackID;
      local_d8.AbnormalDestination.field0_0x0._s_0.X =
           (param_1->AbnormalDestination).field0_0x0._s_0.X;
      local_d8.AbnormalDestination.field0_0x0._s_0.Y =
           (param_1->AbnormalDestination).field0_0x0._s_0.Y;
      local_d8.AttackerEntityID = param_1->AttackerEntityID;
      local_d8.AbnormalDestination.field0_0x0._s_0.Z =
           (param_1->AbnormalDestination).field0_0x0._s_0.Z;
      local_d8.IsDefenderKilled = false;
      local_d8.IsDeadAbnormalCheck = false;
      local_d8.CameraShakeID = 0;
      local_d8.bIsSkillUseUncancel = false;
      local_d8.ID_HeightCondition = 0;
      this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res20);
      UDS_AbnormalAbilityData::AddAbnormalInfo(this_01,&local_d8);
      if (local_d8.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.DefAttachSocket.Data.AllocatorInstance.Data);
      }
      if (local_d8.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AtkAttachSocket.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HandleDeath @ 14bc456d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::HandleDeath(FDS_EntityBase *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UObject *pUVar7;
  UDS_CharInfoData *this_00;
  longlong lVar8;
  uint uVar9;
  EDS_AbilityTagType local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  FDestructionSentinel local_58;
  
  local_res20 = 0;
  local_res8[0] = Death;
  TryActivateAbility(this,local_res8,(TObjectPtr<UWN_AbilityContext>)&local_res20);
  UDS_DeathData::GetData((ulong64)&local_res10,this->EntityID,false);
  if ((this->EntityType == NetCharacter) &&
     (bVar3 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)&local_res10,(void *)0x0),
     !bVar3)) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    pUVar7[3].field_0x18 = 1;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7[3].field_0x20,
               (FWriteAccessScope *)&local_58);
    *(int *)&pUVar7[4].field_0x14 = *(int *)&pUVar7[4].field_0x14 + 1;
    bVar3 = false;
    uVar9 = *(int *)&pUVar7[4].field_0x8 - 1;
    if (-1 < (int)uVar9) {
      lVar8 = (longlong)(int)uVar9 << 4;
      bVar3 = false;
      do {
        uVar6 = 0;
        if ((int)uVar9 < *(int *)&pUVar7[4].field_0x8) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(*(longlong *)(pUVar7 + 4) + 8 + lVar8) == 0) ||
            (plVar1 = *(longlong **)(*(longlong *)(pUVar7 + 4) + lVar8), plVar1 == (longlong *)0x0))
           || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar8 = lVar8 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    *(int *)&pUVar7[4].field_0x14 = *(int *)&pUVar7[4].field_0x14 + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[3].field_0x20,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  UDS_CharInfoData::GetData((ulong64)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res18);
    UDS_CharInfoData::SetBattleNpcTargetEntityID(this_00,0);
  }
  return;
}

// HasHiddenPolicy @ 14bc45dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::HasHiddenPolicy(FDS_EntityBase *this,EDS_EntityHiddenPolicy *param_1)

{
  return ((int)*param_1 & (int)this->HiddenPolicy) != None;
}

// HasInteractionData @ 14bc45dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::HasInteractionData(FDS_EntityBase *this)

{
  EDS_EntityType EVar1;
  bool bVar2;
  UDS_NPCDataSet *this_00;
  UDS_StuffData *this_01;
  FWeakObjectPtr local_res8 [4];
  
  EVar1 = this->EntityType;
  if (EVar1 == NPC) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res8);
    bVar2 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar2) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_res8);
      bVar2 = UDS_NPCDataSet::HasInteractionData(this_00);
      return bVar2;
    }
  }
  else if ((((EVar1 == StuffGather) || (EVar1 == StuffWarpDevice)) || (EVar1 == StuffPortal)) ||
          ((EVar1 == StuffQuestBoard || (EVar1 == StuffQuest)))) {
    UDS_StuffData::GetData((ulong64)local_res8,this->EntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar2) {
      this_01 = (UDS_StuffData *)FWeakObjectPtr::Get(local_res8);
      bVar2 = UDS_StuffData::HasInteractionData(this_01);
      return bVar2;
    }
  }
  return false;
}

// InitData @ 14bc47d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::InitData(FDS_EntityBase *this,FDS_SpawnInfo *param_1)

{
  EDS_EntityType EVar1;
  double dVar2;
  
  this->EntityID = param_1->EntityID;
  EVar1 = param_1->EntityType;
  this->EntityType = EVar1;
  this->TableID = (longlong)param_1->TableID;
  this->SpawnTableID = param_1->SpawnTableID;
  this->UnbeatableTime = param_1->UnbeatableTime;
  switch(EVar1) {
  case NetCharacter:
  case NPC:
    dVar2 = DS_CommonDataHelper::NpcViewRange();
    this->OriginViewDistance = dVar2;
    dVar2 = DS_CommonDataHelper::NpcOutViewRange();
    break;
  default:
    goto switchD_14bc47dd3_caseD_4;
  case Transport:
    dVar2 = DS_CommonDataHelper::TransportViewRange();
    this->OriginViewDistance = dVar2;
    dVar2 = DS_CommonDataHelper::TransportOutViewRange();
    break;
  case StuffGather:
    dVar2 = DS_CommonDataHelper::GatherViewRange();
    this->OriginViewDistance = dVar2;
    dVar2 = DS_CommonDataHelper::GatherOutViewRange();
    break;
  case StuffWarpDevice:
    dVar2 = DS_CommonDataHelper::WarpDeviceViewRange();
    this->OriginViewDistance = dVar2;
    dVar2 = DS_CommonDataHelper::WarpDeviceOutViewRange();
    break;
  case StuffPortal:
    dVar2 = DS_CommonDataHelper::PortalViewRange();
    this->OriginViewDistance = dVar2;
    dVar2 = DS_CommonDataHelper::PortalOutViewRange();
  }
  this->OriginOutViewDistance = dVar2;
switchD_14bc47dd3_caseD_4:
  InitDataBySpawnTable(this);
  return;
}

// InitDataBySpawnTable @ 14bc47e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::InitDataBySpawnTable(FDS_EntityBase *this)

{
  EDS_EntityType EVar1;
  int iVar2;
  FDS_StuffSpawnTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_NpcSpawnQuestTableRow *pFVar5;
  FDS_NpcSpawnTableRow *pFVar6;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar2 = this->SpawnTableID;
  if (iVar2 < 1) {
    return;
  }
  EVar1 = this->EntityType;
  if (EVar1 == NPC) {
    pFVar6 = FDS_NpcSpawnTableRow::Get((longlong)iVar2,true);
    if (pFVar6 != (FDS_NpcSpawnTableRow *)0x0) {
      this->bIsShowMapIndex = pFVar6->IsShowMapIndex;
      if ((pFVar6->SpawnTriggerType != FieldLocalQuest) &&
         (pFVar6->SpawnTriggerType != FieldMainQuest)) {
        return;
      }
      pFVar5 = FDS_NpcSpawnQuestTableRow::Get((longlong)this->SpawnTableID,false);
      goto LAB_14bc48012;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_EntityBase::InitDataBySpawnTable",0x24,Yes);
    pwVar8 = L"npcSpawnTable is nullptr. (%d)";
    uVar7 = 0x252;
  }
  else {
    if ((((EVar1 != StuffGather) && (EVar1 != StuffWarpDevice)) && (EVar1 != StuffPortal)) &&
       (EVar1 != StuffQuestBoard)) {
      return;
    }
    pFVar3 = FDS_StuffSpawnTableRow::Get((longlong)iVar2,true);
    if (pFVar3 != (FDS_StuffSpawnTableRow *)0x0) {
      if ((pFVar3->SpawnTriggerType != FieldLocalQuest) &&
         (pFVar3->SpawnTriggerType != FieldMainQuest)) {
        return;
      }
      pFVar5 = (FDS_NpcSpawnQuestTableRow *)
               FDS_StuffSpawnQuestTableRow::Get((longlong)this->SpawnTableID,false);
LAB_14bc48012:
      this->IsQuestActor = pFVar5 != (FDS_NpcSpawnQuestTableRow *)0x0;
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_EntityBase::InitDataBySpawnTable",0x24,Yes);
    pwVar8 = L"stuffSpawnTable is nullptr. (%d)";
    uVar7 = 0x26a;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// InitOriginViewDistance @ 14bc48090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::InitOriginViewDistance(FDS_EntityBase *this)

{
  double dVar1;
  
  switch(this->EntityType) {
  case NetCharacter:
  case NPC:
    dVar1 = DS_CommonDataHelper::NpcViewRange();
    this->OriginViewDistance = dVar1;
    dVar1 = DS_CommonDataHelper::NpcOutViewRange();
    this->OriginOutViewDistance = dVar1;
    return;
  case Transport:
    dVar1 = DS_CommonDataHelper::TransportViewRange();
    this->OriginViewDistance = dVar1;
    dVar1 = DS_CommonDataHelper::TransportOutViewRange();
    this->OriginOutViewDistance = dVar1;
    return;
  case StuffGather:
    dVar1 = DS_CommonDataHelper::GatherViewRange();
    this->OriginViewDistance = dVar1;
    dVar1 = DS_CommonDataHelper::GatherOutViewRange();
    this->OriginOutViewDistance = dVar1;
    return;
  case StuffWarpDevice:
    dVar1 = DS_CommonDataHelper::WarpDeviceViewRange();
    this->OriginViewDistance = dVar1;
    dVar1 = DS_CommonDataHelper::WarpDeviceOutViewRange();
    this->OriginOutViewDistance = dVar1;
    return;
  case StuffPortal:
    dVar1 = DS_CommonDataHelper::PortalViewRange();
    this->OriginViewDistance = dVar1;
    dVar1 = DS_CommonDataHelper::PortalOutViewRange();
    this->OriginOutViewDistance = dVar1;
  }
  return;
}

// IsAbnormalEndAnim @ 14bc49f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsAbnormalEndAnim(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res8 [2];
  FWeakObjectPtr local_res10 [3];
  
  UDS_CharStateData::GetData((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return true;
  }
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res8[0] = AbnormalEndAnim;
  bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
  return bVar1;
}

// IsActiveAbility @ 14bc49fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsActiveAbility(FDS_EntityBase *this,EDS_AbilityTagType *param_1)

{
  bool bVar1;
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar2;
  FWeakObjectPtr local_res8;
  
  (**(code **)(this->_padding_ + 0x178))();
  bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar1) {
    return false;
  }
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
  pFVar2 = FDS_GameplayTags::GetAbilityTag(param_1);
  bVar1 = UDS_AbilitySystemComponent::IsActiveAbility(this_00,pFVar2);
  return bVar1;
}

// IsActiveInput @ 14bc4a040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsActiveInput(FDS_EntityBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x1b8))();
  bVar1 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return (bool)pUVar2[6].field_0x11;
}

// IsBreach @ 14bc4a120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsBreach(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_StuffPortalData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == StuffPortal) {
    UDS_StuffPortalData::GetData((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)local_res8,(void *)0x0)
    ;
    if (!bVar1) {
      this_00 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_StuffPortalData::IsBreach(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsCamp @ 14bc4a170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsCamp(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_NPCDataSet *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == NPC) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_NPCDataSet::IsCamp(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsDead @ 14bc4a640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsDead(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res8;
  EDS_CharState local_res10 [3];
  
  UDS_CharStateData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar1) {
    return true;
  }
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res8);
  local_res10[0] = Dead;
  bVar1 = UDS_CharStateData::HasCharState(this_00,local_res10);
  return bVar1;
}

// IsEnemy @ 14bc4a6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsEnemy(FDS_EntityBase *this,FDS_EntityBase *param_1)

{
  bool bVar1;
  UDS_AttackableManager *this_00;
  
  this_00 = UDS_AttackableManager::GetInst();
  if (this_00 == (UDS_AttackableManager *)0x0) {
    return false;
  }
  bVar1 = UDS_AttackableManager::IsAttackable(this_00,this->EntityID,param_1->EntityID);
  return bVar1;
}

// IsEntityScaled @ 14bc4a7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsEntityScaled(FDS_EntityBase *this)

{
  if (((UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X ==
        (this->EntityScaleVector).field0_0x0._s_0.X) &&
      (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y ==
       (this->EntityScaleVector).field0_0x0._s_0.Y)) &&
     (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z ==
      (this->EntityScaleVector).field0_0x0._s_0.Z)) {
    return false;
  }
  return true;
}

// IsFunctionNPC @ 14bc4aa40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsFunctionNPC(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_NPCDataSet *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == NPC) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_NPCDataSet::HasInteractionData(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsGate @ 14bc4aad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsGate(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_StuffPortalData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == StuffPortal) {
    UDS_StuffPortalData::GetData((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)local_res8,(void *)0x0)
    ;
    if (!bVar1) {
      this_00 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_StuffPortalData::IsGate(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsGimmick @ 14bc4ab20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsGimmick(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_NPCDataSet *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == NPC) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_NPCDataSet::IsGimmickInteraction(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsHandlingNPC @ 14bc4ab70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsHandlingNPC(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_NPCDataSet *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == NPC) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_NPCDataSet::IsHandlingNPC(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsHiddenActor @ 14bc4ac20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl FDS_EntityBase::IsHiddenActor(TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (bVar1) {
    return false;
  }
  pFVar2 = GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8[0]);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    return (bool)((byte)pUVar3[2].field_0x8 >> 7);
  }
  return pFVar2->bIsHiddenEntityActor;
}

// IsHiddenPolicy @ 14bc4ac80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsHiddenPolicy(FDS_EntityBase *this)

{
  return (int)this->HiddenPolicy != None;
}

// IsInn @ 14bc4ad60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsInn(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_StuffPortalData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == StuffPortal) {
    UDS_StuffPortalData::GetData((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)local_res8,(void *)0x0)
    ;
    if (!bVar1) {
      this_00 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_StuffPortalData::IsInn(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsInteractionAvailable @ 14bc4adb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsInteractionAvailable(FDS_EntityBase *this,ulong64 param_1)

{
  return (int)this->HiddenPolicy == None;
}

// IsMainCharacter @ 14bc4b260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsMainCharacter(FDS_EntityBase *this)

{
  return this->EntityType == MainCharacter;
}

// IsMainCharacter @ 14bc4b270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl FDS_EntityBase::IsMainCharacter(ulong64 *param_1)

{
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar1;
  
  this = UDS_EntityManager::GetInst();
  if (this != (UDS_EntityManager *)0x0) {
    pFVar1 = UDS_EntityManager::FindEntityBase(this,*param_1);
    if (pFVar1 != (FDS_EntityBase *)0x0) {
      return pFVar1->EntityType == MainCharacter;
    }
  }
  return false;
}

// IsMainPlayerInteractionOverlapped @ 14bc4b2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::IsMainPlayerInteractionOverlapped(FDS_EntityBase *this,EDS_InteractionType *param_1)

{
  EDS_InteractionType EVar1;
  longlong lVar2;
  int iVar3;
  bool *pbVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x8 !=
      *(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->MainPlayerInteractionOverlappedMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->MainPlayerInteractionOverlappedMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x48 - Icon
                              & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->MainPlayerInteractionOverlappedMap;
      do {
        if (*(EDS_InteractionType *)(lVar2 + (longlong)iVar3 * 0x10) == EVar1) {
          pbVar4 = TMapBase<enum_EDS_InteractionType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionType,bool,0>_>
                   ::FindChecked(&this->MainPlayerInteractionOverlappedMap,EVar1);
          return *pbVar4;
        }
        iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsMountNPC @ 14bc4b330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsMountNPC(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_NPCDataSet *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == NPC) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_NPCDataSet::IsMount(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsNPC @ 14bc4b3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsNPC(FDS_EntityBase *this)

{
  return this->EntityType == NPC;
}

// IsStuff @ 14bc4bc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsStuff(FDS_EntityBase *this)

{
  EDS_EntityType EVar1;
  
  EVar1 = this->EntityType;
  if ((((EVar1 != StuffGather) && (EVar1 != StuffWarpDevice)) && (EVar1 != StuffPortal)) &&
     ((EVar1 != StuffQuestBoard && (EVar1 != StuffQuest)))) {
    return false;
  }
  return true;
}

// IsTaming @ 14bc4bc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::IsTaming(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_NPCDataSet *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->EntityType == NPC) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_NPCDataSet::IsTaming(this_00);
      return bVar1;
    }
  }
  return false;
}

// OnChangedLevelSequencePlaying @ 14bc4dbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnChangedLevelSequencePlaying(FDS_EntityBase *this,bool *param_1)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x40;
  if (*param_1 == true) {
    (**(code **)(this->_padding_ + 0x58))();
    return;
  }
  (**(code **)(this->_padding_ + 0x60))(this,local_res10,0);
  return;
}

// OnChangedNpcTalking @ 14bc4dc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnChangedNpcTalking(FDS_EntityBase *this,bool *param_1)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 2;
  if (*param_1 == true) {
    (**(code **)(this->_padding_ + 0x58))();
    return;
  }
  (**(code **)(this->_padding_ + 0x60))(this,local_res10,0);
  return;
}

// OnCompleteLoadEntityMaterial @ 14bc4ec60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::OnCompleteLoadEntityMaterial(FDS_EntityBase *this,EDS_EntityMaterialType param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_LogManager *pUVar7;
  void *pvVar8;
  undefined1 auStackY_298 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  piVar4 = (int *)(**(code **)(this->_padding_ + 0x130))();
  if ((*piVar4 == 1) || (*piVar4 == 2)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557071170>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x4be,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_EntityBase::OnCompleteLoadEntityMaterial",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,0x4bf,L"materialInfo is invalid.");
    pvVar8 = (void *)local_138._padding_;
LAB_14bc4ee77:
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
  }
  else {
    pUVar5 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(piVar4 + 2));
    if (pUVar5 == (UObject *)0x0) {
LAB_14bc4ece4:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14bc4ece4;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UObject *)0x0)) {
      *(UObject **)(piVar4 + 0xe) = pUVar5;
      if (pUVar5 == (UObject *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1011015776557071162>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                           ,0x4c6,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"FDS_EntityBase::OnCompleteLoadEntityMaterial",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_258.Ptr,0x4c7,L"MaterialInterface is nullptr.");
        pvVar8 = (void *)local_258._padding_;
        goto LAB_14bc4ee77;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar5);
      *(UObject **)(piVar4 + 0xe) = pUVar5;
    }
    if (this->CurEntityMaterialType == param_1) {
      (**(code **)(this->_padding_ + 0x128))(this,pUVar5);
    }
  }
  return;
}

// OnCrossHairHoverBegin @ 14bc4ef50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnCrossHairHoverBegin(FDS_EntityBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc4ef55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1f0))(this,1);
  return;
}

// OnCrossHairHoverEnd @ 14bc4ef70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnCrossHairHoverEnd(FDS_EntityBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc4ef75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1f0))(this,0);
  return;
}

// OnDefaultCollisionProfile @ 14bc4efb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnDefaultCollisionProfile(FDS_EntityBase *this)

{
  FName FVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  FVar1 = this->DefaultCollisionProfileName;
  (**(code **)(this->_padding_ + 0x160))();
  bVar2 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    (**(code **)(*(longlong *)pUVar3 + 0x788))(pUVar3,FVar1,1);
  }
  return;
}

// OnHit @ 14bc4f220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnHit(FDS_EntityBase *this,FDS_StruckInfo *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong64 uVar6;
  double dVar7;
  double dVar8;
  ulong64 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined7 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  UObject *pUVar23;
  UClass *pUVar24;
  longlong *plVar25;
  undefined1 auStack_e8 [32];
  EDS_AbilityTagType local_c8 [8];
  FWeakObjectPtr local_c0;
  UObject *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar16 = *(undefined7 *)&param_1->field_0x1;
  uVar6 = param_1->AttackerEntityID;
  lVar1 = this->_padding_;
  (this->LastStruckInfo).HasDamage = param_1->HasDamage;
  *(undefined7 *)&(this->LastStruckInfo).field_0x1 = uVar16;
  (this->LastStruckInfo).AttackerEntityID = uVar6;
  iVar17 = param_1->SkillAttackID;
  iVar18 = param_1->Damage;
  (this->LastStruckInfo).DefenderEntityID = param_1->DefenderEntityID;
  (this->LastStruckInfo).SkillAttackID = iVar17;
  (this->LastStruckInfo).Damage = iVar18;
  dVar7 = param_1->ExecuteTime;
  (this->LastStruckInfo).EventTime = param_1->EventTime;
  (this->LastStruckInfo).ExecuteTime = dVar7;
  iVar17 = param_1->DamageInfo;
  dVar7 = (param_1->AbnormalDestination).field0_0x0._s_0.X;
  (this->LastStruckInfo).AbnormalID = param_1->AbnormalID;
  (this->LastStruckInfo).DamageInfo = iVar17;
  (this->LastStruckInfo).AbnormalDestination.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_1->AbnormalDestination).field0_0x0._s_0.Z;
  (this->LastStruckInfo).AbnormalDestination.field0_0x0._s_0.Y =
       (param_1->AbnormalDestination).field0_0x0._s_0.Y;
  (this->LastStruckInfo).AbnormalDestination.field0_0x0._s_0.Z = dVar7;
  uVar2 = *(undefined4 *)&param_1->field_0x54;
  uVar3 = *(undefined4 *)&(param_1->EffectLocation).field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(param_1->EffectLocation).field0_0x0 + 4);
  (this->LastStruckInfo).MultiHitPointIndex = param_1->MultiHitPointIndex;
  *(undefined4 *)&(this->LastStruckInfo).field_0x54 = uVar2;
  *(undefined4 *)&(this->LastStruckInfo).EffectLocation.field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&(this->LastStruckInfo).EffectLocation.field0_0x0 + 4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)&(param_1->EffectLocation).field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&(param_1->EffectLocation).field0_0x0 + 0xc);
  uVar4 = *(undefined4 *)((longlong)&(param_1->EffectLocation).field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&(param_1->EffectLocation).field0_0x0 + 0x14);
  *(undefined4 *)((longlong)&(this->LastStruckInfo).EffectLocation.field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&(this->LastStruckInfo).EffectLocation.field0_0x0 + 0xc) = uVar3;
  *(undefined4 *)((longlong)&(this->LastStruckInfo).EffectLocation.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->LastStruckInfo).EffectLocation.field0_0x0 + 0x14) = uVar5;
  (**(code **)(lVar1 + 0x150))(uVar2,&local_c0);
  bVar22 = FWeakObjectPtr::IsValid(&local_c0);
  if (bVar22) {
    pUVar23 = FWeakObjectPtr::Get(&local_c0);
    FObjectInitializer::AssertIfInConstructor
              (pUVar23,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar24 = Z_Construct_UClass_UDS_HitAbilityContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar24);
    local_a8._8_8_ = pUVar23;
    pUVar23 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar25 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar23);
    }
    dVar7 = (param_1->EffectLocation).field0_0x0._s_0.Y;
    dVar8 = (param_1->EffectLocation).field0_0x0._s_0.Z;
    uVar16 = *(undefined7 *)&param_1->field_0x1;
    uVar6 = param_1->AttackerEntityID;
    uVar9 = param_1->DefenderEntityID;
    iVar17 = param_1->SkillAttackID;
    iVar18 = param_1->Damage;
    dVar10 = param_1->EventTime;
    dVar11 = param_1->ExecuteTime;
    iVar19 = param_1->AbnormalID;
    iVar20 = param_1->DamageInfo;
    dVar12 = (param_1->AbnormalDestination).field0_0x0._s_0.X;
    dVar13 = (param_1->AbnormalDestination).field0_0x0._s_0.Y;
    dVar14 = (param_1->AbnormalDestination).field0_0x0._s_0.Z;
    iVar21 = param_1->MultiHitPointIndex;
    uVar2 = *(undefined4 *)&param_1->field_0x54;
    dVar15 = (param_1->EffectLocation).field0_0x0._s_0.X;
    pUVar23[1].field_0x0 = param_1->HasDamage;
    *(undefined7 *)&pUVar23[1].field_0x1 = uVar16;
    *(ulong64 *)&pUVar23[1].field_0x8 = uVar6;
    *(ulong64 *)&pUVar23[1].field_0x10 = uVar9;
    *(int *)&pUVar23[1].field_0x18 = iVar17;
    *(int *)&pUVar23[1].field_0x1c = iVar18;
    *(double *)&pUVar23[1].field_0x20 = dVar10;
    *(double *)(pUVar23 + 2) = dVar11;
    *(int *)&pUVar23[2].field_0x8 = iVar19;
    *(int *)&pUVar23[2].field_0xc = iVar20;
    *(double *)&pUVar23[2].field_0x10 = dVar12;
    *(double *)&pUVar23[2].field_0x18 = dVar13;
    *(double *)&pUVar23[2].field_0x20 = dVar14;
    *(int *)&pUVar23[3].field_0x0 = iVar21;
    *(undefined4 *)&pUVar23[3].field_0x4 = uVar2;
    *(double *)&pUVar23[3].field_0x8 = dVar15;
    *(double *)&pUVar23[3].field_0x10 = dVar7;
    *(double *)&pUVar23[3].field_0x18 = dVar8;
    local_b8[0] = pUVar23;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar23);
    }
    local_c8[0] = HitProcess;
    TryActivateAbility(this,local_c8,(TObjectPtr<UWN_AbilityContext>)local_b8);
  }
  return;
}

// OnInteractionBeginOverlap @ 14bc4fa50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::OnInteractionBeginOverlap
          (FDS_EntityBase *this,TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> param_1,
          FDS_EntityBase *param_2,EDS_InteractionType param_3,ulong64 param_4)

{
  TMap<EDS_InteractionType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InteractionType,bool,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  UDS_NPCDataSet *pUVar5;
  bool *pbVar6;
  undefined1 *puVar7;
  undefined1 local_res18 [8];
  EDS_InteractionType local_res20 [2];
  TPairInitializer<EDS_InteractionType_&,bool_&&> local_48;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  EDS_InteractionType *local_28;
  undefined1 *local_20;
  
  local_res20[0] = param_3;
  if (param_2 == (FDS_EntityBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557071599>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x311,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bc4fbaf;
  }
  if (this->EntityType == NPC) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_48.Value);
    bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_48.Value,(void *)0x0)
    ;
    if (bVar2) goto LAB_14bc4faf3;
    pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_48.Value);
    bVar2 = UDS_NPCDataSet::IsCamp(pUVar5);
    if (!bVar2) goto LAB_14bc4faf3;
LAB_14bc4fb33:
    if (this->EntityType == NPC) {
      TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_30);
      bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0);
      if (!bVar2) {
        pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_30);
        bVar2 = UDS_NPCDataSet::IsTaming(pUVar5);
        if (bVar2) goto LAB_14bc4fbb5;
      }
    }
  }
  else {
LAB_14bc4faf3:
    if (this->EntityType == NPC) {
      TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_38);
      bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_38,(void *)0x0);
      if (!bVar2) {
        pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_38);
        UDS_NPCDataSet::IsMount(pUVar5);
      }
      goto LAB_14bc4fb33;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 0xa8))(this);
  if (cVar3 == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557071576>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x328,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bc4fbaf:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14bc4fbb5:
  (**(code **)(param_2->_padding_ + 0xe0))(param_2,param_1.WeakPtr,param_2,local_res20[0],param_4);
  this_00 = &this->MainPlayerInteractionOverlappedMap;
  if (*(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x8 !=
      *(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->MainPlayerInteractionOverlappedMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->MainPlayerInteractionOverlappedMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x48 - Icon
                              & local_res20[0]) * 4);
    if (iVar4 != -1) {
      do {
        if (*(EDS_InteractionType *)(*(longlong *)this_00 + (longlong)iVar4 * 0x10) ==
            local_res20[0]) goto LAB_14bc4fc68;
        iVar4 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  local_28 = local_res20;
  local_res18[0] = 0;
  local_20 = local_res18;
  TSet<TTuple<enum_EDS_InteractionType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionType,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_InteractionType_&,bool_&&>_>
            (this_00,&local_48,(bool *)&local_28);
LAB_14bc4fc68:
  pbVar6 = TMapBase<enum_EDS_InteractionType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionType,bool,0>_>
           ::FindChecked(this_00,local_res20[0]);
  *pbVar6 = true;
  TMulticastDelegate<void___cdecl(enum_EDS_InteractionType,unsigned___int64,bool),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->InteractionOverlapDelegate,local_res20[0],param_4,true);
  return;
}

// OnInteractionEndOverlap @ 14bc4fce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::OnInteractionEndOverlap
          (FDS_EntityBase *this,TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> param_1,
          FDS_EntityBase *param_2,EDS_InteractionType param_3,ulong64 param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool *pbVar5;
  undefined1 *puVar6;
  
  if (param_2 == (FDS_EntityBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557071553>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x33f,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (**(code **)(param_2->_padding_ + 0xe8))(param_2);
    if (*(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x8 !=
        *(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x34) {
      puVar6 = *(undefined1 **)&(this->MainPlayerInteractionOverlappedMap).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->MainPlayerInteractionOverlappedMap).field_0x38;
      }
      iVar4 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->MainPlayerInteractionOverlappedMap).field_0x48 -
                                 Icon & param_3) * 4);
      if (iVar4 != -1) {
        lVar1 = *(longlong *)&this->MainPlayerInteractionOverlappedMap;
        while (*(EDS_InteractionType *)(lVar1 + (longlong)iVar4 * 0x10) != param_3) {
          iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        pbVar5 = TMapBase<enum_EDS_InteractionType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionType,bool,0>_>
                 ::FindChecked(&this->MainPlayerInteractionOverlappedMap,param_3);
        *pbVar5 = false;
        TMulticastDelegate<void___cdecl(enum_EDS_InteractionType,unsigned___int64,bool),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->InteractionOverlapDelegate,param_3,param_4,false);
      }
    }
  }
  return;
}

// OnMouseCursorHoverBegin @ 14bc50260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnMouseCursorHoverBegin(FDS_EntityBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc50265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1f0))(this,1);
  return;
}

// OnMouseCursorHoverEnd @ 14bc50280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnMouseCursorHoverEnd(FDS_EntityBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc50285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x1f0))(this,0);
  return;
}

// OnPartsSystemComplete @ 14bc51790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnPartsSystemComplete(FDS_EntityBase *this)

{
  (**(code **)(this->_padding_ + 0x1f8))(this,this->bIsHiddenEntityActor);
  TMulticastDelegate<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLoadCompletePartsSystemControl,this);
  return;
}

// OnRemoveEntity @ 14bc52900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::OnRemoveEntity(FDS_EntityBase *this)

{
  bool bVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  FDS_EntityBase *pFVar3;
  UObject *pUVar4;
  AActor *pAVar5;
  byte bVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar2 = FTimerManager::FindTimer(this_00,&this->TimerHandle);
  if (pFVar2 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle).Handle);
  }
  (this->TimerHandle).Handle = 0;
  (**(code **)(this->_padding_ + 0x150))(this);
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    local_res8 = local_res10;
    bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar1) {
      pFVar3 = GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
      if (pFVar3 == (FDS_EntityBase *)0x0) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        bVar6 = (byte)pUVar4[2].field_0x8 >> 7;
      }
      else {
        bVar6 = pFVar3->bIsHiddenEntityActor;
      }
      if (bVar6 == 1) {
        pAVar5 = (AActor *)FWeakObjectPtr::Get(&local_res10);
        WN_UnregisterHiddenPrimitives(pAVar5);
      }
    }
  }
  TMulticastDelegate<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnRemoveDelegate,this);
  return;
}

// RefreshEntity @ 14bc579d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::RefreshEntity(FDS_EntityBase *this)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_EntityData::GetData((ulong64)local_148,this->EntityID);
  bVar3 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_EntityBase::RefreshEntity",0x1d,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x102,L"entityData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557072125>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x103,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = false;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(local_148);
    dVar2 = *(double *)&pUVar6[3].field_0x18;
    (this->EntityScaleVector).field0_0x0._s_0.X = *(double *)&pUVar6[3].field_0x10;
    (this->EntityScaleVector).field0_0x0._s_0.Y = dVar2;
    (this->EntityScaleVector).field0_0x0._s_0.Z = *(double *)&pUVar6[3].field_0x20;
    pUVar6 = FWeakObjectPtr::Get(local_148);
    this->ScaledCapsuleHalfHeight = *(float *)&pUVar6[4].field_0x8;
    pUVar6 = FWeakObjectPtr::Get(local_148);
    bVar3 = true;
    this->ScaledCapsuleRadius = *(float *)&pUVar6[4].field_0xc;
  }
  return bVar3;
}

// RemoveEntity @ 14bc5a830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::RemoveEntity(FDS_EntityBase *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1011015776557071065>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                     ,0x527,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveHiddenPolicy @ 14bc5aa70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::RemoveHiddenPolicy
          (FDS_EntityBase *this,EDS_EntityHiddenPolicy *param_1,float param_2)

{
  this->HiddenPolicy = this->HiddenPolicy & ~*param_1;
  UpdateHiddenPolicy(this);
  return;
}

// RemoveStateTag @ 14bc5aa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_EntityBase::RemoveStateTag(ulong64 *param_1,EDS_StateTagType *param_2)

{
  UDS_EntityManager *this;
  FDS_EntityBase *pFVar1;
  FWeakObjectPtr *pFVar2;
  undefined1 local_res18 [16];
  
  this = UDS_EntityManager::GetInst();
  if (this != (UDS_EntityManager *)0x0) {
    pFVar1 = UDS_EntityManager::FindEntityBase(this,*param_1);
    if (pFVar1 != (FDS_EntityBase *)0x0) {
      pFVar2 = (FWeakObjectPtr *)(**(code **)(pFVar1->_padding_ + 0x178))(pFVar1,local_res18);
      UDS_AbilitySystemComponent::RemoveStateTag
                ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar2,param_2);
    }
  }
  return;
}

// SetBattleState @ 14bc5cc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::SetBattleState(FDS_EntityBase *this,bool param_1)

{
  if (this->BattleState != param_1) {
    this->BattleState = param_1;
    FDS_DataPropertyDelegate_bool_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->DataPropertyDelegate_BattleState,param_1);
    return;
  }
  return;
}

// SetComponentOverlapAble @ 14bc5d830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::SetComponentOverlapAble(FDS_EntityBase *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  UObject *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(this->_padding_ + 0x160))();
  bVar2 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_EntityBase::SetComponentOverlapAble",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x6fb,L"capsuleComp is nullptr.");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_150);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_CapsuleComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bc5d934;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bc5d934:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  local_148[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)local_148);
  bVar2 = TWeakObjectPtr<UDS_CapsuleComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CapsuleComponent,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_158);
    pUVar4[0x22].field_0x20 = param_1;
  }
  return;
}

// SetDesiredEquipmentAppearanceData @ 14bc5de00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::SetDesiredEquipmentAppearanceData
          (FDS_EntityBase *this,FDS_EquipmentAppearanceData *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDesiredEquipmentAppearanceDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnDesiredEquipmentAppearanceDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnDesiredEquipmentAppearanceDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnDesiredEquipmentAppearanceDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnDesiredEquipmentAppearanceDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnDesiredEquipmentAppearanceDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnDesiredEquipmentAppearanceDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetGlobalAnimRateScale @ 14bc5eaf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::SetGlobalAnimRateScale
          (FDS_EntityBase *this,EDS_GlobalAnimRateScaleType *param_1,float *param_2)

{
  TMap<EDS_GlobalAnimRateScaleType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GlobalAnimRateScaleType,float,0>_>
  *this_00;
  float fVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  UObject *pUVar9;
  undefined1 *puVar10;
  EDS_GlobalAnimRateScaleType EVar11;
  undefined1 local_res8 [8];
  float local_res10 [2];
  TPairInitializer<EDS_GlobalAnimRateScaleType_const_&,float_&&> local_res18;
  EDS_GlobalAnimRateScaleType *local_68;
  float *local_60;
  
  this_00 = &this->GlobalAnimRateScaleMap;
  local_68 = param_1;
  local_60 = param_2;
  TSet<TTuple<enum_EDS_GlobalAnimRateScaleType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_GlobalAnimRateScaleType,float,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_GlobalAnimRateScaleType_const_&,float_const_&>_>
            (this_00,(TPairInitializer<EDS_GlobalAnimRateScaleType_const_&,float_const_&> *)
                     local_res8,(bool *)&local_68);
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  fVar1 = this->CurGlobalAnimRateScale;
  EVar11 = Abnormal_Lapidification;
  this->CurGlobalAnimRateScale = 1.0;
  do {
    local_res8._0_4_ = EVar11;
    if (*(int *)&(this->GlobalAnimRateScaleMap).field_0x8 !=
        *(int *)&(this->GlobalAnimRateScaleMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->GlobalAnimRateScaleMap).field_0x40;
      puVar10 = &(this->GlobalAnimRateScaleMap).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar10 = puVar2;
      }
      iVar7 = *(int *)(puVar10 +
                      (ulonglong)
                      (*(int *)&(this->GlobalAnimRateScaleMap).field_0x48 - ImpactEffect & EVar11) *
                      4);
      if (iVar7 != -1) {
        do {
          if (*(EDS_GlobalAnimRateScaleType *)(*(longlong *)this_00 + (longlong)iVar7 * 0x10) ==
              EVar11) goto LAB_14bc5ebf8;
          iVar7 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    local_68 = (EDS_GlobalAnimRateScaleType *)local_res8;
    local_res10[0] = 1.0;
    local_60 = local_res10;
    TSet<TTuple<enum_EDS_GlobalAnimRateScaleType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_GlobalAnimRateScaleType,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_GlobalAnimRateScaleType_const_&,float_&&>_>
              (this_00,&local_res18,(bool *)&local_68);
LAB_14bc5ebf8:
    pfVar8 = TMapBase<enum_EDS_GlobalAnimRateScaleType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GlobalAnimRateScaleType,float,0>_>
             ::FindChecked(this_00,local_res8._0_4_);
    if (fVar3 < (float)((uint)(*pfVar8 - fVar4) & uVar5)) {
      this->CurGlobalAnimRateScale = *pfVar8;
      goto LAB_14bc5ec2d;
    }
    EVar11 = EVar11 + ImpactEffect;
    if (2 < (int)EVar11) {
LAB_14bc5ec2d:
      if (fVar3 < (float)((uint)(fVar1 - this->CurGlobalAnimRateScale) & uVar5)) {
        (**(code **)(this->_padding_ + 0x80))(this);
        bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res8,
                           (void *)0x0);
        if (!bVar6) {
          fVar1 = this->CurGlobalAnimRateScale;
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res8);
          *(float *)&pUVar9[0x44].field_0x20 = fVar1;
        }
      }
      return;
    }
  } while( true );
}

// SetHiddenEntityActor @ 14bc5f580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::SetHiddenEntityActor(FDS_EntityBase *this,bool param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  UDS_WidgetComponent *this_00;
  longlong lVar6;
  code *pcVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  UObject *pUVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  UClass *pUVar12;
  AActor *pAVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res18 [8];
  int local_res20;
  FWeakObjectPtr local_a8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  (**(code **)(this->_padding_ + 0x150))();
  bVar9 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_a8,(void *)0x0);
  if (bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1011015776557070900>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityBase.cpp"
                       ,0x5cc,"false");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pUVar10 = FWeakObjectPtr::Get(&local_a8);
    pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                          *)&pUVar10[0xe].field_0x18);
    iVar3 = *(int *)&(pTVar11->Elements).field_0x28;
    iStack_98 = 0;
    uStack_94 = 1;
    local_80 = 0;
    puVar1 = &(pTVar11->Elements).field_0x10;
    iStack_84 = 0;
    if (iVar3 != 0) {
      puVar18 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        iStack_98 = iStack_98 + 1;
        local_80 = local_80 + 0x20;
        iStack_84 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14bc5f6bc;
        uVar16 = puVar18[iStack_98];
      }
      uStack_94 = ~(uVar16 - 1) & uVar16;
      uVar2 = (ulonglong)uStack_94 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_res20 = (int)lVar6;
      iStack_84 = local_res20 + -1 + local_80;
      if (iVar3 < iStack_84) {
        iStack_84 = iVar3;
      }
    }
LAB_14bc5f6bc:
    uVar16 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    iStack_78 = *(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34;
    uStack_88 = 0xffffffff;
    TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
    TStack_68.CurrentBitIndex = iStack_84;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar16 >> 5;
    TStack_68._28_4_ = iStack_84;
    TStack_68.BaseBitIndex = local_80;
    uStack_48 = CONCAT44(uStack_74,iStack_78);
    local_a0 = pTVar11;
    local_90 = puVar1;
    iStack_7c = iStack_84;
    local_70 = pTVar11;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar16 != uVar4) {
      puVar5 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      puVar17 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar17 = puVar5;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
      while (uVar16 == 0) {
        iVar14 = iVar14 + 1;
        uVar15 = uVar15 + 0x20;
        uVar16 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar14)
        goto LAB_14bc5f7c0;
        uVar16 = *(uint *)(puVar17 + (longlong)iVar14 * 4);
      }
      uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar16 = (int)lVar6 + -1 + uVar15;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
    }
LAB_14bc5f7c0:
    while( true ) {
      pTVar8 = local_70;
      if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
          (int)uStack_48) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_68.CurrentBitIndex == uVar16) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == pTVar11)) break;
      this_00 = *(UDS_WidgetComponent **)
                 (*(longlong *)&pTVar8->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
      pUVar12 = Z_Construct_UClass_UDS_WidgetComponent_NoRegister();
      iVar3 = (int)pUVar12->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar12->_padding_)) {
        pUVar12 = Z_Construct_UClass_UDS_WidgetComponent_NoRegister();
        iVar3 = (int)pUVar12->_padding_;
        if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar12->_padding_ && (this_00 != (UDS_WidgetComponent *)0x0)) &&
            ((char)this_00->_padding_ == '\x01')))) {
          UDS_WidgetComponent::SetComponentWidgetVisibility(this_00,!param_1);
        }
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
    pAVar13 = (AActor *)FWeakObjectPtr::Get(&local_a8);
    if (param_1) {
      WN_RegisterHiddenPrimitives(pAVar13);
    }
    else {
      WN_UnregisterHiddenPrimitives(pAVar13);
    }
    (**(code **)(this->_padding_ + 0x1e8))(this,!param_1);
    this->bIsHiddenEntityActor = param_1;
  }
  return;
}

// SetIsQuestActor @ 14bc5ff40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::SetIsQuestActor(FDS_EntityBase *this,bool param_1)

{
  this->IsQuestActor = param_1;
  return;
}

// SetIsShowMapIndex @ 14bc5ff50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::SetIsShowMapIndex(FDS_EntityBase *this,bool param_1)

{
  this->bIsShowMapIndex = param_1;
  return;
}

// SetIsUserFocused @ 14bc5ff60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::SetIsUserFocused(FDS_EntityBase *this,bool param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  this->bIsUserFocused = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangeUserFocusedDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->ChangeUserFocusedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->ChangeUserFocusedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->ChangeUserFocusedDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->ChangeUserFocusedDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->ChangeUserFocusedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ChangeUserFocusedDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetMaterialOpacity @ 14bc60170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::SetMaterialOpacity(FDS_EntityBase *this,float *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  FName local_res8;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  this->MaterialOpacity = *param_1;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  ::FName::FName(&local_res8,L"Opacity_Intensity");
  fVar1 = *param_1;
  iVar2 = (int)local_20;
  if ((int)local_20 == local_20._4_4_) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&local_28,(int *)((longlong)&local_20 + 4));
  }
  lVar3 = (longlong)iVar2;
  local_20 = CONCAT44(local_20._4_4_,iVar2 + 1);
  *(uint *)(local_28.Data + lVar3 * 0xc) = local_res8.ComparisonIndex.Value.Value;
  *(uint *)(local_28.Data + lVar3 * 0xc + 4) = local_res8.Number;
  *(float *)(local_28.Data + lVar3 * 0xc + 8) = fVar1;
  (**(code **)(this->_padding_ + 0x108))(this,&local_28);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetMaterialParamColor @ 14bc602b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::SetMaterialParamColor
          (FDS_EntityBase *this,TArray<FDS_ColorParameterValue,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FName *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  TArray<FDS_ColorParameterValue,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UObject *pUVar9;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar10;
  FName *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TArray<FDS_ColorParameterValue,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res18;
  FWeakObjectPtr local_res20;
  longlong local_1c0;
  void *local_1b8;
  int local_1b0;
  FMaterialLayersFunctionsRuntimeData local_1a8;
  FMaterialLayersFunctionsEditorOnlyData local_178;
  void *local_108;
  undefined8 local_100;
  FText *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  longlong local_98;
  FMaterialParameterInfo local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58;
  
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x80))();
  bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res20,
                     (void *)0x0);
  if (!bVar6) {
    pUVar9 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar9 + 0xa90))(pUVar9,&local_1b8);
    local_98 = (longlong)local_1b0;
    local_res18 = 0;
    if (0 < local_98) {
      local_1c0 = 0;
      do {
        uVar12 = local_res18;
        uVar8 = 0;
        if ((int)local_res18 < local_1b0) {
          uVar8 = ~local_res18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)((longlong)local_1b8 + local_1c0 * 8);
        if (plVar3 != (longlong *)0x0) {
          local_1a8.Layers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a8.LayerStackCache.Object = (FMaterialLayerStackFunctionsCache *)0x0;
          local_1a8.LayerStackCache.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_1a8.Layers.ArrayNum = 0;
          local_1a8.Layers.ArrayMax = 0;
          local_1a8.Blends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a8.Blends.ArrayNum = 0;
          local_1a8.Blends.ArrayMax = 0;
          local_178.LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.LayerStates.ArrayNum = 0;
          local_178.LayerStates.ArrayMax = 0;
          local_178.LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.LayerNames.ArrayNum = 0;
          local_178.LayerNames.ArrayMax = 0;
          local_178.RestrictToLayerRelatives.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_178.RestrictToLayerRelatives.ArrayNum = 0;
          local_178.RestrictToLayerRelatives.ArrayMax = 0;
          local_178.RestrictToBlendRelatives.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_178.RestrictToBlendRelatives.ArrayNum = 0;
          local_178.RestrictToBlendRelatives.ArrayMax = 0;
          local_178.LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.LayerGuids.ArrayNum = 0;
          local_178.LayerGuids.ArrayMax = 0;
          local_178.LayerLinkStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.LayerLinkStates.ArrayNum = 0;
          local_178.LayerLinkStates.ArrayMax = 0;
          local_178.DeletedParentLayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.DeletedParentLayerGuids.ArrayNum = 0;
          local_178.DeletedParentLayerGuids.ArrayMax = 0;
          local_108 = (void *)0x0;
          local_100 = 0;
          local_f8 = (FText *)0x0;
          local_f0 = 0;
          local_e8 = (void *)0x0;
          local_e0 = 0;
          local_d8 = (void *)0x0;
          local_d0 = 0;
          local_c8 = (void *)0x0;
          local_c0 = 0;
          local_b8 = (void *)0x0;
          local_b0 = 0;
          local_a8 = (void *)0x0;
          local_a0 = 0;
          local_80 = 0;
          uStack_78 = 0;
          cVar7 = (**(code **)(*plVar3 + 0x3a0))(plVar3,&local_1a8,&local_80);
          pUVar9 = FWeakObjectPtr::Get(&local_res20);
          this_00 = (UMaterialInstanceDynamic *)
                    (**(code **)(*(longlong *)pUVar9 + 0x6d8))(pUVar9,uVar12,plVar3,0);
          pTVar5 = local_res10;
          if (this_00 == (UMaterialInstanceDynamic *)0x0) {
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            if (local_b8 != (void *)0x0) {
              FMemory::Free(local_b8);
            }
            if (local_c8 != (void *)0x0) {
              FMemory::Free(local_c8);
            }
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            DestructItems<FText,int>(local_f8,(int)local_f0);
            if (local_f8 != (FText *)0x0) {
              FMemory::Free(local_f8);
            }
            if (local_108 != (void *)0x0) {
              FMemory::Free(local_108);
            }
            if (local_178.DeletedParentLayerGuids.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.DeletedParentLayerGuids.AllocatorInstance.Data);
            }
            if (local_178.LayerLinkStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_178.LayerLinkStates.AllocatorInstance.Data);
            }
            if (local_178.LayerGuids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.LayerGuids.AllocatorInstance.Data);
            }
            if (local_178.RestrictToBlendRelatives.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.RestrictToBlendRelatives.AllocatorInstance.Data);
            }
            if (local_178.RestrictToLayerRelatives.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.RestrictToLayerRelatives.AllocatorInstance.Data);
            }
            DestructItems<FText,int>
                      ((FText *)local_178.LayerNames.AllocatorInstance.Data,
                       local_178.LayerNames.ArrayNum);
            if ((FText *)local_178.LayerNames.AllocatorInstance.Data != (FText *)0x0) {
              FMemory::Free(local_178.LayerNames.AllocatorInstance.Data);
            }
            if (local_178.LayerStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.LayerStates.AllocatorInstance.Data);
            }
            FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData(&local_1a8);
          }
          else {
            pFVar10 = (FName *)(local_res10->AllocatorInstance).Data;
            iVar2 = local_res10->ArrayNum;
            pFVar11 = pFVar10 + 1;
            pFVar1 = pFVar10 + (longlong)iVar2 * 3;
            while( true ) {
              if (pTVar5->ArrayNum != iVar2) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<FDS_ColorParameterValue_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res8);
              }
              uVar12 = local_res18;
              if (pFVar10 == pFVar1) break;
              if (cVar7 == '\0') {
                local_68._0_8_ = *pFVar11;
                local_68._8_8_ = pFVar11[1];
                UMaterialInstanceDynamic::SetVectorParameterValue
                          (this_00,*pFVar10,(FLinearColor *)&local_68._s_0);
                pFVar10 = pFVar10 + 3;
                pFVar11 = pFVar11 + 3;
              }
              else {
                local_90.Name = *pFVar10;
                local_90.Association.Value = '\0';
                local_90.Index = 0;
                local_58._0_8_ = *pFVar11;
                local_58._8_8_ = pFVar11[1];
                UMaterialInstanceDynamic::SetVectorParameterValueByInfo
                          (this_00,&local_90,(FLinearColor *)&local_58._s_0);
                pFVar10 = pFVar10 + 3;
                pFVar11 = pFVar11 + 3;
              }
            }
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            if (local_b8 != (void *)0x0) {
              FMemory::Free(local_b8);
            }
            if (local_c8 != (void *)0x0) {
              FMemory::Free(local_c8);
            }
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            DestructItems<FText,int>(local_f8,(int)local_f0);
            if (local_f8 != (FText *)0x0) {
              FMemory::Free(local_f8);
            }
            if (local_108 != (void *)0x0) {
              FMemory::Free(local_108);
            }
            FMaterialLayersFunctionsEditorOnlyData::~FMaterialLayersFunctionsEditorOnlyData
                      (&local_178);
            FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData(&local_1a8);
          }
        }
        local_res18 = uVar12 + 1;
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_98);
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free(local_1b8);
    }
  }
  return;
}

// SetMaterialParamScalar @ 14bc607f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::SetMaterialParamScalar
          (FDS_EntityBase *this,
          TArray<FDS_ScalarParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UObject *pUVar9;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  longlong local_198;
  void *local_190;
  int local_188;
  FMaterialLayersFunctionsRuntimeData local_178;
  FMaterialLayersFunctionsEditorOnlyData local_148;
  void *local_d8;
  undefined8 local_d0;
  FText *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  longlong local_68;
  FMaterialParameterInfo local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  (**(code **)(this->_padding_ + 0x80))();
  bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (!bVar6) {
    pUVar9 = FWeakObjectPtr::Get(&local_res18);
    (**(code **)(*(longlong *)pUVar9 + 0xa90))(pUVar9,&local_190);
    local_68 = (longlong)local_188;
    uVar11 = 0;
    if (0 < local_68) {
      local_198 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < local_188) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar4 = *(longlong **)((longlong)local_190 + local_198 * 8);
        if (plVar4 != (longlong *)0x0) {
          local_178.Layers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.LayerStackCache.Object = (FMaterialLayerStackFunctionsCache *)0x0;
          local_178.LayerStackCache.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_178.Layers.ArrayNum = 0;
          local_178.Layers.ArrayMax = 0;
          local_178.Blends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.Blends.ArrayNum = 0;
          local_178.Blends.ArrayMax = 0;
          local_148.LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.LayerStates.ArrayNum = 0;
          local_148.LayerStates.ArrayMax = 0;
          local_148.LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.LayerNames.ArrayNum = 0;
          local_148.LayerNames.ArrayMax = 0;
          local_148.RestrictToLayerRelatives.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_148.RestrictToLayerRelatives.ArrayNum = 0;
          local_148.RestrictToLayerRelatives.ArrayMax = 0;
          local_148.RestrictToBlendRelatives.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_148.RestrictToBlendRelatives.ArrayNum = 0;
          local_148.RestrictToBlendRelatives.ArrayMax = 0;
          local_148.LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.LayerGuids.ArrayNum = 0;
          local_148.LayerGuids.ArrayMax = 0;
          local_148.LayerLinkStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.LayerLinkStates.ArrayNum = 0;
          local_148.LayerLinkStates.ArrayMax = 0;
          local_148.DeletedParentLayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.DeletedParentLayerGuids.ArrayNum = 0;
          local_148.DeletedParentLayerGuids.ArrayMax = 0;
          local_d8 = (void *)0x0;
          local_d0 = 0;
          local_c8 = (FText *)0x0;
          local_c0 = 0;
          local_b8 = (void *)0x0;
          local_b0 = 0;
          local_a8 = (void *)0x0;
          local_a0 = 0;
          local_98 = (void *)0x0;
          local_90 = 0;
          local_88 = (void *)0x0;
          local_80 = 0;
          local_78 = (void *)0x0;
          local_70 = 0;
          local_50 = 0;
          uStack_48 = 0;
          cVar7 = (**(code **)(*plVar4 + 0x3a0))(plVar4,&local_178,&local_50);
          pUVar9 = FWeakObjectPtr::Get(&local_res18);
          local_res20 = 0;
          this_00 = (UMaterialInstanceDynamic *)
                    (**(code **)(*(longlong *)pUVar9 + 0x6d8))(pUVar9,uVar11,plVar4,0);
          if (this_00 == (UMaterialInstanceDynamic *)0x0) {
            if (local_78 != (void *)0x0) {
              FMemory::Free(local_78);
            }
            if (local_88 != (void *)0x0) {
              FMemory::Free(local_88);
            }
            if (local_98 != (void *)0x0) {
              FMemory::Free(local_98);
            }
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            if (local_b8 != (void *)0x0) {
              FMemory::Free(local_b8);
            }
            DestructItems<FText,int>(local_c8,(int)local_c0);
            if (local_c8 != (FText *)0x0) {
              FMemory::Free(local_c8);
            }
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            if (local_148.DeletedParentLayerGuids.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.DeletedParentLayerGuids.AllocatorInstance.Data);
            }
            if (local_148.LayerLinkStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_148.LayerLinkStates.AllocatorInstance.Data);
            }
            if (local_148.LayerGuids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.LayerGuids.AllocatorInstance.Data);
            }
            if (local_148.RestrictToBlendRelatives.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.RestrictToBlendRelatives.AllocatorInstance.Data);
            }
            if (local_148.RestrictToLayerRelatives.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.RestrictToLayerRelatives.AllocatorInstance.Data);
            }
            DestructItems<FText,int>
                      ((FText *)local_148.LayerNames.AllocatorInstance.Data,
                       local_148.LayerNames.ArrayNum);
            if ((FText *)local_148.LayerNames.AllocatorInstance.Data != (FText *)0x0) {
              FMemory::Free(local_148.LayerNames.AllocatorInstance.Data);
            }
            if (local_148.LayerStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.LayerStates.AllocatorInstance.Data);
            }
          }
          else {
            iVar3 = param_1->ArrayNum;
            pFVar10 = (FName *)(param_1->AllocatorInstance).Data;
            pFVar1 = (FName *)((longlong)pFVar10 + (longlong)iVar3 * 0xc);
            while( true ) {
              if (param_1->ArrayNum != iVar3) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<FDS_ScalarParameterValue_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res8);
              }
              if (pFVar10 == pFVar1) break;
              fVar2 = (float)pFVar10[1].ComparisonIndex.Value;
              if (cVar7 == '\0') {
                UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar10,fVar2);
                pFVar10 = (FName *)&pFVar10[1].Number;
              }
              else {
                local_60.Name = *pFVar10;
                local_60.Association.Value = '\0';
                local_60.Index = 0;
                UMaterialInstanceDynamic::SetScalarParameterValueByInfo(this_00,&local_60,fVar2);
                pFVar10 = (FName *)&pFVar10[1].Number;
              }
            }
            if (local_78 != (void *)0x0) {
              FMemory::Free(local_78);
            }
            if (local_88 != (void *)0x0) {
              FMemory::Free(local_88);
            }
            if (local_98 != (void *)0x0) {
              FMemory::Free(local_98);
            }
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            if (local_b8 != (void *)0x0) {
              FMemory::Free(local_b8);
            }
            DestructItems<FText,int>(local_c8,(int)local_c0);
            if (local_c8 != (FText *)0x0) {
              FMemory::Free(local_c8);
            }
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            FMaterialLayersFunctionsEditorOnlyData::~FMaterialLayersFunctionsEditorOnlyData
                      (&local_148);
          }
          FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData(&local_178);
        }
        uVar11 = uVar11 + 1;
        local_198 = local_198 + 1;
      } while (local_198 < local_68);
    }
    if (local_190 != (void *)0x0) {
      FMemory::Free(local_190);
    }
  }
  return;
}

// SetMaterialParamVector @ 14bc60ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::SetMaterialParamVector
          (FDS_EntityBase *this,
          TArray<FDS_VectorParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong *plVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UObject *pUVar8;
  UMaterialInstanceDynamic *this_00;
  FLinearColor *pFVar9;
  FName *pFVar10;
  uint uVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined1 local_res8 [8];
  TArray<FDS_VectorParameterValue,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res18;
  FWeakObjectPtr local_res20;
  longlong local_1e0;
  void *local_1d8;
  int local_1d0;
  FMaterialLayersFunctionsRuntimeData local_1c8;
  FMaterialLayersFunctionsEditorOnlyData local_198;
  void *local_128;
  undefined8 local_120;
  FText *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  FMaterialParameterInfo local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  FLinearColor_u_0 local_88;
  FLinearColor_u_0 local_78;
  FLinearColor local_68;
  FLinearColor local_58;
  
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x80))();
  bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res20,
                     (void *)0x0);
  if (!bVar5) {
    pUVar8 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar8 + 0xa90))(pUVar8,&local_1d8);
    local_b8 = (longlong)local_1d0;
    local_res18 = 0;
    if (0 < local_b8) {
      local_1e0 = 0;
      do {
        uVar11 = local_res18;
        uVar7 = 0;
        if ((int)local_res18 < local_1d0) {
          uVar7 = ~local_res18 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar2 = *(longlong **)((longlong)local_1d8 + local_1e0 * 8);
        if (plVar2 != (longlong *)0x0) {
          local_1c8.Layers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.LayerStackCache.Object = (FMaterialLayerStackFunctionsCache *)0x0;
          local_1c8.LayerStackCache.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_1c8.Layers.ArrayNum = 0;
          local_1c8.Layers.ArrayMax = 0;
          local_1c8.Blends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.Blends.ArrayNum = 0;
          local_1c8.Blends.ArrayMax = 0;
          local_198.LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.LayerStates.ArrayNum = 0;
          local_198.LayerStates.ArrayMax = 0;
          local_198.LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.LayerNames.ArrayNum = 0;
          local_198.LayerNames.ArrayMax = 0;
          local_198.RestrictToLayerRelatives.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_198.RestrictToLayerRelatives.ArrayNum = 0;
          local_198.RestrictToLayerRelatives.ArrayMax = 0;
          local_198.RestrictToBlendRelatives.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_198.RestrictToBlendRelatives.ArrayNum = 0;
          local_198.RestrictToBlendRelatives.ArrayMax = 0;
          local_198.LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.LayerGuids.ArrayNum = 0;
          local_198.LayerGuids.ArrayMax = 0;
          local_198.LayerLinkStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.LayerLinkStates.ArrayNum = 0;
          local_198.LayerLinkStates.ArrayMax = 0;
          local_198.DeletedParentLayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.DeletedParentLayerGuids.ArrayNum = 0;
          local_198.DeletedParentLayerGuids.ArrayMax = 0;
          local_128 = (void *)0x0;
          local_120 = 0;
          local_118 = (FText *)0x0;
          local_110 = 0;
          local_108 = (void *)0x0;
          local_100 = 0;
          local_f8 = (void *)0x0;
          local_f0 = 0;
          local_e8 = (void *)0x0;
          local_e0 = 0;
          local_d8 = (void *)0x0;
          local_d0 = 0;
          local_c8 = (void *)0x0;
          local_c0 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          cVar6 = (**(code **)(*plVar2 + 0x3a0))(plVar2,&local_1c8,&local_a0);
          pUVar8 = FWeakObjectPtr::Get(&local_res20);
          this_00 = (UMaterialInstanceDynamic *)
                    (**(code **)(*(longlong *)pUVar8 + 0x6d8))(pUVar8,uVar11,plVar2,0);
          if (this_00 == (UMaterialInstanceDynamic *)0x0) {
            if (local_c8 != (void *)0x0) {
              FMemory::Free(local_c8);
            }
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            if (local_f8 != (void *)0x0) {
              FMemory::Free(local_f8);
            }
            if (local_108 != (void *)0x0) {
              FMemory::Free(local_108);
            }
            DestructItems<FText,int>(local_118,(int)local_110);
            if (local_118 != (FText *)0x0) {
              FMemory::Free(local_118);
            }
            if (local_128 != (void *)0x0) {
              FMemory::Free(local_128);
            }
            if (local_198.DeletedParentLayerGuids.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.DeletedParentLayerGuids.AllocatorInstance.Data);
            }
            if (local_198.LayerLinkStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_198.LayerLinkStates.AllocatorInstance.Data);
            }
            if (local_198.LayerGuids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.LayerGuids.AllocatorInstance.Data);
            }
            if (local_198.RestrictToBlendRelatives.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.RestrictToBlendRelatives.AllocatorInstance.Data);
            }
            if (local_198.RestrictToLayerRelatives.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.RestrictToLayerRelatives.AllocatorInstance.Data);
            }
            DestructItems<FText,int>
                      ((FText *)local_198.LayerNames.AllocatorInstance.Data,
                       local_198.LayerNames.ArrayNum);
            if ((FText *)local_198.LayerNames.AllocatorInstance.Data != (FText *)0x0) {
              FMemory::Free(local_198.LayerNames.AllocatorInstance.Data);
            }
            if (local_198.LayerStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.LayerStates.AllocatorInstance.Data);
            }
            FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData(&local_1c8);
          }
          else {
            pFVar12 = (FName *)(local_res10->AllocatorInstance).Data;
            iVar1 = local_res10->ArrayNum;
            pFVar13 = pFVar12 + (longlong)iVar1 * 4;
            pFVar10 = pFVar12 + 1;
            while( true ) {
              if (local_res10->ArrayNum != iVar1) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<FDS_VectorParameterValue_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res8);
              }
              if (pFVar12 == pFVar13) break;
              FVar3 = *pFVar12;
              if (cVar6 == '\0') {
                pFVar9 = FLinearColor::FLinearColor(&local_68,(TVector<double> *)pFVar10);
                local_88._0_8_ = *(undefined8 *)&pFVar9->field0_0x0;
                local_88._8_8_ = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
                UMaterialInstanceDynamic::SetVectorParameterValue
                          (this_00,FVar3,(FLinearColor *)&local_88._s_0);
                pFVar12 = pFVar12 + 4;
                pFVar10 = pFVar10 + 4;
              }
              else {
                local_b0.Association.Value = '\0';
                local_b0.Index = 0;
                local_b0.Name = FVar3;
                pFVar9 = FLinearColor::FLinearColor(&local_58,(TVector<double> *)pFVar10);
                local_78._0_8_ = *(undefined8 *)&pFVar9->field0_0x0;
                local_78._8_8_ = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
                UMaterialInstanceDynamic::SetVectorParameterValueByInfo
                          (this_00,&local_b0,(FLinearColor *)&local_78._s_0);
                pFVar12 = pFVar12 + 4;
                pFVar10 = pFVar10 + 4;
              }
            }
            if (local_c8 != (void *)0x0) {
              FMemory::Free(local_c8);
            }
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            if (local_f8 != (void *)0x0) {
              FMemory::Free(local_f8);
            }
            if (local_108 != (void *)0x0) {
              FMemory::Free(local_108);
            }
            DestructItems<FText,int>(local_118,(int)local_110);
            if (local_118 != (FText *)0x0) {
              FMemory::Free(local_118);
            }
            if (local_128 != (void *)0x0) {
              FMemory::Free(local_128);
            }
            FMaterialLayersFunctionsEditorOnlyData::~FMaterialLayersFunctionsEditorOnlyData
                      (&local_198);
            FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData(&local_1c8);
            uVar11 = local_res18;
          }
        }
        local_res18 = uVar11 + 1;
        local_1e0 = local_1e0 + 1;
      } while (local_1e0 < local_b8);
    }
    if (local_1d8 != (void *)0x0) {
      FMemory::Free(local_1d8);
    }
  }
  return;
}

// SetOutline @ 14bc61a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::SetOutline(FDS_EntityBase *this,bool param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  UMaterialInterface *this_00;
  UMaterialInstanceDynamic *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UObject *pUVar13;
  UMaterialInstanceDynamic *pUVar14;
  UClass *pUVar15;
  FName *pFVar16;
  FLinearColor *pFVar17;
  UPrimitiveComponent *pUVar18;
  UMaterialInstanceDynamic *this_01;
  ulonglong uVar19;
  void *_Dst;
  undefined4 *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  undefined1 local_res18 [8];
  float local_res20 [2];
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  undefined4 *local_1c8;
  float local_1c0;
  float local_1bc;
  undefined4 *local_1b8;
  uint local_1b0;
  undefined4 local_1a8 [2];
  UMaterialInstanceDynamic *local_1a0;
  undefined8 local_198;
  FWeakObjectPtr local_190;
  FName local_188;
  void *local_180;
  int local_178;
  FMemoryImageMaterialParameterInfo local_170;
  FMemoryImageMaterialParameterInfo local_15c;
  FMemoryImageMaterialParameterInfo local_148;
  FMemoryImageMaterialParameterInfo local_134;
  UObject *local_120;
  UObject *local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FLinearColor local_c0;
  FLinearColor_u_0 local_a8;
  FLinearColor_u_0 local_98 [6];
  
  (**(code **)(this->_padding_ + 0x80))();
  bVar10 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_1d8,
                      (void *)0x0);
  if (!bVar10) {
    pUVar13 = FWeakObjectPtr::Get(&local_1d8);
    (**(code **)(*(longlong *)pUVar13 + 0xa90))(pUVar13,&local_180);
    fVar9 = __real_3a83126f;
    fVar8 = __real_40400000;
    fVar7 = __real_3f800000;
    lVar25 = (longlong)local_178;
    uVar21 = 0;
    lVar26 = 0;
    if (0 < lVar25) {
      do {
        uVar11 = 0;
        if ((int)uVar21 < local_178) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)((longlong)local_180 + lVar26 * 8);
        if (lVar2 != 0) {
          pUVar13 = FWeakObjectPtr::Get(&local_1d8);
          local_198 = 0;
          pUVar14 = (UMaterialInstanceDynamic *)
                    (**(code **)(*(longlong *)pUVar13 + 0x6d8))(pUVar13,uVar21,lVar2);
          if ((pUVar14 != (UMaterialInstanceDynamic *)0x0) &&
             (this_00 = (UMaterialInterface *)pUVar14->_padding_,
             this_00 != (UMaterialInterface *)0x0)) {
            pUVar15 = Z_Construct_UClass_UMaterialInstance_NoRegister();
            iVar24 = (int)pUVar15->_padding_;
            if ((iVar24 <= *(int *)(this_00->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
                &pUVar15->_padding_)) {
              local_res20[0] = 0.0;
              local_1c0 = 0.0;
              local_1bc = 0.0;
              pFVar16 = ::FName::FName(&local_110,"FresnelIntensity");
              local_170.Name.ComparisonIndex = (*pFVar16).ComparisonIndex;
              local_170.Name.Number = (*pFVar16).Number;
              local_170.Name.DisplayIndex.Value = 0;
              local_170.Index = -1;
              local_170.Association.Value = '\x02';
              UMaterialInterface::GetScalarParameterValue(this_00,&local_170,local_res20,false);
              pFVar16 = ::FName::FName(&local_108,"FresnelExponenIn");
              local_15c.Name.ComparisonIndex = (*pFVar16).ComparisonIndex;
              local_15c.Name.Number = (*pFVar16).Number;
              local_15c.Name.DisplayIndex.Value = 0;
              local_15c.Index = -1;
              local_15c.Association.Value = '\x02';
              UMaterialInterface::GetScalarParameterValue(this_00,&local_15c,&local_1c0,false);
              pFVar16 = ::FName::FName(&local_100,"FresnelBaseReflecFractionIn");
              local_148.Name.ComparisonIndex = (*pFVar16).ComparisonIndex;
              local_148.Name.Number = (*pFVar16).Number;
              local_148.Name.DisplayIndex.Value = 0;
              local_148.Index = -1;
              local_148.Association.Value = '\x02';
              UMaterialInterface::GetScalarParameterValue(this_00,&local_148,&local_1bc,false);
              pFVar16 = ::FName::FName(&local_f8,"FresnelColor");
              local_134.Name.ComparisonIndex = (*pFVar16).ComparisonIndex;
              local_134.Name.Number = (*pFVar16).Number;
              local_134.Name.DisplayIndex.Value = 0;
              local_134.Index = -1;
              local_134.Association.Value = '\x02';
              UMaterialInterface::GetVectorParameterValue(this_00,&local_134,&local_c0,false);
              fVar27 = local_res20[0];
              if (param_1) {
                fVar27 = fVar8;
              }
              pFVar16 = ::FName::FName(&local_f0,"FresnelIntensity");
              UMaterialInstanceDynamic::SetScalarParameterValue(pUVar14,*pFVar16,fVar27);
              fVar27 = local_1c0;
              if (param_1) {
                fVar27 = fVar8;
              }
              pFVar16 = ::FName::FName(&local_e8,"FresnelExponenIn");
              UMaterialInstanceDynamic::SetScalarParameterValue(pUVar14,*pFVar16,fVar27);
              fVar27 = local_1bc;
              if (param_1) {
                fVar27 = fVar9;
              }
              pFVar16 = ::FName::FName(&local_e0,"FresnelBaseReflecFractionIn");
              UMaterialInstanceDynamic::SetScalarParameterValue(pUVar14,*pFVar16,fVar27);
              pFVar17 = &this->OutlineColor;
              if (!param_1) {
                pFVar17 = &local_c0;
              }
              uVar5 = *(undefined8 *)&pFVar17->field0_0x0;
              uVar6 = *(undefined8 *)((longlong)&pFVar17->field0_0x0 + 8);
              pFVar16 = ::FName::FName(&local_d8,"FresnelColor");
              local_a8._0_8_ = uVar5;
              local_a8._8_8_ = uVar6;
              UMaterialInstanceDynamic::SetVectorParameterValue
                        (pUVar14,*pFVar16,(FLinearColor *)&local_a8._s_0);
              fVar27 = fVar7;
              if (!param_1) {
                fVar27 = 0.0;
              }
              pFVar16 = ::FName::FName(&local_d0,"FresnelPPMask");
              UMaterialInstanceDynamic::SetScalarParameterValue(pUVar14,*pFVar16,fVar27);
            }
          }
        }
        uVar21 = uVar21 + 1;
        lVar26 = lVar26 + 1;
      } while (lVar26 < lVar25);
    }
    pUVar18 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&local_1d8);
    UPrimitiveComponent::SetRenderCustomDepth(pUVar18,param_1);
    pUVar18 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&local_1d8);
    if (param_1) {
      UPrimitiveComponent::SetCustomDepthStencilValue(pUVar18,0xfa);
      ADS_MainCharacter::GetMainPlayer();
      bVar10 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_190,(void *)0x0
                         );
      if (!bVar10) {
        pUVar13 = FWeakObjectPtr::Get(&local_190);
        pUVar13 = *(UObject **)&pUVar13[0x41].field_0x10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar13 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar13);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar13);
          }
        }
        local_1d0.ObjectIndex = 0;
        local_1d0.ObjectSerialNumber = 0;
        local_120 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_120);
        bVar10 = FWeakObjectPtr::IsValid(&local_1d0);
        if (bVar10) {
          local_118 = FWeakObjectPtr::Get(&local_1d0);
          local_1b0 = *(uint *)&local_118[0x43].field_0x18;
          uVar19 = (ulonglong)(int)local_1b0;
          puVar20 = *(undefined4 **)&local_118[0x43].field_0x10;
          puVar23 = puVar20 + uVar19 * 4;
          local_1b8 = puVar23;
          while( true ) {
            local_1c8 = puVar20;
            if (*(int *)&local_118[0x43].field_0x18 != (int)uVar19) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FWeightedBlendable_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res18);
            }
            if (puVar20 == puVar23) break;
            pUVar14 = *(UMaterialInstanceDynamic **)(puVar20 + 2);
            uVar1 = *puVar20;
            if (pUVar14 != (UMaterialInstanceDynamic *)0x0) {
              pUVar15 = Z_Construct_UClass_UMaterialInterface_NoRegister();
              iVar24 = (int)pUVar15->_padding_;
              if ((iVar24 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar24 * 8)
                  == &pUVar15->_padding_)) {
                pUVar15 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
                iVar24 = (int)pUVar15->_padding_;
                if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar24) ||
                   (this_01 = pUVar14,
                   (longlong *)
                   *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar24 * 8)
                   != &pUVar15->_padding_)) {
                  local_188.ComparisonIndex.Value = 0;
                  local_188.Number = 0;
                  pUVar13 = FWeakObjectPtr::Get(&local_1d8);
                  this_01 = UMaterialInstanceDynamic::Create
                                      ((UMaterialInterface *)pUVar14,pUVar13,local_188);
                  pUVar13 = FWeakObjectPtr::Get(&local_1d0);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)pUVar14);
                  }
                  iVar24 = *(int *)&pUVar13[0x43].field_0x18;
                  uVar21 = 0;
                  if (0 < iVar24) {
                    puVar22 = &pUVar13[0x43].field_0x10;
                    lVar25 = 0;
                    do {
                      uVar11 = 0;
                      if ((int)uVar21 < *(int *)&pUVar13[0x43].field_0x18) {
                        uVar11 = ~uVar21 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pUVar3 = *(UMaterialInstanceDynamic **)(*(longlong *)puVar22 + lVar25 + 8);
                      if (pUVar3 == (UMaterialInstanceDynamic *)0x0) {
                        bVar10 = pUVar14 == (UMaterialInstanceDynamic *)0x0;
                      }
                      else {
                        bVar10 = pUVar3 == pUVar14;
                      }
                      if (bVar10) {
                        uVar11 = 0;
                        if ((int)uVar21 < *(int *)&pUVar13[0x43].field_0x18) {
                          uVar11 = ~uVar21 >> 0x1f;
                        }
                        if ((uVar11 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        _Dst = (void *)(*(longlong *)puVar22 + (longlong)(int)uVar21 * 0x10);
                        iVar12 = (*(int *)&pUVar13[0x43].field_0x18 - uVar21) + -1;
                        if (iVar12 != 0) {
                          memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar12 << 4);
                        }
                        *(int *)&pUVar13[0x43].field_0x18 = *(int *)&pUVar13[0x43].field_0x18 + -1;
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x10,8,(ForAnyElementType *)puVar22,
                                   *(int *)&pUVar13[0x43].field_0x18,
                                   (int *)&pUVar13[0x43].field_0x1c);
                        uVar21 = uVar21 - 1;
                        lVar25 = lVar25 + -0x10;
                        iVar24 = iVar24 + -1;
                      }
                      uVar21 = uVar21 + 1;
                      lVar25 = lVar25 + 0x10;
                    } while ((int)uVar21 < iVar24);
                  }
                  pUVar13 = FWeakObjectPtr::Get(&local_1d0);
                  puVar20 = local_1c8;
                  puVar23 = local_1b8;
                  if (this_01 != (UMaterialInstanceDynamic *)0x0) {
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this_01);
                    }
                    iVar24 = *(int *)&pUVar13[0x43].field_0x18;
                    uVar21 = 0;
                    lVar25 = 0;
                    if (0 < (longlong)iVar24) {
                      lVar26 = 0;
                      do {
                        uVar11 = 0;
                        if ((int)uVar21 < *(int *)&pUVar13[0x43].field_0x18) {
                          uVar11 = ~uVar21 >> 0x1f;
                        }
                        if ((uVar11 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pUVar14 = *(UMaterialInstanceDynamic **)
                                   (lVar26 + 8 + *(longlong *)&pUVar13[0x43].field_0x10);
                        if (pUVar14 == (UMaterialInstanceDynamic *)0x0) {
                          bVar10 = this_01 == (UMaterialInstanceDynamic *)0x0;
                        }
                        else {
                          bVar10 = pUVar14 == this_01;
                        }
                        if (bVar10) {
                          uVar11 = 0;
                          if ((int)uVar21 < *(int *)&pUVar13[0x43].field_0x18) {
                            uVar11 = ~uVar21 >> 0x1f;
                          }
                          if ((uVar11 == 0) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          *(undefined4 *)(*(longlong *)&pUVar13[0x43].field_0x10 + lVar25 * 0x10) =
                               uVar1;
                          puVar20 = local_1c8;
                          puVar23 = local_1b8;
                          goto LAB_14bc622e4;
                        }
                        uVar21 = uVar21 + 1;
                        lVar25 = lVar25 + 1;
                        lVar26 = lVar26 + 0x10;
                      } while (lVar25 < iVar24);
                    }
                    puVar22 = &pUVar13[0x43].field_0x10;
                    local_1a8[0] = uVar1;
                    local_1a0 = this_01;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)this_01);
                    }
                    if (((*(undefined4 **)puVar22 <= local_1a8) &&
                        (local_1a8 <
                         *(undefined4 **)puVar22 + (longlong)*(int *)&pUVar13[0x43].field_0x1c * 4))
                       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar10)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar24 = *(int *)&pUVar13[0x43].field_0x18;
                    if (iVar24 == *(int *)&pUVar13[0x43].field_0x1c) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,(ForAnyElementType *)puVar22,
                                          (int *)&pUVar13[0x43].field_0x1c);
                    }
                    *(int *)&pUVar13[0x43].field_0x18 = iVar24 + 1;
                    lVar25 = *(longlong *)puVar22;
                    *(undefined4 *)(lVar25 + (longlong)iVar24 * 0x10) = local_1a8[0];
                    *(UMaterialInstanceDynamic **)(lVar25 + (longlong)iVar24 * 0x10 + 8) = local_1a0
                    ;
                    puVar20 = local_1c8;
                    puVar23 = local_1b8;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_1a0 != (UMaterialInstanceDynamic *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)local_1a0);
                      puVar20 = local_1c8;
                      puVar23 = local_1b8;
                    }
                  }
                }
LAB_14bc622e4:
                uVar5 = *(undefined8 *)&(this->OutlineColor).field0_0x0;
                uVar6 = *(undefined8 *)((longlong)&(this->OutlineColor).field0_0x0 + 8);
                pFVar16 = ::FName::FName(&local_c8,"LineColor");
                local_98[0]._0_8_ = uVar5;
                local_98[0]._8_8_ = uVar6;
                UMaterialInstanceDynamic::SetVectorParameterValue
                          (this_01,*pFVar16,(FLinearColor *)&local_98[0]._s_0);
              }
            }
            puVar20 = puVar20 + 4;
            uVar19 = (ulonglong)local_1b0;
          }
        }
      }
    }
    else {
      UPrimitiveComponent::SetCustomDepthStencilValue(pUVar18,this->DefaultCustomDepthValue);
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
  }
  return;
}

// SetParentEntity @ 14bc63150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FDS_EntityBase::SetParentEntity(FDS_EntityBase *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  EDS_AbilityTagType local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18;
  FDestructionSentinel local_58;
  
  local_res10 = param_1.WeakPtr;
  bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                    (&this->ParentEntityActor,(TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res10)
  ;
  if (!bVar5) {
    (this->ParentEntityActor).WeakPtr = local_res10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ChangeParentActorDelegate,(FWriteAccessScope *)&local_58);
    puVar1 = &(this->ChangeParentActorDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar10 = *(int *)&(this->ChangeParentActorDelegate).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar9 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&(this->ChangeParentActorDelegate).field_0x10) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->ChangeParentActorDelegate).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar9) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->ChangeParentActorDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->ChangeParentActorDelegate,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&this->ParentEntityActor,(void *)0x0);
    if (!bVar5) {
      local_res18 = 0;
      local_res8[0] = Ride;
      TryActivateAbility(this,local_res8,(TObjectPtr<UWN_AbilityContext>)&local_res18);
    }
  }
  return;
}

// ShowDebugUI @ 14bc66050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDS_EntityBase::ShowDebugUI(FDS_EntityBase *this,bool param_1)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UWidgetComponent *pUVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStackY_108 [32];
  TStringView<wchar_t> local_d8;
  FWeakObjectPtr local_c8 [2];
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  (**(code **)(this->_padding_ + 0x150))();
  bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)local_c8,(void *)0x0);
  if (!bVar3) {
    pUVar6 = this->DebugUIComponent;
    if (param_1) {
      if (pUVar6 == (UWidgetComponent *)0x0) {
        local_d8.DataPtr = (wchar_t *)0x0;
        pUVar4 = FWeakObjectPtr::Get(local_c8);
        FObjectInitializer::AssertIfInConstructor
                  (pUVar4,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = Z_Construct_UClass_UWidgetComponent_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_a8,pUVar5);
        local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_a8._56_8_ = (UPackage *)0x0;
        local_a8._16_4_ = 0;
        local_a8._20_4_ = 0;
        local_a8._24_4_ = RF_Transient;
        local_a8._40_8_ = (UObject *)0x0;
        local_a8[0x20] = false;
        local_a8._8_8_ = pUVar4;
        pUVar6 = (UWidgetComponent *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
        if (local_a8._64_8_ != 0) {
          plVar8 = (longlong *)(local_a8 + 0x50);
          if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
            plVar8 = (longlong *)local_a8._104_8_;
          }
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        pvVar2 = ThreadLocalStoragePointer;
        uVar7 = (ulonglong)_tls_index;
        this->DebugUIComponent = pUVar6;
        if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar7 * 8) + 0x9d4c) < ::_TSS0) &&
           (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_d8.Size = 0;
          local_d8._12_4_ = 0;
          local_b8 = L"/Game/UIs/MIR_FIVE/UMG_BP_N/Debug_N/W_DebugTag.W_DebugTag_C";
          local_d8.DataPtr = (wchar_t *)0x0;
          uStack_b0 = 0x3b;
          pUVar5 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
          WidgetCompClass =
               StaticLoadClass(pUVar5,(UObject *)0x0,(TStringView<wchar_t> *)&local_b8,&local_d8,0,
                               (UPackageMap *)0x0);
          _Init_thread_footer(&::_TSS0);
        }
        if (WidgetCompClass != (UClass *)0x0) {
          pUVar6 = this->DebugUIComponent;
          local_d8.DataPtr = (wchar_t *)WidgetCompClass;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)WidgetCompClass);
          }
          UWidgetComponent::SetWidgetClass(pUVar6,(TSubclassOf<UUserWidget>)&local_d8);
          (**(code **)(*(longlong *)this->DebugUIComponent + 0xb28))();
        }
        (**(code **)(*(longlong *)this->DebugUIComponent + 0x780))();
        UPrimitiveComponent::SetGenerateOverlapEvents
                  ((UPrimitiveComponent *)this->DebugUIComponent,false);
        pUVar6 = this->DebugUIComponent;
        local_d8.DataPtr = (wchar_t *)0x0;
        pcVar1 = *(code **)(*(longlong *)pUVar6 + 0x508);
        pUVar4 = FWeakObjectPtr::Get(local_c8);
        (*pcVar1)(pUVar6,*(undefined8 *)(pUVar4 + 0xb),
                  &FAttachmentTransformRules::KeepRelativeTransform,0);
        UActorComponent::RegisterComponent((UActorComponent *)this->DebugUIComponent);
        (**(code **)(*(longlong *)this->DebugUIComponent + 1000))();
        (**(code **)(*(longlong *)this->DebugUIComponent + 0x420))(this->DebugUIComponent,0);
        local_b8 = (wchar_t *)___xmm_403e000000000000404f800000000000;
        _uStack_b0 = _UNK_152798f08;
        this->DebugUIComponent->Space = Screen;
        UWidgetComponent::SetDrawSize(this->DebugUIComponent,(TVector2<double> *)&local_b8);
        BindDebugUI(this);
      }
    }
    else if (pUVar6 != (UWidgetComponent *)0x0) {
      if ((pUVar6->field_0x9b & 0x40) == 0) {
        (**(code **)(*(longlong *)pUVar6 + 0xb30))();
        UActorComponent::UnregisterComponent((UActorComponent *)this->DebugUIComponent);
        (**(code **)(*(longlong *)this->DebugUIComponent + 0x4a0))(this->DebugUIComponent,0);
      }
      this->DebugUIComponent = (UWidgetComponent *)0x0;
    }
  }
  return;
}

// TryActivateAbility @ 14bc680c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::TryActivateAbility
          (FDS_EntityBase *this,EDS_AbilityTagType *param_1,TObjectPtr<UWN_AbilityContext> param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UObject *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (**(code **)(this->_padding_ + 0x178))();
  bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_148,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_EntityBase::TryActivateAbility",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x2d1,L"asc is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_148);
    local_140 = *(UObject **)param_2.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_140);
    }
    pFVar3 = FDS_GameplayTags::GetAbilityTag(param_1);
    bVar1 = UDS_AbilitySystemComponent::TryActivateAbilityByTag
                      (this_00,pFVar3,(TObjectPtr<UWN_AbilityContext>)&local_140);
  }
  return bVar1;
}

// TryActivateAirWalkAbility @ 14bc68200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::TryActivateAirWalkAbility(FDS_EntityBase *this,EDS_AbilityTagType param_1)

{
  bool bVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  EDS_AbilityTagType local_b8 [8];
  FWeakObjectPtr local_b0;
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (**(code **)(this->_padding_ + 0x150))(this,&local_b0);
  bVar1 = FWeakObjectPtr::IsValid(&local_b0);
  bVar2 = false;
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_b0);
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_AirWalkAbilityContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._8_8_ = pUVar3;
    pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(EDS_AbilityTagType *)(pUVar3 + 1) = param_1;
    local_a8[0] = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_b8[0] = AirWalk_Process;
    bVar2 = TryActivateAbility(this,local_b8,(TObjectPtr<UWN_AbilityContext>)local_a8);
  }
  return bVar2;
}

// TryActivateMountAbility @ 14bc68340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FDS_EntityBase::TryActivateMountAbility(FDS_EntityBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  EDS_AbilityTagType local_a8 [8];
  UObject *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UWN_AbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_a0 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_a8[0] = Mount;
  bVar1 = TryActivateAbility(this,local_a8,(TObjectPtr<UWN_AbilityContext>)&local_a0);
  return bVar1;
}

// TryActivateNetSkillAbility @ 14bc68440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::TryActivateNetSkillAbility
          (FDS_EntityBase *this,int param_1,double param_2,double param_3,ulong64 param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  FWeakObjectPtr *pFVar6;
  UObject *pUVar7;
  EDS_AbilityTagType local_res8 [8];
  FWeakObjectPtr local_38;
  UDS_SkillAbilityContext *local_30 [5];
  
  (**(code **)(this->_padding_ + 0x150))(this,&local_38);
  bVar4 = FWeakObjectPtr::IsValid(&local_38);
  bVar5 = false;
  if (bVar4) {
    local_res8[0] = SkillMode_Process;
    pFVar6 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x178))(this,local_30);
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar6,local_res8);
    local_res8[0] = SkillMode_Aim;
    pFVar6 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x178))(this,local_30);
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar6,local_res8);
    pUVar7 = FWeakObjectPtr::Get(&local_38);
    local_30[0] = NewObject<UDS_SkillAbilityContext>(pUVar7);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_30[0] != (UDS_SkillAbilityContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_30[0]);
    }
    local_30[0]->SkillID = param_1;
    local_30[0]->SkillStartTime = param_2;
    dVar2 = (param_5->field0_0x0)._s_0.X;
    dVar3 = (param_5->field0_0x0)._s_0.Y;
    dVar1 = (param_5->field0_0x0)._s_0.Z;
    local_30[0]->SkillEndTime = param_3;
    local_30[0]->TargetEntityID = param_4;
    (local_30[0]->DestinationLocation).field0_0x0._s_0.X = dVar2;
    (local_30[0]->DestinationLocation).field0_0x0._s_0.Y = dVar3;
    (local_30[0]->DestinationLocation).field0_0x0._s_0.Z = dVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_30[0]);
    }
    local_res8[0] = Skill_Process;
    bVar5 = TryActivateAbility(this,local_res8,(TObjectPtr<UWN_AbilityContext>)local_30);
  }
  return bVar5;
}

// TryActivateSkillAbility @ 14bc68580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FDS_EntityBase::TryActivateSkillAbility(FDS_EntityBase *this,int param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  UDS_DataBase *this_00;
  TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> this_01;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_SkillAbilityContext *pUVar7;
  UDS_SkillDataSet *this_02;
  UDS_MovementCore *this_03;
  TVector<double> *pTVar8;
  UObject *local_res8;
  int local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UDS_SkillAbilityContext *local_40;
  TVector<double> local_38;
  
  local_res10[0] = param_1;
  (**(code **)(this->_padding_ + 0x150))(this,&local_58);
  bVar4 = FWeakObjectPtr::IsValid(&local_58);
  if (!bVar4) {
    return false;
  }
  UDS_CharStateData::GetData((ulong64)&local_48);
  bVar4 = FWeakObjectPtr::IsValid(&local_48);
  if (!bVar4) {
    return false;
  }
  UDS_SkillData::GetData((ulong64)&local_res18,this->EntityID,SUB41(local_res10[0],0));
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar4) {
    return false;
  }
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res18);
  this_01 = UDS_DataBase::GetMyDataSet(this_00);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bc6863c;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bc6863c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
  bVar4 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar4) {
    return false;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res18);
  if (0 < *(int *)(pUVar5 + 5)) {
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    local_res10[0] = *(int *)(pUVar5 + 5);
  }
  pUVar5 = FWeakObjectPtr::Get(&local_58);
  pUVar7 = NewObject<UDS_SkillAbilityContext>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UDS_SkillAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar7->SkillID = local_res10[0];
  this_02 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res20);
  bVar4 = UDS_SkillDataSet::IsSwitchingSkill(this_02,local_res10);
  if (bVar4) {
    pUVar7->IsHighPass = true;
  }
  (**(code **)(this->_padding_ + 0x78))(this);
  bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_50,(void *)0x0);
  if (!bVar4) {
    this_03 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_50);
    pTVar8 = UDS_MovementCore::GetActorLocation(this_03,&local_38);
    dVar3 = (pTVar8->field0_0x0)._s_0.Y;
    dVar1 = (pTVar8->field0_0x0)._s_0.Z;
    (pUVar7->StartLocation).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    (pUVar7->StartLocation).field0_0x0._s_0.Y = dVar3;
    (pUVar7->StartLocation).field0_0x0._s_0.Z = dVar1;
  }
  local_40 = pUVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_res8 = (UObject *)CONCAT71(local_res8._1_7_,0x10);
  bVar4 = TryActivateAbility(this,(EDS_AbilityTagType *)&local_res8,
                             (TObjectPtr<UWN_AbilityContext>)&local_40);
  return bVar4;
}

// TryActivateSkillAbility @ 14bc68790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_EntityBase::TryActivateSkillAbility(FDS_EntityBase *this,TObjectPtr<UWN_AbilityContext> param_1)

{
  bool bVar1;
  EDS_AbilityTagType local_res10 [8];
  UObject *local_res18 [2];
  
  local_res18[0] = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  local_res10[0] = Skill_Process;
  bVar1 = TryActivateAbility(this,local_res10,(TObjectPtr<UWN_AbilityContext>)local_res18);
  return bVar1;
}

// UpdateHiddenPolicy @ 14bc6cd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FDS_EntityBase::UpdateHiddenPolicy(FDS_EntityBase *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_EffectManager *this_00;
  undefined1 auStackY_188 [32];
  uint uVar3;
  wchar_t *pwVar4;
  bool local_148 [8];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(this->_padding_ + 0x150))();
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_EntityBase::UpdateHiddenPolicy",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x27f,L"entityActor is nullptr.");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  local_148[0] = (int)this->HiddenPolicy == None;
  if (local_148[0] == (this->bIsHiddenEntityActor == false)) {
    return;
  }
  bVar1 = UDS_GameInstance::IsPrintEntityVisble();
  if (bVar1) {
    if (local_148[0] == true) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bc6cf30;
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_EntityBase::UpdateHiddenPolicy",0x22,Yes);
      pwVar4 = L"Show Entity: %llu";
      uVar3 = 0x290;
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bc6cf30;
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_EntityBase::UpdateHiddenPolicy",0x22,Yes);
      pwVar4 = L"Hide Entity: %llu";
      uVar3 = 0x294;
    }
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,uVar3,pwVar4);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
LAB_14bc6cf30:
  (**(code **)(this->_padding_ + 0x1f8))(this,local_148[0] == false);
  (**(code **)(this->_padding_ + 0x50))(this,local_148);
  this_00 = UDS_EffectManager::GetInst();
  if (this_00 != (UDS_EffectManager *)0x0) {
    UDS_EffectManager::OnChangedShowEntity
              (this_00,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_140,local_148);
  }
  return;
}

