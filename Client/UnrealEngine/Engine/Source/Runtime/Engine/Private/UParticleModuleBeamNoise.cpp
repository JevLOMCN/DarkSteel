// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 1472f8640

UClass * __cdecl UParticleModuleBeamNoise::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamNoise",
               &Z_Registration_Info_UClass_UParticleModuleBeamNoise.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamNoise,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleBeamNoise>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamNoise>,local_res8,
               UParticleModuleBeamBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamNoise.InnerSingleton;
}

// UParticleModuleBeamNoise @ 1472fc7f0

UParticleModuleBeamNoise * __thiscall
UParticleModuleBeamNoise::UParticleModuleBeamNoise
          (UParticleModuleBeamNoise *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleBeamNoise__6B_;
  (this->NoiseRange)._padding_ = 0;
  (this->NoiseRange)._padding_ = 0;
  *(undefined4 *)&(this->NoiseRange)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseRange)._padding_ + 4) = 0;
  (this->NoiseRange)._padding_ = 0;
  (this->NoiseRange).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NoiseRange).MaxValue = 0.0;
  (this->NoiseRange).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NoiseRange).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->NoiseRange).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NoiseRange).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NoiseRange).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->NoiseRange).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->NoiseRange).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->NoiseRangeScale)._padding_ = 0;
  (this->NoiseRangeScale)._padding_ = 0;
  *(undefined4 *)&(this->NoiseRangeScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseRangeScale)._padding_ + 4) = 0;
  (this->NoiseSpeed)._padding_ = 0;
  (this->NoiseSpeed)._padding_ = 0;
  *(undefined4 *)&(this->NoiseSpeed)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseSpeed)._padding_ + 4) = 0;
  (this->NoiseRangeScale)._padding_ = 0;
  (this->NoiseRangeScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->NoiseSpeed)._padding_ = 0;
  (this->NoiseSpeed).MinValue = 0.0;
  (this->NoiseSpeed).MaxValue = 0.0;
  (this->NoiseRangeScale).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NoiseRangeScale).MaxValue = 0.0;
  (this->NoiseSpeed).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NoiseSpeed).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->NoiseSpeed).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NoiseSpeed).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NoiseSpeed).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->NoiseSpeed).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->NoiseSpeed).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->NoiseTangentStrength)._padding_ = 0;
  (this->NoiseTangentStrength)._padding_ = 0;
  (this->NoiseTangentStrength)._padding_ = 0;
  *(undefined4 *)&(this->NoiseTangentStrength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseTangentStrength)._padding_ + 4) = 0;
  (this->NoiseTangentStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->NoiseScale)._padding_ = 0;
  (this->NoiseScale)._padding_ = 0;
  (this->NoiseScale)._padding_ = 0;
  *(undefined4 *)&(this->NoiseScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseScale)._padding_ + 4) = 0;
  (this->NoiseScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->NoiseTangentStrength).MinValue = 0.0;
  (this->NoiseTangentStrength).MaxValue = 0.0;
  (this->NoiseScale).MinValue = 0.0;
  (this->NoiseScale).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleBeamNoise @ 1472fd960

void __thiscall UParticleModuleBeamNoise::~UParticleModuleBeamNoise(UParticleModuleBeamNoise *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleBeamNoise__6B_;
  pvVar1 = (void *)(this->NoiseScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->NoiseTangentStrength)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->NoiseSpeed)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->NoiseRangeScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->NoiseRange)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300300

UClass * __cdecl UParticleModuleBeamNoise::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamNoise",
               &Z_Registration_Info_UClass_UParticleModuleBeamNoise.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamNoise,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleBeamNoise>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamNoise>,local_res8,
               UParticleModuleBeamBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamNoise.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleBeamNoise @ 1473017e0

void __cdecl UParticleModuleBeamNoise::StaticRegisterNativesUParticleModuleBeamNoise(void)

{
  return;
}

// __VTableCtorCaller @ 147303810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UParticleModuleBeamNoise::__VTableCtorCaller(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    *(undefined ***)pUVar2 = &___7UParticleModuleBeamNoise__6B_;
    *(undefined8 *)&pUVar2[1].field_0x18 = 0;
    *(undefined8 *)(pUVar2 + 2) = 0;
    *(undefined4 *)&pUVar2[2].field_0x8 = 0;
    pUVar2[2].field_0xc = 0;
    *(undefined8 *)&pUVar2[1].field_0x20 = 0;
    *(undefined8 *)&pUVar2[2].field_0x10 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[2].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[2].field_0x20 = uVar1;
    *(double *)(pUVar2 + 3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[3].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[3].field_0x10 = uVar1;
    *(double *)&pUVar2[3].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&pUVar2[3].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 4) = 0;
    *(undefined8 *)&pUVar2[4].field_0x10 = 0;
    *(undefined4 *)&pUVar2[4].field_0x18 = 0;
    pUVar2[4].field_0x1c = 0;
    *(undefined8 *)&pUVar2[5].field_0x10 = 0;
    *(undefined8 *)&pUVar2[5].field_0x20 = 0;
    *(undefined4 *)(pUVar2 + 6) = 0;
    pUVar2[6].field_0x4 = 0;
    *(undefined8 *)&pUVar2[4].field_0x8 = 0;
    *(undefined8 *)(pUVar2 + 5) = 0;
    *(undefined8 *)&pUVar2[5].field_0x18 = 0;
    *(undefined8 *)&pUVar2[6].field_0x8 = 0;
    *(undefined8 *)&pUVar2[4].field_0x20 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[6].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[6].field_0x18 = uVar1;
    *(double *)&pUVar2[6].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(pUVar2 + 7) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[7].field_0x8 = uVar1;
    *(double *)&pUVar2[7].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&pUVar2[7].field_0x18 = 0;
    *(undefined8 *)&pUVar2[8].field_0x10 = 0;
    *(undefined8 *)&pUVar2[8].field_0x18 = 0;
    *(undefined8 *)&pUVar2[8].field_0x20 = 0;
    *(undefined4 *)(pUVar2 + 9) = 0;
    pUVar2[9].field_0x4 = 0;
    *(undefined8 *)&pUVar2[9].field_0x10 = 0;
    *(undefined8 *)(pUVar2 + 10) = 0;
    *(undefined8 *)&pUVar2[10].field_0x8 = 0;
    *(undefined8 *)&pUVar2[10].field_0x10 = 0;
    *(undefined4 *)&pUVar2[10].field_0x18 = 0;
    pUVar2[10].field_0x1c = 0;
    *(undefined8 *)(pUVar2 + 0xb) = 0;
    *(undefined8 *)&pUVar2[9].field_0x8 = 0;
    *(undefined8 *)&pUVar2[10].field_0x20 = 0;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// UParticleModuleBeamNoise @ 1480f5450

UParticleModuleBeamNoise * __thiscall
UParticleModuleBeamNoise::UParticleModuleBeamNoise
          (UParticleModuleBeamNoise *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  this->_padding_ = (longlong)&___7UParticleModuleBeamNoise__6B_;
  (this->NoiseRange)._padding_ = 0;
  (this->NoiseRange)._padding_ = 0;
  *(undefined4 *)&(this->NoiseRange)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseRange)._padding_ + 4) = 0;
  (this->NoiseRange)._padding_ = 0;
  (this->NoiseRange).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NoiseRange).MaxValue = 0.0;
  (this->NoiseRange).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NoiseRange).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->NoiseRange).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NoiseRange).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NoiseRange).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->NoiseRange).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->NoiseRange).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->NoiseRangeScale)._padding_ = 0;
  (this->NoiseRangeScale)._padding_ = 0;
  *(undefined4 *)&(this->NoiseRangeScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseRangeScale)._padding_ + 4) = 0;
  (this->NoiseSpeed)._padding_ = 0;
  (this->NoiseSpeed)._padding_ = 0;
  *(undefined4 *)&(this->NoiseSpeed)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseSpeed)._padding_ + 4) = 0;
  (this->NoiseRangeScale)._padding_ = 0;
  (this->NoiseRangeScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->NoiseSpeed)._padding_ = 0;
  (this->NoiseSpeed).MinValue = 0.0;
  (this->NoiseSpeed).MaxValue = 0.0;
  (this->NoiseRangeScale).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NoiseRangeScale).MaxValue = 0.0;
  (this->NoiseSpeed).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NoiseSpeed).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->NoiseSpeed).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NoiseSpeed).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NoiseSpeed).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->NoiseSpeed).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->NoiseSpeed).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  this->bSmooth = 0;
  this->bNoiseLock = 0;
  this->bOscillate = 0;
  this->bTargetNoise = 0;
  (this->NoiseTangentStrength)._padding_ = 0;
  (this->NoiseTangentStrength)._padding_ = 0;
  (this->NoiseTangentStrength)._padding_ = 0;
  *(undefined4 *)&(this->NoiseTangentStrength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseTangentStrength)._padding_ + 4) = 0;
  (this->NoiseTangentStrength).MinValue = 0.0;
  (this->NoiseTangentStrength).MaxValue = 0.0;
  (this->NoiseTangentStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->NoiseScale)._padding_ = 0;
  (this->NoiseScale)._padding_ = 0;
  (this->NoiseScale)._padding_ = 0;
  *(undefined4 *)&(this->NoiseScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->NoiseScale)._padding_ + 4) = 0;
  (this->NoiseScale).MinValue = 0.0;
  (this->NoiseScale).MaxValue = 0.0;
  (this->NoiseScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  this->Frequency = 0;
  this->NoiseLockTime = 0.0;
  this->NoiseLockRadius = 1.0;
  this->NoiseTension = 0.5;
  this->NoiseTessellation = 1;
  return this;
}

// GetNoiseRange @ 1481169f0

void __thiscall
UParticleModuleBeamNoise::GetNoiseRange
          (UParticleModuleBeamNoise *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  float local_res8 [2];
  float local_res10 [2];
  
  FRawDistributionVector::GetOutRange(&this->NoiseRange,local_res8,local_res10);
  dVar2 = (double)local_res8[0];
  dVar4 = (double)local_res10[0];
  *(double *)&param_1->field0_0x0 = dVar2;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_1->field0_0x0 + 8) = auVar1;
  *(double *)&param_2->field0_0x0 = dVar4;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_2->field0_0x0 + 8) = auVar3;
  return;
}

// InitializeDefaults @ 148121850

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleBeamNoise::InitializeDefaults(UParticleModuleBeamNoise *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  UDistributionFloatConstantCurve *pUVar5;
  FName local_res8;
  FName local_res10;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->NoiseSpeed);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionNoiseSpeed");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Constant).field0_0x0._s_0.X = 50.0;
    (pUVar3->Constant).field0_0x0._s_0.Y = 50.0;
    (pUVar3->Constant).field0_0x0._s_0.Z = 50.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->NoiseSpeed).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->NoiseRange);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res10,L"DistributionNoiseRange");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Constant).field0_0x0._s_0.X = 50.0;
    (pUVar3->Constant).field0_0x0._s_0.Y = 50.0;
    (pUVar3->Constant).field0_0x0._s_0.Z = 50.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->NoiseRange).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->NoiseRangeScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionNoiseRangeScale");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar4->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->NoiseRangeScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->NoiseTangentStrength);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionNoiseTangentStrength");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar4->Constant = 250.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->NoiseTangentStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->NoiseScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionNoiseScale");
    pUVar5 = NewObject<UDistributionFloatConstantCurve>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDistributionFloatConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->NoiseScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
  }
  return;
}

// PostInitProperties @ 1481259e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleBeamNoise::PostInitProperties(UParticleModuleBeamNoise *this)

{
  FName *pFVar1;
  UDistributionVectorConstant *pUVar2;
  UDistributionFloatConstant *pUVar3;
  UDistributionFloatConstantCurve *pUVar4;
  FName local_res8;
  FName local_res10;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    pFVar1 = ::FName::FName(&local_res8,L"DistributionNoiseSpeed");
    pUVar2 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar2->Constant).field0_0x0._s_0.X = 50.0;
    (pUVar2->Constant).field0_0x0._s_0.Y = 50.0;
    (pUVar2->Constant).field0_0x0._s_0.Z = 50.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->NoiseSpeed).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar2;
    pFVar1 = ::FName::FName(&local_res10,L"DistributionNoiseRange");
    pUVar2 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar2->Constant).field0_0x0._s_0.X = 50.0;
    (pUVar2->Constant).field0_0x0._s_0.Y = 50.0;
    (pUVar2->Constant).field0_0x0._s_0.Z = 50.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->NoiseRange).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar2;
    pFVar1 = ::FName::FName(&local_res8,L"DistributionNoiseRangeScale");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->NoiseRangeScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    pFVar1 = ::FName::FName(&local_res8,L"DistributionNoiseTangentStrength");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 250.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->NoiseTangentStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    pFVar1 = ::FName::FName(&local_res8,L"DistributionNoiseScale");
    pUVar4 = NewObject<UDistributionFloatConstantCurve>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionFloatConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->NoiseScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// SetToSensibleDefaults @ 148131170

void __thiscall
UParticleModuleBeamNoise::SetToSensibleDefaults
          (UParticleModuleBeamNoise *this,UParticleEmitter *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)&this->field_0x140 | 1;
  if (0.0 <= this->NoiseLockTime) {
    uVar1 = *(uint *)&this->field_0x140 & 0xfffffffe;
  }
  *(uint *)&this->field_0x140 = uVar1;
  return;
}

// Spawn @ 1481351b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleBeamNoise::Spawn(UParticleModuleBeamNoise *this,FSpawnContext *param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  bool bVar7;
  FRandomStream *pFVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  undefined4 local_res8 [2];
  longlong local_res18;
  longlong local_res20;
  longlong local_c8 [8];
  TVector<double> local_88;
  TVector<double> local_70 [2];
  
  if ((((this->bLowFreq_Enabled != 0) && (lVar14 = param_1->_padding_, lVar14 != 0)) &&
      (this->Frequency != 0)) && ((*(byte *)(lVar14 + 0x161) & 1) != 0)) {
    plVar3 = *(longlong **)(lVar14 + 0x280);
    pFVar8 = UParticleModule::GetRandomStream((UParticleModule *)this,(FContext *)param_1);
    local_c8[0] = 0;
    local_c8[7] = 0;
    local_c8[6] = 0;
    local_c8[5] = 0;
    local_res18 = 0;
    local_res20 = 0;
    local_c8[4] = 0;
    local_c8[3] = 0;
    local_c8[2] = 0;
    local_c8[1] = 0;
    local_res8[0] = *(undefined4 *)(lVar14 + 0x24);
    (**(code **)(*plVar3 + 0x3f0))
              (plVar3,lVar14,param_1->ParticleBase,local_res8,local_c8,local_c8 + 7,local_c8 + 6,
               local_c8 + 5,&local_res18,&local_res20,local_c8 + 4,local_c8 + 3,local_c8 + 2,
               local_c8 + 1);
    if ((local_res18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TargetNoisePoints",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                           ,0x586,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->bSmooth != 0) && (local_res20 == 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextNoisePoints",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                           ,0x58a,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar6 = __real_3f800000;
    iVar15 = this->Frequency;
    if (0 < this->Frequency_LowRange) {
      uVar11 = pFVar8->Seed * 0xbb38435 + 0x3619636b;
      pFVar8->Seed = uVar11;
      iVar15 = (int)((float)(this->Frequency - this->Frequency_LowRange) *
                     ((float)(uVar11 >> 9 | 0x3f800000) - fVar6) + (float)this->Frequency_LowRange);
    }
    iVar13 = 0;
    iVar12 = -1;
    iVar16 = iVar15 + 1;
    *(uint *)(local_c8[0] + 0x6c) = *(uint *)(local_c8[0] + 0x6c) & 0xff000fff | iVar15 << 0xc;
    cVar2 = *(char *)((longlong)&(this->NoiseRange)._padding_ + 3);
    if (0 < iVar16) {
      lVar14 = 0;
      do {
        if ((cVar2 == '\0') || (this->bOscillate == 0)) {
          iVar12 = 0;
        }
        else {
          iVar12 = -iVar12;
        }
        fVar17 = (float)iVar13 * (fVar6 / (float)iVar16);
        pUVar9 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
        pTVar10 = FRawDistributionVector::GetValue
                            (&this->NoiseRange,&local_88,fVar17,pUVar9,iVar12,(FRandomStream *)0x0);
        dVar5 = (pTVar10->field0_0x0)._s_0.Y;
        dVar1 = (pTVar10->field0_0x0)._s_0.Z;
        *(double *)(lVar14 + local_res18) = (pTVar10->field0_0x0)._s_0.X;
        ((double *)(lVar14 + local_res18))[1] = dVar5;
        *(double *)(lVar14 + 0x10 + local_res18) = dVar1;
        if (this->bSmooth != 0) {
          iVar12 = -iVar12;
          pUVar9 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
          pTVar10 = FRawDistributionVector::GetValue
                              (&this->NoiseRange,local_70,fVar17,pUVar9,iVar12,(FRandomStream *)0x0)
          ;
          dVar5 = (pTVar10->field0_0x0)._s_0.Y;
          dVar1 = (pTVar10->field0_0x0)._s_0.Z;
          *(double *)(lVar14 + local_res20) = (pTVar10->field0_0x0)._s_0.X;
          ((double *)(lVar14 + local_res20))[1] = dVar5;
          *(double *)(lVar14 + 0x10 + local_res20) = dVar1;
        }
        iVar13 = iVar13 + 1;
        lVar14 = lVar14 + 0x18;
      } while (iVar13 < iVar16);
    }
  }
  return;
}

// Update @ 14813cb10

void __thiscall
UParticleModuleBeamNoise::Update(UParticleModuleBeamNoise *this,FUpdateContext *param_1)

{
  double dVar1;
  char cVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined4 local_res18 [2];
  int local_res20;
  float *local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  float *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  TVector<double> local_c0;
  TVector<double> local_a8;
  TVector<double> local_90 [3];
  ulonglong uVar14;
  
  fVar6 = __real_3f800000;
  fVar5 = __real_38d1b717;
  if ((((this->bLowFreq_Enabled != 0) && (lVar11 = param_1->_padding_, lVar11 != 0)) &&
      (this->Frequency != 0)) && ((*(byte *)(lVar11 + 0x161) & 1) != 0)) {
    plVar18 = *(longlong **)(lVar11 + 0x280);
    iVar8 = *(int *)(lVar11 + 0x18c) + -1;
    lVar12 = *(longlong *)(lVar11 + 0x168);
    lVar17 = *(longlong *)(lVar11 + 0x170);
    local_res20 = *(int *)(lVar11 + 0x188);
    cVar2 = *(char *)((longlong)&(this->NoiseRange)._padding_ + 3);
    local_f0 = (longlong)iVar8;
    iVar19 = -1;
    local_128 = lVar11;
    local_120 = lVar12;
    local_118 = lVar17;
    local_110 = plVar18;
    if (-1 < iVar8) {
      do {
        uVar14 = 0;
        lVar16 = (ulonglong)(local_res20 * (uint)*(ushort *)(lVar17 + local_f0 * 2)) + lVar12;
        if ((*(uint *)(lVar16 + 0x6c) & 0x4000000) == 0) {
          local_res18[0] = *(undefined4 *)(lVar11 + 0x24);
          local_100 = 0;
          local_c8 = 0;
          local_138 = (float *)0x0;
          local_f8 = (float *)0x0;
          local_130 = 0;
          local_108 = 0;
          local_d0 = 0;
          local_d8 = 0;
          local_e0 = 0;
          local_e8 = 0;
          (**(code **)(*plVar18 + 0x3f0))
                    (plVar18,lVar11,lVar16,local_res18,&local_100,&local_c8,&local_138,&local_f8,
                     &local_130,&local_108,&local_d0,&local_d8,&local_e0,&local_e8);
          if ((local_130 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TargetNoisePoints",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                                 ,0x5e3,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((this->bSmooth != 0) && (local_108 == 0)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextNoisePoints",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                                 ,0x5e6,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = 0;
          if ((cVar2 != '\0') && (this->bOscillate != 0)) {
            iVar8 = -iVar19;
          }
          iVar19 = iVar8;
          lVar11 = local_128;
          lVar12 = local_120;
          lVar17 = local_118;
          plVar18 = local_110;
          if (0.0 <= this->NoiseLockTime) {
            iVar8 = (*(int *)(local_100 + 0x6c) >> 0xc & 0xfffU) + 1;
            fVar21 = fVar6 / (float)iVar8;
            if (this->NoiseLockTime <= fVar5) {
              uVar15 = uVar14;
              if (iVar8 != 0) {
                do {
                  pUVar9 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
                  pTVar10 = FRawDistributionVector::GetValue
                                      (&this->NoiseRange,local_90,(float)(int)uVar14 * fVar21,pUVar9
                                       ,iVar19,(FRandomStream *)0x0);
                  uVar13 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar13;
                  dVar1 = (pTVar10->field0_0x0)._s_0.Z;
                  dVar4 = (pTVar10->field0_0x0)._s_0.Y;
                  *(double *)(uVar15 + local_130) = (pTVar10->field0_0x0)._s_0.X;
                  ((double *)(uVar15 + local_130))[1] = dVar4;
                  *(double *)(uVar15 + 0x10 + local_130) = dVar1;
                  lVar11 = local_128;
                  lVar12 = local_120;
                  uVar15 = uVar15 + 0x18;
                  lVar17 = local_118;
                  plVar18 = local_110;
                } while ((int)uVar13 < iVar8);
              }
            }
            else {
              if ((local_138 == (float *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NoiseRate",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                                     ,0x601,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              fVar20 = *local_138 + param_1->DeltaTime;
              *local_138 = fVar20;
              if (this->NoiseLockTime <= fVar20 && fVar20 != this->NoiseLockTime) {
                if (this->bSmooth == 0) {
                  uVar15 = uVar14;
                  if (iVar8 != 0) {
                    do {
                      pUVar9 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
                      pTVar10 = FRawDistributionVector::GetValue
                                          (&this->NoiseRange,&local_a8,(float)(int)uVar14 * fVar21,
                                           pUVar9,iVar19,(FRandomStream *)0x0);
                      uVar13 = (int)uVar14 + 1;
                      uVar14 = (ulonglong)uVar13;
                      dVar1 = (pTVar10->field0_0x0)._s_0.Z;
                      dVar4 = (pTVar10->field0_0x0)._s_0.Y;
                      *(double *)(uVar15 + local_130) = (pTVar10->field0_0x0)._s_0.X;
                      ((double *)(uVar15 + local_130))[1] = dVar4;
                      *(double *)(uVar15 + 0x10 + local_130) = dVar1;
                      uVar15 = uVar15 + 0x18;
                    } while ((int)uVar13 < iVar8);
                  }
                }
                else {
                  uVar15 = uVar14;
                  if (iVar8 != 0) {
                    do {
                      pUVar9 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
                      pTVar10 = FRawDistributionVector::GetValue
                                          (&this->NoiseRange,&local_c0,(float)(int)uVar14 * fVar21,
                                           pUVar9,iVar19,(FRandomStream *)0x0);
                      uVar13 = (int)uVar14 + 1;
                      uVar14 = (ulonglong)uVar13;
                      dVar1 = (pTVar10->field0_0x0)._s_0.Z;
                      dVar4 = (pTVar10->field0_0x0)._s_0.Y;
                      *(double *)(uVar15 + local_108) = (pTVar10->field0_0x0)._s_0.X;
                      ((double *)(uVar15 + local_108))[1] = dVar4;
                      *(double *)(uVar15 + 0x10 + local_108) = dVar1;
                      uVar15 = uVar15 + 0x18;
                    } while ((int)uVar13 < iVar8);
                  }
                }
                *local_138 = 0.0;
              }
              *local_f8 = param_1->DeltaTime;
              lVar11 = local_128;
              lVar12 = local_120;
              lVar17 = local_118;
              plVar18 = local_110;
            }
          }
        }
        local_f0 = local_f0 + -1;
      } while (-1 < local_f0);
    }
  }
  return;
}

