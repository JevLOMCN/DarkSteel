// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// FDS_AbnormalInfo @ 14b9d6f70

FDS_AbnormalInfo * __thiscall
FDS_AbnormalInfo::FDS_AbnormalInfo(FDS_AbnormalInfo *this,FDS_AbnormalInfo *param_1)

{
  double dVar1;
  
  this->AbnormalType = param_1->AbnormalType;
  this->AbnormalGroup = param_1->AbnormalGroup;
  this->AttackerEntityID = param_1->AttackerEntityID;
  this->SkillAttackID = param_1->SkillAttackID;
  this->AbnormalActionID = param_1->AbnormalActionID;
  this->ActionGrade = param_1->ActionGrade;
  this->AbnormalHeight = param_1->AbnormalHeight;
  this->AbnormalValue = param_1->AbnormalValue;
  this->AbnormalStartTime = param_1->AbnormalStartTime;
  this->AbnormalMoveEndTime = param_1->AbnormalMoveEndTime;
  this->AbnormalEndTime = param_1->AbnormalEndTime;
  this->AbnormalWaitTime = param_1->AbnormalWaitTime;
  this->AbnormalMoveTime = param_1->AbnormalMoveTime;
  this->AbnormalTime = param_1->AbnormalTime;
  this->AbnormalGetupTime = param_1->AbnormalGetupTime;
  this->IsAbnormalRotation = param_1->IsAbnormalRotation;
  ::FString::FString(&this->AtkAttachSocket,&param_1->AtkAttachSocket);
  ::FString::FString(&this->DefAttachSocket,&param_1->DefAttachSocket);
  dVar1 = (param_1->AbnormalDestination).field0_0x0._s_0.Y;
  (this->AbnormalDestination).field0_0x0._s_0.X = (param_1->AbnormalDestination).field0_0x0._s_0.X;
  (this->AbnormalDestination).field0_0x0._s_0.Y = dVar1;
  (this->AbnormalDestination).field0_0x0._s_0.Z = (param_1->AbnormalDestination).field0_0x0._s_0.Z;
  dVar1 = (param_1->AbnormalDestinationFloor).field0_0x0._s_0.Y;
  (this->AbnormalDestinationFloor).field0_0x0._s_0.X =
       (param_1->AbnormalDestinationFloor).field0_0x0._s_0.X;
  (this->AbnormalDestinationFloor).field0_0x0._s_0.Y = dVar1;
  (this->AbnormalDestinationFloor).field0_0x0._s_0.Z =
       (param_1->AbnormalDestinationFloor).field0_0x0._s_0.Z;
  dVar1 = (param_1->AbnormalClientDestination).field0_0x0._s_0.Y;
  (this->AbnormalClientDestination).field0_0x0._s_0.X =
       (param_1->AbnormalClientDestination).field0_0x0._s_0.X;
  (this->AbnormalClientDestination).field0_0x0._s_0.Y = dVar1;
  (this->AbnormalClientDestination).field0_0x0._s_0.Z =
       (param_1->AbnormalClientDestination).field0_0x0._s_0.Z;
  this->IsDefenderKilled = param_1->IsDefenderKilled;
  this->IsDeadAbnormalCheck = param_1->IsDeadAbnormalCheck;
  this->CameraShakeID = param_1->CameraShakeID;
  this->bIsSkillUseUncancel = param_1->bIsSkillUseUncancel;
  this->ID_HeightCondition = param_1->ID_HeightCondition;
  return this;
}

// FDS_AbnormalInfo @ 14b9d70b0

FDS_AbnormalInfo * __thiscall FDS_AbnormalInfo::FDS_AbnormalInfo(FDS_AbnormalInfo *this)

{
  undefined8 uVar1;
  
  this->AbnormalType = None;
  this->AbnormalGroup = None;
  this->AttackerEntityID = 0;
  this->SkillAttackID = 0;
  this->AbnormalActionID = 0;
  this->ActionGrade = 0;
  this->AbnormalHeight = 0;
  this->AbnormalValue = 0;
  this->AbnormalStartTime = 0.0;
  this->AbnormalMoveEndTime = 0.0;
  this->AbnormalEndTime = 0.0;
  this->AbnormalWaitTime = 0.0;
  this->AbnormalMoveTime = 0.0;
  this->AbnormalTime = 0.0;
  this->AbnormalGetupTime = 0.0;
  this->IsAbnormalRotation = false;
  ::FString::FString(&this->AtkAttachSocket,L"");
  ::FString::FString(&this->DefAttachSocket,L"");
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AbnormalDestination).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AbnormalDestination).field0_0x0._s_0.Y = (double)uVar1;
  (this->AbnormalDestination).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AbnormalDestinationFloor).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AbnormalDestinationFloor).field0_0x0._s_0.Y = (double)uVar1;
  (this->AbnormalDestinationFloor).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AbnormalClientDestination).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AbnormalClientDestination).field0_0x0._s_0.Y = (double)uVar1;
  (this->AbnormalClientDestination).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsDefenderKilled = false;
  this->IsDeadAbnormalCheck = false;
  this->CameraShakeID = 0;
  this->bIsSkillUseUncancel = false;
  this->ID_HeightCondition = 0;
  return this;
}

// DoesAttachSocketExist @ 14b9e85d0

bool __thiscall FDS_AbnormalInfo::DoesAttachSocketExist(FDS_AbnormalInfo *this)

{
  if (((this->AtkAttachSocket).Data.ArrayNum < 2) && ((this->DefAttachSocket).Data.ArrayNum < 2)) {
    return false;
  }
  return true;
}

// HasAnimation @ 14b9f2e30

bool __thiscall FDS_AbnormalInfo::HasAnimation(FDS_AbnormalInfo *this)

{
  return this->AbnormalGroup != NonStateMoveControl;
}

// IsMoveControlAbnormal @ 14b9f9530

bool __thiscall FDS_AbnormalInfo::IsMoveControlAbnormal(FDS_AbnormalInfo *this)

{
  if ((this->AbnormalGroup != MoveControl) && (this->AbnormalGroup != NonStateMoveControl)) {
    return false;
  }
  return true;
}

// IsValid @ 14b9fa320

bool __thiscall FDS_AbnormalInfo::IsValid(FDS_AbnormalInfo *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  if (this->AbnormalType == None) {
    return false;
  }
  if ((((this->AbnormalGroup == MoveControl) || (this->AbnormalGroup == NonStateMoveControl)) &&
      (uVar1 = *(undefined8 *)&(this->AbnormalDestination).field0_0x0,
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     ((uVar1 = *(undefined8 *)((longlong)&(this->AbnormalDestination).field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000 &&
      (uVar1 = *(undefined8 *)((longlong)&(this->AbnormalDestination).field0_0x0 + 0x10),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)))) {
    return false;
  }
  dVar2 = this->AbnormalEndTime;
  dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
  return 0.0 < dVar2 - dVar3;
}

