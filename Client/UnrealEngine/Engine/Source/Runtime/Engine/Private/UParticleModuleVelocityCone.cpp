// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147315520

UClass * __cdecl UParticleModuleVelocityCone::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocityCone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocityCone",
               &Z_Registration_Info_UClass_UParticleModuleVelocityCone.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocityCone,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVelocityCone>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocityCone>,local_res8,
               UParticleModuleVelocityBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocityCone.InnerSingleton;
}

// UParticleModuleVelocityCone @ 1473191e0

UParticleModuleVelocityCone * __thiscall
UParticleModuleVelocityCone::UParticleModuleVelocityCone
          (UParticleModuleVelocityCone *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVelocityCone__6B_;
  (this->Angle)._padding_ = 0;
  (this->Angle)._padding_ = 0;
  (this->Angle)._padding_ = 0;
  *(undefined4 *)&(this->Angle)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Angle)._padding_ + 4) = 0;
  (this->Angle).MinValue = 0.0;
  (this->Angle).MaxValue = 0.0;
  (this->Angle).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Velocity)._padding_ = 0;
  (this->Velocity)._padding_ = 0;
  (this->Velocity)._padding_ = 0;
  *(undefined4 *)&(this->Velocity)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Velocity)._padding_ + 4) = 0;
  (this->Velocity).MinValue = 0.0;
  (this->Velocity).MaxValue = 0.0;
  (this->Velocity).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleVelocityCone @ 147319b60

void __thiscall
UParticleModuleVelocityCone::~UParticleModuleVelocityCone(UParticleModuleVelocityCone *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleVelocityCone__6B_;
  pvVar1 = (void *)(this->Velocity)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Angle)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleVelocityBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c970

UClass * __cdecl UParticleModuleVelocityCone::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocityCone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocityCone",
               &Z_Registration_Info_UClass_UParticleModuleVelocityCone.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocityCone,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVelocityCone>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocityCone>,local_res8,
               UParticleModuleVelocityBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocityCone.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVelocityCone @ 14731d110

void __cdecl UParticleModuleVelocityCone::StaticRegisterNativesUParticleModuleVelocityCone(void)

{
  return;
}

// UParticleModuleVelocityCone @ 14815ec80

UParticleModuleVelocityCone * __thiscall
UParticleModuleVelocityCone::UParticleModuleVelocityCone
          (UParticleModuleVelocityCone *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x16;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleVelocityCone__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0xc1;
  (this->Angle)._padding_ = 0;
  (this->Angle)._padding_ = 0;
  (this->Angle)._padding_ = 0;
  *(undefined4 *)&(this->Angle)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Angle)._padding_ + 4) = 0;
  (this->Angle).MinValue = 0.0;
  (this->Angle).MaxValue = 0.0;
  (this->Angle).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Velocity)._padding_ = 0;
  (this->Velocity)._padding_ = 0;
  (this->Velocity)._padding_ = 0;
  *(undefined4 *)&(this->Velocity)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Velocity)._padding_ + 4) = 0;
  (this->Velocity).MinValue = 0.0;
  (this->Velocity).MaxValue = 0.0;
  (this->Velocity).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  return this;
}

// InitializeDefaults @ 148185220

void __thiscall UParticleModuleVelocityCone::InitializeDefaults(UParticleModuleVelocityCone *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->Angle);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionAngle");
    pUVar3 = NewObject<UDistributionFloatUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Angle).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->Velocity);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionVelocity");
    pUVar3 = NewObject<UDistributionFloatUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Velocity).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818bf40

void __thiscall UParticleModuleVelocityCone::PostInitProperties(UParticleModuleVelocityCone *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatUniform *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->Angle);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionAngle");
      pUVar3 = NewObject<UDistributionFloatUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionFloatUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Angle).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->Velocity);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionVelocity");
      pUVar3 = NewObject<UDistributionFloatUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionFloatUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Velocity).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// Render3DPreview @ 14818fe10

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
UParticleModuleVelocityCone::Render3DPreview
          (UParticleModuleVelocityCone *this,FPreviewContext *param_1)

{
  return;
}

// Spawn @ 14819de70

void __thiscall
UParticleModuleVelocityCone::Spawn(UParticleModuleVelocityCone *this,FSpawnContext *param_1)

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

// SpawnEx @ 1481a0a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleVelocityCone::SpawnEx
          (UParticleModuleVelocityCone *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  float fVar1;
  float fVar2;
  FParticleEmitterInstance *pFVar3;
  FBaseParticle *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  bool bVar18;
  UParticleLODLevel *pUVar19;
  longlong lVar20;
  UObject *pUVar21;
  undefined1 (*pauVar22) [16];
  double *pdVar23;
  longlong lVar24;
  longlong lVar25;
  double extraout_XMM0_Qa;
  undefined1 extraout_XMM0 [16];
  undefined8 uVar38;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  double dVar45;
  undefined8 in_XMM2_Qb;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  uint uVar66;
  uint uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar78;
  uint uVar79;
  undefined4 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auStack_278 [32];
  double local_258;
  float local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  undefined1 local_218 [16];
  double local_208;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined8 uStack_150;
  undefined8 uStack_130;
  undefined1 local_108 [32];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_278;
  pFVar3 = (FParticleEmitterInstance *)param_1->_padding_;
  pUVar19 = UParticleEmitter::GetCurrentLODLevel(pFVar3->SpriteTemplate,pFVar3);
  if ((pUVar19 == (UParticleLODLevel *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Velocity.cpp"
                          ,0x1a7,L""), bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1c0 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_1b8 = _UNK_150689688;
  local_228 = __real_3ff0000000000000;
  if ((this->_padding_ & 2) != 0) {
    lVar20 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    local_1c0 = *(double *)(lVar20 + 0x40);
    dStack_1b8 = *(double *)(lVar20 + 0x48);
    local_228 = *(double *)(lVar20 + 0x50);
  }
  pFVar4 = param_1->ParticleBase;
  pUVar21 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  FRawDistributionFloat::GetValue(&this->Angle,pFVar3->EmitterTime,pUVar21,param_2);
  pUVar21 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  local_248 = FRawDistributionFloat::GetValue(&this->Velocity,pFVar3->EmitterTime,pUVar21,param_2);
  param_2->Seed = param_2->Seed * 0xbb38435 + 0x3619636b;
  auVar30._0_8_ = (double)(float)GlobalVectorConstants::DEG_TO_RAD.m128_u64[0];
  auVar30._8_8_ = (double)(float)((ulonglong)GlobalVectorConstants::DEG_TO_RAD._0_8_ >> 0x20);
  __vdecl_sincos2();
  local_1f8 = extraout_XMM0;
  local_108._0_16_ = auVar30;
  __vdecl_sincos2();
  dVar39 = extraout_XMM0_Qa * extraout_XMM0._0_8_;
  dVar60 = auVar30._0_8_;
  auVar10._4_8_ = in_XMM2_Qb;
  auVar10._0_4_ = extraout_XMM0._4_4_;
  auVar48._0_8_ = auVar10._0_8_ << 0x20;
  auVar48._8_4_ = extraout_XMM0._8_4_;
  auVar48._12_4_ = extraout_XMM0._12_4_;
  dVar45 = auVar48._8_8_;
  dVar40 = dVar60 * extraout_XMM0._0_8_;
  dVar41 = extraout_XMM0_Qa * dVar45 + dVar40 * (double)local_108._8_8_;
  auVar49._8_4_ = SUB84(DefaultDirection.field0_0x0._s_0.Z,0);
  auVar49._0_8_ = DefaultDirection.field0_0x0._s_0.Z;
  auVar49._12_4_ = (int)((ulonglong)DefaultDirection.field0_0x0._16_8_ >> 0x20);
  local_218._8_4_ = auVar30._8_4_;
  local_218._0_8_ = dVar60 * (double)local_108._0_8_;
  local_218._12_4_ = auVar30._12_4_;
  auVar68._8_4_ = DefaultDirection.field0_0x0._8_4_;
  auVar68._0_8_ = DefaultDirection.field0_0x0._s_0.Y;
  auVar68._12_4_ = DefaultDirection.field0_0x0._12_4_;
  auVar50._8_4_ = DefaultDirection.field0_0x0._0_4_;
  auVar50._0_8_ = DefaultDirection.field0_0x0._s_0.X;
  auVar50._12_4_ = DefaultDirection.field0_0x0._4_4_;
  local_1e8 = DefaultDirection.field0_0x0._s_0.Y *
              (dVar39 * (double)local_108._8_8_ - dVar60 * dVar45) +
              DefaultDirection.field0_0x0._s_0.X * (double)local_108._8_8_ * (double)local_108._0_8_
              + DefaultDirection.field0_0x0._s_0.Z *
                (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000) +
              UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * 0.0;
  dStack_1e0 = auVar68._8_8_ * (dVar60 * (double)local_108._8_8_ + dVar39 * dVar45) +
               auVar50._8_8_ * (double)local_108._0_8_ * dVar45 +
               auVar49._8_8_ * ((double)local_108._8_8_ * extraout_XMM0_Qa - dVar40 * dVar45) +
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * 0.0;
  local_108._0_8_ =
       DefaultDirection.field0_0x0._s_0.Y *
       (double)CONCAT44((uint)((ulonglong)((double)local_108._0_8_ * extraout_XMM0_Qa) >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84((double)local_108._0_8_ * extraout_XMM0_Qa,0) ^
                        (uint)__xmm_80000000000000008000000000000000) +
       DefaultDirection.field0_0x0._s_0.X * (double)local_1f8._0_8_ +
       DefaultDirection.field0_0x0._s_0.Z * dVar60 * (double)local_108._0_8_ +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0;
  dVar41 = (this->Direction).field0_0x0._s_0.X;
  auVar53._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auVar53._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_208 = DefaultDirection.field0_0x0._s_0.Z;
  local_108._8_8_ =
       DefaultDirection.field0_0x0._s_0.Y * 0.0 + DefaultDirection.field0_0x0._s_0.X * 0.0 +
       DefaultDirection.field0_0x0._s_0.Z * 0.0 + __real_3ff0000000000000 * 0.0;
  uVar65 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  auVar64 = auVar53;
  if (((dVar41 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y !=
       (this->Direction).field0_0x0._s_0.Y)) ||
     (auVar75 = DefaultDirection.field0_0x0._0_16_,
     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z != (this->Direction).field0_0x0._s_0.Z)
     ) {
    dVar39 = (this->Direction).field0_0x0._s_0.Y;
    dVar40 = (this->Direction).field0_0x0._s_0.Z;
    dVar45 = dVar41 * dVar41 + dVar39 * dVar39 + dVar40 * dVar40;
    if (dVar45 == __real_3ff0000000000000) {
      auVar75 = *(undefined1 (*) [16])&(this->Direction).field0_0x0;
      local_208 = (this->Direction).field0_0x0._s_0.Z;
    }
    else if (__real_3e45798ee0000000 <= dVar45) {
      dVar45 = __real_3ff0000000000000 / SQRT(dVar45);
      auVar75._0_8_ = dVar45 * dVar41;
      local_208 = dVar45 * dVar40;
      auVar64._12_4_ = 0;
      auVar64._0_12_ = auVar53._4_12_;
      auVar64 = auVar64 << 0x20;
      auVar75._8_8_ = dVar45 * dVar39;
    }
    else {
      auVar75._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      auVar75._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      auVar75._12_4_ = uVar65;
      local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  dVar41 = auVar75._0_8_;
  uVar66 = auVar75._8_4_;
  uVar67 = auVar75._12_4_;
  dVar39 = auVar75._8_8_;
  if (((dVar41 != 0.0) || (dVar39 != 0.0)) || (local_208 != __real_3ff0000000000000)) {
    auVar69._0_8_ =
         (double)CONCAT44(uVar67 ^ __xmm_80000000000000008000000000000000._4_4_,
                          uVar66 ^ (uint)__xmm_80000000000000008000000000000000);
    auVar69._8_4_ = uVar66;
    auVar69._12_4_ = uVar67;
    if ((((double)CONCAT44(auVar75._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                           auVar75._0_4_ ^ (uint)__xmm_80000000000000008000000000000000) != 0.0) ||
        (auVar69._0_8_ != 0.0)) ||
       ((double)CONCAT44((uint)((ulonglong)local_208 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(local_208,0) ^ (uint)__xmm_80000000000000008000000000000000) !=
        __real_3ff0000000000000)) {
      uVar78 = SUB84(local_208 * dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar79 = (uint)((ulonglong)(local_208 * dVar41) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      uVar66 = 0;
      uVar67 = 0;
      auVar61._0_8_ = dVar41 * dVar41 - dVar39 * auVar69._0_8_;
      auVar61._8_8_ = dVar39;
      dVar45 = local_208 * auVar69._0_8_;
      dVar40 = dVar41;
      goto LAB_1481a0ee2;
    }
  }
  auVar61._0_8_ =
       (double)CONCAT44(uVar67 ^ __xmm_80000000000000008000000000000000._4_4_,
                        uVar66 ^ (uint)__xmm_80000000000000008000000000000000);
  auVar61._8_4_ = uVar66;
  auVar61._12_4_ = uVar67;
  uVar78 = 0;
  uVar79 = 0;
  dVar40 = auVar61._0_8_ * dVar41;
  auVar69._0_8_ = local_208 * local_208 - auVar61._0_8_ * dVar39;
  auVar69._8_8_ = 0;
  uVar66 = SUB84(local_208 * dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar67 = (uint)((ulonglong)(local_208 * dVar41) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar45 = local_208;
LAB_1481a0ee2:
  uVar8 = CONCAT44(uVar79,uVar78);
  local_1c8 = auVar61._0_8_;
  dVar47 = auVar69._0_8_;
  uVar38 = auVar69._8_8_;
  dVar60 = (double)CONCAT44(uVar67,uVar66);
  uStack_150 = 0;
  uStack_130 = 0;
  dVar46 = dVar40 * dVar40 + dVar47 * dVar47 +
           (double)CONCAT44(uVar67,uVar66) * (double)CONCAT44(uVar67,uVar66);
  local_258 = dVar60;
  if (dVar46 != __real_3ff0000000000000) {
    if (dVar46 < __real_3e45798ee0000000) {
      dVar40 = auVar64._8_8_;
      local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    else {
      dVar46 = __real_3ff0000000000000 / SQRT(dVar46);
      auVar69._0_8_ = dVar47 * dVar46;
      auVar69._8_8_ = uVar38;
      dVar40 = dVar46 * dVar40;
      local_258 = dVar46 * (double)CONCAT44(uVar67,uVar66);
    }
  }
  auVar26._0_8_ = (double)CONCAT44(uVar79,uVar78) * (double)CONCAT44(uVar79,uVar78);
  auVar26._8_8_ = 0;
  dVar47 = dVar45 * dVar45 + auVar26._0_8_ + local_1c8 * local_1c8;
  uVar38 = local_1c8;
  if (dVar47 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar47) {
      auVar26 = ZEXT416((uint)((ulonglong)dVar47 >> 0x20)) << 0x20;
      dVar47 = __real_3ff0000000000000 / SQRT(dVar47);
      uVar8 = (double)CONCAT44(uVar79,uVar78) * dVar47;
      dVar45 = dVar47 * dVar45;
      uVar38 = dVar47 * local_1c8;
    }
    else {
      local_1f8._4_4_ =
           (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      auVar11._4_8_ = auVar61._8_8_;
      auVar11._0_4_ = local_1f8._4_4_;
      auVar42._0_8_ = auVar11._0_8_ << 0x20;
      auVar42._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      auVar42._12_4_ = uVar65;
      dVar45 = auVar42._8_8_;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  auVar12._4_8_ = auVar26._8_8_;
  auVar12._0_4_ = (int)((ulonglong)local_1e8 >> 0x20);
  auVar27._0_8_ = auVar12._0_8_ << 0x20;
  auVar27._8_4_ = SUB84(dStack_1e0,0);
  auVar27._12_4_ = (int)((ulonglong)dStack_1e0 >> 0x20);
  dVar47 = auVar27._8_8_;
  local_240 = (double)uVar8 * dVar47 + auVar69._0_8_ * local_1e8 + dVar41 * (double)local_108._0_8_
              + 0.0;
  dVar41 = dVar45 * dVar47 + dVar40 * local_1e8 + dVar39 * (double)local_108._0_8_ + 0.0;
  local_230 = (double)uVar38 * dVar47 + local_258 * local_1e8 + local_208 * (double)local_108._0_8_
              + ___xmm_3ff00000000000000000000000000000 * 0.0;
  auVar13._4_8_ = _UNK_15061cbc8 * 0.0;
  auVar13._0_4_ = (int)((ulonglong)local_240 >> 0x20);
  auVar28._0_8_ = auVar13._0_8_ << 0x20;
  auVar28._8_4_ = SUB84(dVar41,0);
  auVar28._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
  dStack_238 = auVar28._8_8_;
  local_208 = dVar60;
  local_1f8 = auVar53;
  if (((pUVar19->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    if ((this->_padding_ & 1) == 0) {
      pauVar22 = (undefined1 (*) [16])
                 (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
      auVar64 = pauVar22[1];
      dVar45 = auVar64._0_8_;
      local_230 = local_230 * *(double *)pauVar22[5];
      dVar41 = *(double *)(pauVar22[5] + 8) * 0.0;
      dVar40 = *(double *)(pauVar22[1] + 8);
      local_240 = *(double *)pauVar22[4] * local_240;
      dStack_238 = *(double *)(pauVar22[4] + 8) * dStack_238;
      auVar30 = *pauVar22;
      auVar50 = blendpd(auVar30,auVar64,2);
      auVar70._8_4_ = SUB84(dStack_238,0);
      auVar70._0_8_ = local_240;
      uVar65 = (undefined4)((ulonglong)dStack_238 >> 0x20);
      auVar70._12_4_ = uVar65;
      auVar71._0_8_ = auVar70._8_8_ * auVar30._0_8_ - auVar30._8_8_ * local_240;
      auVar71._8_8_ = local_230 * auVar30._8_8_ - dVar45 * dStack_238;
      auVar29._8_4_ = SUB84(dStack_238,0);
      auVar29._0_8_ = local_240;
      auVar29._12_4_ = uVar65;
      auVar7._8_4_ = SUB84(dVar41,0);
      auVar7._0_8_ = local_230;
      auVar7._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      auVar30 = blendpd(auVar29,auVar7,2);
      auVar31._0_8_ = auVar30._0_8_ * dVar45 - auVar50._0_8_ * local_230;
      auVar31._8_8_ = auVar30._8_8_ * auVar64._8_8_ - auVar50._8_8_ * dVar41;
      auVar30 = *pauVar22;
      auVar50 = blendpd(auVar71,auVar31,2);
      dVar41 = auVar71._8_8_ + auVar71._8_8_;
      dVar39 = auVar31._0_8_ + auVar31._0_8_;
      uVar65 = (undefined4)((ulonglong)dVar39 >> 0x20);
      auVar72._0_8_ = auVar50._0_8_ + auVar50._0_8_;
      auVar72._8_8_ = auVar50._8_8_ + auVar50._8_8_;
      auVar62._8_4_ = SUB84(dVar39,0);
      auVar62._0_8_ = dVar41;
      auVar62._12_4_ = uVar65;
      auVar54._8_4_ = SUB84(dVar39,0);
      auVar54._0_8_ = dVar41;
      auVar54._12_4_ = uVar65;
      auVar50 = blendpd(auVar54,auVar72,2);
      auVar63._0_8_ = auVar62._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar41;
      auVar63._8_8_ = auVar72._0_8_ * auVar30._8_8_ - dVar45 * dVar39;
      auVar30 = blendpd(auVar30,auVar64,2);
      auVar32._8_4_ = SUB84(auVar63._8_8_,0);
      auVar32._0_8_ = auVar63._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
      auVar55._0_8_ = auVar50._0_8_ * dVar45 - auVar30._0_8_ * auVar72._0_8_;
      auVar55._8_8_ = auVar50._8_8_ * auVar64._8_8_ - auVar30._8_8_ * auVar72._8_8_;
      local_240 = dVar41 * dVar40 + local_240 + auVar32._8_8_;
      dVar41 = dVar39 * dVar40 + dStack_238 + auVar55._0_8_;
      auVar64 = blendpd(auVar63,auVar55,2);
      local_230 = auVar72._0_8_ * dVar40 + local_230 + auVar64._0_8_;
      auVar14._4_8_ = auVar55._0_8_;
      auVar14._0_4_ = (int)((ulonglong)local_240 >> 0x20);
      auVar33._0_8_ = auVar14._0_8_ << 0x20;
      auVar33._8_4_ = SUB84(dVar41,0);
      auVar33._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      dStack_238 = auVar33._8_8_;
    }
  }
  else if ((this->_padding_ & 1) != 0) {
    pdVar23 = (double *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    auVar17._8_8_ = dStack_238;
    auVar17._0_8_ = local_240;
    dVar60 = *pdVar23 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar47 = pdVar23[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar41 = pdVar23[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar39 = pdVar23[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar15._4_8_ = auVar69._8_8_;
    auVar15._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar73._0_8_ = auVar15._0_8_ << 0x20;
    auVar73._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar73._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar51._8_4_ = SUB84(dVar47,0);
    auVar51._0_8_ = dVar60;
    uVar65 = (undefined4)((ulonglong)dVar47 >> 0x20);
    auVar51._12_4_ = uVar65;
    auVar56._8_4_ = SUB84(dVar47,0);
    auVar56._0_8_ = dVar60;
    auVar56._12_4_ = uVar65;
    auVar6._8_4_ = SUB84(dVar39,0);
    auVar6._0_8_ = dVar41;
    auVar6._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    auVar30 = blendpd(auVar56,auVar6,2);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_230;
    auVar64 = blendpd(auVar17,auVar9,2);
    auVar83._0_8_ = dStack_238 * dVar60 - local_240 * auVar51._8_8_;
    auVar83._8_8_ = local_230 * dVar47 - dStack_238 * dVar41;
    auVar43._0_8_ = auVar64._0_8_ * dVar41 - local_230 * auVar30._0_8_;
    auVar43._8_8_ = auVar64._8_8_ * dVar39 - auVar30._8_8_ * 0.0;
    auVar64 = blendpd(auVar83,auVar43,2);
    dVar40 = auVar83._8_8_ + auVar83._8_8_;
    dVar45 = auVar43._0_8_ + auVar43._0_8_;
    uVar65 = SUB84(dVar45,0);
    uVar80 = (undefined4)((ulonglong)dVar45 >> 0x20);
    auVar84._0_8_ = auVar64._0_8_ + auVar64._0_8_;
    auVar84._8_8_ = auVar64._8_8_ + auVar64._8_8_;
    auVar81._8_4_ = uVar65;
    auVar81._0_8_ = dVar40;
    auVar81._12_4_ = uVar80;
    auVar34._8_4_ = uVar65;
    auVar34._0_8_ = dVar40;
    auVar34._12_4_ = uVar80;
    auVar76._8_4_ = uVar65;
    auVar76._0_8_ = dVar40;
    auVar76._12_4_ = uVar80;
    auVar64 = blendpd(auVar76,auVar84,2);
    auVar82._0_8_ = auVar81._8_8_ * dVar60 - dVar40 * auVar51._8_8_;
    auVar82._8_8_ = auVar84._0_8_ * dVar47 - auVar34._8_8_ * dVar41;
    auVar35._8_4_ = SUB84(auVar84._8_8_,0);
    auVar35._0_8_ = auVar84._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
    auVar77._0_8_ = auVar64._0_8_ * dVar41 - auVar84._0_8_ * auVar30._0_8_;
    auVar77._8_8_ = auVar64._8_8_ * dVar39 - auVar35._8_8_ * auVar30._8_8_;
    auVar64 = *(undefined1 (*) [16])(pdVar23 + 10);
    auVar74._8_8_ = auVar73._8_8_;
    auVar74._0_8_ = auVar64._0_8_;
    auVar57._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)pdVar23 + 0x44) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(pdVar23 + 8) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar57._8_4_ = *(uint *)(pdVar23 + 9) & _UNK_15061cc88;
    auVar57._12_4_ = *(uint *)((longlong)pdVar23 + 0x4c) & _UNK_15061cc8c;
    lVar20 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar64._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar64._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pdVar23 + 8));
    lVar24 = -(ulonglong)(auVar57._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar25 = -(ulonglong)(auVar57._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar36._8_4_ = SUB84(auVar82._8_8_,0);
    auVar36._0_8_ = auVar82._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
    auVar58._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar64._4_4_,
                          ~(uint)lVar24 & auVar64._0_4_);
    auVar58._8_4_ = ~(uint)lVar25 & auVar64._8_4_;
    auVar58._12_4_ = ~(uint)((ulonglong)lVar25 >> 0x20) & auVar64._12_4_;
    auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar74);
    auVar30 = blendpd(auVar82,auVar77,2);
    local_230 = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar64._4_4_,
                                 ~(uint)lVar20 & auVar64._0_4_) *
                (auVar84._0_8_ * dVar39 + local_230 + auVar30._0_8_);
    local_240 = auVar58._0_8_ * (dVar40 * dVar39 + local_240 + auVar36._8_8_);
    dVar41 = auVar58._8_8_ * (dVar45 * dVar39 + dStack_238 + auVar77._0_8_);
    auVar16._4_8_ = auVar64._8_8_;
    auVar16._0_4_ = (int)((ulonglong)local_240 >> 0x20);
    auVar37._0_8_ = auVar16._0_8_ << 0x20;
    auVar37._8_4_ = SUB84(dVar41,0);
    auVar37._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    dStack_238 = auVar37._8_8_;
  }
  dVar41 = (double)local_248;
  fVar59 = (float)(local_240 * dVar41 * local_1c0);
  fVar52 = (float)(dStack_238 * dVar41 * dStack_1b8);
  (pFVar4->Velocity).field0_0x0._s_0.Y = fVar52 + (pFVar4->Velocity).field0_0x0._s_0.Y;
  fVar44 = (float)(local_230 * dVar41 * local_228);
  (pFVar4->Velocity).field0_0x0._s_0.X = fVar59 + (pFVar4->Velocity).field0_0x0._s_0.X;
  (pFVar4->Velocity).field0_0x0._s_0.Z = fVar44 + (pFVar4->Velocity).field0_0x0._s_0.Z;
  fVar1 = (pFVar4->BaseVelocity).field0_0x0._s_0.Y;
  fVar2 = (pFVar4->BaseVelocity).field0_0x0._s_0.Z;
  (pFVar4->BaseVelocity).field0_0x0._s_0.X = fVar59 + (pFVar4->BaseVelocity).field0_0x0._s_0.X;
  (pFVar4->BaseVelocity).field0_0x0._s_0.Y = fVar52 + fVar1;
  (pFVar4->BaseVelocity).field0_0x0._s_0.Z = fVar44 + fVar2;
  return;
}

