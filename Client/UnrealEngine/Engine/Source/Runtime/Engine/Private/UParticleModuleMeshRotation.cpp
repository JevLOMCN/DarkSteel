// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147303c30

UClass * __cdecl UParticleModuleMeshRotation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotation",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotation.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshRotation,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshRotation>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshRotation>,local_res8,
               UParticleModuleRotationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotation.InnerSingleton;
}

// UParticleModuleMeshRotation @ 14730acd0

UParticleModuleMeshRotation * __thiscall
UParticleModuleMeshRotation::UParticleModuleMeshRotation
          (UParticleModuleMeshRotation *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotation__6B_;
  (this->StartRotation)._padding_ = 0;
  (this->StartRotation)._padding_ = 0;
  (this->StartRotation)._padding_ = 0;
  *(undefined4 *)&(this->StartRotation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRotation)._padding_ + 4) = 0;
  (this->StartRotation).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartRotation).MaxValue = 0.0;
  (this->StartRotation).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRotation).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartRotation).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartRotation).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRotation).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartRotation).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartRotation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleMeshRotation @ 14730bbb0

void __thiscall
UParticleModuleMeshRotation::~UParticleModuleMeshRotation(UParticleModuleMeshRotation *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotation__6B_;
  pvVar1 = (void *)(this->StartRotation)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730ea20

UClass * __cdecl UParticleModuleMeshRotation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotation",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotation.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshRotation,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshRotation>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshRotation>,local_res8,
               UParticleModuleRotationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotation.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleMeshRotation @ 14730fe80

void __cdecl UParticleModuleMeshRotation::StaticRegisterNativesUParticleModuleMeshRotation(void)

{
  return;
}

// TouchesMeshRotation @ 147310020

bool __thiscall UParticleModuleMeshRotation::TouchesMeshRotation(UParticleModuleMeshRotation *this)

{
  return true;
}

// UParticleModuleMeshRotation @ 14815d520

UParticleModuleMeshRotation * __thiscall
UParticleModuleMeshRotation::UParticleModuleMeshRotation
          (UParticleModuleMeshRotation *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotation__6B_;
  (this->StartRotation)._padding_ = 0;
  (this->StartRotation)._padding_ = 0;
  (this->StartRotation)._padding_ = 0;
  *(undefined4 *)&(this->StartRotation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRotation)._padding_ + 4) = 0;
  (this->StartRotation).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartRotation).MaxValue = 0.0;
  (this->StartRotation).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRotation).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartRotation).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartRotation).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartRotation).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartRotation).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartRotation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->bInheritParent = 0;
  return this;
}

// InitializeDefaults @ 1481842f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleMeshRotation::InitializeDefaults(UParticleModuleMeshRotation *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->StartRotation);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRotation");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Min).field0_0x0._s_0.X = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
    (pUVar3->Max).field0_0x0._s_0.X = 1.0;
    (pUVar3->Max).field0_0x0._s_0.Y = 1.0;
    (pUVar3->Max).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartRotation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818a990

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleMeshRotation::PostInitProperties(UParticleModuleMeshRotation *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->StartRotation);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRotation");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Min).field0_0x0._s_0.X = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
      (pUVar3->Max).field0_0x0._s_0.X = 1.0;
      (pUVar3->Max).field0_0x0._s_0.Y = 1.0;
      (pUVar3->Max).field0_0x0._s_0.Z = 1.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartRotation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// Spawn @ 14819ce40

void __thiscall
UParticleModuleMeshRotation::Spawn(UParticleModuleMeshRotation *this,FSpawnContext *param_1)

{
  longlong *plVar1;
  FBaseParticle *pFVar2;
  float fVar3;
  int iVar4;
  FRandomStream *pFVar5;
  UObject *pUVar6;
  longlong lVar7;
  float fVar8;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TRotator<double> local_38;
  
  pFVar5 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar5 == (FRandomStream *)0x0) {
    pFVar5 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  plVar1 = (longlong *)param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  iVar4 = (**(code **)(*plVar1 + 0x150))(plVar1);
  lVar7 = (longlong)iVar4;
  if (iVar4 != 0) {
    pUVar6 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    FRawDistributionVector::GetValue
              (&this->StartRotation,(TVector<double> *)&local_68._s_0,*(float *)(plVar1 + 0x34),
               pUVar6,0,pFVar5);
    if (this->bInheritParent != 0) {
      (**(code **)(*(longlong *)plVar1[2] + 0x18))((longlong *)plVar1[2],&local_38);
      UE::Math::TRotator<double>::Euler(&local_38,(TVector<double> *)&local_50._s_0);
      local_68._s_0.X = local_68._s_0.X + local_50._s_0.X * __real_3f66c16c16c16c17;
      local_68._s_0.Y = local_68._s_0.Y + local_50._s_0.Y * __real_3f66c16c16c16c17;
      local_68._s_0.Z = local_68._s_0.Z + local_50._s_0.Z * __real_3f66c16c16c16c17;
    }
    fVar3 = __real_43b40000;
    fVar8 = (float)local_68._s_0.Z * __real_43b40000;
    *(float *)((longlong)&(pFVar2->OldLocation).field0_0x0 + lVar7 + 0xc) =
         (float)local_68._s_0.X * __real_43b40000;
    *(float *)((longlong)&(pFVar2->OldLocation).field0_0x0 + lVar7 + 0x10) =
         (float)local_68._s_0.Y * fVar3;
    *(float *)((longlong)&(pFVar2->OldLocation).field0_0x0 + lVar7 + 0x14) = fVar8;
    *(float *)((longlong)&(pFVar2->Location).field0_0x0 + lVar7) =
         *(float *)((longlong)&(pFVar2->OldLocation).field0_0x0 + lVar7 + 0xc) +
         *(float *)((longlong)&(pFVar2->Location).field0_0x0 + lVar7);
    *(float *)((longlong)&(pFVar2->Location).field0_0x0 + lVar7 + 4) =
         *(float *)((longlong)&(pFVar2->OldLocation).field0_0x0 + lVar7 + 0x10) +
         *(float *)((longlong)&(pFVar2->Location).field0_0x0 + lVar7 + 4);
    *(float *)((longlong)&(pFVar2->Location).field0_0x0 + lVar7 + 8) =
         *(float *)((longlong)&(pFVar2->OldLocation).field0_0x0 + lVar7 + 0x14) +
         *(float *)((longlong)&(pFVar2->Location).field0_0x0 + lVar7 + 8);
  }
  return;
}

// SpawnEx @ 14819fdc0

void __thiscall
UParticleModuleMeshRotation::SpawnEx
          (UParticleModuleMeshRotation *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  float fVar1;
  longlong *plVar2;
  FBaseParticle *pFVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  float fVar7;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TRotator<double> local_38;
  
  plVar2 = (longlong *)param_1->_padding_;
  pFVar3 = param_1->ParticleBase;
  iVar4 = (**(code **)(*plVar2 + 0x150))(plVar2);
  lVar6 = (longlong)iVar4;
  if (iVar4 != 0) {
    pUVar5 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    FRawDistributionVector::GetValue
              (&this->StartRotation,(TVector<double> *)&local_68._s_0,*(float *)(plVar2 + 0x34),
               pUVar5,0,param_2);
    if (this->bInheritParent != 0) {
      (**(code **)(*(longlong *)plVar2[2] + 0x18))((longlong *)plVar2[2],&local_38);
      UE::Math::TRotator<double>::Euler(&local_38,(TVector<double> *)&local_50._s_0);
      local_68._s_0.X = local_68._s_0.X + local_50._s_0.X * __real_3f66c16c16c16c17;
      local_68._s_0.Y = local_68._s_0.Y + local_50._s_0.Y * __real_3f66c16c16c16c17;
      local_68._s_0.Z = local_68._s_0.Z + local_50._s_0.Z * __real_3f66c16c16c16c17;
    }
    fVar1 = __real_43b40000;
    fVar7 = (float)local_68._s_0.Z * __real_43b40000;
    *(float *)((longlong)&(pFVar3->OldLocation).field0_0x0 + lVar6 + 0xc) =
         (float)local_68._s_0.X * __real_43b40000;
    *(float *)((longlong)&(pFVar3->OldLocation).field0_0x0 + lVar6 + 0x10) =
         (float)local_68._s_0.Y * fVar1;
    *(float *)((longlong)&(pFVar3->OldLocation).field0_0x0 + lVar6 + 0x14) = fVar7;
    fVar1 = *(float *)((longlong)&(pFVar3->Location).field0_0x0 + lVar6 + 4);
    *(float *)((longlong)&(pFVar3->Location).field0_0x0 + lVar6) =
         *(float *)((longlong)&(pFVar3->Location).field0_0x0 + lVar6) +
         *(float *)((longlong)&(pFVar3->OldLocation).field0_0x0 + lVar6 + 0xc);
    fVar7 = *(float *)((longlong)&(pFVar3->Location).field0_0x0 + lVar6 + 8);
    *(float *)((longlong)&(pFVar3->Location).field0_0x0 + lVar6 + 4) =
         fVar1 + *(float *)((longlong)&(pFVar3->OldLocation).field0_0x0 + lVar6 + 0x10);
    *(float *)((longlong)&(pFVar3->Location).field0_0x0 + lVar6 + 8) =
         fVar7 + *(float *)((longlong)&(pFVar3->OldLocation).field0_0x0 + lVar6 + 0x14);
  }
  return;
}

