// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147306210

UClass * __cdecl UParticleModuleRotationRateMultiplyLife::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationRateMultiplyLife",
               &Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationRateMultiplyLife,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleRotationRateMultiplyLife>
               ,InternalVTableHelperCtorCaller<UParticleModuleRotationRateMultiplyLife>,local_res8,
               UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.InnerSingleton;
}

// UParticleModuleRotationRateMultiplyLife @ 14730b470

UParticleModuleRotationRateMultiplyLife * __thiscall
UParticleModuleRotationRateMultiplyLife::UParticleModuleRotationRateMultiplyLife
          (UParticleModuleRotationRateMultiplyLife *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateMultiplyLife__6B_;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  *(undefined4 *)&(this->LifeMultiplier)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LifeMultiplier)._padding_ + 4) = 0;
  (this->LifeMultiplier).MinValue = 0.0;
  (this->LifeMultiplier).MaxValue = 0.0;
  (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleRotationRateMultiplyLife @ 14730c0b0

void __thiscall
UParticleModuleRotationRateMultiplyLife::~UParticleModuleRotationRateMultiplyLife
          (UParticleModuleRotationRateMultiplyLife *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateMultiplyLife__6B_;
  pvVar1 = (void *)(this->LifeMultiplier)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f920

UClass * __cdecl UParticleModuleRotationRateMultiplyLife::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationRateMultiplyLife",
               &Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationRateMultiplyLife,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleRotationRateMultiplyLife>
               ,InternalVTableHelperCtorCaller<UParticleModuleRotationRateMultiplyLife>,local_res8,
               UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationRateMultiplyLife.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleRotationRateMultiplyLife @ 14730ffc0

void __cdecl
UParticleModuleRotationRateMultiplyLife::
StaticRegisterNativesUParticleModuleRotationRateMultiplyLife(void)

{
  return;
}

// UParticleModuleRotationRateMultiplyLife @ 14815dfe0

UParticleModuleRotationRateMultiplyLife * __thiscall
UParticleModuleRotationRateMultiplyLife::UParticleModuleRotationRateMultiplyLife
          (UParticleModuleRotationRateMultiplyLife *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateMultiplyLife__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  (this->LifeMultiplier)._padding_ = 0;
  *(undefined4 *)&(this->LifeMultiplier)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LifeMultiplier)._padding_ + 4) = 0;
  (this->LifeMultiplier).MinValue = 0.0;
  (this->LifeMultiplier).MaxValue = 0.0;
  (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// InitializeDefaults @ 148184a90

void __thiscall
UParticleModuleRotationRateMultiplyLife::InitializeDefaults
          (UParticleModuleRotationRateMultiplyLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->LifeMultiplier);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionLifeMultiplier");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b680

void __thiscall
UParticleModuleRotationRateMultiplyLife::PostInitProperties
          (UParticleModuleRotationRateMultiplyLife *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->LifeMultiplier);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionLifeMultiplier");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionFloatConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148197f70

void __thiscall
UParticleModuleRotationRateMultiplyLife::SetToSensibleDefaults
          (UParticleModuleRotationRateMultiplyLife *this,UParticleEmitter *param_1)

{
  UDistributionFloat *pUVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  UDistributionFloatConstantCurve *pUVar5;
  UClass *pUVar6;
  int iVar7;
  
  pUVar5 = NewObject<UDistributionFloatConstantCurve>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar5 == (UDistributionFloatConstantCurve *)0x0)) {
    (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
    if (pUVar5 == (UDistributionFloatConstantCurve *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar5;
  }
  pUVar6 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)&(this->LifeMultiplier).Distribution,pUVar6);
  uVar2 = __real_3f800000;
  if ((bVar3) &&
     (pUVar1 = (this->LifeMultiplier).Distribution.field0_0x0.DebugPtr,
     pUVar1 != (UDistributionFloat *)0x0)) {
    iVar7 = 0;
    do {
      uVar4 = (**(code **)(pUVar1->_padding_ + 0x58))(&pUVar1->_padding_);
      (**(code **)(pUVar1->_padding_ + 0x70))(&pUVar1->_padding_,0,uVar4,uVar2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    pUVar1->bIsDirty = '\x01';
  }
  return;
}

// Spawn @ 14819d740

void __thiscall
UParticleModuleRotationRateMultiplyLife::Spawn
          (UParticleModuleRotationRateMultiplyLife *this,FSpawnContext *param_1)

{
  FBaseParticle *pFVar1;
  UObject *pUVar2;
  float fVar3;
  
  pFVar1 = param_1->ParticleBase;
  pUVar2 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar3 = FRawDistributionFloat::GetValue
                    (&this->LifeMultiplier,pFVar1->RelativeTime,pUVar2,(FRandomStream *)0x0);
  pFVar1->RotationRate = fVar3 * pFVar1->RotationRate;
  return;
}

// Update @ 1481b0d20

void __thiscall
UParticleModuleRotationRateMultiplyLife::Update
          (UParticleModuleRotationRateMultiplyLife *this,FUpdateContext *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  UObject *pUVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  
  lVar7 = param_1->_padding_;
  lVar2 = *(longlong *)(lVar7 + 0x168);
  iVar1 = *(int *)(lVar7 + 0x188);
  lVar3 = *(longlong *)(lVar7 + 0x170);
  iVar4 = *(int *)(lVar7 + 0x18c) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      uVar5 = (uint)*(ushort *)(lVar3 + lVar7 * 2) * iVar1;
      uVar8 = (ulonglong)uVar5;
      if ((*(uint *)((ulonglong)uVar5 + 0x6c + lVar2) & 0x4000000) == 0) {
        pUVar6 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
        fVar9 = FRawDistributionFloat::GetValue
                          (&this->LifeMultiplier,*(float *)(uVar8 + 0x90 + lVar2),pUVar6,
                           (FRandomStream *)0x0);
        *(float *)(uVar8 + 0x5c + lVar2) = fVar9 * *(float *)(uVar8 + 0x5c + lVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return;
}

