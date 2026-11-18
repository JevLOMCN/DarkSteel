// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// CanJump @ 1476f5cb0

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
FCharacterAsyncInput::CanJump
          (FCharacterAsyncInput *this,FCharacterMovementComponentAsyncInput *param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  FCharacterAsyncOutput *pFVar4;
  FCharacterAsyncInput *pFVar5;
  byte bVar6;
  char cVar7;
  
  bVar2 = param_2->bIsCrouched;
  bVar6 = (**(code **)(param_1->_padding_ + 0x248))(param_1,param_2);
  if ((bVar6 & bVar2 == false) == 0) {
    return false;
  }
  pFVar4 = (param_2->CharacterOutput).Ptr;
  if (pFVar4->bWasJumping != false) {
    pFVar5 = (param_1->CharacterInput).Ptr;
    fVar1 = pFVar5->JumpMaxHoldTime;
    if (0.0 < fVar1) {
      if (((pFVar4->bPressedJump != false) &&
          (pFVar4->JumpKeyHoldTime <= fVar1 && fVar1 != pFVar4->JumpKeyHoldTime)) &&
         ((iVar3 = pFVar5->JumpMaxCount, pFVar4->JumpCurrentCount < iVar3 ||
          (pFVar4->JumpCurrentCount == iVar3)))) {
        return true;
      }
      return false;
    }
  }
  if (pFVar4->JumpCurrentCount == 0) {
    cVar7 = (**(code **)(param_1->_padding_ + 0x268))(param_1,param_2);
    if (cVar7 != '\0') {
      return ((param_2->CharacterOutput).Ptr)->JumpCurrentCount + 1 <
             ((param_1->CharacterInput).Ptr)->JumpMaxCount;
    }
  }
  return ((param_2->CharacterOutput).Ptr)->JumpCurrentCount <
         ((param_1->CharacterInput).Ptr)->JumpMaxCount;
}

// CheckJumpInput @ 1476f6fe0

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
FCharacterAsyncInput::CheckJumpInput
          (FCharacterAsyncInput *this,float param_1,FCharacterMovementComponentAsyncInput *param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  int *piVar1;
  FCharacterAsyncOutput *pFVar2;
  char cVar3;
  bool bVar4;
  
  pFVar2 = (param_3->CharacterOutput).Ptr;
  pFVar2->JumpCurrentCountPreJump = pFVar2->JumpCurrentCount;
  pFVar2 = (param_3->CharacterOutput).Ptr;
  if (pFVar2->bPressedJump != false) {
    if ((pFVar2->JumpCurrentCount == 0) &&
       (cVar3 = (**(code **)(param_2->_padding_ + 0x268))(param_2,param_3), cVar3 != '\0')) {
      piVar1 = &((param_3->CharacterOutput).Ptr)->JumpCurrentCount;
      *piVar1 = *piVar1 + 1;
    }
    cVar3 = (**(code **)(this->_padding_ + 0x20))(this,param_2,param_3);
    if ((cVar3 == '\0') ||
       (cVar3 = (**(code **)(param_2->_padding_ + 0x250))(param_2,0,param_3), cVar3 == '\0')) {
      bVar4 = false;
    }
    else {
      pFVar2 = (param_3->CharacterOutput).Ptr;
      bVar4 = true;
      if (pFVar2->bWasJumping == false) {
        piVar1 = &pFVar2->JumpCurrentCount;
        *piVar1 = *piVar1 + 1;
        ((param_3->CharacterOutput).Ptr)->JumpForceTimeRemaining = this->JumpMaxHoldTime;
      }
    }
    ((param_3->CharacterOutput).Ptr)->bWasJumping = bVar4;
    return;
  }
  return;
}

// ClearJumpInput @ 1476f74b0

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
FCharacterAsyncInput::ClearJumpInput
          (FCharacterAsyncInput *this,float param_1,FCharacterMovementComponentAsyncInput *param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  float *pfVar1;
  FCharacterAsyncOutput *pFVar2;
  
  pFVar2 = (param_3->CharacterOutput).Ptr;
  if (pFVar2->bPressedJump == false) {
    pFVar2->JumpForceTimeRemaining = 0.0;
    ((param_3->CharacterOutput).Ptr)->bWasJumping = false;
  }
  else {
    pFVar2->JumpKeyHoldTime = param_1 + pFVar2->JumpKeyHoldTime;
    pFVar2 = (param_3->CharacterOutput).Ptr;
    pfVar1 = &pFVar2->JumpKeyHoldTime;
    if (this->JumpMaxHoldTime < *pfVar1 || this->JumpMaxHoldTime == *pfVar1) {
      pFVar2->bClearJumpInput = true;
      ((param_3->CharacterOutput).Ptr)->bPressedJump = false;
      return;
    }
  }
  return;
}

// FaceRotation @ 147703ce0

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
FCharacterAsyncInput::FaceRotation
          (FCharacterAsyncInput *this,TRotator<double> *param_1,float param_2,
          FCharacterMovementComponentAsyncInput *param_3,
          FCharacterMovementComponentAsyncOutput *param_4)

{
  double dVar1;
  FCharacterAsyncOutput *pFVar2;
  double dVar3;
  
  if (((this->bUseControllerRotationPitch != false) || (this->bUseControllerRotationYaw != false))
     || (this->bUseControllerRotationRoll != false)) {
    pFVar2 = (param_4->CharacterOutput).Ptr;
    if (this->bUseControllerRotationPitch == false) {
      param_1->Pitch = (pFVar2->Rotation).Pitch;
    }
    if (this->bUseControllerRotationYaw == false) {
      param_1->Yaw = (pFVar2->Rotation).Yaw;
    }
    if (this->bUseControllerRotationRoll == false) {
      param_1->Roll = (pFVar2->Rotation).Roll;
    }
    dVar3 = param_1->Yaw;
    dVar1 = param_1->Roll;
    (pFVar2->Rotation).Pitch = param_1->Pitch;
    (pFVar2->Rotation).Yaw = dVar3;
    (pFVar2->Rotation).Roll = dVar1;
  }
  return;
}

// OnMovementModeChanged @ 14771c580

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
FCharacterAsyncInput::OnMovementModeChanged
          (FCharacterAsyncInput *this,EMovementMode param_1,
          FCharacterMovementComponentAsyncInput *param_2,
          FCharacterMovementComponentAsyncOutput *param_3,uchar param_4)

{
  char cVar1;
  
  if ((((param_3->CharacterOutput).Ptr)->bPressedJump != false) &&
     (cVar1 = (**(code **)(param_2->_padding_ + 0x268))(param_2,param_3), cVar1 != '\0')) {
    return;
  }
  (**(code **)(this->_padding_ + 0x28))(this,param_2,param_3);
  return;
}

// ResetJumpState @ 147724d30

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
FCharacterAsyncInput::ResetJumpState
          (FCharacterAsyncInput *this,FCharacterMovementComponentAsyncInput *param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  FCharacterAsyncOutput *pFVar1;
  char cVar2;
  
  pFVar1 = (param_2->CharacterOutput).Ptr;
  if (pFVar1->bPressedJump == true) {
    pFVar1->bClearJumpInput = true;
  }
  ((param_2->CharacterOutput).Ptr)->bPressedJump = false;
  ((param_2->CharacterOutput).Ptr)->bWasJumping = false;
  ((param_2->CharacterOutput).Ptr)->JumpKeyHoldTime = 0.0;
  ((param_2->CharacterOutput).Ptr)->JumpForceTimeRemaining = 0.0;
  cVar2 = (**(code **)(param_1->_padding_ + 0x268))(param_1,param_2);
  if (cVar2 == '\0') {
    ((param_2->CharacterOutput).Ptr)->JumpCurrentCount = 0;
    ((param_2->CharacterOutput).Ptr)->JumpCurrentCountPreJump = 0;
  }
  return;
}

// ~FCharacterAsyncInput @ 1477f3000

void __thiscall FCharacterAsyncInput::~FCharacterAsyncInput(FCharacterAsyncInput *this)

{
  this->_padding_ = (longlong)&___7FCharacterAsyncInput__6B_;
  return;
}

