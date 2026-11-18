// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472f77e0

UClass * __cdecl UParticleModuleAttractorPoint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorPoint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorPoint",
               &Z_Registration_Info_UClass_UParticleModuleAttractorPoint.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorPoint,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAttractorPoint>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorPoint>,local_res8,
               UParticleModuleAttractorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorPoint.InnerSingleton;
}

// UParticleModuleAttractorPoint @ 1472fc560

UParticleModuleAttractorPoint * __thiscall
UParticleModuleAttractorPoint::UParticleModuleAttractorPoint
          (UParticleModuleAttractorPoint *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAttractorPoint__6B_;
  (this->Position)._padding_ = 0;
  (this->Position)._padding_ = 0;
  *(undefined4 *)&(this->Position)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Position)._padding_ + 4) = 0;
  (this->Position)._padding_ = 0;
  (this->Position).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).MaxValue = 0.0;
  (this->Position).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Position).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  *(undefined4 *)&(this->Range)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Range)._padding_ + 4) = 0;
  (this->Range).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  *(undefined4 *)&(this->Strength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Strength)._padding_ + 4) = 0;
  (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Range).MinValue = 0.0;
  (this->Range).MaxValue = 0.0;
  (this->Strength).MinValue = 0.0;
  (this->Strength).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleAttractorPoint @ 1472fd840

void __thiscall
UParticleModuleAttractorPoint::~UParticleModuleAttractorPoint(UParticleModuleAttractorPoint *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleAttractorPoint__6B_;
  pvVar1 = (void *)(this->Strength)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Range)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Position)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300000

UClass * __cdecl UParticleModuleAttractorPoint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorPoint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorPoint",
               &Z_Registration_Info_UClass_UParticleModuleAttractorPoint.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorPoint,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleAttractorPoint>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorPoint>,local_res8,
               UParticleModuleAttractorBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorPoint.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAttractorPoint @ 1473017a0

void __cdecl UParticleModuleAttractorPoint::StaticRegisterNativesUParticleModuleAttractorPoint(void)

{
  return;
}

// UParticleModuleAttractorPoint @ 14815b800

UParticleModuleAttractorPoint * __thiscall
UParticleModuleAttractorPoint::UParticleModuleAttractorPoint
          (UParticleModuleAttractorPoint *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleAttractorPoint__6B_;
  (this->Position)._padding_ = 0;
  (this->Position)._padding_ = 0;
  *(undefined4 *)&(this->Position)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Position)._padding_ + 4) = 0;
  (this->Position)._padding_ = 0;
  (this->Position).MinValue = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).MaxValue = 0.0;
  (this->Position).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).MinValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->Position).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).MaxValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->Position).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Position).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x42;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  (this->Range)._padding_ = 0;
  *(undefined4 *)&(this->Range)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Range)._padding_ + 4) = 0;
  (this->Range).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  *(undefined4 *)&(this->Strength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Strength)._padding_ + 4) = 0;
  (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Range).MinValue = 0.0;
  (this->Range).MaxValue = 0.0;
  (this->Strength).MinValue = 0.0;
  (this->Strength).MaxValue = 0.0;
  puVar2 = &this->field_0xf0;
  this->StrengthByDistance = 1;
  this->Negative_Z = 1;
  this->Negative_Y = 1;
  this->Negative_X = 1;
  this->Positive_Z = 1;
  this->Positive_Y = 1;
  this->Positive_X = 1;
  this->bOverrideVelocity = 0;
  this->bAffectBaseVelocity = 0;
  return this;
}

// InitializeDefaults @ 148182f00

void __thiscall
UParticleModuleAttractorPoint::InitializeDefaults(UParticleModuleAttractorPoint *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->Position);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionPosition");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Position).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->Range);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionRange");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Range).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->Strength);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStrength");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostInitProperties @ 148189a00

void __thiscall
UParticleModuleAttractorPoint::PostInitProperties(UParticleModuleAttractorPoint *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->Position);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionPosition");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Position).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->Range);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionRange");
      pUVar4 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UDistributionFloatConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->Range).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->Strength);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStrength");
      pUVar4 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UDistributionFloatConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
    }
  }
  return;
}

// Render3DPreview @ 14818fd80

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
UParticleModuleAttractorPoint::Render3DPreview
          (UParticleModuleAttractorPoint *this,FPreviewContext *param_1)

{
  return;
}

// Update @ 1481a9b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleAttractorPoint::Update(UParticleModuleAttractorPoint *this,FUpdateContext *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  FParticleEmitterInstance *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  UObject *pUVar15;
  UParticleLODLevel *pUVar16;
  undefined1 (*pauVar17) [16];
  longlong lVar18;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 extraout_var [12];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  uint uVar50;
  uint uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  double local_res10;
  double local_res18;
  double local_res20;
  double local_148;
  double local_140;
  TVector<double>_u_0 local_130 [10];
  ulonglong uVar19;
  
  pFVar4 = (FParticleEmitterInstance *)param_1->_padding_;
  pUVar15 = (UObject *)(**(code **)((longlong)*pFVar4->Component + 8))();
  FRawDistributionVector::GetValue
            (&this->Position,(TVector<double> *)&local_130[0]._s_0,pFVar4->EmitterTime,pUVar15,0,
             (FRandomStream *)0x0);
  pUVar15 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar21 = FRawDistributionFloat::GetValue
                     (&this->Range,pFVar4->EmitterTime,pUVar15,(FRandomStream *)0x0);
  dVar40 = __real_3ff0000000000000;
  uVar38 = SUB84(__real_3ff0000000000000,0);
  uVar39 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  pUVar16 = UParticleEmitter::GetCurrentLODLevel(pFVar4->SpriteTemplate,pFVar4);
  if ((pUVar16 == (UParticleLODLevel *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                          ,0x1182,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((pUVar16->RequiredModule).field0_0x0.DebugPtr == (UParticleModuleRequired *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel->RequiredModule",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                          ,0x1183,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar46 = uVar38;
  uVar47 = uVar39;
  uVar48 = uVar38;
  uVar49 = uVar39;
  if ((((pUVar16->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) &&
     (this->bUseWorldSpacePosition == 0)) {
    pauVar17 = (undefined1 (*) [16])
               (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    auVar35 = pauVar17[1];
    dVar9 = (double)local_130[0]._16_8_ * *(double *)pauVar17[5];
    dVar10 = *(double *)(pauVar17[5] + 8) * 0.0;
    dVar11 = *(double *)(pauVar17[1] + 8);
    dVar41 = *(double *)pauVar17[4] * (double)local_130[0]._0_8_;
    dVar8 = *(double *)(pauVar17[4] + 8) * (double)local_130[0]._8_8_;
    uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar23 = *pauVar17;
    auVar28 = blendpd(auVar23,auVar35,2);
    auVar42._8_4_ = SUB84(dVar8,0);
    auVar42._0_8_ = dVar41;
    auVar42._12_4_ = uVar38;
    dVar40 = auVar35._0_8_;
    auVar43._0_8_ = auVar42._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar41;
    auVar43._8_8_ = dVar9 * auVar23._8_8_ - dVar40 * dVar8;
    auVar44._8_4_ = SUB84(dVar8,0);
    auVar44._0_8_ = dVar41;
    auVar44._12_4_ = uVar38;
    auVar23._8_4_ = SUB84(dVar10,0);
    auVar23._0_8_ = dVar9;
    auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar23 = blendpd(auVar44,auVar23,2);
    auVar24._0_8_ = auVar23._0_8_ * dVar40 - auVar28._0_8_ * dVar9;
    auVar24._8_8_ = auVar23._8_8_ * auVar35._8_8_ - auVar28._8_8_ * dVar10;
    auVar23 = *pauVar17;
    auVar44 = blendpd(auVar43,auVar24,2);
    dVar10 = auVar43._8_8_ + auVar43._8_8_;
    dVar30 = auVar24._0_8_ + auVar24._0_8_;
    uVar38 = (undefined4)((ulonglong)dVar30 >> 0x20);
    auVar45._0_8_ = auVar44._0_8_ + auVar44._0_8_;
    auVar45._8_8_ = auVar44._8_8_ + auVar44._8_8_;
    auVar33._8_4_ = SUB84(dVar30,0);
    auVar33._0_8_ = dVar10;
    auVar33._12_4_ = uVar38;
    auVar31._8_4_ = SUB84(dVar30,0);
    auVar31._0_8_ = dVar10;
    auVar31._12_4_ = uVar38;
    auVar44 = blendpd(auVar31,auVar45,2);
    auVar34._0_8_ = auVar33._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar10;
    auVar34._8_8_ = auVar45._0_8_ * auVar23._8_8_ - dVar40 * dVar30;
    auVar28._8_4_ = SUB84(auVar34._8_8_,0);
    auVar28._0_8_ = auVar34._0_8_;
    auVar28._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
    auVar23 = blendpd(auVar23,auVar35,2);
    auVar32._0_8_ = auVar44._0_8_ * dVar40 - auVar23._0_8_ * auVar45._0_8_;
    auVar32._8_8_ = auVar44._8_8_ * auVar35._8_8_ - auVar23._8_8_ * auVar45._8_8_;
    auVar35 = blendpd(auVar34,auVar32,2);
    dVar40 = dVar30 * dVar11 + dVar8 + auVar32._0_8_ + *(double *)(pauVar17[2] + 8);
    local_130[0]._16_8_ = auVar45._0_8_ * dVar11 + dVar9 + auVar35._0_8_ + *(double *)pauVar17[3];
    local_130[0]._8_4_ = SUB84(dVar40,0);
    local_130[0]._0_8_ = dVar10 * dVar11 + dVar41 + auVar28._8_8_ + *(double *)pauVar17[2];
    local_130[0]._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    lVar18 = (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    uVar46 = *(undefined4 *)(lVar18 + 0x40);
    uVar47 = *(undefined4 *)(lVar18 + 0x44);
    uVar38 = *(undefined4 *)(lVar18 + 0x48);
    uVar39 = *(undefined4 *)(lVar18 + 0x4c);
    uVar48 = *(undefined4 *)(lVar18 + 0x50);
    uVar49 = *(undefined4 *)(lVar18 + 0x54);
    dVar40 = __real_3ff0000000000000;
  }
  uVar52 = 0;
  uVar53 = 0;
  fVar22 = (float)SQRT((double)CONCAT44(uVar39,uVar38) * (double)CONCAT44(uVar39,uVar38) +
                       (double)CONCAT44(uVar47,uVar46) * (double)CONCAT44(uVar47,uVar46) +
                       (double)CONCAT44(uVar49,uVar48) * (double)CONCAT44(uVar49,uVar48));
  fVar21 = fVar21 * fVar22;
  local_140 = __real_bff0000000000000;
  if (this->Negative_Z == 0) {
    local_res18 = 0.0;
  }
  else {
    local_res18 = __real_bff0000000000000;
  }
  if (this->Negative_Y == 0) {
    local_148 = 0.0;
  }
  else {
    local_148 = __real_bff0000000000000;
  }
  if (-1 < (char)(this->Negative_X << 7)) {
    local_140 = 0.0;
  }
  local_res10 = dVar40;
  if (this->Positive_Z == 0) {
    local_res10 = 0.0;
  }
  local_res20 = dVar40;
  if (this->Positive_Y == 0) {
    local_res20 = 0.0;
  }
  if (this->Positive_X != 0) {
    uVar52 = SUB84(dVar40,0);
    uVar53 = (undefined4)((ulonglong)dVar40 >> 0x20);
  }
  lVar18 = param_1->_padding_;
  fVar2 = param_1->DeltaTime;
  lVar5 = *(longlong *)(lVar18 + 0x170);
  lVar6 = *(longlong *)(lVar18 + 0x168);
  iVar3 = *(int *)(lVar18 + 0x188);
  iVar13 = *(int *)(lVar18 + 0x18c) + -1;
  lVar18 = (longlong)iVar13;
  if (-1 < iVar13) {
    uVar50 = (uint)__xmm_80000000000000008000000000000000;
    uVar51 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar14 = (uint)*(ushort *)(lVar5 + lVar18 * 2) * iVar3;
      uVar19 = (ulonglong)uVar14;
      uVar20 = (ulonglong)uVar14;
      if ((*(uint *)(uVar19 + 0x6c + lVar6) & 0x4000000) == 0) {
        dVar40 = (double)local_130[0]._0_8_ - *(double *)(uVar19 + 0x18 + lVar6);
        dVar41 = (double)local_130[0]._8_8_ - *(double *)(uVar19 + 0x20 + lVar6);
        dVar10 = (double)local_130[0]._16_8_ - *(double *)(uVar19 + 0x28 + lVar6);
        auVar25._0_8_ = dVar40 * dVar40;
        auVar25._8_8_ = 0;
        dVar30 = dVar41 * dVar41 + auVar25._0_8_ + dVar10 * dVar10;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = dVar30;
        auVar35 = sqrtpd(auVar25,auVar35);
        if ((float)auVar35._0_8_ <= fVar21) {
          uVar14 = *(uint *)&this->field_0xf0;
          if (ZPULL(uVar14,0,1) == 0) {
            pUVar15 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
            fVar26 = pFVar4->EmitterTime;
LAB_1481a9f8f:
            fVar26 = FRawDistributionFloat::GetValue
                               (&this->Strength,fVar26,pUVar15,(FRandomStream *)0x0);
            uVar14 = *(uint *)&this->field_0xf0;
            auVar36._4_4_ = extraout_var._0_4_;
            auVar36._0_4_ = fVar26;
            auVar36._8_4_ = extraout_var._4_4_;
            auVar36._12_4_ = extraout_var._8_4_;
          }
          else {
            if (fVar21 != 0.0) {
              pUVar15 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              fVar26 = (fVar21 - (float)auVar35._0_8_) / fVar21;
              goto LAB_1481a9f8f;
            }
            auVar36 = ZEXT816(0);
          }
          if ((((pUVar16->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) &&
             ((uVar14 & 8) == 0)) {
            auVar36._0_4_ = auVar36._0_4_ * fVar22;
          }
          if (__real_3e45798ee0000000 < dVar30) {
            dVar30 = __real_3ff0000000000000 / SQRT(dVar30);
            dVar40 = dVar40 * dVar30;
            dVar41 = dVar41 * dVar30;
            dVar10 = dVar10 * dVar30;
          }
          auVar37 = auVar36;
          if (auVar36._0_4_ < 0.0) {
            auVar37._0_4_ = (uint)auVar36._0_4_ ^ __xmm_80000000800000008000000080000000;
            auVar37._4_4_ = 0;
            auVar37._8_4_ = auVar36._8_4_ ^ _UNK_150651578;
            auVar37._12_4_ = auVar36._12_4_ ^ _UNK_15065157c;
            dVar40 = (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) ^ uVar51,
                                      SUB84(dVar40,0) ^ uVar50);
            dVar41 = (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) ^ uVar51,
                                      SUB84(dVar41,0) ^ uVar50);
            dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar51,
                                      SUB84(dVar10,0) ^ uVar50);
          }
          if (local_res20 <= dVar41) {
            dVar41 = local_res20;
          }
          if (local_res10 <= dVar10) {
            dVar10 = local_res10;
          }
          if ((double)CONCAT44(uVar53,uVar52) <= dVar40) {
            dVar40 = (double)CONCAT44(uVar53,uVar52);
          }
          if (dVar41 <= local_148) {
            dVar41 = local_148;
          }
          if (dVar10 <= local_res18) {
            dVar10 = local_res18;
          }
          if (dVar40 <= local_140) {
            dVar40 = local_140;
          }
          fVar29 = auVar37._0_4_;
          fVar26 = (float)dVar40 * fVar29 * fVar2;
          fVar27 = (float)dVar41 * fVar29 * fVar2;
          fVar29 = (float)dVar10 * fVar29 * fVar2;
          *(float *)(uVar20 + 0x40 + lVar6) = fVar26 + *(float *)(uVar20 + 0x40 + lVar6);
          *(float *)(uVar20 + 0x44 + lVar6) = fVar27 + *(float *)(uVar20 + 0x44 + lVar6);
          *(float *)(uVar20 + 0x48 + lVar6) = fVar29 + *(float *)(uVar20 + 0x48 + lVar6);
          if (this->bAffectBaseVelocity != 0) {
            *(float *)(uVar20 + 0x30 + lVar6) = fVar26 + *(float *)(uVar20 + 0x30 + lVar6);
            *(float *)(uVar20 + 0x34 + lVar6) = fVar27 + *(float *)(uVar20 + 0x34 + lVar6);
            *(float *)(uVar20 + 0x38 + lVar6) = fVar29 + *(float *)(uVar20 + 0x38 + lVar6);
          }
        }
      }
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  return;
}

