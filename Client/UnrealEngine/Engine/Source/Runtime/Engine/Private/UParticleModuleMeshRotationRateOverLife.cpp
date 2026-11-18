// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147304190

UClass * __cdecl UParticleModuleMeshRotationRateOverLife::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotationRateOverLife",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshRotationRateOverLife,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshRotationRateOverLife>
               ,InternalVTableHelperCtorCaller<UParticleModuleMeshRotationRateOverLife>,local_res8,
               UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.InnerSingleton;
}

// UParticleModuleMeshRotationRateOverLife @ 14730ae50

UParticleModuleMeshRotationRateOverLife * __thiscall
UParticleModuleMeshRotationRateOverLife::UParticleModuleMeshRotationRateOverLife
          (UParticleModuleMeshRotationRateOverLife *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRateOverLife__6B_;
  (this->RotRate)._padding_ = 0;
  (this->RotRate)._padding_ = 0;
  (this->RotRate)._padding_ = 0;
  *(undefined4 *)&(this->RotRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RotRate)._padding_ + 4) = 0;
  (this->RotRate).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotRate).MaxValue = 0.0;
  (this->RotRate).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotRate).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->RotRate).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotRate).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotRate).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->RotRate).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RotRate).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleMeshRotationRateOverLife @ 14730bc70

void __thiscall
UParticleModuleMeshRotationRateOverLife::~UParticleModuleMeshRotationRateOverLife
          (UParticleModuleMeshRotationRateOverLife *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRateOverLife__6B_;
  pvVar1 = (void *)(this->RotRate)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730ec60

UClass * __cdecl UParticleModuleMeshRotationRateOverLife::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotationRateOverLife",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshRotationRateOverLife,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshRotationRateOverLife>
               ,InternalVTableHelperCtorCaller<UParticleModuleMeshRotationRateOverLife>,local_res8,
               UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleMeshRotationRateOverLife @ 14730feb0

void __cdecl
UParticleModuleMeshRotationRateOverLife::
StaticRegisterNativesUParticleModuleMeshRotationRateOverLife(void)

{
  return;
}

// TouchesMeshRotation @ 147310040

bool __thiscall
UParticleModuleMeshRotationRateOverLife::TouchesMeshRotation
          (UParticleModuleMeshRotationRateOverLife *this)

{
  return true;
}

// UParticleModuleMeshRotationRateOverLife @ 14815d700

UParticleModuleMeshRotationRateOverLife * __thiscall
UParticleModuleMeshRotationRateOverLife::UParticleModuleMeshRotationRateOverLife
          (UParticleModuleMeshRotationRateOverLife *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRateOverLife__6B_;
  (this->RotRate)._padding_ = 0;
  (this->RotRate)._padding_ = 0;
  (this->RotRate)._padding_ = 0;
  *(undefined4 *)&(this->RotRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RotRate)._padding_ + 4) = 0;
  (this->RotRate).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotRate).MaxValue = 0.0;
  (this->RotRate).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotRate).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->RotRate).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotRate).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotRate).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->RotRate).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RotRate).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  return this;
}

// InitializeDefaults @ 1481844d0

void __thiscall
UParticleModuleMeshRotationRateOverLife::InitializeDefaults
          (UParticleModuleMeshRotationRateOverLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->RotRate);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionRotRate");
    pUVar3 = NewObject<UDistributionVectorConstantCurve>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RotRate).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818abc0

void __thiscall
UParticleModuleMeshRotationRateOverLife::PostInitProperties
          (UParticleModuleMeshRotationRateOverLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstantCurve *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->RotRate);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionRotRate");
      pUVar3 = NewObject<UDistributionVectorConstantCurve>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstantCurve *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->RotRate).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148197dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleMeshRotationRateOverLife::SetToSensibleDefaults
          (UParticleModuleMeshRotationRateOverLife *this,UParticleEmitter *param_1)

{
  TObjectPtr<UDistributionVector> *this_00;
  UDistributionVector *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  TVector<double>_u_0 local_28;
  
  this_00 = &(this->RotRate).Distribution;
  if ((this_00->field0_0x0).DebugPtr != (UDistributionVector *)0x0) {
    pUVar3 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if ((bVar2) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UDistributionVector *)0x0))
    {
      FInterpCurve<UE::Math::TVector<double>_>::AddPoint
                ((FInterpCurve<UE::Math::TVector<double>_> *)(pUVar1 + 1),0.0,
                 &UE::Math::TVector<double>::ZeroVector);
      local_28._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_28._s_0.Y = _UNK_150689688;
      local_28._s_0.Z = __real_3ff0000000000000;
      FInterpCurve<UE::Math::TVector<double>_>::AddPoint
                ((FInterpCurve<UE::Math::TVector<double>_> *)(pUVar1 + 1),__real_3f800000,
                 (TVector<double> *)&local_28._s_0);
      pUVar1->bIsDirty = '\x01';
    }
  }
  return;
}

// Spawn @ 14819d210

void __thiscall
UParticleModuleMeshRotationRateOverLife::Spawn
          (UParticleModuleMeshRotationRateOverLife *this,FSpawnContext *param_1)

{
  float fVar1;
  FBaseParticle *pFVar2;
  int iVar3;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector<double> local_28;
  
  iVar3 = (**(code **)(*(longlong *)param_1->_padding_ + 0x150))();
  lVar6 = (longlong)iVar3;
  if (iVar3 != 0) {
    pFVar2 = param_1->ParticleBase;
    pUVar4 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    pTVar5 = FRawDistributionVector::GetValue
                       (&this->RotRate,&local_28,pFVar2->RelativeTime,pUVar4,0,(FRandomStream *)0x0)
    ;
    fVar9 = (float)(pTVar5->field0_0x0)._s_0.X * __real_43b40000;
    fVar7 = (float)(pTVar5->field0_0x0)._s_0.Y * __real_43b40000;
    fVar8 = (float)(pTVar5->field0_0x0)._s_0.Z * __real_43b40000;
    fVar1 = *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6);
    if (this->bScaleRotRate == 0) {
      *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6) = fVar1 + fVar9;
      fVar7 = fVar7 + *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6 + 4);
      fVar8 = fVar8 + *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6 + 8);
    }
    else {
      fVar7 = fVar7 * *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6 + 4);
      fVar8 = fVar8 * *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6 + 8);
      *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6) = fVar1 * fVar9;
    }
    *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6 + 8) = fVar8;
    *(float *)((longlong)&(pFVar2->BaseVelocity).field0_0x0 + lVar6 + 4) = fVar7;
  }
  return;
}

// Update @ 1481af500

void __thiscall
UParticleModuleMeshRotationRateOverLife::Update
          (UParticleModuleMeshRotationRateOverLife *this,FUpdateContext *param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  UObject *pUVar7;
  TVector<double> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  TVector<double> local_58 [2];
  
  iVar5 = (**(code **)(*(longlong *)param_1->_padding_ + 0x150))();
  dVar4 = __real_4076800000000000;
  lVar11 = (longlong)iVar5;
  if (iVar5 != 0) {
    lVar9 = param_1->_padding_;
    lVar1 = *(longlong *)(lVar9 + 0x168);
    iVar5 = *(int *)(lVar9 + 0x188);
    lVar2 = *(longlong *)(lVar9 + 0x170);
    iVar6 = *(int *)(lVar9 + 0x18c) + -1;
    lVar9 = (longlong)iVar6;
    if (this->bScaleRotRate == 0) {
      if (-1 < iVar6) {
        do {
          lVar10 = (ulonglong)((uint)*(ushort *)(lVar2 + lVar9 * 2) * iVar5) + lVar1;
          if ((*(uint *)(lVar10 + 0x6c) & 0x4000000) == 0) {
            pUVar7 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            pTVar8 = FRawDistributionVector::GetValue
                               (&this->RotRate,local_58,*(float *)(lVar10 + 0x90),pUVar7,0,
                                (FRandomStream *)0x0);
            dVar3 = (pTVar8->field0_0x0)._s_0.Y;
            local_58[0].field0_0x0._16_8_ = (pTVar8->field0_0x0)._s_0.Z;
            *(float *)(lVar11 + 0x30 + lVar10) =
                 (float)((pTVar8->field0_0x0)._s_0.X * dVar4) + *(float *)(lVar11 + 0x30 + lVar10);
            *(float *)(lVar11 + 0x34 + lVar10) =
                 (float)(dVar3 * dVar4) + *(float *)(lVar11 + 0x34 + lVar10);
            *(float *)(lVar11 + 0x38 + lVar10) =
                 (float)((double)local_58[0].field0_0x0._16_8_ * dVar4) +
                 *(float *)(lVar11 + 0x38 + lVar10);
          }
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
    }
    else if (-1 < iVar6) {
      do {
        lVar10 = (ulonglong)((uint)*(ushort *)(lVar2 + lVar9 * 2) * iVar5) + lVar1;
        if ((*(uint *)(lVar10 + 0x6c) & 0x4000000) == 0) {
          pUVar7 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          pTVar8 = FRawDistributionVector::GetValue
                             (&this->RotRate,local_58,*(float *)(lVar10 + 0x90),pUVar7,0,
                              (FRandomStream *)0x0);
          dVar3 = (pTVar8->field0_0x0)._s_0.Y;
          local_58[0].field0_0x0._16_8_ = (pTVar8->field0_0x0)._s_0.Z;
          *(float *)(lVar11 + 0x30 + lVar10) =
               (float)((pTVar8->field0_0x0)._s_0.X * dVar4) * *(float *)(lVar11 + 0x30 + lVar10);
          *(float *)(lVar11 + 0x34 + lVar10) =
               (float)(dVar3 * dVar4) * *(float *)(lVar11 + 0x34 + lVar10);
          *(float *)(lVar11 + 0x38 + lVar10) =
               (float)((double)local_58[0].field0_0x0._16_8_ * dVar4) *
               *(float *)(lVar11 + 0x38 + lVar10);
        }
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
  }
  return;
}

