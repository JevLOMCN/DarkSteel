// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147303ec0

UClass * __cdecl UParticleModuleMeshRotationRate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotationRate",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshRotationRate,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshRotationRate>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshRotationRate>,local_res8,
               UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.InnerSingleton;
}

// UParticleModuleMeshRotationRate @ 14730ad50

UParticleModuleMeshRotationRate * __thiscall
UParticleModuleMeshRotationRate::UParticleModuleMeshRotationRate
          (UParticleModuleMeshRotationRate *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRate__6B_;
  (this->StartRotationRate)._padding_ = 0;
  (this->StartRotationRate)._padding_ = 0;
  (this->StartRotationRate)._padding_ = 0;
  *(undefined4 *)&(this->StartRotationRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRotationRate)._padding_ + 4) = 0;
  (this->StartRotationRate).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartRotationRate).MaxValue = 0.0;
  (this->StartRotationRate).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRotationRate).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartRotationRate).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartRotationRate).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRotationRate).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartRotationRate).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleMeshRotationRate @ 14730bbf0

void __thiscall
UParticleModuleMeshRotationRate::~UParticleModuleMeshRotationRate
          (UParticleModuleMeshRotationRate *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRate__6B_;
  pvVar1 = (void *)(this->StartRotationRate)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730eae0

UClass * __cdecl UParticleModuleMeshRotationRate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotationRate",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshRotationRate,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshRotationRate>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshRotationRate>,local_res8,
               UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleMeshRotationRate @ 14730fe90

void __cdecl
UParticleModuleMeshRotationRate::StaticRegisterNativesUParticleModuleMeshRotationRate(void)

{
  return;
}

// TouchesMeshRotation @ 147310030

bool __thiscall
UParticleModuleMeshRotationRate::TouchesMeshRotation(UParticleModuleMeshRotationRate *this)

{
  return true;
}

// UParticleModuleMeshRotationRate @ 14815d5c0

UParticleModuleMeshRotationRate * __thiscall
UParticleModuleMeshRotationRate::UParticleModuleMeshRotationRate
          (UParticleModuleMeshRotationRate *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRate__6B_;
  (this->StartRotationRate)._padding_ = 0;
  (this->StartRotationRate)._padding_ = 0;
  (this->StartRotationRate)._padding_ = 0;
  *(undefined4 *)&(this->StartRotationRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRotationRate)._padding_ + 4) = 0;
  (this->StartRotationRate).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartRotationRate).MaxValue = 0.0;
  (this->StartRotationRate).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRotationRate).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartRotationRate).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartRotationRate).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRotationRate).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartRotationRate).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  return this;
}

// InitializeDefaults @ 1481843a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleMeshRotationRate::InitializeDefaults(UParticleModuleMeshRotationRate *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->StartRotationRate);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRotationRate");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Min).field0_0x0._s_0.X = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
    (pUVar3->Max).field0_0x0._s_0.X = 360.0;
    (pUVar3->Max).field0_0x0._s_0.Y = 360.0;
    (pUVar3->Max).field0_0x0._s_0.Z = 360.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818aa60

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleMeshRotationRate::PostInitProperties(UParticleModuleMeshRotationRate *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->StartRotationRate);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRotationRate");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Min).field0_0x0._s_0.X = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
      (pUVar3->Max).field0_0x0._s_0.X = 360.0;
      (pUVar3->Max).field0_0x0._s_0.Y = 360.0;
      (pUVar3->Max).field0_0x0._s_0.Z = 360.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148197cf0

void __thiscall
UParticleModuleMeshRotationRate::SetToSensibleDefaults
          (UParticleModuleMeshRotationRate *this,UParticleEmitter *param_1)

{
  TObjectPtr<UDistributionVector> *this_00;
  UDistributionVector *pUVar1;
  undefined8 uVar2;
  bool bVar3;
  UClass *pUVar4;
  
  this_00 = &(this->StartRotationRate).Distribution;
  if ((this_00->field0_0x0).DebugPtr != (UDistributionVector *)0x0) {
    pUVar4 = Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if ((bVar3) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UDistributionVector *)0x0))
    {
      pUVar1[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pUVar1[1]._padding_ = uVar2;
      pUVar1[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1->bIsDirty = '\x01';
    }
  }
  return;
}

// Spawn @ 14819d000

void __thiscall
UParticleModuleMeshRotationRate::Spawn(UParticleModuleMeshRotationRate *this,FSpawnContext *param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  FBaseParticle *pFVar4;
  int iVar5;
  FRandomStream *pFVar6;
  UObject *pUVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 local_38;
  
  pFVar6 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar6 == (FRandomStream *)0x0) {
    pFVar6 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  plVar3 = (longlong *)param_1->_padding_;
  pFVar4 = param_1->ParticleBase;
  iVar5 = (**(code **)(*plVar3 + 0x150))(plVar3);
  lVar8 = (longlong)iVar5;
  if (iVar5 != 0) {
    pUVar7 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    FRawDistributionVector::GetValue
              (&this->StartRotationRate,(TVector<double> *)&local_38._s_0,*(float *)(plVar3 + 0x34),
               pUVar7,0,pFVar6);
    dVar9 = local_38._s_0.X * __real_4076800000000000;
    dVar11 = local_38._s_0.Z * __real_4076800000000000;
    dVar10 = local_38._s_0.Y * __real_4076800000000000;
    fVar1 = *(float *)((longlong)&(pFVar4->Velocity).field0_0x0 + lVar8);
    *(float *)((longlong)&pFVar4->Rotation + lVar8) =
         (float)dVar9 + *(float *)((longlong)&pFVar4->Rotation + lVar8);
    fVar2 = *(float *)((longlong)&(pFVar4->Velocity).field0_0x0 + lVar8 + 4);
    *(float *)((longlong)&(pFVar4->Velocity).field0_0x0 + lVar8) = (float)dVar10 + fVar1;
    *(float *)((longlong)&(pFVar4->Velocity).field0_0x0 + lVar8 + 4) = (float)dVar11 + fVar2;
    fVar1 = *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar8 + 4);
    fVar2 = *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar8 + 8);
    *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar8) =
         (float)dVar9 + *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar8);
    *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar8 + 4) = (float)dVar10 + fVar1;
    *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar8 + 8) = (float)dVar11 + fVar2;
  }
  return;
}

// SpawnEx @ 14819ff50

void __thiscall
UParticleModuleMeshRotationRate::SpawnEx
          (UParticleModuleMeshRotationRate *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  FBaseParticle *pFVar4;
  int iVar5;
  UObject *pUVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_38;
  
  plVar3 = (longlong *)param_1->_padding_;
  pFVar4 = param_1->ParticleBase;
  iVar5 = (**(code **)(*plVar3 + 0x150))(plVar3);
  lVar7 = (longlong)iVar5;
  if (iVar5 != 0) {
    pUVar6 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    FRawDistributionVector::GetValue
              (&this->StartRotationRate,(TVector<double> *)&local_38._s_0,*(float *)(plVar3 + 0x34),
               pUVar6,0,param_2);
    dVar8 = local_38._s_0.X * __real_4076800000000000;
    dVar10 = local_38._s_0.Z * __real_4076800000000000;
    dVar9 = local_38._s_0.Y * __real_4076800000000000;
    fVar1 = *(float *)((longlong)&(pFVar4->Velocity).field0_0x0 + lVar7);
    *(float *)((longlong)&pFVar4->Rotation + lVar7) =
         (float)dVar8 + *(float *)((longlong)&pFVar4->Rotation + lVar7);
    fVar2 = *(float *)((longlong)&(pFVar4->Velocity).field0_0x0 + lVar7 + 4);
    *(float *)((longlong)&(pFVar4->Velocity).field0_0x0 + lVar7) = (float)dVar9 + fVar1;
    *(float *)((longlong)&(pFVar4->Velocity).field0_0x0 + lVar7 + 4) = (float)dVar10 + fVar2;
    fVar1 = *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar7 + 4);
    fVar2 = *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar7 + 8);
    *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar7) =
         (float)dVar8 + *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar7);
    *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar7 + 4) = (float)dVar9 + fVar1;
    *(float *)((longlong)&(pFVar4->BaseVelocity).field0_0x0 + lVar7 + 8) = (float)dVar10 + fVar2;
  }
  return;
}

