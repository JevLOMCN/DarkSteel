// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FCharacterNetworkMoveDataContainer @ 1477eb830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCharacterNetworkMoveDataContainer * __thiscall
FCharacterNetworkMoveDataContainer::FCharacterNetworkMoveDataContainer
          (FCharacterNetworkMoveDataContainer *this)

{
  this->bHasPendingMove = false;
  this->bIsDualHybridRootMotionMove = false;
  this->bHasOldMove = false;
  this->bDisableCombinedScopedMove = false;
  this->_padding_ = (longlong)&___7FCharacterNetworkMoveDataContainer__6B_;
  this->BaseDefaultMoveData[0]._padding_ = (longlong)&___7FCharacterNetworkMoveData__6B_;
  this->BaseDefaultMoveData[0].NetworkMoveType = NewMove;
  this->BaseDefaultMoveData[0].TimeStamp = 0.0;
  *(undefined8 *)&this->BaseDefaultMoveData[0].Acceleration = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[0].Acceleration.field_0x8 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[0].Acceleration.field_0x10 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[0].Location = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[0].Location.field_0x8 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[0].Location.field_0x10 = 0;
  this->BaseDefaultMoveData[0].ControlRotation.Pitch = 0.0;
  this->BaseDefaultMoveData[0].ControlRotation.Yaw = 0.0;
  this->BaseDefaultMoveData[0].ControlRotation.Roll = 0.0;
  this->BaseDefaultMoveData[0].CompressedMoveFlags = '\0';
  this->BaseDefaultMoveData[0].MovementMode = '\0';
  this->BaseDefaultMoveData[0].MovementBase = (UPrimitiveComponent *)0x0;
  this->BaseDefaultMoveData[0].MovementBaseBoneName.ComparisonIndex = 0;
  this->BaseDefaultMoveData[0].MovementBaseBoneName.Number = 0;
  this->BaseDefaultMoveData[1]._padding_ = (longlong)&___7FCharacterNetworkMoveData__6B_;
  this->BaseDefaultMoveData[1].NetworkMoveType = NewMove;
  this->BaseDefaultMoveData[1].TimeStamp = 0.0;
  *(undefined8 *)&this->BaseDefaultMoveData[1].Acceleration = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[1].Acceleration.field_0x8 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[1].Acceleration.field_0x10 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[1].Location = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[1].Location.field_0x8 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[1].Location.field_0x10 = 0;
  this->BaseDefaultMoveData[1].ControlRotation.Pitch = 0.0;
  this->BaseDefaultMoveData[1].ControlRotation.Yaw = 0.0;
  this->BaseDefaultMoveData[1].ControlRotation.Roll = 0.0;
  this->BaseDefaultMoveData[1].CompressedMoveFlags = '\0';
  this->BaseDefaultMoveData[1].MovementMode = '\0';
  this->BaseDefaultMoveData[1].MovementBase = (UPrimitiveComponent *)0x0;
  this->BaseDefaultMoveData[1].MovementBaseBoneName.ComparisonIndex = 0;
  this->BaseDefaultMoveData[1].MovementBaseBoneName.Number = 0;
  this->BaseDefaultMoveData[2]._padding_ = (longlong)&___7FCharacterNetworkMoveData__6B_;
  this->BaseDefaultMoveData[2].NetworkMoveType = NewMove;
  this->BaseDefaultMoveData[2].TimeStamp = 0.0;
  *(undefined8 *)&this->BaseDefaultMoveData[2].Acceleration = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[2].Acceleration.field_0x8 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[2].Acceleration.field_0x10 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[2].Location = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[2].Location.field_0x8 = 0;
  *(undefined8 *)&this->BaseDefaultMoveData[2].Location.field_0x10 = 0;
  this->BaseDefaultMoveData[2].ControlRotation.Pitch = 0.0;
  this->BaseDefaultMoveData[2].ControlRotation.Yaw = 0.0;
  this->BaseDefaultMoveData[2].ControlRotation.Roll = 0.0;
  this->BaseDefaultMoveData[2].CompressedMoveFlags = '\0';
  this->BaseDefaultMoveData[2].MovementMode = '\0';
  this->BaseDefaultMoveData[2].MovementBase = (UPrimitiveComponent *)0x0;
  this->BaseDefaultMoveData[2].MovementBaseBoneName.ComparisonIndex = 0;
  this->BaseDefaultMoveData[2].MovementBaseBoneName.Number = 0;
  this->OldMoveData = this->BaseDefaultMoveData + 2;
  this->NewMoveData = this->BaseDefaultMoveData;
  this->PendingMoveData = this->BaseDefaultMoveData + 1;
  return this;
}

// ~FCharacterNetworkMoveDataContainer @ 1477f3110

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
FCharacterNetworkMoveDataContainer::~FCharacterNetworkMoveDataContainer
          (FCharacterNetworkMoveDataContainer *this)

{
  this->_padding_ = (longlong)&___7FCharacterNetworkMoveDataContainer__6B_;
  this->BaseDefaultMoveData[2]._padding_ = (longlong)&___7FCharacterNetworkMoveData__6B_;
  this->BaseDefaultMoveData[1]._padding_ = (longlong)&___7FCharacterNetworkMoveData__6B_;
  this->BaseDefaultMoveData[0]._padding_ = (longlong)&___7FCharacterNetworkMoveData__6B_;
  return;
}

// ClientFillNetworkMoveData @ 147813d00

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
FCharacterNetworkMoveDataContainer::ClientFillNetworkMoveData
          (FCharacterNetworkMoveDataContainer *this,FSavedMove_Character *param_1,
          FSavedMove_Character *param_2,FSavedMove_Character *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  this->bDisableCombinedScopedMove = false;
  if (param_1 == (FSavedMove_Character *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6623897678575032947>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
                       ,0x258d,"ClientNewMove");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(this->NewMoveData->_padding_ + 8))(this->NewMoveData,param_1,0);
    this->bDisableCombinedScopedMove =
         (bool)(this->bDisableCombinedScopedMove | param_1->bForceNoCombine);
  }
  this->bHasPendingMove = param_2 != (FSavedMove_Character *)0x0;
  if (param_2 == (FSavedMove_Character *)0x0) {
    this->bIsDualHybridRootMotionMove = false;
  }
  else {
    (**(code **)(this->PendingMoveData->_padding_ + 8))(this->PendingMoveData,param_2,1);
    bVar2 = TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>::UEOpEquals
                      (&param_2->RootMotionMontage,(void *)0x0);
    if ((bVar2) && (param_1 != (FSavedMove_Character *)0x0)) {
      bVar2 = TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>::UEOpEquals
                        (&param_1->RootMotionMontage,(void *)0x0);
      if (!bVar2) {
        this->bIsDualHybridRootMotionMove = true;
        this->bDisableCombinedScopedMove =
             (bool)(this->bDisableCombinedScopedMove | param_2->bForceNoCombine);
        goto LAB_147813de3;
      }
    }
    this->bIsDualHybridRootMotionMove = false;
    this->bDisableCombinedScopedMove =
         (bool)(this->bDisableCombinedScopedMove | param_2->bForceNoCombine);
  }
LAB_147813de3:
  this->bHasOldMove = param_3 != (FSavedMove_Character *)0x0;
  if (param_3 != (FSavedMove_Character *)0x0) {
    (**(code **)(this->OldMoveData->_padding_ + 8))(this->OldMoveData,param_3,2);
  }
  return;
}

// Serialize @ 147863c90

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
FCharacterNetworkMoveDataContainer::Serialize
          (FCharacterNetworkMoveDataContainer *this,UCharacterMovementComponent *param_1,
          FArchive *param_2,UPackageMap *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (((this->NewMoveData == (FCharacterNetworkMoveData *)0x0) ||
      (this->PendingMoveData == (FCharacterNetworkMoveData *)0x0)) ||
     (this->OldMoveData == (FCharacterNetworkMoveData *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMoveData && PendingMoveData && OldMoveData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
                       ,0x25aa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(this->NewMoveData->_padding_ + 0x10))
                    (this->NewMoveData,param_1,param_2,param_3,0);
  if (cVar4 == '\0') {
LAB_147863dc2:
    bVar2 = false;
  }
  else {
    (**(code **)(*(longlong *)param_2 + 400))(param_2,&this->bHasPendingMove,1);
    if (this->bHasPendingMove != false) {
      (**(code **)(*(longlong *)param_2 + 400))(param_2,&this->bIsDualHybridRootMotionMove,1);
      cVar4 = (**(code **)(this->PendingMoveData->_padding_ + 0x10))
                        (this->PendingMoveData,param_1,param_2,param_3,1);
      if (cVar4 == '\0') goto LAB_147863dc2;
    }
    (**(code **)(*(longlong *)param_2 + 400))(param_2,&this->bHasOldMove,1);
    if (this->bHasOldMove != false) {
      cVar4 = (**(code **)(this->OldMoveData->_padding_ + 0x10))
                        (this->OldMoveData,param_1,param_2,param_3,2);
      if (cVar4 == '\0') goto LAB_147863dc2;
    }
    (**(code **)(*(longlong *)param_2 + 400))(param_2,&this->bDisableCombinedScopedMove,1);
    bVar2 = (bool)((byte)~param_2->field_0x29 >> 1 & 1);
  }
  return bVar2;
}

