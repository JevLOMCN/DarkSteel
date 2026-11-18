// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// FSkillMoveInfo @ 14b822f30

FSkillMoveInfo * __thiscall
FSkillMoveInfo::FSkillMoveInfo(FSkillMoveInfo *this,FSkillMoveInfo *param_1)

{
  double dVar1;
  
  this->MoveType = param_1->MoveType;
  this->ErrorReason = param_1->ErrorReason;
  this->SkillAttackID = param_1->SkillAttackID;
  this->MoveRange = param_1->MoveRange;
  this->MoveAngle = param_1->MoveAngle;
  this->EmptyTargetMoveRange = param_1->EmptyTargetMoveRange;
  this->MoveStartTime = param_1->MoveStartTime;
  this->DelayTime = param_1->DelayTime;
  this->ElapsedMoveTime = param_1->ElapsedMoveTime;
  this->ExpectedArrivalTime = param_1->ExpectedArrivalTime;
  this->ScaledCapsuleRadius = param_1->ScaledCapsuleRadius;
  dVar1 = (param_1->StartSkillLocation).field0_0x0._s_0.Y;
  (this->StartSkillLocation).field0_0x0._s_0.X = (param_1->StartSkillLocation).field0_0x0._s_0.X;
  (this->StartSkillLocation).field0_0x0._s_0.Y = dVar1;
  (this->StartSkillLocation).field0_0x0._s_0.Z = (param_1->StartSkillLocation).field0_0x0._s_0.Z;
  dVar1 = (param_1->DestSkillLocation).field0_0x0._s_0.Y;
  (this->DestSkillLocation).field0_0x0._s_0.X = (param_1->DestSkillLocation).field0_0x0._s_0.X;
  (this->DestSkillLocation).field0_0x0._s_0.Y = dVar1;
  (this->DestSkillLocation).field0_0x0._s_0.Z = (param_1->DestSkillLocation).field0_0x0._s_0.Z;
  dVar1 = (param_1->ParentStartRotation).Yaw;
  (this->ParentStartRotation).Pitch = (param_1->ParentStartRotation).Pitch;
  (this->ParentStartRotation).Yaw = dVar1;
  (this->ParentStartRotation).Roll = (param_1->ParentStartRotation).Roll;
  dVar1 = (param_1->RelativeStartLocation).field0_0x0._s_0.Y;
  (this->RelativeStartLocation).field0_0x0._s_0.X =
       (param_1->RelativeStartLocation).field0_0x0._s_0.X;
  (this->RelativeStartLocation).field0_0x0._s_0.Y = dVar1;
  (this->RelativeStartLocation).field0_0x0._s_0.Z =
       (param_1->RelativeStartLocation).field0_0x0._s_0.Z;
  dVar1 = (param_1->RelativeDestLocation).field0_0x0._s_0.Y;
  (this->RelativeDestLocation).field0_0x0._s_0.X = (param_1->RelativeDestLocation).field0_0x0._s_0.X
  ;
  (this->RelativeDestLocation).field0_0x0._s_0.Y = dVar1;
  (this->RelativeDestLocation).field0_0x0._s_0.Z = (param_1->RelativeDestLocation).field0_0x0._s_0.Z
  ;
  dVar1 = (param_1->SkillRotator).Yaw;
  (this->SkillRotator).Pitch = (param_1->SkillRotator).Pitch;
  (this->SkillRotator).Yaw = dVar1;
  (this->SkillRotator).Roll = (param_1->SkillRotator).Roll;
  this->ServerArriveTime = param_1->ServerArriveTime;
  this->IsFixedDestLocation = param_1->IsFixedDestLocation;
  this->AttachHoldingTime = param_1->AttachHoldingTime;
  ::FString::FString(&this->AtkAttachSocket,&param_1->AtkAttachSocket);
  ::FString::FString(&this->DefAttachSocket,&param_1->DefAttachSocket);
  this->CheckTargetAbnormalAction = param_1->CheckTargetAbnormalAction;
  this->MoveAtOnce = param_1->MoveAtOnce;
  this->bIsJumpSkill = param_1->bIsJumpSkill;
  this->IsSkillMoveStarted = param_1->IsSkillMoveStarted;
  this->IsLastSkillMove = param_1->IsLastSkillMove;
  this->bIsSetLocationPoint = param_1->bIsSetLocationPoint;
  return this;
}

// FSkillMoveInfo @ 14b8230c0

FSkillMoveInfo * __thiscall FSkillMoveInfo::FSkillMoveInfo(FSkillMoveInfo *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->MoveType = None;
  this->ErrorReason = None;
  this->SkillAttackID = 0;
  this->MoveRange = 0.0;
  this->MoveAngle = 0.0;
  this->EmptyTargetMoveRange = 0.0;
  this->MoveStartTime = 0.0;
  this->DelayTime = 0.0;
  this->ElapsedMoveTime = 0.0;
  this->ExpectedArrivalTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->ScaledCapsuleRadius = 0.0;
  (this->StartSkillLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartSkillLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartSkillLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DestSkillLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DestSkillLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->DestSkillLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ParentStartRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ParentStartRotation).Yaw = dVar2;
  (this->ParentStartRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RelativeStartLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RelativeStartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeStartLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RelativeDestLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RelativeDestLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeDestLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillRotator).Yaw = dVar2;
  (this->SkillRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->ServerArriveTime = 0.0;
  this->IsFixedDestLocation = false;
  this->AttachHoldingTime = 0.0;
  ::FString::FString(&this->AtkAttachSocket,L"");
  ::FString::FString(&this->DefAttachSocket,L"");
  this->CheckTargetAbnormalAction = 0;
  this->MoveAtOnce = false;
  this->bIsJumpSkill = false;
  this->IsSkillMoveStarted = false;
  this->IsLastSkillMove = false;
  this->bIsSetLocationPoint = false;
  return this;
}

// CheckStartMove @ 14b827680

bool __thiscall FSkillMoveInfo::CheckStartMove(FSkillMoveInfo *this)

{
  return this->IsSkillMoveStarted;
}

// InitMoveInfo @ 14b833fc0

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
FSkillMoveInfo::InitMoveInfo
          (FSkillMoveInfo *this,FDS_AtomicSkillMoveData *param_1,FDS_EntityBase *param_2)

{
  double dVar1;
  
  if (param_2 == (FDS_EntityBase *)0x0) {
    this->ErrorReason = InvalidCharacter;
    return;
  }
  this->SkillAttackID = (longlong)param_1->SkillAttackID;
  this->MoveType = param_1->SkillMoveType;
  this->MoveRange = (float)param_1->MoveRange;
  this->MoveAngle = (float)param_1->MoveAngle;
  this->EmptyTargetMoveRange = (float)param_1->EmptyTargetMoveRange;
  this->MoveStartTime = param_1->MoveStartTime;
  this->DelayTime = param_1->DelayMove;
  this->ExpectedArrivalTime = param_1->MoveTime;
  this->IsLastSkillMove = param_1->LastSkillMove;
  this->AttachHoldingTime = param_1->AttachHoldingTime;
  ::FString::operator=(&this->AtkAttachSocket,&param_1->AtkAttachSocket);
  ::FString::operator=(&this->DefAttachSocket,&param_1->DefAttachSocket);
  this->CheckTargetAbnormalAction = param_1->CheckTargetAbnormalAction;
  this->bIsJumpSkill = param_1->bIsJumpSkill;
  this->bIsSetLocationPoint = param_1->bIsSetLocationPoint;
  this->ScaledCapsuleRadius = param_2->ScaledCapsuleRadius;
  this->ElapsedMoveTime = 0.0;
  this->IsSkillMoveStarted = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillRotator).Yaw = dVar1;
  (this->SkillRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// IsValid @ 14b836a00

bool __thiscall FSkillMoveInfo::IsValid(FSkillMoveInfo *this)

{
  return this->ErrorReason == None;
}

// ProcessMainCharacterStopSkill @ 14b84b820

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
FSkillMoveInfo::ProcessMainCharacterStopSkill
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          FDS_EntityBase *param_2,TVector<double> *param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  UDS_SendPacketManager *this_00;
  UDS_SkillMoveAbilityData *this_01;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_88;
  double local_80;
  double dStack_78;
  double local_70;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48 [2];
  
  (**(code **)(param_2->_padding_ + 0x78))(param_2,&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_70 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x308))(pUVar3,&this->DestSkillLocation,&local_80);
    if (cVar2 == '\0') {
      this->IsFixedDestLocation = true;
    }
    else {
      local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_70 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
      if (this->IsLastSkillMove == true) {
        local_48[0]._0_8_ = (this->DestSkillLocation).field0_0x0._s_0.X;
        local_48[0]._8_8_ = (this->DestSkillLocation).field0_0x0._s_0.Y;
        local_48[0]._16_8_ = (this->DestSkillLocation).field0_0x0._s_0.Z;
        DS_Util::GetNPCFloorLocationByLocation
                  ((TVector<double> *)&local_68._s_0,(TVector<double> *)&local_48[0]._s_0,
                   __real_43160000,false);
        local_70 = local_68._s_0.Z + (double)param_2->ScaledCapsuleHalfHeight;
        local_80 = local_68._s_0.X;
        dStack_78 = local_68._s_0.Y;
        local_68._s_0.Z = local_70;
      }
    }
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)local_80 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_80,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dStack_78 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dStack_78,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_70 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_70,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      dVar8 = (param_3->field0_0x0)._s_0.Y;
      fVar4 = this->ExpectedArrivalTime + this->DelayTime;
      dVar9 = (param_3->field0_0x0)._s_0.X;
      dVar7 = dVar8 - dStack_78;
      dVar8 = dVar8 - (this->DestSkillLocation).field0_0x0._s_0.Y;
      dVar10 = dVar9 - (this->DestSkillLocation).field0_0x0._s_0.X;
      dVar9 = dVar9 - local_80;
      auVar5._0_8_ = dVar7 * dVar7 + dVar9 * dVar9;
      auVar5._8_8_ = 0;
      auVar5 = sqrtpd(ZEXT416((uint)fVar4),auVar5);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar8 * dVar8 + dVar10 * dVar10;
      auVar6 = sqrtpd(auVar5,auVar6);
      dVar8 = (__real_3ff0000000000000 / auVar5._0_8_) * auVar6._0_8_;
      if (dVar8 <= __real_3e45798ee0000000) {
        dVar8 = __real_3e45798ee0000000;
      }
      local_88 = param_1.WeakPtr;
      dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
      dVar9 = (double)fVar4 / dVar8 + dVar9;
      local_48[0]._s_0.X = local_80;
      local_48[0]._s_0.Y = dStack_78;
      local_48[0]._s_0.Z = local_70;
      DS_Util::GetNPCFloorLocationByLocation
                ((TVector<double> *)&local_68._s_0,(TVector<double> *)&local_48[0]._s_0,
                 __real_43160000,false);
      if (!param_4) {
        this_00 = UDS_SendPacketManager::GetInst();
        local_48[0]._s_0.X = local_68._s_0.X;
        local_48[0]._s_0.Y = local_68._s_0.Y;
        local_48[0]._s_0.Z = local_68._s_0.Z;
        UDS_SendPacketManager::StopSkillMoveRequest
                  (this_00,param_2->EntityID,(int)this->SkillAttackID,
                   (TVector<double> *)&local_48[0]._s_0,dVar9);
      }
      this_01 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_88);
      local_48[0]._s_0.X = local_68._s_0.X;
      local_48[0]._s_0.Y = local_68._s_0.Y;
      local_48[0]._s_0.Z = local_68._s_0.Z;
      UDS_SkillMoveAbilityData::SetStopSkillInfo(this_01,(TVector<double> *)&local_48[0]._s_0,dVar9)
      ;
      (this->DestSkillLocation).field0_0x0._s_0.X = local_80;
      (this->DestSkillLocation).field0_0x0._s_0.Y = dStack_78;
      (this->DestSkillLocation).field0_0x0._s_0.Z = local_70;
    }
  }
  return;
}

// ProcessParentEntityTransform @ 14b84bdb0

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
FSkillMoveInfo::ProcessParentEntityTransform
          (FSkillMoveInfo *this,FDS_EntityBase *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UDS_MovementCore *pUVar4;
  TRotator<double> *pTVar5;
  FWeakObjectPtr local_res10 [3];
  TVector<double>_u_0 local_38;
  TRotator<double> local_20;
  
  (**(code **)(param_1->_padding_ + 0x1d8))(param_1);
  UDS_MovementCore::GetMovementCore((ulong64)local_res10);
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_res10);
    UDS_MovementCore::GetActorLocation(pUVar4,(TVector<double> *)&local_38._s_0);
    pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_res10);
    pTVar5 = UDS_MovementCore::GetActorRotation(pUVar4,&local_20);
    dVar1 = pTVar5->Yaw;
    (this->ParentStartRotation).Pitch = pTVar5->Pitch;
    (this->ParentStartRotation).Yaw = dVar1;
    (this->ParentStartRotation).Roll = pTVar5->Roll;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    (this->RelativeStartLocation).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X - local_38._s_0.X
    ;
    (this->RelativeStartLocation).field0_0x0._s_0.Y = dVar1 - local_38._s_0.Y;
    (this->RelativeStartLocation).field0_0x0._s_0.Z = dVar2 - local_38._s_0.Z;
    dVar1 = (this->DestSkillLocation).field0_0x0._s_0.Y;
    dVar2 = (this->DestSkillLocation).field0_0x0._s_0.Z;
    (this->RelativeDestLocation).field0_0x0._s_0.X =
         (this->DestSkillLocation).field0_0x0._s_0.X - local_38._s_0.X;
    (this->RelativeDestLocation).field0_0x0._s_0.Y = dVar1 - local_38._s_0.Y;
    (this->RelativeDestLocation).field0_0x0._s_0.Z = dVar2 - local_38._s_0.Z;
  }
  return;
}

// SetDestLocationByDirection @ 14b84f660

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

EDS_SkillMoveErrorReason __thiscall
FSkillMoveInfo::SetDestLocationByDirection
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_1,
          float param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  EDS_SkillMoveErrorReason EVar4;
  UDS_DataBase *pUVar5;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  TVector<double> *pTVar8;
  double dVar9;
  FWeakObjectPtr local_res10 [3];
  FWeakObjectPtr local_78;
  ulong64 local_70;
  TRotator<double> local_68;
  double local_50;
  double local_48;
  double local_40;
  TVector<double> local_38 [2];
  
  local_res10[0] = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar3) {
    pUVar5 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
    local_70 = UDS_DataBase::GetEntityID(pUVar5);
    pFVar6 = FDS_EntityBase::GetEntityBase(&local_70);
    if (pFVar6 != (FDS_EntityBase *)0x0) {
      pUVar5 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
      UDS_DataBase::GetEntityID(pUVar5);
      UDS_MovementCore::GetMovementCore((ulong64)&local_78);
      bVar3 = FWeakObjectPtr::IsValid(&local_78);
      if (bVar3) {
        pUVar7 = FWeakObjectPtr::Get(&local_78);
        (**(code **)(*(longlong *)pUVar7 + 0x330))(pUVar7,&local_50);
        pUVar7 = FWeakObjectPtr::Get(&local_78);
        local_68.Pitch = *(double *)&pUVar7[10].field_0x10;
        local_68.Yaw = *(double *)&pUVar7[10].field_0x18;
        local_68.Roll = *(double *)&pUVar7[10].field_0x20;
        if ((param_3) &&
           (__real_322bcc77 <
            (float)((uint)this->MoveAngle & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
          local_68.Yaw = local_68.Yaw + (double)this->MoveAngle;
        }
        pTVar8 = UE::Math::TRotator<double>::Vector(&local_68,local_38);
        dVar9 = (double)param_2;
        dVar1 = (pTVar8->field0_0x0)._s_0.Y;
        dVar2 = (pTVar8->field0_0x0)._s_0.Z;
        (this->DestSkillLocation).field0_0x0._s_0.X = dVar9 * (pTVar8->field0_0x0)._s_0.X + local_50
        ;
        (this->DestSkillLocation).field0_0x0._s_0.Y = dVar9 * dVar1 + local_48;
        (this->DestSkillLocation).field0_0x0._s_0.Z = dVar9 * dVar2 + local_40;
        return None;
      }
    }
    EVar4 = InvalidCharacter;
  }
  else {
    EVar4 = InvalidData;
  }
  return EVar4;
}

// SetDestLocationByTarget @ 14b84f7e0

/* WARNING: Type propagation algorithm not settling */
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

EDS_SkillMoveErrorReason __thiscall
FSkillMoveInfo::SetDestLocationByTarget
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  EDS_SkillMoveErrorReason EVar7;
  UDS_DataBase *pUVar8;
  FDS_EntityBase *pFVar9;
  UObject *pUVar10;
  FDS_GetTargetLocationResult *pFVar11;
  TVector<double> *pTVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr local_198;
  double local_190;
  double dStack_188;
  double local_180;
  ulong64 local_178;
  ulong64 local_170;
  TRotator<double> local_168;
  FDS_GetTargetLocationResult local_150;
  TVector<double>_u_0 local_128;
  TRotator<double> local_110;
  TVector<double> local_f8;
  TRotator<double> local_e0;
  TVector<double> local_c8;
  TVector<double> local_b0;
  FDS_GetTargetLocationResult local_98 [3];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if ((!bVar6) || (bVar6 = FWeakObjectPtr::IsValid(local_res18), !bVar6)) {
    return InvalidData;
  }
  pUVar8 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res18);
  local_178 = UDS_DataBase::GetEntityID(pUVar8);
  pFVar9 = FDS_EntityBase::GetEntityBase(&local_178);
  if (pFVar9 == (FDS_EntityBase *)0x0) {
    return InvalidCharacter;
  }
  pUVar8 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res18);
  UDS_DataBase::GetEntityID(pUVar8);
  UDS_MovementCore::GetMovementCore((ulong64)&local_198);
  bVar6 = FWeakObjectPtr::IsValid(&local_198);
  if (bVar6) {
    pUVar10 = FWeakObjectPtr::Get(&local_198);
    (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,&local_190);
    fVar19 = pFVar9->ScaledCapsuleRadius;
    pFVar11 = UDS_FindTargetAbility::GetTargetLocation
                        (local_98,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)
                                  local_res18[0],true);
    local_150.bIsValid = pFVar11->bIsValid;
    local_150._1_7_ = *(undefined7 *)&pFVar11->field_0x1;
    local_150.TargetLocation.field0_0x0._s_0.X = (pFVar11->TargetLocation).field0_0x0._s_0.X;
    local_150.TargetLocation.field0_0x0._s_0.Y = (pFVar11->TargetLocation).field0_0x0._s_0.Y;
    local_150.TargetLocation.field0_0x0._s_0.Z = (pFVar11->TargetLocation).field0_0x0._s_0.Z;
    local_150.TargetRadius = pFVar11->TargetRadius;
    local_150._36_4_ = *(undefined4 *)&pFVar11->field_0x24;
    bVar6 = FDS_GetTargetLocationResult::IsValidData(&local_150);
    if (!bVar6) {
      return InvalidTarget;
    }
    pUVar10 = FWeakObjectPtr::Get(local_res18);
    local_170 = *(ulong64 *)&pUVar10[2].field_0x10;
    if (local_170 != 0) {
      pFVar9 = FDS_EntityBase::GetEntityBase(&local_170);
      if (pFVar9 == (FDS_EntityBase *)0x0) {
        return InvalidTarget;
      }
      bVar6 = FDS_EntityBase::GetIsMultiHitCollision(pFVar9);
      if (bVar6) {
        pUVar10 = FWeakObjectPtr::Get(&local_res10);
        pTVar12 = (TVector<double> *)&pUVar10[4].field_0x10;
      }
      else {
        pTVar12 = &local_150.TargetLocation;
      }
      auVar4 = *(undefined1 (*) [16])&pTVar12->field0_0x0;
      dVar1 = *(double *)((longlong)&pTVar12->field0_0x0 + 0x10);
      uVar13 = auVar4._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar14 = auVar4._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_168.Roll = dVar1;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar13) &&
            (double)CONCAT44(uVar14,uVar13) != __real_3f1a36e2e0000000) ||
          (uVar13 = auVar4._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar14 = auVar4._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar13) &&
          (double)CONCAT44(uVar14,uVar13) != __real_3f1a36e2e0000000)) ||
         (uVar13 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar14 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar13) &&
         (double)CONCAT44(uVar14,uVar13) != __real_3f1a36e2e0000000)) {
        dVar16 = auVar4._0_8_;
        dVar18 = auVar4._8_8_;
        if ((!param_3) ||
           (fVar15 = local_150.TargetRadius + fVar19 + this->MoveRange,
           fVar15 * fVar15 <=
           (float)((dVar18 - dStack_188) * (dVar18 - dStack_188) +
                   (dVar16 - local_190) * (dVar16 - local_190) +
                  (dVar1 - local_180) * (dVar1 - local_180)))) {
          local_128._s_0.X = local_190 - dVar16;
          local_128._s_0.Y = dStack_188 - dVar18;
          local_128._s_0.Z = local_180 - dVar1;
          UE::Math::TVector<double>::GetSafeNormal
                    ((TVector<double> *)&local_128._s_0,&local_f8,__real_3e45798ee0000000,
                     &UE::Math::TVector<double>::ZeroVector);
          if (__real_322bcc77 <
              (float)((uint)this->MoveAngle & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            UE::Math::TVector<double>::ToOrientationRotator(&local_f8,&local_110);
            local_e0.Pitch._0_4_ = SUB84(local_110.Pitch,0);
            local_e0.Pitch._4_4_ = (undefined4)((ulonglong)local_110.Pitch >> 0x20);
            local_e0.Yaw = (double)this->MoveAngle + local_110.Yaw;
            local_e0.Roll = local_110.Roll;
          }
          else {
            UE::Math::TVector<double>::ToOrientationRotator(&local_f8,&local_168);
            local_e0.Pitch._0_4_ = local_168.Pitch._0_4_;
            local_e0.Pitch._4_4_ = local_168.Pitch._4_4_;
            local_e0.Yaw = local_168.Yaw;
            local_e0.Roll = local_168.Roll;
          }
          fVar19 = (float)((uint)this->MoveRange & __xmm_7fffffff7fffffff7fffffff7fffffff) + fVar19
                   + local_150.TargetRadius;
          if (this->MoveRange < 0.0) {
            fVar19 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000);
          }
          pTVar12 = UE::Math::TRotator<double>::Vector(&local_e0,&local_c8);
          pTVar12 = UE::Math::TVector<double>::GetSafeNormal
                              (pTVar12,&local_b0,__real_3e45798ee0000000,
                               &UE::Math::TVector<double>::ZeroVector);
          dVar17 = (double)fVar19;
          dVar2 = (pTVar12->field0_0x0)._s_0.Y;
          dVar3 = (pTVar12->field0_0x0)._s_0.Z;
          (this->DestSkillLocation).field0_0x0._s_0.X =
               dVar17 * (pTVar12->field0_0x0)._s_0.X + dVar16;
          (this->DestSkillLocation).field0_0x0._s_0.Y = dVar17 * dVar2 + dVar18;
          (this->DestSkillLocation).field0_0x0._s_0.Z = dVar17 * dVar3 + dVar1;
          return None;
        }
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4415335893364114650>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SkillMoveAbility.cpp"
                           ,0x4da,"false");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          EVar7 = (*pcVar5)();
          return EVar7;
        }
      }
      (this->DestSkillLocation).field0_0x0._s_0.X = local_190;
      (this->DestSkillLocation).field0_0x0._s_0.Y = dStack_188;
      (this->DestSkillLocation).field0_0x0._s_0.Z = local_180;
      return None;
    }
    return InvalidTarget;
  }
  return InvalidCharacter;
}

// SetDestinationByMoveType @ 14b84fc00

EDS_SkillMoveErrorReason __thiscall
FSkillMoveInfo::SetDestinationByMoveType
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_2)

{
  EDS_SkillMoveType EVar1;
  EDS_SkillMoveErrorReason EVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  EVar1 = this->MoveType;
  local_res8 = param_2.WeakPtr;
  local_res20 = param_1.WeakPtr;
  if (EVar1 == TargetMov) {
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar3) {
      bVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar3) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        bVar3 = FDS_TargetInfo::IsValidData((FDS_TargetInfo *)&pUVar4[2].field_0x8);
        if (bVar3) {
          EVar2 = SetDestLocationByTarget
                            (this,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)
                                  local_res20,
                             (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res8,
                             false);
          return EVar2;
        }
        bVar3 = UDS_GameInstance::IsTestSkillMove();
        if (bVar3) {
          EVar2 = SetDestLocationByDirection
                            (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)
                                  local_res8,this->EmptyTargetMoveRange,false);
          return EVar2;
        }
        return InvalidTarget;
      }
    }
  }
  else if (EVar1 == DirectMov) {
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      EVar2 = SetDestLocationByDirection
                        (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res8,
                         this->MoveRange,true);
      return EVar2;
    }
  }
  else if ((EVar1 == TargetFrontMov) || (EVar1 == TargetAttachMov)) {
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar3) {
      bVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar3) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        bVar3 = FDS_TargetInfo::IsValidData((FDS_TargetInfo *)&pUVar4[2].field_0x8);
        if (bVar3) {
          EVar2 = SetDestLocationByTarget
                            (this,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)
                                  local_res20,
                             (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res8,
                             true);
          return EVar2;
        }
        EVar2 = SetDestLocationByDirection
                          (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res8
                           ,this->EmptyTargetMoveRange,true);
        return EVar2;
      }
    }
  }
  else if (EVar1 == LocationPointMov) {
    EVar2 = SetLocationMove(this,param_1,param_2);
    return EVar2;
  }
  return InvalidData;
}

// SetDirectMove @ 14b84fda0

EDS_SkillMoveErrorReason __thiscall
FSkillMoveInfo::SetDirectMove
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  EDS_SkillMoveErrorReason EVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return InvalidData;
  }
  EVar2 = SetDestLocationByDirection
                    (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10[0],
                     this->MoveRange,true);
  return EVar2;
}

// SetLocationMove @ 14b84fdf0

EDS_SkillMoveErrorReason __thiscall
FSkillMoveInfo::SetLocationMove
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EDS_SkillMoveErrorReason EVar7;
  bool bVar8;
  UObject *pUVar9;
  UDS_DataBase *this_00;
  UDS_MovementCore *this_01;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_70 [4];
  
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2.WeakPtr;
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  auVar1 = *(undefined1 (*) [16])&pUVar9[7].field_0x18;
  dVar13 = *(double *)(pUVar9 + 8);
  uVar10 = auVar1._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar11 = auVar1._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_70[0]._16_8_ = dVar13;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
        (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000) ||
      (uVar10 = auVar1._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar11 = auVar1._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
      (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000)) ||
     (uVar10 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar11 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
     (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000)) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res18);
    UDS_DataBase::GetEntityID(this_00);
    UDS_MovementCore::GetMovementCore((ulong64)&local_res20);
    bVar8 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar8) {
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res20);
      UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_70[0]._s_0);
      dVar2 = auVar1._8_8_ - (double)local_70[0]._8_8_;
      dVar13 = dVar13 - (double)local_70[0]._16_8_;
      dVar3 = auVar1._0_8_ - (double)local_70[0]._0_8_;
      dVar12 = dVar2 * dVar2 + dVar3 * dVar3;
      fVar14 = (float)SQRT(dVar12);
      if (this->MoveRange <= fVar14 && fVar14 != this->MoveRange) {
        fVar14 = this->EmptyTargetMoveRange;
      }
      dVar12 = dVar13 * dVar13 + dVar12;
      uVar4 = dVar2;
      uVar5 = dVar13;
      uVar6 = dVar3;
      if ((dVar12 != __real_3ff0000000000000) &&
         (uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         __real_3e45798ee0000000 <= dVar12)) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar4 = dVar2 * dVar12;
        uVar5 = dVar13 * dVar12;
        uVar6 = dVar3 * dVar12;
      }
      dVar13 = (double)fVar14;
      (this->DestSkillLocation).field0_0x0._s_0.X =
           dVar13 * (double)uVar6 + (double)local_70[0]._0_8_;
      (this->DestSkillLocation).field0_0x0._s_0.Y =
           dVar13 * (double)uVar4 + (double)local_70[0]._8_8_;
      (this->DestSkillLocation).field0_0x0._s_0.Z =
           dVar13 * (double)uVar5 + (double)local_70[0]._16_8_;
      pUVar9 = FWeakObjectPtr::Get(&local_res10);
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)&pUVar9[7].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&pUVar9[7].field_0x20 = uVar4;
      *(double *)(pUVar9 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      EVar7 = None;
    }
    else {
      EVar7 = InvalidCharacter;
    }
  }
  else {
    EVar7 = SetDestLocationByDirection
                      (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res18,
                       this->EmptyTargetMoveRange,false);
  }
  return EVar7;
}

// SetSocketMove @ 14b8501b0

EDS_SkillMoveErrorReason __thiscall
FSkillMoveInfo::SetSocketMove
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  EDS_SkillMoveErrorReason EVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      bVar1 = FDS_TargetInfo::IsValidData((FDS_TargetInfo *)&pUVar3[2].field_0x8);
      if (bVar1) {
        EVar2 = SetDestLocationByTarget
                          (this,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)local_res10
                           ,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res18[0]
                           ,true);
        return EVar2;
      }
      EVar2 = SetDestLocationByDirection
                        (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)
                              local_res18[0],this->EmptyTargetMoveRange,true);
      return EVar2;
    }
  }
  return InvalidData;
}

// SetTargetFrontMove @ 14b8503c0

EDS_SkillMoveErrorReason __thiscall
FSkillMoveInfo::SetTargetFrontMove
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  EDS_SkillMoveErrorReason EVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      bVar1 = FDS_TargetInfo::IsValidData((FDS_TargetInfo *)&pUVar3[2].field_0x8);
      if (bVar1) {
        EVar2 = SetDestLocationByTarget
                          (this,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)local_res10
                           ,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res18[0]
                           ,true);
        return EVar2;
      }
      EVar2 = SetDestLocationByDirection
                        (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)
                              local_res18[0],this->EmptyTargetMoveRange,true);
      return EVar2;
    }
  }
  return InvalidData;
}

// SetTargetMove @ 14b850450

EDS_SkillMoveErrorReason __thiscall
FSkillMoveInfo::SetTargetMove
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  EDS_SkillMoveErrorReason EVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      bVar1 = FDS_TargetInfo::IsValidData((FDS_TargetInfo *)&pUVar3[2].field_0x8);
      if (bVar1) {
        EVar2 = SetDestLocationByTarget
                          (this,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)local_res10
                           ,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res18[0]
                           ,false);
        return EVar2;
      }
      bVar1 = UDS_GameInstance::IsTestSkillMove();
      if (bVar1) {
        EVar2 = SetDestLocationByDirection
                          (this,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)
                                local_res18[0],this->EmptyTargetMoveRange,false);
        return EVar2;
      }
      return InvalidTarget;
    }
  }
  return InvalidData;
}

// StartSkillMove @ 14b851630

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
FSkillMoveInfo::StartSkillMove
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_2,bool param_3)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  EDS_SkillMoveErrorReason EVar6;
  UDS_DataBase *this_00;
  FDS_EntityBase *pFVar7;
  UObject *pUVar8;
  FWeakObjectPtr *this_01;
  UClass *pUVar9;
  ADS_MainCharacter *this_02;
  UDS_MovementCore *pUVar10;
  TRotator<double> *pTVar11;
  double dVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr local_98;
  TVector<double>_u_0 local_90;
  ulong64 local_78;
  UObject *local_70;
  TVector<double>_u_0 local_68;
  undefined1 local_50 [8];
  TRotator<double> local_48;
  
  this->IsSkillMoveStarted = true;
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if ((!bVar5) || (bVar5 = FWeakObjectPtr::IsValid(local_res18), !bVar5)) {
    this->ErrorReason = InvalidData;
    return;
  }
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res18);
  local_78 = UDS_DataBase::GetEntityID(this_00);
  pFVar7 = FDS_EntityBase::GetEntityBase(&local_78);
  if (pFVar7 == (FDS_EntityBase *)0x0) {
    this->ErrorReason = InvalidCharacter;
    return;
  }
  (**(code **)(pFVar7->_padding_ + 0x78))(pFVar7,&local_98);
  bVar5 = FWeakObjectPtr::IsValid(&local_98);
  if (!bVar5) {
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&local_98);
  (**(code **)(*(longlong *)pUVar8 + 0x330))(pUVar8,&local_90);
  bVar5 = this->bIsSetLocationPoint;
  (this->StartSkillLocation).field0_0x0._s_0.X = local_90._s_0.X;
  (this->StartSkillLocation).field0_0x0._s_0.Y = local_90._s_0.Y;
  (this->DestSkillLocation).field0_0x0._s_0.X = local_90._s_0.X;
  (this->DestSkillLocation).field0_0x0._s_0.Y = local_90._s_0.Y;
  (this->StartSkillLocation).field0_0x0._s_0.Z = local_90._s_0.Z;
  (this->DestSkillLocation).field0_0x0._s_0.Z = local_90._s_0.Z;
  if (bVar5 == true) {
    pUVar8 = FWeakObjectPtr::Get(&local_res10);
    dVar1 = (this->StartSkillLocation).field0_0x0._s_0.Y;
    *(double *)&pUVar8[7].field_0x18 = (this->StartSkillLocation).field0_0x0._s_0.X;
    *(double *)&pUVar8[7].field_0x20 = dVar1;
    *(double *)(pUVar8 + 8) = (this->StartSkillLocation).field0_0x0._s_0.Z;
  }
  EVar6 = SetDestinationByMoveType
                    (this,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)local_res10,
                     (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res18[0]);
  if (EVar6 != None) {
    this->ErrorReason = EVar6;
    return;
  }
  if (pFVar7->EntityType != MainCharacter) goto LAB_14b851836;
  this_01 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,local_50);
  pUVar8 = FWeakObjectPtr::Get(this_01);
  if (pUVar8 == (UObject *)0x0) {
LAB_14b8517ad:
    pUVar8 = (UObject *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) goto LAB_14b8517ad;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_70 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_70);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    this_02 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res8);
    ADS_MainCharacter::TryEscapeFromStuck(this_02);
  }
  ProcessMainCharacterStopSkill
            (this,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)local_res10,pFVar7,
             (TVector<double> *)&local_90._s_0,param_3);
LAB_14b851836:
  (**(code **)(pFVar7->_padding_ + 0x1d8))(pFVar7);
  UDS_MovementCore::GetMovementCore((ulong64)&local_res8);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
    UDS_MovementCore::GetActorLocation(pUVar10,(TVector<double> *)&local_68._s_0);
    pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
    pTVar11 = UDS_MovementCore::GetActorRotation(pUVar10,&local_48);
    dVar1 = pTVar11->Yaw;
    (this->ParentStartRotation).Pitch = pTVar11->Pitch;
    (this->ParentStartRotation).Yaw = dVar1;
    (this->ParentStartRotation).Roll = pTVar11->Roll;
    auVar3._8_4_ = SUB84(local_90._s_0.Y - local_68._s_0.Y,0);
    auVar3._0_8_ = local_90._s_0.X - local_68._s_0.X;
    auVar3._12_4_ = (int)((ulonglong)(local_90._s_0.Y - local_68._s_0.Y) >> 0x20);
    *(undefined1 (*) [16])&(this->RelativeStartLocation).field0_0x0 = auVar3;
    (this->RelativeStartLocation).field0_0x0._s_0.Z = local_90._s_0.Z - local_68._s_0.Z;
    dVar1 = (this->DestSkillLocation).field0_0x0._s_0.Z;
    dVar12 = (this->DestSkillLocation).field0_0x0._s_0.Y - local_68._s_0.Y;
    auVar4._8_4_ = SUB84(dVar12,0);
    auVar4._0_8_ = (this->DestSkillLocation).field0_0x0._s_0.X - local_68._s_0.X;
    auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])&(this->RelativeDestLocation).field0_0x0 = auVar4;
    (this->RelativeDestLocation).field0_0x0._s_0.Z = dVar1 - local_68._s_0.Z;
  }
  return;
}

// UpdateSkillDestLocation @ 14b85a280

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
FSkillMoveInfo::UpdateSkillDestLocation
          (FSkillMoveInfo *this,TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,
          FDS_EntityBase *param_2,TVector<double> *param_3,TVector<double> *param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  UDS_SendPacketManager *this_00;
  UDS_SkillMoveAbilityData *this_01;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  FWeakObjectPtr local_res10;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  fVar3 = this->ExpectedArrivalTime + this->DelayTime;
  dVar6 = (param_3->field0_0x0)._s_0.X;
  dVar2 = dVar1 - (this->DestSkillLocation).field0_0x0._s_0.Y;
  dVar7 = dVar6 - (this->DestSkillLocation).field0_0x0._s_0.X;
  dVar1 = dVar1 - (param_4->field0_0x0)._s_0.Y;
  dVar6 = dVar6 - (param_4->field0_0x0)._s_0.X;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1 * dVar1 + dVar6 * dVar6;
  auVar4 = sqrtpd(ZEXT416((uint)fVar3),auVar4);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + dVar7 * dVar7;
  auVar5 = sqrtpd(auVar4,auVar5);
  dVar1 = (__real_3ff0000000000000 / auVar4._0_8_) * auVar5._0_8_;
  if (dVar1 <= __real_3e45798ee0000000) {
    dVar1 = __real_3e45798ee0000000;
  }
  local_res10 = param_1.WeakPtr;
  dVar6 = UDS_TimeUtilManager::GetCurrentServerTime();
  local_38[0]._16_8_ = (param_4->field0_0x0)._s_0.Z;
  dVar6 = (double)fVar3 / dVar1 + dVar6;
  local_38[0]._0_8_ = (param_4->field0_0x0)._s_0.X;
  local_38[0]._8_8_ = (param_4->field0_0x0)._s_0.Y;
  DS_Util::GetNPCFloorLocationByLocation
            ((TVector<double> *)&local_58._s_0,(TVector<double> *)&local_38[0]._s_0,__real_43160000,
             false);
  if (!param_5) {
    this_00 = UDS_SendPacketManager::GetInst();
    local_38[0]._s_0.X = local_58._s_0.X;
    local_38[0]._s_0.Y = local_58._s_0.Y;
    local_38[0]._s_0.Z = local_58._s_0.Z;
    UDS_SendPacketManager::StopSkillMoveRequest
              (this_00,param_2->EntityID,(int)this->SkillAttackID,
               (TVector<double> *)&local_38[0]._s_0,dVar6);
  }
  this_01 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_res10);
  local_38[0]._s_0.X = local_58._s_0.X;
  local_38[0]._s_0.Y = local_58._s_0.Y;
  local_38[0]._s_0.Z = local_58._s_0.Z;
  UDS_SkillMoveAbilityData::SetStopSkillInfo(this_01,(TVector<double> *)&local_38[0]._s_0,dVar6);
  return;
}

