// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472f6960

UClass * __cdecl UParticleModuleAccelerationConstant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAccelerationConstant",
               &Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.InnerSingleton,
               StaticRegisterNativesUParticleModuleAccelerationConstant,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAccelerationConstant>,
               InternalVTableHelperCtorCaller<UParticleModuleAccelerationConstant>,local_res8,
               UParticleModuleAccelerationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.InnerSingleton;
}

// UParticleModuleAccelerationConstant @ 1472fc2f0

UParticleModuleAccelerationConstant * __thiscall
UParticleModuleAccelerationConstant::UParticleModuleAccelerationConstant
          (UParticleModuleAccelerationConstant *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationConstant__6B_;
  return this;
}

// ~UParticleModuleAccelerationConstant @ 1472fd6a0

void __thiscall
UParticleModuleAccelerationConstant::~UParticleModuleAccelerationConstant
          (UParticleModuleAccelerationConstant *this)

{
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472ffac0

UClass * __cdecl UParticleModuleAccelerationConstant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAccelerationConstant",
               &Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.InnerSingleton,
               StaticRegisterNativesUParticleModuleAccelerationConstant,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAccelerationConstant>,
               InternalVTableHelperCtorCaller<UParticleModuleAccelerationConstant>,local_res8,
               UParticleModuleAccelerationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAccelerationConstant.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAccelerationConstant @ 147301730

void __cdecl
UParticleModuleAccelerationConstant::StaticRegisterNativesUParticleModuleAccelerationConstant(void)

{
  return;
}

// UParticleModuleAccelerationConstant @ 14815b470

UParticleModuleAccelerationConstant * __thiscall
UParticleModuleAccelerationConstant::UParticleModuleAccelerationConstant
          (UParticleModuleAccelerationConstant *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationConstant__6B_;
  return this;
}

// CompileModule @ 1481694d0

void __thiscall
UParticleModuleAccelerationConstant::CompileModule
          (UParticleModuleAccelerationConstant *this,FParticleEmitterBuildInfo *param_1)

{
  double dVar1;
  
  dVar1 = (this->Acceleration).field0_0x0._s_0.Y;
  (param_1->ConstantAcceleration).field0_0x0._s_0.X = (this->Acceleration).field0_0x0._s_0.X;
  (param_1->ConstantAcceleration).field0_0x0._s_0.Y = dVar1;
  (param_1->ConstantAcceleration).field0_0x0._s_0.Z = (this->Acceleration).field0_0x0._s_0.Z;
  return;
}

// Spawn @ 148199b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleAccelerationConstant::Spawn
          (UParticleModuleAccelerationConstant *this,FSpawnContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FParticleEmitterInstance *pFVar4;
  FBaseParticle *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  UParticleLODLevel *pUVar11;
  double *pdVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  pFVar4 = (FParticleEmitterInstance *)param_1->_padding_;
  pFVar5 = param_1->ParticleBase;
  pUVar11 = UParticleEmitter::GetCurrentLODLevel(pFVar4->SpriteTemplate,pFVar4);
  if (pUVar11 == (UParticleLODLevel *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LODLevel",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                        ,0x9c8,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (((this->_padding_ & 1) == 0) ||
     (((pUVar11->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0)) {
    fVar32 = (float)(this->Acceleration).field0_0x0._s_0.X;
    fVar35 = (float)(this->Acceleration).field0_0x0._s_0.Y;
    fVar36 = (float)(this->Acceleration).field0_0x0._s_0.Z;
    if (((pUVar11->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) goto LAB_148199e9b;
    dVar22 = (double)fVar36;
    dVar16 = (double)fVar32;
    dVar23 = (double)fVar35;
    auVar28._8_4_ = SUB84(dVar16,0);
    auVar28._0_8_ = dVar16;
    auVar28._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar21._8_4_ = SUB84(dVar23,0);
    auVar21._0_8_ = dVar23;
    auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar24._8_4_ = SUB84(dVar22,0);
    auVar24._0_8_ = dVar22;
    auVar24._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    dVar26 = dVar16 * (pFVar4->EmitterToSimulation).M[0][0] +
             dVar23 * (pFVar4->EmitterToSimulation).M[1][0] +
             dVar22 * (pFVar4->EmitterToSimulation).M[2][0] +
             (pFVar4->EmitterToSimulation).M[3][0] * 0.0;
    dVar31 = auVar28._8_8_ * (pFVar4->EmitterToSimulation).M[0][1] +
             auVar21._8_8_ * (pFVar4->EmitterToSimulation).M[1][1] +
             auVar24._8_8_ * (pFVar4->EmitterToSimulation).M[2][1] +
             (pFVar4->EmitterToSimulation).M[3][1] * 0.0;
    dVar22 = (pFVar4->EmitterToSimulation).M[1][2] * dVar23 +
             (pFVar4->EmitterToSimulation).M[0][2] * dVar16 +
             (pFVar4->EmitterToSimulation).M[2][2] * dVar22 +
             (pFVar4->EmitterToSimulation).M[3][2] * 0.0;
  }
  else {
    pdVar12 = (double *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    auVar21 = *(undefined1 (*) [16])&(this->Acceleration).field0_0x0;
    dVar22 = (this->Acceleration).field0_0x0._s_0.Z;
    dVar33 = *pdVar12 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar34 = pdVar12[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar16 = pdVar12[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar23 = pdVar12[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar27._8_4_ = SUB84(dVar34,0);
    auVar27._0_8_ = dVar33;
    auVar27._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    auVar7._8_4_ = SUB84(dVar23,0);
    auVar7._0_8_ = dVar16;
    auVar7._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar28 = blendpd(auVar27,auVar7,2);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar22;
    auVar24 = blendpd(auVar21,auVar9,2);
    dVar45 = auVar21._8_8_;
    auVar17._8_4_ = SUB84(dVar16,0);
    auVar17._0_8_ = dVar34;
    auVar17._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar43._0_8_ = dVar45 * dVar33 - dVar34 * auVar21._0_8_;
    auVar43._8_8_ = dVar22 * dVar34 - auVar17._8_8_ * dVar45;
    auVar25._0_8_ = auVar24._0_8_ * dVar16 - auVar28._0_8_ * dVar22;
    auVar25._8_8_ = auVar24._8_8_ * dVar23 - auVar28._8_8_ * 0.0;
    dVar26 = auVar43._8_8_ + auVar43._8_8_;
    dVar31 = auVar25._0_8_ + auVar25._0_8_;
    uVar39 = SUB84(dVar31,0);
    uVar40 = (undefined4)((ulonglong)dVar31 >> 0x20);
    auVar24 = blendpd(auVar43,auVar25,2);
    auVar41._8_4_ = uVar39;
    auVar41._0_8_ = dVar26;
    auVar41._12_4_ = uVar40;
    auVar18._8_4_ = uVar39;
    auVar18._0_8_ = dVar26;
    auVar18._12_4_ = uVar40;
    auVar37._8_4_ = uVar39;
    auVar37._0_8_ = dVar26;
    auVar37._12_4_ = uVar40;
    auVar44._0_8_ = auVar24._0_8_ + auVar24._0_8_;
    auVar44._8_8_ = auVar24._8_8_ + auVar24._8_8_;
    auVar24 = blendpd(auVar37,auVar44,2);
    auVar42._0_8_ = auVar41._8_8_ * dVar33 - dVar26 * dVar34;
    auVar42._8_8_ = auVar44._0_8_ * dVar34 - auVar18._8_8_ * dVar16;
    auVar19._8_4_ = SUB84(auVar44._8_8_,0);
    auVar19._0_8_ = auVar44._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
    auVar38._0_8_ = auVar24._0_8_ * dVar16 - auVar44._0_8_ * auVar28._0_8_;
    auVar38._8_8_ = auVar24._8_8_ * dVar23 - auVar19._8_8_ * auVar28._8_8_;
    auVar24 = *(undefined1 (*) [16])(pdVar12 + 10);
    auVar29._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)pdVar12 + 0x44) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(pdVar12 + 8) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar29._8_4_ = *(uint *)(pdVar12 + 9) & _UNK_15061cc88;
    auVar29._12_4_ = *(uint *)((longlong)pdVar12 + 0x4c) & _UNK_15061cc8c;
    lVar13 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar24._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar24._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pdVar12 + 8));
    lVar14 = -(ulonglong)(auVar29._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar15 = -(ulonglong)(auVar29._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar30._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar28._4_4_,
                          ~(uint)lVar14 & auVar28._0_4_);
    auVar30._8_4_ = ~(uint)lVar15 & auVar28._8_4_;
    auVar30._12_4_ = ~(uint)((ulonglong)lVar15 >> 0x20) & auVar28._12_4_;
    auVar20._8_4_ = SUB84(auVar42._8_8_,0);
    auVar20._0_8_ = auVar42._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
    dVar26 = auVar30._0_8_ * (dVar26 * dVar23 + auVar21._0_8_ + auVar20._8_8_);
    dVar31 = auVar30._8_8_ * (dVar31 * dVar23 + dVar45 + auVar38._0_8_);
    auVar8._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar8._0_8_ = auVar24._0_8_;
    auVar8._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar8);
    auVar24 = blendpd(auVar42,auVar38,2);
    dVar22 = (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar21._4_4_,
                              ~(uint)lVar13 & auVar21._0_4_) *
             (auVar44._0_8_ * dVar23 + dVar22 + auVar24._0_8_);
  }
  fVar36 = (float)dVar22;
  fVar32 = (float)dVar26;
  fVar35 = (float)dVar31;
LAB_148199e9b:
  fVar1 = param_1->SpawnTime;
  fVar2 = (pFVar5->Velocity).field0_0x0._s_0.Y;
  fVar3 = (pFVar5->Velocity).field0_0x0._s_0.Z;
  (pFVar5->Velocity).field0_0x0._s_0.X = fVar1 * fVar32 + (pFVar5->Velocity).field0_0x0._s_0.X;
  (pFVar5->Velocity).field0_0x0._s_0.Y = fVar1 * fVar35 + fVar2;
  (pFVar5->Velocity).field0_0x0._s_0.Z = fVar1 * fVar36 + fVar3;
  fVar1 = param_1->SpawnTime;
  fVar2 = (pFVar5->BaseVelocity).field0_0x0._s_0.Y;
  fVar3 = (pFVar5->BaseVelocity).field0_0x0._s_0.X;
  (pFVar5->BaseVelocity).field0_0x0._s_0.Z =
       fVar1 * fVar36 + (pFVar5->BaseVelocity).field0_0x0._s_0.Z;
  (pFVar5->BaseVelocity).field0_0x0._s_0.Y = fVar1 * fVar35 + fVar2;
  (pFVar5->BaseVelocity).field0_0x0._s_0.X = fVar1 * fVar32 + fVar3;
  return;
}

// Update @ 1481a7d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleAccelerationConstant::Update
          (UParticleModuleAccelerationConstant *this,FUpdateContext *param_1)

{
  double dVar1;
  int iVar2;
  FParticleEmitterInstance *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  int iVar13;
  UParticleLODLevel *pUVar14;
  double *pdVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  pFVar3 = (FParticleEmitterInstance *)param_1->_padding_;
  if ((((pFVar3 != (FParticleEmitterInstance *)0x0) && (0 < pFVar3->ActiveParticles)) &&
      (pFVar3->ParticleData != (uchar *)0x0)) && (pFVar3->ParticleIndices != (ushort *)0x0)) {
    pUVar14 = UParticleEmitter::GetCurrentLODLevel(pFVar3->SpriteTemplate,pFVar3);
    if ((pUVar14 == (UParticleLODLevel *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODLevel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                            ,0x9e4,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->_padding_ & 1) == 0) ||
       (((pUVar14->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0)) {
      fVar34 = (float)(this->Acceleration).field0_0x0._s_0.X;
      fVar33 = (float)(this->Acceleration).field0_0x0._s_0.Y;
      fVar37 = (float)(this->Acceleration).field0_0x0._s_0.Z;
      if (((pUVar14->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0) {
        dVar27 = (double)fVar33;
        dVar1 = (double)fVar34;
        dVar38 = (double)fVar37;
        auVar30._8_4_ = SUB84(dVar1,0);
        auVar30._0_8_ = dVar1;
        auVar30._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        fVar34 = (float)((pFVar3->EmitterToSimulation).M[1][0] * dVar27 +
                         dVar1 * (pFVar3->EmitterToSimulation).M[0][0] +
                         (pFVar3->EmitterToSimulation).M[2][0] * dVar38 +
                        (pFVar3->EmitterToSimulation).M[3][0] * 0.0);
        fVar37 = (float)((pFVar3->EmitterToSimulation).M[1][2] * dVar27 +
                         (pFVar3->EmitterToSimulation).M[0][2] * dVar1 +
                         (pFVar3->EmitterToSimulation).M[2][2] * dVar38 +
                        (pFVar3->EmitterToSimulation).M[3][2] * 0.0);
        fVar33 = (float)((pFVar3->EmitterToSimulation).M[1][1] * dVar27 +
                         auVar30._8_8_ * (pFVar3->EmitterToSimulation).M[0][1] +
                         (pFVar3->EmitterToSimulation).M[2][1] * dVar38 +
                        (pFVar3->EmitterToSimulation).M[3][1] * 0.0);
      }
      lVar20 = param_1->_padding_;
      fVar41 = param_1->DeltaTime;
      lVar21 = *(longlong *)(lVar20 + 0x168);
      iVar2 = *(int *)(lVar20 + 0x188);
      lVar5 = *(longlong *)(lVar20 + 0x170);
      iVar13 = *(int *)(lVar20 + 0x18c) + -1;
      lVar20 = (longlong)iVar13;
      if (-1 < iVar13) {
        if (2 < lVar20) {
          uVar16 = lVar20 + 1U >> 2;
          puVar18 = (ushort *)(lVar5 + -2 + lVar20 * 2);
          lVar20 = lVar20 + uVar16 * -4;
          do {
            uVar17 = (ulonglong)((uint)puVar18[1] * iVar2);
            if ((*(uint *)((ulonglong)((uint)puVar18[1] * iVar2) + 0x6c + lVar21) & 0x4000000) == 0)
            {
              *(float *)(uVar17 + 0x40 + lVar21) =
                   fVar34 * fVar41 + *(float *)(uVar17 + 0x40 + lVar21);
              *(float *)(uVar17 + 0x44 + lVar21) =
                   fVar33 * fVar41 + *(float *)(uVar17 + 0x44 + lVar21);
              *(float *)(uVar17 + 0x48 + lVar21) =
                   fVar37 * fVar41 + *(float *)(uVar17 + 0x48 + lVar21);
              *(float *)(uVar17 + 0x30 + lVar21) =
                   fVar34 * fVar41 + *(float *)(uVar17 + 0x30 + lVar21);
              *(float *)(uVar17 + 0x34 + lVar21) =
                   fVar33 * fVar41 + *(float *)(uVar17 + 0x34 + lVar21);
              *(float *)(uVar17 + 0x38 + lVar21) =
                   fVar37 * fVar41 + *(float *)(uVar17 + 0x38 + lVar21);
            }
            uVar17 = (ulonglong)((uint)*puVar18 * iVar2);
            if ((*(uint *)((ulonglong)((uint)*puVar18 * iVar2) + 0x6c + lVar21) & 0x4000000) == 0) {
              *(float *)(uVar17 + 0x40 + lVar21) =
                   fVar34 * fVar41 + *(float *)(uVar17 + 0x40 + lVar21);
              *(float *)(uVar17 + 0x44 + lVar21) =
                   fVar33 * fVar41 + *(float *)(uVar17 + 0x44 + lVar21);
              *(float *)(uVar17 + 0x48 + lVar21) =
                   fVar37 * fVar41 + *(float *)(uVar17 + 0x48 + lVar21);
              *(float *)(uVar17 + 0x30 + lVar21) =
                   fVar34 * fVar41 + *(float *)(uVar17 + 0x30 + lVar21);
              *(float *)(uVar17 + 0x34 + lVar21) =
                   fVar33 * fVar41 + *(float *)(uVar17 + 0x34 + lVar21);
              *(float *)(uVar17 + 0x38 + lVar21) =
                   fVar37 * fVar41 + *(float *)(uVar17 + 0x38 + lVar21);
            }
            uVar17 = (ulonglong)((uint)puVar18[-1] * iVar2);
            if ((*(uint *)((ulonglong)((uint)puVar18[-1] * iVar2) + 0x6c + lVar21) & 0x4000000) == 0
               ) {
              *(float *)(uVar17 + 0x40 + lVar21) =
                   fVar34 * fVar41 + *(float *)(uVar17 + 0x40 + lVar21);
              *(float *)(uVar17 + 0x44 + lVar21) =
                   fVar33 * fVar41 + *(float *)(uVar17 + 0x44 + lVar21);
              *(float *)(uVar17 + 0x48 + lVar21) =
                   fVar37 * fVar41 + *(float *)(uVar17 + 0x48 + lVar21);
              *(float *)(uVar17 + 0x30 + lVar21) =
                   fVar34 * fVar41 + *(float *)(uVar17 + 0x30 + lVar21);
              *(float *)(uVar17 + 0x34 + lVar21) =
                   fVar33 * fVar41 + *(float *)(uVar17 + 0x34 + lVar21);
              *(float *)(uVar17 + 0x38 + lVar21) =
                   fVar37 * fVar41 + *(float *)(uVar17 + 0x38 + lVar21);
            }
            uVar17 = (ulonglong)((uint)puVar18[-2] * iVar2);
            if ((*(uint *)((ulonglong)((uint)puVar18[-2] * iVar2) + 0x6c + lVar21) & 0x4000000) == 0
               ) {
              *(float *)(uVar17 + 0x40 + lVar21) =
                   fVar34 * fVar41 + *(float *)(uVar17 + 0x40 + lVar21);
              *(float *)(uVar17 + 0x44 + lVar21) =
                   fVar33 * fVar41 + *(float *)(uVar17 + 0x44 + lVar21);
              *(float *)(uVar17 + 0x48 + lVar21) =
                   fVar37 * fVar41 + *(float *)(uVar17 + 0x48 + lVar21);
              *(float *)(uVar17 + 0x30 + lVar21) =
                   fVar34 * fVar41 + *(float *)(uVar17 + 0x30 + lVar21);
              *(float *)(uVar17 + 0x34 + lVar21) =
                   fVar33 * fVar41 + *(float *)(uVar17 + 0x34 + lVar21);
              *(float *)(uVar17 + 0x38 + lVar21) =
                   fVar37 * fVar41 + *(float *)(uVar17 + 0x38 + lVar21);
            }
            puVar18 = puVar18 + -4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          if (lVar20 < 0) {
            return;
          }
        }
        do {
          uVar16 = (ulonglong)((uint)*(ushort *)(lVar5 + lVar20 * 2) * iVar2);
          if ((*(uint *)(uVar16 + 0x6c + lVar21) & 0x4000000) == 0) {
            *(float *)(uVar16 + 0x40 + lVar21) =
                 fVar34 * fVar41 + *(float *)(uVar16 + 0x40 + lVar21);
            *(float *)(uVar16 + 0x44 + lVar21) =
                 fVar33 * fVar41 + *(float *)(uVar16 + 0x44 + lVar21);
            *(float *)(uVar16 + 0x48 + lVar21) =
                 fVar37 * fVar41 + *(float *)(uVar16 + 0x48 + lVar21);
            *(float *)(uVar16 + 0x30 + lVar21) =
                 fVar34 * fVar41 + *(float *)(uVar16 + 0x30 + lVar21);
            *(float *)(uVar16 + 0x34 + lVar21) =
                 fVar33 * fVar41 + *(float *)(uVar16 + 0x34 + lVar21);
            *(float *)(uVar16 + 0x38 + lVar21) =
                 fVar37 * fVar41 + *(float *)(uVar16 + 0x38 + lVar21);
          }
          lVar20 = lVar20 + -1;
        } while (-1 < lVar20);
      }
    }
    else {
      plVar4 = *(longlong **)(param_1->_padding_ + 0x10);
      pdVar15 = (double *)(**(code **)(*plVar4 + 0x10))(plVar4,pFVar3->ParticleData);
      auVar30 = *(undefined1 (*) [16])&(this->Acceleration).field0_0x0;
      dVar1 = (this->Acceleration).field0_0x0._s_0.Z;
      dVar27 = *pdVar15 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar38 = pdVar15[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar7 = pdVar15[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar8 = pdVar15[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar26 = *(undefined1 (*) [16])(pdVar15 + 10);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar1;
      auVar28 = blendpd(auVar30,auVar11,2);
      auVar31._8_4_ = SUB84(dVar38,0);
      auVar31._0_8_ = dVar27;
      auVar31._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar32._8_4_ = SUB84(dVar8,0);
      auVar32._0_8_ = dVar7;
      auVar32._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar32 = blendpd(auVar31,auVar32,2);
      dVar48 = auVar30._8_8_;
      auVar22._8_4_ = SUB84(dVar7,0);
      auVar22._0_8_ = dVar38;
      auVar22._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar46._0_8_ = dVar48 * dVar27 - dVar38 * auVar30._0_8_;
      auVar46._8_8_ = dVar1 * dVar38 - auVar22._8_8_ * dVar48;
      auVar29._0_8_ = auVar28._0_8_ * dVar7 - auVar32._0_8_ * dVar1;
      auVar29._8_8_ = auVar28._8_8_ * dVar8 - auVar32._8_8_ * 0.0;
      auVar28 = blendpd(auVar46,auVar29,2);
      dVar9 = auVar46._8_8_ + auVar46._8_8_;
      dVar10 = auVar29._0_8_ + auVar29._0_8_;
      uVar42 = SUB84(dVar10,0);
      uVar43 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar47._0_8_ = auVar28._0_8_ + auVar28._0_8_;
      auVar47._8_8_ = auVar28._8_8_ + auVar28._8_8_;
      auVar44._8_4_ = uVar42;
      auVar44._0_8_ = dVar9;
      auVar44._12_4_ = uVar43;
      auVar23._8_4_ = uVar42;
      auVar23._0_8_ = dVar9;
      auVar23._12_4_ = uVar43;
      auVar39._8_4_ = uVar42;
      auVar39._0_8_ = dVar9;
      auVar39._12_4_ = uVar43;
      auVar28 = blendpd(auVar39,auVar47,2);
      auVar45._0_8_ = auVar44._8_8_ * dVar27 - dVar9 * dVar38;
      auVar45._8_8_ = auVar47._0_8_ * dVar38 - auVar23._8_8_ * dVar7;
      auVar24._8_4_ = SUB84(auVar47._8_8_,0);
      auVar24._0_8_ = auVar47._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      auVar40._0_8_ = auVar28._0_8_ * dVar7 - auVar47._0_8_ * auVar32._0_8_;
      auVar40._8_8_ = auVar28._8_8_ * dVar8 - auVar24._8_8_ * auVar32._8_8_;
      auVar35._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)pdVar15 + 0x44),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(pdVar15 + 8));
      auVar35._8_4_ = _UNK_15061cc88 & *(uint *)(pdVar15 + 9);
      auVar35._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)pdVar15 + 0x4c);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(auVar26._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  auVar26._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(pdVar15 + 8));
      lVar20 = -(ulonglong)(auVar35._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar21 = -(ulonglong)(auVar35._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar25._8_4_ = SUB84(auVar45._8_8_,0);
      auVar25._0_8_ = auVar45._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
      auVar36._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar32._4_4_,
                            ~(uint)lVar20 & auVar32._0_4_);
      auVar36._8_4_ = ~(uint)lVar21 & auVar32._8_4_;
      auVar36._12_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar32._12_4_;
      auVar28._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar28._0_8_ = auVar26._0_8_;
      auVar28._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
      lVar20 = param_1->_padding_;
      fVar34 = param_1->DeltaTime;
      lVar21 = *(longlong *)(lVar20 + 0x168);
      iVar2 = *(int *)(lVar20 + 0x188);
      lVar5 = *(longlong *)(lVar20 + 0x170);
      iVar13 = *(int *)(lVar20 + 0x18c) + -1;
      lVar20 = (longlong)iVar13;
      auVar32 = blendpd(auVar45,auVar40,2);
      fVar37 = (float)(auVar36._0_8_ * (dVar9 * dVar8 + auVar30._0_8_ + auVar25._8_8_));
      fVar41 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar26._4_4_,
                                        ~(uint)lVar19 & auVar26._0_4_) *
                      (auVar47._0_8_ * dVar8 + dVar1 + auVar32._0_8_));
      fVar33 = (float)(auVar36._8_8_ * (dVar10 * dVar8 + dVar48 + auVar40._0_8_));
      if (-1 < iVar13) {
        if (2 < lVar20) {
          uVar16 = lVar20 + 1U >> 2;
          puVar18 = (ushort *)(lVar5 + -2 + lVar20 * 2);
          lVar20 = lVar20 + uVar16 * -4;
          do {
            uVar17 = (ulonglong)((uint)puVar18[1] * iVar2);
            if ((*(uint *)((ulonglong)((uint)puVar18[1] * iVar2) + 0x6c + lVar21) & 0x4000000) == 0)
            {
              *(float *)(uVar17 + 0x40 + lVar21) =
                   fVar37 * fVar34 + *(float *)(uVar17 + 0x40 + lVar21);
              *(float *)(uVar17 + 0x44 + lVar21) =
                   fVar33 * fVar34 + *(float *)(uVar17 + 0x44 + lVar21);
              *(float *)(uVar17 + 0x48 + lVar21) =
                   fVar41 * fVar34 + *(float *)(uVar17 + 0x48 + lVar21);
              *(float *)(uVar17 + 0x30 + lVar21) =
                   fVar37 * fVar34 + *(float *)(uVar17 + 0x30 + lVar21);
              *(float *)(uVar17 + 0x34 + lVar21) =
                   fVar33 * fVar34 + *(float *)(uVar17 + 0x34 + lVar21);
              *(float *)(uVar17 + 0x38 + lVar21) =
                   fVar41 * fVar34 + *(float *)(uVar17 + 0x38 + lVar21);
            }
            uVar17 = (ulonglong)((uint)*puVar18 * iVar2);
            if ((*(uint *)((ulonglong)((uint)*puVar18 * iVar2) + 0x6c + lVar21) & 0x4000000) == 0) {
              *(float *)(uVar17 + 0x40 + lVar21) =
                   fVar37 * fVar34 + *(float *)(uVar17 + 0x40 + lVar21);
              *(float *)(uVar17 + 0x44 + lVar21) =
                   fVar33 * fVar34 + *(float *)(uVar17 + 0x44 + lVar21);
              *(float *)(uVar17 + 0x48 + lVar21) =
                   fVar41 * fVar34 + *(float *)(uVar17 + 0x48 + lVar21);
              *(float *)(uVar17 + 0x30 + lVar21) =
                   fVar37 * fVar34 + *(float *)(uVar17 + 0x30 + lVar21);
              *(float *)(uVar17 + 0x34 + lVar21) =
                   fVar33 * fVar34 + *(float *)(uVar17 + 0x34 + lVar21);
              *(float *)(uVar17 + 0x38 + lVar21) =
                   fVar41 * fVar34 + *(float *)(uVar17 + 0x38 + lVar21);
            }
            uVar17 = (ulonglong)((uint)puVar18[-1] * iVar2);
            if ((*(uint *)((ulonglong)((uint)puVar18[-1] * iVar2) + 0x6c + lVar21) & 0x4000000) == 0
               ) {
              *(float *)(uVar17 + 0x40 + lVar21) =
                   fVar37 * fVar34 + *(float *)(uVar17 + 0x40 + lVar21);
              *(float *)(uVar17 + 0x44 + lVar21) =
                   fVar33 * fVar34 + *(float *)(uVar17 + 0x44 + lVar21);
              *(float *)(uVar17 + 0x48 + lVar21) =
                   fVar41 * fVar34 + *(float *)(uVar17 + 0x48 + lVar21);
              *(float *)(uVar17 + 0x30 + lVar21) =
                   fVar37 * fVar34 + *(float *)(uVar17 + 0x30 + lVar21);
              *(float *)(uVar17 + 0x34 + lVar21) =
                   fVar33 * fVar34 + *(float *)(uVar17 + 0x34 + lVar21);
              *(float *)(uVar17 + 0x38 + lVar21) =
                   fVar41 * fVar34 + *(float *)(uVar17 + 0x38 + lVar21);
            }
            uVar17 = (ulonglong)((uint)puVar18[-2] * iVar2);
            if ((*(uint *)((ulonglong)((uint)puVar18[-2] * iVar2) + 0x6c + lVar21) & 0x4000000) == 0
               ) {
              *(float *)(uVar17 + 0x40 + lVar21) =
                   fVar37 * fVar34 + *(float *)(uVar17 + 0x40 + lVar21);
              *(float *)(uVar17 + 0x44 + lVar21) =
                   fVar33 * fVar34 + *(float *)(uVar17 + 0x44 + lVar21);
              *(float *)(uVar17 + 0x48 + lVar21) =
                   fVar41 * fVar34 + *(float *)(uVar17 + 0x48 + lVar21);
              *(float *)(uVar17 + 0x30 + lVar21) =
                   fVar37 * fVar34 + *(float *)(uVar17 + 0x30 + lVar21);
              *(float *)(uVar17 + 0x34 + lVar21) =
                   fVar33 * fVar34 + *(float *)(uVar17 + 0x34 + lVar21);
              *(float *)(uVar17 + 0x38 + lVar21) =
                   fVar41 * fVar34 + *(float *)(uVar17 + 0x38 + lVar21);
            }
            puVar18 = puVar18 + -4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          if (lVar20 < 0) {
            return;
          }
        }
        do {
          uVar16 = (ulonglong)((uint)*(ushort *)(lVar5 + lVar20 * 2) * iVar2);
          if ((*(uint *)(uVar16 + 0x6c + lVar21) & 0x4000000) == 0) {
            *(float *)(uVar16 + 0x40 + lVar21) =
                 fVar37 * fVar34 + *(float *)(uVar16 + 0x40 + lVar21);
            *(float *)(uVar16 + 0x44 + lVar21) =
                 fVar33 * fVar34 + *(float *)(uVar16 + 0x44 + lVar21);
            *(float *)(uVar16 + 0x48 + lVar21) =
                 fVar41 * fVar34 + *(float *)(uVar16 + 0x48 + lVar21);
            *(float *)(uVar16 + 0x30 + lVar21) =
                 fVar37 * fVar34 + *(float *)(uVar16 + 0x30 + lVar21);
            *(float *)(uVar16 + 0x34 + lVar21) =
                 fVar33 * fVar34 + *(float *)(uVar16 + 0x34 + lVar21);
            *(float *)(uVar16 + 0x38 + lVar21) =
                 fVar41 * fVar34 + *(float *)(uVar16 + 0x38 + lVar21);
          }
          lVar20 = lVar20 + -1;
        } while (-1 < lVar20);
      }
    }
  }
  return;
}

