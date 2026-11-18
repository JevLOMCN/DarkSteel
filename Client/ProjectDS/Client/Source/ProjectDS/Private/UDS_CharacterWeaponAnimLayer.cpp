// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 75

// StaticClass @ 14b4419f0

UClass * __cdecl UDS_CharacterWeaponAnimLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterWeaponAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterWeaponAnimLayer",
               &Z_Registration_Info_UClass_UDS_CharacterWeaponAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_CharacterWeaponAnimLayer,0x470,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CharacterWeaponAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_CharacterWeaponAnimLayer>,local_res8,
               UDS_BattleAnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterWeaponAnimLayer.InnerSingleton;
}

// UDS_CharacterWeaponAnimLayer @ 14b4440d0

UDS_CharacterWeaponAnimLayer * __thiscall
UDS_CharacterWeaponAnimLayer::UDS_CharacterWeaponAnimLayer
          (UDS_CharacterWeaponAnimLayer *this,FVTableHelper *param_1)

{
  UDS_BattleAnimLayerBase::UDS_BattleAnimLayerBase((UDS_BattleAnimLayerBase *)this,param_1);
  this->AvoidState = None;
  this->bIsNewAvoid = false;
  this->bIsNewAbnormal = false;
  this->bIsNewSkill = false;
  *(undefined ***)this = &___7UDS_CharacterWeaponAnimLayer__6B_;
  return this;
}

// ~UDS_CharacterWeaponAnimLayer @ 14b444760

void __thiscall
UDS_CharacterWeaponAnimLayer::~UDS_CharacterWeaponAnimLayer(UDS_CharacterWeaponAnimLayer *this)

{
  *(undefined ***)this = &___7UDS_CharacterWeaponAnimLayer__6B_;
  UDS_BattleAnimLayerBase::~UDS_BattleAnimLayerBase((UDS_BattleAnimLayerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4451f0

UClass * __cdecl UDS_CharacterWeaponAnimLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterWeaponAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterWeaponAnimLayer",
               &Z_Registration_Info_UClass_UDS_CharacterWeaponAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_CharacterWeaponAnimLayer,0x470,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CharacterWeaponAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_CharacterWeaponAnimLayer>,local_res8,
               UDS_BattleAnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterWeaponAnimLayer.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b445610

bool __thiscall
UDS_CharacterWeaponAnimLayer::ShouldChangeCharStateEvent(UDS_CharacterWeaponAnimLayer *this)

{
  return true;
}

// StaticRegisterNativesUDS_CharacterWeaponAnimLayer @ 14b445690

void __cdecl UDS_CharacterWeaponAnimLayer::StaticRegisterNativesUDS_CharacterWeaponAnimLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x37;
  local_18.DataPtr = Z_Construct_UClass_UDS_CharacterWeaponAnimLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetActionAniIndex @ 14b446060

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetActionAniIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(int *)param_3 = pFVar1->ActionAniIndex;
  return;
}

// execGetActionAniType @ 14b4460a0

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetActionAniType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(int *)param_3 = pFVar1->ActionAniType;
  return;
}

// execGetAimModeMoveDirection @ 14b4460e0

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetAimModeMoveDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(EDS_CardinalDirection *)param_3 = pFVar1->AimModeMoveDirection;
  return;
}

// execGetAvoidState @ 14b446120

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetAvoidState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x1c);
  return;
}

// execGetDeadState @ 14b446150

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetDeadState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(EDS_DeadAnimState *)param_3 = pFVar1->DeadAnimState;
  return;
}

// execGetDirectionAngleFromVelocity @ 14b446190

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetDirectionAngleFromVelocity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->DirectionAngleFromVelocity;
  return;
}

// execGetHeightConditionType @ 14b4461d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetHeightConditionType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(EDS_HeightConditionType *)param_3 = pFVar1->HeightConditionType;
  return;
}

// execGetHeightMoveState @ 14b446210

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetHeightMoveState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(EDS_HeightMoveState *)param_3 = pFVar1->HeightMoveState;
  return;
}

// execGetHitAdditiveAnimElapsedTime @ 14b446250

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetHitAdditiveAnimElapsedTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->HitAdditiveAnimElapsedTime;
  return;
}

// execGetHitDirection2D @ 14b446290

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetHitDirection2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FDS_BattleAnimSharedData *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  dVar1 = (pFVar2->HitDirection2D).field0_0x0._s_0.Y;
  *(double *)param_3 = (pFVar2->HitDirection2D).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  return;
}

// execGetMoveSpeed @ 14b4462d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->MoveSpeed;
  return;
}

// execGetRotationVelocity @ 14b446310

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetRotationVelocity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->RotationVelocity;
  return;
}

// execGetShieldMoveDirection @ 14b446350

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetShieldMoveDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(EDS_CardinalDirection *)param_3 = pFVar1->ShieldMoveDirection;
  return;
}

// execGetStartHeightConditionType @ 14b446390

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetStartHeightConditionType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(EDS_HeightConditionType *)param_3 = pFVar1->StartHeightConditionType;
  return;
}

// execGetTargetHeightConditionType @ 14b4463d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execGetTargetHeightConditionType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(EDS_HeightConditionType *)param_3 = pFVar1->TargetHeightConditionType;
  return;
}

// execHasAcceleration @ 14b446410

void __cdecl
UDS_CharacterWeaponAnimLayer::execHasAcceleration(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bHasAcceleration;
  return;
}

// execIsAbnormalEndAnim @ 14b446450

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsAbnormalEndAnim(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bIsAbnormalEndAnim;
  return;
}

// execIsAbnormalState @ 14b446490

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsAbnormalState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsAbnormalState((UDS_CharacterWeaponAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsAimMode @ 14b4464d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsAimMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsAimMode((UDS_CharacterWeaponAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsBattleState @ 14b446510

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsBattleState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bIsBattleState == true;
  return;
}

// execIsDeadState @ 14b446550

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsDeadState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->DeadAnimState != None;
  return;
}

// execIsFalling @ 14b446590

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsFalling(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bIsFalling;
  return;
}

// execIsFlying @ 14b4465d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsFlying(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bIsFlying;
  return;
}

// execIsHeightIncreased @ 14b446610

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsHeightIncreased(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bIsHeightIncreased;
  return;
}

// execIsHitAdditive @ 14b446650

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsHitAdditive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bIsHitAdditive;
  return;
}

// execIsHitAdditiveDirection @ 14b446690

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsHitAdditiveDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bIsHitAdditive_Direction;
  return;
}

// execIsInAbnormalAirborne @ 14b4466d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalAirborne
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Airborne;
  return;
}

// execIsInAbnormalAttackback @ 14b446710

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalAttackback
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Attackback;
  return;
}

// execIsInAbnormalDeadAbnormal @ 14b446750

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalDeadAbnormal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bIsDeadAbnormal;
  return;
}

// execIsInAbnormalHit @ 14b446790

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalHit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Hit;
  return;
}

// execIsInAbnormalHitMove1 @ 14b4467d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalHitMove1
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == HitMove1;
  return;
}

// execIsInAbnormalHitMove2 @ 14b446810

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalHitMove2
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == HitMove2;
  return;
}

// execIsInAbnormalHold @ 14b446850

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalHold(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Hold;
  return;
}

// execIsInAbnormalKnockBack @ 14b446890

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalKnockBack
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == KnockBack;
  return;
}

// execIsInAbnormalKnockDown @ 14b4468d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalKnockDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == KnockDown;
  return;
}

// execIsInAbnormalKnockFront @ 14b446910

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalKnockFront
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == KnockFront;
  return;
}

// execIsInAbnormalLapidification @ 14b446950

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalLapidification
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Lapidification;
  return;
}

// execIsInAbnormalMagicAirborne @ 14b446990

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalMagicAirborne
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == MagicAirborne;
  return;
}

// execIsInAbnormalMoveBlock @ 14b4469d0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalMoveBlock
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == MoveBlock;
  return;
}

// execIsInAbnormalParrying @ 14b446a10

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalParrying
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Parrying;
  return;
}

// execIsInAbnormalPushToPoint @ 14b446a50

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalPushToPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == PushToPoint;
  return;
}

// execIsInAbnormalSleep @ 14b446a90

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalSleep(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Sleep;
  return;
}

// execIsInAbnormalStiffen @ 14b446ad0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalStiffen
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Stiffen;
  return;
}

// execIsInAbnormalStun @ 14b446b10

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalStun(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Stun;
  return;
}

// execIsInAbnormalThrow @ 14b446b50

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAbnormalThrow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AbnormalType == Throw;
  return;
}

// execIsInAvoidState @ 14b446b90

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsInAvoidState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(char *)(param_1 + 0x1c) != '\0';
  return;
}

// execIsNewAbnormal @ 14b446bc0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsNewAbnormal(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x2;
  return;
}

// execIsNewAvoid @ 14b446bf0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsNewAvoid(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x1;
  return;
}

// execIsNewSkill @ 14b446c20

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsNewSkill(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x3;
  return;
}

// execIsNormalAttackState @ 14b446c50

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsNormalAttackState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AttackState == NormalAttack;
  return;
}

// execIsSkillAttackState @ 14b446c90

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsSkillAttackState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AttackState == SkillAttack;
  return;
}

// execIsSkillState @ 14b446cd0

void __cdecl
UDS_CharacterWeaponAnimLayer::execIsSkillState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->AttackState != None;
  return;
}

// execOnEnteredAbnormalState @ 14b446d10

void __cdecl
UDS_CharacterWeaponAnimLayer::execOnEnteredAbnormalState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FAnimUpdateContext *pFVar3;
  FProperty *pFVar4;
  FAnimUpdateContext *pFVar5;
  FAnimNodeReference *pFVar6;
  undefined1 local_28 [8];
  longlong *plStack_20;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28 = (undefined1  [8])0x0;
  plStack_20 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pFVar3 = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar5 = (FAnimUpdateContext *)local_28;
  if (pFVar3 != (FAnimUpdateContext *)0x0) {
    pFVar5 = pFVar3;
  }
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar6 = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    pFVar6 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEnteredAbnormalState((UDS_CharacterWeaponAnimLayer *)param_1,pFVar5,pFVar6);
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_20 + 8))(plStack_20,1);
    }
  }
  return;
}

// execOnEnteredAvoidState @ 14b446e40

void __cdecl
UDS_CharacterWeaponAnimLayer::execOnEnteredAvoidState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FAnimUpdateContext *pFVar3;
  FProperty *pFVar4;
  FAnimUpdateContext *pFVar5;
  FAnimNodeReference *pFVar6;
  undefined1 local_28 [8];
  longlong *plStack_20;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28 = (undefined1  [8])0x0;
  plStack_20 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pFVar3 = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar5 = (FAnimUpdateContext *)local_28;
  if (pFVar3 != (FAnimUpdateContext *)0x0) {
    pFVar5 = pFVar3;
  }
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar6 = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    pFVar6 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEnteredAvoidState((UDS_CharacterWeaponAnimLayer *)param_1,pFVar5,pFVar6);
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_20 + 8))(plStack_20,1);
    }
  }
  return;
}

// execOnEnteredSkillState @ 14b446f70

void __cdecl
UDS_CharacterWeaponAnimLayer::execOnEnteredSkillState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FAnimUpdateContext *pFVar3;
  FProperty *pFVar4;
  FAnimUpdateContext *pFVar5;
  FAnimNodeReference *pFVar6;
  undefined1 local_28 [8];
  longlong *plStack_20;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28 = (undefined1  [8])0x0;
  plStack_20 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pFVar3 = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar5 = (FAnimUpdateContext *)local_28;
  if (pFVar3 != (FAnimUpdateContext *)0x0) {
    pFVar5 = pFVar3;
  }
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar6 = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    pFVar6 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEnteredSkillState((UDS_CharacterWeaponAnimLayer *)param_1,pFVar5,pFVar6);
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_20 + 8))(plStack_20,1);
    }
  }
  return;
}

// UDS_CharacterWeaponAnimLayer @ 14b864be0

UDS_CharacterWeaponAnimLayer * __thiscall
UDS_CharacterWeaponAnimLayer::UDS_CharacterWeaponAnimLayer
          (UDS_CharacterWeaponAnimLayer *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->AvoidState = None;
  this->bIsNewAvoid = false;
  this->bIsNewAbnormal = false;
  this->bIsNewSkill = false;
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x448 = 0;
  *(undefined8 *)&this->field_0x450 = 0;
  *(undefined8 *)&this->field_0x458 = 0;
  *(undefined ***)this = &___7UDS_CharacterWeaponAnimLayer__6B_;
  return this;
}

// IsAbnormalState @ 14b87d2d0

bool __thiscall UDS_CharacterWeaponAnimLayer::IsAbnormalState(UDS_CharacterWeaponAnimLayer *this)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)this);
  if ((pFVar1->bIsDeadAbnormal == false) && (pFVar1->AbnormalType == None)) {
    return false;
  }
  return true;
}

// IsAimMode @ 14b87d300

bool __thiscall UDS_CharacterWeaponAnimLayer::IsAimMode(UDS_CharacterWeaponAnimLayer *this)

{
  FDS_BattleAnimSharedData *pFVar1;
  
  pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)this);
  if (pFVar1->AttackState == None) {
    pFVar1 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)this);
    if (pFVar1->bIsAimMode != false) {
      return true;
    }
  }
  return false;
}

// OnBindAnimationEvents @ 14b8812c0

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
UDS_CharacterWeaponAnimLayer::OnBindAnimationEvents(UDS_CharacterWeaponAnimLayer *this)

{
  FGameplayTag *pFVar1;
  int iVar2;
  char cVar3;
  UObject *pUVar4;
  FDS_ChangedCharStateInfo *pFVar5;
  FGameplayTag *pFVar6;
  bool abStackX_8 [8];
  FName FStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  FDS_ChangedCharStateInfo FStack_48;
  
  cVar3 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar3 == '\x01') {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_AnimInstanceBase>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar4[7].field_0x20,(UDS_AnimInstanceBase *)abStackX_8,(pmf_2d1e6189)this);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    pFVar6 = *(FGameplayTag **)&pUVar4[2].field_0x8;
    iVar2 = *(int *)&pUVar4[2].field_0x10;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (*(int *)&pUVar4[2].field_0x10 != iVar2) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(abStackX_8);
      }
      if (pFVar6 == pFVar1) break;
      abStackX_8[0] = true;
      pFVar5 = UDS_CharStateData::GetChangedCharStateInfo(&FStack_48,pFVar6,abStackX_8);
      FStack_78 = (pFVar5->StateTag).TagName;
      uStack_70 = *(undefined8 *)&pFVar5->bIsStateTagOn;
      uStack_68 = (undefined4)pFVar5->AddedCharState;
      uStack_64 = *(undefined4 *)((longlong)&pFVar5->AddedCharState + 4);
      uStack_60 = (undefined4)pFVar5->RemovedCharState;
      uStack_5c = *(undefined4 *)((longlong)&pFVar5->RemovedCharState + 4);
      uStack_58._0_4_ = pFVar5->AddedCharDetailState;
      uStack_58._4_4_ = pFVar5->RemovedCharDetailState;
      (**(code **)(*(longlong *)this + 0x3d8))(this,*(undefined8 *)&this->field_0x438,&FStack_78);
      pFVar6 = pFVar6 + 1;
    }
  }
  return;
}

// OnChangedCharState @ 14b885a00

void __thiscall
UDS_CharacterWeaponAnimLayer::OnChangedCharState
          (UDS_CharacterWeaponAnimLayer *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  EDS_AvoidAnimState EVar1;
  EDS_CharState EVar2;
  bool bVar3;
  FDS_BattleAnimSharedData *pFVar4;
  UDS_CharStateData *pUVar5;
  char cVar6;
  EDS_CharState local_res8;
  
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x438);
  if (bVar3) {
    pFVar4 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)this);
    EVar1 = this->AvoidState;
    this->AvoidState = None;
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    local_res8 = Avoid;
    bVar3 = UDS_CharStateData::HasCharState(pUVar5,&local_res8);
    if (bVar3) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      local_res8 = CONCAT44(local_res8._4_4_,0xe);
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res8);
      cVar6 = '\x01';
      if (pFVar4->bIsBattleState != false) {
        cVar6 = '\x03';
      }
      this->AvoidState = cVar6 + bVar3;
      if (EVar1 != (EDS_AvoidAnimState)(cVar6 + bVar3)) {
        this->bIsNewAvoid = true;
      }
    }
  }
  EVar2 = param_2->AddedCharState;
  this->bIsNewSkill = EVar2 == Skill;
  if ((EVar2 != Abnormal) && (EVar2 != Abnormal_NonControl)) {
    this->bIsNewAbnormal = false;
    return;
  }
  this->bIsNewAbnormal = true;
  return;
}

// OnClearVariables @ 14b8879d0

void __thiscall UDS_CharacterWeaponAnimLayer::OnClearVariables(UDS_CharacterWeaponAnimLayer *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  UDS_AnimLayerBase::OnClearVariables((UDS_AnimLayerBase *)this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  *(int *)&this->field_0x458 = local_res8.ObjectIndex;
  *(int *)&this->field_0x45c = local_res8.ObjectSerialNumber;
  return;
}

// OnEnteredAbnormalState @ 14b889220

void __thiscall
UDS_CharacterWeaponAnimLayer::OnEnteredAbnormalState
          (UDS_CharacterWeaponAnimLayer *this,FAnimUpdateContext *param_1,
          FAnimNodeReference *param_2)

{
  this->bIsNewAbnormal = true;
  return;
}

// OnEnteredAvoidState @ 14b889230

void __thiscall
UDS_CharacterWeaponAnimLayer::OnEnteredAvoidState
          (UDS_CharacterWeaponAnimLayer *this,FAnimUpdateContext *param_1,
          FAnimNodeReference *param_2)

{
  this->bIsNewAvoid = false;
  return;
}

// OnEnteredSkillState @ 14b889250

void __thiscall
UDS_CharacterWeaponAnimLayer::OnEnteredSkillState
          (UDS_CharacterWeaponAnimLayer *this,FAnimUpdateContext *param_1,
          FAnimNodeReference *param_2)

{
  this->bIsNewSkill = false;
  return;
}

// OnInitVariables @ 14b889b00

void __thiscall UDS_CharacterWeaponAnimLayer::OnInitVariables(UDS_CharacterWeaponAnimLayer *this)

{
  int iVar1;
  UClass *pUVar2;
  UObject *local_res8;
  
  UDS_AnimLayerBase::OnInitVariables((UDS_AnimLayerBase *)this);
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x448);
  if (local_res8 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_BattleAnim_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14b889b4b;
  }
  local_res8 = (UObject *)0x0;
LAB_14b889b4b:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x458,(FObjectPtr)&local_res8);
  return;
}

// OnUnBindAnimationEvents @ 14b894220

void __thiscall
UDS_CharacterWeaponAnimLayer::OnUnBindAnimationEvents(UDS_CharacterWeaponAnimLayer *this)

{
  char cVar1;
  UObject *pUVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    return;
  }
  return;
}

// RefreshAbnormalState @ 14b895ba0

void __thiscall
UDS_CharacterWeaponAnimLayer::RefreshAbnormalState
          (UDS_CharacterWeaponAnimLayer *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  if ((param_2->AddedCharState != Abnormal) && (param_2->AddedCharState != Abnormal_NonControl)) {
    this->bIsNewAbnormal = false;
    return;
  }
  this->bIsNewAbnormal = true;
  return;
}

// RefreshAvoidState @ 14b896460

void __thiscall UDS_CharacterWeaponAnimLayer::RefreshAvoidState(UDS_CharacterWeaponAnimLayer *this)

{
  EDS_AvoidAnimState EVar1;
  bool bVar2;
  FDS_BattleAnimSharedData *pFVar3;
  UDS_CharStateData *pUVar4;
  char cVar5;
  EDS_CharState local_res8;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x438);
  if (bVar2) {
    pFVar3 = UDS_BattleAnimLayerBase::GetBattleAnimSharedData((UDS_BattleAnimLayerBase *)this);
    EVar1 = this->AvoidState;
    this->AvoidState = None;
    pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    local_res8 = Avoid;
    bVar2 = UDS_CharStateData::HasCharState(pUVar4,&local_res8);
    if (bVar2) {
      pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      local_res8 = CONCAT44(local_res8._4_4_,0xe);
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res8);
      cVar5 = '\x01';
      if (pFVar3->bIsBattleState != false) {
        cVar5 = '\x03';
      }
      this->AvoidState = cVar5 + bVar2;
      if (EVar1 != (EDS_AvoidAnimState)(cVar5 + bVar2)) {
        this->bIsNewAvoid = true;
      }
    }
  }
  return;
}

// RefreshSkillState @ 14b8973e0

void __thiscall
UDS_CharacterWeaponAnimLayer::RefreshSkillState
          (UDS_CharacterWeaponAnimLayer *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  this->bIsNewSkill = param_2->AddedCharState == Skill;
  return;
}

