// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 41

// StaticClass @ 14b4e4030

UClass * __cdecl UDS_MainPlayerAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerAnim",
               &Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton,
               StaticRegisterNativesUDS_MainPlayerAnim,0x8d0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MainPlayerAnim>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerAnim>,local_res8,
               UDS_MainPlayerCombatAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton;
}

// UDS_MainPlayerAnim @ 14b4e8fb0

UDS_MainPlayerAnim * __thiscall
UDS_MainPlayerAnim::UDS_MainPlayerAnim(UDS_MainPlayerAnim *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UDS_MainPlayerCombatAnim::UDS_MainPlayerCombatAnim((UDS_MainPlayerCombatAnim *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MainPlayerAnim__6B_;
  (this->ParentActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ParentActor).WeakPtr,(FObjectPtr)&local_res8);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentLocationDelta).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentLocationDelta).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentLocationDelta).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentDiffLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentDiffLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentDiffLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsActivePutWeapon = false;
  this->PutWeaponBlendWeight = 0.0;
  this->PutWeaponAnimLength = 0.0;
  this->RunPutWeaponAnimLength = 0.0;
  this->PutWeaponAnimElapsedTime = 0.0;
  this->WarpState = None;
  this->WarpRequestType = None;
  this->WarpType = None;
  this->CastingState = None;
  this->bIsCastingEndAnim = false;
  this->AimMode_RotatorX = 0.0;
  this->AimMode_Alpha = 0.0;
  this->LocomotionLean_AxisY = 0.0;
  this->bIsLocomotionLeanAdditive = false;
  this->CharSwitchState = None;
  this->bIsUseItem = false;
  this->bShouldUseLookAt = false;
  this->bIsMount = false;
  this->bIsInInteraction = false;
  return this;
}

// ~UDS_MainPlayerAnim @ 14b4e9d50

void __thiscall UDS_MainPlayerAnim::~UDS_MainPlayerAnim(UDS_MainPlayerAnim *this)

{
  this->_padding_ = (longlong)&___7UDS_MainPlayerAnim__6B_;
  UDS_MainPlayerCombatAnim::~UDS_MainPlayerCombatAnim((UDS_MainPlayerCombatAnim *)this);
  return;
}

// GetPrivateStaticClass @ 14b4ebb10

UClass * __cdecl UDS_MainPlayerAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerAnim",
               &Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton,
               StaticRegisterNativesUDS_MainPlayerAnim,0x8d0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MainPlayerAnim>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerAnim>,local_res8,
               UDS_MainPlayerCombatAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerAnim.InnerSingleton;
}

// ShouldUseLookAt @ 14b4ec010

bool __thiscall UDS_MainPlayerAnim::ShouldUseLookAt(UDS_MainPlayerAnim *this)

{
  return this->bShouldUseLookAt;
}

// StaticRegisterNativesUDS_MainPlayerAnim @ 14b4ec220

void __cdecl UDS_MainPlayerAnim::StaticRegisterNativesUDS_MainPlayerAnim(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UDS_MainPlayerAnim_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAimModeMoveDirection @ 14b4ed050

void __cdecl
UDS_MainPlayerAnim::execGetAimModeMoveDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0x13;
  return;
}

// execGetShieldMoveDirection @ 14b4ed110

void __cdecl
UDS_MainPlayerAnim::execGetShieldMoveDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0x12;
  return;
}

// execIsAimMode @ 14b4ed140

void __cdecl UDS_MainPlayerAnim::execIsAimMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2d].field_0x14;
  return;
}

// execIsCastingState @ 14b4ed170

void __cdecl UDS_MainPlayerAnim::execIsCastingState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsCastingState((UDS_MainPlayerAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsCharSwitchState @ 14b4ed1b0

void __cdecl
UDS_MainPlayerAnim::execIsCharSwitchState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsCharSwitchState((UDS_MainPlayerAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsClimbLayerLinked @ 14b4ed1f0

void __cdecl
UDS_MainPlayerAnim::execIsClimbLayerLinked(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsClimbLayerLinked((UDS_MainPlayerAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsInteractionLayerLinked @ 14b4ed230

void __cdecl
UDS_MainPlayerAnim::execIsInteractionLayerLinked(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsInteractionLayerLinked((UDS_MainPlayerAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsMountLayerLinked @ 14b4ed270

void __cdecl
UDS_MainPlayerAnim::execIsMountLayerLinked(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsMountLayerLinked((UDS_MainPlayerAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSwimLayerLinked @ 14b4ed2b0

void __cdecl
UDS_MainPlayerAnim::execIsSwimLayerLinked(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSwimLayerLinked((UDS_MainPlayerAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsToggleMoveState @ 14b4ed2f0

void __cdecl
UDS_MainPlayerAnim::execIsToggleMoveState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsToggleMoveState((UDS_MainPlayerAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsWarpState @ 14b4ed330

void __cdecl UDS_MainPlayerAnim::execIsWarpState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsWarpState((UDS_MainPlayerAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// UDS_MainPlayerAnim @ 14b864df0

UDS_MainPlayerAnim * __thiscall
UDS_MainPlayerAnim::UDS_MainPlayerAnim(UDS_MainPlayerAnim *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UDS_BattleAnim::UDS_BattleAnim((UDS_BattleAnim *)this,param_1);
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
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_MainPlayerAnim__6B_;
  (this->ParentActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ParentActor).WeakPtr,(FObjectPtr)&local_res8);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentLocationDelta).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentLocationDelta).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentLocationDelta).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentDiffLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentDiffLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentDiffLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsActivePutWeapon = false;
  this->PutWeaponBlendWeight = 0.0;
  this->PutWeaponAnimLength = 0.0;
  this->RunPutWeaponAnimLength = 0.0;
  this->PutWeaponAnimElapsedTime = 0.0;
  this->WarpState = None;
  this->WarpRequestType = None;
  this->WarpType = None;
  this->CastingState = None;
  this->bIsCastingEndAnim = false;
  this->AimMode_RotatorX = 0.0;
  this->AimMode_Alpha = 0.0;
  this->LocomotionLean_AxisY = 0.0;
  this->bIsLocomotionLeanAdditive = false;
  this->CharSwitchState = None;
  this->bIsUseItem = false;
  this->bShouldUseLookAt = false;
  this->bIsMount = false;
  this->bIsInInteraction = false;
  return this;
}

// IsCastingState @ 14b87d470

bool __thiscall UDS_MainPlayerAnim::IsCastingState(UDS_MainPlayerAnim *this)

{
  return this->CastingState != None;
}

// IsCharSwitchState @ 14b87d490

bool __thiscall UDS_MainPlayerAnim::IsCharSwitchState(UDS_MainPlayerAnim *this)

{
  return this->CharSwitchState != None;
}

// IsClimbLayerLinked @ 14b87d4b0

bool __thiscall UDS_MainPlayerAnim::IsClimbLayerLinked(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  
  bVar1 = UDS_CharacterAnimBase::IsAnimLayerLinked((UDS_CharacterAnimBase *)this,Climbing);
  return bVar1;
}

// IsInteractionLayerLinked @ 14b87da50

bool __thiscall UDS_MainPlayerAnim::IsInteractionLayerLinked(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  
  bVar1 = UDS_CharacterAnimBase::IsAnimLayerLinked((UDS_CharacterAnimBase *)this,Interaction);
  return bVar1;
}

// IsMountLayerLinked @ 14b87db10

bool __thiscall UDS_MainPlayerAnim::IsMountLayerLinked(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  
  bVar1 = UDS_CharacterAnimBase::IsAnimLayerLinked((UDS_CharacterAnimBase *)this,Mount);
  return bVar1;
}

// IsSwimLayerLinked @ 14b87e330

bool __thiscall UDS_MainPlayerAnim::IsSwimLayerLinked(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  
  bVar1 = UDS_CharacterAnimBase::IsAnimLayerLinked((UDS_CharacterAnimBase *)this,Swim);
  return bVar1;
}

// IsToggleMoveState @ 14b87e420

bool __thiscall UDS_MainPlayerAnim::IsToggleMoveState(UDS_MainPlayerAnim *this)

{
  return (char)this->_padding_ == '\x02';
}

// IsValidReferencedPtr @ 14b87eba0

bool __thiscall UDS_MainPlayerAnim::IsValidReferencedPtr(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  
  bVar1 = UDS_BattleAnim::IsValidReferencedPtr((UDS_BattleAnim *)this);
  return bVar1;
}

// IsWarpState @ 14b87ed60

bool __thiscall UDS_MainPlayerAnim::IsWarpState(UDS_MainPlayerAnim *this)

{
  return this->WarpState != None;
}

// OnBindAnimationEvents @ 14b881390

void __thiscall UDS_MainPlayerAnim::OnBindAnimationEvents(UDS_MainPlayerAnim *this)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr local_res8 [2];
  
  UDS_BattleAnim::OnBindAnimationEvents((UDS_BattleAnim *)this);
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x10,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WeaponType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_MainPlayerCombatAnim>
              (&pUVar3[7].field_0x10,(UDS_MainPlayerCombatAnim *)(local_res8 + 1),(pmf_63f9fa41)this
              );
  }
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    pFVar4 = (FWeakObjectPtr *)(**(code **)(*plVar1 + 0x1d0))(plVar1,local_res8);
    (this->ParentActor).WeakPtr = *pFVar4;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1d8),this)
    ;
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<AActor,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MainPlayerAnim>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<AActor,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)(this->_padding_ + 0x1d8),(UDS_MainPlayerAnim *)local_res8,(pmf_cfe3f1b6)this);
  }
  return;
}

// OnChangedCharState @ 14b885c70

void __thiscall
UDS_MainPlayerAnim::OnChangedCharState
          (UDS_MainPlayerAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  longlong *this_00;
  bool bVar1;
  UDS_CharStateData *pUVar2;
  EDS_CharState local_res8;
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_BattleAnim::OnChangedCharState((UDS_BattleAnim *)this,param_1,&local_38);
  this_00 = &this->_padding_;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8 = CONCAT44(local_res8._4_4_,0x13);
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
  *(bool *)((longlong)&this->_padding_ + 4) = bVar1;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8 = Mount;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
  this->bIsMount = bVar1;
  if (((char)this->_padding_ == '\x01') && (bVar1)) {
    *(undefined1 *)&this->_padding_ = 0;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    this->WarpState = None;
    this->CastingState = None;
    return;
  }
  if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') && ((char)this->_padding_ == '\0')) {
    this->bIsActivePutWeapon = true;
    this->PutWeaponAnimElapsedTime = 0.0;
    this->PutWeaponBlendWeight = 1.0;
  }
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8 = ItemUse;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
  this->bIsUseItem = bVar1;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8 = Interaction;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
  this->bIsInInteraction = bVar1;
  RefreshWarpState(this);
  this->CharSwitchState = None;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8 = CharSwitch;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
  if (bVar1) {
    this->CharSwitchState = On;
  }
  this->CastingState = None;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8._0_4_ = AniCut|Skill|AutoMove;
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
  this->bIsCastingEndAnim = bVar1;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8 = CONCAT44(local_res8._4_4_,0x55);
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
  if (bVar1) {
    this->CastingState = InstallCamp;
  }
  return;
}

// OnClearVariables @ 14b887aa0

void __thiscall UDS_MainPlayerAnim::OnClearVariables(UDS_MainPlayerAnim *this)

{
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  this->_padding_ = (longlong)FStackX_8;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  this->_padding_ = (longlong)FStackX_8;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  this->_padding_ = (longlong)FStackX_8;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  this->_padding_ = (longlong)FStackX_8;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = FStackX_8;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = FStackX_8;
  return;
}

// OnInitVariables @ 14b889cb0

void __thiscall UDS_MainPlayerAnim::OnInitVariables(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_BattleAnim::OnInitVariables((UDS_BattleAnim *)this);
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    UDS_MainPlayerCombatAnim::RefreshLinkedWeaponAnimLayer
              ((UDS_MainPlayerCombatAnim *)this,pUVar2[0x17].field_0x10);
  }
  this->bShouldUseLookAt = true;
  return;
}

// OnNativeInitializeAnimation @ 14b88a760

void __thiscall UDS_MainPlayerAnim::OnNativeInitializeAnimation(UDS_MainPlayerAnim *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FName FStackX_10;
  UDS_MainPlayerAnim *pUStackX_18;
  FName FStackX_20;
  FName FStack_78;
  undefined1 auStack_70 [8];
  FDelegateAllocation FStack_68;
  FDestructionSentinel FStack_58;
  FDelegateAllocation *pFStack_40;
  
  ::FName::FName(&FStackX_20,L"AbnormalSM");
  ::FName::FName(&FStack_78,L"SkillAbilitySM");
  ::FName::FName(&FStackX_10,L"Locomotion");
  auStack_70 = (undefined1  [8])0x0;
  FStack_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_70,
             (FWriteAccessScope *)&FStack_58);
  pFStack_40 = &FStack_68;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&FStack_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAnimNode_StateMachine__HH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_BattleAnim____A6AXAEBUFAnimNode_StateMachine__HH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_MainPlayerAnim *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    pUStackX_18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_MainPlayerAnim *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&pUStackX_18);
    puVar1[4] = UDS_BattleAnim::_vcall__1032__flat______;
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  UAnimInstance::AddNativeStateExitBinding
            ((UAnimInstance *)this,&FStackX_20,&FStackX_10,
             (TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)auStack_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_70,
             (FWriteAccessScope *)&FStack_58);
  if ((FStack_68.DelegateSize != 0) &&
     (FStack_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_68,0,0,0x10);
    FStack_68.DelegateSize = 0;
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  if (FStack_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_70);
  auStack_70 = (undefined1  [8])0x0;
  FStack_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_70,
             (FWriteAccessScope *)&FStack_58);
  pFStack_40 = &FStack_68;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&FStack_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAnimNode_StateMachine__HH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_BattleAnim____A6AXAEBUFAnimNode_StateMachine__HH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_MainPlayerAnim *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    pUStackX_18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_MainPlayerAnim *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&pUStackX_18);
    puVar1[4] = UDS_BattleAnim::_vcall__1040__flat______;
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  UAnimInstance::AddNativeStateExitBinding
            ((UAnimInstance *)this,&FStack_78,&FStackX_10,
             (TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)auStack_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_70,
             (FWriteAccessScope *)&FStack_58);
  if ((FStack_68.DelegateSize != 0) &&
     (FStack_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_68,0,0,0x10);
    FStack_68.DelegateSize = 0;
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  if (FStack_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_70);
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88af90

void __thiscall
UDS_MainPlayerAnim::OnNativeThreadSafeUpdateAnimation(UDS_MainPlayerAnim *this,float param_1)

{
  char cVar1;
  double dVar2;
  EDS_CardinalDirection EVar3;
  bool bVar4;
  longlong lVar5;
  UObject *pUVar6;
  double *pdVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 local_58 [80];
  
  UDS_BattleAnim::OnNativeThreadSafeUpdateAnimation((UDS_BattleAnim *)this,param_1);
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  if (cVar1 == '\x02') {
    if ((char)this->_padding_ == '\x01') {
      auVar10 = roundps(in_XMM2,ZEXT416((uint)(*(float *)((longlong)&this->_padding_ + 4) +
                                              __real_3f000000)),1);
      fVar8 = (float)((uint)auVar10._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (__real_42700000 < fVar8) {
        if (fVar8 < __real_42f00000) {
          *(char *)((longlong)&this->_padding_ + 2) = (0.0 < auVar10._0_4_) + '\x01';
        }
        else {
          *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
        }
      }
      else {
        *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
      }
    }
  }
  else if ((cVar1 == '\x04') && ((char)this->_padding_ == '\x01')) {
    EVar3 = UDS_CharacterAnimBase::GetCardinalDirectionFromAngle
                      ((UDS_CharacterAnimBase *)this,*(float *)((longlong)&this->_padding_ + 4),
                       __real_41700000);
    *(EDS_CardinalDirection *)((longlong)&this->_padding_ + 3) = EVar3;
  }
  if (this->bIsActivePutWeapon != false) {
    fVar8 = param_1 + this->PutWeaponAnimElapsedTime;
    lVar5 = 0x8ac;
    if ((char)this->_padding_ != '\x01') {
      lVar5 = 0x8a8;
    }
    fVar9 = *(float *)((longlong)&this->_padding_ + lVar5);
    this->PutWeaponAnimElapsedTime = fVar8;
    if (fVar9 < fVar8) {
      this->PutWeaponAnimElapsedTime = fVar9;
      this->bIsActivePutWeapon = false;
      this->PutWeaponBlendWeight = 0.0;
    }
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  fVar8 = __real_3f800000;
  if (bVar4) {
    if (*(char *)((longlong)&this->_padding_ + 4) == '\x01') {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      fVar9 = param_1 + this->AimMode_Alpha;
      this->AimMode_RotatorX = *(float *)&pUVar6[7].field_0x18;
    }
    else {
      fVar9 = this->AimMode_Alpha - param_1;
    }
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    this->AimMode_Alpha = fVar9;
  }
  fVar9 = *(float *)((longlong)&this->_padding_ + 4);
  if ((char)this->_padding_ == '\x01') {
    fVar9 = param_1 * __real_40a00000 * (fVar8 - fVar9) + fVar9;
  }
  else {
    fVar9 = (fVar8 - param_1 * __real_41000000) * fVar9;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar9;
  bVar4 = FWeakObjectPtr::IsValid(&(this->ParentActor).WeakPtr);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pdVar7 = (double *)(**(code **)(*(longlong *)pUVar6 + 0x348))(pUVar6,local_58);
    dVar2 = pdVar7[1];
    (this->ParentLocationDelta).field0_0x0._s_0.X = *pdVar7;
    (this->ParentLocationDelta).field0_0x0._s_0.Y = dVar2;
    (this->ParentLocationDelta).field0_0x0._s_0.Z = pdVar7[2];
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pdVar7 = (double *)(**(code **)(*(longlong *)pUVar6 + 0x350))(pUVar6,local_58);
    dVar2 = pdVar7[1];
    (this->ParentDiffLocation).field0_0x0._s_0.X = *pdVar7;
    (this->ParentDiffLocation).field0_0x0._s_0.Y = dVar2;
    (this->ParentDiffLocation).field0_0x0._s_0.Z = pdVar7[2];
  }
  return;
}

// OnNativeUpdateAnimation @ 14b88bdf0

void __thiscall UDS_MainPlayerAnim::OnNativeUpdateAnimation(UDS_MainPlayerAnim *this,float param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  double dVar9;
  
  dVar9 = (double)param_1;
  if ((double)param_1 <= __real_3f50624dd2f1a9fc) {
    dVar9 = __real_3f50624dd2f1a9fc;
  }
  dVar9 = __real_3ff0000000000000 / dVar9;
  this->_padding_ = (longlong)(((double)this->_padding_ - (double)this->_padding_) * dVar9);
  dVar4 = ((double)this->_padding_ - (double)this->_padding_) * dVar9;
  dVar9 = ((double)this->_padding_ - (double)this->_padding_) * dVar9;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = auVar3._8_8_;
  lVar1 = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  bVar2 = __real_40a00000 < *(float *)((longlong)&this->_padding_ + 4);
  this->_padding_ = lVar1;
  if (bVar2) {
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar7 = this->_padding_;
    uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)&this->_padding_ = (int)this->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
    *(int *)&this->_padding_ = (int)lVar7;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar6;
    this->_padding_ = lVar1;
  }
  *(char *)((longlong)&this->_padding_ + 1) = (char)this->_padding_;
  uVar8 = (**(code **)(this->_padding_ + 0x400))();
  *(undefined1 *)&this->_padding_ = uVar8;
  return;
}

// OnParentChangeEvent @ 14b88c340

void __thiscall
UDS_MainPlayerAnim::OnParentChangeEvent
          (UDS_MainPlayerAnim *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  (this->ParentActor).WeakPtr = param_1.WeakPtr;
  return;
}

// OnUnBindAnimationEvents @ 14b894320

void __thiscall UDS_MainPlayerAnim::OnUnBindAnimationEvents(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_BattleAnim::OnUnBindAnimationEvents((UDS_BattleAnim *)this);
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x10,this);
  }
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1d8),this)
    ;
    return;
  }
  return;
}

// RefreshCastingState @ 14b8965e0

void __thiscall UDS_MainPlayerAnim::RefreshCastingState(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  EDS_CharDetailState local_res8 [2];
  
  this->CastingState = None;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8[0] = Casting_EndAnim;
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res8);
  this->bIsCastingEndAnim = bVar1;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8[0] = Casting_InstallCamp;
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res8);
  if (bVar1) {
    this->CastingState = InstallCamp;
  }
  return;
}

// RefreshSwitchState @ 14b897400

void __thiscall UDS_MainPlayerAnim::RefreshSwitchState(UDS_MainPlayerAnim *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8 [4];
  
  this->CharSwitchState = None;
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8[0] = CharSwitch;
  bVar1 = UDS_CharStateData::HasCharState(this_00,local_res8);
  if (bVar1) {
    this->CharSwitchState = On;
  }
  return;
}

// RefreshWarpState @ 14b8976a0

void __thiscall UDS_MainPlayerAnim::RefreshWarpState(UDS_MainPlayerAnim *this)

{
  longlong *this_00;
  bool bVar1;
  UDS_CharStateData *pUVar2;
  UDS_DataBase *this_01;
  UObject *pUVar3;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  this_00 = &this->_padding_;
  this->WarpState = None;
  this->WarpRequestType = None;
  this->WarpType = None;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res8 = Warp;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
  if (bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    local_res8._0_4_ = AniCut|Skill|Avoid|AutoMove;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_res8._0_4_ = AniCut|Skill|AutoMove|Shield;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
      if (bVar1) {
        this->WarpState = Casting;
        this->WarpRequestType = ReturnHomeWarp;
        return;
      }
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_res8._0_4_ = AniCut|Skill|AutoMove|Shield|Swim;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
      if (bVar1) {
        this->WarpState = Casting;
        this->WarpRequestType = ResurrectWarp;
        return;
      }
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_res8._0_4_ = AniCut|Skill|Avoid;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
      if (bVar1) {
        this->WarpState = Casting;
        this->WarpRequestType = WarpDeviceWarp;
        return;
      }
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_res8 = CONCAT44(local_res8._4_4_,0x59);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
      if (bVar1) {
        this->WarpState = Casting;
        this->WarpRequestType = PortalWarp;
        return;
      }
    }
    else {
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_res8 = CONCAT44(local_res8._4_4_,0x5d);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
      if (bVar1) {
        local_res8 = CONCAT71(local_res8._1_7_,0x47);
        this_01 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        local_res18[0] = UDS_DataBase::GetEntityID(this_01);
        UDS_AbilityDataSet::GetAbilityData<UDS_WarpActionAbilityData>
                  ((ulong64 *)&local_res10,(EDS_AbilityTagType *)local_res18);
        bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *)&local_res10,
                           (void *)0x0);
        if (!bVar1) {
          pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          local_res8._0_4_ = AniCut|Skill|Avoid|Shield;
          bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
          if (bVar1) {
            this->WarpState = Start;
          }
          else {
            pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
            local_res8._0_4_ = AniCut|Skill|Avoid|Shield|Swim;
            bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8)
            ;
            if (!bVar1) {
              return;
            }
            this->WarpState = End;
          }
          pUVar3 = FWeakObjectPtr::Get(&local_res10);
          this->WarpType = pUVar3[2].field_0xc;
        }
      }
    }
  }
  return;
}

// UpdateAimMode @ 14b8a1bb0

void __thiscall UDS_MainPlayerAnim::UpdateAimMode(UDS_MainPlayerAnim *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  float fVar3;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    if (*(char *)((longlong)&this->_padding_ + 4) == '\x01') {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      fVar3 = param_1 + this->AimMode_Alpha;
      this->AimMode_RotatorX = *(float *)&pUVar2[7].field_0x18;
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      this->AimMode_Alpha = fVar3;
      return;
    }
    fVar3 = this->AimMode_Alpha - param_1;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->AimMode_Alpha = fVar3;
  }
  return;
}

// UpdatePutWeapon @ 14b8a35d0

void __thiscall UDS_MainPlayerAnim::UpdatePutWeapon(UDS_MainPlayerAnim *this,float param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  if (this->bIsActivePutWeapon != false) {
    fVar3 = param_1 + this->PutWeaponAnimElapsedTime;
    lVar2 = 0x8ac;
    if ((char)this->_padding_ != '\x01') {
      lVar2 = 0x8a8;
    }
    fVar1 = *(float *)((longlong)&this->_padding_ + lVar2);
    this->PutWeaponAnimElapsedTime = fVar3;
    if (fVar1 < fVar3) {
      this->PutWeaponAnimElapsedTime = fVar1;
      this->bIsActivePutWeapon = false;
      this->PutWeaponBlendWeight = 0.0;
    }
  }
  return;
}

