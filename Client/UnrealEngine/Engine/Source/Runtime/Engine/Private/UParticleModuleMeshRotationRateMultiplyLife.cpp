// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147304090

UClass * __cdecl UParticleModuleMeshRotationRateMultiplyLife::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotationRateMultiplyLife",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.
                InnerSingleton,StaticRegisterNativesUParticleModuleMeshRotationRateMultiplyLife,0x90
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleMeshRotationRateMultiplyLife>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshRotationRateMultiplyLife>,
               local_res8,UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.InnerSingleton;
}

// UParticleModuleMeshRotationRateMultiplyLife @ 14730add0

UParticleModuleMeshRotationRateMultiplyLife * __thiscall
UParticleModuleMeshRotationRateMultiplyLife::UParticleModuleMeshRotationRateMultiplyLife
          (UParticleModuleMeshRotationRateMultiplyLife *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRateMultiplyLife__6B_;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  *(undefined4 *)&(this->LifeMultiplier)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LifeMultiplier)._padding_ + 4) = 0;
  (this->LifeMultiplier).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LifeMultiplier).MaxValue = 0.0;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleMeshRotationRateMultiplyLife @ 14730bc30

void __thiscall
UParticleModuleMeshRotationRateMultiplyLife::~UParticleModuleMeshRotationRateMultiplyLife
          (UParticleModuleMeshRotationRateMultiplyLife *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRateMultiplyLife__6B_;
  pvVar1 = (void *)(this->LifeMultiplier)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730eba0

UClass * __cdecl UParticleModuleMeshRotationRateMultiplyLife::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotationRateMultiplyLife",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.
                InnerSingleton,StaticRegisterNativesUParticleModuleMeshRotationRateMultiplyLife,0x90
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleMeshRotationRateMultiplyLife>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshRotationRateMultiplyLife>,
               local_res8,UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotationRateMultiplyLife.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleMeshRotationRateMultiplyLife @ 14730fea0

void __cdecl
UParticleModuleMeshRotationRateMultiplyLife::
StaticRegisterNativesUParticleModuleMeshRotationRateMultiplyLife(void)

{
  return;
}

// UParticleModuleMeshRotationRateMultiplyLife @ 14815d660

UParticleModuleMeshRotationRateMultiplyLife * __thiscall
UParticleModuleMeshRotationRateMultiplyLife::UParticleModuleMeshRotationRateMultiplyLife
          (UParticleModuleMeshRotationRateMultiplyLife *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRateMultiplyLife__6B_;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  *(undefined4 *)&(this->LifeMultiplier)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LifeMultiplier)._padding_ + 4) = 0;
  (this->LifeMultiplier).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LifeMultiplier).MaxValue = 0.0;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LifeMultiplier).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LifeMultiplier).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  return this;
}

// InitializeDefaults @ 148184450

void __thiscall
UParticleModuleMeshRotationRateMultiplyLife::InitializeDefaults
          (UParticleModuleMeshRotationRateMultiplyLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->LifeMultiplier);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionLifeMultiplier");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818ab30

void __thiscall
UParticleModuleMeshRotationRateMultiplyLife::PostInitProperties
          (UParticleModuleMeshRotationRateMultiplyLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->LifeMultiplier);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionLifeMultiplier");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148197d60

void __thiscall
UParticleModuleMeshRotationRateMultiplyLife::SetToSensibleDefaults
          (UParticleModuleMeshRotationRateMultiplyLife *this,UParticleEmitter *param_1)

{
  TObjectPtr<UDistributionVector> *this_00;
  UDistributionVector *pUVar1;
  undefined8 uVar2;
  bool bVar3;
  UClass *pUVar4;
  
  this_00 = &(this->LifeMultiplier).Distribution;
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

// Spawn @ 14819d150

void __thiscall
UParticleModuleMeshRotationRateMultiplyLife::Spawn
          (UParticleModuleMeshRotationRateMultiplyLife *this,FSpawnContext *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FBaseParticle *pFVar5;
  int iVar6;
  UObject *pUVar7;
  TVector<double> *pTVar8;
  longlong lVar9;
  TVector<double> local_28;
  
  iVar6 = (**(code **)(*(longlong *)param_1->_padding_ + 0x150))();
  lVar9 = (longlong)iVar6;
  if (iVar6 != 0) {
    pFVar5 = param_1->ParticleBase;
    pUVar7 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    pTVar8 = FRawDistributionVector::GetValue
                       (&this->LifeMultiplier,&local_28,pFVar5->RelativeTime,pUVar7,0,
                        (FRandomStream *)0x0);
    dVar3 = (pTVar8->field0_0x0)._s_0.Z;
    dVar4 = (pTVar8->field0_0x0)._s_0.X;
    fVar1 = *(float *)((longlong)&(pFVar5->BaseVelocity).field0_0x0 + lVar9 + 8);
    *(float *)((longlong)&(pFVar5->BaseVelocity).field0_0x0 + lVar9 + 4) =
         (float)(pTVar8->field0_0x0)._s_0.Y *
         *(float *)((longlong)&(pFVar5->BaseVelocity).field0_0x0 + lVar9 + 4);
    fVar2 = *(float *)((longlong)&(pFVar5->BaseVelocity).field0_0x0 + lVar9);
    *(float *)((longlong)&(pFVar5->BaseVelocity).field0_0x0 + lVar9 + 8) = (float)dVar3 * fVar1;
    *(float *)((longlong)&(pFVar5->BaseVelocity).field0_0x0 + lVar9) = (float)dVar4 * fVar2;
  }
  return;
}

// Update @ 1481af3b0

void __thiscall
UParticleModuleMeshRotationRateMultiplyLife::Update
          (UParticleModuleMeshRotationRateMultiplyLife *this,FUpdateContext *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  UObject *pUVar7;
  TVector<double> *pTVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  TVector<double> local_48;
  
  iVar6 = (**(code **)(*(longlong *)param_1->_padding_ + 0x150))();
  if (iVar6 != 0) {
    lVar10 = param_1->_padding_;
    lVar4 = *(longlong *)(lVar10 + 0x168);
    iVar3 = *(int *)(lVar10 + 0x188);
    lVar5 = *(longlong *)(lVar10 + 0x170);
    iVar9 = *(int *)(lVar10 + 0x18c) + -1;
    lVar10 = (longlong)iVar9;
    if (-1 < iVar9) {
      lVar11 = (longlong)iVar6;
      do {
        lVar12 = (ulonglong)((uint)*(ushort *)(lVar5 + lVar10 * 2) * iVar3) + lVar4;
        if ((*(uint *)(lVar12 + 0x6c) & 0x4000000) == 0) {
          pUVar7 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          pTVar8 = FRawDistributionVector::GetValue
                             (&this->LifeMultiplier,&local_48,*(float *)(lVar12 + 0x90),pUVar7,0,
                              (FRandomStream *)0x0);
          dVar1 = (pTVar8->field0_0x0)._s_0.Z;
          dVar2 = (pTVar8->field0_0x0)._s_0.X;
          *(float *)(lVar11 + 0x34 + lVar12) =
               (float)(pTVar8->field0_0x0)._s_0.Y * *(float *)(lVar11 + 0x34 + lVar12);
          *(float *)(lVar11 + 0x38 + lVar12) = (float)dVar1 * *(float *)(lVar11 + 0x38 + lVar12);
          *(float *)(lVar11 + 0x30 + lVar12) = (float)dVar2 * *(float *)(lVar11 + 0x30 + lVar12);
        }
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
  }
  return;
}

