// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 268

// UEOpEquals<UDS_SkillData,bool> @ 14b79a5e0

bool __thiscall
TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals<UDS_SkillData,bool>
          (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14b7c7280

bool __thiscall
TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c72a0

bool __thiscall
TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c72c0

bool __thiscall
TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c72e0

bool __thiscall
TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7300

bool __thiscall
TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7320

bool __thiscall
TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7340

bool __thiscall
TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AttackTargetAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7360

bool __thiscall
TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CastingSkillAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7380

bool __thiscall
TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c73a0

bool __thiscall
TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c73c0

bool __thiscall
TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c73e0

bool __thiscall
TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7400

bool __thiscall
TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CharacterSwitchAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7420

bool __thiscall
TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ComeBackAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7440

bool __thiscall
TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DeathAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7460

bool __thiscall
TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7480

bool __thiscall
TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_EmissiveEffectAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c74a0

bool __thiscall
TWeakObjectPtr<UDS_EventAnimationAbilityContext,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_EventAnimationAbilityContext,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c74c0

bool __thiscall
TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c74e0

bool __thiscall
TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7500

bool __thiscall
TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7520

bool __thiscall
TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7540

bool __thiscall
TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7560

bool __thiscall
TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7580

bool __thiscall
TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c75a0

bool __thiscall
TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c75c0

bool __thiscall
TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c75e0

bool __thiscall
TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7600

bool __thiscall
TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7620

bool __thiscall
TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7640

bool __thiscall
TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7660

bool __thiscall
TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c7680

bool __thiscall
TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c76a0

bool __thiscall
TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c76c0

bool __thiscall
TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b7c76e0

bool __thiscall
TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816c00

bool __thiscall
TWeakObjectPtr<ADS_BlockingBox,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_BlockingBox,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816c20

bool __thiscall
TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816c40

bool __thiscall
TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816c60

bool __thiscall
TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816c80

bool __thiscall
TWeakObjectPtr<ADS_PartsSystemActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_PartsSystemActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816ca0

bool __thiscall
TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UCharacterMovementComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816cc0

bool __thiscall
TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816ce0

bool __thiscall
TWeakObjectPtr<UDS_GroggyAbilityContext,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GroggyAbilityContext,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816d00

bool __thiscall
TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GroggyAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816d20

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816d40

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816d60

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816d80

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816da0

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_NPCGimmick,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816dc0

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816de0

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_NPCLingTalk,FWeakObjectPtr> *this,void *param_1
          )

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816e00

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816e20

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> *this,void *param_1
          )

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816e40

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> *this,
          void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816e60

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> *this,void *param_1
          )

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816e80

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> *this,
          void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816ea0

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> *this,
          void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816ec0

bool __thiscall
TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDeviceUse,FWeakObjectPtr> *this,
          void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816ee0

bool __thiscall
TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816f00

bool __thiscall
TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_LevelSequencePlayAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816f20

bool __thiscall
TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816f40

bool __thiscall
TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816f60

bool __thiscall
TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816f80

bool __thiscall
TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816fa0

bool __thiscall
TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816fc0

bool __thiscall
TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b816fe0

bool __thiscall
TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b817000

bool __thiscall
TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<USceneComponent,bool> @ 14b822e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals<USceneComponent,bool>
          (TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *this,USceneComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USceneComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14b854d80

bool __thiscall
TWeakObjectPtr<ADS_TotemActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_TotemActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854da0

bool __thiscall
TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854dc0

bool __thiscall
TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854de0

bool __thiscall
TWeakObjectPtr<UDS_MountAbilityContext,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MountAbilityContext,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854e00

bool __thiscall
TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854e20

bool __thiscall
TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854e40

bool __thiscall
TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MountManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854e60

bool __thiscall
TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MoveToPointAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854e80

bool __thiscall
TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854ea0

bool __thiscall
TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854ec0

bool __thiscall
TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Falling,FWeakObjectPtr> *this,
          void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854ee0

bool __thiscall
TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Hide,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854f00

bool __thiscall
TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Show,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854f20

bool __thiscall
TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCClientControlAbilityData_Thrown,FWeakObjectPtr> *this,void *param_1
          )

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854f40

bool __thiscall
TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854f60

bool __thiscall
TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854f80

bool __thiscall
TWeakObjectPtr<UDS_PatrolEventAbilityContext,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PatrolEventAbilityContext,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854fa0

bool __thiscall
TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PlayerSkillAbilityData_Detection,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854fc0

bool __thiscall
TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCamp,FWeakObjectPtr> *this,void *param_1
          )

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b854fe0

bool __thiscall
TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PlayerSkillAbilityData_InstallCampCasting,FWeakObjectPtr> *this,
          void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b855000

bool __thiscall
TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ResurrectAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b855020

bool __thiscall
TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_RotateToAngleAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b855040

bool __thiscall
TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SkillRotateAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b855060

bool __thiscall
TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b855080

bool __thiscall
TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8550a0

bool __thiscall
TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8550c0

bool __thiscall
TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8550e0

bool __thiscall
TWeakObjectPtr<UWN_AbilityContext,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UWN_AbilityContext,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c850

bool __thiscall
TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c870

bool __thiscall
TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c890

bool __thiscall
TWeakObjectPtr<ADS_AI_GYM_SyncActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_AI_GYM_SyncActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c8b0

bool __thiscall
TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c8d0

bool __thiscall
TWeakObjectPtr<ADS_StuffGather,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_StuffGather,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c8f0

bool __thiscall
TWeakObjectPtr<ADS_StuffPortal,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_StuffPortal,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c910

bool __thiscall
TWeakObjectPtr<APawn,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<APawn,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c930

bool __thiscall
TWeakObjectPtr<UDS_AI_GYM_DebugScreen,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AI_GYM_DebugScreen,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c950

bool __thiscall
TWeakObjectPtr<UDS_AI_GYM_DebugWidget,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AI_GYM_DebugWidget,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c970

bool __thiscall
TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c990

bool __thiscall
TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c9b0

bool __thiscall
TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_IngameState,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c9d0

bool __thiscall
TWeakObjectPtr<UDS_MainPlayerAnim,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MainPlayerAnim,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89c9f0

bool __thiscall
TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89ca10

bool __thiscall
TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89ca30

bool __thiscall
TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89ca50

bool __thiscall
TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89ca70

bool __thiscall
TWeakObjectPtr<UUserWidget,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b89ca90

bool __thiscall
TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<AActor,bool> @ 14b8b0da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals<AActor,bool>
          (TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this,AActor *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14b8ef880

bool __thiscall
TWeakObjectPtr<ADS_CameraActor_NPCTalk,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_CameraActor_NPCTalk,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef8a0

bool __thiscall
TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef8c0

bool __thiscall
TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef8e0

bool __thiscall
TWeakObjectPtr<ADS_NPCBoss,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_NPCBoss,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef900

bool __thiscall
TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef920

bool __thiscall
TWeakObjectPtr<UDS_AnimInstanceBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AnimInstanceBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef940

bool __thiscall
TWeakObjectPtr<UDS_CameraComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CameraComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef960

bool __thiscall
TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef980

bool __thiscall
TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef9a0

bool __thiscall
TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef9c0

bool __thiscall
TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8ef9e0

bool __thiscall
TWeakObjectPtr<UDS_HelmetAnimInstance,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_HelmetAnimInstance,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8efa00

bool __thiscall
TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8efa20

bool __thiscall
TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b8efa40

bool __thiscall
TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b9c7fd0

bool __thiscall
TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b9c7ff0

bool __thiscall
TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b9c8010

bool __thiscall
TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14b9c8030

bool __thiscall
TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UDS_ChattingData,bool> @ 14b9d6ce0

bool __thiscall
TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>::UEOpEquals<UDS_ChattingData,bool>
          (TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14ba20500

bool __thiscall
TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba20520

bool __thiscall
TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba77f90

bool __thiscall
TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba77fb0

bool __thiscall
TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba77fd0

bool __thiscall
TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba77ff0

bool __thiscall
TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78010

bool __thiscall
TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78030

bool __thiscall
TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78050

bool __thiscall
TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78070

bool __thiscall
TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78090

bool __thiscall
TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba780b0

bool __thiscall
TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba780d0

bool __thiscall
TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba780f0

bool __thiscall
TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78110

bool __thiscall
TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78130

bool __thiscall
TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78150

bool __thiscall
TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78170

bool __thiscall
TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78190

bool __thiscall
TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba781b0

bool __thiscall
TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba781d0

bool __thiscall
TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba781f0

bool __thiscall
TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78210

bool __thiscall
TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78230

bool __thiscall
TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78250

bool __thiscall
TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78270

bool __thiscall
TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba78290

bool __thiscall
TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14ba782b0

bool __thiscall
TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfdb0

bool __thiscall
TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfdd0

bool __thiscall
TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfdf0

bool __thiscall
TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfe10

bool __thiscall
TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfe30

bool __thiscall
TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfe50

bool __thiscall
TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfe70

bool __thiscall
TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfe90

bool __thiscall
TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfeb0

bool __thiscall
TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfed0

bool __thiscall
TWeakObjectPtr<UDS_NormalAttackControlAbility,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NormalAttackControlAbility,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacfef0

bool __thiscall
TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacff10

bool __thiscall
TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacff30

bool __thiscall
TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacff50

bool __thiscall
TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacff70

bool __thiscall
TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacff90

bool __thiscall
TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacffb0

bool __thiscall
TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bacffd0

bool __thiscall
TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b760

bool __thiscall
TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b780

bool __thiscall
TWeakObjectPtr<UCurveFloat,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UCurveFloat,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b7a0

bool __thiscall
TWeakObjectPtr<UDS_ContentManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ContentManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b7c0

bool __thiscall
TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b7e0

bool __thiscall
TWeakObjectPtr<UDS_GameOptionData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GameOptionData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b800

bool __thiscall
TWeakObjectPtr<UDS_GameOptionManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GameOptionManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b820

bool __thiscall
TWeakObjectPtr<UDS_NiagaraComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NiagaraComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b840

bool __thiscall
TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b860

bool __thiscall
TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb3b880

bool __thiscall
TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UDS_W_WindowFrame,bool> @ 14bb4c4a0

bool __thiscall
TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals<UDS_W_WindowFrame,bool>
          (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UDS_WindowInfoBase,bool> @ 14bb4c4f0

bool __thiscall
TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals<UDS_WindowInfoBase,bool>
          (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14bb93c70

bool __thiscall
TWeakObjectPtr<ADS_CameraActor_CharacterViewer,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_CameraActor_CharacterViewer,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93c90

bool __thiscall
TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93cb0

bool __thiscall
TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_NetCharacter,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93cd0

bool __thiscall
TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93cf0

bool __thiscall
TWeakObjectPtr<UDS_NTPClient,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NTPClient,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93d10

bool __thiscall
TWeakObjectPtr<UDS_NetworkManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NetworkManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93d30

bool __thiscall
TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93d50

bool __thiscall
TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93d70

bool __thiscall
TWeakObjectPtr<UDS_ViewerCharacterInfo,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ViewerCharacterInfo,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93d90

bool __thiscall
TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93db0

bool __thiscall
TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93dd0

bool __thiscall
TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_W_Root,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bb93df0

bool __thiscall
TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UDS_RecvProcessBase,bool> @ 14bba7690

bool __thiscall
TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>::UEOpEquals<UDS_RecvProcessBase,bool>
          (TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UDS_SyncSendBase,bool> @ 14bba76e0

bool __thiscall
TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr>::UEOpEquals<UDS_SyncSendBase,bool>
          (TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_SyncSendBase,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14bbe35b0

bool __thiscall
TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bbe35d0

bool __thiscall
TWeakObjectPtr<ADS_AnimOpt_Spawner,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_AnimOpt_Spawner,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bbe35f0

bool __thiscall
TWeakObjectPtr<UButton,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UButton,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bbe3610

bool __thiscall
TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bbe3630

bool __thiscall
TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bbe3650

bool __thiscall
TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bbe3670

bool __thiscall
TWeakObjectPtr<USoundBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<USoundBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bbe3690

bool __thiscall
TWeakObjectPtr<UTextBlock,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UTextBlock,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20a70

bool __thiscall
TWeakObjectPtr<ADS_TransportActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_TransportActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20a90

bool __thiscall
TWeakObjectPtr<UDS_NPCBattleData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCBattleData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20ab0

bool __thiscall
TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20ad0

bool __thiscall
TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20af0

bool __thiscall
TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20b10

bool __thiscall
TWeakObjectPtr<UDS_StuffQuestData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_StuffQuestData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20b30

bool __thiscall
TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20b50

bool __thiscall
TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc20b70

bool __thiscall
TWeakObjectPtr<UMaterialParameterCollectionInstance,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UMaterialParameterCollectionInstance,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<ADS_EntityActorBase,bool> @ 14bc28990

bool __thiscall
TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>::UEOpEquals<ADS_EntityActorBase,bool>
          (TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *this,ADS_EntityActorBase *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  ADS_EntityActorBase *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ADS_EntityActorBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (ADS_EntityActorBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14bc696b0

bool __thiscall
TWeakObjectPtr<ADS_LevelTriggerActorBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_LevelTriggerActorBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc696d0

bool __thiscall
TWeakObjectPtr<AGeometryCollectionActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<AGeometryCollectionActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bc696f0

bool __thiscall
TWeakObjectPtr<UDS_CapsuleComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_CapsuleComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bccd9c0

bool __thiscall
TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bccd9e0

bool __thiscall
TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bccda00

bool __thiscall
TWeakObjectPtr<ADS_RenderRoom,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_RenderRoom,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bccda20

bool __thiscall
TWeakObjectPtr<UDS_EffectManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_EffectManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bccda40

bool __thiscall
TWeakObjectPtr<UDS_TriggerCore,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_TriggerCore,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bccda60

bool __thiscall
TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UDS_M_ItemImplBase_const_,bool> @ 14bce32f0

bool __thiscall
TWeakObjectPtr<UDS_M_ItemImplBase_const_,FWeakObjectPtr>::UEOpEquals<UDS_M_ItemImplBase_const_,bool>
          (TWeakObjectPtr<UDS_M_ItemImplBase_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_M_ItemImplBase_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UDS_M_ItemImplBase,bool> @ 14bce3340

bool __thiscall
TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals<UDS_M_ItemImplBase,bool>
          (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14bd24900

bool __thiscall
TWeakObjectPtr<UDS_M_GemSocketStatus,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_GemSocketStatus,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bd24920

bool __thiscall
TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_InventoryBag,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bd24940

bool __thiscall
TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bd24960

bool __thiscall
TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bd24980

bool __thiscall
TWeakObjectPtr<UDS_W_DragSlotVisual,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_W_DragSlotVisual,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bd8b940

bool __thiscall
TWeakObjectPtr<UDS_GameInstance,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_GameInstance,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bd8b960

bool __thiscall
TWeakObjectPtr<UDS_M_CommonIconTextButton,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_CommonIconTextButton,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bd8b980

bool __thiscall
TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bdeb790

bool __thiscall
TWeakObjectPtr<ADS_ViewerCharacter,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ADS_ViewerCharacter,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bdeb7b0

bool __thiscall
TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bdeb7d0

bool __thiscall
TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_ResultUI,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14be55160

bool __thiscall
TWeakObjectPtr<UDS_M_EventFilterSlot,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_EventFilterSlot,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14be55180

bool __thiscall
TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bebba80

bool __thiscall
TWeakObjectPtr<UDS_M_ItemImplRewardItemSlot,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_ItemImplRewardItemSlot,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bebbaa0

bool __thiscall
TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bf1dc20

bool __thiscall
TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NpcFunctionShop,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bf1dc40

bool __thiscall
TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UDS_DataBase,bool> @ 14bf3dad0

bool __thiscall
TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals<UDS_DataBase,bool>
          (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *this,UDS_DataBase *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UDS_DataBase *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UDS_VM_W_SkillInfo_SkillSlot,bool> @ 14bf3db80

bool __thiscall
TWeakObjectPtr<UDS_VM_W_SkillInfo_SkillSlot,FWeakObjectPtr>::
UEOpEquals<UDS_VM_W_SkillInfo_SkillSlot,bool>
          (TWeakObjectPtr<UDS_VM_W_SkillInfo_SkillSlot,FWeakObjectPtr> *this,
          UDS_VM_W_SkillInfo_SkillSlot *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UDS_VM_W_SkillInfo_SkillSlot *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 14bf84160

bool __thiscall
TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bf84180

bool __thiscall
TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bfdf0e0

bool __thiscall
TWeakObjectPtr<UDS_M_GameOptionDataBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_GameOptionDataBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bfdf100

bool __thiscall
TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_M_ItemList,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bfdf120

bool __thiscall
TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bfdf140

bool __thiscall
TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14bfdf160

bool __thiscall
TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UDS_CharInfoData,bool> @ 14c0683f0

bool __thiscall
TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals<UDS_CharInfoData,bool>
          (TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

