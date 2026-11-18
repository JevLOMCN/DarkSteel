// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 1472f84f0

UClass * __cdecl UParticleModuleLifetime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLifetime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLifetime",
               &Z_Registration_Info_UClass_UParticleModuleLifetime.InnerSingleton,
               StaticRegisterNativesUParticleModuleLifetime,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleLifetime>,
               InternalVTableHelperCtorCaller<UParticleModuleLifetime>,local_res8,
               UParticleModuleLifetimeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLifetime.InnerSingleton;
}

// UParticleModuleLifetime @ 1472fd420

UParticleModuleLifetime * __thiscall
UParticleModuleLifetime::UParticleModuleLifetime
          (UParticleModuleLifetime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLifetime__6B_;
  (this->Lifetime)._padding_ = 0;
  (this->Lifetime)._padding_ = 0;
  (this->Lifetime)._padding_ = 0;
  *(undefined4 *)&(this->Lifetime)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Lifetime)._padding_ + 4) = 0;
  (this->Lifetime).MinValue = 0.0;
  (this->Lifetime).MaxValue = 0.0;
  (this->Lifetime).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleLifetime @ 1472fdf80

void __thiscall UParticleModuleLifetime::~UParticleModuleLifetime(UParticleModuleLifetime *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLifetime__6B_;
  pvVar1 = (void *)(this->Lifetime)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147301370

UClass * __cdecl UParticleModuleLifetime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLifetime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLifetime",
               &Z_Registration_Info_UClass_UParticleModuleLifetime.InnerSingleton,
               StaticRegisterNativesUParticleModuleLifetime,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleLifetime>,
               InternalVTableHelperCtorCaller<UParticleModuleLifetime>,local_res8,
               UParticleModuleLifetimeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLifetime.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLifetime @ 147301940

void __cdecl UParticleModuleLifetime::StaticRegisterNativesUParticleModuleLifetime(void)

{
  return;
}

// UParticleModuleLifetime @ 14815c530

UParticleModuleLifetime * __thiscall
UParticleModuleLifetime::UParticleModuleLifetime
          (UParticleModuleLifetime *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x16;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleLifetime__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x81;
  (this->Lifetime)._padding_ = 0;
  (this->Lifetime)._padding_ = 0;
  (this->Lifetime)._padding_ = 0;
  *(undefined4 *)&(this->Lifetime)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Lifetime)._padding_ + 4) = 0;
  (this->Lifetime).MinValue = 0.0;
  (this->Lifetime).MaxValue = 0.0;
  (this->Lifetime).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// CompileModule @ 148169a40

void __thiscall
UParticleModuleLifetime::CompileModule
          (UParticleModuleLifetime *this,FParticleEmitterBuildInfo *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_res8 [2];
  float local_res10 [2];
  UParticleModuleLifetime *local_18 [2];
  
  FRawDistributionFloat::GetValue(&this->Lifetime,0.0,(UObject *)0x0,(FRandomStream *)0x0);
  FRawDistributionFloat::GetOutRange(&this->Lifetime,local_res10,local_res8);
  param_1->MaxLifetime = local_res8[0];
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
  *(UParticleModuleLifetime **)
   ((param_1->SpawnModules).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// GetLifetimeValue @ 14817a2f0

float __thiscall
UParticleModuleLifetime::GetLifetimeValue
          (UParticleModuleLifetime *this,FContext *param_1,float param_2,UObject *param_3)

{
  float fVar1;
  
  fVar1 = FRawDistributionFloat::GetValue(&this->Lifetime,param_2,param_3,(FRandomStream *)0x0);
  return fVar1;
}

// GetMaxLifetime @ 14817a690

float __thiscall UParticleModuleLifetime::GetMaxLifetime(UParticleModuleLifetime *this)

{
  float local_res8 [2];
  float local_res10 [6];
  
  FRawDistributionFloat::GetOutRange(&this->Lifetime,local_res10,local_res8);
  return local_res8[0];
}

// InitializeDefaults @ 148183a20

void __thiscall UParticleModuleLifetime::InitializeDefaults(UParticleModuleLifetime *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->Lifetime);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionLifetime");
    pUVar3 = NewObject<UDistributionFloatUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Lifetime).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818a350

void __thiscall UParticleModuleLifetime::PostInitProperties(UParticleModuleLifetime *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatUniform *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->Lifetime);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionLifetime");
      pUVar3 = NewObject<UDistributionFloatUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionFloatUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Lifetime).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 148197b80

void __thiscall
UParticleModuleLifetime::SetToSensibleDefaults
          (UParticleModuleLifetime *this,UParticleEmitter *param_1)

{
  TObjectPtr<UDistributionFloat> *this_00;
  UDistributionFloat *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  
  this_00 = &(this->Lifetime).Distribution;
  if ((this->Lifetime).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0) {
    pUVar3 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if ((bVar2) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UDistributionFloat *)0x0)) {
      pUVar1->bIsDirty = '\x01';
      *(undefined4 *)&pUVar1[1]._padding_ = 0x3f800000;
      *(undefined4 *)((longlong)&pUVar1[1]._padding_ + 4) = 0x3f800000;
    }
  }
  return;
}

// Spawn @ 14819aa20

void __thiscall UParticleModuleLifetime::Spawn(UParticleModuleLifetime *this,FSpawnContext *param_1)

{
  longlong lVar1;
  FBaseParticle *pFVar2;
  float fVar3;
  FRandomStream *pFVar4;
  UObject *pUVar5;
  float fVar6;
  float fVar7;
  
  pFVar4 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar4 == (FRandomStream *)0x0) {
    pFVar4 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  lVar1 = param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar5 = (UObject *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
  fVar6 = FRawDistributionFloat::GetValue(&this->Lifetime,*(float *)(lVar1 + 0x1a0),pUVar5,pFVar4);
  fVar3 = __real_3f800000;
  fVar7 = 0.0;
  if (pFVar2->OneOverMaxLifetime <= 0.0) {
    if (0.0 < fVar6) {
      fVar7 = __real_3f800000 / fVar6;
    }
  }
  else {
    fVar7 = __real_3f800000 / (__real_3f800000 / pFVar2->OneOverMaxLifetime + fVar6);
  }
  pFVar2->OneOverMaxLifetime = fVar7;
  if (pFVar2->RelativeTime <= fVar3) {
    pFVar2->RelativeTime = fVar7 * param_1->SpawnTime;
  }
  else {
    pFVar2->RelativeTime = pFVar2->RelativeTime;
  }
  return;
}

// SpawnEx @ 14819e460

void __thiscall
UParticleModuleLifetime::SpawnEx
          (UParticleModuleLifetime *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  longlong lVar1;
  FBaseParticle *pFVar2;
  float fVar3;
  UObject *pUVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar4 = (UObject *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
  fVar5 = FRawDistributionFloat::GetValue(&this->Lifetime,*(float *)(lVar1 + 0x1a0),pUVar4,param_2);
  fVar3 = __real_3f800000;
  fVar6 = 0.0;
  if (pFVar2->OneOverMaxLifetime <= 0.0) {
    if (0.0 < fVar5) {
      fVar6 = __real_3f800000 / fVar5;
    }
  }
  else {
    fVar6 = __real_3f800000 / (__real_3f800000 / pFVar2->OneOverMaxLifetime + fVar5);
  }
  pFVar2->OneOverMaxLifetime = fVar6;
  if (pFVar2->RelativeTime <= fVar3) {
    pFVar2->RelativeTime = fVar6 * param_1->SpawnTime;
  }
  else {
    pFVar2->RelativeTime = pFVar2->RelativeTime;
  }
  return;
}

