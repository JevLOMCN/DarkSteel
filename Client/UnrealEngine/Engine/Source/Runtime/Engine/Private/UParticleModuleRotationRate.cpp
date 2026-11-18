// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147305f50

UClass * __cdecl UParticleModuleRotationRate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationRate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationRate",
               &Z_Registration_Info_UClass_UParticleModuleRotationRate.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationRate,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleRotationRate>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationRate>,local_res8,
               UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationRate.InnerSingleton;
}

// UParticleModuleRotationRate @ 14730b3f0

UParticleModuleRotationRate * __thiscall
UParticleModuleRotationRate::UParticleModuleRotationRate
          (UParticleModuleRotationRate *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleRotationRate__6B_;
  (this->StartRotationRate)._padding_ = 0;
  (this->StartRotationRate)._padding_ = 0;
  (this->StartRotationRate)._padding_ = 0;
  *(undefined4 *)&(this->StartRotationRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRotationRate)._padding_ + 4) = 0;
  (this->StartRotationRate).MinValue = 0.0;
  (this->StartRotationRate).MaxValue = 0.0;
  (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleRotationRate @ 14730c050

void __thiscall
UParticleModuleRotationRate::~UParticleModuleRotationRate(UParticleModuleRotationRate *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleRotationRate__6B_;
  pvVar1 = (void *)(this->StartRotationRate)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f7a0

UClass * __cdecl UParticleModuleRotationRate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationRate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationRate",
               &Z_Registration_Info_UClass_UParticleModuleRotationRate.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationRate,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleRotationRate>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationRate>,local_res8,
               UParticleModuleRotationRateBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationRate.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleRotationRate @ 14730ffa0

void __cdecl UParticleModuleRotationRate::StaticRegisterNativesUParticleModuleRotationRate(void)

{
  return;
}

// UParticleModuleRotationRate @ 14815df40

UParticleModuleRotationRate * __thiscall
UParticleModuleRotationRate::UParticleModuleRotationRate
          (UParticleModuleRotationRate *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x16;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleRotationRate__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x81;
  (this->StartRotationRate)._padding_ = 0;
  (this->StartRotationRate)._padding_ = 0;
  (this->StartRotationRate)._padding_ = 0;
  *(undefined4 *)&(this->StartRotationRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRotationRate)._padding_ + 4) = 0;
  (this->StartRotationRate).MinValue = 0.0;
  (this->StartRotationRate).MaxValue = 0.0;
  (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// CompileModule @ 148169c60

void __thiscall
UParticleModuleRotationRate::CompileModule
          (UParticleModuleRotationRate *this,FParticleEmitterBuildInfo *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_res8 [2];
  float local_res10 [2];
  UParticleModuleRotationRate *local_18 [2];
  
  FRawDistributionFloat::GetValue(&this->StartRotationRate,0.0,(UObject *)0x0,(FRandomStream *)0x0);
  FRawDistributionFloat::GetOutRange(&this->StartRotationRate,local_res10,local_res8);
  param_1->MaxRotationRate = local_res8[0];
  pFVar2 = (param_1->SpawnModules).AllocatorInstance.Data;
  local_18[0] = this;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(param_1->SpawnModules).ArrayMax * 8)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->SpawnModules).ArrayNum;
  piVar1 = &(param_1->SpawnModules).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->SpawnModules).AllocatorInstance,piVar1);
  }
  (param_1->SpawnModules).ArrayNum = iVar5 + 1;
  *(UParticleModuleRotationRate **)
   ((param_1->SpawnModules).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// InitializeDefaults @ 148184a10

void __thiscall UParticleModuleRotationRate::InitializeDefaults(UParticleModuleRotationRate *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->StartRotationRate);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRotationRate");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b5f0

void __thiscall UParticleModuleRotationRate::PostInitProperties(UParticleModuleRotationRate *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->StartRotationRate);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRotationRate");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionFloatConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148197e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UParticleModuleRotationRate::SetToSensibleDefaults
          (UParticleModuleRotationRate *this,UParticleEmitter *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UDistributionFloat *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = this;
  pUVar3 = (UDistributionFloat *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UDistributionFloat *)0x0))
  {
    (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 == (UDistributionFloat *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->StartRotationRate).Distribution.field0_0x0.DebugPtr = pUVar3;
  }
  pUVar2 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
  bVar1 = FObjectPtr::IsA((FObjectPtr *)&(this->StartRotationRate).Distribution,pUVar2);
  if ((bVar1) &&
     (pUVar3 = (this->StartRotationRate).Distribution.field0_0x0.DebugPtr,
     pUVar3 != (UDistributionFloat *)0x0)) {
    pUVar3->bIsDirty = '\x01';
    *(undefined4 *)&pUVar3[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pUVar3[1]._padding_ + 4) = 0x3f800000;
  }
  return;
}

// Spawn @ 14819d690

void __thiscall
UParticleModuleRotationRate::Spawn(UParticleModuleRotationRate *this,FSpawnContext *param_1)

{
  longlong lVar1;
  FBaseParticle *pFVar2;
  FRandomStream *pFVar3;
  UObject *pUVar4;
  float fVar5;
  
  pFVar3 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar3 == (FRandomStream *)0x0) {
    pFVar3 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  lVar1 = param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar4 = (UObject *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
  fVar5 = FRawDistributionFloat::GetValue
                    (&this->StartRotationRate,*(float *)(lVar1 + 0x1a0),pUVar4,pFVar3);
  fVar5 = fVar5 * __real_40c90fdb;
  pFVar2->RotationRate = fVar5 + pFVar2->RotationRate;
  pFVar2->BaseRotationRate = fVar5 + pFVar2->BaseRotationRate;
  return;
}

// SpawnEx @ 1481a03e0

void __thiscall
UParticleModuleRotationRate::SpawnEx
          (UParticleModuleRotationRate *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  longlong lVar1;
  FBaseParticle *pFVar2;
  UObject *pUVar3;
  float fVar4;
  
  lVar1 = param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar3 = (UObject *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
  fVar4 = FRawDistributionFloat::GetValue
                    (&this->StartRotationRate,*(float *)(lVar1 + 0x1a0),pUVar3,param_2);
  fVar4 = fVar4 * __real_40c90fdb;
  pFVar2->RotationRate = fVar4 + pFVar2->RotationRate;
  pFVar2->BaseRotationRate = fVar4 + pFVar2->BaseRotationRate;
  return;
}

