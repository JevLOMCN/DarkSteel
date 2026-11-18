// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b5aedd0

UClass * __cdecl UDS_SwimmingAnimLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimmingAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimmingAnimLayer",
               &Z_Registration_Info_UClass_UDS_SwimmingAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_SwimmingAnimLayer,0x460,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_SwimmingAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_SwimmingAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimmingAnimLayer.InnerSingleton;
}

// UDS_SwimmingAnimLayer @ 14b5b1cc0

UDS_SwimmingAnimLayer * __thiscall
UDS_SwimmingAnimLayer::UDS_SwimmingAnimLayer(UDS_SwimmingAnimLayer *this,FVTableHelper *param_1)

{
  UDS_AnimLayerBase::UDS_AnimLayerBase((UDS_AnimLayerBase *)this,param_1);
  this->bIsFullySubmerged = false;
  this->bIsSwimSprint = false;
  this->_padding_ = (longlong)&___7UDS_SwimmingAnimLayer__6B_;
  this->bIsAerialDive = false;
  this->FullySubmerged_AxisY = 0.0;
  return this;
}

// ~UDS_SwimmingAnimLayer @ 14b5b2830

void __thiscall UDS_SwimmingAnimLayer::~UDS_SwimmingAnimLayer(UDS_SwimmingAnimLayer *this)

{
  this->_padding_ = (longlong)&___7UDS_SwimmingAnimLayer__6B_;
  UDS_AnimLayerBase::~UDS_AnimLayerBase((UDS_AnimLayerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4690

UClass * __cdecl UDS_SwimmingAnimLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimmingAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimmingAnimLayer",
               &Z_Registration_Info_UClass_UDS_SwimmingAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_SwimmingAnimLayer,0x460,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_SwimmingAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_SwimmingAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimmingAnimLayer.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b5b5780

bool __thiscall UDS_SwimmingAnimLayer::ShouldChangeCharStateEvent(UDS_SwimmingAnimLayer *this)

{
  return true;
}

// StaticRegisterNativesUDS_SwimmingAnimLayer @ 14b5b58f0

void __cdecl UDS_SwimmingAnimLayer::StaticRegisterNativesUDS_SwimmingAnimLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UDS_SwimmingAnimLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFullySubmergedAxisY @ 14b5b74a0

void __cdecl
UDS_SwimmingAnimLayer::execGetFullySubmergedAxisY(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x1b].field_0x24;
  return;
}

// execGetLeanAmountX @ 14b5b74d0

void __cdecl
UDS_SwimmingAnimLayer::execGetLeanAmountX(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetLeanAmountX((UDS_SwimmingAnimLayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetMoveSpeed @ 14b5b7510

void __cdecl UDS_SwimmingAnimLayer::execGetMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetMoveSpeed((UDS_SwimmingAnimLayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execHasAcceleration @ 14b5b7550

void __cdecl
UDS_SwimmingAnimLayer::execHasAcceleration(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = HasAcceleration((UDS_SwimmingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsAerialDive @ 14b5b7590

void __cdecl UDS_SwimmingAnimLayer::execIsAerialDive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x22;
  return;
}

// execIsFullySubmerged @ 14b5b75c0

void __cdecl
UDS_SwimmingAnimLayer::execIsFullySubmerged(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x20;
  return;
}

// execIsSwimMoving @ 14b5b75f0

void __cdecl UDS_SwimmingAnimLayer::execIsSwimMoving(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSwimMoving((UDS_SwimmingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSwimSprint @ 14b5b7630

void __cdecl UDS_SwimmingAnimLayer::execIsSwimSprint(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x21;
  return;
}

// execIsSwimState @ 14b5b7660

void __cdecl UDS_SwimmingAnimLayer::execIsSwimState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSwimState((UDS_SwimmingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// UDS_SwimmingAnimLayer @ 14b865480

UDS_SwimmingAnimLayer * __thiscall
UDS_SwimmingAnimLayer::UDS_SwimmingAnimLayer
          (UDS_SwimmingAnimLayer *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SwimmingAnimLayer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bIsFullySubmerged = false;
  this->bIsSwimSprint = false;
  this->bIsAerialDive = false;
  this->FullySubmerged_AxisY = 0.0;
  return this;
}

// GetLeanAmountX @ 14b877dc0

float __thiscall UDS_SwimmingAnimLayer::GetLeanAmountX(UDS_SwimmingAnimLayer *this)

{
  FDS_AnimSharedData *this_00;
  double dVar1;
  TVector<double> local_28;
  
  this_00 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  FDS_AnimSharedData::CalculateRelativeAccelerationAmount
            (this_00,&local_28,(TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_,
             (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)this->_padding_);
  dVar1 = UKismetMathLibrary::MapRangeClamped
                    ((double)this_00->MoveSpeed,__real_4069000000000000,__real_407f400000000000,
                     __real_3fe0000000000000,__real_3ff0000000000000);
  return (float)(dVar1 * local_28.field0_0x0._s_0.Y);
}

// GetMoveSpeed @ 14b8787f0

float __thiscall UDS_SwimmingAnimLayer::GetMoveSpeed(UDS_SwimmingAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->MoveSpeed;
}

// HasAcceleration @ 14b879940

bool __thiscall UDS_SwimmingAnimLayer::HasAcceleration(UDS_SwimmingAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->bHasAcceleration;
}

// IsSwimMoving @ 14b87e340

bool __thiscall UDS_SwimmingAnimLayer::IsSwimMoving(UDS_SwimmingAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  FDS_AnimSharedData *pFVar2;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  pFVar2 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  if ((pFVar2->LocomotionState == Swim) && (pFVar1->bHasAcceleration == true)) {
    return true;
  }
  return false;
}

// IsSwimState @ 14b87e390

bool __thiscall UDS_SwimmingAnimLayer::IsSwimState(UDS_SwimmingAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->LocomotionState == Swim;
}

// OnChangedCharState @ 14b886580

void __thiscall
UDS_SwimmingAnimLayer::OnChangedCharState
          (UDS_SwimmingAnimLayer *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  longlong *this_00;
  bool bVar1;
  bool bVar2;
  UDS_CharStateData *pUVar3;
  EDS_CharDetailState local_res8 [2];
  FDS_ChangedCharStateInfo *local_res18;
  EDS_CharDetailState local_res20 [2];
  
  this_00 = &this->_padding_;
  local_res18 = param_2;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar1) {
    return;
  }
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res18 = (FDS_ChangedCharStateInfo *)CONCAT44(local_res18._4_4_,6);
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res18);
  if (bVar1) {
LAB_14b88660c:
    bVar1 = true;
  }
  else {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    local_res8[0] = SwimDown;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_res8);
    if (bVar1) goto LAB_14b88660c;
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    local_res20[0] = AerialDive;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,local_res20);
    bVar1 = false;
    if (bVar2) goto LAB_14b88660c;
  }
  this->bIsFullySubmerged = bVar1;
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res18 = (FDS_ChangedCharStateInfo *)CONCAT44(local_res18._4_4_,8);
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res18);
  if (!bVar1) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    local_res8[0] = SwimSubmergeSprint;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,local_res8);
    bVar1 = false;
    if (!bVar2) goto LAB_14b886658;
  }
  bVar1 = true;
LAB_14b886658:
  this->bIsSwimSprint = bVar1;
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_res18 = (FDS_ChangedCharStateInfo *)CONCAT44(local_res18._4_4_,0xb);
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res18);
  this->bIsAerialDive = bVar1;
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88bba0

void __thiscall
UDS_SwimmingAnimLayer::OnNativeThreadSafeUpdateAnimation(UDS_SwimmingAnimLayer *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  UObject *pUVar5;
  FDS_AnimSharedData *pFVar6;
  double dVar7;
  TVector<double>_u_0 local_48;
  TRotator<double> local_30;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  cVar4 = (**(code **)(*(longlong *)pUVar5 + 800))(pUVar5);
  if (cVar4 != '\0') {
    pFVar6 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
    dVar1 = (pFVar6->Velocity).field0_0x0._s_0.X;
    dVar2 = (pFVar6->Velocity).field0_0x0._s_0.Y;
    dVar3 = (pFVar6->Velocity).field0_0x0._s_0.Z;
    dVar7 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
    if (dVar7 == __real_3ff0000000000000) {
      local_48._s_0.X = (pFVar6->Velocity).field0_0x0._s_0.X;
      local_48._s_0.Y = (pFVar6->Velocity).field0_0x0._s_0.Y;
      local_48._s_0.Z = (pFVar6->Velocity).field0_0x0._s_0.Z;
    }
    else if (__real_3e45798ee0000000 <= dVar7) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      local_48._s_0.X = dVar1 * dVar7;
      local_48._s_0.Y = dVar2 * dVar7;
      local_48._s_0.Z = dVar3 * dVar7;
    }
    else {
      local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_48._s_0,&local_30);
    this->FullySubmerged_AxisY = (float)local_30.Pitch;
  }
  return;
}

