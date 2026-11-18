// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 1473052d0

UClass * __cdecl UParticleModuleLocationDirect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationDirect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationDirect",
               &Z_Registration_Info_UClass_UParticleModuleLocationDirect.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationDirect,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationDirect>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationDirect>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationDirect.InnerSingleton;
}

// UParticleModuleLocationDirect @ 14730a5a0

UParticleModuleLocationDirect * __thiscall
UParticleModuleLocationDirect::UParticleModuleLocationDirect
          (UParticleModuleLocationDirect *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationDirect__6B_;
  (this->Location)._padding_ = 0;
  (this->Location)._padding_ = 0;
  (this->Location)._padding_ = 0;
  *(undefined4 *)&(this->Location)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Location)._padding_ + 4) = 0;
  (this->Location).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).MaxValue = 0.0;
  (this->Location).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Location).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->LocationOffset)._padding_ = 0;
  (this->LocationOffset)._padding_ = 0;
  (this->LocationOffset)._padding_ = 0;
  *(undefined4 *)&(this->LocationOffset)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LocationOffset)._padding_ + 4) = 0;
  (this->LocationOffset).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocationOffset).MaxValue = 0.0;
  (this->LocationOffset).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocationOffset).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LocationOffset).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocationOffset).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocationOffset).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LocationOffset).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LocationOffset).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->ScaleFactor)._padding_ = 0;
  (this->ScaleFactor)._padding_ = 0;
  (this->ScaleFactor)._padding_ = 0;
  *(undefined4 *)&(this->ScaleFactor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ScaleFactor)._padding_ + 4) = 0;
  (this->ScaleFactor).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ScaleFactor).MaxValue = 0.0;
  (this->ScaleFactor).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ScaleFactor).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ScaleFactor).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ScaleFactor).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ScaleFactor).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ScaleFactor).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ScaleFactor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->Direction)._padding_ = 0;
  (this->Direction)._padding_ = 0;
  (this->Direction)._padding_ = 0;
  *(undefined4 *)&(this->Direction)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Direction)._padding_ + 4) = 0;
  (this->Direction).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Direction).MaxValue = 0.0;
  (this->Direction).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Direction).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Direction).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Direction).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Direction).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Direction).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleLocationDirect @ 14730b700

void __thiscall
UParticleModuleLocationDirect::~UParticleModuleLocationDirect(UParticleModuleLocationDirect *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationDirect__6B_;
  pvVar1 = (void *)(this->Direction)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->ScaleFactor)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->LocationOffset)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Location)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730dee0

UClass * __cdecl UParticleModuleLocationDirect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationDirect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationDirect",
               &Z_Registration_Info_UClass_UParticleModuleLocationDirect.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationDirect,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationDirect>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationDirect>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationDirect.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationDirect @ 14730fd90

void __cdecl UParticleModuleLocationDirect::StaticRegisterNativesUParticleModuleLocationDirect(void)

{
  return;
}

// UParticleModuleLocationDirect @ 14815cb00

UParticleModuleLocationDirect * __thiscall
UParticleModuleLocationDirect::UParticleModuleLocationDirect
          (UParticleModuleLocationDirect *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLocationDirect__6B_;
  (this->Location)._padding_ = 0;
  (this->Location)._padding_ = 0;
  (this->Location)._padding_ = 0;
  *(undefined4 *)&(this->Location)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Location)._padding_ + 4) = 0;
  (this->Location).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).MaxValue = 0.0;
  (this->Location).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Location).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->LocationOffset)._padding_ = 0;
  (this->LocationOffset)._padding_ = 0;
  (this->LocationOffset)._padding_ = 0;
  *(undefined4 *)&(this->LocationOffset)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LocationOffset)._padding_ + 4) = 0;
  (this->LocationOffset).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocationOffset).MaxValue = 0.0;
  (this->LocationOffset).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocationOffset).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LocationOffset).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocationOffset).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocationOffset).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->LocationOffset).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LocationOffset).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->ScaleFactor)._padding_ = 0;
  (this->ScaleFactor)._padding_ = 0;
  (this->ScaleFactor)._padding_ = 0;
  *(undefined4 *)&(this->ScaleFactor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ScaleFactor)._padding_ + 4) = 0;
  (this->ScaleFactor).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ScaleFactor).MaxValue = 0.0;
  (this->ScaleFactor).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ScaleFactor).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ScaleFactor).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ScaleFactor).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ScaleFactor).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->ScaleFactor).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ScaleFactor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->Direction)._padding_ = 0;
  (this->Direction)._padding_ = 0;
  (this->Direction)._padding_ = 0;
  *(undefined4 *)&(this->Direction)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Direction)._padding_ + 4) = 0;
  (this->Direction).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Direction).MaxValue = 0.0;
  (this->Direction).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Direction).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Direction).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Direction).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Direction).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Direction).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  return this;
}

// InitializeDefaults @ 148183ce0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleLocationDirect::InitializeDefaults(UParticleModuleLocationDirect *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  UDistributionVectorConstant *pUVar4;
  FName local_res8;
  FName local_res10;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->Location);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionLocation");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Location).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->LocationOffset);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionLocationOffset");
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
    (this->LocationOffset).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar4;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->Direction);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res10,L"DistributionScaleFactor");
    pUVar4 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar4->Constant).field0_0x0._s_0.X = 1.0;
    (pUVar4->Constant).field0_0x0._s_0.Y = 1.0;
    (pUVar4->Constant).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->ScaleFactor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar4;
    pFVar2 = ::FName::FName(&local_res8,L"DistributionDirection");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Direction).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818a4b0

void __thiscall
UParticleModuleLocationDirect::PostInitProperties(UParticleModuleLocationDirect *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    InitializeDefaults(this);
    return;
  }
  return;
}

// RequiredBytes @ 148191860

uint __thiscall
UParticleModuleLocationDirect::RequiredBytes
          (UParticleModuleLocationDirect *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x18;
}

// Spawn @ 14819b0b0

void __thiscall
UParticleModuleLocationDirect::Spawn(UParticleModuleLocationDirect *this,FSpawnContext *param_1)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  FBaseParticle *pFVar3;
  FParticleEmitterInstance *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  UParticleLODLevel *pUVar15;
  UObject *pUVar16;
  TVector<double> *pTVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  FSpawnContext *local_res8;
  TVector<double>_u_0 local_b8;
  TVector<double> local_a0;
  TVector<double>_u_0 local_88 [4];
  
  pFVar3 = param_1->ParticleBase;
  uVar19 = (ulonglong)(uint)param_1->Offset;
  pFVar4 = (FParticleEmitterInstance *)param_1->_padding_;
  pUVar15 = UParticleEmitter::GetCurrentLODLevel(pFVar4->SpriteTemplate,pFVar4);
  if ((pUVar15 == (UParticleLODLevel *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                          ,0x138,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = **(longlong **)(param_1->_padding_ + 0x10);
  if (((pUVar15->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    pUVar16 = (UObject *)(**(code **)(lVar5 + 8))();
    FRawDistributionVector::GetValue
              (&this->Location,(TVector<double> *)&local_b8._s_0,pFVar3->RelativeTime,pUVar16,0,
               (FRandomStream *)0x0);
    pauVar18 = (undefined1 (*) [16])
               (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
    auVar2 = pauVar18[1];
    dVar10 = local_b8._s_0.Z * *(double *)pauVar18[5];
    dVar11 = *(double *)(pauVar18[5] + 8) * 0.0;
    dVar12 = *(double *)(pauVar18[1] + 8);
    dVar8 = *(double *)pauVar18[4] * local_b8._s_0.X;
    dVar9 = *(double *)(pauVar18[4] + 8) * local_b8._s_0.Y;
    uVar28 = (undefined4)((ulonglong)dVar9 >> 0x20);
    local_88[0]._0_16_ = *pauVar18;
    auVar23 = blendpd(local_88[0]._0_16_,auVar2,2);
    auVar29._8_4_ = SUB84(dVar9,0);
    auVar29._0_8_ = dVar8;
    auVar29._12_4_ = uVar28;
    dVar22 = auVar2._0_8_;
    auVar30._0_8_ = auVar29._8_8_ * local_88[0]._0_8_ - local_88[0]._8_8_ * dVar8;
    auVar30._8_8_ = dVar10 * local_88[0]._8_8_ - dVar22 * dVar9;
    auVar31._8_4_ = SUB84(dVar9,0);
    auVar31._0_8_ = dVar8;
    auVar31._12_4_ = uVar28;
    auVar20._8_4_ = SUB84(dVar11,0);
    auVar20._0_8_ = dVar10;
    auVar20._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar20 = blendpd(auVar31,auVar20,2);
    auVar21._0_8_ = auVar20._0_8_ * dVar22 - auVar23._0_8_ * dVar10;
    auVar21._8_8_ = auVar20._8_8_ * auVar2._8_8_ - auVar23._8_8_ * dVar11;
    auVar20 = *pauVar18;
    auVar31 = blendpd(auVar30,auVar21,2);
    auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
    auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
    dVar11 = auVar30._8_8_ + auVar30._8_8_;
    dVar7 = auVar21._0_8_ + auVar21._0_8_;
    uVar28 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar26._8_4_ = SUB84(dVar7,0);
    auVar26._0_8_ = dVar11;
    auVar26._12_4_ = uVar28;
    auVar24._8_4_ = SUB84(dVar7,0);
    auVar24._0_8_ = dVar11;
    auVar24._12_4_ = uVar28;
    auVar31 = blendpd(auVar24,auVar32,2);
    auVar27._0_8_ = auVar26._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar11;
    auVar27._8_8_ = auVar32._0_8_ * auVar20._8_8_ - dVar22 * dVar7;
    auVar23._8_4_ = SUB84(auVar27._8_8_,0);
    auVar23._0_8_ = auVar27._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
    auVar20 = blendpd(auVar20,auVar2,2);
    auVar25._0_8_ = auVar31._0_8_ * dVar22 - auVar20._0_8_ * auVar32._0_8_;
    auVar25._8_8_ = auVar31._8_8_ * auVar2._8_8_ - auVar20._8_8_ * auVar32._8_8_;
    auVar20 = blendpd(auVar27,auVar25,2);
    dVar22 = *(double *)pauVar18[3];
    dVar7 = dVar7 * dVar12 + dVar9 + auVar25._0_8_ + *(double *)(pauVar18[2] + 8);
    auVar2._8_4_ = SUB84(dVar7,0);
    auVar2._0_8_ = dVar11 * dVar12 + dVar8 + auVar23._8_8_ + *(double *)pauVar18[2];
    auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])&(pFVar3->Location).field0_0x0 = auVar2;
    (pFVar3->Location).field0_0x0._s_0.Z = auVar32._0_8_ * dVar12 + dVar10 + auVar20._0_8_ + dVar22;
  }
  else {
    pUVar16 = (UObject *)(**(code **)(lVar5 + 8))();
    pTVar17 = FRawDistributionVector::GetValue
                        (&this->Location,&local_a0,pFVar3->RelativeTime,pUVar16,0,
                         (FRandomStream *)0x0);
    dVar22 = (pTVar17->field0_0x0)._s_0.Y;
    (pFVar3->Location).field0_0x0._s_0.X = (pTVar17->field0_0x0)._s_0.X;
    (pFVar3->Location).field0_0x0._s_0.Y = dVar22;
    (pFVar3->Location).field0_0x0._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
  }
  pUVar16 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  pTVar17 = FRawDistributionVector::GetValue
                      (&this->LocationOffset,(TVector<double> *)&local_88[0]._s_0,
                       pFVar4->EmitterTime,pUVar16,0,(FRandomStream *)0x0);
  dVar22 = (pTVar17->field0_0x0)._s_0.Y;
  pdVar1 = (double *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar19);
  *pdVar1 = (pTVar17->field0_0x0)._s_0.X;
  pdVar1[1] = dVar22;
  *(double *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar19 + 0x10) =
       (pTVar17->field0_0x0)._s_0.Z;
  dVar22 = (pFVar3->Location).field0_0x0._s_0.X +
           *(double *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar19);
  (pFVar3->Location).field0_0x0._s_0.X = dVar22;
  (pFVar3->Location).field0_0x0._s_0.Y =
       *(double *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar19 + 8) +
       (pFVar3->Location).field0_0x0._s_0.Y;
  (pFVar3->Location).field0_0x0._s_0.Z =
       *(double *)((longlong)&(pFVar3->OldLocation).field0_0x0 + uVar19 + 0x10) +
       (pFVar3->Location).field0_0x0._s_0.Z;
  iVar14 = _finite(dVar22);
  if (((iVar14 != 0) && (iVar14 = _finite((pFVar3->Location).field0_0x0._s_0.Y), iVar14 != 0)) &&
     (iVar14 = _finite((pFVar3->Location).field0_0x0._s_0.Z), iVar14 != 0)) {
    return;
  }
  local_res8 = param_1;
  `UParticleModuleLocationDirect::Spawn'::__l2::<lambda_1>::operator()(&local_res8);
  return;
}

// Update @ 1481ae480

void __thiscall
UParticleModuleLocationDirect::Update(UParticleModuleLocationDirect *this,FUpdateContext *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  FParticleEmitterInstance *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  bool bVar13;
  undefined1 (*pauVar14) [16];
  UParticleLODLevel *pUVar15;
  UObject *pUVar16;
  TVector<double> *pTVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined4 uVar38;
  FUpdateContext *local_188;
  longlong local_180;
  TVector<double>_u_0 local_178;
  double local_150;
  undefined1 local_148 [16];
  double local_138;
  TVector<double>_u_0 local_130;
  TVector<double> local_118;
  undefined1 local_f8 [16];
  
  pFVar4 = (FParticleEmitterInstance *)param_1->_padding_;
  pauVar14 = (undefined1 (*) [16])(**(code **)*pFVar4->Component)();
  fVar12 = __real_3f800000;
  lVar21 = param_1->_padding_;
  fVar1 = param_1->DeltaTime;
  uVar2 = param_1->Offset;
  iVar3 = *(int *)(lVar21 + 0x188);
  lVar5 = *(longlong *)(lVar21 + 0x168);
  local_180 = *(longlong *)(lVar21 + 0x170);
  iVar19 = *(int *)(lVar21 + 0x18c) + -1;
  lVar21 = (longlong)iVar19;
  if (-1 < iVar19) {
    do {
      lVar20 = (ulonglong)((uint)*(ushort *)(local_180 + lVar21 * 2) * iVar3) + lVar5;
      if ((*(uint *)(lVar20 + 0x6c) & 0x4000000) == 0) {
        pUVar15 = UParticleEmitter::GetCurrentLODLevel(pFVar4->SpriteTemplate,pFVar4);
        if ((pUVar15 == (UParticleLODLevel *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("LODLevel",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                                ,0x152,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = **(longlong **)(param_1->_padding_ + 0x10);
        if (((pUVar15->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
          pUVar16 = (UObject *)(**(code **)(lVar6 + 8))();
          FRawDistributionVector::GetValue
                    (&this->Location,(TVector<double> *)&local_178._s_0,*(float *)(lVar20 + 0x90),
                     pUVar16,0,(FRandomStream *)0x0);
          auVar32 = pauVar14[1];
          dVar33 = local_178._s_0.Z * *(double *)pauVar14[5];
          dVar29 = *(double *)(pauVar14[5] + 8) * 0.0;
          auVar26 = *pauVar14;
          dVar11 = *(double *)(pauVar14[1] + 8);
          dVar9 = *(double *)pauVar14[4] * local_178._s_0.X;
          dVar28 = *(double *)(pauVar14[4] + 8) * local_178._s_0.Y;
          uVar38 = (undefined4)((ulonglong)dVar28 >> 0x20);
          local_f8 = *pauVar14;
          auVar24 = blendpd(local_f8,auVar32,2);
          auVar34._8_4_ = SUB84(dVar28,0);
          auVar34._0_8_ = dVar9;
          auVar34._12_4_ = uVar38;
          dVar8 = auVar32._0_8_;
          auVar35._0_8_ = auVar34._8_8_ * local_f8._0_8_ - local_f8._8_8_ * dVar9;
          auVar35._8_8_ = dVar33 * local_f8._8_8_ - dVar8 * dVar28;
          auVar27._8_4_ = SUB84(dVar28,0);
          auVar27._0_8_ = dVar9;
          auVar27._12_4_ = uVar38;
          auVar22._8_4_ = SUB84(dVar29,0);
          auVar22._0_8_ = dVar33;
          auVar22._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
          auVar22 = blendpd(auVar27,auVar22,2);
          auVar23._0_8_ = auVar22._0_8_ * dVar8 - auVar24._0_8_ * dVar33;
          auVar23._8_8_ = auVar22._8_8_ * auVar32._8_8_ - auVar24._8_8_ * dVar29;
          auVar22 = blendpd(auVar35,auVar23,2);
          dVar29 = auVar35._8_8_ + auVar35._8_8_;
          dVar10 = auVar23._0_8_ + auVar23._0_8_;
          uVar38 = (undefined4)((ulonglong)dVar10 >> 0x20);
          auVar36._0_8_ = auVar22._0_8_ + auVar22._0_8_;
          auVar36._8_8_ = auVar22._8_8_ + auVar22._8_8_;
          auVar30._8_4_ = SUB84(dVar10,0);
          auVar30._0_8_ = dVar29;
          auVar30._12_4_ = uVar38;
          auVar25._8_4_ = SUB84(dVar10,0);
          auVar25._0_8_ = dVar29;
          auVar25._12_4_ = uVar38;
          auVar22 = blendpd(auVar25,auVar36,2);
          auVar31._0_8_ = auVar30._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar29;
          auVar31._8_8_ = auVar36._0_8_ * auVar26._8_8_ - dVar8 * dVar10;
          auVar24._8_4_ = SUB84(auVar31._8_8_,0);
          auVar24._0_8_ = auVar31._0_8_;
          auVar24._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
          auVar27 = blendpd(auVar26,auVar32,2);
          auVar26._0_8_ = auVar22._0_8_ * dVar8 - auVar27._0_8_ * auVar36._0_8_;
          auVar26._8_8_ = auVar22._8_8_ * auVar32._8_8_ - auVar27._8_8_ * auVar36._8_8_;
          auVar32 = blendpd(auVar31,auVar26,2);
          dVar8 = dVar29 * dVar11 + dVar9 + auVar24._8_8_ + *(double *)pauVar14[2];
          dVar9 = dVar10 * dVar11 + dVar28 + auVar26._0_8_ + *(double *)(pauVar14[2] + 8);
          uVar38 = (undefined4)((ulonglong)dVar9 >> 0x20);
          local_178._s_0.Z =
               auVar36._0_8_ * dVar11 + dVar33 + auVar32._0_8_ + *(double *)pauVar14[3];
          local_148._8_4_ = SUB84(dVar9,0);
          local_148._0_8_ = dVar8;
          local_148._12_4_ = uVar38;
          local_178._8_4_ = SUB84(dVar9,0);
          local_178._s_0.X = dVar8;
          local_178._12_4_ = uVar38;
          local_150 = local_178._s_0.Z;
          local_138 = local_178._s_0.Z;
        }
        else {
          pUVar16 = (UObject *)(**(code **)(lVar6 + 8))();
          pTVar17 = FRawDistributionVector::GetValue
                              (&this->Location,&local_118,*(float *)(lVar20 + 0x90),pUVar16,0,
                               (FRandomStream *)0x0);
          local_150 = (pTVar17->field0_0x0)._s_0.Z;
          dVar8 = (pTVar17->field0_0x0)._s_0.X;
          dVar9 = (pTVar17->field0_0x0)._s_0.Y;
        }
        pUVar16 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
        FRawDistributionVector::GetValue
                  (&this->ScaleFactor,(TVector<double> *)&local_130._s_0,*(float *)(lVar20 + 0x90),
                   pUVar16,0,(FRandomStream *)0x0);
        uVar18 = (ulonglong)uVar2;
        dVar28 = (dVar8 + *(double *)(uVar18 + lVar20)) - *(double *)(lVar20 + 0x18);
        dVar33 = (local_150 + *(double *)(uVar18 + 0x10 + lVar20)) - *(double *)(lVar20 + 0x28);
        dVar8 = __real_3ff0000000000000 - local_130._s_0.X;
        dVar9 = (dVar9 + *(double *)(uVar18 + 8 + lVar20)) - *(double *)(lVar20 + 0x20);
        if (fVar1 <= 0.0) {
          fVar37 = 0.0;
        }
        else {
          fVar37 = fVar12 / fVar1;
        }
        dVar29 = dVar28 * dVar8 + *(double *)(lVar20 + 0x18);
        *(float *)(lVar20 + 0x40) = (float)(dVar28 * local_130._s_0.X) * fVar37;
        *(float *)(lVar20 + 0x44) = (float)(dVar9 * local_130._s_0.X) * fVar37;
        *(float *)(lVar20 + 0x48) = (float)(dVar33 * local_130._s_0.X) * fVar37;
        *(double *)(lVar20 + 0x18) = dVar29;
        *(double *)(lVar20 + 0x20) = dVar9 * dVar8 + *(double *)(lVar20 + 0x20);
        *(double *)(lVar20 + 0x28) = dVar33 * dVar8 + *(double *)(lVar20 + 0x28);
        iVar19 = _finite(dVar29);
        if (((iVar19 == 0) || (iVar19 = _finite(*(double *)(lVar20 + 0x20)), iVar19 == 0)) ||
           (iVar19 = _finite(*(double *)(lVar20 + 0x28)), iVar19 == 0)) {
          local_188 = param_1;
          `UParticleModuleLocationDirect::Update'::__l9::<lambda_1>::operator()(&local_188);
        }
      }
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  return;
}

// operator() @ 1505258a0

bool __thiscall `UParticleModuleLocationDirect::Spawn'::__l2::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554119>);
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
                      (&bGEnsureHasExecuted<7003914095707554119>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052597f;
    }
  }
  bVar4 = false;
LAB_15052597f:
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

// operator() @ 150526190

bool __thiscall `UParticleModuleLocationDirect::Update'::__l9::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554153>);
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
                      (&bGEnsureHasExecuted<7003914095707554153>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052626f;
    }
  }
  bVar4 = false;
LAB_15052626f:
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

