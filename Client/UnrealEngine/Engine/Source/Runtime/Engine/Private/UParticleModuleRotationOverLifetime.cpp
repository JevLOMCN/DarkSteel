// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147305d40

UClass * __cdecl UParticleModuleRotationOverLifetime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationOverLifetime",
               &Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationOverLifetime,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleRotationOverLifetime>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationOverLifetime>,local_res8,
               UParticleModuleRotationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.InnerSingleton;
}

// UParticleModuleRotationOverLifetime @ 14730b3a0

UParticleModuleRotationOverLifetime * __thiscall
UParticleModuleRotationOverLifetime::UParticleModuleRotationOverLifetime
          (UParticleModuleRotationOverLifetime *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleRotationOverLifetime__6B_;
  (this->RotationOverLife)._padding_ = 0;
  (this->RotationOverLife)._padding_ = 0;
  (this->RotationOverLife)._padding_ = 0;
  *(undefined4 *)&(this->RotationOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RotationOverLife)._padding_ + 4) = 0;
  (this->RotationOverLife).MinValue = 0.0;
  (this->RotationOverLife).MaxValue = 0.0;
  (this->RotationOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleRotationOverLifetime @ 14730c010

void __thiscall
UParticleModuleRotationOverLifetime::~UParticleModuleRotationOverLifetime
          (UParticleModuleRotationOverLifetime *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleRotationOverLifetime__6B_;
  pvVar1 = (void *)(this->RotationOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f6e0

UClass * __cdecl UParticleModuleRotationOverLifetime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationOverLifetime",
               &Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationOverLifetime,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleRotationOverLifetime>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationOverLifetime>,local_res8,
               UParticleModuleRotationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationOverLifetime.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleRotationOverLifetime @ 14730ff90

void __cdecl
UParticleModuleRotationOverLifetime::StaticRegisterNativesUParticleModuleRotationOverLifetime(void)

{
  return;
}

// UParticleModuleRotationOverLifetime @ 14815dee0

UParticleModuleRotationOverLifetime * __thiscall
UParticleModuleRotationOverLifetime::UParticleModuleRotationOverLifetime
          (UParticleModuleRotationOverLifetime *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x82;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleRotationOverLifetime__6B_;
  this->Scale = 1;
  (this->RotationOverLife)._padding_ = 0;
  (this->RotationOverLife)._padding_ = 0;
  (this->RotationOverLife)._padding_ = 0;
  *(undefined4 *)&(this->RotationOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RotationOverLife)._padding_ + 4) = 0;
  (this->RotationOverLife).MinValue = 0.0;
  (this->RotationOverLife).MaxValue = 0.0;
  (this->RotationOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// InitializeDefaults @ 148184990

void __thiscall
UParticleModuleRotationOverLifetime::InitializeDefaults(UParticleModuleRotationOverLifetime *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstantCurve *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->RotationOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionRotOverLife");
    pUVar3 = NewObject<UDistributionFloatConstantCurve>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RotationOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b570

void __thiscall
UParticleModuleRotationOverLifetime::PostInitProperties(UParticleModuleRotationOverLifetime *this)

{
  FName *pFVar1;
  UDistributionFloatConstantCurve *pUVar2;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    pFVar1 = ::FName::FName(&local_res8,L"DistributionRotOverLife");
    pUVar2 = NewObject<UDistributionFloatConstantCurve>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDistributionFloatConstantCurve *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->RotationOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar2;
  }
  return;
}

// Update @ 1481b0be0

void __thiscall
UParticleModuleRotationOverLifetime::Update
          (UParticleModuleRotationOverLifetime *this,FUpdateContext *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  UObject *pUVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  
  fVar4 = __real_40c90fdb;
  lVar8 = param_1->_padding_;
  lVar2 = *(longlong *)(lVar8 + 0x168);
  iVar1 = *(int *)(lVar8 + 0x188);
  lVar3 = *(longlong *)(lVar8 + 0x170);
  iVar5 = *(int *)(lVar8 + 0x18c) + -1;
  lVar8 = (longlong)iVar5;
  if (this->Scale == 0) {
    if (-1 < iVar5) {
      do {
        uVar6 = (uint)*(ushort *)(lVar3 + lVar8 * 2) * iVar1;
        uVar9 = (ulonglong)uVar6;
        if ((*(uint *)((ulonglong)uVar6 + 0x6c + lVar2) & 0x4000000) == 0) {
          pUVar7 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          fVar10 = FRawDistributionFloat::GetValue
                             (&this->RotationOverLife,*(float *)(uVar9 + 0x90 + lVar2),pUVar7,
                              (FRandomStream *)0x0);
          *(float *)(uVar9 + 0x3c + lVar2) = fVar10 * fVar4 + *(float *)(uVar9 + 0x3c + lVar2);
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
  }
  else if (-1 < iVar5) {
    do {
      uVar6 = (uint)*(ushort *)(lVar3 + lVar8 * 2) * iVar1;
      uVar9 = (ulonglong)uVar6;
      if ((*(uint *)((ulonglong)uVar6 + 0x6c + lVar2) & 0x4000000) == 0) {
        pUVar7 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
        fVar10 = FRawDistributionFloat::GetValue
                           (&this->RotationOverLife,*(float *)(uVar9 + 0x90 + lVar2),pUVar7,
                            (FRandomStream *)0x0);
        *(float *)(uVar9 + 0x3c + lVar2) = fVar10 * fVar4 * *(float *)(uVar9 + 0x3c + lVar2);
      }
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  return;
}

