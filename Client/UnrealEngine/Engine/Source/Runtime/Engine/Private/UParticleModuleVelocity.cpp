// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1473153c0

UClass * __cdecl UParticleModuleVelocity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocity",
               &Z_Registration_Info_UClass_UParticleModuleVelocity.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocity,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleVelocity>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocity>,local_res8,
               UParticleModuleVelocityBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocity.InnerSingleton;
}

// UParticleModuleVelocity @ 147319100

UParticleModuleVelocity * __thiscall
UParticleModuleVelocity::UParticleModuleVelocity
          (UParticleModuleVelocity *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVelocity__6B_;
  (this->StartVelocity)._padding_ = 0;
  (this->StartVelocity)._padding_ = 0;
  *(undefined4 *)&(this->StartVelocity)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartVelocity)._padding_ + 4) = 0;
  (this->StartVelocity)._padding_ = 0;
  (this->StartVelocity).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).MaxValue = 0.0;
  (this->StartVelocity).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVelocity).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVelocity).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartVelocity).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->StartVelocityRadial)._padding_ = 0;
  (this->StartVelocityRadial)._padding_ = 0;
  (this->StartVelocityRadial)._padding_ = 0;
  *(undefined4 *)&(this->StartVelocityRadial)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartVelocityRadial)._padding_ + 4) = 0;
  (this->StartVelocityRadial).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StartVelocityRadial).MinValue = 0.0;
  (this->StartVelocityRadial).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleVelocity @ 147319af0

void __thiscall UParticleModuleVelocity::~UParticleModuleVelocity(UParticleModuleVelocity *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleVelocity__6B_;
  pvVar1 = (void *)(this->StartVelocityRadial)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->StartVelocity)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleVelocityBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c7f0

UClass * __cdecl UParticleModuleVelocity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocity",
               &Z_Registration_Info_UClass_UParticleModuleVelocity.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocity,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleVelocity>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocity>,local_res8,
               UParticleModuleVelocityBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocity.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVelocity @ 14731d0f0

void __cdecl UParticleModuleVelocity::StaticRegisterNativesUParticleModuleVelocity(void)

{
  return;
}

// UParticleModuleVelocity @ 14815eb70

UParticleModuleVelocity * __thiscall
UParticleModuleVelocity::UParticleModuleVelocity
          (UParticleModuleVelocity *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVelocity__6B_;
  (this->StartVelocity)._padding_ = 0;
  (this->StartVelocity)._padding_ = 0;
  *(undefined4 *)&(this->StartVelocity)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartVelocity)._padding_ + 4) = 0;
  (this->StartVelocity)._padding_ = 0;
  (this->StartVelocity).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).MaxValue = 0.0;
  (this->StartVelocity).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVelocity).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVelocity).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartVelocity).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  (this->StartVelocityRadial)._padding_ = 0;
  (this->StartVelocityRadial)._padding_ = 0;
  (this->StartVelocityRadial)._padding_ = 0;
  *(undefined4 *)&(this->StartVelocityRadial)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartVelocityRadial)._padding_ + 4) = 0;
  (this->StartVelocityRadial).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StartVelocityRadial).MinValue = 0.0;
  (this->StartVelocityRadial).MaxValue = 0.0;
  return this;
}

// InitializeDefaults @ 148185130

void __thiscall UParticleModuleVelocity::InitializeDefaults(UParticleModuleVelocity *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  UDistributionFloatUniform *pUVar4;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->StartVelocity);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartVelocity");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartVelocity).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->StartVelocityRadial);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartVelocityRadial");
    pUVar4 = NewObject<UDistributionFloatUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionFloatUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->StartVelocityRadial).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostInitProperties @ 14818be40

void __thiscall UParticleModuleVelocity::PostInitProperties(UParticleModuleVelocity *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  UDistributionFloatUniform *pUVar4;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->StartVelocity);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartVelocity");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartVelocity).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->StartVelocityRadial);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartVelocityRadial");
      pUVar4 = NewObject<UDistributionFloatUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UDistributionFloatUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->StartVelocityRadial).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
    }
  }
  return;
}

// Spawn @ 14819de20

void __thiscall UParticleModuleVelocity::Spawn(UParticleModuleVelocity *this,FSpawnContext *param_1)

{
  FRandomStream *pFVar1;
  
  pFVar1 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar1 == (FRandomStream *)0x0) {
    pFVar1 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  SpawnEx(this,param_1,pFVar1);
  return;
}

// SpawnEx @ 1481a0560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleVelocity::SpawnEx
          (UParticleModuleVelocity *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  float fVar1;
  FParticleEmitterInstance *pFVar2;
  FBaseParticle *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  UObject *pUVar9;
  longlong lVar10;
  UParticleLODLevel *pUVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  double dVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auStackY_1b8 [32];
  TVector<double>_u_0 local_188;
  double local_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 local_140;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar2 = (FParticleEmitterInstance *)param_1->_padding_;
  pFVar3 = param_1->ParticleBase;
  pUVar9 = (UObject *)(**(code **)((longlong)*pFVar2->Component + 8))();
  FRawDistributionVector::GetValue
            (&this->StartVelocity,(TVector<double> *)&local_188._s_0,pFVar2->EmitterTime,pUVar9,0,
             param_2);
  dVar22 = (pFVar3->Location).field0_0x0._s_0.X - (pFVar2->EmitterToSimulation).M[3][0];
  dVar23 = (pFVar3->Location).field0_0x0._s_0.Y - (pFVar2->EmitterToSimulation).M[3][1];
  dVar18 = (pFVar3->Location).field0_0x0._s_0.Z - (pFVar2->EmitterToSimulation).M[3][2];
  uVar13 = SUB84(__real_3ff0000000000000,0);
  uVar16 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar15 = dVar22 * dVar22;
  dVar17 = dVar23 * dVar23 + dVar15 + dVar18 * dVar18;
  uVar5 = dVar22;
  uVar6 = dVar23;
  uVar7 = dVar18;
  if ((dVar17 != __real_3ff0000000000000) &&
     (uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar17)) {
    local_170 = __real_3ff0000000000000 / SQRT(dVar17);
    dVar15 = dVar17;
    uVar5 = dVar22 * local_170;
    uVar6 = dVar23 * local_170;
    uVar7 = dVar18 * local_170;
  }
  dVar22 = ___xmm_3ff00000000000003ff0000000000000;
  dVar23 = _UNK_150689688;
  if ((this->_padding_ & 2) != 0) {
    lVar10 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))(dVar15);
    local_158 = *(undefined8 *)(lVar10 + 0x50);
    dVar22 = *(double *)(lVar10 + 0x40);
    dVar23 = *(double *)(lVar10 + 0x48);
    uVar13 = (undefined4)local_158;
    uVar16 = (undefined4)((ulonglong)local_158 >> 0x20);
    local_168 = dVar22;
    dStack_160 = dVar23;
    local_140 = local_158;
  }
  pUVar11 = UParticleEmitter::GetCurrentLODLevel(pFVar2->SpriteTemplate,pFVar2);
  if ((pUVar11 == (UParticleLODLevel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Velocity.cpp"
                         ,0x62,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = (uint)this->_padding_ & 1;
  if (((pUVar11->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    if (uVar12 != 0) goto LAB_1481a08e2;
    dVar18 = local_188._s_0.X * (pFVar2->EmitterToSimulation).M[0][0] +
             local_188._s_0.Y * (pFVar2->EmitterToSimulation).M[1][0] +
             (pFVar2->EmitterToSimulation).M[2][0] * local_188._s_0.Z +
             (pFVar2->EmitterToSimulation).M[3][0] * 0.0;
    dVar15 = local_188._s_0.X * (pFVar2->EmitterToSimulation).M[0][1] +
             local_188._s_0.Y * (pFVar2->EmitterToSimulation).M[1][1] +
             (pFVar2->EmitterToSimulation).M[2][1] * local_188._s_0.Z +
             (pFVar2->EmitterToSimulation).M[3][1] * 0.0;
  }
  else {
    if (uVar12 != 0) {
      UE::Math::TMatrix<double>::InverseFast(&pFVar2->SimulationToWorld,&local_138);
      local_138.M[0][1] = local_188._s_0.X * local_138.M[0][1];
      local_138.M[2][0] = local_188._s_0.Z * local_138.M[2][0];
      local_138.M[2][1] = local_188._s_0.Z * local_138.M[2][1];
      local_188._s_0.Z =
           local_188._s_0.Y * local_138.M[1][2] + local_188._s_0.X * local_138.M[0][2] +
           local_188._s_0.Z * local_138.M[2][2] + local_138.M[3][2] * 0.0;
      local_188._s_0.X =
           local_188._s_0.Y * local_138.M[1][0] + local_188._s_0.X * local_138.M[0][0] +
           local_138.M[2][0] + local_138.M[3][0] * 0.0;
      local_188._s_0.Y =
           local_188._s_0.Y * local_138.M[1][1] + local_138.M[0][1] + local_138.M[2][1] +
           local_138.M[3][1] * 0.0;
      goto LAB_1481a08e2;
    }
    dVar18 = local_188._s_0.Y * (pFVar2->EmitterToSimulation).M[1][0] +
             local_188._s_0.X * (pFVar2->EmitterToSimulation).M[0][0] +
             local_188._s_0.Z * (pFVar2->EmitterToSimulation).M[2][0] +
             (pFVar2->EmitterToSimulation).M[3][0] * 0.0;
    dVar15 = local_188._s_0.Y * (pFVar2->EmitterToSimulation).M[1][1] +
             local_188._s_0.X * (pFVar2->EmitterToSimulation).M[0][1] +
             local_188._s_0.Z * (pFVar2->EmitterToSimulation).M[2][1] +
             (pFVar2->EmitterToSimulation).M[3][1] * 0.0;
  }
  local_188._s_0.Z =
       local_188._s_0.X * (pFVar2->EmitterToSimulation).M[0][2] +
       (pFVar2->EmitterToSimulation).M[1][2] * local_188._s_0.Y +
       (pFVar2->EmitterToSimulation).M[2][2] * local_188._s_0.Z +
       (pFVar2->EmitterToSimulation).M[3][2] * 0.0;
  local_188._s_0.X = dVar18;
  local_188._s_0.Y = dVar15;
LAB_1481a08e2:
  local_188._s_0.X = local_188._s_0.X * dVar22;
  local_188._s_0.Z = local_188._s_0.Z * (double)CONCAT44(uVar16,uVar13);
  local_188._s_0.Y = local_188._s_0.Y * dVar23;
  pUVar9 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar14 = FRawDistributionFloat::GetValue
                     (&this->StartVelocityRadial,pFVar2->EmitterTime,pUVar9,param_2);
  dVar18 = (double)fVar14;
  fVar20 = (float)(dVar18 * (double)uVar6 * dVar23 + local_188._s_0.Y);
  fVar21 = (float)(dVar18 * (double)uVar5 * dVar22 + local_188._s_0.X);
  fVar19 = (float)(dVar18 * (double)uVar7 * (double)CONCAT44(uVar16,uVar13) + local_188._s_0.Z);
  fVar14 = (pFVar3->Velocity).field0_0x0._s_0.Y;
  (pFVar3->Velocity).field0_0x0._s_0.X = fVar21 + (pFVar3->Velocity).field0_0x0._s_0.X;
  fVar1 = (pFVar3->Velocity).field0_0x0._s_0.Z;
  (pFVar3->Velocity).field0_0x0._s_0.Y = fVar20 + fVar14;
  (pFVar3->Velocity).field0_0x0._s_0.Z = fVar19 + fVar1;
  fVar14 = (pFVar3->BaseVelocity).field0_0x0._s_0.Y;
  fVar1 = (pFVar3->BaseVelocity).field0_0x0._s_0.Z;
  (pFVar3->BaseVelocity).field0_0x0._s_0.X = fVar21 + (pFVar3->BaseVelocity).field0_0x0._s_0.X;
  (pFVar3->BaseVelocity).field0_0x0._s_0.Y = fVar20 + fVar14;
  (pFVar3->BaseVelocity).field0_0x0._s_0.Z = fVar19 + fVar1;
  return;
}

