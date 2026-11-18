// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147312a60

UClass * __cdecl UParticleModuleSizeScale::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSizeScale.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSizeScale",
               &Z_Registration_Info_UClass_UParticleModuleSizeScale.InnerSingleton,
               StaticRegisterNativesUParticleModuleSizeScale,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSizeScale>,
               InternalVTableHelperCtorCaller<UParticleModuleSizeScale>,local_res8,
               UParticleModuleSizeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSizeScale.InnerSingleton;
}

// UParticleModuleSizeScale @ 1473188d0

UParticleModuleSizeScale * __thiscall
UParticleModuleSizeScale::UParticleModuleSizeScale
          (UParticleModuleSizeScale *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSizeScale__6B_;
  (this->SizeScale)._padding_ = 0;
  (this->SizeScale)._padding_ = 0;
  (this->SizeScale)._padding_ = 0;
  *(undefined4 *)&(this->SizeScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SizeScale)._padding_ + 4) = 0;
  (this->SizeScale).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SizeScale).MaxValue = 0.0;
  (this->SizeScale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SizeScale).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SizeScale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SizeScale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SizeScale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SizeScale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SizeScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleSizeScale @ 147319520

void __thiscall UParticleModuleSizeScale::~UParticleModuleSizeScale(UParticleModuleSizeScale *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleSizeScale__6B_;
  pvVar1 = (void *)(this->SizeScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleSizeBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731b530

UClass * __cdecl UParticleModuleSizeScale::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSizeScale.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSizeScale",
               &Z_Registration_Info_UClass_UParticleModuleSizeScale.InnerSingleton,
               StaticRegisterNativesUParticleModuleSizeScale,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSizeScale>,
               InternalVTableHelperCtorCaller<UParticleModuleSizeScale>,local_res8,
               UParticleModuleSizeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSizeScale.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSizeScale @ 14731cf60

void __cdecl UParticleModuleSizeScale::StaticRegisterNativesUParticleModuleSizeScale(void)

{
  return;
}

// UParticleModuleSizeScale @ 14815e2a0

UParticleModuleSizeScale * __thiscall
UParticleModuleSizeScale::UParticleModuleSizeScale
          (UParticleModuleSizeScale *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleSizeScale__6B_;
  (this->SizeScale)._padding_ = 0;
  (this->SizeScale)._padding_ = 0;
  (this->SizeScale)._padding_ = 0;
  *(undefined4 *)&(this->SizeScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SizeScale)._padding_ + 4) = 0;
  (this->SizeScale).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SizeScale).MaxValue = 0.0;
  (this->SizeScale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SizeScale).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->SizeScale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SizeScale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SizeScale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->SizeScale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SizeScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->EnableX = 1;
  this->EnableZ = 1;
  this->EnableY = 1;
  return this;
}

// CompileModule @ 148169f90

void __thiscall
UParticleModuleSizeScale::CompileModule
          (UParticleModuleSizeScale *this,FParticleEmitterBuildInfo *param_1)

{
  FComposableVectorDistribution::Initialize
            (&param_1->SizeScale,(this->SizeScale).Distribution.field0_0x0.DebugPtr);
  return;
}

// InitializeDefaults @ 148184c30

void __thiscall UParticleModuleSizeScale::InitializeDefaults(UParticleModuleSizeScale *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->SizeScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionSizeScale");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SizeScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b860

void __thiscall UParticleModuleSizeScale::PostInitProperties(UParticleModuleSizeScale *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->SizeScale);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionSizeScale");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->SizeScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148198130

void __thiscall
UParticleModuleSizeScale::SetToSensibleDefaults
          (UParticleModuleSizeScale *this,UParticleEmitter *param_1)

{
  TObjectPtr<UDistributionVector> *this_00;
  UDistributionVector *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  
  this_00 = &(this->SizeScale).Distribution;
  if ((this_00->field0_0x0).DebugPtr != (UDistributionVector *)0x0) {
    pUVar3 = Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if ((bVar2) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UDistributionVector *)0x0))
    {
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1->bIsDirty = '\x01';
    }
  }
  return;
}

// Spawn @ 14819d980

void __thiscall
UParticleModuleSizeScale::Spawn(UParticleModuleSizeScale *this,FSpawnContext *param_1)

{
  double dVar1;
  double dVar2;
  FBaseParticle *pFVar3;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  float fVar6;
  float fVar7;
  TVector<double> local_28;
  
  pFVar3 = param_1->ParticleBase;
  pUVar4 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  pTVar5 = FRawDistributionVector::GetValue
                     (&this->SizeScale,&local_28,pFVar3->RelativeTime,pUVar4,0,(FRandomStream *)0x0)
  ;
  fVar7 = (float)((uint)(pFVar3->BaseSize).field0_0x0._s_0.Y &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  fVar6 = (float)((uint)(pFVar3->BaseSize).field0_0x0._s_0.Z &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  dVar2 = (pTVar5->field0_0x0)._s_0.Z;
  (pFVar3->Size).field0_0x0._s_0.X =
       (float)((uint)(pFVar3->BaseSize).field0_0x0._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff)
       * (float)(pTVar5->field0_0x0)._s_0.X;
  (pFVar3->Size).field0_0x0._s_0.Y = fVar7 * (float)dVar1;
  (pFVar3->Size).field0_0x0._s_0.Z = fVar6 * (float)dVar2;
  return;
}

// Update @ 1481b1340

void __thiscall
UParticleModuleSizeScale::Update(UParticleModuleSizeScale *this,FUpdateContext *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  longlong lVar11;
  ulonglong uVar12;
  TVector<double> local_58 [2];
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  lVar11 = param_1->_padding_;
  lVar4 = *(longlong *)(lVar11 + 0x168);
  iVar3 = *(int *)(lVar11 + 0x188);
  lVar5 = *(longlong *)(lVar11 + 0x170);
  iVar7 = *(int *)(lVar11 + 0x18c) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      uVar8 = (uint)*(ushort *)(lVar5 + lVar11 * 2) * iVar3;
      uVar12 = (ulonglong)uVar8;
      if ((*(uint *)((ulonglong)uVar8 + 0x6c + lVar4) & 0x4000000) == 0) {
        pUVar9 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
        pTVar10 = FRawDistributionVector::GetValue
                            (&this->SizeScale,local_58,*(float *)(uVar12 + 0x90 + lVar4),pUVar9,0,
                             (FRandomStream *)0x0);
        dVar1 = (pTVar10->field0_0x0)._s_0.Y;
        dVar2 = (pTVar10->field0_0x0)._s_0.Z;
        *(float *)(uVar12 + 0x60 + lVar4) =
             (float)(*(uint *)(uVar12 + 0x50 + lVar4) & uVar6) * (float)(pTVar10->field0_0x0)._s_0.X
        ;
        *(float *)(uVar12 + 100 + lVar4) =
             (float)dVar1 * (float)(*(uint *)(uVar12 + 0x54 + lVar4) & uVar6);
        *(float *)(uVar12 + 0x68 + lVar4) =
             (float)dVar2 * (float)(*(uint *)(uVar12 + 0x58 + lVar4) & uVar6);
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  return;
}

