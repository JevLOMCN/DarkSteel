// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b4588f0

UClass * __cdecl UDS_ClimbingAnimLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ClimbingAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ClimbingAnimLayer",
               &Z_Registration_Info_UClass_UDS_ClimbingAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_ClimbingAnimLayer,0x490,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_ClimbingAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_ClimbingAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ClimbingAnimLayer.InnerSingleton;
}

// UDS_ClimbingAnimLayer @ 14b45c060

UDS_ClimbingAnimLayer * __thiscall
UDS_ClimbingAnimLayer::UDS_ClimbingAnimLayer(UDS_ClimbingAnimLayer *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AnimLayerBase::UDS_AnimLayerBase((UDS_AnimLayerBase *)this,param_1);
  this->bIsClimbing = false;
  this->_padding_ = (longlong)&___7UDS_ClimbingAnimLayer__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ClimbInputVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ClimbInputVector).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ClimbLocalAxisX = 0.0;
  this->ClimbLocalAxisY = 0.0;
  this->ClimbAlpha = 0.0;
  this->ReachingClimbApexElapsedTime = 0.0;
  this->bReachingClimbApex = false;
  this->bClimbJump = false;
  (this->ClimbInputVector).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_ClimbingAnimLayer @ 14b45ce10

void __thiscall UDS_ClimbingAnimLayer::~UDS_ClimbingAnimLayer(UDS_ClimbingAnimLayer *this)

{
  this->_padding_ = (longlong)&___7UDS_ClimbingAnimLayer__6B_;
  UDS_AnimLayerBase::~UDS_AnimLayerBase((UDS_AnimLayerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b45e460

UClass * __cdecl UDS_ClimbingAnimLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ClimbingAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ClimbingAnimLayer",
               &Z_Registration_Info_UClass_UDS_ClimbingAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_ClimbingAnimLayer,0x490,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_ClimbingAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_ClimbingAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ClimbingAnimLayer.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b45f100

bool __thiscall UDS_ClimbingAnimLayer::ShouldChangeCharStateEvent(UDS_ClimbingAnimLayer *this)

{
  return true;
}

// StaticRegisterNativesUDS_ClimbingAnimLayer @ 14b45f170

void __cdecl UDS_ClimbingAnimLayer::StaticRegisterNativesUDS_ClimbingAnimLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UDS_ClimbingAnimLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetClimbAlpha @ 14b4604d0

void __cdecl
UDS_ClimbingAnimLayer::execGetClimbAlpha(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetClimbAlpha((UDS_ClimbingAnimLayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetClimbLocalAxisX @ 14b460510

void __cdecl
UDS_ClimbingAnimLayer::execGetClimbLocalAxisX(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x1c].field_0x18;
  return;
}

// execGetClimbLocalAxisY @ 14b460540

void __cdecl
UDS_ClimbingAnimLayer::execGetClimbLocalAxisY(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x1c].field_0x1c;
  return;
}

// execIsClimbJump @ 14b460570

void __cdecl UDS_ClimbingAnimLayer::execIsClimbJump(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1d].field_0x1;
  return;
}

// execIsClimbing @ 14b4605a0

void __cdecl UDS_ClimbingAnimLayer::execIsClimbing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x20;
  return;
}

// execIsInAir @ 14b4605d0

void __cdecl UDS_ClimbingAnimLayer::execIsInAir(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsInAir((UDS_ClimbingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsMoving @ 14b460610

void __cdecl UDS_ClimbingAnimLayer::execIsMoving(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsMoving((UDS_ClimbingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsReachingClimbApex @ 14b460650

void __cdecl
UDS_ClimbingAnimLayer::execIsReachingClimbApex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x1d);
  return;
}

// execShouldTransitionFromClimbing @ 14b460710

void __cdecl
UDS_ClimbingAnimLayer::execShouldTransitionFromClimbing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = ShouldTransitionFromClimbing((UDS_ClimbingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// UDS_ClimbingAnimLayer @ 14b864c40

UDS_ClimbingAnimLayer * __thiscall
UDS_ClimbingAnimLayer::UDS_ClimbingAnimLayer
          (UDS_ClimbingAnimLayer *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ClimbingAnimLayer__6B_;
  this->_padding_ = 0;
  this->bIsClimbing = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ClimbInputVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ClimbInputVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->ClimbInputVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ClimbLocalAxisX = 0.0;
  this->ClimbLocalAxisY = 0.0;
  this->ClimbAlpha = 0.0;
  this->ReachingClimbApexElapsedTime = 0.0;
  this->bReachingClimbApex = false;
  this->bClimbJump = false;
  return this;
}

// GetClimbAlpha @ 14b876950

float __thiscall UDS_ClimbingAnimLayer::GetClimbAlpha(UDS_ClimbingAnimLayer *this)

{
  return this->ClimbAlpha;
}

// IsInAir @ 14b87d970

bool __thiscall UDS_ClimbingAnimLayer::IsInAir(UDS_ClimbingAnimLayer *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8 [4];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8[0] = AirWalk;
  bVar1 = UDS_CharStateData::HasCharState(this_00,local_res8);
  return bVar1;
}

// IsMoving @ 14b87db40

bool __thiscall UDS_ClimbingAnimLayer::IsMoving(UDS_ClimbingAnimLayer *this)

{
  undefined8 uVar1;
  FDS_AnimSharedData *pFVar2;
  
  pFVar2 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  uVar1 = *(undefined8 *)&(pFVar2->Velocity).field0_0x0;
  if ((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3fb99999a0000000) &&
      (uVar1 = *(undefined8 *)((longlong)&(pFVar2->Velocity).field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3fb99999a0000000)) &&
     (uVar1 = *(undefined8 *)((longlong)&(pFVar2->Velocity).field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3fb99999a0000000)) {
    return false;
  }
  return true;
}

// OnChangedCharState @ 14b885b20

void __thiscall
UDS_ClimbingAnimLayer::OnChangedCharState
          (UDS_ClimbingAnimLayer *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  EDS_CharState local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8 = Climbing;
    bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
    this->bIsClimbing = bVar1;
    if (bVar1) {
      if (param_2->AddedCharState == Climbing) {
        this->ReachingClimbApexElapsedTime = 0.0;
      }
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8._0_4_ = Groggy|Swim;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
      this->bReachingClimbApex = bVar1;
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8 = CONCAT44(local_res8._4_4_,0x82);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
      this->bClimbJump = bVar1;
    }
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88ae20

void __thiscall
UDS_ClimbingAnimLayer::OnNativeThreadSafeUpdateAnimation(UDS_ClimbingAnimLayer *this,float param_1)

{
  UpdateLocalClimbInput(this);
  if ((this->bIsClimbing == true) && (this->bReachingClimbApex == false)) {
    this->ClimbAlpha =
         param_1 * __real_40a00000 * (__real_3f800000 - this->ClimbAlpha) + this->ClimbAlpha;
    return;
  }
  if (this->bReachingClimbApex == true) {
    this->ReachingClimbApexElapsedTime = param_1 + this->ReachingClimbApexElapsedTime;
  }
  if ((0.0 < this->ClimbAlpha) &&
     ((this->bIsClimbing == false || (__real_3f333333 < this->ReachingClimbApexElapsedTime)))) {
    this->ClimbAlpha = (__real_3f800000 - param_1 * __real_40d00000) * this->ClimbAlpha;
  }
  return;
}

// ShouldTransitionFromClimbing @ 14b899b50

bool __thiscall UDS_ClimbingAnimLayer::ShouldTransitionFromClimbing(UDS_ClimbingAnimLayer *this)

{
  bool bVar1;
  FDS_AnimSharedData *pFVar2;
  UDS_CharStateData *this_00;
  EDS_CharState local_res10 [3];
  
  pFVar2 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  if (__real_42c80000 < pFVar2->MoveSpeed) {
    return true;
  }
  if ((this->bReachingClimbApex == false) &&
     (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar1)) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res10[0] = AirWalk;
    bVar1 = UDS_CharStateData::HasCharState(this_00,local_res10);
    if (bVar1) {
      return true;
    }
  }
  return pFVar2->bHasAcceleration;
}

// UpdateLocalClimbInput @ 14b8a2530

void __thiscall UDS_ClimbingAnimLayer::UpdateLocalClimbInput(UDS_ClimbingAnimLayer *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FDS_AnimSharedData *pFVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  TTransform<double> *pTVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  TVector<double> local_88 [5];
  
  pFVar8 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((bVar7) &&
     (dVar13 = (pFVar8->Velocity).field0_0x0._s_0.X, dVar1 = (pFVar8->Velocity).field0_0x0._s_0.Y,
     dVar24 = (pFVar8->Velocity).field0_0x0._s_0.Z,
     __real_3f1a36e2e0000000 <= dVar1 * dVar1 + dVar13 * dVar13 + dVar24 * dVar24)) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar11 = (TTransform<double> *)(*(longlong *)(pUVar9 + 0xb) + 0x1f0);
    if (*(longlong *)(pUVar9 + 0xb) == 0) {
      pTVar11 = &UE::Math::TTransform<double>::Identity;
    }
    pTVar10 = UE::Math::TVector<double>::GetSafeNormal
                        (&pFVar8->Velocity,local_88,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
    dVar22 = (pTVar11->Rotation).XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar23 = (pTVar11->Rotation).XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar2 = *(undefined1 (*) [16])&pTVar10->field0_0x0;
    dVar13 = (pTVar10->field0_0x0)._s_0.Z;
    auVar21._8_4_ = SUB84(dVar23,0);
    auVar21._0_8_ = dVar22;
    auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    dVar1 = (pTVar11->Rotation).ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar24 = (pTVar11->Rotation).ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar12 = auVar2._8_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar13;
    auVar15 = blendpd(auVar2,auVar15,2);
    auVar26._8_4_ = SUB84(dVar24,0);
    auVar26._0_8_ = dVar1;
    auVar26._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    auVar21 = blendpd(auVar21,auVar26,2);
    auVar25._0_8_ = dVar12 * dVar22 - auVar2._0_8_ * dVar23;
    auVar25._8_8_ = dVar13 * dVar23 - dVar12 * dVar1;
    auVar16._0_8_ = auVar15._0_8_ * dVar1 - dVar13 * auVar21._0_8_;
    auVar16._8_8_ = auVar15._8_8_ * dVar24 - auVar21._8_8_ * 0.0;
    auVar26 = blendpd(auVar25,auVar16,2);
    auVar27._0_8_ = auVar26._0_8_ + auVar26._0_8_;
    auVar27._8_8_ = auVar26._8_8_ + auVar26._8_8_;
    dVar3 = auVar25._8_8_ + auVar25._8_8_;
    dVar4 = auVar16._0_8_ + auVar16._0_8_;
    uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar19._8_4_ = SUB84(dVar4,0);
    auVar19._0_8_ = dVar3;
    auVar19._12_4_ = uVar28;
    auVar17._8_4_ = SUB84(dVar4,0);
    auVar17._0_8_ = dVar3;
    auVar17._12_4_ = uVar28;
    auVar26 = blendpd(auVar17,auVar27,2);
    auVar20._0_8_ = auVar19._8_8_ * dVar22 - dVar3 * dVar23;
    auVar20._8_8_ = auVar27._0_8_ * dVar23 - dVar4 * dVar1;
    auVar18._0_8_ = auVar26._0_8_ * dVar1 - auVar27._0_8_ * auVar21._0_8_;
    auVar18._8_8_ = auVar26._8_8_ * dVar24 - auVar27._8_8_ * auVar21._8_8_;
    auVar26 = blendpd(auVar20,auVar18,2);
    dVar1 = dVar3 * dVar24 + auVar2._0_8_ + auVar20._8_8_;
    dVar3 = dVar4 * dVar24 + dVar12 + auVar18._0_8_;
    dVar24 = auVar27._0_8_ * dVar24 + dVar13 + auVar26._0_8_;
    dVar13 = dVar1 * dVar1 + dVar3 * dVar3 + dVar24 * dVar24;
    uVar5 = dVar1;
    uVar6 = dVar3;
    uVar14 = dVar24;
    if ((dVar13 != __real_3ff0000000000000) &&
       (uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar13)) {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
      uVar5 = dVar1 * dVar13;
      uVar6 = dVar13 * dVar3;
      uVar14 = dVar13 * dVar24;
    }
    auVar2._8_4_ = (int)uVar6;
    auVar2._0_8_ = uVar5;
    auVar2._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined1 (*) [16])&(this->ClimbInputVector).field0_0x0 = auVar2;
    (this->ClimbInputVector).field0_0x0._s_0.Z = (double)uVar14;
    this->ClimbLocalAxisX = (float)dVar3;
    this->ClimbLocalAxisY = (float)dVar24;
  }
  return;
}

