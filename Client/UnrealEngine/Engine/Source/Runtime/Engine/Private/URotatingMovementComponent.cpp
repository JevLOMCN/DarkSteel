// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14791bc70

UClass * __cdecl URotatingMovementComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URotatingMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RotatingMovementComponent",
               &Z_Registration_Info_UClass_URotatingMovementComponent.InnerSingleton,
               StaticRegisterNativesURotatingMovementComponent,0x160,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URotatingMovementComponent>,
               InternalVTableHelperCtorCaller<URotatingMovementComponent>,local_res8,
               UMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URotatingMovementComponent.InnerSingleton;
}

// URotatingMovementComponent @ 14792a2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URotatingMovementComponent * __thiscall
URotatingMovementComponent::URotatingMovementComponent
          (URotatingMovementComponent *this,FVTableHelper *param_1)

{
  UMovementComponent::UMovementComponent((UMovementComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// URotatingMovementComponent @ 14792a330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URotatingMovementComponent * __thiscall
URotatingMovementComponent::URotatingMovementComponent
          (URotatingMovementComponent *this,FObjectInitializer *param_1)

{
  UMovementComponent::UMovementComponent((UMovementComponent *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x3f;
  this->bRotationInLocalSpace = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->RotationRate).Yaw = 180.0;
  return this;
}

// ~URotatingMovementComponent @ 14792ce70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URotatingMovementComponent::~URotatingMovementComponent(URotatingMovementComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UMovementComponent::~UMovementComponent((UMovementComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14794c3a0

UClass * __cdecl URotatingMovementComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URotatingMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RotatingMovementComponent",
               &Z_Registration_Info_UClass_URotatingMovementComponent.InnerSingleton,
               StaticRegisterNativesURotatingMovementComponent,0x160,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URotatingMovementComponent>,
               InternalVTableHelperCtorCaller<URotatingMovementComponent>,local_res8,
               UMovementComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URotatingMovementComponent.InnerSingleton;
}

// StaticRegisterNativesURotatingMovementComponent @ 1479707f0

void __cdecl URotatingMovementComponent::StaticRegisterNativesURotatingMovementComponent(void)

{
  return;
}

// TickComponent @ 1479733a0

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
URotatingMovementComponent::TickComponent
          (URotatingMovementComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  TQuat<double> local_108;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  
  cVar16 = (**(code **)(this->_padding_ + 0x518))();
  if (cVar16 == '\0') {
    UMovementComponent::TickComponent((UMovementComponent *)this,param_1,param_2,param_3);
    if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
      lVar2 = this->_padding_;
      auVar1 = *(undefined1 (*) [16])(lVar2 + 0x1f0);
      uVar18 = auVar1._0_4_;
      uVar19 = auVar1._4_4_;
      uVar20 = auVar1._8_4_;
      uVar21 = auVar1._12_4_;
      dVar17 = (double)param_1;
      dVar3 = (this->RotationRate).Yaw * dVar17;
      local_158 = dVar17 * (this->RotationRate).Roll;
      dVar12 = *(double *)(lVar2 + 0x200);
      dVar13 = *(double *)(lVar2 + 0x208);
      local_168._8_4_ = SUB84(dVar3,0);
      local_168._0_8_ = (this->RotationRate).Pitch * dVar17;
      local_168._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_138 = auVar1;
      UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_168,&local_108);
      dVar3 = auVar1._0_8_;
      dVar17 = auVar1._8_8_;
      if (this->bRotationInLocalSpace == 0) {
        dVar7 = dVar13 * local_108.X *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar3 * local_108.W +
                local_108.Y * dVar12 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                local_108.Z * dVar17 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar8 = dVar12 * local_108.X *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                dVar17 * local_108.W +
                local_108.Y * dVar13 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                local_108.Z * dVar3 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar4 = local_108.X * dVar17 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                local_108.W * dVar12 +
                dVar3 * local_108.Y *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                local_108.Z * dVar13 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar6 = local_108.X * dVar3 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                local_108.W * dVar13 +
                dVar17 * local_108.Y *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                local_108.Z * dVar12 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      }
      else {
        dVar4 = dVar3 * local_108.Y *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                local_108.Z * dVar13 +
                dVar17 * local_108.X *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar12 * local_108.W *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar6 = dVar3 * local_108.X *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                local_108.W * dVar13 +
                dVar17 * local_108.Y *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar12 * local_108.Z *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        dVar7 = dVar3 * local_108.W *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar13 * local_108.X +
                local_108.Z * dVar17 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar12 * local_108.Y *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar8 = dVar3 * local_108.Z *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                dVar13 * local_108.Y +
                local_108.W * dVar17 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                dVar12 * local_108.X *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar18 = local_138._0_4_;
        uVar19 = local_138._4_4_;
        uVar20 = local_138._8_4_;
        uVar21 = local_138._12_4_;
      }
      uVar23 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uVar22 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar1._8_4_ = SUB84(dVar6,0);
      auVar1._0_8_ = dVar4;
      auVar1._12_4_ = uVar22;
      local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148._8_4_ = SUB84(dVar8,0);
      local_148._0_8_ = dVar7;
      local_148._12_4_ = uVar23;
      local_e8._8_4_ = SUB84(dVar8,0);
      local_e8._0_8_ = dVar7;
      local_e8._12_4_ = uVar23;
      local_d8._8_4_ = SUB84(dVar6,0);
      local_d8._0_8_ = dVar4;
      local_d8._12_4_ = uVar22;
      if ((((this->PivotTranslation).field0_0x0._s_0.X != 0.0) ||
          ((this->PivotTranslation).field0_0x0._s_0.Y != 0.0)) ||
         ((this->PivotTranslation).field0_0x0._s_0.Z != 0.0)) {
        dVar14 = (this->PivotTranslation).field0_0x0._s_0.X;
        dVar15 = (this->PivotTranslation).field0_0x0._s_0.Y;
        dVar3 = (this->PivotTranslation).field0_0x0._s_0.Z;
        local_168._4_4_ = uVar21;
        local_168._0_4_ = uVar20;
        local_168._8_4_ = uVar20;
        local_168._12_4_ = uVar21;
        dVar11 = dVar3 * (double)CONCAT44(uVar21,uVar20) - dVar15 * dVar12;
        dStack_170 = auVar1._8_8_;
        dVar11 = dVar11 + dVar11;
        dVar10 = dVar14 * dVar12 - dVar3 * (double)CONCAT44(uVar19,uVar18);
        dVar10 = dVar10 + dVar10;
        dVar9 = dVar15 * (double)CONCAT44(uVar19,uVar18) - dVar14 * (double)CONCAT44(uVar21,uVar20);
        dVar9 = dVar9 + dVar9;
        dVar5 = dVar8 * dVar3 - dVar4 * dVar15;
        dVar5 = dVar5 + dVar5;
        dVar6 = dVar4 * dVar14 - dVar7 * dVar3;
        dVar6 = dVar6 + dVar6;
        dVar17 = dVar7 * dVar15 - dVar8 * dVar14;
        dVar17 = dVar17 + dVar17;
        local_128 = (((double)CONCAT44(uVar21,uVar20) * dVar9 - dVar12 * dVar10) +
                    dVar13 * dVar11 + dVar14) -
                    ((dVar8 * dVar17 - dVar4 * dVar6) + dStack_170 * dVar5 + dVar14);
        dStack_120 = ((dVar12 * dVar11 - (double)local_138._0_8_ * dVar9) + dVar13 * dVar10 + dVar15
                     ) - ((dVar4 * dVar5 - dVar7 * dVar17) + dStack_170 * dVar6 + dVar15);
        local_118 = (((double)local_138._0_8_ * dVar10 - (double)local_168._0_8_ * dVar11) +
                    dVar13 * dVar9 + (this->PivotTranslation).field0_0x0._s_0.Z) -
                    ((dVar7 * dVar6 - dVar8 * dVar5) + dStack_170 * dVar17 + dVar3);
      }
      (**(code **)(this->_padding_ + 0x568))(this,&local_128,local_e8,0,0,0);
    }
  }
  return;
}

