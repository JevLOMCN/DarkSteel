// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FillFrom @ 147393890

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
FRepMovement::FillFrom(FRepMovement *this,FRigidBodyState *param_1,AActor *param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  double dVar3;
  TVector<double> *pTVar4;
  TRotator<double> *pTVar5;
  TRotator<double> local_28;
  
  pTVar4 = RebaseOntoZeroOrigin((TVector<double> *)&local_28,(TVector<double> *)param_1,param_2);
  dVar3 = (pTVar4->field0_0x0)._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar3;
  (this->Location).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  pTVar5 = UE::Math::TQuat<double>::Rotator(&param_1->Quaternion,&local_28);
  dVar3 = pTVar5->Yaw;
  (this->Rotation).Pitch = pTVar5->Pitch;
  (this->Rotation).Yaw = dVar3;
  (this->Rotation).Roll = pTVar5->Roll;
  dVar3 = *(double *)&(param_1->LinVel).field_0x8;
  (this->LinearVelocity).field0_0x0._s_0.X = *(double *)&param_1->LinVel;
  (this->LinearVelocity).field0_0x0._s_0.Y = dVar3;
  (this->LinearVelocity).field0_0x0._s_0.Z = *(double *)&(param_1->LinVel).field_0x10;
  dVar3 = *(double *)&(param_1->AngVel).field_0x8;
  (this->AngularVelocity).field0_0x0._s_0.X = *(double *)&param_1->AngVel;
  (this->AngularVelocity).field0_0x0._s_0.Y = dVar3;
  (this->AngularVelocity).field0_0x0._s_0.Z = *(double *)&(param_1->AngVel).field_0x10;
  bVar2 = param_1->Flags;
  this->ServerFrame = param_3;
  this->field_0x78 = (this->bSimulatedPhysicSleep ^ bVar2) & 1 ^ this->field_0x78 | 2;
  return;
}

// StaticStruct @ 147ba7910

UScriptStruct * __cdecl FRepMovement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRepMovement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRepMovement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRepMovement,(UObject *)pUVar1,L"RepMovement");
  }
  return Z_Registration_Info_UScriptStruct_FRepMovement.OuterSingleton;
}

// FRepMovement @ 147bb9530

FRepMovement * __thiscall FRepMovement::FRepMovement(FRepMovement *this)

{
  undefined1 *puVar1;
  
  this->bSimulatedPhysicSleep = '\0';
  this->bRepAcceleration = '\0';
  this->bRepPhysics = '\0';
  (this->LinearVelocity).field0_0x0._s_0.X = 0.0;
  (this->LinearVelocity).field0_0x0._s_0.Y = 0.0;
  (this->LinearVelocity).field0_0x0._s_0.Z = 0.0;
  (this->AngularVelocity).field0_0x0._s_0.X = 0.0;
  (this->AngularVelocity).field0_0x0._s_0.Y = 0.0;
  (this->AngularVelocity).field0_0x0._s_0.Z = 0.0;
  (this->Location).field0_0x0._s_0.X = 0.0;
  (this->Location).field0_0x0._s_0.Y = 0.0;
  (this->Location).field0_0x0._s_0.Z = 0.0;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  (this->Acceleration).field0_0x0._s_0.X = 0.0;
  (this->Acceleration).field0_0x0._s_0.Y = 0.0;
  (this->Acceleration).field0_0x0._s_0.Z = 0.0;
  this->ServerFrame = 0;
  this->LocationQuantizationLevel = RoundWholeNumber;
  this->VelocityQuantizationLevel = RoundWholeNumber;
  this->RotationQuantizationLevel = ByteComponents;
  this->ServerPhysicsHandle = -1;
  return this;
}

// NetSerialize @ 147bf3370

bool __thiscall
FRepMovement::NetSerialize(FRepMovement *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  byte local_res8 [8];
  uint local_res10 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar7 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (0x18 < uVar7) {
    iVar8 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if (iVar8 != 0x1a) {
      cVar10 = '\x01';
      goto LAB_147bf33c4;
    }
  }
  cVar10 = '\0';
LAB_147bf33c4:
  bVar9 = 0;
  if (0 < this->ServerFrame) {
    bVar9 = 4;
  }
  bVar2 = 0;
  if (this->ServerPhysicsHandle != -1) {
    bVar2 = 8;
  }
  local_res8[0] = bVar9 | bVar2 | this->field_0x78 & 3;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8,cVar10 * '\x02' + '\x02');
  this->field_0x78 = this->field_0x78 & 0xfc | local_res8[0] & 3;
  if (((local_res8[0] & 4) == 0) || (cVar10 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((local_res8[0] & 8) == 0) || (cVar10 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  *param_3 = true;
  bVar3 = SerializeQuantizedVector(this,param_1,&this->Location,this->LocationQuantizationLevel);
  *param_3 = bVar3;
  if (this->RotationQuantizationLevel == ByteComponents) {
    UE::Math::TRotator<double>::SerializeCompressed(&this->Rotation,param_1);
  }
  else if (this->RotationQuantizationLevel == ShortComponents) {
    UE::Math::TRotator<double>::SerializeCompressedShort(&this->Rotation,param_1);
  }
  bVar3 = *param_3;
  bVar4 = SerializeQuantizedVector
                    (this,param_1,&this->LinearVelocity,this->VelocityQuantizationLevel);
  *param_3 = (bool)(bVar4 & bVar3);
  if (this->bRepPhysics != '\0') {
    bVar5 = SerializeQuantizedVector
                      (this,param_1,&this->AngularVelocity,this->VelocityQuantizationLevel);
    *param_3 = (bool)(bVar5 & bVar4 & bVar3);
  }
  if (bVar1) {
    local_res10[0] = this->ServerFrame;
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
    this->ServerFrame = local_res10[0];
  }
  if (bVar6) {
    local_res10[0] = this->ServerPhysicsHandle;
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res10);
    this->ServerPhysicsHandle = local_res10[0];
  }
  uVar7 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (uVar7 < 0x23) {
    if ((param_1->field_0x28 & 1) != 0) {
      this->bRepAcceleration = '\0';
    }
  }
  else {
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,(byte)this->field_0x78 >> 2) & 0xffffff01;
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
    this->bRepAcceleration = local_res10[0];
    if ((local_res10[0] & 1) != 0) {
      bVar1 = *param_3;
      bVar6 = SerializeQuantizedVector
                        (this,param_1,&this->Acceleration,this->VelocityQuantizationLevel);
      *param_3 = (bool)(bVar6 & bVar1);
    }
  }
  return true;
}

// RebaseOntoLocalOrigin @ 147bf9960

TVector<double> * __cdecl
FRepMovement::RebaseOntoLocalOrigin
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TIntVector3<int> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  
  if ((0 < EnableMultiplayerWorldOriginRebasing) &&
     (((iVar3 = (param_2->field0_0x0)._s_0.X,
       iVar3 != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X ||
       ((param_2->field0_0x0)._s_0.Y != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
      ((param_2->field0_0x0)._s_0.Z != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)))) {
    iVar4 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X - (double)iVar3;
    iVar3 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 - (double)iVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 - (double)iVar3;
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// RebaseOntoLocalOrigin @ 147bf99f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __cdecl
FRepMovement::RebaseOntoLocalOrigin
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,AActor *param_2)

{
  double dVar1;
  UWorld *pUVar2;
  
  if ((param_2 != (AActor *)0x0) && (0 < EnableMultiplayerWorldOriginRebasing)) {
    pUVar2 = AActor::GetWorld(param_2);
    RebaseOntoLocalOrigin(__return_storage_ptr__,param_1,&pUVar2->OriginLocation);
    return __return_storage_ptr__;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// RebaseOntoLocalOrigin @ 147bf9a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __cdecl
FRepMovement::RebaseOntoLocalOrigin
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,UActorComponent *param_2
          )

{
  double dVar1;
  UWorld *pUVar2;
  
  if ((param_2 != (UActorComponent *)0x0) && (0 < EnableMultiplayerWorldOriginRebasing)) {
    pUVar2 = param_2->WorldPrivate;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached(param_2);
    }
    RebaseOntoLocalOrigin(__return_storage_ptr__,param_1,&pUVar2->OriginLocation);
    return __return_storage_ptr__;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// RebaseOntoZeroOrigin @ 147bf9ae0

TVector<double> * __cdecl
FRepMovement::RebaseOntoZeroOrigin
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TIntVector3<int> *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if ((0 < EnableMultiplayerWorldOriginRebasing) &&
     (((iVar2 = (param_2->field0_0x0)._s_0.X,
       iVar2 != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X ||
       ((param_2->field0_0x0)._s_0.Y != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
      ((param_2->field0_0x0)._s_0.Z != UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)))) {
    iVar3 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)iVar2 + (param_1->field0_0x0)._s_0.X;
    iVar2 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)iVar3 + dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)iVar2 + (param_1->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// RebaseOntoZeroOrigin @ 147bf9b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __cdecl
FRepMovement::RebaseOntoZeroOrigin
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,AActor *param_2)

{
  double dVar1;
  UWorld *pUVar2;
  
  if ((param_2 != (AActor *)0x0) && (0 < EnableMultiplayerWorldOriginRebasing)) {
    pUVar2 = AActor::GetWorld(param_2);
    RebaseOntoZeroOrigin(__return_storage_ptr__,param_1,&pUVar2->OriginLocation);
    return __return_storage_ptr__;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// RebaseOntoZeroOrigin @ 147bf9be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __cdecl
FRepMovement::RebaseOntoZeroOrigin
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,UActorComponent *param_2
          )

{
  double dVar1;
  UWorld *pUVar2;
  
  if ((param_2 != (UActorComponent *)0x0) && (0 < EnableMultiplayerWorldOriginRebasing)) {
    pUVar2 = param_2->WorldPrivate;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached(param_2);
    }
    RebaseOntoZeroOrigin(__return_storage_ptr__,param_1,&pUVar2->OriginLocation);
    return __return_storage_ptr__;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// SerializeQuantizedVector @ 147c00670

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FRepMovement::SerializeQuantizedVector
          (FRepMovement *this,FArchive *param_1,TVector<double> *param_2,EVectorQuantization param_3
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 local_res20 [2];
  int local_48;
  int local_44;
  int local_40 [10];
  
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x230);
  if (param_3 == RoundOneDecimal) {
    (*pcVar1)(param_1,&FEngineNetworkCustomVersion::Guid);
    uVar4 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if ((uVar4 < 0x17) ||
       (iVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), iVar5 == 0x1a)) {
      if (((param_1->field_0x28 & 1) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ar.IsLoading()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetSerialization.h"
                             ,0x113,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_40[5] = 0;
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40 + 5,0x1b);
      local_40[8] = 0;
      local_40[6] = 0;
      local_40[7] = 0;
      iVar5 = 1 << ((char)local_40[5] + 1U & 0x1f);
      iVar6 = 1 << ((char)local_40[5] + 2U & 0x1f);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40 + 8,iVar6);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40 + 6,iVar6);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40 + 7,iVar6);
      local_40[3] = local_40[7] - iVar5;
      fVar7 = (float)(local_40[6] - iVar5) * __real_3dcccccd;
      fVar8 = __real_3dcccccd;
      local_40[4] = local_40[8];
LAB_147c009ff:
      (param_2->field0_0x0)._s_0.X = (double)((float)(local_40[4] - iVar5) * fVar8);
      (param_2->field0_0x0)._s_0.Y = (double)fVar7;
      (param_2->field0_0x0)._s_0.Z = (double)((float)local_40[3] * fVar8);
      return true;
    }
    iVar5 = 10;
    if ((param_1->field_0x28 & 1) != 0) {
      bVar2 = UE::Net::ReadQuantizedVector(10,param_2,param_1);
      return bVar2;
    }
  }
  else if (param_3 == RoundTwoDecimals) {
    (*pcVar1)(param_1);
    uVar4 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if ((uVar4 < 0x17) ||
       (iVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), iVar5 == 0x1a)) {
      if (((param_1->field_0x28 & 1) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ar.IsLoading()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetSerialization.h"
                             ,0x113,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_40[1] = 0;
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40 + 1,0x1e);
      local_40[4] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      iVar5 = 1 << ((char)local_40[1] + 1U & 0x1f);
      iVar6 = 1 << ((char)local_40[1] + 2U & 0x1f);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40 + 4,iVar6);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40 + 2,iVar6);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40 + 3,iVar6);
      local_40[3] = local_40[3] - iVar5;
      fVar7 = (float)(local_40[2] - iVar5) * __real_3c23d70a;
      fVar8 = __real_3c23d70a;
      goto LAB_147c009ff;
    }
    iVar5 = 100;
    if ((param_1->field_0x28 & 1) != 0) {
      bVar2 = UE::Net::ReadQuantizedVector(100,param_2,param_1);
      return bVar2;
    }
  }
  else {
    (*pcVar1)();
    uVar4 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if ((uVar4 < 0x17) ||
       (iVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), iVar5 == 0x1a)) {
      if (((param_1->field_0x28 & 1) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ar.IsLoading()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetSerialization.h"
                             ,0x113,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_res20[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res20,0x18);
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 0;
      iVar5 = 1 << ((char)local_res20[0] + 1U & 0x1f);
      iVar6 = 1 << ((char)local_res20[0] + 2U & 0x1f);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_40,iVar6);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,&local_48,iVar6);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,&local_44,iVar6);
      (param_2->field0_0x0)._s_0.X = (double)(local_40[0] - iVar5);
      (param_2->field0_0x0)._s_0.Y = (double)(local_48 - iVar5);
      (param_2->field0_0x0)._s_0.Z = (double)(local_44 - iVar5);
      return true;
    }
    iVar5 = 1;
    if ((param_1->field_0x28 & 1) != 0) {
      bVar2 = UE::Net::ReadQuantizedVector(1,param_2,param_1);
      return bVar2;
    }
  }
  bVar2 = UE::Net::WriteQuantizedVector(iVar5,param_2,param_1);
  return bVar2;
}

// operator== @ 1484bedb0

bool __thiscall FRepMovement::operator==(FRepMovement *this,FRepMovement *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  
  if ((((((((param_1->LinearVelocity).field0_0x0._s_0.X == (this->LinearVelocity).field0_0x0._s_0.X)
          && ((param_1->LinearVelocity).field0_0x0._s_0.Y ==
              (this->LinearVelocity).field0_0x0._s_0.Y)) &&
         ((param_1->LinearVelocity).field0_0x0._s_0.Z == (this->LinearVelocity).field0_0x0._s_0.Z))
        && (((param_1->AngularVelocity).field0_0x0._s_0.X ==
             (this->AngularVelocity).field0_0x0._s_0.X &&
            ((param_1->AngularVelocity).field0_0x0._s_0.Y ==
             (this->AngularVelocity).field0_0x0._s_0.Y)))) &&
       (((param_1->AngularVelocity).field0_0x0._s_0.Z == (this->AngularVelocity).field0_0x0._s_0.Z
        && (((param_1->Location).field0_0x0._s_0.X == (this->Location).field0_0x0._s_0.X &&
            ((param_1->Location).field0_0x0._s_0.Y == (this->Location).field0_0x0._s_0.Y)))))) &&
      ((param_1->Location).field0_0x0._s_0.Z == (this->Location).field0_0x0._s_0.Z)) &&
     ((((param_1->Rotation).Pitch == (this->Rotation).Pitch &&
       ((param_1->Rotation).Yaw == (this->Rotation).Yaw)) &&
      ((param_1->Rotation).Roll == (this->Rotation).Roll)))) {
    uVar1 = this->field_0x78;
    bVar3 = this->bRepAcceleration;
    if (((bVar3 == 0) ||
        ((((param_1->Acceleration).field0_0x0._s_0.X == (this->Acceleration).field0_0x0._s_0.X &&
          ((param_1->Acceleration).field0_0x0._s_0.Y == (this->Acceleration).field0_0x0._s_0.Y)) &&
         ((param_1->Acceleration).field0_0x0._s_0.Z == (this->Acceleration).field0_0x0._s_0.Z)))) &&
       ((uVar2 = param_1->field_0x78,
        ((param_1->bSimulatedPhysicSleep ^ this->bSimulatedPhysicSleep) & 1) == 0 &&
        (((uVar2 ^ uVar1) & 2) == 0)))) {
      return bVar3 == param_1->bRepAcceleration;
    }
  }
  return false;
}

