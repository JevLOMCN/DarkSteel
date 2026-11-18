// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1472f65f0

UClass * __cdecl UParticleModuleAcceleration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAcceleration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAcceleration",
               &Z_Registration_Info_UClass_UParticleModuleAcceleration.InnerSingleton,
               StaticRegisterNativesUParticleModuleAcceleration,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAcceleration>,
               InternalVTableHelperCtorCaller<UParticleModuleAcceleration>,local_res8,
               UParticleModuleAccelerationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAcceleration.InnerSingleton;
}

// UParticleModuleAcceleration @ 1472fc240

UParticleModuleAcceleration * __thiscall
UParticleModuleAcceleration::UParticleModuleAcceleration
          (UParticleModuleAcceleration *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAcceleration__6B_;
  (this->Acceleration)._padding_ = 0;
  (this->Acceleration)._padding_ = 0;
  (this->Acceleration)._padding_ = 0;
  *(undefined4 *)&(this->Acceleration)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Acceleration)._padding_ + 4) = 0;
  (this->Acceleration).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Acceleration).MaxValue = 0.0;
  (this->Acceleration).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Acceleration).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Acceleration).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Acceleration).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Acceleration).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Acceleration).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Acceleration).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleAcceleration @ 1472fd640

void __thiscall
UParticleModuleAcceleration::~UParticleModuleAcceleration(UParticleModuleAcceleration *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleAcceleration__6B_;
  pvVar1 = (void *)(this->Acceleration)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472ff940

UClass * __cdecl UParticleModuleAcceleration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAcceleration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAcceleration",
               &Z_Registration_Info_UClass_UParticleModuleAcceleration.InnerSingleton,
               StaticRegisterNativesUParticleModuleAcceleration,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAcceleration>,
               InternalVTableHelperCtorCaller<UParticleModuleAcceleration>,local_res8,
               UParticleModuleAccelerationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAcceleration.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAcceleration @ 147301710

void __cdecl UParticleModuleAcceleration::StaticRegisterNativesUParticleModuleAcceleration(void)

{
  return;
}

// UParticleModuleAcceleration @ 14815b390

UParticleModuleAcceleration * __thiscall
UParticleModuleAcceleration::UParticleModuleAcceleration
          (UParticleModuleAcceleration *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleAcceleration__6B_;
  (this->Acceleration)._padding_ = 0;
  (this->Acceleration)._padding_ = 0;
  (this->Acceleration)._padding_ = 0;
  *(undefined4 *)&(this->Acceleration)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Acceleration)._padding_ + 4) = 0;
  (this->Acceleration).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Acceleration).MaxValue = 0.0;
  (this->Acceleration).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Acceleration).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Acceleration).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Acceleration).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Acceleration).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Acceleration).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Acceleration).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  return this;
}

// CompileModule @ 148169480

void __thiscall
UParticleModuleAcceleration::CompileModule
          (UParticleModuleAcceleration *this,FParticleEmitterBuildInfo *param_1)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  pTVar2 = FRawDistributionVector::GetValue
                     (&this->Acceleration,&local_28,0.0,(UObject *)0x0,0,(FRandomStream *)0x0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_1->ConstantAcceleration).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_1->ConstantAcceleration).field0_0x0._s_0.Y = dVar1;
  (param_1->ConstantAcceleration).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// InitializeDefaults @ 148182b20

void __thiscall UParticleModuleAcceleration::InitializeDefaults(UParticleModuleAcceleration *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->Acceleration);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionAcceleration");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Acceleration).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 1481895c0

void __thiscall UParticleModuleAcceleration::PostInitProperties(UParticleModuleAcceleration *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->Acceleration);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionAcceleration");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Acceleration).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// RequiredBytes @ 1481917f0

uint __thiscall
UParticleModuleAcceleration::RequiredBytes
          (UParticleModuleAcceleration *this,UParticleModuleTypeDataBase *param_1)

{
  return 0xc;
}

// Spawn @ 1481995e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleAcceleration::Spawn(UParticleModuleAcceleration *this,FSpawnContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FParticleEmitterInstance *pFVar6;
  FBaseParticle *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  UObject *pUVar15;
  TVector<double> *pTVar16;
  longlong lVar17;
  UParticleLODLevel *pUVar18;
  double *pdVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  TVector<double> local_100 [9];
  
  pFVar6 = (FParticleEmitterInstance *)param_1->_padding_;
  pFVar7 = param_1->ParticleBase;
  uVar20 = (ulonglong)(uint)param_1->Offset;
  pUVar15 = (UObject *)(**(code **)((longlong)*pFVar6->Component + 8))();
  pTVar16 = FRawDistributionVector::GetValue
                      (&this->Acceleration,local_100,pFVar6->EmitterTime,pUVar15,0,
                       (FRandomStream *)0x0);
  dVar4 = (pTVar16->field0_0x0)._s_0.Y;
  dVar5 = (pTVar16->field0_0x0)._s_0.Z;
  *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20) =
       (float)(pTVar16->field0_0x0)._s_0.X;
  *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 4) = (float)dVar4;
  *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 8) = (float)dVar5;
  if (this->bApplyOwnerScale != 0) {
    lVar17 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    dVar4 = *(double *)(lVar17 + 0x48);
    dVar5 = *(double *)(lVar17 + 0x50);
    *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20) =
         (float)*(double *)(lVar17 + 0x40) *
         *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20);
    *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 4) =
         (float)dVar4 * *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 4);
    *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 8) =
         (float)dVar5 * *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 8);
  }
  pUVar18 = UParticleEmitter::GetCurrentLODLevel(pFVar6->SpriteTemplate,pFVar6);
  if (pUVar18 == (UParticleLODLevel *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("LODLevel",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                        ,0xb2d,L"");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (((this->_padding_ & 1) == 0) ||
     (((pUVar18->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0)) {
    if (((pUVar18->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0) {
      dVar37 = (double)*(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20);
      dVar5 = (pFVar6->EmitterToSimulation).M[1][1];
      dVar27 = (double)*(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 4);
      dVar4 = (double)*(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 8);
      dVar9 = (pFVar6->EmitterToSimulation).M[1][2];
      dVar11 = (pFVar6->EmitterToSimulation).M[0][1];
      auVar29._8_4_ = SUB84(dVar37,0);
      auVar29._0_8_ = dVar37;
      auVar29._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      auVar34._8_4_ = SUB84(dVar4,0);
      auVar34._0_8_ = dVar4;
      auVar34._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar31 = (pFVar6->EmitterToSimulation).M[2][1];
      dVar36 = (pFVar6->EmitterToSimulation).M[3][1];
      dVar38 = (pFVar6->EmitterToSimulation).M[0][2];
      dVar12 = (pFVar6->EmitterToSimulation).M[2][2];
      dVar13 = (pFVar6->EmitterToSimulation).M[3][2];
      *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20) =
           (float)(dVar27 * (pFVar6->EmitterToSimulation).M[1][0] +
                   dVar37 * (pFVar6->EmitterToSimulation).M[0][0] +
                   dVar4 * (pFVar6->EmitterToSimulation).M[2][0] +
                  (pFVar6->EmitterToSimulation).M[3][0] * 0.0);
      *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 4) =
           (float)(dVar27 * dVar5 + auVar29._8_8_ * dVar11 + auVar34._8_8_ * dVar31 + dVar36 * 0.0);
      *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 8) =
           (float)(dVar9 * dVar27 + dVar38 * dVar37 + dVar12 * dVar4 + dVar13 * 0.0);
    }
    fVar1 = param_1->SpawnTime;
    fVar35 = *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 4);
    fVar32 = *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20);
    fVar2 = (pFVar7->Velocity).field0_0x0._s_0.Y;
    fVar3 = (pFVar7->Velocity).field0_0x0._s_0.X;
    (pFVar7->Velocity).field0_0x0._s_0.Z =
         fVar1 * *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 8) +
         (pFVar7->Velocity).field0_0x0._s_0.Z;
    (pFVar7->Velocity).field0_0x0._s_0.Y = fVar1 * fVar35 + fVar2;
    (pFVar7->Velocity).field0_0x0._s_0.X = fVar1 * fVar32 + fVar3;
    fVar1 = param_1->SpawnTime;
    fVar35 = fVar1 * *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 4);
    fVar32 = fVar1 * *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20);
    (pFVar7->BaseVelocity).field0_0x0._s_0.Z =
         fVar1 * *(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 8) +
         (pFVar7->BaseVelocity).field0_0x0._s_0.Z;
  }
  else {
    pdVar19 = (double *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    dVar36 = *pdVar19 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar38 = pdVar19[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar40._0_8_ = pdVar19[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar40._8_8_ = pdVar19[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar11 = (double)*(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 8);
    auVar33._8_4_ = SUB84(dVar38,0);
    auVar33._0_8_ = dVar36;
    auVar33._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    dVar9 = (double)*(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20);
    auVar34 = blendpd(auVar33,auVar40,2);
    dVar31 = (double)*(float *)((longlong)&(pFVar7->OldLocation).field0_0x0 + uVar20 + 4);
    uVar43 = SUB84(dVar31,0);
    uVar44 = (undefined4)((ulonglong)dVar31 >> 0x20);
    auVar48._8_4_ = uVar43;
    auVar48._0_8_ = dVar9;
    auVar48._12_4_ = uVar44;
    auVar23._8_4_ = uVar43;
    auVar23._0_8_ = dVar9;
    auVar23._12_4_ = uVar44;
    auVar28._8_4_ = uVar43;
    auVar28._0_8_ = dVar9;
    auVar28._12_4_ = uVar44;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar11;
    auVar29 = blendpd(auVar28,auVar10,2);
    auVar49._0_8_ = auVar48._8_8_ * dVar36 - dVar9 * dVar38;
    auVar49._8_8_ = dVar11 * dVar38 - auVar23._8_8_ * auVar40._0_8_;
    auVar30._0_8_ = auVar29._0_8_ * auVar40._0_8_ - auVar34._0_8_ * dVar11;
    auVar30._8_8_ = auVar29._8_8_ * auVar40._8_8_ - auVar34._8_8_ * 0.0;
    dVar4 = auVar49._8_8_ + auVar49._8_8_;
    dVar5 = auVar30._0_8_ + auVar30._0_8_;
    uVar43 = SUB84(dVar5,0);
    uVar44 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar29 = blendpd(auVar49,auVar30,2);
    auVar45._8_4_ = uVar43;
    auVar45._0_8_ = dVar4;
    auVar45._12_4_ = uVar44;
    auVar24._8_4_ = uVar43;
    auVar24._0_8_ = dVar4;
    auVar24._12_4_ = uVar44;
    auVar41._8_4_ = uVar43;
    auVar41._0_8_ = dVar4;
    auVar41._12_4_ = uVar44;
    auVar50._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar50._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar29 = blendpd(auVar41,auVar50,2);
    auVar46._0_8_ = auVar45._8_8_ * dVar36 - dVar4 * dVar38;
    auVar46._8_8_ = auVar50._0_8_ * dVar38 - auVar24._8_8_ * auVar40._0_8_;
    auVar25._8_4_ = SUB84(auVar50._8_8_,0);
    auVar25._0_8_ = auVar50._0_8_;
    auVar25._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
    auVar42._0_8_ = auVar29._0_8_ * auVar40._0_8_ - auVar50._0_8_ * auVar34._0_8_;
    auVar42._8_8_ = auVar29._8_8_ * auVar40._8_8_ - auVar25._8_8_ * auVar34._8_8_;
    auVar29 = *(undefined1 (*) [16])(pdVar19 + 10);
    lVar17 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar29._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar29._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pdVar19 + 8));
    lVar21 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)pdVar19 + 0x44) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                *(uint *)(pdVar19 + 8) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar22 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)pdVar19 + 0x4c) & _UNK_15061cc8c,
                                *(uint *)(pdVar19 + 9) & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar26._8_4_ = SUB84(auVar46._8_8_,0);
    auVar26._0_8_ = auVar46._0_8_;
    auVar26._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
    fVar1 = param_1->SpawnTime;
    auVar47._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar47._0_8_ = auVar29._0_8_;
    auVar47._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
    fVar32 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar34._4_4_,
                                      ~(uint)lVar21 & auVar34._0_4_) *
                    (dVar4 * auVar40._8_8_ + dVar9 + auVar26._8_8_));
    auVar47 = blendpd(auVar46,auVar42,2);
    fVar35 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar34._12_4_,
                                      ~(uint)lVar22 & auVar34._8_4_) *
                    (dVar5 * auVar40._8_8_ + dVar31 + auVar42._0_8_));
    fVar39 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar29._4_4_,
                                      ~(uint)lVar17 & auVar29._0_4_) *
                    (auVar50._0_8_ * auVar40._8_8_ + dVar11 + auVar47._0_8_));
    fVar2 = (pFVar7->Velocity).field0_0x0._s_0.Y;
    fVar3 = (pFVar7->Velocity).field0_0x0._s_0.Z;
    (pFVar7->Velocity).field0_0x0._s_0.X = fVar1 * fVar32 + (pFVar7->Velocity).field0_0x0._s_0.X;
    (pFVar7->Velocity).field0_0x0._s_0.Y = fVar1 * fVar35 + fVar2;
    (pFVar7->Velocity).field0_0x0._s_0.Z = fVar1 * fVar39 + fVar3;
    fVar1 = param_1->SpawnTime;
    fVar32 = fVar1 * fVar32;
    fVar35 = fVar1 * fVar35;
    (pFVar7->BaseVelocity).field0_0x0._s_0.Z =
         fVar1 * fVar39 + (pFVar7->BaseVelocity).field0_0x0._s_0.Z;
  }
  fVar1 = (pFVar7->BaseVelocity).field0_0x0._s_0.X;
  (pFVar7->BaseVelocity).field0_0x0._s_0.Y = fVar35 + (pFVar7->BaseVelocity).field0_0x0._s_0.Y;
  (pFVar7->BaseVelocity).field0_0x0._s_0.X = fVar32 + fVar1;
  return;
}

// Update @ 1481a7580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleAcceleration::Update(UParticleModuleAcceleration *this,FUpdateContext *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FParticleEmitterInstance *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  int iVar27;
  UParticleLODLevel *pUVar28;
  double *pdVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ushort *puVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  undefined4 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  
  pFVar4 = (FParticleEmitterInstance *)param_1->_padding_;
  if ((((pFVar4 != (FParticleEmitterInstance *)0x0) && (0 < pFVar4->ActiveParticles)) &&
      (pFVar4->ParticleData != (uchar *)0x0)) && (pFVar4->ParticleIndices != (ushort *)0x0)) {
    pUVar28 = UParticleEmitter::GetCurrentLODLevel(pFVar4->SpriteTemplate,pFVar4);
    if ((pUVar28 == (UParticleLODLevel *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODLevel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                            ,0xb48,L""), bVar26)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->_padding_ & 1) == 0) ||
       (((pUVar28->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0)) {
      lVar30 = param_1->_padding_;
      uVar31 = (ulonglong)(uint)param_1->Offset;
      fVar1 = param_1->DeltaTime;
      lVar6 = *(longlong *)(lVar30 + 0x168);
      iVar3 = *(int *)(lVar30 + 0x188);
      lVar7 = *(longlong *)(lVar30 + 0x170);
      iVar27 = *(int *)(lVar30 + 0x18c) + -1;
      lVar30 = (longlong)iVar27;
      if (-1 < iVar27) {
        if (2 < lVar30) {
          uVar32 = lVar30 + 1U >> 2;
          puVar34 = (ushort *)(lVar7 + -2 + lVar30 * 2);
          lVar30 = lVar30 + uVar32 * -4;
          do {
            lVar33 = (ulonglong)((uint)puVar34[1] * iVar3) + lVar6;
            if ((*(uint *)(lVar33 + 0x6c) & 0x4000000) == 0) {
              fVar46 = *(float *)(uVar31 + 4 + lVar33);
              fVar48 = *(float *)(uVar31 + 8 + lVar33);
              *(float *)(lVar33 + 0x40) =
                   fVar1 * *(float *)(uVar31 + lVar33) + *(float *)(lVar33 + 0x40);
              *(float *)(lVar33 + 0x44) = fVar1 * fVar46 + *(float *)(lVar33 + 0x44);
              *(float *)(lVar33 + 0x48) = fVar1 * fVar48 + *(float *)(lVar33 + 0x48);
              fVar46 = *(float *)(uVar31 + 4 + lVar33);
              fVar48 = *(float *)(uVar31 + 8 + lVar33);
              *(float *)(lVar33 + 0x30) =
                   fVar1 * *(float *)(uVar31 + lVar33) + *(float *)(lVar33 + 0x30);
              *(float *)(lVar33 + 0x34) = fVar1 * fVar46 + *(float *)(lVar33 + 0x34);
              *(float *)(lVar33 + 0x38) = fVar1 * fVar48 + *(float *)(lVar33 + 0x38);
            }
            lVar33 = (ulonglong)((uint)*puVar34 * iVar3) + lVar6;
            if ((*(uint *)(lVar33 + 0x6c) & 0x4000000) == 0) {
              fVar46 = *(float *)(uVar31 + 4 + lVar33);
              fVar48 = *(float *)(uVar31 + 8 + lVar33);
              *(float *)(lVar33 + 0x40) =
                   fVar1 * *(float *)(uVar31 + lVar33) + *(float *)(lVar33 + 0x40);
              *(float *)(lVar33 + 0x44) = fVar1 * fVar46 + *(float *)(lVar33 + 0x44);
              *(float *)(lVar33 + 0x48) = fVar1 * fVar48 + *(float *)(lVar33 + 0x48);
              fVar46 = *(float *)(uVar31 + 4 + lVar33);
              fVar48 = *(float *)(uVar31 + 8 + lVar33);
              *(float *)(lVar33 + 0x30) =
                   fVar1 * *(float *)(uVar31 + lVar33) + *(float *)(lVar33 + 0x30);
              *(float *)(lVar33 + 0x34) = fVar1 * fVar46 + *(float *)(lVar33 + 0x34);
              *(float *)(lVar33 + 0x38) = fVar1 * fVar48 + *(float *)(lVar33 + 0x38);
            }
            lVar33 = (ulonglong)((uint)puVar34[-1] * iVar3) + lVar6;
            if ((*(uint *)(lVar33 + 0x6c) & 0x4000000) == 0) {
              fVar46 = *(float *)(uVar31 + 4 + lVar33);
              fVar48 = *(float *)(uVar31 + 8 + lVar33);
              *(float *)(lVar33 + 0x40) =
                   fVar1 * *(float *)(uVar31 + lVar33) + *(float *)(lVar33 + 0x40);
              *(float *)(lVar33 + 0x44) = fVar1 * fVar46 + *(float *)(lVar33 + 0x44);
              *(float *)(lVar33 + 0x48) = fVar1 * fVar48 + *(float *)(lVar33 + 0x48);
              fVar46 = *(float *)(uVar31 + 4 + lVar33);
              fVar48 = *(float *)(uVar31 + 8 + lVar33);
              *(float *)(lVar33 + 0x30) =
                   fVar1 * *(float *)(uVar31 + lVar33) + *(float *)(lVar33 + 0x30);
              *(float *)(lVar33 + 0x34) = fVar1 * fVar46 + *(float *)(lVar33 + 0x34);
              *(float *)(lVar33 + 0x38) = fVar1 * fVar48 + *(float *)(lVar33 + 0x38);
            }
            lVar33 = (ulonglong)((uint)puVar34[-2] * iVar3) + lVar6;
            if ((*(uint *)(lVar33 + 0x6c) & 0x4000000) == 0) {
              fVar46 = *(float *)(uVar31 + 4 + lVar33);
              fVar48 = *(float *)(uVar31 + 8 + lVar33);
              *(float *)(lVar33 + 0x40) =
                   fVar1 * *(float *)(uVar31 + lVar33) + *(float *)(lVar33 + 0x40);
              *(float *)(lVar33 + 0x44) = fVar1 * fVar46 + *(float *)(lVar33 + 0x44);
              *(float *)(lVar33 + 0x48) = fVar1 * fVar48 + *(float *)(lVar33 + 0x48);
              fVar46 = *(float *)(uVar31 + 4 + lVar33);
              fVar48 = *(float *)(uVar31 + 8 + lVar33);
              *(float *)(lVar33 + 0x30) =
                   fVar1 * *(float *)(uVar31 + lVar33) + *(float *)(lVar33 + 0x30);
              *(float *)(lVar33 + 0x34) = fVar1 * fVar46 + *(float *)(lVar33 + 0x34);
              *(float *)(lVar33 + 0x38) = fVar1 * fVar48 + *(float *)(lVar33 + 0x38);
            }
            puVar34 = puVar34 + -4;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
          if (lVar30 < 0) {
            return;
          }
        }
        do {
          lVar33 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar30 * 2) * iVar3) + lVar6;
          if ((*(uint *)(lVar33 + 0x6c) & 0x4000000) == 0) {
            fVar46 = *(float *)(uVar31 + 8 + lVar33);
            fVar48 = *(float *)(uVar31 + lVar33);
            *(float *)(lVar33 + 0x44) =
                 fVar1 * *(float *)(uVar31 + 4 + lVar33) + *(float *)(lVar33 + 0x44);
            *(float *)(lVar33 + 0x48) = fVar1 * fVar46 + *(float *)(lVar33 + 0x48);
            *(float *)(lVar33 + 0x40) = fVar1 * fVar48 + *(float *)(lVar33 + 0x40);
            fVar46 = *(float *)(uVar31 + 8 + lVar33);
            fVar48 = *(float *)(uVar31 + lVar33);
            *(float *)(lVar33 + 0x34) =
                 fVar1 * *(float *)(uVar31 + 4 + lVar33) + *(float *)(lVar33 + 0x34);
            *(float *)(lVar33 + 0x38) = fVar1 * fVar46 + *(float *)(lVar33 + 0x38);
            *(float *)(lVar33 + 0x30) = fVar1 * fVar48 + *(float *)(lVar33 + 0x30);
          }
          lVar30 = lVar30 + -1;
        } while (-1 < lVar30);
      }
    }
    else {
      plVar5 = *(longlong **)(param_1->_padding_ + 0x10);
      pdVar29 = (double *)(**(code **)(*plVar5 + 0x10))(plVar5,pFVar4->ParticleData);
      uVar25 = _UNK_15061cc8c;
      uVar24 = _UNK_15061cc88;
      uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar31 = (ulonglong)(uint)param_1->Offset;
      fVar1 = param_1->DeltaTime;
      uVar17 = *(undefined8 *)*(undefined1 (*) [12])(pdVar29 + 8);
      auVar19 = *(undefined1 (*) [12])(pdVar29 + 8);
      dVar20 = *pdVar29;
      dVar21 = pdVar29[1];
      dVar15 = pdVar29[2];
      dVar16 = pdVar29[3];
      local_168 = (uint)uVar17;
      uStack_164 = (uint)((ulonglong)uVar17 >> 0x20);
      uStack_160 = SUB84(pdVar29[9],0);
      uStack_15c = (uint)((ulonglong)pdVar29[9] >> 0x20);
      auVar2 = *(undefined1 (*) [16])(pdVar29 + 10);
      lVar30 = param_1->_padding_;
      lVar6 = *(longlong *)(lVar30 + 0x168);
      iVar3 = *(int *)(lVar30 + 0x188);
      lVar7 = *(longlong *)(lVar30 + 0x170);
      iVar27 = *(int *)(lVar30 + 0x18c) + -1;
      lVar30 = (longlong)iVar27;
      if (-1 < iVar27) {
        do {
          lVar33 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar30 * 2) * iVar3) + lVar6;
          if ((*(uint *)(lVar33 + 0x6c) & 0x4000000) == 0) {
            dVar9 = dVar15 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar10 = dVar16 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            dVar52 = dVar20 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar53 = dVar21 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar14 = (double)*(float *)(uVar31 + 8 + lVar33);
            dVar13 = (double)*(float *)(uVar31 + lVar33);
            auVar50._8_4_ = SUB84(dVar53,0);
            auVar50._0_8_ = dVar52;
            auVar50._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
            auVar43._8_4_ = SUB84(dVar10,0);
            auVar43._0_8_ = dVar9;
            auVar43._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            auVar51 = blendpd(auVar50,auVar43,2);
            dVar47 = (double)*(float *)(uVar31 + 4 + lVar33);
            uVar58 = SUB84(dVar47,0);
            uVar59 = (undefined4)((ulonglong)dVar47 >> 0x20);
            auVar60._8_4_ = uVar58;
            auVar60._0_8_ = dVar13;
            auVar60._12_4_ = uVar59;
            auVar38._8_4_ = uVar58;
            auVar38._0_8_ = dVar13;
            auVar38._12_4_ = uVar59;
            auVar42._8_4_ = uVar58;
            auVar42._0_8_ = dVar13;
            auVar42._12_4_ = uVar59;
            auVar61._0_8_ = auVar60._8_8_ * dVar52 - dVar13 * dVar53;
            auVar61._8_8_ = dVar14 * dVar53 - auVar38._8_8_ * dVar9;
            auVar45._8_8_ = 0;
            auVar45._0_8_ = dVar14;
            auVar43 = blendpd(auVar42,auVar45,2);
            auVar44._0_8_ = auVar43._0_8_ * dVar9 - dVar14 * auVar51._0_8_;
            auVar44._8_8_ = auVar43._8_8_ * dVar10 - auVar51._8_8_ * 0.0;
            auVar43 = blendpd(auVar61,auVar44,2);
            dVar11 = auVar61._8_8_ + auVar61._8_8_;
            dVar12 = auVar44._0_8_ + auVar44._0_8_;
            uVar58 = SUB84(dVar12,0);
            uVar59 = (undefined4)((ulonglong)dVar12 >> 0x20);
            auVar62._0_8_ = auVar43._0_8_ + auVar43._0_8_;
            auVar62._8_8_ = auVar43._8_8_ + auVar43._8_8_;
            auVar56._8_4_ = uVar58;
            auVar56._0_8_ = dVar11;
            auVar56._12_4_ = uVar59;
            auVar39._8_4_ = uVar58;
            auVar39._0_8_ = dVar11;
            auVar39._12_4_ = uVar59;
            auVar54._8_4_ = uVar58;
            auVar54._0_8_ = dVar11;
            auVar54._12_4_ = uVar59;
            auVar57._0_8_ = auVar56._8_8_ * dVar52 - dVar11 * dVar53;
            auVar57._8_8_ = auVar62._0_8_ * dVar53 - auVar39._8_8_ * dVar9;
            auVar43 = blendpd(auVar54,auVar62,2);
            auVar40._8_4_ = SUB84(auVar62._8_8_,0);
            auVar40._0_8_ = auVar62._0_8_;
            auVar40._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
            auVar55._0_8_ = auVar43._0_8_ * dVar9 - auVar62._0_8_ * auVar51._0_8_;
            auVar55._8_8_ = auVar43._8_8_ * dVar10 - auVar40._8_8_ * auVar51._8_8_;
            lVar35 = -(ulonglong)
                      ((double)CONCAT44(uVar23 & auVar2._4_4_,uVar22 & auVar2._0_4_) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            auVar18._12_4_ = uStack_15c;
            auVar18._0_12_ = auVar19;
            auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18)
            ;
            lVar36 = -(ulonglong)
                      ((double)CONCAT44(uStack_164 & uVar23,local_168 & uVar22) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar37 = -(ulonglong)
                      ((double)CONCAT44(uStack_15c & uVar25,uStack_160 & uVar24) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            auVar41._8_4_ = SUB84(auVar57._8_8_,0);
            auVar41._0_8_ = auVar57._0_8_;
            auVar41._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
            auVar51._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar51._0_8_ = auVar2._0_8_;
            auVar51._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar51)
            ;
            auVar51 = blendpd(auVar57,auVar55,2);
            fVar49 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar36 >> 0x20) & auVar45._4_4_,
                                              ~(uint)lVar36 & auVar45._0_4_) *
                            (dVar11 * dVar10 + dVar13 + auVar41._8_8_)) * fVar1;
            fVar48 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar37 >> 0x20) & auVar45._12_4_,
                                              ~(uint)lVar37 & auVar45._8_4_) *
                            (dVar12 * dVar10 + dVar47 + auVar55._0_8_)) * fVar1;
            fVar46 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar35 >> 0x20) & auVar43._4_4_,
                                              ~(uint)lVar35 & auVar43._0_4_) *
                            (auVar62._0_8_ * dVar10 + dVar14 + auVar51._0_8_)) * fVar1;
            *(float *)(lVar33 + 0x40) = fVar49 + *(float *)(lVar33 + 0x40);
            *(float *)(lVar33 + 0x44) = fVar48 + *(float *)(lVar33 + 0x44);
            *(float *)(lVar33 + 0x48) = fVar46 + *(float *)(lVar33 + 0x48);
            *(float *)(lVar33 + 0x30) = fVar49 + *(float *)(lVar33 + 0x30);
            *(float *)(lVar33 + 0x34) = fVar48 + *(float *)(lVar33 + 0x34);
            *(float *)(lVar33 + 0x38) = fVar46 + *(float *)(lVar33 + 0x38);
          }
          lVar30 = lVar30 + -1;
        } while (-1 < lVar30);
      }
    }
  }
  return;
}

