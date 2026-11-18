// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 69

// StaticClass @ 14b422440

UClass * __cdecl UDS_BattleAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BattleAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BattleAnim",
               &Z_Registration_Info_UClass_UDS_BattleAnim.InnerSingleton,
               StaticRegisterNativesUDS_BattleAnim,0x770,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_BattleAnim>,
               InternalVTableHelperCtorCaller<UDS_BattleAnim>,local_res8,
               UDS_CharacterAnimBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BattleAnim.InnerSingleton;
}

// UDS_BattleAnim @ 14b423d60

UDS_BattleAnim * __thiscall
UDS_BattleAnim::UDS_BattleAnim(UDS_BattleAnim *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_CharacterAnimBase::UDS_CharacterAnimBase((UDS_CharacterAnimBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_BattleAnim__6B_;
  (this->BattleAnimSharedData).ActionAniType = 0;
  (this->BattleAnimSharedData).ActionAniIndex = 0;
  (this->BattleAnimSharedData).HitAdditiveAnimLength = 0.0;
  (this->BattleAnimSharedData).bIsHitAdditive = false;
  (this->BattleAnimSharedData).bIsHitAdditive_Direction = false;
  (this->BattleAnimSharedData).HitAdditiveAnimElapsedTime = 0.0;
  (this->BattleAnimSharedData).bIsBattleState = false;
  (this->BattleAnimSharedData).bIsPreBattleState = false;
  (this->BattleAnimSharedData).bIsSuicideSkill = false;
  (this->BattleAnimSharedData).PrevAttackState = None;
  (this->BattleAnimSharedData).AttackState = None;
  (this->BattleAnimSharedData).HitAdditiveDirectionAnimLength = 0.33;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime = 0.0;
  (this->BattleAnimSharedData).AbnormalType = None;
  (this->BattleAnimSharedData).PreAbnormalType = None;
  (this->BattleAnimSharedData).bIsNewAbnormal = false;
  (this->BattleAnimSharedData).bIsAbnormalEndAnim = false;
  (this->BattleAnimSharedData).ShieldMoveDirection = Forward;
  (this->BattleAnimSharedData).AimModeMoveDirection = Forward;
  (this->BattleAnimSharedData).bIsAimMode = false;
  (this->BattleAnimSharedData).HitDirection2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->BattleAnimSharedData).bIsDeadAbnormal = false;
  (this->BattleAnimSharedData).bIsHeightIncreased = false;
  (this->BattleAnimSharedData).HeightConditionType = Ground;
  (this->BattleAnimSharedData).StartHeightConditionType = Max;
  (this->BattleAnimSharedData).TargetHeightConditionType = Max;
  (this->PlayHitAdditiveAnim).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->HitAdditiveAnimDefault).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->HitAdditiveAnimLeft).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->HitAdditiveAnimRight).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  this->AbnormalType = None;
  this->bIsNewAbnormal = false;
  this->bIsAbnormalEndAnim = false;
  this->bIsDeadAbnormal = false;
  this->bIsNewSkillAbility = false;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SkillDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  this->PrevActionAniIndex = -1;
  this->ActionAniIndex_NormalAttack = -1;
  this->StartAniIndex_Skill = -1;
  this->ActionAniIndex_Skill = -1;
  this->EndAniIndex_Skill = -1;
  return this;
}

// ~UDS_BattleAnim @ 14b4240f0

void __thiscall UDS_BattleAnim::~UDS_BattleAnim(UDS_BattleAnim *this)

{
  this->_padding_ = (longlong)&___7UDS_BattleAnim__6B_;
  UDS_CharacterAnimBase::~UDS_CharacterAnimBase((UDS_CharacterAnimBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4252f0

UClass * __cdecl UDS_BattleAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BattleAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BattleAnim",
               &Z_Registration_Info_UClass_UDS_BattleAnim.InnerSingleton,
               StaticRegisterNativesUDS_BattleAnim,0x770,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_BattleAnim>,
               InternalVTableHelperCtorCaller<UDS_BattleAnim>,local_res8,
               UDS_CharacterAnimBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BattleAnim.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b4253f0

bool __thiscall UDS_BattleAnim::ShouldChangeCharStateEvent(UDS_BattleAnim *this)

{
  return true;
}

// ShouldUseHitAdditive @ 14b425410

bool __thiscall UDS_BattleAnim::ShouldUseHitAdditive(UDS_BattleAnim *this)

{
  return true;
}

// StaticRegisterNativesUDS_BattleAnim @ 14b4255b0

void __cdecl UDS_BattleAnim::StaticRegisterNativesUDS_BattleAnim(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x27;
  local_18.DataPtr = Z_Construct_UClass_UDS_BattleAnim_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetActionAniIndex @ 14b426340

void __cdecl UDS_BattleAnim::execGetActionAniIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2c].field_0x4;
  return;
}

// execGetActionAniType @ 14b426370

void __cdecl UDS_BattleAnim::execGetActionAniType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x2c);
  return;
}

// execGetHeightConditionType @ 14b426420

void __cdecl
UDS_BattleAnim::execGetHeightConditionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0xe;
  return;
}

// execGetHeightMoveState @ 14b426450

void __cdecl UDS_BattleAnim::execGetHeightMoveState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0x11;
  return;
}

// execGetHitAdditiveAnimElapsedTime @ 14b426480

void __cdecl
UDS_BattleAnim::execGetHitAdditiveAnimElapsedTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2c].field_0x10;
  return;
}

// execGetHitDirection2D @ 14b4264b0

void __cdecl UDS_BattleAnim::execGetHitDirection2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)(param_1 + 0x2d);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2c].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetStartHeightConditionType @ 14b4264e0

void __cdecl
UDS_BattleAnim::execGetStartHeightConditionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0xf;
  return;
}

// execGetTargetHeightConditionType @ 14b426510

void __cdecl
UDS_BattleAnim::execGetTargetHeightConditionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0x10;
  return;
}

// execHasEndAniIndex_Skill @ 14b426540

void __cdecl
UDS_BattleAnim::execHasEndAniIndex_Skill(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = HasEndAniIndex_Skill((UDS_BattleAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execHasStartAniIndex_Skill @ 14b426580

void __cdecl
UDS_BattleAnim::execHasStartAniIndex_Skill(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = HasStartAniIndex_Skill((UDS_BattleAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsAbnormalEndAnim @ 14b4265c0

void __cdecl UDS_BattleAnim::execIsAbnormalEndAnim(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0xb;
  return;
}

// execIsAbnormalState @ 14b4265f0

void __cdecl UDS_BattleAnim::execIsAbnormalState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsAbnormalState((UDS_BattleAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsBattleState @ 14b426630

void __cdecl UDS_BattleAnim::execIsBattleState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2b].field_0x20 == '\x01';
  return;
}

// execIsHeightIncreased @ 14b426660

void __cdecl UDS_BattleAnim::execIsHeightIncreased(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0xd;
  return;
}

// execIsHitAdditive @ 14b426690

void __cdecl UDS_BattleAnim::execIsHitAdditive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2c].field_0xc;
  return;
}

// execIsHitAdditiveDirection @ 14b4266c0

void __cdecl
UDS_BattleAnim::execIsHitAdditiveDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2c].field_0xd;
  return;
}

// execIsInAbnormalAirborne @ 14b4266f0

void __cdecl
UDS_BattleAnim::execIsInAbnormalAirborne(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x1e';
  return;
}

// execIsInAbnormalAttackback @ 14b426720

void __cdecl
UDS_BattleAnim::execIsInAbnormalAttackback(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x15';
  return;
}

// execIsInAbnormalDeadAbnormal @ 14b426750

void __cdecl
UDS_BattleAnim::execIsInAbnormalDeadAbnormal(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0xc;
  return;
}

// execIsInAbnormalHit @ 14b426780

void __cdecl UDS_BattleAnim::execIsInAbnormalHit(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x01';
  return;
}

// execIsInAbnormalHitMove1 @ 14b4267b0

void __cdecl
UDS_BattleAnim::execIsInAbnormalHitMove1(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x16';
  return;
}

// execIsInAbnormalHitMove2 @ 14b4267e0

void __cdecl
UDS_BattleAnim::execIsInAbnormalHitMove2(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x17';
  return;
}

// execIsInAbnormalHold @ 14b426810

void __cdecl UDS_BattleAnim::execIsInAbnormalHold(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x0f';
  return;
}

// execIsInAbnormalKnockBack @ 14b426840

void __cdecl
UDS_BattleAnim::execIsInAbnormalKnockBack(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x18';
  return;
}

// execIsInAbnormalKnockDown @ 14b426870

void __cdecl
UDS_BattleAnim::execIsInAbnormalKnockDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x1c';
  return;
}

// execIsInAbnormalKnockFront @ 14b4268a0

void __cdecl
UDS_BattleAnim::execIsInAbnormalKnockFront(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x1b';
  return;
}

// execIsInAbnormalLapidification @ 14b4268d0

void __cdecl
UDS_BattleAnim::execIsInAbnormalLapidification(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x10';
  return;
}

// execIsInAbnormalMagicAirborne @ 14b426900

void __cdecl
UDS_BattleAnim::execIsInAbnormalMagicAirborne(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x1f';
  return;
}

// execIsInAbnormalMoveBlock @ 14b426930

void __cdecl
UDS_BattleAnim::execIsInAbnormalMoveBlock(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x1a';
  return;
}

// execIsInAbnormalParrying @ 14b426960

void __cdecl
UDS_BattleAnim::execIsInAbnormalParrying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\f';
  return;
}

// execIsInAbnormalPushToPoint @ 14b426990

void __cdecl
UDS_BattleAnim::execIsInAbnormalPushToPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x19';
  return;
}

// execIsInAbnormalSleep @ 14b4269c0

void __cdecl UDS_BattleAnim::execIsInAbnormalSleep(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\r';
  return;
}

// execIsInAbnormalStiffen @ 14b4269f0

void __cdecl UDS_BattleAnim::execIsInAbnormalStiffen(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\v';
  return;
}

// execIsInAbnormalStun @ 14b426a20

void __cdecl UDS_BattleAnim::execIsInAbnormalStun(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x0e';
  return;
}

// execIsInAbnormalThrow @ 14b426a50

void __cdecl UDS_BattleAnim::execIsInAbnormalThrow(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2d].field_0x8 == '\x1d';
  return;
}

// execIsNewAbnormal @ 14b426a80

void __cdecl UDS_BattleAnim::execIsNewAbnormal(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0xa;
  return;
}

// execIsSkillState @ 14b426ab0

void __cdecl UDS_BattleAnim::execIsSkillState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x2b].field_0x24 != '\0';
  return;
}

// execIsSuicideSkill @ 14b426ae0

void __cdecl UDS_BattleAnim::execIsSuicideSkill(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2b].field_0x22;
  return;
}

// execSetAdditiveAnimLength @ 14b426cf0

void __cdecl
UDS_BattleAnim::execSetAdditiveAnimLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAdditiveAnimLength((UDS_BattleAnim *)param_1,local_res10[0]);
  return;
}

// UDS_BattleAnim @ 14b864780

UDS_BattleAnim * __thiscall
UDS_BattleAnim::UDS_BattleAnim(UDS_BattleAnim *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  undefined8 uVar2;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_CharacterAnimBase__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar2;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)&this->_padding_ = 0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar2;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 8;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  FDS_AnimSharedData::FDS_AnimSharedData((FDS_AnimSharedData *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_BattleAnim__6B_;
  (this->BattleAnimSharedData).bIsBattleState = false;
  (this->BattleAnimSharedData).bIsPreBattleState = false;
  (this->BattleAnimSharedData).bIsSuicideSkill = false;
  (this->BattleAnimSharedData).PrevAttackState = None;
  (this->BattleAnimSharedData).AttackState = None;
  (this->BattleAnimSharedData).ActionAniType = 0;
  (this->BattleAnimSharedData).ActionAniIndex = 0;
  (this->BattleAnimSharedData).HitAdditiveAnimLength = 0.0;
  (this->BattleAnimSharedData).bIsHitAdditive = false;
  (this->BattleAnimSharedData).bIsHitAdditive_Direction = false;
  (this->BattleAnimSharedData).HitAdditiveAnimElapsedTime = 0.0;
  (this->BattleAnimSharedData).HitAdditiveDirectionAnimLength = 0.33;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime = 0.0;
  (this->BattleAnimSharedData).AbnormalType = None;
  (this->BattleAnimSharedData).PreAbnormalType = None;
  (this->BattleAnimSharedData).bIsNewAbnormal = false;
  (this->BattleAnimSharedData).bIsAbnormalEndAnim = false;
  (this->BattleAnimSharedData).bIsDeadAbnormal = false;
  (this->BattleAnimSharedData).bIsHeightIncreased = false;
  (this->BattleAnimSharedData).HeightConditionType = Ground;
  (this->BattleAnimSharedData).StartHeightConditionType = Max;
  (this->BattleAnimSharedData).HitDirection2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->BattleAnimSharedData).TargetHeightConditionType = Max;
  (this->BattleAnimSharedData).ShieldMoveDirection = Forward;
  (this->BattleAnimSharedData).AimModeMoveDirection = Forward;
  (this->BattleAnimSharedData).bIsAimMode = false;
  (this->PlayHitAdditiveAnim).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->HitAdditiveAnimDefault).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->HitAdditiveAnimLeft).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->HitAdditiveAnimRight).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  this->AbnormalType = None;
  this->bIsNewAbnormal = false;
  this->bIsAbnormalEndAnim = false;
  this->bIsDeadAbnormal = false;
  this->PrevActionAniIndex = -1;
  this->ActionAniIndex_NormalAttack = -1;
  this->StartAniIndex_Skill = -1;
  this->ActionAniIndex_Skill = -1;
  this->EndAniIndex_Skill = -1;
  this->bIsNewSkillAbility = false;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SkillDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// HasEndAniIndex_Skill @ 14b879960

bool __thiscall UDS_BattleAnim::HasEndAniIndex_Skill(UDS_BattleAnim *this)

{
  return (bool)((byte)((uint)this->EndAniIndex_Skill >> 0x1f) ^ 1);
}

// HasStartAniIndex_Skill @ 14b87a080

bool __thiscall UDS_BattleAnim::HasStartAniIndex_Skill(UDS_BattleAnim *this)

{
  return (bool)((byte)((uint)this->StartAniIndex_Skill >> 0x1f) ^ 1);
}

// IsAbnormalState @ 14b87d2b0

bool __thiscall UDS_BattleAnim::IsAbnormalState(UDS_BattleAnim *this)

{
  if (((this->BattleAnimSharedData).bIsDeadAbnormal == false) &&
     ((this->BattleAnimSharedData).AbnormalType == None)) {
    return false;
  }
  return true;
}

// IsValidReferencedPtr @ 14b87e750

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

bool __thiscall UDS_BattleAnim::IsValidReferencedPtr(UDS_BattleAnim *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = UDS_AnimInstanceBase::IsValidReferencedPtr((UDS_AnimInstanceBase *)this);
  if (bVar2) {
    bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if ((((bVar2) ||
         (bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                             (void *)0x0), bVar2)) ||
        (bVar2 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&this->_padding_,
                            (void *)0x0), bVar2)) ||
       (bVar2 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> *)&this->_padding_,
                           (void *)0x0), bVar2)) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2829040579294265144>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_CharacterAnimBase.cpp"
                         ,200,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_CharacterAnimBase::IsValidReferencedPtr",0x2b,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xc9,L"Invalid Referenced Ptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      bVar2 = TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->AbnormalAbilityData,(void *)0x0);
      if (!bVar2) {
        return true;
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3725524275445104416>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_BattleAnim.cpp"
                         ,0xe0,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return false;
}

// OnBindAnimationEvents @ 14b880ff0

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

void __thiscall UDS_BattleAnim::OnBindAnimationEvents(UDS_BattleAnim *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  UDS_AnimInstanceBase::OnBindAnimationEvents((UDS_AnimInstanceBase *)this);
  (**(code **)(*(longlong *)this->_padding_ + 0x1b8))((longlong *)this->_padding_,&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pcVar1 = *(code **)(this->_padding_ + 0x3e0);
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    (*pcVar1)(this,pUVar3[6].field_0x11);
    pcVar1 = *(code **)(this->_padding_ + 1000);
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    (*pcVar1)(this,pUVar3[6].field_0x10);
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_CharacterAnimBase>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3[4].field_0x10,(UDS_CharacterAnimBase *)(local_res10 + 1),(pmf_381e4520)this);
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_CharacterAnimBase>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3[5].field_0x8,(UDS_CharacterAnimBase *)(local_res10 + 1),(pmf_381e4520)this);
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_BattleAnim>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar3[7].field_0x8,(UDS_BattleAnim *)&local_res8,(pmf_0cbe4a72)this);
  bVar2 = FWeakObjectPtr::IsValid(&(this->SkillDataSet).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x10,this);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_BattleAnim>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                *)&pUVar3[4].field_0x10,(UDS_BattleAnim *)&local_res8,(pmf_da5969f4)this);
    pUVar3 = FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[5].field_0x8,this);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_BattleAnim>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                *)&pUVar3[5].field_0x8,(UDS_BattleAnim *)&local_res8,(pmf_da5969f4)this);
  }
  if (this->_padding_ == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong64 *)(this->_padding_ + 8);
  }
  UDS_EntityData::GetData((ulong64)local_res10,uVar4);
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_HeightMoveState,enum_EDS_HeightConditionType,enum_EDS_HeightConditionType,float),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_BattleAnim>
              (&pUVar3[6].field_0x18,(UDS_BattleAnim *)&local_res8,(pmf_3ec060d4)this);
  }
  return;
}

// OnChangedCharState @ 14b885380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_BattleAnim::OnChangedCharState
          (UDS_BattleAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  UDS_CharStateData *pUVar6;
  UDS_AbnormalAbilityData *this_00;
  FTimerManager *this_01;
  UAnimSequence *pUVar7;
  float fVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  FDS_ChangedCharStateInfo local_58;
  
  local_58.StateTag.TagName = (param_2->StateTag).TagName;
  local_58.bIsStateTagOn = param_2->bIsStateTagOn;
  local_58._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_58.AddedCharState = param_2->AddedCharState;
  local_58.RemovedCharState = param_2->RemovedCharState;
  local_58.AddedCharDetailState = param_2->AddedCharDetailState;
  local_58.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_CharacterAnimBase::OnChangedCharState((UDS_CharacterAnimBase *)this,param_1,&local_58);
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar4) {
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (!bVar4) {
    return;
  }
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8.ObjectIndex = 0x28;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res8);
  (this->BattleAnimSharedData).bIsAbnormalEndAnim = bVar4;
  this->bIsAbnormalEndAnim = bVar4;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8.ObjectIndex = 0x80000;
  local_res8.ObjectSerialNumber = 0;
  bVar4 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)&local_res8);
  if (bVar4) {
    (this->BattleAnimSharedData).bIsDeadAbnormal = false;
    cVar5 = '\0';
    this->bIsDeadAbnormal = false;
  }
  else {
    cVar5 = (this->BattleAnimSharedData).bIsDeadAbnormal;
    if ((bool)cVar5 == false) {
      if ((this->BattleAnimSharedData).bIsAbnormalEndAnim == false) {
        pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_res8.ObjectIndex = 0x40000;
        local_res8.ObjectSerialNumber = 0;
        bVar4 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)&local_res8);
        if (!bVar4) goto LAB_14b8854a1;
        this_00 = (UDS_AbnormalAbilityData *)
                  FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
        bVar4 = UDS_AbnormalAbilityData::UsableDeadAbnormalState(this_00);
        if (!bVar4) goto LAB_14b8854a1;
        cVar5 = true;
      }
      else {
LAB_14b8854a1:
        cVar5 = false;
      }
      (this->BattleAnimSharedData).bIsDeadAbnormal = (bool)cVar5;
      this->bIsDeadAbnormal = (bool)cVar5;
    }
  }
  if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') ||
     (*(char *)((longlong)&this->_padding_ + 1) == '\x01')) {
    this->AbnormalType = None;
    (this->BattleAnimSharedData).AbnormalType = None;
    (this->BattleAnimSharedData).PreAbnormalType = None;
    (this->BattleAnimSharedData).AttackState = None;
    return;
  }
  if (cVar5 == '\x01') {
    return;
  }
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8.ObjectIndex = 0x11;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res8);
  (this->BattleAnimSharedData).bIsSuicideSkill = bVar4;
  local_res18[0] = param_1.WeakPtr;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
  local_res8.ObjectIndex = 0x200;
  local_res8.ObjectSerialNumber = 0;
  bVar4 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)&local_res8);
  if (bVar4) {
    lVar1 = this->_padding_;
    (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime = 0.0;
    dVar2 = *(double *)(lVar1 + 0x30);
    dVar3 = *(double *)(lVar1 + 0x38);
    (this->BattleAnimSharedData).bIsHitAdditive_Direction = true;
    (this->BattleAnimSharedData).HitDirection2D.field0_0x0._s_0.X = dVar2;
    (this->BattleAnimSharedData).HitDirection2D.field0_0x0._s_0.Y = dVar3;
  }
  if (((uint)(int)param_2->AddedCharState >> 9 & 1) == 0) goto LAB_14b885625;
  if ((this->HitAdditiveAnimLeft).field0_0x0.DebugPtr == (UAnimSequence *)0x0) {
LAB_14b885599:
    if ((this->HitAdditiveAnimRight).field0_0x0.DebugPtr != (UAnimSequence *)0x0) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
      local_res8.ObjectIndex = 0x91;
      bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res8);
      if (!bVar4) goto LAB_14b8855de;
      TObjectPtr<UAnimSequence>::operator=(&this->PlayHitAdditiveAnim,&this->HitAdditiveAnimRight);
      pUVar7 = (this->HitAdditiveAnimRight).field0_0x0.DebugPtr;
      goto LAB_14b885606;
    }
LAB_14b8855de:
    pUVar7 = (this->HitAdditiveAnimDefault).field0_0x0.DebugPtr;
    if (pUVar7 != (UAnimSequence *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      pUVar7 = (this->HitAdditiveAnimDefault).field0_0x0.DebugPtr;
      goto LAB_14b8855ff;
    }
  }
  else {
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
    local_res8.ObjectIndex = 0x90;
    bVar4 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res8);
    if (!bVar4) goto LAB_14b885599;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (this->HitAdditiveAnimLeft).field0_0x0.DebugPtr, pUVar7 != (UAnimSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pUVar7 = (this->HitAdditiveAnimLeft).field0_0x0.DebugPtr;
LAB_14b8855ff:
    (this->PlayHitAdditiveAnim).field0_0x0.DebugPtr = pUVar7;
LAB_14b885606:
    fVar8 = (float)(**(code **)(pUVar7->_padding_ + 0x2c0))();
    (this->BattleAnimSharedData).HitAdditiveAnimLength = fVar8;
  }
  (this->BattleAnimSharedData).HitAdditiveAnimElapsedTime = 0.0;
  (this->BattleAnimSharedData).bIsHitAdditive = true;
LAB_14b885625:
  local_res8 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    (this->BattleAnimSharedData).bIsPreBattleState = (this->BattleAnimSharedData).bIsBattleState;
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res8);
    local_res18[0].ObjectIndex = 0x100;
    local_res18[0].ObjectSerialNumber = 0;
    bVar4 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)local_res18);
    (this->BattleAnimSharedData).bIsBattleState = bVar4;
    if ((this->BattleAnimSharedData).bIsPreBattleState != bVar4) {
      local_res18[0].ObjectIndex = 0;
      local_res18[0].ObjectSerialNumber = 0;
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      FTimerManager::SetTimer<UDS_BattleAnim>
                (this_01,(FTimerHandle *)local_res18,this,(pmf_36bc7c1e)0x14b891fe0,__real_3dcccccd,
                 false,__real_bf800000);
    }
  }
  return;
}

// OnChangedHeightCondition @ 14b8867a0

void __thiscall
UDS_BattleAnim::OnChangedHeightCondition
          (UDS_BattleAnim *this,EDS_HeightMoveState param_1,EDS_HeightConditionType param_2,
          EDS_HeightConditionType param_3,float param_4)

{
  (this->BattleAnimSharedData).HeightMoveState = param_1;
  if ((param_1 == None) || (param_1 == MoveStart)) {
    (this->BattleAnimSharedData).StartHeightConditionType = Max;
    (this->BattleAnimSharedData).TargetHeightConditionType = param_3;
    (this->BattleAnimSharedData).bIsHeightIncreased = false;
  }
  else if (param_1 == ComeBackStart) {
    (this->BattleAnimSharedData).StartHeightConditionType = param_2;
    (this->BattleAnimSharedData).bIsHeightIncreased = 0.0 < param_4;
    return;
  }
  return;
}

// OnChangedHighestAbnormalInfo @ 14b886800

void __thiscall
UDS_BattleAnim::OnChangedHighestAbnormalInfo(UDS_BattleAnim *this,FDS_AbnormalInfo *param_1)

{
  EDS_AbnormalType EVar1;
  EDS_AbnormalType EVar2;
  char cVar3;
  bool bVar4;
  
  cVar3 = (**(code **)(this->_padding_ + 0x3c8))();
  if (cVar3 != '\0') {
    bVar4 = FDS_AbnormalInfo::HasAnimation(param_1);
    if (bVar4) {
      EVar1 = (this->BattleAnimSharedData).AbnormalType;
      (this->BattleAnimSharedData).PreAbnormalType = EVar1;
      (this->BattleAnimSharedData).bIsNewAbnormal = false;
      EVar2 = param_1->AbnormalType;
      (this->BattleAnimSharedData).AbnormalType = EVar2;
      this->AbnormalType = EVar2;
      this->bIsNewAbnormal = false;
      if (EVar2 != None) {
        (this->BattleAnimSharedData).bIsNewAbnormal = EVar1 == EVar2;
        this->bIsNewAbnormal = EVar1 == EVar2;
      }
    }
  }
  return;
}

// OnClearVariables @ 14b8877a0

void __thiscall UDS_BattleAnim::OnClearVariables(UDS_BattleAnim *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->SkillDataSet).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->AbnormalAbilityData).WeakPtr = local_res8;
  return;
}

// OnEnteredAbnormalState @ 14b889200

void __thiscall
UDS_BattleAnim::OnEnteredAbnormalState
          (UDS_BattleAnim *this,FAnimNode_StateMachine *param_1,int param_2,int param_3)

{
  (this->BattleAnimSharedData).bIsNewAbnormal = false;
  this->bIsNewAbnormal = false;
  return;
}

// OnEnteredSkillAbilityState @ 14b889240

void __thiscall
UDS_BattleAnim::OnEnteredSkillAbilityState
          (UDS_BattleAnim *this,FAnimNode_StateMachine *param_1,int param_2,int param_3)

{
  this->bIsNewSkillAbility = false;
  return;
}

// OnInitVariables @ 14b889670

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

void __thiscall UDS_BattleAnim::OnInitVariables(UDS_BattleAnim *this)

{
  ulong64 uVar1;
  code *pcVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> TVar7;
  longlong *plVar8;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar9;
  USkeletalMeshComponent *pUVar10;
  FName *pFVar11;
  UObject *pUVar12;
  AActor *this_00;
  TRotator<double> *pTVar13;
  TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> TVar14;
  TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> TVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  FName local_res8;
  undefined8 local_res10;
  ulong64 local_res18;
  double local_48;
  double local_40;
  double local_38;
  TRotator<double> local_30;
  
  cVar5 = (**(code **)(this->_padding_ + 0x3d0))();
  if (cVar5 == '\x01') {
    TVar6 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)this->_padding_);
    this->_padding_ = *(longlong *)TVar6.WeakPtr;
  }
  if (this->_padding_ != 0) {
    TVar7 = UDS_CommonSetting::GetInst();
    this->_padding_ = *(longlong *)TVar7.WeakPtr;
    plVar8 = (longlong *)this->_padding_;
    uVar1 = plVar8[1];
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x78))(plVar8,&local_res8);
    this->_padding_ = *plVar8;
    TVar6 = UDS_CharStateData::GetData((ulong64)&local_res8);
    this->_padding_ = *(longlong *)TVar6.WeakPtr;
    TVar9 = UDS_EntityData::GetData((ulong64)&local_res8,uVar1);
    this->_padding_ = *(longlong *)TVar9.WeakPtr;
    *(undefined1 *)&this->_padding_ = 1;
    pUVar10 = UAnimInstance::GetOwningComponent((UAnimInstance *)this);
    pcVar2 = *(code **)(pUVar10->_padding_ + 0x528);
    pFVar11 = ::FName::FName(&local_res8,L"head");
    (*pcVar2)(pUVar10,&local_48,*pFVar11);
    this->_padding_ = (longlong)(local_48 - (double)this->_padding_);
    this->_padding_ = (longlong)(local_40 - (double)this->_padding_);
    this->_padding_ = (longlong)(local_38 - (double)this->_padding_);
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    lVar3 = *(longlong *)(pUVar12 + 0xb);
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar3 != 0) {
      uVar16 = *(undefined4 *)(lVar3 + 0x210);
      uVar17 = *(undefined4 *)(lVar3 + 0x214);
      uVar18 = *(undefined4 *)(lVar3 + 0x218);
      uVar19 = *(undefined4 *)(lVar3 + 0x21c);
      uVar20 = *(double *)(lVar3 + 0x220);
    }
    *(undefined4 *)&this->_padding_ = uVar16;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar17;
    *(undefined4 *)&this->_padding_ = uVar18;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar19;
    this->_padding_ = uVar20;
    this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar13 = AActor::GetActorRotation(this_00,&local_30);
    dVar4 = pTVar13->Yaw;
    this->_padding_ = (longlong)pTVar13->Pitch;
    this->_padding_ = (longlong)dVar4;
    this->_padding_ = (longlong)pTVar13->Roll;
    UDS_CharacterAnimBase::InitAnimLength((UDS_CharacterAnimBase *)this);
    UDS_CharacterAnimBase::InitAlwaysLinkedAnimLayers((UDS_CharacterAnimBase *)this);
  }
  if (this->_padding_ != 0) {
    local_res10 = *(undefined8 *)(this->_padding_ + 8);
    TVar14 = TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res8);
                    /* WARNING: Load size is inaccurate */
    (this->SkillDataSet).WeakPtr = *TVar14.WeakPtr;
    local_res8.ComparisonIndex.Value._0_1_ = 0x30;
    TVar15 = UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                       (&local_res18,(EDS_AbilityTagType *)&local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->AbnormalAbilityData).WeakPtr = *TVar15.WeakPtr;
  }
  return;
}

// OnNativeInitializeAnimation @ 14b88a460

void __thiscall UDS_BattleAnim::OnNativeInitializeAnimation(UDS_BattleAnim *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FName local_res10;
  UDS_BattleAnim *local_res18;
  FName local_res20;
  FName local_78;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  ::FName::FName(&local_res20,L"AbnormalSM");
  ::FName::FName(&local_78,L"SkillAbilitySM");
  ::FName::FName(&local_res10,L"Locomotion");
  local_70 = (undefined1  [8])0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_68;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAnimNode_StateMachine__HH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_BattleAnim____A6AXAEBUFAnimNode_StateMachine__HH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_BattleAnim *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_BattleAnim *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res18);
    puVar1[4] = _vcall__1032__flat______;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  UAnimInstance::AddNativeStateExitBinding
            ((UAnimInstance *)this,&local_res20,&local_res10,
             (TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_58);
  if ((local_68.DelegateSize != 0) &&
     (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_68,0,0,0x10);
    local_68.DelegateSize = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  local_70 = (undefined1  [8])0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_68;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAnimNode_StateMachine__HH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_BattleAnim____A6AXAEBUFAnimNode_StateMachine__HH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_BattleAnim *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_BattleAnim *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res18);
    puVar1[4] = _vcall__1040__flat______;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  UAnimInstance::AddNativeStateExitBinding
            ((UAnimInstance *)this,&local_78,&local_res10,
             (TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_58);
  if ((local_68.DelegateSize != 0) &&
     (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_68,0,0,0x10);
    local_68.DelegateSize = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88aa20

void __thiscall
UDS_BattleAnim::OnNativeThreadSafeUpdateAnimation(UDS_BattleAnim *this,float param_1)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  EDS_HeightConditionType EVar4;
  UDS_EntityData *this_00;
  float fVar5;
  
  UDS_CharacterAnimBase::OnNativeThreadSafeUpdateAnimation((UDS_CharacterAnimBase *)this,param_1);
  cVar2 = (**(code **)(this->_padding_ + 0x420))(this);
  if (cVar2 == '\x01') {
    if ((this->BattleAnimSharedData).bIsHitAdditive == true) {
      fVar5 = param_1 + (this->BattleAnimSharedData).HitAdditiveAnimElapsedTime;
      pfVar1 = &(this->BattleAnimSharedData).HitAdditiveAnimLength;
      (this->BattleAnimSharedData).HitAdditiveAnimElapsedTime = fVar5;
      if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
        (this->BattleAnimSharedData).bIsHitAdditive = false;
      }
    }
    if ((this->BattleAnimSharedData).bIsHitAdditive_Direction == true) {
      fVar5 = param_1 + (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime;
      pfVar1 = &(this->BattleAnimSharedData).HitAdditiveDirectionAnimLength;
      (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime = fVar5;
      if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
        (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime = 0.0;
        (this->BattleAnimSharedData).bIsHitAdditive_Direction = false;
      }
    }
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar3) {
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    EVar4 = UDS_EntityData::GetHeightConditionType(this_00);
    (this->BattleAnimSharedData).HeightConditionType = EVar4;
  }
  return;
}

// OnNotifySkillActiveChanged @ 14b88c0a0

void __thiscall
UDS_BattleAnim::OnNotifySkillActiveChanged
          (UDS_BattleAnim *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    if (param_2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      (this->BattleAnimSharedData).ActionAniType = *(int *)&pUVar3[4].field_0x20;
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      (this->BattleAnimSharedData).ActionAniIndex = *(int *)&pUVar3[4].field_0x24;
    }
    pcVar1 = *(code **)(this->_padding_ + 0x430);
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    (*pcVar1)(this,&pUVar3[2].field_0x8,param_2);
  }
  return;
}

// OnRefreshBattleStateForNextTick @ 14b891fe0

void __thiscall UDS_BattleAnim::OnRefreshBattleStateForNextTick(UDS_BattleAnim *this)

{
  (this->BattleAnimSharedData).bIsPreBattleState = (this->BattleAnimSharedData).bIsBattleState;
  return;
}

// OnUnBindAnimationEvents @ 14b893fa0

void __thiscall UDS_BattleAnim::OnUnBindAnimationEvents(UDS_BattleAnim *this)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x1b8))((longlong *)this->_padding_,&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x10,this);
  }
  UDS_EntityData::GetData((ulong64)&local_res10,*(ulong64 *)(this->_padding_ + 8));
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x18,this);
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x8,this);
  bVar2 = FWeakObjectPtr::IsValid(&(this->SkillDataSet).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x10,this);
    pUVar3 = FWeakObjectPtr::Get(&(this->SkillDataSet).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[5].field_0x8,this);
  }
  if (this->_padding_ == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong64 *)(this->_padding_ + 8);
  }
  UDS_EntityData::GetData((ulong64)&local_res18,uVar4);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x18,this);
  }
  return;
}

// RefreshAttackState @ 14b896180

bool __thiscall
UDS_BattleAnim::RefreshAttackState(UDS_BattleAnim *this,FGameplayTag *param_1,bool param_2)

{
  bool bVar1;
  FDS_CharStateInfo *pFVar2;
  UDS_CharStateData *pUVar3;
  EDS_CharState local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((bVar1) &&
     (((this->BattleAnimSharedData).bIsSuicideSkill != true ||
      ((this->BattleAnimSharedData).AttackState == None)))) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar2 = UDS_CharStateData::GetCharStateInfo(param_1);
    if (pFVar2->State == Skill) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8 = Skill;
      bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_res8);
      if (!bVar1) {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_res8 = ToggleSkill;
        bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_res8);
        if (!bVar1) {
          this->bIsNewSkillAbility = false;
          (this->BattleAnimSharedData).AttackState = None;
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// RefreshBattleState @ 14b896530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_BattleAnim::RefreshBattleState
          (UDS_BattleAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FTimerManager *this_01;
  FWeakObjectPtr local_res10;
  FTimerHandle local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    (this->BattleAnimSharedData).bIsPreBattleState = (this->BattleAnimSharedData).bIsBattleState;
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0].Handle = 0x100;
    bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res18[0].Handle);
    (this->BattleAnimSharedData).bIsBattleState = bVar1;
    if ((this->BattleAnimSharedData).bIsPreBattleState != bVar1) {
      local_res18[0].Handle = 0;
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      FTimerManager::SetTimer<UDS_BattleAnim>
                (this_01,local_res18,this,(pmf_36bc7c1e)0x14b891fe0,__real_3dcccccd,false,
                 __real_bf800000);
    }
  }
  return;
}

// RefreshHitAdditive @ 14b8969e0

void __thiscall
UDS_BattleAnim::RefreshHitAdditive
          (UDS_BattleAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UDS_CharStateData *pUVar5;
  UAnimSequence *pUVar6;
  float fVar7;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18 [2];
  
  local_res10 = param_1.WeakPtr;
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res18[0] = HitAdditive;
  bVar4 = UDS_CharStateData::HasCharState(pUVar5,local_res18);
  if (bVar4) {
    lVar1 = this->_padding_;
    (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime = 0.0;
    dVar2 = *(double *)(lVar1 + 0x30);
    dVar3 = *(double *)(lVar1 + 0x38);
    (this->BattleAnimSharedData).bIsHitAdditive_Direction = true;
    (this->BattleAnimSharedData).HitDirection2D.field0_0x0._s_0.X = dVar2;
    (this->BattleAnimSharedData).HitDirection2D.field0_0x0._s_0.Y = dVar3;
  }
  if (((uint)(int)param_2->AddedCharState >> 9 & 1) == 0) {
    return;
  }
  if ((this->HitAdditiveAnimLeft).field0_0x0.DebugPtr == (UAnimSequence *)0x0) {
LAB_14b896a9a:
    if ((this->HitAdditiveAnimRight).field0_0x0.DebugPtr == (UAnimSequence *)0x0) {
LAB_14b896ae3:
      pUVar6 = (this->HitAdditiveAnimDefault).field0_0x0.DebugPtr;
      if (pUVar6 == (UAnimSequence *)0x0) goto LAB_14b896b1c;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      pUVar6 = (this->HitAdditiveAnimDefault).field0_0x0.DebugPtr;
      goto LAB_14b896b04;
    }
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,0x91);
    bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_res18);
    if (!bVar4) goto LAB_14b896ae3;
    TObjectPtr<UAnimSequence>::operator=(&this->PlayHitAdditiveAnim,&this->HitAdditiveAnimRight);
    pUVar6 = (this->HitAdditiveAnimRight).field0_0x0.DebugPtr;
  }
  else {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,0x90);
    bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)local_res18);
    if (!bVar4) goto LAB_14b896a9a;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (this->HitAdditiveAnimLeft).field0_0x0.DebugPtr, pUVar6 != (UAnimSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    pUVar6 = (this->HitAdditiveAnimLeft).field0_0x0.DebugPtr;
LAB_14b896b04:
    (this->PlayHitAdditiveAnim).field0_0x0.DebugPtr = pUVar6;
  }
  fVar7 = (float)(**(code **)(pUVar6->_padding_ + 0x2c0))();
  (this->BattleAnimSharedData).HitAdditiveAnimLength = fVar7;
LAB_14b896b1c:
  (this->BattleAnimSharedData).HitAdditiveAnimElapsedTime = 0.0;
  (this->BattleAnimSharedData).bIsHitAdditive = true;
  return;
}

// SetAdditiveAnimLength @ 14b8987e0

void __thiscall UDS_BattleAnim::SetAdditiveAnimLength(UDS_BattleAnim *this,float param_1)

{
  (this->BattleAnimSharedData).HitAdditiveAnimLength = param_1;
  return;
}

// UpdateHitAdditive @ 14b8a23c0

void __thiscall UDS_BattleAnim::UpdateHitAdditive(UDS_BattleAnim *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  
  if ((this->BattleAnimSharedData).bIsHitAdditive == true) {
    fVar2 = param_1 + (this->BattleAnimSharedData).HitAdditiveAnimElapsedTime;
    pfVar1 = &(this->BattleAnimSharedData).HitAdditiveAnimLength;
    (this->BattleAnimSharedData).HitAdditiveAnimElapsedTime = fVar2;
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      (this->BattleAnimSharedData).bIsHitAdditive = false;
    }
  }
  if ((this->BattleAnimSharedData).bIsHitAdditive_Direction == true) {
    fVar2 = param_1 + (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime;
    pfVar1 = &(this->BattleAnimSharedData).HitAdditiveDirectionAnimLength;
    (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime = fVar2;
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      (this->BattleAnimSharedData).HitAdditiveDirectionAnimElapsedTime = 0.0;
      (this->BattleAnimSharedData).bIsHitAdditive_Direction = false;
    }
  }
  return;
}

