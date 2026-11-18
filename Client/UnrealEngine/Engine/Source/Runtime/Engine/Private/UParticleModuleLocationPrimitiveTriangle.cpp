// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147306450

UClass * __cdecl UParticleModuleLocationPrimitiveTriangle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveTriangle",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationPrimitiveTriangle,0x120,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationPrimitiveTriangle>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveTriangle>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.InnerSingleton;
}

// UParticleModuleLocationPrimitiveTriangle @ 14730aa30

UParticleModuleLocationPrimitiveTriangle * __thiscall
UParticleModuleLocationPrimitiveTriangle::UParticleModuleLocationPrimitiveTriangle
          (UParticleModuleLocationPrimitiveTriangle *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveTriangle__6B_;
  (this->StartOffset)._padding_ = 0;
  (this->StartOffset)._padding_ = 0;
  *(undefined4 *)&(this->StartOffset)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartOffset)._padding_ + 4) = 0;
  (this->StartOffset)._padding_ = 0;
  (this->StartOffset).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartOffset).MaxValue = 0.0;
  (this->StartOffset).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartOffset).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartOffset).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartOffset).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartOffset).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartOffset).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartOffset).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->Height)._padding_ = 0;
  (this->Height)._padding_ = 0;
  (this->Height)._padding_ = 0;
  *(undefined4 *)&(this->Height)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Height)._padding_ + 4) = 0;
  (this->Height).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Angle)._padding_ = 0;
  (this->Angle)._padding_ = 0;
  (this->Angle)._padding_ = 0;
  *(undefined4 *)&(this->Angle)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Angle)._padding_ + 4) = 0;
  (this->Angle).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Thickness)._padding_ = 0;
  (this->Thickness)._padding_ = 0;
  (this->Thickness)._padding_ = 0;
  *(undefined4 *)&(this->Thickness)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Thickness)._padding_ + 4) = 0;
  (this->Thickness).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Height).MinValue = 0.0;
  (this->Height).MaxValue = 0.0;
  (this->Angle).MinValue = 0.0;
  (this->Angle).MaxValue = 0.0;
  (this->Thickness).MinValue = 0.0;
  (this->Thickness).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleLocationPrimitiveTriangle @ 14730b980

void __thiscall
UParticleModuleLocationPrimitiveTriangle::~UParticleModuleLocationPrimitiveTriangle
          (UParticleModuleLocationPrimitiveTriangle *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveTriangle__6B_;
  pvVar1 = (void *)(this->Thickness)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Angle)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Height)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->StartOffset)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730e4e0

UClass * __cdecl UParticleModuleLocationPrimitiveTriangle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveTriangle",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationPrimitiveTriangle,0x120,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationPrimitiveTriangle>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveTriangle>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationPrimitiveTriangle @ 14730fe10

void __cdecl
UParticleModuleLocationPrimitiveTriangle::
StaticRegisterNativesUParticleModuleLocationPrimitiveTriangle(void)

{
  return;
}

// UParticleModuleLocationPrimitiveTriangle @ 14815d190

UParticleModuleLocationPrimitiveTriangle * __thiscall
UParticleModuleLocationPrimitiveTriangle::UParticleModuleLocationPrimitiveTriangle
          (UParticleModuleLocationPrimitiveTriangle *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveTriangle__6B_;
  (this->StartOffset)._padding_ = 0;
  (this->StartOffset)._padding_ = 0;
  *(undefined4 *)&(this->StartOffset)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartOffset)._padding_ + 4) = 0;
  (this->StartOffset)._padding_ = 0;
  (this->StartOffset).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartOffset).MaxValue = 0.0;
  (this->StartOffset).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartOffset).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartOffset).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartOffset).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartOffset).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartOffset).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartOffset).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x41;
  (this->Height)._padding_ = 0;
  (this->Height)._padding_ = 0;
  (this->Height)._padding_ = 0;
  *(undefined4 *)&(this->Height)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Height)._padding_ + 4) = 0;
  (this->Height).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Angle)._padding_ = 0;
  (this->Angle)._padding_ = 0;
  (this->Angle)._padding_ = 0;
  *(undefined4 *)&(this->Angle)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Angle)._padding_ + 4) = 0;
  (this->Angle).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Thickness)._padding_ = 0;
  (this->Thickness)._padding_ = 0;
  (this->Thickness)._padding_ = 0;
  *(undefined4 *)&(this->Thickness)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Thickness)._padding_ + 4) = 0;
  (this->Thickness).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Height).MinValue = 0.0;
  (this->Height).MaxValue = 0.0;
  (this->Angle).MinValue = 0.0;
  (this->Angle).MaxValue = 0.0;
  (this->Thickness).MinValue = 0.0;
  (this->Thickness).MaxValue = 0.0;
  return this;
}

// InitializeDefaults @ 148184130

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleLocationPrimitiveTriangle::InitializeDefaults
          (UParticleModuleLocationPrimitiveTriangle *this)

{
  undefined8 uVar1;
  bool bVar2;
  FName *pFVar3;
  UDistributionVectorConstant *pUVar4;
  UDistributionFloatConstant *pUVar5;
  FName local_res8;
  
  bVar2 = FRawDistributionVector::IsCreated(&this->StartOffset);
  if (!bVar2) {
    pFVar3 = ::FName::FName(&local_res8,L"DistributionOffset");
    pUVar4 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (pUVar4->Constant).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (pUVar4->Constant).field0_0x0._s_0.Y = (double)uVar1;
    (pUVar4->Constant).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->StartOffset).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar4;
  }
  bVar2 = FRawDistributionFloat::IsCreated(&this->Height);
  if (!bVar2) {
    pFVar3 = ::FName::FName(&local_res8,L"DistributionHeight");
    pUVar5 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar5->Constant = 50.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->Height).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
  }
  bVar2 = FRawDistributionFloat::IsCreated(&this->Angle);
  if (!bVar2) {
    pFVar3 = ::FName::FName(&local_res8,L"DistributionAngle");
    pUVar5 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar5->Constant = 90.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->Angle).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
  }
  bVar2 = FRawDistributionFloat::IsCreated(&this->Thickness);
  if (!bVar2) {
    pFVar3 = ::FName::FName(&local_res8,L"DistributionThickness");
    pUVar5 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar5->Constant = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->Thickness).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
  }
  return;
}

// PostInitProperties @ 14818a7b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleLocationPrimitiveTriangle::PostInitProperties
          (UParticleModuleLocationPrimitiveTriangle *this)

{
  undefined8 uVar1;
  bool bVar2;
  FName *pFVar3;
  UDistributionVectorConstant *pUVar4;
  UDistributionFloatConstant *pUVar5;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar2 = FRawDistributionVector::IsCreated(&this->StartOffset);
    if (!bVar2) {
      pFVar3 = ::FName::FName(&local_res8,L"DistributionOffset");
      pUVar4 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar4->Constant).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
      ;
      (pUVar4->Constant).field0_0x0._s_0.Y = (double)uVar1;
      (pUVar4->Constant).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->StartOffset).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar4;
    }
    bVar2 = FRawDistributionFloat::IsCreated(&this->Height);
    if (!bVar2) {
      pFVar3 = ::FName::FName(&local_res8,L"DistributionHeight");
      pUVar5 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar5->Constant = 50.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->Height).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
    }
    bVar2 = FRawDistributionFloat::IsCreated(&this->Angle);
    if (!bVar2) {
      pFVar3 = ::FName::FName(&local_res8,L"DistributionAngle");
      pUVar5 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar5->Constant = 90.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->Angle).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
    }
    bVar2 = FRawDistributionFloat::IsCreated(&this->Thickness);
    if (!bVar2) {
      pFVar3 = ::FName::FName(&local_res8,L"DistributionThickness");
      pUVar5 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar5->Constant = 0.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->Thickness).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
    }
  }
  return;
}

// Render3DPreview @ 14818fe00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleModuleLocationPrimitiveTriangle::Render3DPreview
          (UParticleModuleLocationPrimitiveTriangle *this,FPreviewContext *param_1)

{
  return;
}

// Spawn @ 14819bf40

void __thiscall
UParticleModuleLocationPrimitiveTriangle::Spawn
          (UParticleModuleLocationPrimitiveTriangle *this,FSpawnContext *param_1)

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

// SpawnEx @ 14819f730

void __thiscall
UParticleModuleLocationPrimitiveTriangle::SpawnEx
          (UParticleModuleLocationPrimitiveTriangle *this,FSpawnContext *param_1,
          FRandomStream *param_2)

{
  FParticleEmitterInstance *pFVar1;
  FBaseParticle *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  UParticleLODLevel *pUVar16;
  UObject *pUVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double _X;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  FSpawnContext *local_res8;
  TVector<double>_u_0 local_a8 [6];
  
  pFVar1 = (FParticleEmitterInstance *)param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar16 = UParticleEmitter::GetCurrentLODLevel(pFVar1->SpriteTemplate,pFVar1);
  if ((pUVar16 == (UParticleLODLevel *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                          ,0x341,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  FRawDistributionVector::GetValue
            (&this->StartOffset,(TVector<double> *)&local_a8[0]._s_0,pFVar1->EmitterTime,pUVar17,0,
             param_2);
  pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar20 = FRawDistributionFloat::GetValue(&this->Height,pFVar1->EmitterTime,pUVar17,param_2);
  pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar21 = FRawDistributionFloat::GetValue(&this->Angle,pFVar1->EmitterTime,pUVar17,param_2);
  pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar22 = FRawDistributionFloat::GetValue(&this->Thickness,pFVar1->EmitterTime,pUVar17,param_2);
  fVar23 = tanf(fVar21 * __real_3c0efa36);
  fVar21 = __real_3f800000;
  uVar18 = param_2->Seed * 0xbb38435 + 0x3619636b;
  uVar19 = uVar18 * 0xbb38435 + 0x3619636b;
  fVar26 = (float)(uVar18 >> 9 | 0x3f800000) - __real_3f800000;
  uVar18 = uVar19 * 0xbb38435 + 0x3619636b;
  fVar30 = (float)(uVar19 >> 9 | 0x3f800000) - __real_3f800000;
  fVar28 = (float)(uVar18 >> 9 | 0x3f800000) - __real_3f800000;
  fVar24 = fVar30 + fVar26 + fVar28;
  uVar18 = uVar18 * 0xbb38435 + 0x3619636b;
  param_2->Seed = uVar18;
  if (fVar24 <= __real_38d1b717) {
    fVar24 = __real_38d1b717;
  }
  fVar24 = fVar21 / fVar24;
  dVar4 = (double)(fVar24 * fVar26);
  dVar32 = (double)(fVar24 * fVar30);
  dVar29 = (double)(fVar24 * fVar28);
  dVar5 = ((double)local_a8[0]._0_8_ - (double)(fVar20 * __real_3f000000)) * (dVar29 + dVar32) +
          ((double)(fVar20 * __real_3f000000) + (double)local_a8[0]._0_8_) * dVar4 +
          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar6 = (pFVar1->EmitterToSimulation).M[1][1];
  dVar31 = ((double)local_a8[0]._8_8_ - (double)(fVar23 * fVar20)) * dVar29 +
           ((double)(fVar23 * fVar20) + (double)local_a8[0]._8_8_) * dVar32 +
           dVar4 * (double)local_a8[0]._8_8_ +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar32 = (double)(((float)(uVar18 >> 9 | 0x3f800000) - fVar21) * fVar22 - fVar22 * __real_3f000000
                   );
  dVar7 = (pFVar1->EmitterToSimulation).M[0][1];
  dVar8 = (pFVar1->EmitterToSimulation).M[1][2];
  auVar25._8_4_ = SUB84(dVar31,0);
  auVar25._0_8_ = dVar31;
  auVar25._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  dVar9 = (pFVar1->EmitterToSimulation).M[2][1];
  auVar27._8_4_ = SUB84(dVar32,0);
  auVar27._0_8_ = dVar32;
  auVar27._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  dVar10 = (pFVar1->EmitterToSimulation).M[3][1];
  dVar11 = (pFVar1->EmitterToSimulation).M[0][2];
  dVar12 = (pFVar1->EmitterToSimulation).M[2][2];
  dVar13 = (pFVar1->EmitterToSimulation).M[3][2];
  _X = dVar5 * (pFVar1->EmitterToSimulation).M[0][0] +
       dVar31 * (pFVar1->EmitterToSimulation).M[1][0] +
       dVar32 * (pFVar1->EmitterToSimulation).M[2][0] + (pFVar1->EmitterToSimulation).M[3][0] * 0.0
       + (pFVar2->Location).field0_0x0._s_0.X;
  dVar4 = (pFVar2->Location).field0_0x0._s_0.Z;
  dVar29 = (pFVar2->Location).field0_0x0._s_0.Y;
  (pFVar2->Location).field0_0x0._s_0.X = _X;
  (pFVar2->Location).field0_0x0._s_0.Z =
       dVar8 * dVar31 + dVar11 * dVar5 + dVar12 * dVar32 + dVar13 * 0.0 + dVar4;
  (pFVar2->Location).field0_0x0._s_0.Y =
       dVar5 * dVar7 + auVar25._8_8_ * dVar6 + auVar27._8_8_ * dVar9 + dVar10 * 0.0 + dVar29;
  iVar15 = _finite(_X);
  if (((iVar15 != 0) && (iVar15 = _finite((pFVar2->Location).field0_0x0._s_0.Y), iVar15 != 0)) &&
     (iVar15 = _finite((pFVar2->Location).field0_0x0._s_0.Z), iVar15 != 0)) {
    return;
  }
  local_res8 = param_1;
  `UParticleModuleLocationPrimitiveTriangle::SpawnEx'::__l2::<lambda_1>::operator()(&local_res8);
  return;
}

// operator() @ 150525e90

bool __thiscall
`UParticleModuleLocationPrimitiveTriangle::SpawnEx'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554656>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554656>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150525f6f;
    }
  }
  bVar4 = false;
LAB_150525f6f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

