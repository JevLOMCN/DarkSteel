// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147312ef0

UClass * __cdecl UParticleModuleSpawnPerUnit::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSpawnPerUnit",
               &Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.InnerSingleton,
               StaticRegisterNativesUParticleModuleSpawnPerUnit,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSpawnPerUnit>,
               InternalVTableHelperCtorCaller<UParticleModuleSpawnPerUnit>,local_res8,
               UParticleModuleSpawnBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.InnerSingleton;
}

// UParticleModuleSpawnPerUnit @ 147318b30

UParticleModuleSpawnPerUnit * __thiscall
UParticleModuleSpawnPerUnit::UParticleModuleSpawnPerUnit
          (UParticleModuleSpawnPerUnit *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSpawnPerUnit__6B_;
  (this->SpawnPerUnit)._padding_ = 0;
  (this->SpawnPerUnit)._padding_ = 0;
  (this->SpawnPerUnit)._padding_ = 0;
  *(undefined4 *)&(this->SpawnPerUnit)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SpawnPerUnit)._padding_ + 4) = 0;
  (this->SpawnPerUnit).MinValue = 0.0;
  (this->SpawnPerUnit).MaxValue = 0.0;
  (this->SpawnPerUnit).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleSpawnPerUnit @ 147319690

void __thiscall
UParticleModuleSpawnPerUnit::~UParticleModuleSpawnPerUnit(UParticleModuleSpawnPerUnit *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleSpawnPerUnit__6B_;
  pvVar1 = (void *)(this->SpawnPerUnit)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleSpawnBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731b9b0

UClass * __cdecl UParticleModuleSpawnPerUnit::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSpawnPerUnit",
               &Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.InnerSingleton,
               StaticRegisterNativesUParticleModuleSpawnPerUnit,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSpawnPerUnit>,
               InternalVTableHelperCtorCaller<UParticleModuleSpawnPerUnit>,local_res8,
               UParticleModuleSpawnBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSpawnPerUnit @ 14731cfc0

void __cdecl UParticleModuleSpawnPerUnit::StaticRegisterNativesUParticleModuleSpawnPerUnit(void)

{
  return;
}

// UParticleModuleSpawnPerUnit @ 14815e620

UParticleModuleSpawnPerUnit * __thiscall
UParticleModuleSpawnPerUnit::UParticleModuleSpawnPerUnit
          (UParticleModuleSpawnPerUnit *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 3;
  this->UnitScalar = 50.0;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleSpawnPerUnit__6B_;
  (this->SpawnPerUnit)._padding_ = 0;
  (this->SpawnPerUnit)._padding_ = 0;
  (this->SpawnPerUnit)._padding_ = 0;
  *(undefined4 *)&(this->SpawnPerUnit)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SpawnPerUnit)._padding_ + 4) = 0;
  (this->SpawnPerUnit).MinValue = 0.0;
  (this->SpawnPerUnit).MaxValue = 0.0;
  (this->SpawnPerUnit).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  this->MovementTolerance = 0.1;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14 | 0x80;
  return this;
}

// CompileModule @ 148169fd0

void __thiscall
UParticleModuleSpawnPerUnit::CompileModule
          (UParticleModuleSpawnPerUnit *this,FParticleEmitterBuildInfo *param_1)

{
  param_1->SpawnPerUnitModule = this;
  return;
}

// GetSpawnAmount @ 14817e2b0

bool __thiscall
UParticleModuleSpawnPerUnit::GetSpawnAmount
          (UParticleModuleSpawnPerUnit *this,FContext *param_1,int param_2,float param_3,
          float param_4,int *param_5,float *param_6)

{
  undefined1 *puVar1;
  FParticleEmitterInstance *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UObject *pUVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  
  this_00 = param_1->Owner;
  if ((this_00 == (FParticleEmitterInstance *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Spawn.cpp"
                         ,0x133,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = false;
  pUVar6 = (UObject *)(**(code **)((longlong)*param_1->Owner->Component + 8))();
  fVar9 = FRawDistributionFloat::GetValue
                    (&this->SpawnPerUnit,this_00->EmitterTime,pUVar6,(FRandomStream *)0x0);
  fVar14 = this->UnitScalar;
  if (fVar9 / fVar14 < 0.0) {
    *param_5 = 0;
    *param_6 = 0.0;
  }
  else {
    fVar16 = 0.0;
    pfVar7 = (float *)FParticleEmitterInstance::GetModuleInstanceData
                                (this_00,(UParticleModule *)this);
    pfVar8 = (float *)0x0;
    if (pfVar7 != (float *)0x0) {
      fVar16 = *pfVar7;
      pfVar8 = pfVar7;
    }
    dVar10 = (this_00->Location).field0_0x0._s_0.Y - (this_00->OldLocation).field0_0x0._s_0.Y;
    dVar15 = (this_00->Location).field0_0x0._s_0.Z - (this_00->OldLocation).field0_0x0._s_0.Z;
    if (this->bIgnoreMovementAlongZ != '\0') {
      dVar15 = 0.0;
    }
    if (this->bIgnoreMovementAlongY != '\0') {
      dVar10 = 0.0;
    }
    dVar13 = 0.0;
    if (this->bIgnoreMovementAlongX == '\0') {
      dVar13 = (this_00->Location).field0_0x0._s_0.X - (this_00->OldLocation).field0_0x0._s_0.X;
    }
    auVar11._0_8_ = dVar10 * dVar10 + dVar13 * dVar13 + dVar15 * dVar15;
    auVar11._8_8_ = 0;
    auVar11 = sqrtpd(auVar11,auVar11);
    fVar12 = (float)auVar11._0_8_;
    if ((this->MaxFrameDistance <= 0.0) || (fVar12 <= this->MaxFrameDistance)) {
      if (0.0 < fVar12) {
        bVar3 = this->MovementTolerance * this->UnitScalar < fVar12;
        iVar5 = (int)ROUND(((fVar9 + fVar9) / fVar14) * (fVar12 + fVar16) - __real_3f000000) >> 1;
        *param_5 = iVar5;
        if (param_4 <= 0.0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = __real_3f800000 / param_4;
        }
        *param_6 = (float)iVar5 * fVar14;
        if (pfVar8 != (float *)0x0) {
          fVar14 = (fVar12 + fVar16) - (float)*param_5 * this->UnitScalar;
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          *pfVar8 = fVar14;
        }
        goto LAB_14817e4d2;
      }
    }
    else if (pfVar8 != (float *)0x0) {
      *pfVar8 = 0.0;
    }
    *param_5 = 0;
    *param_6 = 0.0;
  }
LAB_14817e4d2:
  if (this->bIgnoreSpawnRateWhenMoving != 0) {
    return !bVar3;
  }
  return (bool)((byte)this->_padding_ & 1);
}

// InitializeDefaults @ 148184ea0

void __thiscall UParticleModuleSpawnPerUnit::InitializeDefaults(UParticleModuleSpawnPerUnit *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->SpawnPerUnit);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnPerUnit");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SpawnPerUnit).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818bb00

void __thiscall UParticleModuleSpawnPerUnit::PostInitProperties(UParticleModuleSpawnPerUnit *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->SpawnPerUnit);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnPerUnit");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 0.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->SpawnPerUnit).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// RequiredBytesPerInstance @ 148191970

uint __thiscall
UParticleModuleSpawnPerUnit::RequiredBytesPerInstance(UParticleModuleSpawnPerUnit *this)

{
  return 4;
}

