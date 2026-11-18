// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147315720

UClass * __cdecl UParticleModuleVelocityOverLifetime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocityOverLifetime",
               &Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocityOverLifetime,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVelocityOverLifetime>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocityOverLifetime>,local_res8,
               UParticleModuleVelocityBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.InnerSingleton;
}

// UParticleModuleVelocityOverLifetime @ 1473192d0

UParticleModuleVelocityOverLifetime * __thiscall
UParticleModuleVelocityOverLifetime::UParticleModuleVelocityOverLifetime
          (UParticleModuleVelocityOverLifetime *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVelocityOverLifetime__6B_;
  (this->VelOverLife)._padding_ = 0;
  (this->VelOverLife)._padding_ = 0;
  (this->VelOverLife)._padding_ = 0;
  *(undefined4 *)&(this->VelOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->VelOverLife)._padding_ + 4) = 0;
  (this->VelOverLife).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VelOverLife).MaxValue = 0.0;
  (this->VelOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->VelOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->VelOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VelOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->VelOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->VelOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->VelOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleVelocityOverLifetime @ 147319bf0

void __thiscall
UParticleModuleVelocityOverLifetime::~UParticleModuleVelocityOverLifetime
          (UParticleModuleVelocityOverLifetime *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleVelocityOverLifetime__6B_;
  pvVar1 = (void *)(this->VelOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleVelocityBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731caf0

UClass * __cdecl UParticleModuleVelocityOverLifetime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocityOverLifetime",
               &Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocityOverLifetime,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVelocityOverLifetime>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocityOverLifetime>,local_res8,
               UParticleModuleVelocityBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocityOverLifetime.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVelocityOverLifetime @ 14731d130

void __cdecl
UParticleModuleVelocityOverLifetime::StaticRegisterNativesUParticleModuleVelocityOverLifetime(void)

{
  return;
}

// UParticleModuleVelocityOverLifetime @ 14815edc0

UParticleModuleVelocityOverLifetime * __thiscall
UParticleModuleVelocityOverLifetime::UParticleModuleVelocityOverLifetime
          (UParticleModuleVelocityOverLifetime *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVelocityOverLifetime__6B_;
  (this->VelOverLife)._padding_ = 0;
  (this->VelOverLife)._padding_ = 0;
  (this->VelOverLife)._padding_ = 0;
  *(undefined4 *)&(this->VelOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->VelOverLife)._padding_ + 4) = 0;
  (this->VelOverLife).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VelOverLife).MaxValue = 0.0;
  (this->VelOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->VelOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->VelOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VelOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->VelOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->VelOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->VelOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->Absolute = 0;
  return this;
}

// InitializeDefaults @ 1481853b0

void __thiscall
UParticleModuleVelocityOverLifetime::InitializeDefaults(UParticleModuleVelocityOverLifetime *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->VelOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionVelOverLife");
    pUVar3 = NewObject<UDistributionVectorConstantCurve>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VelOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818c0f0

void __thiscall
UParticleModuleVelocityOverLifetime::PostInitProperties(UParticleModuleVelocityOverLifetime *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->VelOverLife);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionVelOverLife");
      pUVar3 = NewObject<UDistributionVectorConstantCurve>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->VelOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// Spawn @ 14819e250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleVelocityOverLifetime::Spawn
          (UParticleModuleVelocityOverLifetime *this,FSpawnContext *param_1)

{
  double dVar1;
  FBaseParticle *pFVar2;
  longlong lVar3;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  TVector<double> local_48 [2];
  
  if (this->Absolute != 0) {
    pFVar2 = param_1->ParticleBase;
    uVar6 = (undefined4)__real_3ff0000000000000;
    uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar11 = ___xmm_3ff00000000000003ff0000000000000;
    dVar12 = _UNK_150689688;
    if ((this->_padding_ & 2) != 0) {
      lVar3 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
      local_48[0].field0_0x0._16_8_ = *(double *)(lVar3 + 0x50);
      dVar11 = *(double *)(lVar3 + 0x40);
      dVar12 = *(double *)(lVar3 + 0x48);
      uVar6 = (undefined4)local_48[0].field0_0x0._16_8_;
      uVar8 = (undefined4)((ulonglong)local_48[0].field0_0x0._16_8_ >> 0x20);
    }
    pUVar4 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    pTVar5 = FRawDistributionVector::GetValue
                       (&this->VelOverLife,local_48,pFVar2->RelativeTime,pUVar4,0,
                        (FRandomStream *)0x0);
    dVar1 = (pTVar5->field0_0x0)._s_0.Y;
    fVar10 = (float)(dVar11 * (pTVar5->field0_0x0)._s_0.X);
    fVar7 = (float)((double)CONCAT44(uVar8,uVar6) * (pTVar5->field0_0x0)._s_0.Z);
    (pFVar2->Velocity).field0_0x0._s_0.X = fVar10;
    fVar9 = (float)(dVar12 * dVar1);
    (pFVar2->Velocity).field0_0x0._s_0.Y = fVar9;
    (pFVar2->Velocity).field0_0x0._s_0.Z = fVar7;
    (pFVar2->BaseVelocity).field0_0x0._s_0.X = fVar10;
    (pFVar2->BaseVelocity).field0_0x0._s_0.Y = fVar9;
    (pFVar2->BaseVelocity).field0_0x0._s_0.Z = fVar7;
  }
  return;
}

// Update @ 1481b1770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleVelocityOverLifetime::Update
          (UParticleModuleVelocityOverLifetime *this,FUpdateContext *param_1)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FParticleEmitterInstance *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  UParticleLODLevel *pUVar16;
  TTransform<double> *this_00;
  UObject *pUVar17;
  TVector<double> *pTVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar28;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  double dVar29;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar25 [16];
  double dVar30;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar26 [16];
  double dVar31;
  undefined1 auVar27 [16];
  undefined1 auStackY_508 [32];
  TVector<double>_u_0 local_4d0 [2];
  TVector<double> local_4a0;
  TVector<double> local_488;
  TMatrix<double> local_468;
  TMatrix<double> local_3e8;
  TVector<double> local_368;
  TVector<double> local_350;
  TVector<double> local_338;
  TVector<double> local_320;
  TVector<double> local_308;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_508;
  pFVar4 = (FParticleEmitterInstance *)param_1->_padding_;
  pUVar16 = UParticleEmitter::GetCurrentLODLevel(pFVar4->SpriteTemplate,pFVar4);
  if ((pUVar16 == (UParticleLODLevel *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Velocity.cpp"
                          ,0x105,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar22 = (undefined4)__real_3ff0000000000000;
  uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_4d0[0]._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_4d0[0]._s_0.Y = _UNK_150689688;
  this_00 = (TTransform<double> *)(**(code **)*pFVar4->Component)();
  uVar19 = (uint)this->_padding_;
  if ((uVar19 & 2) != 0) {
    local_4d0[0]._16_8_ = (this_00->Scale3D).ZW.m128d_f64[0];
    local_4d0[0]._0_8_ = (this_00->Scale3D).XY.m128d_f64[0];
    local_4d0[0]._8_8_ = (this_00->Scale3D).XY.m128d_f64[1];
    uVar22 = (undefined4)local_4d0[0]._16_8_;
    uVar28 = (undefined4)((ulonglong)local_4d0[0]._16_8_ >> 0x20);
  }
  uVar13 = local_4d0[0]._s_0.Y;
  uVar12 = local_4d0[0]._s_0.X;
  uVar19 = uVar19 & 1;
  if (this->Absolute == 0) {
    if (((pUVar16->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
      if (uVar19 == 0) {
        UE::Math::TTransform<double>::ToMatrixNoScale(this_00,&local_3e8);
        uVar13 = local_4d0[0]._s_0.Y;
        uVar12 = local_4d0[0]._s_0.X;
        lVar21 = param_1->_padding_;
        lVar5 = *(longlong *)(lVar21 + 0x170);
        lVar6 = *(longlong *)(lVar21 + 0x168);
        iVar3 = *(int *)(lVar21 + 0x188);
        iVar15 = *(int *)(lVar21 + 0x18c) + -1;
        lVar21 = (longlong)iVar15;
        if (-1 < iVar15) {
          do {
            uVar19 = (uint)*(ushort *)(lVar5 + lVar21 * 2) * iVar3;
            uVar20 = (ulonglong)uVar19;
            if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
              pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              pTVar18 = FRawDistributionVector::GetValue
                                  (&this->VelOverLife,&local_4a0,*(float *)(uVar20 + 0x90 + lVar6),
                                   pUVar17,0,(FRandomStream *)0x0);
              auVar2 = *(undefined1 (*) [16])&pTVar18->field0_0x0;
              local_4a0.field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
              auVar10._4_8_ = extraout_XMM0_Qb_01;
              auVar10._0_4_ = auVar2._4_4_;
              auVar25._0_8_ = auVar10._0_8_ << 0x20;
              auVar25._8_4_ = auVar2._8_4_;
              auVar25._12_4_ = auVar2._12_4_;
              dVar30 = auVar25._8_8_;
              dVar31 = auVar2._0_8_;
              *(float *)(uVar20 + 0x40 + lVar6) =
                   (float)((local_3e8.M[1][0] * dVar30 + local_3e8.M[0][0] * dVar31 +
                            local_3e8.M[2][0] * local_4a0.field0_0x0._s_0.Z +
                           local_3e8.M[3][0] * 0.0) * (double)uVar12) *
                   *(float *)(uVar20 + 0x40 + lVar6);
              *(float *)(uVar20 + 0x44 + lVar6) =
                   (float)((local_3e8.M[1][1] * dVar30 + local_3e8.M[0][1] * dVar31 +
                            local_3e8.M[2][1] * local_4a0.field0_0x0._s_0.Z +
                           local_3e8.M[3][1] * 0.0) * (double)uVar13) *
                   *(float *)(uVar20 + 0x44 + lVar6);
              *(float *)(uVar20 + 0x48 + lVar6) =
                   (float)((local_3e8.M[1][2] * dVar30 + local_3e8.M[0][2] * dVar31 +
                            local_3e8.M[2][2] * local_4a0.field0_0x0._s_0.Z +
                           local_3e8.M[3][2] * 0.0) * (double)CONCAT44(uVar28,uVar22)) *
                   *(float *)(uVar20 + 0x48 + lVar6);
            }
            lVar21 = lVar21 + -1;
          } while (-1 < lVar21);
        }
      }
      else {
        lVar21 = param_1->_padding_;
        lVar5 = *(longlong *)(lVar21 + 0x170);
        lVar6 = *(longlong *)(lVar21 + 0x168);
        iVar3 = *(int *)(lVar21 + 0x188);
        iVar15 = *(int *)(lVar21 + 0x18c) + -1;
        lVar21 = (longlong)iVar15;
        if (-1 < iVar15) {
          do {
            uVar19 = (uint)*(ushort *)(lVar5 + lVar21 * 2) * iVar3;
            uVar20 = (ulonglong)uVar19;
            if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
              pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              pTVar18 = FRawDistributionVector::GetValue
                                  (&this->VelOverLife,&local_320,*(float *)(uVar20 + 0x90 + lVar6),
                                   pUVar17,0,(FRandomStream *)0x0);
              dVar31 = (pTVar18->field0_0x0)._s_0.Y;
              dVar30 = (pTVar18->field0_0x0)._s_0.Z;
              *(float *)(uVar20 + 0x40 + lVar6) =
                   (float)((double)uVar12 * (pTVar18->field0_0x0)._s_0.X) *
                   *(float *)(uVar20 + 0x40 + lVar6);
              *(float *)(uVar20 + 0x44 + lVar6) =
                   (float)((double)uVar13 * dVar31) * *(float *)(uVar20 + 0x44 + lVar6);
              *(float *)(uVar20 + 0x48 + lVar6) =
                   (float)((double)CONCAT44(uVar28,uVar22) * dVar30) *
                   *(float *)(uVar20 + 0x48 + lVar6);
            }
            lVar21 = lVar21 + -1;
          } while (-1 < lVar21);
        }
      }
    }
    else if (uVar19 == 0) {
      lVar21 = param_1->_padding_;
      lVar5 = *(longlong *)(lVar21 + 0x170);
      lVar6 = *(longlong *)(lVar21 + 0x168);
      iVar3 = *(int *)(lVar21 + 0x188);
      iVar15 = *(int *)(lVar21 + 0x18c) + -1;
      lVar21 = (longlong)iVar15;
      if (-1 < iVar15) {
        do {
          uVar19 = (uint)*(ushort *)(lVar5 + lVar21 * 2) * iVar3;
          uVar20 = (ulonglong)uVar19;
          if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
            pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            pTVar18 = FRawDistributionVector::GetValue
                                (&this->VelOverLife,&local_308,*(float *)(uVar20 + 0x90 + lVar6),
                                 pUVar17,0,(FRandomStream *)0x0);
            dVar31 = (pTVar18->field0_0x0)._s_0.Y;
            dVar30 = (pTVar18->field0_0x0)._s_0.Z;
            *(float *)(uVar20 + 0x40 + lVar6) =
                 (float)((double)uVar12 * (pTVar18->field0_0x0)._s_0.X) *
                 *(float *)(uVar20 + 0x40 + lVar6);
            *(float *)(uVar20 + 0x44 + lVar6) =
                 (float)((double)uVar13 * dVar31) * *(float *)(uVar20 + 0x44 + lVar6);
            *(float *)(uVar20 + 0x48 + lVar6) =
                 (float)((double)CONCAT44(uVar28,uVar22) * dVar30) *
                 *(float *)(uVar20 + 0x48 + lVar6);
          }
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
    }
    else {
      UE::Math::TTransform<double>::ToMatrixNoScale(this_00,&local_168);
      UE::Math::TMatrix<double>::InverseFast(&local_168,&local_268);
      uVar13 = local_4d0[0]._s_0.Y;
      uVar12 = local_4d0[0]._s_0.X;
      lVar21 = param_1->_padding_;
      lVar5 = *(longlong *)(lVar21 + 0x170);
      lVar6 = *(longlong *)(lVar21 + 0x168);
      iVar3 = *(int *)(lVar21 + 0x188);
      iVar15 = *(int *)(lVar21 + 0x18c) + -1;
      lVar21 = (longlong)iVar15;
      if (-1 < iVar15) {
        do {
          uVar19 = (uint)*(ushort *)(lVar5 + lVar21 * 2) * iVar3;
          uVar20 = (ulonglong)uVar19;
          if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
            pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            pTVar18 = FRawDistributionVector::GetValue
                                (&this->VelOverLife,&local_488,*(float *)(uVar20 + 0x90 + lVar6),
                                 pUVar17,0,(FRandomStream *)0x0);
            auVar2 = *(undefined1 (*) [16])&pTVar18->field0_0x0;
            local_488.field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
            auVar11._4_8_ = extraout_XMM0_Qb_02;
            auVar11._0_4_ = auVar2._4_4_;
            auVar26._0_8_ = auVar11._0_8_ << 0x20;
            auVar26._8_4_ = auVar2._8_4_;
            auVar26._12_4_ = auVar2._12_4_;
            dVar31 = auVar26._8_8_;
            dVar30 = auVar2._0_8_;
            auVar27._8_4_ = auVar2._0_4_;
            auVar27._0_8_ = dVar30;
            auVar27._12_4_ = auVar2._4_4_;
            *(float *)(uVar20 + 0x40 + lVar6) =
                 (float)((dVar31 * local_268.M[1][0] + dVar30 * local_268.M[0][0] +
                          local_488.field0_0x0._s_0.Z * local_268.M[2][0] + local_268.M[3][0] * 0.0)
                        * (double)uVar12) * *(float *)(uVar20 + 0x40 + lVar6);
            *(float *)(uVar20 + 0x44 + lVar6) =
                 (float)((dVar31 * local_268.M[1][1] + auVar27._8_8_ * local_268.M[0][1] +
                          local_488.field0_0x0._s_0.Z * local_268.M[2][1] + local_268.M[3][1] * 0.0)
                        * (double)uVar13) * *(float *)(uVar20 + 0x44 + lVar6);
            *(float *)(uVar20 + 0x48 + lVar6) =
                 (float)((dVar31 * local_268.M[1][2] + dVar30 * local_268.M[0][2] +
                          local_488.field0_0x0._s_0.Z * local_268.M[2][2] + local_268.M[3][2] * 0.0)
                        * (double)CONCAT44(uVar28,uVar22)) * *(float *)(uVar20 + 0x48 + lVar6);
          }
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
    }
  }
  else if (((pUVar16->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    if (uVar19 == 0) {
      UE::Math::TTransform<double>::ToMatrixNoScale(this_00,&local_468);
      uVar13 = local_4d0[0]._s_0.Y;
      uVar12 = local_4d0[0]._s_0.X;
      lVar21 = param_1->_padding_;
      lVar5 = *(longlong *)(lVar21 + 0x170);
      lVar6 = *(longlong *)(lVar21 + 0x168);
      iVar3 = *(int *)(lVar21 + 0x188);
      iVar15 = *(int *)(lVar21 + 0x18c) + -1;
      lVar21 = (longlong)iVar15;
      if (-1 < iVar15) {
        do {
          uVar19 = (uint)*(ushort *)(lVar5 + lVar21 * 2) * iVar3;
          uVar20 = (ulonglong)uVar19;
          if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
            pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            pTVar18 = FRawDistributionVector::GetValue
                                (&this->VelOverLife,(TVector<double> *)&local_4d0[0]._s_0,
                                 *(float *)(uVar20 + 0x90 + lVar6),pUVar17,0,(FRandomStream *)0x0);
            auVar2 = *(undefined1 (*) [16])&pTVar18->field0_0x0;
            dVar31 = (pTVar18->field0_0x0)._s_0.Z;
            auVar8._4_8_ = extraout_XMM0_Qb;
            auVar8._0_4_ = auVar2._4_4_;
            auVar23._0_8_ = auVar8._0_8_ << 0x20;
            auVar23._8_4_ = auVar2._8_4_;
            auVar23._12_4_ = auVar2._12_4_;
            dVar29 = auVar23._8_8_;
            dVar30 = auVar2._0_8_;
            *(float *)(uVar20 + 0x40 + lVar6) =
                 (float)((local_468.M[1][0] * dVar29 + local_468.M[0][0] * dVar30 +
                          local_468.M[2][0] * dVar31 + local_468.M[3][0] * 0.0) * (double)uVar12);
            *(float *)(uVar20 + 0x44 + lVar6) =
                 (float)((local_468.M[1][1] * dVar29 + local_468.M[0][1] * dVar30 +
                          local_468.M[2][1] * dVar31 + local_468.M[3][1] * 0.0) * (double)uVar13);
            *(float *)(uVar20 + 0x48 + lVar6) =
                 (float)((local_468.M[1][2] * dVar29 + local_468.M[0][2] * dVar30 +
                          local_468.M[2][2] * dVar31 + local_468.M[3][2] * 0.0) *
                        (double)CONCAT44(uVar28,uVar22));
          }
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
    }
    else {
      lVar21 = param_1->_padding_;
      lVar5 = *(longlong *)(lVar21 + 0x170);
      lVar6 = *(longlong *)(lVar21 + 0x168);
      iVar3 = *(int *)(lVar21 + 0x188);
      iVar15 = *(int *)(lVar21 + 0x18c) + -1;
      lVar21 = (longlong)iVar15;
      if (-1 < iVar15) {
        do {
          uVar19 = (uint)*(ushort *)(lVar5 + lVar21 * 2) * iVar3;
          uVar20 = (ulonglong)uVar19;
          if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
            pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            pTVar18 = FRawDistributionVector::GetValue
                                (&this->VelOverLife,&local_368,*(float *)(uVar20 + 0x90 + lVar6),
                                 pUVar17,0,(FRandomStream *)0x0);
            dVar31 = (pTVar18->field0_0x0)._s_0.Y;
            dVar30 = (pTVar18->field0_0x0)._s_0.Z;
            *(float *)(uVar20 + 0x40 + lVar6) =
                 (float)((double)uVar12 * (pTVar18->field0_0x0)._s_0.X);
            *(float *)(uVar20 + 0x44 + lVar6) = (float)((double)uVar13 * dVar31);
            *(float *)(uVar20 + 0x48 + lVar6) = (float)((double)CONCAT44(uVar28,uVar22) * dVar30);
          }
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
    }
  }
  else if (uVar19 == 0) {
    lVar21 = param_1->_padding_;
    lVar5 = *(longlong *)(lVar21 + 0x170);
    lVar6 = *(longlong *)(lVar21 + 0x168);
    iVar3 = *(int *)(lVar21 + 0x188);
    iVar15 = *(int *)(lVar21 + 0x18c) + -1;
    lVar21 = (longlong)iVar15;
    if (-1 < iVar15) {
      do {
        uVar19 = (uint)*(ushort *)(lVar5 + lVar21 * 2) * iVar3;
        uVar20 = (ulonglong)uVar19;
        if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
          pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          pTVar18 = FRawDistributionVector::GetValue
                              (&this->VelOverLife,&local_350,*(float *)(uVar20 + 0x90 + lVar6),
                               pUVar17,0,(FRandomStream *)0x0);
          dVar31 = (pTVar18->field0_0x0)._s_0.Y;
          dVar30 = (pTVar18->field0_0x0)._s_0.Z;
          *(float *)(uVar20 + 0x40 + lVar6) = (float)((double)uVar12 * (pTVar18->field0_0x0)._s_0.X)
          ;
          *(float *)(uVar20 + 0x44 + lVar6) = (float)((double)uVar13 * dVar31);
          *(float *)(uVar20 + 0x48 + lVar6) = (float)((double)CONCAT44(uVar28,uVar22) * dVar30);
        }
        lVar21 = lVar21 + -1;
      } while (-1 < lVar21);
    }
  }
  else {
    UE::Math::TTransform<double>::ToMatrixNoScale(this_00,&local_1e8);
    UE::Math::TMatrix<double>::InverseFast(&local_1e8,&local_2e8);
    uVar13 = local_4d0[0]._s_0.Y;
    uVar12 = local_4d0[0]._s_0.X;
    lVar21 = param_1->_padding_;
    lVar5 = *(longlong *)(lVar21 + 0x170);
    lVar6 = *(longlong *)(lVar21 + 0x168);
    iVar3 = *(int *)(lVar21 + 0x188);
    iVar15 = *(int *)(lVar21 + 0x18c) + -1;
    lVar21 = (longlong)iVar15;
    if (-1 < iVar15) {
      do {
        uVar19 = (uint)*(ushort *)(lVar5 + lVar21 * 2) * iVar3;
        uVar20 = (ulonglong)uVar19;
        if ((*(uint *)((ulonglong)uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
          pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          pTVar18 = FRawDistributionVector::GetValue
                              (&this->VelOverLife,&local_338,*(float *)(uVar20 + 0x90 + lVar6),
                               pUVar17,0,(FRandomStream *)0x0);
          auVar2 = *(undefined1 (*) [16])&pTVar18->field0_0x0;
          dVar31 = (pTVar18->field0_0x0)._s_0.Z;
          auVar9._4_8_ = extraout_XMM0_Qb_00;
          auVar9._0_4_ = auVar2._4_4_;
          auVar24._0_8_ = auVar9._0_8_ << 0x20;
          auVar24._8_4_ = auVar2._8_4_;
          auVar24._12_4_ = auVar2._12_4_;
          dVar29 = auVar24._8_8_;
          dVar30 = auVar2._0_8_;
          *(float *)(uVar20 + 0x40 + lVar6) =
               (float)((local_2e8.M[1][0] * dVar29 + local_2e8.M[0][0] * dVar30 +
                        local_2e8.M[2][0] * dVar31 + local_2e8.M[3][0] * 0.0) * (double)uVar12);
          *(float *)(uVar20 + 0x44 + lVar6) =
               (float)((local_2e8.M[1][1] * dVar29 + local_2e8.M[0][1] * dVar30 +
                        local_2e8.M[2][1] * dVar31 + local_2e8.M[3][1] * 0.0) * (double)uVar13);
          *(float *)(uVar20 + 0x48 + lVar6) =
               (float)((local_2e8.M[1][2] * dVar29 + local_2e8.M[0][2] * dVar30 +
                        local_2e8.M[2][2] * dVar31 + local_2e8.M[3][2] * 0.0) *
                      (double)CONCAT44(uVar28,uVar22));
        }
        lVar21 = lVar21 + -1;
      } while (-1 < lVar21);
    }
  }
  return;
}

