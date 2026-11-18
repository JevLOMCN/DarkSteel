// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// StaticClass @ 14b40e540

UClass * __cdecl UDS_AirwalkAnimLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirwalkAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirwalkAnimLayer",
               &Z_Registration_Info_UClass_UDS_AirwalkAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_AirwalkAnimLayer,0x470,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirwalkAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_AirwalkAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirwalkAnimLayer.InnerSingleton;
}

// UDS_AirwalkAnimLayer @ 14b411c10

UDS_AirwalkAnimLayer * __thiscall
UDS_AirwalkAnimLayer::UDS_AirwalkAnimLayer(UDS_AirwalkAnimLayer *this,FVTableHelper *param_1)

{
  UDS_AnimLayerBase::UDS_AnimLayerBase((UDS_AnimLayerBase *)this,param_1);
  this->AirWalkState = None;
  this->PreAirWalkState = None;
  this->bIsLanding = false;
  this->bIsLandMove = false;
  this->bIsInAir = false;
  this->bJustLanded = false;
  this->bIsLand = false;
  this->bIsLandFromHigher = false;
  this->_padding_ = (longlong)&___7UDS_AirwalkAnimLayer__6B_;
  this->SlopeAngle = 0.0;
  this->LandingAnimRemainingTime = 0.0;
  this->bIsLandPowerJump = false;
  this->bIsFalling = false;
  this->bIsFlying = false;
  this->bIsFallingHigher = false;
  this->bIsSuddenStopToHovering = false;
  this->bIsFallingToHovering = false;
  this->bHasAccelerationOnJump2 = false;
  this->bIsSlopeSlide = false;
  return this;
}

// ~UDS_AirwalkAnimLayer @ 14b4121e0

void __thiscall UDS_AirwalkAnimLayer::~UDS_AirwalkAnimLayer(UDS_AirwalkAnimLayer *this)

{
  this->_padding_ = (longlong)&___7UDS_AirwalkAnimLayer__6B_;
  UDS_AnimLayerBase::~UDS_AnimLayerBase((UDS_AnimLayerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b413f60

UClass * __cdecl UDS_AirwalkAnimLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirwalkAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirwalkAnimLayer",
               &Z_Registration_Info_UClass_UDS_AirwalkAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_AirwalkAnimLayer,0x470,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirwalkAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_AirwalkAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirwalkAnimLayer.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b414090

bool __thiscall UDS_AirwalkAnimLayer::ShouldChangeCharStateEvent(UDS_AirwalkAnimLayer *this)

{
  return true;
}

// StaticRegisterNativesUDS_AirwalkAnimLayer @ 14b4143a0

void __cdecl UDS_AirwalkAnimLayer::StaticRegisterNativesUDS_AirwalkAnimLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UDS_AirwalkAnimLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAirwalkState @ 14b4155a0

void __cdecl
UDS_AirwalkAnimLayer::execGetAirwalkState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x20;
  return;
}

// execGetMoveSpeed @ 14b4155d0

void __cdecl UDS_AirwalkAnimLayer::execGetMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->MoveSpeed;
  return;
}

// execGetSlopeAngle @ 14b415610

void __cdecl UDS_AirwalkAnimLayer::execGetSlopeAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x1c].field_0x8;
  return;
}

// execHasAcceleration @ 14b415640

void __cdecl
UDS_AirwalkAnimLayer::execHasAcceleration(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bHasAcceleration;
  return;
}

// execHasAccelerationOnJump2 @ 14b415680

void __cdecl
UDS_AirwalkAnimLayer::execHasAccelerationOnJump2(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x6;
  return;
}

// execIsAirWalkState @ 14b4156b0

void __cdecl
UDS_AirwalkAnimLayer::execIsAirWalkState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsAirWalkState((UDS_AirwalkAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsAirWalkStep @ 14b4156f0

void __cdecl UDS_AirwalkAnimLayer::execIsAirWalkStep(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsAirWalkStep((UDS_AirwalkAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsFalling @ 14b415730

void __cdecl UDS_AirwalkAnimLayer::execIsFalling(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x1;
  return;
}

// execIsFallingHigher @ 14b415760

void __cdecl
UDS_AirwalkAnimLayer::execIsFallingHigher(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x3;
  return;
}

// execIsFallingToHovering @ 14b415790

void __cdecl
UDS_AirwalkAnimLayer::execIsFallingToHovering(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x5;
  return;
}

// execIsFlying @ 14b4157c0

void __cdecl UDS_AirwalkAnimLayer::execIsFlying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x2;
  return;
}

// execIsLand @ 14b4157f0

void __cdecl UDS_AirwalkAnimLayer::execIsLand(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x26;
  return;
}

// execIsLandFromHigher @ 14b415820

void __cdecl
UDS_AirwalkAnimLayer::execIsLandFromHigher(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x27;
  return;
}

// execIsLandMove @ 14b415850

void __cdecl UDS_AirwalkAnimLayer::execIsLandMove(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsLandMove((UDS_AirwalkAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsLandPowerJump @ 14b415890

void __cdecl
UDS_AirwalkAnimLayer::execIsLandPowerJump(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x1c);
  return;
}

// execIsSlopeSlide @ 14b4158c0

void __cdecl UDS_AirwalkAnimLayer::execIsSlopeSlide(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x7;
  return;
}

// execIsSuddenStopToHovering @ 14b4158f0

void __cdecl
UDS_AirwalkAnimLayer::execIsSuddenStopToHovering(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x4;
  return;
}

// UDS_AirwalkAnimLayer @ 14b864530

UDS_AirwalkAnimLayer * __thiscall
UDS_AirwalkAnimLayer::UDS_AirwalkAnimLayer(UDS_AirwalkAnimLayer *this,FObjectInitializer *param_1)

{
  UDS_AnimLayerBase::UDS_AnimLayerBase((UDS_AnimLayerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AirwalkAnimLayer__6B_;
  this->AirWalkState = None;
  this->PreAirWalkState = None;
  this->bIsLanding = false;
  this->bIsLandMove = false;
  this->bIsInAir = false;
  this->bJustLanded = false;
  this->bIsLand = false;
  this->bIsLandFromHigher = false;
  this->bIsLandPowerJump = false;
  this->bIsFalling = false;
  this->bIsFlying = false;
  this->bIsFallingHigher = false;
  this->bIsSuddenStopToHovering = false;
  this->bIsFallingToHovering = false;
  this->bHasAccelerationOnJump2 = false;
  this->bIsSlopeSlide = false;
  this->SlopeAngle = 0.0;
  this->LandingAnimRemainingTime = 0.0;
  return this;
}

// operator_delete @ 14b865d10

void __cdecl UDS_AirwalkAnimLayer::operator_delete(void *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::FreeExternal(param_1);
      return;
    }
    DoGamethreadHook(2);
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// ExitLandingState @ 14b875890

void __thiscall UDS_AirwalkAnimLayer::ExitLandingState(UDS_AirwalkAnimLayer *this)

{
  this->LandingAnimRemainingTime = 0.0;
  this->bIsLanding = false;
  this->bIsLandFromHigher = false;
  this->bIsLand = false;
  this->bIsLandPowerJump = false;
  return;
}

// HasAcceleration @ 14b879910

bool __thiscall UDS_AirwalkAnimLayer::HasAcceleration(UDS_AirwalkAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->bHasAcceleration;
}

// IsAirWalkState @ 14b87d340

bool __thiscall UDS_AirwalkAnimLayer::IsAirWalkState(UDS_AirwalkAnimLayer *this)

{
  return this->AirWalkState != None;
}

// IsAirWalkStep @ 14b87d380

bool __thiscall UDS_AirwalkAnimLayer::IsAirWalkStep(UDS_AirwalkAnimLayer *this)

{
  bool local_18;
  
  if ((((this->AirWalkState == Jump1) || (this->AirWalkState == Jump2)) ||
      (this->AirWalkState == AirDash)) || (this->AirWalkState == Hovering)) {
    local_18 = true;
  }
  else {
    local_18 = false;
  }
  return local_18;
}

// IsLandMove @ 14b87da60

bool __thiscall UDS_AirwalkAnimLayer::IsLandMove(UDS_AirwalkAnimLayer *this)

{
  return this->bIsLandMove;
}

// IsValidReferencedPtr @ 14b87e530

bool __thiscall UDS_AirwalkAnimLayer::IsValidReferencedPtr(UDS_AirwalkAnimLayer *this)

{
  bool bVar1;
  
  bVar1 = UDS_AnimLayerBase::IsValidReferencedPtr((UDS_AnimLayerBase *)this);
  return bVar1;
}

// OnChangedCharState @ 14b8850d0

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
UDS_AirwalkAnimLayer::OnChangedCharState
          (UDS_AirwalkAnimLayer *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  longlong lVar2;
  FDS_ChangedCharStateInfo *pFVar3;
  bool local_c4;
  bool local_c0;
  EDS_CharDetailState local_bc [5];
  UDS_CharStateData *local_a8;
  UDS_CharStateData *local_a0;
  UDS_CharStateData *local_98;
  UDS_CharStateData *local_90;
  UDS_CharStateData *local_88;
  UDS_CharStateData *local_80;
  UDS_CharStateData *local_78;
  UDS_CharStateData *local_70;
  UDS_CharStateData *local_68;
  UDS_CharStateData *local_60;
  UDS_CharStateData *local_58;
  UDS_CharStateData *local_50;
  FDS_ChangedCharStateInfo local_48;
  
  pFVar3 = &local_48;
  for (lVar2 = 0x28; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)&(pFVar3->StateTag).TagName.ComparisonIndex.Value =
         (char)(param_2->StateTag).TagName.ComparisonIndex.Value;
    param_2 = (FDS_ChangedCharStateInfo *)
              ((longlong)&(param_2->StateTag).TagName.ComparisonIndex.Value + 1);
    pFVar3 = (FDS_ChangedCharStateInfo *)
             ((longlong)&(pFVar3->StateTag).TagName.ComparisonIndex.Value + 1);
  }
  UDS_AnimInstanceBase::OnChangedCharState((UDS_AnimInstanceBase *)this,param_1,&local_48);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    local_a8 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_bc[0] = SlopeSlide;
    local_a0 = local_a8;
    local_98 = local_a8;
    bVar1 = UDS_CharStateData::HasCharDetailState(local_a8,local_bc);
    this->bIsSlopeSlide = bVar1;
    local_90 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_bc[1] = 0x22;
    local_88 = local_90;
    local_80 = local_90;
    bVar1 = UDS_CharStateData::HasCharDetailState(local_90,local_bc + 1);
    this->bIsFalling = bVar1;
    local_78 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_bc[2] = 0x24;
    local_70 = local_78;
    local_68 = local_78;
    bVar1 = UDS_CharStateData::HasCharDetailState(local_78,local_bc + 2);
    this->bIsFlying = bVar1;
    local_60 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_bc[3] = 0x23;
    local_58 = local_60;
    local_50 = local_60;
    bVar1 = UDS_CharStateData::HasCharDetailState(local_60,local_bc + 3);
    this->bIsFallingHigher = bVar1;
    if ((this->bIsFalling == false) && (this->bIsFlying == false)) {
      local_c4 = false;
    }
    else {
      local_c4 = true;
    }
    if ((local_c4 == false) && (this->bIsInAir == true)) {
      local_c0 = true;
    }
    else {
      local_c0 = false;
    }
    this->bJustLanded = local_c0;
    this->bIsInAir = local_c4;
    RefreshAirWalkState(this);
    RefreshAirWalkStateOnGround(this);
  }
  return;
}

// OnClearVariables @ 14b8876e0

void __thiscall UDS_AirwalkAnimLayer::OnClearVariables(UDS_AirwalkAnimLayer *this)

{
  UDS_AnimLayerBase::OnClearVariables((UDS_AnimLayerBase *)this);
  return;
}

// OnInitVariables @ 14b8893f0

void __thiscall UDS_AirwalkAnimLayer::OnInitVariables(UDS_AirwalkAnimLayer *this)

{
  UDS_AnimLayerBase::OnInitVariables((UDS_AnimLayerBase *)this);
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88a950

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
UDS_AirwalkAnimLayer::OnNativeThreadSafeUpdateAnimation(UDS_AirwalkAnimLayer *this,float param_1)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  float fVar2;
  
  UDS_AnimInstanceBase::OnNativeThreadSafeUpdateAnimation((UDS_AnimInstanceBase *)this,param_1);
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  fVar2 = UDS_MovementCore::GetSlopeAngle(this_00);
  this->SlopeAngle = fVar2;
  if (this->bIsLanding == true) {
    this->LandingAnimRemainingTime = this->LandingAnimRemainingTime - param_1;
    if ((0.0 < this->LandingAnimRemainingTime) && (bVar1 = HasAcceleration(this), !bVar1)) {
      return;
    }
    ExitLandingState(this);
  }
  return;
}

// RefreshAirWalkState @ 14b895bd0

void __thiscall UDS_AirwalkAnimLayer::RefreshAirWalkState(UDS_AirwalkAnimLayer *this)

{
  this->PreAirWalkState = this->AirWalkState;
  this->AirWalkState = None;
  this->bIsSuddenStopToHovering = false;
  this->bIsFallingToHovering = false;
  if (this->bIsInAir != false) {
    RefreshAirWalkStateOnAir(this);
  }
  return;
}

// RefreshAirWalkStateOnAir @ 14b895c40

void __thiscall UDS_AirwalkAnimLayer::RefreshAirWalkStateOnAir(UDS_AirwalkAnimLayer *this)

{
  bool bVar1;
  EDS_CharDetailState local_d8 [8];
  FDS_AnimSharedData *local_b8;
  UDS_CharStateData *local_b0;
  UDS_CharStateData *local_a8;
  UDS_CharStateData *local_a0;
  UDS_CharStateData *local_98;
  UDS_CharStateData *local_90;
  UDS_CharStateData *local_88;
  UDS_CharStateData *local_80;
  UDS_CharStateData *local_78;
  UDS_CharStateData *local_70;
  UDS_CharStateData *local_68;
  UDS_CharStateData *local_60;
  UDS_CharStateData *local_58;
  UDS_CharStateData *local_50;
  UDS_CharStateData *local_48;
  UDS_CharStateData *local_40;
  UDS_CharStateData *local_38;
  UDS_CharStateData *local_30;
  UDS_CharStateData *local_28;
  UDS_CharStateData *local_20;
  UDS_CharStateData *local_18;
  UDS_CharStateData *local_10;
  
  local_b8 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  this->bIsLandMove = false;
  ExitLandingState(this);
  local_b0 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_d8[0] = Jump1;
  local_a8 = local_b0;
  local_a0 = local_b0;
  bVar1 = UDS_CharStateData::HasCharDetailState(local_b0,local_d8);
  if (bVar1) {
    this->AirWalkState = Jump1;
  }
  else {
    local_98 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_d8[1] = 0x1d;
    local_90 = local_98;
    local_88 = local_98;
    bVar1 = UDS_CharStateData::HasCharDetailState(local_98,local_d8 + 1);
    if (bVar1) {
      if (this->PreAirWalkState != Jump2) {
        this->bHasAccelerationOnJump2 = local_b8->bHasAcceleration;
      }
      this->AirWalkState = Jump2;
    }
    else {
      local_80 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_d8[2] = 0x1e;
      local_78 = local_80;
      local_70 = local_80;
      bVar1 = UDS_CharStateData::HasCharDetailState(local_80,local_d8 + 2);
      if (bVar1) {
        this->AirWalkState = Hovering;
      }
      else {
        local_68 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_d8[3] = 0x20;
        local_60 = local_68;
        local_58 = local_68;
        bVar1 = UDS_CharStateData::HasCharDetailState(local_68,local_d8 + 3);
        if (bVar1) {
          this->AirWalkState = AirDashAttack;
        }
        else {
          local_50 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          local_d8[4] = 0x1f;
          local_48 = local_50;
          local_40 = local_50;
          bVar1 = UDS_CharStateData::HasCharDetailState(local_50,local_d8 + 4);
          if (bVar1) {
            this->AirWalkState = AirDash;
          }
          else {
            local_38 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            local_d8[5] = 0x21;
            local_30 = local_38;
            local_28 = local_38;
            bVar1 = UDS_CharStateData::HasCharDetailState(local_38,local_d8 + 5);
            if (bVar1) {
              this->AirWalkState = AirStop;
              if (this->PreAirWalkState != AirStop) {
                if (local_b8->LocalVelocity2D_Size <= __real_447a0000) {
                  this->bIsFallingToHovering = true;
                }
                else {
                  this->bIsSuddenStopToHovering = true;
                }
              }
            }
            else {
              local_20 = (UDS_CharStateData *)
                         FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
              local_d8[6] = 0x27;
              local_18 = local_20;
              local_10 = local_20;
              bVar1 = UDS_CharStateData::HasCharDetailState(local_20,local_d8 + 6);
              if (bVar1) {
                this->AirWalkState = PowerJump;
              }
              else {
                this->AirWalkState = Falling;
              }
            }
          }
        }
      }
    }
  }
  return;
}

// RefreshAirWalkStateOnGround @ 14b896010

void __thiscall UDS_AirwalkAnimLayer::RefreshAirWalkStateOnGround(UDS_AirwalkAnimLayer *this)

{
  bool bVar1;
  EDS_CharDetailState local_48 [2];
  UDS_CharStateData *local_40;
  UDS_CharStateData *local_38;
  UDS_CharStateData *local_30;
  UDS_CharStateData *local_28;
  UDS_CharStateData *local_20;
  UDS_CharStateData *local_18;
  FDS_AnimSharedData *local_10;
  
  local_10 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  local_40 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_48[0] = PowerJumpCharging;
  local_38 = local_40;
  local_30 = local_40;
  bVar1 = UDS_CharStateData::HasCharDetailState(local_40,local_48);
  if (bVar1) {
    this->AirWalkState = PowerJumpCharging;
  }
  else if (this->bJustLanded == true) {
    this->bIsLanding = true;
    this->LandingAnimRemainingTime = __real_3f800000;
    local_28 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_48[1] = 0x27;
    local_20 = local_28;
    local_18 = local_28;
    bVar1 = UDS_CharStateData::HasCharDetailState(local_28,local_48 + 1);
    if (bVar1) {
      this->bIsLandPowerJump = true;
    }
    else if (this->bIsFallingHigher == true) {
      this->bIsFallingHigher = false;
      this->bIsLandFromHigher = true;
    }
    else {
      bVar1 = FDS_AnimSharedData::IsMoving(local_10);
      if (bVar1) {
        this->bIsLandMove = true;
      }
      else {
        this->bIsLand = true;
      }
    }
  }
  return;
}

