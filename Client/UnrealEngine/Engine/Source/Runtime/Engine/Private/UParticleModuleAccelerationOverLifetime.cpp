// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472f6e60

UClass * __cdecl UParticleModuleAccelerationOverLifetime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAccelerationOverLifetime",
               &Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.InnerSingleton,
               StaticRegisterNativesUParticleModuleAccelerationOverLifetime,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAccelerationOverLifetime>
               ,InternalVTableHelperCtorCaller<UParticleModuleAccelerationOverLifetime>,local_res8,
               UParticleModuleAccelerationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.InnerSingleton;
}

// UParticleModuleAccelerationOverLifetime @ 1472fc3c0

UParticleModuleAccelerationOverLifetime * __thiscall
UParticleModuleAccelerationOverLifetime::UParticleModuleAccelerationOverLifetime
          (UParticleModuleAccelerationOverLifetime *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationOverLifetime__6B_;
  (this->AccelOverLife)._padding_ = 0;
  (this->AccelOverLife)._padding_ = 0;
  (this->AccelOverLife)._padding_ = 0;
  *(undefined4 *)&(this->AccelOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->AccelOverLife)._padding_ + 4) = 0;
  (this->AccelOverLife).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AccelOverLife).MaxValue = 0.0;
  (this->AccelOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AccelOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->AccelOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AccelOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AccelOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->AccelOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AccelOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleAccelerationOverLifetime @ 1472fd740

void __thiscall
UParticleModuleAccelerationOverLifetime::~UParticleModuleAccelerationOverLifetime
          (UParticleModuleAccelerationOverLifetime *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationOverLifetime__6B_;
  pvVar1 = (void *)(this->AccelOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472ffd00

UClass * __cdecl UParticleModuleAccelerationOverLifetime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAccelerationOverLifetime",
               &Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.InnerSingleton,
               StaticRegisterNativesUParticleModuleAccelerationOverLifetime,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAccelerationOverLifetime>
               ,InternalVTableHelperCtorCaller<UParticleModuleAccelerationOverLifetime>,local_res8,
               UParticleModuleAccelerationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAccelerationOverLifetime @ 147301760

void __cdecl
UParticleModuleAccelerationOverLifetime::
StaticRegisterNativesUParticleModuleAccelerationOverLifetime(void)

{
  return;
}

// UParticleModuleAccelerationOverLifetime @ 14815b570

UParticleModuleAccelerationOverLifetime * __thiscall
UParticleModuleAccelerationOverLifetime::UParticleModuleAccelerationOverLifetime
          (UParticleModuleAccelerationOverLifetime *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationOverLifetime__6B_;
  (this->AccelOverLife)._padding_ = 0;
  (this->AccelOverLife)._padding_ = 0;
  (this->AccelOverLife)._padding_ = 0;
  *(undefined4 *)&(this->AccelOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->AccelOverLife)._padding_ + 4) = 0;
  (this->AccelOverLife).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AccelOverLife).MaxValue = 0.0;
  (this->AccelOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AccelOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->AccelOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AccelOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AccelOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->AccelOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AccelOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return this;
}

// InitializeDefaults @ 148182ca0

void __thiscall
UParticleModuleAccelerationOverLifetime::InitializeDefaults
          (UParticleModuleAccelerationOverLifetime *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->AccelOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionAccelOverLife");
    pUVar3 = NewObject<UDistributionVectorConstantCurve>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->AccelOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 148189770

void __thiscall
UParticleModuleAccelerationOverLifetime::PostInitProperties
          (UParticleModuleAccelerationOverLifetime *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->AccelOverLife);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionAccelOverLife");
      pUVar3 = NewObject<UDistributionVectorConstantCurve>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->AccelOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// Update @ 1481a8a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleAccelerationOverLifetime::Update
          (UParticleModuleAccelerationOverLifetime *this,FUpdateContext *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  UParticleLODLevel *pUVar20;
  undefined4 *puVar21;
  UObject *pUVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined8 uVar43;
  undefined8 uVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  TVector<double>_u_0 local_1b8;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TVector<double>_u_0 local_168 [10];
  
  pUVar20 = UParticleEmitter::GetCurrentLODLevel
                      (((FParticleEmitterInstance *)param_1->_padding_)->SpriteTemplate,
                       (FParticleEmitterInstance *)param_1->_padding_);
  if ((pUVar20 == (UParticleLODLevel *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                          ,0xba5,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->_padding_ & 1) == 0) ||
     (((pUVar20->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0)) {
    lVar23 = param_1->_padding_;
    fVar1 = param_1->DeltaTime;
    lVar3 = *(longlong *)(lVar23 + 0x168);
    iVar2 = *(int *)(lVar23 + 0x188);
    lVar4 = *(longlong *)(lVar23 + 0x170);
    iVar17 = *(int *)(lVar23 + 0x18c) + -1;
    lVar23 = (longlong)iVar17;
    if (-1 < iVar17) {
      do {
        uVar19 = (uint)*(ushort *)(lVar4 + lVar23 * 2) * iVar2;
        uVar24 = (ulonglong)uVar19;
        if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar3) & 0x4000000) == 0) {
          pUVar22 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          FRawDistributionVector::GetValue
                    (&this->AccelOverLife,(TVector<double> *)&local_1b8._s_0,
                     *(float *)(uVar24 + 0x90 + lVar3),pUVar22,0,(FRandomStream *)0x0);
          *(float *)(uVar24 + 0x40 + lVar3) =
               (float)local_1b8._s_0.X * fVar1 + *(float *)(uVar24 + 0x40 + lVar3);
          *(float *)(uVar24 + 0x44 + lVar3) =
               (float)local_1b8._s_0.Y * fVar1 + *(float *)(uVar24 + 0x44 + lVar3);
          *(float *)(uVar24 + 0x48 + lVar3) =
               (float)local_1b8._s_0.Z * fVar1 + *(float *)(uVar24 + 0x48 + lVar3);
          *(float *)(uVar24 + 0x30 + lVar3) =
               (float)local_1b8._s_0.X * fVar1 + *(float *)(uVar24 + 0x30 + lVar3);
          *(float *)(uVar24 + 0x34 + lVar3) =
               (float)local_1b8._s_0.Y * fVar1 + *(float *)(uVar24 + 0x34 + lVar3);
          *(float *)(uVar24 + 0x38 + lVar3) =
               (float)local_1b8._s_0.Z * fVar1 + *(float *)(uVar24 + 0x38 + lVar3);
        }
        lVar23 = lVar23 + -1;
      } while (-1 < lVar23);
    }
  }
  else {
    puVar21 = (undefined4 *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    uVar15 = _UNK_15061cc8c;
    uVar14 = _UNK_15061cc88;
    uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    fVar1 = param_1->DeltaTime;
    uVar39 = *puVar21;
    uVar40 = puVar21[1];
    uVar41 = puVar21[2];
    uVar42 = puVar21[3];
    uVar43 = *(undefined8 *)(puVar21 + 4);
    uVar46 = *(undefined8 *)(puVar21 + 6);
    local_188 = (uint)*(undefined8 *)(puVar21 + 0x10);
    uStack_184 = (uint)((ulonglong)*(undefined8 *)(puVar21 + 0x10) >> 0x20);
    uStack_180 = (uint)*(undefined8 *)(puVar21 + 0x12);
    uStack_17c = (uint)((ulonglong)*(undefined8 *)(puVar21 + 0x12) >> 0x20);
    local_198 = *(undefined8 *)(puVar21 + 0x14);
    uStack_190 = *(undefined8 *)(puVar21 + 0x16);
    lVar23 = param_1->_padding_;
    lVar3 = *(longlong *)(lVar23 + 0x168);
    iVar2 = *(int *)(lVar23 + 0x188);
    lVar4 = *(longlong *)(lVar23 + 0x170);
    iVar17 = *(int *)(lVar23 + 0x18c) + -1;
    lVar23 = (longlong)iVar17;
    local_1b8._s_0.X = (double)uVar43;
    local_1b8._s_0.Y = (double)uVar46;
    local_178 = uVar39;
    uStack_174 = uVar40;
    uStack_170 = uVar41;
    uStack_16c = uVar42;
    if (-1 < iVar17) {
      do {
        uVar18 = (uint)*(ushort *)(lVar4 + lVar23 * 2) * iVar2;
        uVar24 = (ulonglong)uVar18;
        if ((*(uint *)((ulonglong)uVar18 + 0x6c + lVar3) & 0x4000000) == 0) {
          pUVar22 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          FRawDistributionVector::GetValue
                    (&this->AccelOverLife,(TVector<double> *)&local_168[0]._s_0,
                     *(float *)(uVar24 + 0x90 + lVar3),pUVar22,0,(FRandomStream *)0x0);
          dVar8 = (double)uVar43 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar9 = (double)uVar46 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dVar6 = (double)CONCAT44(uVar40,uVar39) *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar7 = (double)CONCAT44(uVar42,uVar41) *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar51 = local_168[0]._8_8_;
          auVar37._8_4_ = SUB84(dVar7,0);
          auVar37._0_8_ = dVar6;
          auVar37._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          auVar32._8_4_ = SUB84(dVar9,0);
          auVar32._0_8_ = dVar8;
          auVar32._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar38 = blendpd(auVar37,auVar32,2);
          auVar49._0_8_ = dVar51 * dVar6 - local_168[0]._0_8_ * dVar7;
          auVar49._8_8_ = (double)local_168[0]._16_8_ * dVar7 - dVar51 * dVar8;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = local_168[0]._s_0.Z;
          auVar32 = blendpd(local_168[0]._0_16_,auVar34,2);
          auVar33._0_8_ = auVar32._0_8_ * dVar8 - (double)local_168[0]._16_8_ * auVar38._0_8_;
          auVar33._8_8_ = auVar32._8_8_ * dVar9 - auVar38._8_8_ * 0.0;
          dVar10 = auVar49._8_8_ + auVar49._8_8_;
          dVar11 = auVar33._0_8_ + auVar33._0_8_;
          uVar39 = SUB84(dVar11,0);
          uVar40 = (undefined4)((ulonglong)dVar11 >> 0x20);
          auVar32 = blendpd(auVar49,auVar33,2);
          auVar47._8_4_ = uVar39;
          auVar47._0_8_ = dVar10;
          auVar47._12_4_ = uVar40;
          auVar28._8_4_ = uVar39;
          auVar28._0_8_ = dVar10;
          auVar28._12_4_ = uVar40;
          auVar44._8_4_ = uVar39;
          auVar44._0_8_ = dVar10;
          auVar44._12_4_ = uVar40;
          auVar50._0_8_ = auVar32._0_8_ + auVar32._0_8_;
          auVar50._8_8_ = auVar32._8_8_ + auVar32._8_8_;
          auVar32 = blendpd(auVar44,auVar50,2);
          auVar48._0_8_ = auVar47._8_8_ * dVar6 - dVar10 * dVar7;
          auVar48._8_8_ = auVar50._0_8_ * dVar7 - auVar28._8_8_ * dVar8;
          auVar29._8_4_ = SUB84(auVar50._8_8_,0);
          auVar29._0_8_ = auVar50._0_8_;
          auVar29._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
          auVar45._0_8_ = auVar32._0_8_ * dVar8 - auVar50._0_8_ * auVar38._0_8_;
          auVar45._8_8_ = auVar32._8_8_ * dVar9 - auVar29._8_8_ * auVar38._8_8_;
          lVar25 = -(ulonglong)
                    ((double)CONCAT44(uVar13 & (uint)((ulonglong)local_198 >> 0x20),
                                      uVar19 & (uint)local_198) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar12._4_4_ = uStack_184;
          auVar12._0_4_ = local_188;
          auVar12._8_4_ = uStack_180;
          auVar12._12_4_ = uStack_17c;
          auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar12);
          lVar26 = -(ulonglong)
                    ((double)CONCAT44(uVar13 & uStack_184,uVar19 & local_188) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar27 = -(ulonglong)
                    ((double)CONCAT44(uVar15 & uStack_17c,uVar14 & uStack_180) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar30._8_4_ = SUB84(auVar48._8_8_,0);
          auVar30._0_8_ = auVar48._0_8_;
          auVar30._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
          auVar38._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar38._0_8_ = local_198;
          auVar38._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
          auVar38 = blendpd(auVar48,auVar45,2);
          fVar36 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar34._4_4_,
                                            ~(uint)lVar26 & auVar34._0_4_) *
                          (dVar10 * dVar9 + local_168[0]._0_8_ + auVar30._8_8_)) * fVar1;
          fVar35 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar27 >> 0x20) & auVar34._12_4_,
                                            ~(uint)lVar27 & auVar34._8_4_) *
                          (dVar11 * dVar9 + dVar51 + auVar45._0_8_)) * fVar1;
          *(float *)(uVar24 + 0x40 + lVar3) = fVar36 + *(float *)(uVar24 + 0x40 + lVar3);
          *(float *)(uVar24 + 0x44 + lVar3) = fVar35 + *(float *)(uVar24 + 0x44 + lVar3);
          fVar31 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar32._4_4_,
                                            ~(uint)lVar25 & auVar32._0_4_) *
                          (auVar50._0_8_ * dVar9 + (double)local_168[0]._16_8_ + auVar38._0_8_)) *
                   fVar1;
          *(float *)(uVar24 + 0x48 + lVar3) = fVar31 + *(float *)(uVar24 + 0x48 + lVar3);
          *(float *)(uVar24 + 0x30 + lVar3) = fVar36 + *(float *)(uVar24 + 0x30 + lVar3);
          *(float *)(uVar24 + 0x34 + lVar3) = fVar35 + *(float *)(uVar24 + 0x34 + lVar3);
          *(float *)(uVar24 + 0x38 + lVar3) = fVar31 + *(float *)(uVar24 + 0x38 + lVar3);
          uVar39 = local_178;
          uVar40 = uStack_174;
          uVar41 = uStack_170;
          uVar42 = uStack_16c;
          uVar43 = local_1b8._s_0.X;
          uVar46 = local_1b8._s_0.Y;
        }
        lVar23 = lVar23 + -1;
      } while (-1 < lVar23);
    }
  }
  return;
}

