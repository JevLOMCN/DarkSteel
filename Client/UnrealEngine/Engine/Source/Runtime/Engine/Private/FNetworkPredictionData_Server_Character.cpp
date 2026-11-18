// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FNetworkPredictionData_Server_Character @ 1477ed850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNetworkPredictionData_Server_Character * __thiscall
FNetworkPredictionData_Server_Character::FNetworkPredictionData_Server_Character
          (FNetworkPredictionData_Server_Character *this,UCharacterMovementComponent *param_1)

{
  byte *pbVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  UClass *this_00;
  UWorld *pUVar4;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xf8;
  this->_padding_ = 0;
  (this->PendingAdjustment).NewLoc.field0_0x0._s_0.X = 0.0;
  (this->PendingAdjustment).NewLoc.field0_0x0._s_0.Y = 0.0;
  (this->PendingAdjustment).NewLoc.field0_0x0._s_0.Z = 0.0;
  (this->PendingAdjustment).NewVel.field0_0x0._s_0.X = 0.0;
  (this->PendingAdjustment).NewVel.field0_0x0._s_0.Y = 0.0;
  (this->PendingAdjustment).NewVel.field0_0x0._s_0.Z = 0.0;
  (this->PendingAdjustment).NewRot.Pitch = 0.0;
  (this->PendingAdjustment).NewRot.Yaw = 0.0;
  (this->PendingAdjustment).NewRot.Roll = 0.0;
  (this->PendingAdjustment).TimeStamp = 0.0;
  (this->PendingAdjustment).DeltaTime = 0.0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNetworkPredictionData_Server_Character__6B_;
  uVar3 = UE::Math::TVector<double>::DownVector.field0_0x0._s_0.Y;
  (this->PendingAdjustment).GravityDirection.field0_0x0._s_0.X =
       UE::Math::TVector<double>::DownVector.field0_0x0._s_0.X;
  (this->PendingAdjustment).GravityDirection.field0_0x0._s_0.Y = (double)uVar3;
  (this->PendingAdjustment).GravityDirection.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::DownVector.field0_0x0._s_0.Z;
  (this->PendingAdjustment).NewBase = (UPrimitiveComponent *)0x0;
  (this->PendingAdjustment).NewBaseBoneName.ComparisonIndex = 0;
  (this->PendingAdjustment).NewBaseBoneName.Number = 0;
  (this->PendingAdjustment).bAckGoodMove = false;
  (this->PendingAdjustment).bBaseRelativePosition = false;
  (this->PendingAdjustment).bBaseRelativeVelocity = false;
  (this->PendingAdjustment).MovementMode = '\0';
  this->bForceClientUpdate = 0;
  this->CurrentClientTimeStamp = 0.0;
  this->ServerAccumulatedClientTimeStamp = 0.0;
  this->LastUpdateTime = 0.0;
  this->ServerTimeStampLastServerMove = 0.0;
  this->MaxMoveDeltaTime = 0.125;
  this->LifetimeRawTimeDiscrepancy = 0.0;
  this->TimeDiscrepancy = 0.0;
  this->bResolvingTimeDiscrepancy = false;
  this->TimeDiscrepancyResolutionMoveDeltaOverride = 0.0;
  this->TimeDiscrepancyAccumulatedClientDeltasSinceLastServerTick = 0.0;
  this->WorldCreationTime = 0.0;
  this_00 = Z_Construct_UClass_AGameNetworkManager_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (((pUVar2 != (UObject *)0x0) &&
      (this->MaxMoveDeltaTime = *(float *)(pUVar2 + 0x14),
      *(float *)&pUVar2[0x13].field_0x18 < *(float *)(pUVar2 + 0x14))) &&
     (2 < (byte)LogNetPlayerMovement._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPlayerMovement);
  }
  pUVar4 = UActorComponent::GetWorld((UActorComponent *)param_1);
  if (pUVar4 != (UWorld *)0x0) {
    this->WorldCreationTime = (float)pUVar4->TimeSeconds;
    *(float *)&this->_padding_ = (float)pUVar4->TimeSeconds;
  }
  return this;
}

// ~FNetworkPredictionData_Server_Character @ 1477f39c0

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
FNetworkPredictionData_Server_Character::~FNetworkPredictionData_Server_Character
          (FNetworkPredictionData_Server_Character *this)

{
  this->_padding_ = (longlong)&___7FNetworkPredictionData_Server__6B_;
  return;
}

// GetBaseServerMoveDeltaTime @ 147834fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FNetworkPredictionData_Server_Character::GetBaseServerMoveDeltaTime
          (FNetworkPredictionData_Server_Character *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = CharacterMovementCVars::NetServerMaxMoveDeltaTimeScalar;
  if (CharacterMovementCVars::NetServerMaxMoveDeltaTimeScalar <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  fVar2 = param_1 - this->CurrentClientTimeStamp;
  fVar1 = fVar1 * this->MaxMoveDeltaTime * param_2;
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// GetServerMoveDeltaTime @ 14783d5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FNetworkPredictionData_Server_Character::GetServerMoveDeltaTime
          (FNetworkPredictionData_Server_Character *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (this->bResolvingTimeDiscrepancy != false) {
    return this->TimeDiscrepancyResolutionMoveDeltaOverride;
  }
  fVar1 = CharacterMovementCVars::NetServerMaxMoveDeltaTimeScalar;
  if (CharacterMovementCVars::NetServerMaxMoveDeltaTimeScalar <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  fVar2 = param_1 - this->CurrentClientTimeStamp;
  fVar1 = fVar1 * this->MaxMoveDeltaTime * param_2;
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// Serialize @ 147864500

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
FNetworkPredictionData_Server_Character::Serialize
          (FNetworkPredictionData_Server_Character *this,FArchive *param_1)

{
  return;
}

