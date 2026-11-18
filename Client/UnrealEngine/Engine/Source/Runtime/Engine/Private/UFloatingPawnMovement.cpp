// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147ba1d60

UClass * __cdecl UFloatingPawnMovement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatingPawnMovement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FloatingPawnMovement",
               &Z_Registration_Info_UClass_UFloatingPawnMovement.InnerSingleton,
               StaticRegisterNativesUFloatingPawnMovement,0x1a8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFloatingPawnMovement>,
               InternalVTableHelperCtorCaller<UFloatingPawnMovement>,local_res8,
               UPawnMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatingPawnMovement.InnerSingleton;
}

// UFloatingPawnMovement @ 147bbc230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFloatingPawnMovement * __thiscall
UFloatingPawnMovement::UFloatingPawnMovement(UFloatingPawnMovement *this,FVTableHelper *param_1)

{
  UPawnMovementComponent::UPawnMovementComponent((UPawnMovementComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UFloatingPawnMovement__6B_;
  return this;
}

// UFloatingPawnMovement @ 147bbc280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFloatingPawnMovement * __thiscall
UFloatingPawnMovement::UFloatingPawnMovement
          (UFloatingPawnMovement *this,FObjectInitializer *param_1)

{
  UPawnMovementComponent::UPawnMovementComponent((UPawnMovementComponent *)this,param_1);
  this->bPositionCorrected = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UFloatingPawnMovement__6B_;
  this->MaxSpeed = 1200.0;
  this->Acceleration = 4000.0;
  this->Deceleration = 8000.0;
  this->TurningBoost = 8.0;
  *(char *)&this->_padding_ = (char)this->_padding_;
  return this;
}

// ~UFloatingPawnMovement @ 147bbf250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UFloatingPawnMovement::~UFloatingPawnMovement(UFloatingPawnMovement *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UFloatingPawnMovement__6B_;
  UPawnMovementComponent::~UPawnMovementComponent((UPawnMovementComponent *)this);
  return;
}

// ApplyControlInputToVelocity @ 147bc9590

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
UFloatingPawnMovement::ApplyControlInputToVelocity(UFloatingPawnMovement *this,float param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  char cVar7;
  TVector<double> *pTVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  TVector<double>_u_0 local_e8;
  TVector<double> local_d0 [7];
  
  pTVar8 = UPawnMovementComponent::GetPendingInputVector((UPawnMovementComponent *)this,local_d0);
  dVar1 = __real_3ff0000000000000;
  UE::Math::TVector<double>::GetClampedToMaxSize
            (pTVar8,(TVector<double> *)&local_e8._s_0,__real_3ff0000000000000);
  auVar14._0_8_ = local_e8._s_0.Y * local_e8._s_0.Y;
  auVar14._8_8_ = 0;
  dVar24 = local_e8._s_0.X * local_e8._s_0.X + auVar14._0_8_ + local_e8._s_0.Z * local_e8._s_0.Z;
  if (dVar24 <= 0.0) {
    dVar24 = 0.0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar24;
    auVar14 = sqrtpd(auVar14,auVar3);
    dVar24 = auVar14._0_8_;
  }
  fVar12 = (float)(**(code **)(this->_padding_ + 0x500))(this);
  fVar12 = fVar12 * (float)dVar24;
  cVar7 = (**(code **)(this->_padding_ + 0x508))(this);
  dVar19 = __real_3e45798ee0000000;
  if (((float)dVar24 <= 0.0) || (cVar7 != '\0')) {
    plVar10 = &this->_padding_;
    dVar24 = (double)this->_padding_;
    dVar18 = (double)*plVar10;
    plVar9 = &this->_padding_;
    dVar15 = (double)*plVar9;
    auVar20._0_8_ = dVar15 * dVar15;
    auVar20._8_8_ = 0;
    dVar23 = dVar24 * dVar24 + dVar18 * dVar18 + auVar20._0_8_;
    if (0.0 < dVar23) {
      auVar2._0_8_ = this->_padding_;
      auVar2._8_8_ = this->_padding_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar23;
      auVar14 = sqrtpd(auVar20,auVar5);
      local_d0[0].field0_0x0._16_8_ = this->_padding_;
      dVar16 = auVar14._0_8_ -
               (double)((float)((uint)this->Deceleration & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                       param_1);
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      if (dVar23 == dVar1) {
        auVar6._4_8_ = auVar14._8_8_;
        auVar6._0_4_ = (int)((ulonglong)auVar2._0_8_ >> 0x20);
        auVar21._0_8_ = auVar6._0_8_ << 0x20;
        auVar21._8_4_ = (int)auVar2._8_8_;
        auVar21._12_4_ = (int)((ulonglong)auVar2._8_8_ >> 0x20);
        auVar25 = auVar2;
        uVar26 = local_d0[0].field0_0x0._16_8_;
        uVar17 = auVar21._8_8_;
      }
      else if (__real_3e45798ee0000000 <= dVar23) {
        dVar23 = dVar1 / SQRT(dVar23);
        uVar17 = dVar24 * dVar23;
        uVar26 = dVar15 * dVar23;
        auVar25._0_8_ = dVar23 * dVar18;
        auVar25._8_8_ = 0;
      }
      else {
        auVar25._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        auVar25._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      dVar24 = (double)(float)dVar16;
      in_XMM3._8_8_ = auVar25._8_8_;
      in_XMM3._0_8_ = auVar25._0_8_ * dVar24;
      dVar18 = (double)uVar17 * dVar24;
      dVar24 = (double)uVar26 * dVar24;
      *plVar10 = (longlong)in_XMM3._0_8_;
      this->_padding_ = (longlong)dVar18;
      *plVar9 = (longlong)dVar24;
      if ((cVar7 != '\0') &&
         (dVar18 * dVar18 + (double)*plVar10 * (double)*plVar10 + dVar24 * dVar24 <
          (double)(fVar12 * fVar12))) {
        dVar24 = (double)auVar2._8_8_ * (double)auVar2._8_8_ +
                 (double)auVar2._0_8_ * (double)auVar2._0_8_ +
                 (double)local_d0[0].field0_0x0._16_8_ * (double)local_d0[0].field0_0x0._16_8_;
        uVar26 = auVar2._0_8_;
        uVar27 = local_d0[0].field0_0x0._16_8_;
        uVar17 = auVar2._8_8_;
        if (dVar24 != dVar1) {
          if (dVar19 <= dVar24) {
            in_XMM3._0_8_ = dVar1 / SQRT(dVar24);
            in_XMM3._8_8_ = 0;
            uVar17 = (double)auVar2._8_8_ * in_XMM3._0_8_;
            uVar26 = (double)auVar2._0_8_ * in_XMM3._0_8_;
            uVar27 = (double)local_d0[0].field0_0x0._16_8_ * in_XMM3._0_8_;
          }
          else {
            local_d0[0].field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
        }
        dVar24 = (double)fVar12;
        *plVar10 = (longlong)((double)uVar26 * dVar24);
        this->_padding_ = (longlong)((double)uVar17 * dVar24);
        *plVar9 = (longlong)((double)uVar27 * dVar24);
      }
    }
  }
  else {
    dVar24 = (double)this->_padding_;
    dVar1 = (double)this->_padding_;
    dVar19 = (double)this->_padding_;
    dVar18 = dVar24 * dVar24 + dVar1 * dVar1 + dVar19 * dVar19;
    if (0.0 < dVar18) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar18;
      auVar14 = sqrtpd(in_XMM3,auVar4);
      fVar13 = param_1 * this->TurningBoost;
      dVar18 = auVar14._0_8_;
      if (__real_3f800000 <= fVar13) {
        fVar13 = __real_3f800000;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      dVar15 = (double)fVar13;
      in_XMM3._8_8_ = auVar14._8_8_;
      in_XMM3._0_8_ = (dVar18 * local_e8._s_0.Y - dVar24) * dVar15 + dVar24;
      this->_padding_ = (longlong)((dVar18 * local_e8._s_0.X - dVar1) * dVar15 + dVar1);
      this->_padding_ = (longlong)in_XMM3._0_8_;
      this->_padding_ = (longlong)((dVar18 * local_e8._s_0.Z - dVar19) * dVar15 + dVar19);
    }
  }
  plVar11 = &this->_padding_;
  plVar10 = &this->_padding_;
  plVar9 = &this->_padding_;
  cVar7 = (**(code **)(this->_padding_ + 0x508))(this);
  if (cVar7 == '\0') {
    dVar24 = (double)fVar12;
  }
  else {
    auVar22._0_8_ =
         (double)*plVar10 * (double)*plVar10 + (double)*plVar9 * (double)*plVar9 +
         (double)*plVar11 * (double)*plVar11;
    auVar22._8_8_ = 0;
    auVar14 = sqrtpd(in_XMM3,auVar22);
    dVar24 = auVar14._0_8_;
  }
  dVar19 = (double)(float)((uint)this->Acceleration & __xmm_7fffffff7fffffff7fffffff7fffffff);
  dVar1 = (double)param_1;
  *plVar9 = (longlong)(local_e8._s_0.X * dVar19 * dVar1 + (double)*plVar9);
  *plVar10 = (longlong)(local_e8._s_0.Y * dVar19 * dVar1 + (double)*plVar10);
  *plVar11 = (longlong)(local_e8._s_0.Z * dVar19 * dVar1 + (double)*plVar11);
  pTVar8 = UE::Math::TVector<double>::GetClampedToMaxSize
                     ((TVector<double> *)plVar9,local_d0,(double)(float)dVar24);
  dVar24 = (pTVar8->field0_0x0)._s_0.Y;
  *plVar9 = (longlong)(pTVar8->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar24;
  this->_padding_ = (longlong)(pTVar8->field0_0x0)._s_0.Z;
  (**(code **)(this->_padding_ + 0x628))(this,local_d0);
  return;
}

// GetMaxSpeed @ 147be2fb0

float __thiscall UFloatingPawnMovement::GetMaxSpeed(UFloatingPawnMovement *this)

{
  return this->MaxSpeed;
}

// GetPrivateStaticClass @ 147be4f40

UClass * __cdecl UFloatingPawnMovement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatingPawnMovement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FloatingPawnMovement",
               &Z_Registration_Info_UClass_UFloatingPawnMovement.InnerSingleton,
               StaticRegisterNativesUFloatingPawnMovement,0x1a8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UFloatingPawnMovement>,
               InternalVTableHelperCtorCaller<UFloatingPawnMovement>,local_res8,
               UPawnMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatingPawnMovement.InnerSingleton;
}

// LimitWorldBounds @ 147bf18d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UFloatingPawnMovement::LimitWorldBounds(UFloatingPawnMovement *this)

{
  float fVar1;
  double dVar2;
  AWorldSettings *pAVar3;
  float fVar4;
  double dVar5;
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pAVar3 = AActor::GetWorldSettings((AActor *)this->_padding_);
    if (((pAVar3 != (AWorldSettings *)0x0) && (pAVar3->bEnableWorldBoundsChecks != '\0')) &&
       (this->_padding_ != 0)) {
      fVar1 = pAVar3->KillZ;
      dVar2 = *(double *)(this->_padding_ + 0x220);
      if (dVar2 < (double)fVar1) {
        fVar4 = (float)(**(code **)(this->_padding_ + 0x500))(this);
        dVar2 = ((double)fVar1 - dVar2) + __real_4000000000000000;
        dVar5 = (double)fVar4;
        if (dVar2 <= (double)fVar4) {
          dVar5 = dVar2;
        }
        this->_padding_ = (longlong)dVar5;
        return true;
      }
    }
  }
  return false;
}

// ResolvePenetrationImpl @ 147bfe0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UFloatingPawnMovement::ResolvePenetrationImpl
          (UFloatingPawnMovement *this,TVector<double> *param_1,FHitResult *param_2,
          TQuat<double> *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = UMovementComponent::ResolvePenetrationImpl
                    ((UMovementComponent *)this,param_1,param_2,param_3);
  uVar1 = *(undefined4 *)&this->field_0x1a0;
  uVar3 = ZPULL(uVar1,0,1) | (uint)bVar2;
  *(uint *)&this->field_0x1a0 = (uVar3 ^ this->bPositionCorrected) & 1 ^ uVar1;
  return (bool)((byte)uVar3 & 1);
}

// StaticRegisterNativesUFloatingPawnMovement @ 147c035b0

void __cdecl UFloatingPawnMovement::StaticRegisterNativesUFloatingPawnMovement(void)

{
  return;
}

// TickComponent @ 147c07960

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
UFloatingPawnMovement::TickComponent
          (UFloatingPawnMovement *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  AController *this_00;
  longlong lVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 in_XMM1_Db;
  double dVar12;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_168;
  undefined1 local_158 [4];
  float local_154;
  undefined1 local_118 [100];
  undefined4 local_b4;
  byte local_ab;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  cVar8 = (**(code **)(this->_padding_ + 0x518))();
  if (cVar8 == '\0') {
    UMovementComponent::TickComponent((UMovementComponent *)this,param_1,param_2,param_3);
    if ((((this->_padding_ != 0) && (this->_padding_ != 0)) &&
        (this_00 = *(AController **)(this->_padding_ + 0x2f0), this_00 != (AController *)0x0)) &&
       (cVar8 = (**(code **)(this_00->_padding_ + 0x7f0))(this_00), cVar8 != '\0')) {
      bVar9 = AController::IsLocalPlayerController(this_00);
      dVar6 = __real_3ff0000000000000;
      if (((bVar9) || (cVar8 = (**(code **)(this_00->_padding_ + 0x48))(), cVar8 == '\0')) ||
         (*(char *)((longlong)&this->_padding_ + 5) != '\0')) {
        (**(code **)(this->_padding_ + 0x648))(this,param_1);
      }
      else {
        cVar8 = (**(code **)(this->_padding_ + 0x508))(this,this->MaxSpeed);
        if (cVar8 == '\x01') {
          dVar1 = (double)this->_padding_;
          dVar2 = (double)this->_padding_;
          dVar3 = (double)this->_padding_;
          dVar12 = (double)this->MaxSpeed;
          dVar5 = dVar6 / SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
          this->_padding_ = (longlong)(dVar5 * dVar1 * dVar12);
          this->_padding_ = (longlong)(dVar5 * dVar2 * dVar12);
          this->_padding_ = (longlong)(dVar5 * dVar3 * dVar12);
        }
      }
      (**(code **)(this->_padding_ + 0x650))(this);
      this->bPositionCorrected = 0;
      dVar1 = (double)param_1;
      local_1d8 = dVar1 * (double)this->_padding_;
      local_1d0 = dVar1 * (double)this->_padding_;
      local_1c8 = dVar1 * (double)this->_padding_;
      uVar10 = SUB84(local_1d8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar11 = (uint)((ulonglong)local_1d8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3eb0c6f7a0000000 <= (double)CONCAT44(uVar11,uVar10) &&
            (double)CONCAT44(uVar11,uVar10) != __real_3eb0c6f7a0000000) ||
          (__real_3eb0c6f7a0000000 <
           (double)CONCAT44((uint)((ulonglong)local_1d0 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_1d0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (uVar10 = SUB84(local_1c8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar11 = (uint)((ulonglong)local_1c8 >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3eb0c6f7a0000000 <= (double)CONCAT44(uVar11,uVar10) &&
         (double)CONCAT44(uVar11,uVar10) != __real_3eb0c6f7a0000000)) {
        lVar4 = this->_padding_;
        local_168 = *(double *)(lVar4 + 0x220);
        local_198 = *(undefined8 *)(lVar4 + 0x1f0);
        uStack_190 = *(undefined8 *)(lVar4 + 0x1f8);
        dVar2 = *(double *)(lVar4 + 0x210);
        dVar3 = *(double *)(lVar4 + 0x218);
        local_188 = *(undefined8 *)(lVar4 + 0x200);
        uStack_180 = *(undefined8 *)(lVar4 + 0x208);
        memset(local_158,0,0x100);
        fVar7 = __real_3f800000;
        uStack_1a8 = 0xffffffff;
        local_1b0 = 0;
        uStack_1a4 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b4 = 0xffffffff;
        local_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0xffffffff;
        uStack_84 = 0;
        local_154 = 1.0;
        (**(code **)(this->_padding_ + 0x570))(this,&local_1d8,&local_198,1,local_158,0);
        if (((local_ab & 1) != 0) && ((local_ab & 2) == 0)) {
          (**(code **)(this->_padding_ + 0x548))
                    (this,local_158,CONCAT44(in_XMM1_Db,param_1),&local_1d8);
          (**(code **)(this->_padding_ + 0x590))
                    (this,&local_1d8,fVar7 - local_154,local_118,local_158,1);
        }
        if (this->bPositionCorrected == 0) {
          lVar4 = this->_padding_;
          dVar6 = dVar6 / dVar1;
          dVar1 = *(double *)(lVar4 + 0x218);
          dVar5 = *(double *)(lVar4 + 0x220);
          this->_padding_ = (longlong)((*(double *)(lVar4 + 0x210) - dVar2) * dVar6);
          this->_padding_ = (longlong)((dVar1 - dVar3) * dVar6);
          this->_padding_ = (longlong)((dVar5 - local_168) * dVar6);
        }
      }
      (**(code **)(this->_padding_ + 0x550))(this);
    }
  }
  return;
}

