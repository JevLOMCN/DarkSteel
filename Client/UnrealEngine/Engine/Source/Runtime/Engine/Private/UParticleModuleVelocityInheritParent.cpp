// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147315620

UClass * __cdecl UParticleModuleVelocityInheritParent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocityInheritParent",
               &Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocityInheritParent,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVelocityInheritParent>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocityInheritParent>,local_res8,
               UParticleModuleVelocityBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.InnerSingleton;
}

// UParticleModuleVelocityInheritParent @ 147319250

UParticleModuleVelocityInheritParent * __thiscall
UParticleModuleVelocityInheritParent::UParticleModuleVelocityInheritParent
          (UParticleModuleVelocityInheritParent *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVelocityInheritParent__6B_;
  (this->Scale)._padding_ = 0;
  (this->Scale)._padding_ = 0;
  (this->Scale)._padding_ = 0;
  *(undefined4 *)&(this->Scale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Scale)._padding_ + 4) = 0;
  (this->Scale).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Scale).MaxValue = 0.0;
  (this->Scale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Scale).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Scale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Scale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Scale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Scale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Scale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleVelocityInheritParent @ 147319bb0

void __thiscall
UParticleModuleVelocityInheritParent::~UParticleModuleVelocityInheritParent
          (UParticleModuleVelocityInheritParent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleVelocityInheritParent__6B_;
  pvVar1 = (void *)(this->Scale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleVelocityBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731ca30

UClass * __cdecl UParticleModuleVelocityInheritParent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocityInheritParent",
               &Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocityInheritParent,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVelocityInheritParent>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocityInheritParent>,local_res8,
               UParticleModuleVelocityBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocityInheritParent.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVelocityInheritParent @ 14731d120

void __cdecl
UParticleModuleVelocityInheritParent::StaticRegisterNativesUParticleModuleVelocityInheritParent
          (void)

{
  return;
}

// UParticleModuleVelocityInheritParent @ 14815ed20

UParticleModuleVelocityInheritParent * __thiscall
UParticleModuleVelocityInheritParent::UParticleModuleVelocityInheritParent
          (UParticleModuleVelocityInheritParent *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVelocityInheritParent__6B_;
  (this->Scale)._padding_ = 0;
  (this->Scale)._padding_ = 0;
  (this->Scale)._padding_ = 0;
  *(undefined4 *)&(this->Scale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Scale)._padding_ + 4) = 0;
  (this->Scale).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Scale).MaxValue = 0.0;
  (this->Scale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Scale).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Scale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Scale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Scale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Scale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Scale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  return this;
}

// InitializeDefaults @ 148185310

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleVelocityInheritParent::InitializeDefaults(UParticleModuleVelocityInheritParent *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->Scale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionScale");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Constant).field0_0x0._s_0.X = 1.0;
    (pUVar3->Constant).field0_0x0._s_0.Y = 1.0;
    (pUVar3->Constant).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Scale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818c040

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleVelocityInheritParent::PostInitProperties(UParticleModuleVelocityInheritParent *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->Scale);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionScale");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Constant).field0_0x0._s_0.X = 1.0;
      (pUVar3->Constant).field0_0x0._s_0.Y = 1.0;
      (pUVar3->Constant).field0_0x0._s_0.Z = 1.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Scale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// Spawn @ 14819dec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleVelocityInheritParent::Spawn
          (UParticleModuleVelocityInheritParent *this,FSpawnContext *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  FParticleEmitterInstance *pFVar5;
  FBaseParticle *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  UParticleLODLevel *pUVar13;
  double *pdVar14;
  undefined1 (*pauVar15) [16];
  UObject *pUVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  TVector<double>_u_0 local_e8;
  double local_c0;
  
  pFVar5 = (FParticleEmitterInstance *)param_1->_padding_;
  pFVar6 = param_1->ParticleBase;
  pUVar13 = UParticleEmitter::GetCurrentLODLevel(pFVar5->SpriteTemplate,pFVar5);
  if (pUVar13 == (UParticleLODLevel *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("LODLevel",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Velocity.cpp"
                        ,0xba,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (((pUVar13->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    pdVar14 = (double *)(**(code **)((longlong)*pFVar5->Component + 0xc0))();
    local_c0 = pdVar14[2];
    dVar8 = *pdVar14;
    dVar10 = pdVar14[1];
  }
  else {
    pdVar14 = (double *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    pauVar15 = (undefined1 (*) [16])(**(code **)((longlong)*pFVar5->Component + 0xc0))();
    dVar29 = *pdVar14 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar30 = pdVar14[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar4 = *pauVar15;
    dVar3 = *(double *)pauVar15[1];
    dVar8 = pdVar14[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar9 = pdVar14[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar27._8_4_ = SUB84(dVar30,0);
    auVar27._0_8_ = dVar29;
    auVar27._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar3;
    auVar24 = blendpd(auVar4,auVar26,2);
    dVar39 = auVar4._8_8_;
    auVar28._8_4_ = SUB84(dVar9,0);
    auVar28._0_8_ = dVar8;
    auVar28._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar28 = blendpd(auVar27,auVar28,2);
    auVar20._8_4_ = SUB84(dVar8,0);
    auVar20._0_8_ = dVar30;
    auVar20._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar37._0_8_ = dVar39 * dVar29 - dVar30 * auVar4._0_8_;
    auVar37._8_8_ = dVar3 * dVar30 - auVar20._8_8_ * dVar39;
    auVar25._0_8_ = auVar24._0_8_ * dVar8 - auVar28._0_8_ * dVar3;
    auVar25._8_8_ = auVar24._8_8_ * dVar9 - auVar28._8_8_ * 0.0;
    dVar10 = auVar37._8_8_ + auVar37._8_8_;
    dVar11 = auVar25._0_8_ + auVar25._0_8_;
    uVar33 = SUB84(dVar11,0);
    uVar34 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar24 = blendpd(auVar37,auVar25,2);
    auVar35._8_4_ = uVar33;
    auVar35._0_8_ = dVar10;
    auVar35._12_4_ = uVar34;
    auVar21._8_4_ = uVar33;
    auVar21._0_8_ = dVar10;
    auVar21._12_4_ = uVar34;
    auVar31._8_4_ = uVar33;
    auVar31._0_8_ = dVar10;
    auVar31._12_4_ = uVar34;
    auVar38._0_8_ = auVar24._0_8_ + auVar24._0_8_;
    auVar38._8_8_ = auVar24._8_8_ + auVar24._8_8_;
    auVar24 = blendpd(auVar31,auVar38,2);
    auVar36._0_8_ = auVar35._8_8_ * dVar29 - dVar10 * dVar30;
    auVar36._8_8_ = auVar38._0_8_ * dVar30 - auVar21._8_8_ * dVar8;
    auVar22._8_4_ = SUB84(auVar38._8_8_,0);
    auVar22._0_8_ = auVar38._0_8_;
    auVar22._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar32._0_8_ = auVar24._0_8_ * dVar8 - auVar38._0_8_ * auVar28._0_8_;
    auVar32._8_8_ = auVar24._8_8_ * dVar9 - auVar22._8_8_ * auVar28._8_8_;
    auVar28 = *(undefined1 (*) [16])(pdVar14 + 10);
    lVar17 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar28._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar28._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pdVar14 + 8));
    lVar18 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)pdVar14 + 0x44) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                *(uint *)(pdVar14 + 8) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar19 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)pdVar14 + 0x4c) & _UNK_15061cc8c,
                                *(uint *)(pdVar14 + 9) & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar23._8_4_ = SUB84(auVar36._8_8_,0);
    auVar23._0_8_ = auVar36._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
    auVar24._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar24._0_8_ = auVar28._0_8_;
    auVar24._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
    auVar24 = blendpd(auVar36,auVar32,2);
    dVar8 = (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar26._4_4_,
                             ~(uint)lVar18 & auVar26._0_4_) *
            (dVar10 * dVar9 + auVar4._0_8_ + auVar23._8_8_);
    dVar10 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar26._12_4_,
                              ~(uint)lVar19 & auVar26._8_4_) *
             (dVar11 * dVar9 + dVar39 + auVar32._0_8_);
    local_c0 = (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar28._4_4_,
                                ~(uint)lVar17 & auVar28._0_4_) *
               (auVar38._0_8_ * dVar9 + dVar3 + auVar24._0_8_);
  }
  pUVar16 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  FRawDistributionVector::GetValue
            (&this->Scale,(TVector<double> *)&local_e8._s_0,pFVar5->EmitterTime,pUVar16,0,
             (FRandomStream *)0x0);
  fVar1 = (pFVar6->Velocity).field0_0x0._s_0.Y;
  (pFVar6->Velocity).field0_0x0._s_0.X =
       (float)(local_e8._s_0.X * dVar8) + (pFVar6->Velocity).field0_0x0._s_0.X;
  fVar2 = (pFVar6->Velocity).field0_0x0._s_0.Z;
  (pFVar6->Velocity).field0_0x0._s_0.Y = (float)(local_e8._s_0.Y * dVar10) + fVar1;
  (pFVar6->Velocity).field0_0x0._s_0.Z = (float)(local_e8._s_0.Z * local_c0) + fVar2;
  fVar1 = (pFVar6->BaseVelocity).field0_0x0._s_0.Y;
  fVar2 = (pFVar6->BaseVelocity).field0_0x0._s_0.Z;
  (pFVar6->BaseVelocity).field0_0x0._s_0.X =
       (float)(local_e8._s_0.X * dVar8) + (pFVar6->BaseVelocity).field0_0x0._s_0.X;
  (pFVar6->BaseVelocity).field0_0x0._s_0.Y = (float)(local_e8._s_0.Y * dVar10) + fVar1;
  (pFVar6->BaseVelocity).field0_0x0._s_0.Z = (float)(local_e8._s_0.Z * local_c0) + fVar2;
  return;
}

