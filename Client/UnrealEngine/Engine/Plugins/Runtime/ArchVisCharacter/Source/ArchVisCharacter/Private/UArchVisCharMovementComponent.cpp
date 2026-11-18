// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ArchVisCharacter
// Functions: 9

// StaticClass @ 14f00d030

UClass * __cdecl UArchVisCharMovementComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UCharacterMovementComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ArchVisCharacter",L"ArchVisCharMovementComponent",
               &Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton,
               StaticRegisterNativesUArchVisCharMovementComponent,0x1090,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UArchVisCharMovementComponent>,
               InternalVTableHelperCtorCaller<UArchVisCharMovementComponent>,local_res8,
               UCharacterMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton;
}

// UArchVisCharMovementComponent @ 14f00ddf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UArchVisCharMovementComponent * __thiscall
UArchVisCharMovementComponent::UArchVisCharMovementComponent
          (UArchVisCharMovementComponent *this,FVTableHelper *param_1)

{
  UCharacterMovementComponent::UCharacterMovementComponent
            ((UCharacterMovementComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x128 = &_vftable__for__UPawnMovementComponent__;
  *(undefined ***)&this->field_0x190 = &_vftable__for__IRVOAvoidanceInterface__;
  *(undefined ***)&this->field_0x198 = &_vftable__for__INetworkPredictionInterface__;
  return this;
}

// UArchVisCharMovementComponent @ 14f00de60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UArchVisCharMovementComponent * __thiscall
UArchVisCharMovementComponent::UArchVisCharMovementComponent
          (UArchVisCharMovementComponent *this,FObjectInitializer *param_1)

{
  UCharacterMovementComponent::UCharacterMovementComponent
            ((UCharacterMovementComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x128 = &_vftable__for__UPawnMovementComponent__;
  *(undefined ***)&this->field_0x190 = &_vftable__for__IRVOAvoidanceInterface__;
  *(undefined ***)&this->field_0x198 = &_vftable__for__INetworkPredictionInterface__;
  (this->RotationalAcceleration).Pitch = 300.0;
  (this->RotationalAcceleration).Yaw = 300.0;
  (this->RotationalAcceleration).Roll = 0.0;
  (this->RotationalDeceleration).Pitch = 300.0;
  (this->RotationalDeceleration).Yaw = 300.0;
  (this->RotationalDeceleration).Roll = 0.0;
  (this->MaxRotationalVelocity).Pitch = 80.0;
  (this->MaxRotationalVelocity).Yaw = 100.0;
  (this->MaxRotationalVelocity).Roll = 0.0;
  this->MinPitch = -85.0;
  this->MaxPitch = 85.0;
  this->WalkingFriction = 4.0;
  this->WalkingSpeed = 165.0;
  this->WalkingAcceleration = 500.0;
  *(undefined4 *)&this->field_0x2b0 = 0;
  return this;
}

// ~UArchVisCharMovementComponent @ 14f00e000

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
UArchVisCharMovementComponent::~UArchVisCharMovementComponent(UArchVisCharMovementComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x128 = &_vftable__for__UPawnMovementComponent__;
  *(undefined ***)&this->field_0x190 = &_vftable__for__IRVOAvoidanceInterface__;
  *(undefined ***)&this->field_0x198 = &_vftable__for__INetworkPredictionInterface__;
  UCharacterMovementComponent::~UCharacterMovementComponent((UCharacterMovementComponent *)this);
  return;
}

// AddRotInput @ 14f00e2d0

void __thiscall
UArchVisCharMovementComponent::AddRotInput
          (UArchVisCharMovementComponent *this,float param_1,float param_2,float param_3)

{
  (this->CurrentRotInput).Roll = (double)param_3 + (this->CurrentRotInput).Roll;
  (this->CurrentRotInput).Pitch = (double)param_1 + (this->CurrentRotInput).Pitch;
  (this->CurrentRotInput).Yaw = (double)param_2 + (this->CurrentRotInput).Yaw;
  return;
}

// GetPrivateStaticClass @ 14f00e760

UClass * __cdecl UArchVisCharMovementComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UCharacterMovementComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ArchVisCharacter",L"ArchVisCharMovementComponent",
               &Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton,
               StaticRegisterNativesUArchVisCharMovementComponent,0x1090,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UArchVisCharMovementComponent>,
               InternalVTableHelperCtorCaller<UArchVisCharMovementComponent>,local_res8,
               UCharacterMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UArchVisCharMovementComponent.InnerSingleton;
}

// OnRegister @ 14f00ec60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UArchVisCharMovementComponent::OnRegister(UArchVisCharMovementComponent *this)

{
  UCharacterMovementComponent::OnRegister((UCharacterMovementComponent *)this);
  *(float *)&this->field_0x244 = this->WalkingFriction;
  *(float *)&this->field_0x288 = this->WalkingSpeed;
  *(float *)&this->field_0x29c = this->WalkingAcceleration;
  return;
}

// PhysWalking @ 14f00eca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UArchVisCharMovementComponent::PhysWalking
          (UArchVisCharMovementComponent *this,float param_1,int param_2)

{
  double dVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 extraout_EAX;
  int iVar14;
  TQuat<double> *pTVar15;
  uint uVar16;
  UArchVisCharMovementComponent *pUVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 in_register_00001244 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar48;
  undefined1 auVar47 [16];
  TRotator<double> local_1e8;
  undefined4 uStack_1d0;
  undefined1 uStack_1cc;
  undefined2 uStack_1cb;
  undefined1 uStack_1c9;
  TQuat<double> local_1c8;
  TRotator<double> local_1a8;
  undefined1 local_188 [4];
  undefined4 local_184;
  undefined4 local_e4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  auVar35._4_12_ = in_register_00001244;
  auVar35._0_4_ = param_1;
  pUVar17 = this;
  UCharacterMovementComponent::PhysWalking((UCharacterMovementComponent *)this,param_1,param_2);
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar25 = __real_3ff0000000000000;
  dVar24 = (this->CurrentRotInput).Yaw;
  dVar1 = (this->CurrentRotationalVelocity).Yaw;
  dVar9 = (double)param_1;
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar48 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (dVar24 == 0.0) {
    dVar24 = dVar9 * (this->RotationalDeceleration).Yaw;
    if (dVar1 <= 0.0) {
      dVar1 = dVar1 + dVar24;
      if (0.0 <= dVar1) {
        dVar1 = 0.0;
      }
    }
    else {
      dVar1 = dVar1 - dVar24;
      if (dVar1 <= 0.0) {
        dVar1 = 0.0;
      }
    }
  }
  else {
    dVar41 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (__real_3ff0000000000000 <= dVar41) {
      dVar41 = __real_3ff0000000000000;
    }
    dVar24 = dVar24 * (this->RotationalAcceleration).Yaw * dVar9;
    dVar41 = (double)(float)(dVar41 * (this->MaxRotationalVelocity).Yaw);
    dVar42 = dVar41 + dVar1;
    dVar41 = dVar41 - dVar1;
    dVar42 = (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) ^ uVar48,SUB84(dVar42,0) ^ uVar16);
    if (dVar41 <= 0.0) {
      dVar41 = 0.0;
    }
    if (0.0 <= dVar42) {
      dVar42 = 0.0;
    }
    dVar5 = (double)(float)dVar41;
    if (dVar24 <= (double)(float)dVar41) {
      dVar5 = dVar24;
    }
    auVar35._0_8_ = (double)(float)dVar42;
    auVar35._8_8_ = 0;
    if (dVar5 <= auVar35._0_8_) {
      dVar5 = auVar35._0_8_;
    }
    dVar1 = dVar1 + (double)(float)dVar5;
  }
  (this->CurrentRotationalVelocity).Yaw = dVar1;
  dVar24 = (this->CurrentRotInput).Pitch;
  dVar41 = (this->CurrentRotationalVelocity).Pitch;
  if (dVar24 == 0.0) {
    dVar24 = dVar9 * (this->RotationalDeceleration).Pitch;
    if (dVar41 <= 0.0) {
      dVar41 = dVar41 + dVar24;
      if (0.0 <= dVar41) {
        dVar41 = 0.0;
      }
    }
    else {
      dVar41 = dVar41 - dVar24;
      if (dVar41 <= 0.0) {
        dVar41 = 0.0;
      }
    }
  }
  else {
    dVar42 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar11,SUB84(dVar24,0) & uVar10);
    if (dVar25 <= dVar42) {
      dVar42 = dVar25;
    }
    dVar24 = dVar24 * (this->RotationalAcceleration).Pitch * dVar9;
    dVar25 = (double)(float)(dVar42 * (this->MaxRotationalVelocity).Pitch);
    dVar42 = dVar25 + dVar41;
    dVar25 = dVar25 - dVar41;
    dVar42 = (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) ^ uVar48,SUB84(dVar42,0) ^ uVar16);
    if (dVar25 <= 0.0) {
      dVar25 = 0.0;
    }
    if (0.0 <= dVar42) {
      dVar42 = 0.0;
    }
    dVar5 = (double)(float)dVar25;
    if (dVar24 <= (double)(float)dVar25) {
      dVar5 = dVar24;
    }
    auVar35._0_8_ = (double)(float)dVar42;
    auVar35._8_8_ = 0;
    if (dVar5 <= auVar35._0_8_) {
      dVar5 = auVar35._0_8_;
    }
    dVar41 = dVar41 + (double)(float)dVar5;
  }
  (this->CurrentRotationalVelocity).Pitch = dVar41;
  dVar41 = dVar9 * dVar41;
  dVar1 = dVar1 * dVar9;
  dVar9 = dVar9 * (this->CurrentRotationalVelocity).Roll;
  auVar26._8_4_ = SUB84(dVar1,0);
  auVar26._0_8_ = dVar41;
  auVar26._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar27 = divpd(auVar26,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar35 = roundpd(auVar35,auVar27,3);
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar36._0_8_ = auVar35._0_8_ * dVar6;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar36._8_8_ = auVar35._8_8_ * dVar7;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = dVar9;
  dVar43 = dVar41 - auVar36._0_8_;
  dVar46 = dVar1 - auVar36._8_8_;
  auVar35 = divpd(auVar28,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar35 = roundpd(auVar36,auVar35,3);
  dVar24 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar25 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar29._8_4_ = SUB84(dVar46,0);
  auVar29._0_8_ = dVar43;
  auVar29._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
  dVar42 = dVar9 - auVar35._0_8_ * dVar24;
  dVar5 = 0.0 - auVar35._8_8_ * dVar25;
  uVar18 = -(ulonglong)(0.0 <= dVar43);
  uVar20 = -(ulonglong)(0.0 <= dVar46);
  auVar44._0_8_ = (ulonglong)dVar43 & uVar18;
  auVar44._8_4_ = (undefined4)((ulonglong)dVar46 & uVar20);
  auVar44._12_4_ = (undefined4)(((ulonglong)dVar46 & uVar20) >> 0x20);
  dVar46 = auVar29._8_8_ + dVar7;
  uVar19 = -(ulonglong)(0.0 <= dVar42);
  uVar21 = -(ulonglong)(0.0 <= dVar5);
  auVar47._0_4_ = ~(uint)uVar18 & SUB84(dVar43 + dVar6,0);
  auVar47._4_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)(dVar43 + dVar6) >> 0x20);
  auVar47._8_4_ = ~(uint)uVar20 & SUB84(dVar46,0);
  auVar47._12_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)dVar46 >> 0x20);
  auVar30._8_4_ = SUB84(dVar5,0);
  auVar30._0_8_ = dVar42;
  auVar30._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar46 = auVar30._8_8_ + dVar25;
  auVar47 = auVar47 | auVar44;
  auVar45._0_4_ = ~(uint)uVar19 & SUB84(dVar42 + dVar24,0);
  auVar45._4_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)(dVar42 + dVar24) >> 0x20);
  auVar45._8_4_ = ~(uint)uVar21 & SUB84(dVar46,0);
  auVar45._12_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar46 >> 0x20);
  auVar4._8_4_ = (int)((ulonglong)dVar5 & uVar21);
  auVar4._0_8_ = (ulonglong)dVar42 & uVar19;
  auVar4._12_4_ = (int)(((ulonglong)dVar5 & uVar21) >> 0x20);
  auVar45 = auVar45 | auVar4;
  uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar45._0_8_);
  uVar21 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar45._8_8_);
  uVar20 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar47._0_8_);
  uVar22 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar47._8_8_);
  auVar37._0_8_ = uVar19 & (ulonglong)(auVar45._0_8_ - dVar24);
  uVar18 = uVar21 & (ulonglong)(auVar45._8_8_ - dVar25);
  auVar37._8_4_ = (undefined4)uVar18;
  auVar37._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar31._0_4_ = ~(uint)uVar19 & auVar45._0_4_;
  auVar31._4_4_ = ~(uint)(uVar19 >> 0x20) & auVar45._4_4_;
  auVar31._8_4_ = ~(uint)uVar21 & auVar45._8_4_;
  auVar31._12_4_ = ~(uint)(uVar21 >> 0x20) & auVar45._12_4_;
  auVar37 = auVar37 | auVar31;
  auVar32._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar32._0_8_ = __real_3f1a36e2e0000000;
  auVar32._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar38._0_8_ = (double)CONCAT44(auVar37._4_4_ & uVar11,auVar37._0_4_ & uVar10);
  auVar38._8_4_ = auVar37._8_4_ & uVar12;
  auVar38._12_4_ = auVar37._12_4_ & uVar13;
  auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < auVar38._8_8_);
  auVar33._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar38._0_8_);
  uVar16 = movmskpd((int)pUVar17,auVar33);
  auVar39._0_8_ = uVar20 & (ulonglong)(auVar47._0_8_ - dVar6);
  uVar18 = uVar22 & (ulonglong)(auVar47._8_8_ - dVar7);
  auVar39._8_4_ = (undefined4)uVar18;
  auVar39._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar27._4_4_ = ~(uint)(uVar20 >> 0x20) & auVar47._4_4_;
  auVar27._0_4_ = ~(uint)uVar20 & auVar47._0_4_;
  auVar27._8_4_ = ~(uint)uVar22 & auVar47._8_4_;
  auVar27._12_4_ = ~(uint)(uVar22 >> 0x20) & auVar47._12_4_;
  auVar39 = auVar39 | auVar27;
  auVar40._0_8_ = (double)CONCAT44(auVar39._4_4_ & uVar11,auVar39._0_4_ & uVar10);
  auVar40._8_4_ = auVar39._8_4_ & uVar12;
  auVar40._12_4_ = auVar39._12_4_ & uVar13;
  lVar23 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar40._8_8_);
  auVar8._8_4_ = (int)lVar23;
  auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar40._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar14 = movmskpd(extraout_EAX,auVar8);
  if (((uVar16 & 0x3fffffff) != 0 || iVar14 != 0) && (*(APawn **)&this->field_0x1a0 != (APawn *)0x0)
     ) {
    local_1a8.Roll = dVar9;
    APawn::GetControlRotation(*(APawn **)&this->field_0x1a0,&local_1a8);
    USceneComponent::GetComponentRotation
              (*(USceneComponent **)&this->field_0xc0,(TRotator<double> *)&local_1c8);
    dVar24 = (double)(this->MaxPitch - (float)local_1a8.Pitch);
    dVar25 = (double)(this->MinPitch - (float)local_1a8.Pitch);
    if (dVar41 <= dVar24) {
      dVar24 = dVar41;
    }
    if (dVar24 <= dVar25) {
      dVar24 = dVar25;
    }
    if ((double)(float)dVar41 != dVar24) {
      (this->CurrentRotationalVelocity).Pitch = 0.0;
    }
    dVar24 = dVar24 + local_1a8.Pitch;
    memset(local_188,0,0x100);
    local_1e8.Yaw = dVar1 + local_1c8.Y;
    local_1e8.Roll = dVar9 + local_1c8.Z;
    uStack_1cb = 0;
    uStack_1c9 = 0;
    uStack_1cc = 0;
    pcVar2 = *(code **)(*(longlong *)this + 0x570);
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_1d0 = 0xffffffff;
    uStack_b8 = 0xffffffff;
    local_e4 = 0xffffffff;
    local_1e8.Pitch = 0.0;
    local_c0 = 0;
    local_184 = 0x3f800000;
    pTVar15 = UE::Math::TRotator<double>::Quaternion(&local_1e8,&local_1c8);
    (*pcVar2)(this,&UE::Math::TVector<double>::ZeroVector,pTVar15,0,local_188,0);
    plVar3 = *(longlong **)(*(longlong *)&this->field_0x1a0 + 0x2f0);
    local_1c8.Y = 0.0;
    local_1c8.Z = 0.0;
    local_1c8.X = dVar24;
    (**(code **)(*plVar3 + 0x7b0))(plVar3,&local_1c8);
    fVar34 = (float)((__real_4056800000000000 -
                     (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     )) * ___real_3f86c16c16c16c17);
    *(float *)&this->field_0x29c = fVar34 * this->WalkingAcceleration;
    *(float *)&this->field_0x288 = fVar34 * this->WalkingSpeed;
  }
  dVar24 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CurrentRotInput).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CurrentRotInput).Yaw = dVar24;
  (this->CurrentRotInput).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// StaticRegisterNativesUArchVisCharMovementComponent @ 14f00f3a0

void __cdecl UArchVisCharMovementComponent::StaticRegisterNativesUArchVisCharMovementComponent(void)

{
  return;
}

