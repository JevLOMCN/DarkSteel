// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147304720

UClass * __cdecl UParticleModuleLocation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocation",
               &Z_Registration_Info_UClass_UParticleModuleLocation.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocation,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleLocation>,
               InternalVTableHelperCtorCaller<UParticleModuleLocation>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocation.InnerSingleton;
}

// UParticleModuleLocation @ 14730a4b0

UParticleModuleLocation * __thiscall
UParticleModuleLocation::UParticleModuleLocation
          (UParticleModuleLocation *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocation__6B_;
  (this->StartLocation)._padding_ = 0;
  (this->StartLocation)._padding_ = 0;
  (this->StartLocation)._padding_ = 0;
  *(undefined4 *)&(this->StartLocation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartLocation)._padding_ + 4) = 0;
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

// ~UParticleModuleLocation @ 14730b660

void __thiscall UParticleModuleLocation::~UParticleModuleLocation(UParticleModuleLocation *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocation__6B_;
  pvVar1 = (void *)(this->StartLocation)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730dca0

UClass * __cdecl UParticleModuleLocation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocation",
               &Z_Registration_Info_UClass_UParticleModuleLocation.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocation,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleLocation>,
               InternalVTableHelperCtorCaller<UParticleModuleLocation>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocation.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocation @ 14730fd60

void __cdecl UParticleModuleLocation::StaticRegisterNativesUParticleModuleLocation(void)

{
  return;
}

// UParticleModuleLocation @ 14815c950

UParticleModuleLocation * __thiscall
UParticleModuleLocation::UParticleModuleLocation
          (UParticleModuleLocation *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLocation__6B_;
  (this->StartLocation)._padding_ = 0;
  (this->StartLocation)._padding_ = 0;
  (this->StartLocation)._padding_ = 0;
  *(undefined4 *)&(this->StartLocation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartLocation)._padding_ + 4) = 0;
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
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x41;
  this->DistributeOverNPoints = 0.0;
  return this;
}

// InitializeDefaults @ 148183c60

void __thiscall UParticleModuleLocation::InitializeDefaults(UParticleModuleLocation *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->StartLocation);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartLocation");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartLocation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818a420

void __thiscall UParticleModuleLocation::PostInitProperties(UParticleModuleLocation *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->StartLocation);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartLocation");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartLocation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// Render3DPreview @ 14818fdd0

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
UParticleModuleLocation::Render3DPreview(UParticleModuleLocation *this,FPreviewContext *param_1)

{
  return;
}

// Spawn @ 14819ab70

void __thiscall UParticleModuleLocation::Spawn(UParticleModuleLocation *this,FSpawnContext *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FParticleRandomSeedInstancePayload *pFVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x398);
  pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                     ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this);
  if (pFVar1 == (FParticleRandomSeedInstancePayload *)0x0) {
    pFVar1 = (FParticleRandomSeedInstancePayload *)
             (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014819abca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,param_1,pFVar1);
  return;
}

// SpawnEx @ 14819e780

void __thiscall
UParticleModuleLocation::SpawnEx
          (UParticleModuleLocation *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  double dVar1;
  FBaseParticle *pFVar2;
  FParticleEmitterInstance *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [12];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  UParticleLODLevel *pUVar13;
  UObject *pUVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  float fVar17;
  double _X;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  float fVar22;
  double dVar23;
  double dVar24;
  FSpawnContext *local_res8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double> local_68;
  TVector<double> local_50 [2];
  
  pFVar2 = param_1->ParticleBase;
  pFVar3 = (FParticleEmitterInstance *)param_1->_padding_;
  pUVar13 = UParticleEmitter::GetCurrentLODLevel(pFVar3->SpriteTemplate,pFVar3);
  if ((pUVar13 == (UParticleLODLevel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                          ,0x69,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar10 = __real_3f800000;
  fVar22 = this->DistributeOverNPoints;
  auVar18 = ZEXT416((uint)fVar22);
  if ((fVar22 == 0.0) || (fVar22 == __real_3f800000)) {
    pUVar14 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    pTVar15 = local_50;
  }
  else {
    uVar16 = param_2->Seed * 0xbb38435 + 0x3619636b;
    param_2->Seed = uVar16;
    fVar22 = pFVar3->EmitterTime;
    fVar17 = (float)truncf();
    fVar19 = (float)(uVar16 >> 9 | 0x3f800000) - fVar10;
    auVar18 = ZEXT416((uint)fVar19);
    fVar19 = (fVar22 - fVar17) * fVar19;
    if (fVar19 < this->DistributeThreshold || fVar19 == this->DistributeThreshold) {
      FRawDistributionVector::GetRange
                (&this->StartLocation,(TVector<double> *)&local_80._s_0,
                 (TVector<double> *)&local_98._s_0);
      uVar16 = param_2->Seed * 0xbb38435 + 0x3619636b;
      param_2->Seed = uVar16;
      fVar22 = this->DistributeOverNPoints - fVar10;
      auVar18 = roundps(extraout_XMM0,
                        ZEXT416((uint)(((float)(uVar16 >> 9 | 0x3f800000) - fVar10) * fVar22 +
                                      __real_3f000000)),3);
      dVar24 = (double)(auVar18._0_4_ / fVar22);
      dVar23 = (local_98._s_0.X - local_80._s_0.X) * dVar24 + local_80._s_0.X;
      dVar20 = (local_98._s_0.Y - local_80._s_0.Y) * dVar24 + local_80._s_0.Y;
      dVar24 = (local_98._s_0.Z - local_80._s_0.Z) * dVar24 + local_80._s_0.Z;
      goto LAB_14819e94f;
    }
    pUVar14 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    pTVar15 = &local_68;
  }
  pTVar15 = FRawDistributionVector::GetValue
                      (&this->StartLocation,pTVar15,pFVar3->EmitterTime,pUVar14,0,param_2);
  auVar21 = *(undefined1 (*) [16])&pTVar15->field0_0x0;
  dVar23 = auVar21._0_8_;
  dVar24 = (pTVar15->field0_0x0)._s_0.Z;
  auVar5._4_8_ = auVar18._8_8_;
  auVar5._0_4_ = auVar21._4_4_;
  auVar18._0_8_ = auVar5._0_8_ << 0x20;
  auVar18._8_4_ = auVar21._8_4_;
  auVar18._12_4_ = auVar21._12_4_;
  dVar20 = auVar18._8_8_;
LAB_14819e94f:
  dVar6 = (pFVar3->EmitterToSimulation).M[1][1];
  dVar7 = (pFVar3->EmitterToSimulation).M[0][1];
  auVar21._8_4_ = SUB84(dVar24,0);
  auVar21._0_8_ = dVar24;
  auVar21._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  dVar8 = (pFVar3->EmitterToSimulation).M[2][1];
  dVar9 = (pFVar3->EmitterToSimulation).M[3][1];
  _X = (pFVar3->EmitterToSimulation).M[1][0] * dVar20 +
       (pFVar3->EmitterToSimulation).M[0][0] * dVar23 +
       dVar24 * (pFVar3->EmitterToSimulation).M[2][0] + (pFVar3->EmitterToSimulation).M[3][0] * 0.0
       + (pFVar2->Location).field0_0x0._s_0.X;
  dVar1 = (pFVar2->Location).field0_0x0._s_0.Y;
  (pFVar2->Location).field0_0x0._s_0.Z =
       (pFVar3->EmitterToSimulation).M[1][2] * dVar20 +
       (pFVar3->EmitterToSimulation).M[0][2] * dVar23 +
       (pFVar3->EmitterToSimulation).M[2][2] * dVar24 + (pFVar3->EmitterToSimulation).M[3][2] * 0.0
       + (pFVar2->Location).field0_0x0._s_0.Z;
  (pFVar2->Location).field0_0x0._s_0.X = _X;
  (pFVar2->Location).field0_0x0._s_0.Y =
       dVar6 * dVar20 + dVar7 * dVar23 + auVar21._8_8_ * dVar8 + dVar9 * 0.0 + dVar1;
  iVar12 = _finite(_X);
  if (((iVar12 != 0) && (iVar12 = _finite((pFVar2->Location).field0_0x0._s_0.Y), iVar12 != 0)) &&
     (iVar12 = _finite((pFVar2->Location).field0_0x0._s_0.Z), iVar12 != 0)) {
    return;
  }
  local_res8 = param_1;
  `UParticleModuleLocation::SpawnEx'::__l2::<lambda_1>::operator()(&local_res8);
  return;
}

// operator() @ 150525b00

bool __thiscall `UParticleModuleLocation::SpawnEx'::__l2::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707553924>);
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
                      (&bGEnsureHasExecuted<7003914095707553924>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150525bdf;
    }
  }
  bVar4 = false;
LAB_150525bdf:
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

