// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147306910

UClass * __cdecl UParticleModuleSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSize",
               &Z_Registration_Info_UClass_UParticleModuleSize.InnerSingleton,
               StaticRegisterNativesUParticleModuleSize,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSize>,
               InternalVTableHelperCtorCaller<UParticleModuleSize>,local_res8,
               UParticleModuleSizeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSize.InnerSingleton;
}

// UParticleModuleSize @ 14730b580

UParticleModuleSize * __thiscall
UParticleModuleSize::UParticleModuleSize(UParticleModuleSize *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UParticleModuleSizeBase::UParticleModuleSizeBase((UParticleModuleSizeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSize__6B_;
  (this->StartSize)._padding_ = 0;
  (this->StartSize)._padding_ = 0;
  (this->StartSize)._padding_ = 0;
  *(undefined4 *)&(this->StartSize)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartSize)._padding_ + 4) = 0;
  (this->StartSize).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartSize).MaxValue = 0.0;
  (this->StartSize).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartSize).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartSize).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartSize).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartSize).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartSize).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartSize).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  return this;
}

// ~UParticleModuleSize @ 14730c1b0

void __thiscall UParticleModuleSize::~UParticleModuleSize(UParticleModuleSize *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleSize__6B_;
  pvVar1 = (void *)(this->StartSize)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UParticleModuleSizeBase::~UParticleModuleSizeBase((UParticleModuleSizeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14730fb60

UClass * __cdecl UParticleModuleSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSize",
               &Z_Registration_Info_UClass_UParticleModuleSize.InnerSingleton,
               StaticRegisterNativesUParticleModuleSize,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSize>,
               InternalVTableHelperCtorCaller<UParticleModuleSize>,local_res8,
               UParticleModuleSizeBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSize.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSize @ 14730fff0

void __cdecl UParticleModuleSize::StaticRegisterNativesUParticleModuleSize(void)

{
  return;
}

// UParticleModuleSize @ 14815e120

UParticleModuleSize * __thiscall
UParticleModuleSize::UParticleModuleSize(UParticleModuleSize *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleSize__6B_;
  (this->StartSize)._padding_ = 0;
  (this->StartSize)._padding_ = 0;
  (this->StartSize)._padding_ = 0;
  *(undefined4 *)&(this->StartSize)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartSize)._padding_ + 4) = 0;
  (this->StartSize).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartSize).MaxValue = 0.0;
  (this->StartSize).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartSize).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartSize).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartSize).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartSize).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->StartSize).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StartSize).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfd | 1;
  return this;
}

// CompileModule @ 148169d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleSize::CompileModule(UParticleModuleSize *this,FParticleEmitterBuildInfo *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  float local_res8 [2];
  float local_res10 [2];
  UParticleModuleSize *local_48;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  local_res10[0] = 0.0;
  local_res8[0] = 0.0;
  FRawDistributionVector::GetValue
            (&this->StartSize,&local_28,0.0,(UObject *)0x0,0,(FRandomStream *)0x0);
  FRawDistributionVector::GetOutRange(&this->StartSize,local_res10,local_res8);
  dVar4 = (param_1->MaxSize).field0_0x0._s_0.Y;
  (param_1->MaxSize).field0_0x0._s_0.X =
       (param_1->MaxSize).field0_0x0._s_0.X * (double)local_res8[0];
  (param_1->MaxSize).field0_0x0._s_0.Y = dVar4 * (double)local_res8[0];
  pFVar2 = (param_1->SpawnModules).AllocatorInstance.Data;
  local_48 = this;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(param_1->SpawnModules).ArrayMax * 8
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (param_1->SpawnModules).ArrayNum;
  piVar1 = &(param_1->SpawnModules).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->SpawnModules).AllocatorInstance,piVar1);
  }
  local_40._s_0.Y = _UNK_150689688;
  local_40._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  (param_1->SpawnModules).ArrayNum = iVar6 + 1;
  local_40._s_0.Z = __real_3ff0000000000000;
  *(UParticleModuleSize **)((param_1->SpawnModules).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_48;
  FComposableVectorDistribution::InitializeWithConstant
            (&param_1->SizeScale,(TVector<double> *)&local_40._s_0);
  return;
}

// InitializeDefaults @ 148184b10

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleSize::InitializeDefaults(UParticleModuleSize *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->StartSize);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartSize");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Min).field0_0x0._s_0.X = 1.0;
    (pUVar3->Min).field0_0x0._s_0.Y = 1.0;
    (pUVar3->Min).field0_0x0._s_0.Z = 1.0;
    (pUVar3->Max).field0_0x0._s_0.X = 1.0;
    (pUVar3->Max).field0_0x0._s_0.Y = 1.0;
    (pUVar3->Max).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartSize).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b710

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleSize::PostInitProperties(UParticleModuleSize *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->StartSize);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartSize");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Min).field0_0x0._s_0.X = 1.0;
      (pUVar3->Min).field0_0x0._s_0.Y = 1.0;
      (pUVar3->Min).field0_0x0._s_0.Z = 1.0;
      (pUVar3->Max).field0_0x0._s_0.X = 1.0;
      (pUVar3->Max).field0_0x0._s_0.Y = 1.0;
      (pUVar3->Max).field0_0x0._s_0.Z = 1.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartSize).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// Spawn @ 14819d790

void __thiscall UParticleModuleSize::Spawn(UParticleModuleSize *this,FSpawnContext *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  FBaseParticle *pFVar4;
  FRandomStream *pFVar5;
  UObject *pUVar6;
  TVector<double>_u_0 local_28;
  
  pFVar5 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar5 == (FRandomStream *)0x0) {
    pFVar5 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  lVar3 = param_1->_padding_;
  pFVar4 = param_1->ParticleBase;
  pUVar6 = (UObject *)(**(code **)(**(longlong **)(lVar3 + 0x10) + 8))();
  FRawDistributionVector::GetValue
            (&this->StartSize,(TVector<double> *)&local_28._s_0,*(float *)(lVar3 + 0x1a0),pUVar6,0,
             pFVar5);
  fVar1 = (pFVar4->Size).field0_0x0._s_0.Z;
  (pFVar4->Size).field0_0x0._s_0.Y = (float)local_28._s_0.Y + (pFVar4->Size).field0_0x0._s_0.Y;
  fVar2 = (pFVar4->Size).field0_0x0._s_0.X;
  (pFVar4->Size).field0_0x0._s_0.Z = (float)local_28._s_0.Z + fVar1;
  (pFVar4->Size).field0_0x0._s_0.X = (float)local_28._s_0.X + fVar2;
  AdjustParticleBaseSizeForUVFlipping
            ((TVector<double> *)&local_28._s_0,
             *(EParticleUVFlipMode *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x30) + 0xf4),
             pFVar5);
  fVar1 = (pFVar4->BaseSize).field0_0x0._s_0.Z;
  (pFVar4->BaseSize).field0_0x0._s_0.Y =
       (float)local_28._s_0.Y + (pFVar4->BaseSize).field0_0x0._s_0.Y;
  fVar2 = (pFVar4->BaseSize).field0_0x0._s_0.X;
  (pFVar4->BaseSize).field0_0x0._s_0.Z = (float)local_28._s_0.Z + fVar1;
  (pFVar4->BaseSize).field0_0x0._s_0.X = (float)local_28._s_0.X + fVar2;
  return;
}

// SpawnEx @ 1481a0460

void __thiscall
UParticleModuleSize::SpawnEx
          (UParticleModuleSize *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  FBaseParticle *pFVar4;
  UObject *pUVar5;
  TVector<double>_u_0 local_28;
  
  lVar3 = param_1->_padding_;
  pFVar4 = param_1->ParticleBase;
  pUVar5 = (UObject *)(**(code **)(**(longlong **)(lVar3 + 0x10) + 8))();
  FRawDistributionVector::GetValue
            (&this->StartSize,(TVector<double> *)&local_28._s_0,*(float *)(lVar3 + 0x1a0),pUVar5,0,
             param_2);
  fVar1 = (pFVar4->Size).field0_0x0._s_0.Z;
  (pFVar4->Size).field0_0x0._s_0.Y = (float)local_28._s_0.Y + (pFVar4->Size).field0_0x0._s_0.Y;
  fVar2 = (pFVar4->Size).field0_0x0._s_0.X;
  (pFVar4->Size).field0_0x0._s_0.Z = (float)local_28._s_0.Z + fVar1;
  (pFVar4->Size).field0_0x0._s_0.X = (float)local_28._s_0.X + fVar2;
  AdjustParticleBaseSizeForUVFlipping
            ((TVector<double> *)&local_28._s_0,
             *(EParticleUVFlipMode *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x30) + 0xf4),
             param_2);
  fVar1 = (pFVar4->BaseSize).field0_0x0._s_0.Z;
  (pFVar4->BaseSize).field0_0x0._s_0.Y =
       (float)local_28._s_0.Y + (pFVar4->BaseSize).field0_0x0._s_0.Y;
  fVar2 = (pFVar4->BaseSize).field0_0x0._s_0.X;
  (pFVar4->BaseSize).field0_0x0._s_0.Z = (float)local_28._s_0.Z + fVar1;
  (pFVar4->BaseSize).field0_0x0._s_0.X = (float)local_28._s_0.X + fVar2;
  return;
}

