// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FCharacterNetworkMoveData @ 1477eb7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCharacterNetworkMoveData * __thiscall
FCharacterNetworkMoveData::FCharacterNetworkMoveData(FCharacterNetworkMoveData *this)

{
  this->_padding_ = (longlong)&___7FCharacterNetworkMoveData__6B_;
  this->NetworkMoveType = NewMove;
  this->TimeStamp = 0.0;
  *(undefined8 *)&this->Acceleration = 0;
  *(undefined8 *)&(this->Acceleration).field_0x8 = 0;
  *(undefined8 *)&(this->Acceleration).field_0x10 = 0;
  *(undefined8 *)&this->Location = 0;
  *(undefined8 *)&(this->Location).field_0x8 = 0;
  *(undefined8 *)&(this->Location).field_0x10 = 0;
  (this->ControlRotation).Pitch = 0.0;
  (this->ControlRotation).Yaw = 0.0;
  (this->ControlRotation).Roll = 0.0;
  this->CompressedMoveFlags = '\0';
  this->MovementMode = '\0';
  this->MovementBase = (UPrimitiveComponent *)0x0;
  (this->MovementBaseBoneName).ComparisonIndex = 0;
  (this->MovementBaseBoneName).Number = 0;
  return this;
}

// ~FCharacterNetworkMoveData @ 1477f30f0

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
FCharacterNetworkMoveData::~FCharacterNetworkMoveData(FCharacterNetworkMoveData *this)

{
  this->_padding_ = (longlong)&___7FCharacterNetworkMoveData__6B_;
  return;
}

// ClientFillNetworkMoveData @ 147813bc0

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
FCharacterNetworkMoveData::ClientFillNetworkMoveData
          (FCharacterNetworkMoveData *this,FSavedMove_Character *param_1,ENetworkMoveType param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uchar uVar10;
  bool bVar11;
  UPrimitiveComponent *pUVar12;
  TVector<double>_u_0 *pTVar13;
  FName FVar14;
  longlong lVar15;
  TVector<double>_u_0 local_38;
  
  this->NetworkMoveType = param_2;
  this->TimeStamp = param_1->TimeStamp;
  uVar3 = *(undefined4 *)((longlong)&(param_1->SavedControlRotation).Pitch + 4);
  uVar4 = *(undefined4 *)&(param_1->SavedControlRotation).Yaw;
  uVar5 = *(undefined4 *)((longlong)&(param_1->SavedControlRotation).Yaw + 4);
  *(undefined4 *)&(this->ControlRotation).Pitch =
       *(undefined4 *)&(param_1->SavedControlRotation).Pitch;
  *(undefined4 *)((longlong)&(this->ControlRotation).Pitch + 4) = uVar3;
  *(undefined4 *)&(this->ControlRotation).Yaw = uVar4;
  *(undefined4 *)((longlong)&(this->ControlRotation).Yaw + 4) = uVar5;
  (this->ControlRotation).Roll = (param_1->SavedControlRotation).Roll;
  uVar10 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  this->CompressedMoveFlags = uVar10;
  this->MovementMode = param_1->EndPackedMovementMode;
  pUVar12 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(param_1->EndBase).WeakPtr);
  bVar11 = MovementBaseUtility::IsDynamicBase(pUVar12);
  if ((CharacterMovementCVars::NetUseBaseRelativeAcceleration == 0) || (!bVar11)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (bVar11) {
    pTVar13 = &local_38;
    local_38._s_0.X = (param_1->SavedRelativeLocation).field0_0x0._s_0.X;
    local_38._s_0.Y = (param_1->SavedRelativeLocation).field0_0x0._s_0.Y;
    local_38._s_0.Z = (param_1->SavedRelativeLocation).field0_0x0._s_0.Z;
  }
  else {
    pTVar13 = &FRepMovement::RebaseOntoZeroOrigin
                         ((TVector<double> *)&local_38._s_0,&param_1->SavedLocation,
                          (UActorComponent *)
                          (param_1->CharacterOwner->CharacterMovement).field0_0x0.DebugPtr)->
               field0_0x0;
  }
  dVar6 = (pTVar13->_s_0).Y;
  dVar1 = (pTVar13->_s_0).Z;
  lVar15 = 0x2a0;
  if (!bVar9) {
    lVar15 = 0x328;
  }
  uVar2 = *(undefined8 *)(&param_1->field_0x10 + lVar15);
  uVar7 = *(undefined8 *)(&param_1->field_0x0 + lVar15);
  uVar8 = *(undefined8 *)((longlong)(&param_1->field_0x0 + lVar15) + 8);
  *(double *)&this->Location = (((TVector<double>_u_0 *)&(pTVar13->_s_0).X)->_s_0).X;
  *(double *)&(this->Location).field_0x8 = dVar6;
  *(double *)&(this->Location).field_0x10 = dVar1;
  *(undefined8 *)&this->Acceleration = uVar7;
  *(undefined8 *)&(this->Acceleration).field_0x8 = uVar8;
  *(undefined8 *)&(this->Acceleration).field_0x10 = uVar2;
  if ((bVar11) || (bVar9)) {
    this->MovementBase = pUVar12;
    FVar14 = param_1->EndBoneName;
  }
  else {
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
    this->MovementBase = (UPrimitiveComponent *)0x0;
  }
  this->MovementBaseBoneName = FVar14;
  return;
}

// Serialize @ 147863850

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

bool __thiscall
FCharacterNetworkMoveData::Serialize
          (FCharacterNetworkMoveData *this,UCharacterMovementComponent *param_1,FArchive *param_2,
          UPackageMap *param_3,ENetworkMoveType param_4)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  char local_res8 [8];
  bool local_res18 [16];
  uchar local_68 [4];
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58 [5];
  FName local_44;
  
  pfVar1 = &this->TimeStamp;
  this->NetworkMoveType = param_4;
  bVar9 = (bool)((byte)param_2->field_0x28 >> 2 & 1);
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FEngineNetworkCustomVersion::Guid);
  uVar6 = (**(code **)(*(longlong *)param_2 + 0x48))(param_2);
  if (uVar6 < 0x17) {
LAB_147863925:
    if ((param_2->field_0x28 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetSerialization.h"
                         ,0x113,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_64 = 0;
    (**(code **)(*(longlong *)param_2 + 0x198))(param_2,&local_64,0x18);
    iVar8 = 1 << ((char)local_64 + 1U & 0x1f);
    iVar7 = 1 << ((char)local_64 + 2U & 0x1f);
    local_58[0] = 0;
    local_60 = 0;
    local_5c = 0;
    (**(code **)(*(longlong *)param_2 + 0x198))(param_2,local_58,iVar7);
    (**(code **)(*(longlong *)param_2 + 0x198))(param_2,&local_60,iVar7);
    (**(code **)(*(longlong *)param_2 + 0x198))(param_2,&local_5c,iVar7);
    fVar10 = (float)(local_60 - iVar8) * __real_3dcccccd;
    fVar11 = (float)(local_5c - iVar8) * __real_3dcccccd;
    *(double *)&this->Acceleration = (double)((float)(local_58[0] - iVar8) * __real_3dcccccd);
    *(double *)&(this->Acceleration).field_0x8 = (double)fVar10;
    *(double *)&(this->Acceleration).field_0x10 = (double)fVar11;
  }
  else {
    iVar7 = (**(code **)(*(longlong *)param_2 + 0x48))(param_2);
    if (iVar7 == 0x1a) goto LAB_147863925;
    if ((param_2->field_0x28 & 1) == 0) {
      UE::Net::WriteQuantizedVector(10,(TVector<double> *)&this->Acceleration,param_2);
    }
    else {
      UE::Net::ReadQuantizedVector(10,(TVector<double> *)&this->Acceleration,param_2);
    }
  }
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FEngineNetworkCustomVersion::Guid);
  uVar6 = (**(code **)(*(longlong *)param_2 + 0x48))(param_2);
  if (uVar6 < 0x17) {
LAB_147863a71:
    if ((param_2->field_0x28 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetSerialization.h"
                         ,0x113,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_58[1] = 0;
    (**(code **)(*(longlong *)param_2 + 0x198))(param_2,local_58 + 1,0x1e);
    iVar8 = 1 << ((char)local_58[1] + 1U & 0x1f);
    iVar7 = 1 << ((char)local_58[1] + 2U & 0x1f);
    local_58[4] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    (**(code **)(*(longlong *)param_2 + 0x198))(param_2,local_58 + 4,iVar7);
    (**(code **)(*(longlong *)param_2 + 0x198))(param_2,local_58 + 2,iVar7);
    (**(code **)(*(longlong *)param_2 + 0x198))(param_2,local_58 + 3,iVar7);
    fVar10 = (float)(local_58[2] - iVar8) * __real_3c23d70a;
    fVar11 = (float)(local_58[3] - iVar8) * __real_3c23d70a;
    local_res18[0] = true;
    *(double *)&this->Location = (double)((float)(local_58[4] - iVar8) * __real_3c23d70a);
    *(double *)&(this->Location).field_0x8 = (double)fVar10;
    *(double *)&(this->Location).field_0x10 = (double)fVar11;
  }
  else {
    iVar7 = (**(code **)(*(longlong *)param_2 + 0x48))(param_2);
    if (iVar7 == 0x1a) goto LAB_147863a71;
    if ((param_2->field_0x28 & 1) == 0) {
      local_res18[0] = UE::Net::WriteQuantizedVector(100,(TVector<double> *)&this->Location,param_2)
      ;
    }
    else {
      local_res18[0] = UE::Net::ReadQuantizedVector(100,(TVector<double> *)&this->Location,param_2);
    }
  }
  UE::Math::TRotator<double>::NetSerialize(&this->ControlRotation,param_2,param_3,local_res18);
  local_68[0] = '\0';
  SerializeOptionalValue<unsigned_char>(bVar9,param_2,&this->CompressedMoveFlags,local_68);
  if ((bVar9 == false) || (this->MovementBase == (UPrimitiveComponent *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  param_4 = CONCAT31(param_4._1_3_,uVar5);
  (**(code **)(*(longlong *)param_2 + 400))(param_2,&param_4,1);
  if ((undefined1)param_4 == NewMove) {
    if (bVar9 != false) goto LAB_147863beb;
    this->MovementBase = (UPrimitiveComponent *)0x0;
  }
  else {
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&this->MovementBase);
LAB_147863beb:
    if ((bVar9 != false) && (this->MovementBaseBoneName != (FName)0x0)) {
      local_res8[0] = '\x01';
      goto LAB_147863c18;
    }
  }
  local_res8[0] = '\0';
LAB_147863c18:
  local_44.ComparisonIndex.Value = 0;
  local_44.Number = 0;
  (**(code **)(*(longlong *)param_2 + 400))(param_2,local_res8,1);
  if (local_res8[0] == '\0') {
    if (bVar9 == false) {
      this->MovementBaseBoneName = local_44;
    }
  }
  else {
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&this->MovementBaseBoneName);
  }
  local_68[1] = 1;
  SerializeOptionalValue<unsigned_char>(bVar9,param_2,&this->MovementMode,local_68 + 1);
  return (bool)((byte)~param_2->field_0x29 >> 1 & 1);
}

