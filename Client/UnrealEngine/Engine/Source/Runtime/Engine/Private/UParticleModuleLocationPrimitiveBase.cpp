// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147305930

UClass * __cdecl UParticleModuleLocationPrimitiveBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveBase",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationPrimitiveBase,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationPrimitiveBase>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveBase>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.InnerSingleton;
}

// UParticleModuleLocationPrimitiveBase @ 14730a7c0

UParticleModuleLocationPrimitiveBase * __thiscall
UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
          (UParticleModuleLocationPrimitiveBase *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveBase__6B_;
  (this->VelocityScale)._padding_ = 0;
  (this->VelocityScale)._padding_ = 0;
  (this->VelocityScale)._padding_ = 0;
  *(undefined4 *)&(this->VelocityScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->VelocityScale)._padding_ + 4) = 0;
  (this->VelocityScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StartLocation)._padding_ = 0;
  (this->StartLocation)._padding_ = 0;
  (this->StartLocation)._padding_ = 0;
  *(undefined4 *)&(this->StartLocation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartLocation)._padding_ + 4) = 0;
  (this->VelocityScale).MinValue = 0.0;
  (this->VelocityScale).MaxValue = 0.0;
  (this->StartLocation).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).MaxValue = 0.0;
  (this->StartLocation).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartLocation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleLocationPrimitiveBase @ 14730b7c0

void __thiscall
UParticleModuleLocationPrimitiveBase::~UParticleModuleLocationPrimitiveBase
          (UParticleModuleLocationPrimitiveBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveBase__6B_;
  pvVar1 = (void *)(this->StartLocation)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->VelocityScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730e120

UClass * __cdecl UParticleModuleLocationPrimitiveBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveBase",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationPrimitiveBase,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationPrimitiveBase>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveBase>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationPrimitiveBase @ 14730fdc0

void __cdecl
UParticleModuleLocationPrimitiveBase::StaticRegisterNativesUParticleModuleLocationPrimitiveBase
          (void)

{
  return;
}

// UParticleModuleLocationPrimitiveBase @ 14815ce60

UParticleModuleLocationPrimitiveBase * __thiscall
UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
          (UParticleModuleLocationPrimitiveBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveBase__6B_;
  (this->VelocityScale)._padding_ = 0;
  (this->VelocityScale)._padding_ = 0;
  (this->VelocityScale)._padding_ = 0;
  *(undefined4 *)&(this->VelocityScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->VelocityScale)._padding_ + 4) = 0;
  (this->VelocityScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->StartLocation)._padding_ = 0;
  (this->StartLocation)._padding_ = 0;
  (this->StartLocation)._padding_ = 0;
  *(undefined4 *)&(this->StartLocation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartLocation)._padding_ + 4) = 0;
  (this->VelocityScale).MinValue = 0.0;
  (this->VelocityScale).MaxValue = 0.0;
  (this->StartLocation).MinValue = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).MaxValue = 0.0;
  (this->StartLocation).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).MinValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->StartLocation).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).MaxValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->StartLocation).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartLocation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  puVar2 = &this->field_0x30;
  this->Positive_X = 1;
  this->Velocity = 0;
  this->SurfaceOnly = 0;
  this->Negative_Z = 1;
  this->Negative_Y = 1;
  this->Negative_X = 1;
  this->Positive_Z = 1;
  this->Positive_Y = 1;
  return this;
}

// DetermineUnitDirection @ 148170840

void __thiscall
UParticleModuleLocationPrimitiveBase::DetermineUnitDirection
          (UParticleModuleLocationPrimitiveBase *this,FParticleEmitterInstance *param_1,
          TVector<double> *param_2,FRandomStream *param_3)

{
  undefined1 *puVar1;
  double dVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  fVar3 = __real_3f800000;
  dVar2 = __real_3ff0000000000000;
  uVar5 = param_3->Seed * 0xbb38435 + 0x3619636b;
  uVar4 = uVar5 * 0xbb38435 + 0x3619636b;
  dVar8 = (double)((float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000);
  fVar6 = (float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000;
  uVar4 = uVar4 * 0xbb38435 + 0x3619636b;
  param_3->Seed = uVar4;
  dVar7 = (double)fVar6;
  dVar9 = (double)((float)(uVar4 >> 9 | 0x3f800000) - fVar3);
  uVar4 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (this->Positive_X == 0) {
    if (this->Negative_X == 0) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar5,SUB84(dVar8,0) ^ uVar4);
    }
  }
  else if (this->Negative_X != 0) {
    dVar8 = (dVar8 + dVar8) - dVar2;
  }
  (param_2->field0_0x0)._s_0.X = dVar8;
  if (this->Positive_Y == 0) {
    if (this->Negative_Y == 0) {
      dVar7 = 0.0;
    }
    else {
      dVar7 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar5,SUB84(dVar7,0) ^ uVar4);
    }
  }
  else if (this->Negative_Y != 0) {
    dVar7 = (dVar7 + dVar7) - dVar2;
  }
  (param_2->field0_0x0)._s_0.Y = dVar7;
  if (this->Positive_Z == 0) {
    if (this->Negative_Z == 0) {
      (param_2->field0_0x0)._s_0.Z = 0.0;
      return;
    }
    dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar5,SUB84(dVar9,0) ^ uVar4);
  }
  else if (this->Negative_Z != 0) {
    (param_2->field0_0x0)._s_0.Z = (dVar9 + dVar9) - dVar2;
    return;
  }
  (param_2->field0_0x0)._s_0.Z = dVar9;
  return;
}

// InitializeDefaults @ 148183eb0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleLocationPrimitiveBase::InitializeDefaults(UParticleModuleLocationPrimitiveBase *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  UDistributionVectorConstant *pUVar4;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->VelocityScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionVelocityScale");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VelocityScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->StartLocation);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartLocation");
    pUVar4 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar4->Constant).field0_0x0._s_0.X = 0.0;
    (pUVar4->Constant).field0_0x0._s_0.Y = 0.0;
    (pUVar4->Constant).field0_0x0._s_0.Z = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->StartLocation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar4;
  }
  return;
}

// PostInitProperties @ 14818a4f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleLocationPrimitiveBase::PostInitProperties(UParticleModuleLocationPrimitiveBase *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  UDistributionVectorConstant *pUVar4;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->VelocityScale);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionVelocityScale");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->VelocityScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionVector::IsCreated(&this->StartLocation);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartLocation");
      pUVar4 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar4->Constant).field0_0x0._s_0.X = 0.0;
      (pUVar4->Constant).field0_0x0._s_0.Y = 0.0;
      (pUVar4->Constant).field0_0x0._s_0.Z = 0.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->StartLocation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar4;
    }
  }
  return;
}

