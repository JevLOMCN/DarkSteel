// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 1472f93d0

UClass * __cdecl UParticleModuleCollision::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCollision.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCollision",
               &Z_Registration_Info_UClass_UParticleModuleCollision.InnerSingleton,
               StaticRegisterNativesUParticleModuleCollision,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleCollision>,
               InternalVTableHelperCtorCaller<UParticleModuleCollision>,local_res8,
               UParticleModuleCollisionBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCollision.InnerSingleton;
}

// UParticleModuleCollision @ 1472fcc30

UParticleModuleCollision * __thiscall
UParticleModuleCollision::UParticleModuleCollision
          (UParticleModuleCollision *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleCollision__6B_;
  (this->DampingFactor)._padding_ = 0;
  (this->DampingFactor)._padding_ = 0;
  *(undefined4 *)&(this->DampingFactor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DampingFactor)._padding_ + 4) = 0;
  (this->DampingFactor)._padding_ = 0;
  (this->DampingFactor).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DampingFactor).MaxValue = 0.0;
  (this->DampingFactor).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DampingFactor).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->DampingFactor).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DampingFactor).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DampingFactor).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->DampingFactor).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DampingFactor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->DampingFactorRotation)._padding_ = 0;
  (this->DampingFactorRotation)._padding_ = 0;
  *(undefined4 *)&(this->DampingFactorRotation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DampingFactorRotation)._padding_ + 4) = 0;
  (this->DampingFactorRotation)._padding_ = 0;
  (this->DampingFactorRotation).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DampingFactorRotation).MaxValue = 0.0;
  (this->DampingFactorRotation).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DampingFactorRotation).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->DampingFactorRotation).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DampingFactorRotation).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DampingFactorRotation).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->DampingFactorRotation).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DampingFactorRotation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->MaxCollisions)._padding_ = 0;
  (this->MaxCollisions)._padding_ = 0;
  (this->MaxCollisions)._padding_ = 0;
  *(undefined4 *)&(this->MaxCollisions)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->MaxCollisions)._padding_ + 4) = 0;
  (this->MaxCollisions).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->CollisionTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionTypes).ArrayNum = 0;
  (this->CollisionTypes).ArrayMax = 0;
  (this->ObjectParams).ObjectTypesToQuery = 0;
  (this->ObjectParams).IgnoreMask = '\0';
  (this->ParticleMass)._padding_ = 0;
  (this->ParticleMass)._padding_ = 0;
  (this->ParticleMass)._padding_ = 0;
  *(undefined4 *)&(this->ParticleMass)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ParticleMass)._padding_ + 4) = 0;
  (this->ParticleMass).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->DelayAmount)._padding_ = 0;
  (this->DelayAmount)._padding_ = 0;
  (this->DelayAmount)._padding_ = 0;
  *(undefined4 *)&(this->DelayAmount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DelayAmount)._padding_ + 4) = 0;
  (this->DelayAmount).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->MaxCollisions).MinValue = 0.0;
  (this->MaxCollisions).MaxValue = 0.0;
  (this->ParticleMass).MinValue = 0.0;
  (this->ParticleMass).MaxValue = 0.0;
  (this->DelayAmount).MinValue = 0.0;
  (this->DelayAmount).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleCollision @ 1472fdb10

void __thiscall UParticleModuleCollision::~UParticleModuleCollision(UParticleModuleCollision *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UParticleModuleCollision__6B_;
  pvVar1 = (void *)(this->DelayAmount)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->ParticleMass)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->CollisionTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = (void *)(this->MaxCollisions)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->DampingFactorRotation)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->DampingFactor)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473006c0

UClass * __cdecl UParticleModuleCollision::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCollision.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCollision",
               &Z_Registration_Info_UClass_UParticleModuleCollision.InnerSingleton,
               StaticRegisterNativesUParticleModuleCollision,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleCollision>,
               InternalVTableHelperCtorCaller<UParticleModuleCollision>,local_res8,
               UParticleModuleCollisionBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCollision.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleCollision @ 147301830

void __cdecl UParticleModuleCollision::StaticRegisterNativesUParticleModuleCollision(void)

{
  return;
}

// __VTableCtorCaller @ 147303a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UParticleModuleCollision::__VTableCtorCaller(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    *(undefined ***)pUVar2 = &___7UParticleModuleCollision__6B_;
    *(undefined8 *)&pUVar2[1].field_0x8 = 0;
    *(undefined8 *)&pUVar2[1].field_0x18 = 0;
    *(undefined4 *)&pUVar2[1].field_0x20 = 0;
    pUVar2[1].field_0x24 = 0;
    *(undefined8 *)&pUVar2[1].field_0x10 = 0;
    *(undefined8 *)(pUVar2 + 2) = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[2].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[2].field_0x10 = uVar1;
    *(double *)&pUVar2[2].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[2].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pUVar2 + 3) = uVar1;
    *(double *)&pUVar2[3].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&pUVar2[3].field_0x10 = 0;
    *(undefined8 *)&pUVar2[3].field_0x18 = 0;
    *(undefined8 *)(pUVar2 + 4) = 0;
    *(undefined4 *)&pUVar2[4].field_0x8 = 0;
    pUVar2[4].field_0xc = 0;
    *(undefined8 *)&pUVar2[3].field_0x20 = 0;
    *(undefined8 *)&pUVar2[4].field_0x10 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[4].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[4].field_0x20 = uVar1;
    *(double *)(pUVar2 + 5) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[5].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[5].field_0x10 = uVar1;
    *(double *)&pUVar2[5].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&pUVar2[5].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 6) = 0;
    *(undefined8 *)&pUVar2[6].field_0x8 = 0;
    *(undefined8 *)&pUVar2[6].field_0x10 = 0;
    *(undefined4 *)&pUVar2[6].field_0x18 = 0;
    pUVar2[6].field_0x1c = 0;
    *(undefined8 *)(pUVar2 + 7) = 0;
    *(undefined8 *)&pUVar2[7].field_0x10 = 0;
    *(undefined8 *)&pUVar2[7].field_0x18 = 0;
    *(undefined4 *)&pUVar2[7].field_0x20 = 0;
    pUVar2[7].field_0x24 = 0;
    *(undefined8 *)&pUVar2[8].field_0x8 = 0;
    *(undefined8 *)&pUVar2[8].field_0x10 = 0;
    *(undefined8 *)&pUVar2[8].field_0x18 = 0;
    *(undefined4 *)&pUVar2[8].field_0x20 = 0;
    pUVar2[8].field_0x24 = 0;
    *(undefined8 *)&pUVar2[9].field_0x8 = 0;
    *(undefined8 *)&pUVar2[9].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 10) = 0;
    *(undefined8 *)&pUVar2[10].field_0x8 = 0;
    *(undefined4 *)&pUVar2[10].field_0x10 = 0;
    pUVar2[10].field_0x14 = 0;
    *(undefined8 *)&pUVar2[10].field_0x20 = 0;
    *(undefined8 *)&pUVar2[6].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 9) = 0;
    *(undefined8 *)&pUVar2[10].field_0x18 = 0;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// UParticleModuleCollision @ 14815ba10

UParticleModuleCollision * __thiscall
UParticleModuleCollision::UParticleModuleCollision
          (UParticleModuleCollision *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  EObjectTypeQuery EVar8;
  int iVar9;
  UParticleModuleCollision *pUVar10;
  FScriptContainerElement local_18 [16];
  
  UObject::UObject((UObject *)this,param_1);
  pTVar2 = &this->CollisionTypes;
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleCollision__6B_;
  (this->DampingFactor)._padding_ = 0;
  (this->DampingFactor)._padding_ = 0;
  *(undefined4 *)&(this->DampingFactor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DampingFactor)._padding_ + 4) = 0;
  (this->DampingFactor)._padding_ = 0;
  (this->DampingFactor).MinValue = 0.0;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DampingFactor).MaxValue = 0.0;
  (this->DampingFactor).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DampingFactor).MinValueVec.field0_0x0._s_0.Y = (double)uVar6;
  (this->DampingFactor).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DampingFactor).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DampingFactor).MaxValueVec.field0_0x0._s_0.Y = (double)uVar6;
  (this->DampingFactor).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DampingFactor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->DampingFactorRotation)._padding_ = 0;
  (this->DampingFactorRotation)._padding_ = 0;
  *(undefined4 *)&(this->DampingFactorRotation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DampingFactorRotation)._padding_ + 4) = 0;
  (this->DampingFactorRotation)._padding_ = 0;
  (this->DampingFactorRotation).MinValue = 0.0;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DampingFactorRotation).MaxValue = 0.0;
  (this->DampingFactorRotation).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DampingFactorRotation).MinValueVec.field0_0x0._s_0.Y = (double)uVar6;
  (this->DampingFactorRotation).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DampingFactorRotation).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DampingFactorRotation).MaxValueVec.field0_0x0._s_0.Y = (double)uVar6;
  (this->DampingFactorRotation).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DampingFactorRotation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  (this->MaxCollisions)._padding_ = 0;
  (this->MaxCollisions)._padding_ = 0;
  (this->MaxCollisions)._padding_ = 0;
  *(undefined4 *)&(this->MaxCollisions)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->MaxCollisions)._padding_ + 4) = 0;
  (this->MaxCollisions).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CollisionTypes).ArrayNum = 0;
  (this->CollisionTypes).ArrayMax = 0;
  (this->ObjectParams).ObjectTypesToQuery = 0;
  (this->ObjectParams).IgnoreMask = '\0';
  (this->ParticleMass)._padding_ = 0;
  (this->ParticleMass)._padding_ = 0;
  (this->ParticleMass)._padding_ = 0;
  *(undefined4 *)&(this->ParticleMass)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ParticleMass)._padding_ + 4) = 0;
  (this->ParticleMass).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->DelayAmount)._padding_ = 0;
  (this->DelayAmount)._padding_ = 0;
  (this->DelayAmount)._padding_ = 0;
  *(undefined4 *)&(this->DelayAmount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DelayAmount)._padding_ + 4) = 0;
  (this->DelayAmount).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->MaxCollisions).MinValue = 0.0;
  (this->MaxCollisions).MaxValue = 0.0;
  (this->ParticleMass).MinValue = 0.0;
  (this->ParticleMass).MaxValue = 0.0;
  (this->DelayAmount).MinValue = 0.0;
  (this->DelayAmount).MaxValue = 0.0;
  this->bApplyPhysics = 0;
  this->bIgnoreTriggerVolumes = 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfd;
  this->bPawnsDoNotDecrementCount = 1;
  this->bDropDetail = 1;
  this->bIgnoreSourceActor = 1;
  this->bCollideOnlyIfVisible = 1;
  (this->CollisionCompletionOption).Value = '\0';
  this->DirScalar = 3.5;
  this->VerticalFudgeFactor = 0.1;
  this->MaxCollisionDistance = 1000.0;
  EVar8 = UEngineTypes::ConvertToObjectType(ECC_WorldStatic);
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = SUB41(EVar8,0);
  if ((pFVar4 <= local_18) && (local_18 < pFVar4 + (this->CollisionTypes).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pUVar10 = (UParticleModuleCollision *)(*pcVar5)();
      return pUVar10;
    }
  }
  iVar9 = (this->CollisionTypes).ArrayNum;
  if (iVar9 == (this->CollisionTypes).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,&(this->CollisionTypes).ArrayMax);
  }
  (this->CollisionTypes).ArrayNum = iVar9 + 1;
  (pTVar2->AllocatorInstance).Data[iVar9] = local_18[0];
  return this;
}

// CanTickInAnyThread @ 148168a40

bool __thiscall UParticleModuleCollision::CanTickInAnyThread(UParticleModuleCollision *this)

{
  return (bool)(~this->bApplyPhysics & 1);
}

// GenerateLODModuleValues @ 148175980

bool __thiscall
UParticleModuleCollision::GenerateLODModuleValues
          (UParticleModuleCollision *this,UParticleModule *param_1,float param_2,
          UParticleLODLevel *param_3)

{
  return true;
}

// InitializeDefaults @ 148183150

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleCollision::InitializeDefaults(UParticleModuleCollision *this)

{
  code *pcVar1;
  bool bVar2;
  ECollisionChannel EVar3;
  FName *pFVar4;
  UDistributionVectorUniform *pUVar5;
  UDistributionVectorConstant *pUVar6;
  UDistributionFloatUniform *pUVar7;
  UDistributionFloatConstant *pUVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStackX_c;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_28;
  FName local_20;
  
  bVar2 = FRawDistributionVector::IsCreated(&this->DampingFactor);
  uVar9 = 0;
  if (!bVar2) {
    pFVar4 = ::FName::FName(&local_res10,L"DistributionDampingFactor");
    pUVar5 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar4,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DampingFactor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar5;
  }
  bVar2 = FRawDistributionVector::IsCreated(&this->DampingFactorRotation);
  if (!bVar2) {
    pFVar4 = ::FName::FName(&local_res18,L"DistributionDampingFactorRotation");
    pUVar6 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar4,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar6->Constant).field0_0x0._s_0.X = 1.0;
    (pUVar6->Constant).field0_0x0._s_0.Y = 1.0;
    (pUVar6->Constant).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->DampingFactorRotation).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar6;
  }
  bVar2 = FRawDistributionFloat::IsCreated(&this->MaxCollisions);
  if (!bVar2) {
    pFVar4 = ::FName::FName(&local_res20,L"DistributionMaxCollisions");
    pUVar7 = NewObject<UDistributionFloatUniform>
                       ((UObject *)this,*pFVar4,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDistributionFloatUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->MaxCollisions).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar7;
  }
  bVar2 = FRawDistributionFloat::IsCreated(&this->ParticleMass);
  if (!bVar2) {
    pFVar4 = ::FName::FName(&local_28,L"DistributionParticleMass");
    pUVar8 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar4,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar8->Constant = 0.1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->ParticleMass).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar8;
  }
  bVar2 = FRawDistributionFloat::IsCreated(&this->DelayAmount);
  uVar10 = uVar9;
  if (!bVar2) {
    pFVar4 = ::FName::FName(&local_20,L"DistributionDelayAmount");
    pUVar8 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar4,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar8->Constant = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->DelayAmount).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar8;
  }
  while( true ) {
    if (((int)uVar10 < 0) || ((this->CollisionTypes).ArrayNum <= (int)uVar10)) {
      this->ObjectParams =
           (FCollisionObjectQueryParams)(CONCAT44(uStackX_c,uVar9) & 0xffffff00ffffffff);
      return;
    }
    if (((int)uVar10 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    EVar3 = UEngineTypes::ConvertToCollisionChannel
                      ((uint)(byte)(this->CollisionTypes).AllocatorInstance.Data[(int)uVar10]);
    uVar9 = uVar9 | 1 << (EVar3 & ECC_GameTraceChannel18);
    uVar10 = uVar10 + 1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// PerformCollisionCheck @ 148189000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UParticleModuleCollision::PerformCollisionCheck
          (UParticleModuleCollision *this,FParticleEmitterInstance *param_1,FBaseParticle *param_2,
          FHitResult *param_3,AActor *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(**(code **)((longlong)*param_1->Component + 0x138))();
  if (plVar4 == (longlong *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Collision.cpp"
                       ,0x246,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)(*plVar4 + 0xba8))
                    (plVar4,param_3,param_4,param_5,param_6,param_7,&this->ObjectParams);
  return (bool)uVar3;
}

// PostInitProperties @ 148189c80

void __thiscall UParticleModuleCollision::PostInitProperties(UParticleModuleCollision *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    InitializeDefaults(this);
    return;
  }
  return;
}

// PostLoad @ 14818c350

void __thiscall UParticleModuleCollision::PostLoad(UParticleModuleCollision *this)

{
  code *pcVar1;
  bool bVar2;
  ECollisionChannel EVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStackX_c;
  
  UObject::PostLoad((UObject *)this);
  uVar5 = 0;
  for (iVar4 = 0; (-1 < iVar4 && (iVar4 < (this->CollisionTypes).ArrayNum)); iVar4 = iVar4 + 1) {
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar3 = UEngineTypes::ConvertToCollisionChannel
                      ((uint)(byte)(this->CollisionTypes).AllocatorInstance.Data[iVar4]);
    uVar5 = uVar5 | 1 << (EVar3 & ECC_GameTraceChannel18);
  }
  this->ObjectParams = (FCollisionObjectQueryParams)(CONCAT44(uStackX_c,uVar5) & 0xffffff00ffffffff)
  ;
  return;
}

// PrepPerInstanceBlock @ 14818d7f0

uint __thiscall
UParticleModuleCollision::PrepPerInstanceBlock
          (UParticleModuleCollision *this,FParticleEmitterInstance *param_1,void *param_2)

{
  *(undefined1 *)param_2 = 0;
  return 0;
}

// RequiredBytes @ 148191820

uint __thiscall
UParticleModuleCollision::RequiredBytes
          (UParticleModuleCollision *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x20;
}

// RequiredBytesPerInstance @ 1481918c0

uint __thiscall UParticleModuleCollision::RequiredBytesPerInstance(UParticleModuleCollision *this)

{
  return 4;
}

// SetToSensibleDefaults @ 1481977a0

void __thiscall
UParticleModuleCollision::SetToSensibleDefaults
          (UParticleModuleCollision *this,UParticleEmitter *param_1)

{
  TObjectPtr<UDistributionFloat> *this_00;
  UDistributionFloat *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  
  this_00 = &(this->MaxCollisions).Distribution;
  if ((this_00->field0_0x0).DebugPtr != (UDistributionFloat *)0x0) {
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

// Spawn @ 14819a2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleCollision::Spawn(UParticleModuleCollision *this,FSpawnContext *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  FBaseParticle *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ParticleCollisionTime> FVar10;
  UObject *pUVar11;
  TVector<double> *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  ulonglong uVar17;
  float fVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  TVector<double>_u_0 local_58;
  
  FVar16.Value = 0;
  FVar10 = StatPtr_STAT_ParticleCollisionTime;
  if (StatPtr_STAT_ParticleCollisionTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleCollisionTime>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_ParticleCollisionTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ParticleCollisionTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleCollisionTime,*pFVar9,
                        L"Particle Collision Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar6 = false;
  bVar8 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Collision.cpp"
                   ,0x9a);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      FVar16.Value = FVar14.Value;
      goto LAB_14819a417;
    }
  }
  bVar7 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_14819a417:
  lVar4 = param_1->_padding_;
  pFVar5 = param_1->ParticleBase;
  uVar17 = (ulonglong)(uint)param_1->Offset;
  pUVar11 = (UObject *)(**(code **)(**(longlong **)(lVar4 + 0x10) + 8))();
  pTVar12 = FRawDistributionVector::GetValue
                      (&this->DampingFactor,(TVector<double> *)&local_58._s_0,
                       *(float *)(lVar4 + 0x1a0),pUVar11,0,(FRandomStream *)0x0);
  dVar2 = (pTVar12->field0_0x0)._s_0.Y;
  dVar3 = (pTVar12->field0_0x0)._s_0.Z;
  *(float *)((longlong)&(pFVar5->OldLocation).field0_0x0 + uVar17) =
       (float)(pTVar12->field0_0x0)._s_0.X;
  *(float *)((longlong)&(pFVar5->OldLocation).field0_0x0 + uVar17 + 4) = (float)dVar2;
  *(float *)((longlong)&(pFVar5->OldLocation).field0_0x0 + uVar17 + 8) = (float)dVar3;
  pUVar11 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  pTVar12 = FRawDistributionVector::GetValue
                      (&this->DampingFactorRotation,(TVector<double> *)&local_58._s_0,
                       *(float *)(lVar4 + 0x1a0),pUVar11,0,(FRandomStream *)0x0);
  dVar2 = (pTVar12->field0_0x0)._s_0.Y;
  dVar3 = (pTVar12->field0_0x0)._s_0.Z;
  *(float *)((longlong)&(pFVar5->OldLocation).field0_0x0 + uVar17 + 0xc) =
       (float)(pTVar12->field0_0x0)._s_0.X;
  *(float *)((longlong)&(pFVar5->OldLocation).field0_0x0 + uVar17 + 0x10) = (float)dVar2;
  *(float *)((longlong)&(pFVar5->OldLocation).field0_0x0 + uVar17 + 0x14) = (float)dVar3;
  pUVar11 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar18 = FRawDistributionFloat::GetValue
                     (&this->MaxCollisions,*(float *)(lVar4 + 0x1a0),pUVar11,(FRandomStream *)0x0);
  *(int *)((longlong)&(pFVar5->Location).field0_0x0 + uVar17) =
       (int)ROUND(fVar18 + fVar18 + __real_3f000000) >> 1;
  pUVar11 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
  fVar18 = FRawDistributionFloat::GetValue
                     (&this->DelayAmount,*(float *)(lVar4 + 0x1a0),pUVar11,(FRandomStream *)0x0);
  *(float *)((longlong)&(pFVar5->Location).field0_0x0 + uVar17 + 4) = fVar18;
  if (param_1->SpawnTime <= fVar18 && fVar18 != param_1->SpawnTime) {
    pFVar5->Flags = pFVar5->Flags & 0x3fffffffU | 0x40000000;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58._12_4_ = FVar15.Number & 0xffff6fff | 0x6000;
      local_58._8_4_ = FVar16.Value;
      QueryPerformanceCounter(&local_res8);
      local_58._s_0.X = (double)(ulonglong)local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_58._s_0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Update @ 1481aa2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleModuleCollision::Update(UParticleModuleCollision *this,FUpdateContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  FParticleEmitterInstance *pFVar6;
  UParticleModuleEventGenerator *pUVar7;
  FScriptContainerElement *pFVar8;
  UParticleSystem *pUVar9;
  UParticleModuleTypeDataBase *pUVar10;
  UParticleModuleRequired *pUVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  bool bVar21;
  bool bVar22;
  UWorld *pUVar23;
  undefined8 uVar24;
  bool bVar25;
  bool bVar26;
  char cVar27;
  char cVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  FName *pFVar35;
  FThreadSafeStaticStat<FStat_STAT_ParticleCollisionTime> FVar36;
  UParticleSystemComponent *this_00;
  UParticleLODLevel *pUVar37;
  TTransform<double> *pTVar38;
  TBox<double> *pTVar39;
  UClass *pUVar40;
  TBoxSphereBounds<double,double> *pTVar41;
  UObject *pUVar42;
  UObject *pUVar43;
  double *pdVar44;
  FName FVar45;
  uint uVar46;
  longlong lVar47;
  float *pfVar48;
  double *pdVar49;
  double *pdVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  uint uVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
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
  uint uVar85;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar86;
  double dVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined4 uVar129;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  double dVar165;
  undefined4 uVar166;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  double dVar167;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  double dVar179;
  undefined1 auVar180 [16];
  double dVar188;
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined4 uVar189;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  double dVar190;
  undefined1 auVar191 [16];
  double dVar196;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  uint uVar204;
  double dVar205;
  uint uVar206;
  uint uVar207;
  undefined1 auStackY_678 [32];
  longlong local_610;
  ForAnyElementType local_5e8;
  int local_5e0;
  int local_5dc;
  double local_5d8;
  byte *local_5d0;
  FName local_5c8;
  undefined1 local_5c0 [16];
  double local_5b0;
  undefined1 local_5a8 [16];
  double local_598;
  byte *local_590;
  double local_588;
  double local_580;
  double dStack_578;
  double local_570;
  FColor_u_0 local_568 [2];
  UWorld *local_560;
  longlong local_558;
  float *local_550;
  double local_548;
  double dStack_540;
  double local_538;
  undefined1 local_528 [16];
  double local_518;
  double dStack_510;
  undefined1 local_508 [16];
  undefined8 local_4f8;
  FName local_4e8;
  UParticleSystemComponent *local_4e0;
  UParticleModuleCollision *local_4d8;
  FName local_4d0;
  undefined1 local_4c0 [16];
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  undefined8 local_490;
  longlong local_488;
  double local_480;
  FParticleEmitterInstance *local_478;
  double local_470;
  double dStack_468;
  double local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined4 uStack_440;
  undefined1 uStack_43c;
  undefined2 uStack_43b;
  undefined1 uStack_439;
  double local_438;
  double dStack_430;
  double local_428;
  double local_420;
  double dStack_418;
  double local_410;
  undefined1 local_408 [16];
  double local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  double local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  undefined1 local_398 [4];
  float local_394;
  double local_388;
  double dStack_380;
  double local_378;
  double local_358;
  double dStack_350;
  double local_348;
  undefined4 local_2f4;
  FActorInstanceHandle local_2e0;
  FWeakObjectPtr local_2c0 [3];
  undefined8 local_2a8;
  FName local_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  undefined1 local_230 [16];
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined1 local_158;
  undefined7 uStack_157;
  TBoxSphereBounds<double,double> local_150;
  TBox<double> local_118;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_678;
  FVar36 = StatPtr_STAT_ParticleCollisionTime;
  local_4d8 = this;
  if (StatPtr_STAT_ParticleCollisionTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleCollisionTime>)0x0) {
    pFVar35 = ::FName::FName(&local_298,"STAT_ParticleCollisionTime");
    FVar36 = (FThreadSafeStaticStat<FStat_STAT_ParticleCollisionTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleCollisionTime,*pFVar35,
                        L"Particle Collision Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar45 = *(FName *)FVar36;
  bVar21 = false;
  bVar22 = false;
  local_4d0.ComparisonIndex.Value = 0;
  local_4d0.Number = 0;
  bVar25 = false;
  bVar26 = false;
  if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_1481aa467:
    bVar22 = bVar26;
    bVar21 = bVar25;
    bVar25 = false;
    local_5c8 = local_4d0;
    FVar45 = local_4d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_568[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_568[0]._s_0,(char *)*(FName *)((longlong)FVar36 + 0x10));
      bVar21 = false;
      bVar22 = true;
      bVar25 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4e8.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_4e8.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4e8,(wchar_t *)*(FName *)((longlong)FVar36 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Collision.cpp"
                   ,0xb7);
        bVar21 = true;
        bVar22 = true;
        bVar25 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481aa467;
    local_5c8 = FVar45;
    FThreadStats::AddMessage(FVar45,CycleScopeStart);
    bVar25 = true;
  }
  pFVar6 = (FParticleEmitterInstance *)param_1->_padding_;
  local_478 = pFVar6;
  this_00 = (UParticleSystemComponent *)(**(code **)((longlong)*pFVar6->Component + 0x138))();
  local_560 = *(UWorld **)&this_00->field_0xb0;
  local_4e0 = this_00;
  if (local_560 == (UWorld *)0x0) {
    local_560 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
  }
  if ((pFVar6->ActiveParticles == 0) ||
     (((this->bDropDetail != 0 && (local_560 != (UWorld *)0x0)) && (local_560->bDropDetail != '\0'))
     )) goto LAB_1481ac215;
  local_490 = *(undefined8 *)&this_00->field_0xa8;
  pUVar37 = UParticleEmitter::GetCurrentLODLevel(pFVar6->SpriteTemplate,pFVar6);
  if ((pUVar37 == (UParticleLODLevel *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Collision.cpp"
                          ,0xc4,L""), bVar26)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar30 = (**(code **)(pFVar6->_padding_ + 0x150))(pFVar6);
  cVar27 = (**(code **)(pFVar6->_padding_ + 0x158))(pFVar6);
  pTVar38 = UParticleSystemComponent::GetAsyncComponentToWorld(this_00);
  local_590 = (byte *)0x0;
  local_438 = (pTVar38->Scale3D).XY.m128d_f64[0];
  dStack_430 = (pTVar38->Scale3D).XY.m128d_f64[1];
  local_428 = (pTVar38->Scale3D).ZW.m128d_f64[0];
  pUVar7 = (pUVar37->EventGenerator).field0_0x0.DebugPtr;
  if (((pUVar7 != (UParticleModuleEventGenerator *)0x0) &&
      (local_590 = FParticleEmitterInstance::GetModuleInstanceData(pFVar6,(UParticleModule *)pUVar7)
      , local_590 != (byte *)0x0)) && ((*local_590 & 6) == 0)) {
    local_590 = (byte *)0x0;
  }
  local_5d0 = FParticleEmitterInstance::GetModuleInstanceData(pFVar6,(UParticleModule *)this);
  local_5e8.Data = (FScriptContainerElement *)0x0;
  local_5e0 = (this_00->PlayerLODDistanceFactor).ArrayNum;
  lVar47 = (longlong)local_5e0;
  pFVar8 = (this_00->PlayerLODDistanceFactor).AllocatorInstance.Data;
  if (local_5e0 == 0) {
    local_5dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_5e0,0,&local_5e8,local_5e0,&local_5dc);
    memcpy(local_5e8.Data,pFVar8,lVar47 << 2);
  }
  pUVar23 = local_560;
  lVar47 = (longlong)(this_00->PlayerLocations).ArrayNum;
  local_558 = lVar47;
  bVar26 = UWorld::IsGameWorld(local_560);
  fVar59 = __real_4a000000;
  if (bVar26) {
    if ((this->bCollideOnlyIfVisible == 0) ||
       (fVar58 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this_00),
       pUVar23->TimeSeconds - (double)fVar58 <= (double)GParticleCollisionIgnoreInvisibleTime)) {
      if ((this->MaxCollisionDistance <= fVar59 && fVar59 != this->MaxCollisionDistance) &&
         (7 < pFVar6->ActiveParticles)) {
        if (*local_5d0 == 0) {
          pUVar9 = (this_00->Template).field0_0x0.DebugPtr;
          if ((pUVar9 == (UParticleSystem *)0x0) || (pUVar9->bUseFixedRelativeBoundingBox == '\0'))
          {
            if ((this_00->bParallelRenderThreadUpdate != '\0') ||
               (bVar26 = IsInGameThread(), bVar26)) {
              pTVar41 = (TBoxSphereBounds<double,double> *)&this_00->field_0x110;
            }
            else {
              if ((this_00->bAsyncDataCopyIsValid == '\0') &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("bAsyncDataCopyIsValid",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticleSystemComponent.h"
                                      ,0x3ab,L""), bVar26)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pTVar41 = &this_00->AsyncBounds;
            }
            dVar165 = (pTVar41->Origin).field0_0x0._s_0.Y;
            dVar167 = (pTVar41->Origin).field0_0x0._s_0.Z;
            dStack_510 = (pTVar41->Origin).field0_0x0._s_0.X;
            local_518 = dVar167 - (pTVar41->BoxExtent).field0_0x0._s_0.Z;
            local_508._0_8_ = dVar165 + (pTVar41->BoxExtent).field0_0x0._s_0.Y;
            local_528._0_8_ = dStack_510 - (pTVar41->BoxExtent).field0_0x0._s_0.X;
            dStack_510 = dStack_510 + (pTVar41->BoxExtent).field0_0x0._s_0.X;
            local_158 = 1;
            local_4f8 = CONCAT71(uStack_157,1);
            local_508._8_8_ = dVar167 + (pTVar41->BoxExtent).field0_0x0._s_0.Z;
            local_528._8_8_ = dVar165 - (pTVar41->BoxExtent).field0_0x0._s_0.Y;
          }
          else {
            pTVar39 = UE::Math::TBox<double>::TransformBy
                                (&pUVar9->FixedRelativeBoundingBox,&local_118,pTVar38);
            local_528 = *(undefined1 (*) [16])&(pTVar39->Min).field0_0x0;
            local_518 = (pTVar39->Min).field0_0x0._s_0.Z;
            dStack_510 = (pTVar39->Max).field0_0x0._s_0.X;
            local_508 = *(undefined1 (*) [16])((longlong)&(pTVar39->Max).field0_0x0 + 8);
            local_4f8._0_1_ = pTVar39->IsValid;
            local_4f8._1_1_ = pTVar39->Pad[0];
            local_4f8._2_1_ = pTVar39->Pad[1];
            local_4f8._3_1_ = pTVar39->Pad[2];
            local_4f8._4_1_ = pTVar39->Pad[3];
            local_4f8._5_1_ = pTVar39->Pad[4];
            local_4f8._6_1_ = pTVar39->Pad[5];
            local_4f8._7_1_ = pTVar39->Pad[6];
          }
          dVar167 = dStack_510;
          dVar165 = local_518;
          uVar52 = 0;
          bVar26 = true;
          if (0 < lVar47) {
            uVar24 = local_508._8_8_;
            uVar60 = local_508._0_8_;
            local_588 = (double)local_528._8_8_;
            local_5d8 = (double)local_528._0_8_;
            local_610 = 0;
            uVar51 = uVar52;
            do {
              auVar123._0_8_ = local_588;
              auVar123._8_8_ = local_5d8;
              dVar87 = __real_3ff1333334000000;
              uVar32 = (uint)uVar52;
              uVar46 = 0;
              if ((int)uVar32 < local_5e0) {
                uVar46 = ~uVar32 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar26)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar46 = 0;
              if ((int)uVar32 < (this_00->PlayerLocations).ArrayNum) {
                uVar46 = ~uVar32 >> 0x1f;
              }
              dVar87 = (double)(this->MaxCollisionDistance /
                               *(float *)(local_5e8.Data + local_610 * 4)) * dVar87;
              if ((uVar46 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar26)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar8 = (this_00->PlayerLocations).AllocatorInstance.Data;
              if (((((auVar123._8_8_ - dVar87 < *(double *)(pFVar8 + uVar51)) &&
                    (*(double *)(pFVar8 + uVar51) < dVar167 + dVar87)) &&
                   (auVar123._0_8_ - dVar87 < *(double *)(pFVar8 + uVar51 + 8))) &&
                  ((*(double *)(pFVar8 + uVar51 + 8) < (double)uVar60 + dVar87 &&
                   (dVar165 - dVar87 < *(double *)(pFVar8 + uVar51 + 0x10))))) &&
                 (*(double *)(pFVar8 + uVar51 + 0x10) < (double)uVar24 + dVar87))
              goto LAB_1481aa9a3;
              local_610 = local_610 + 1;
              uVar52 = (ulonglong)(uVar32 + 1);
              uVar51 = uVar51 + 0x18;
              bVar26 = true;
            } while (local_610 < local_558);
          }
        }
        else {
LAB_1481aa9a3:
          bVar26 = false;
        }
        *local_5d0 = *local_5d0 + 1;
        if (0x1e < *local_5d0) {
          *local_5d0 = 0;
        }
        if (bVar26) goto LAB_1481aa9ba;
      }
      uVar46 = 0;
      if (0 < (this_00->PlayerLocations).ArrayNum) {
        lVar47 = 0;
        do {
          uVar32 = 0;
          if ((int)uVar46 < local_5e0) {
            uVar32 = ~uVar46 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          fVar59 = *(float *)(local_5e8.Data + lVar47);
          uVar32 = 0;
          if ((int)uVar46 < local_5e0) {
            uVar32 = ~uVar46 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar46 = uVar46 + 1;
          *(float *)(local_5e8.Data + lVar47) = fVar59 * *(float *)(local_5e8.Data + lVar47);
          lVar47 = lVar47 + 4;
          FVar45 = local_5c8;
        } while ((int)uVar46 < (this_00->PlayerLocations).ArrayNum);
      }
      goto LAB_1481aaaf5;
    }
LAB_1481aa9ba:
    lVar47 = param_1->_padding_;
    lVar55 = *(longlong *)(lVar47 + 0x168);
    iVar30 = *(int *)(lVar47 + 0x188);
    lVar56 = *(longlong *)(lVar47 + 0x170);
    iVar31 = *(int *)(lVar47 + 0x18c) + -1;
    lVar47 = (longlong)iVar31;
    if (-1 < iVar31) {
      do {
        uVar32 = (uint)*(ushort *)(lVar56 + lVar47 * 2) * iVar30;
        uVar46 = *(uint *)((ulonglong)uVar32 + 0x6c + lVar55);
        if ((uVar46 >> 0x1a & 1) == 0) {
          *(uint *)((ulonglong)uVar32 + 0x6c + lVar55) = uVar46 | 0x8000000;
        }
        lVar47 = lVar47 + -1;
      } while (-1 < lVar47);
    }
  }
  else {
LAB_1481aaaf5:
    local_488 = param_1->_padding_;
    uVar46 = param_1->Offset;
    dVar165 = *(double *)(local_488 + 0x168);
    local_588 = *(double *)(local_488 + 0x170);
    iVar31 = *(int *)(local_488 + 0x188);
    dVar167 = (double)this->MaxCollisionDistance * (double)this->MaxCollisionDistance;
    iVar33 = *(int *)(local_488 + 0x18c) + -1;
    local_5d0 = (byte *)(longlong)iVar33;
    local_5d8 = dVar165;
    local_480 = dVar167;
    if (-1 < iVar33) {
      lVar47 = (longlong)iVar30;
      uVar129 = (undefined4)__real_3ff0000000000000;
      uVar189 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      dVar87 = __real_3e45798ee0000000;
      uVar32 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar85 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar206 = _UNK_15061cc88;
      uVar207 = _UNK_15061cc8c;
      do {
        uVar5 = *(ushort *)((longlong)local_588 + (longlong)local_5d0 * 2);
        pdVar49 = (double *)((ulonglong)((uint)uVar5 * iVar31) + (longlong)dVar165);
        uVar34 = *(uint *)((longlong)pdVar49 + 0x6c);
        if (((uVar34 >> 0x1a & 1) == 0) && ((uVar34 & 0x3c000000) == 0)) {
          pfVar48 = (float *)((ulonglong)uVar46 + (longlong)pdVar49);
          local_550 = pfVar48;
          if ((uVar34 >> 0x1e & 1) != 0) {
            if (*(float *)(pdVar49 + 0x12) < pfVar48[7]) goto LAB_1481ac18d;
            *(uint *)((longlong)pdVar49 + 0x6c) = uVar34 & 0xbfffffff;
          }
          auVar123._0_8_ = (double)param_1->DeltaTime;
          auVar123._8_8_ = 0.0;
          local_598 = (double)*(float *)(pdVar49 + 9) * auVar123._0_8_ + pdVar49[5];
          dVar165 = (double)*(float *)((longlong)pdVar49 + 0x44) * auVar123._0_8_ + pdVar49[4];
          auVar123._0_8_ = (double)*(float *)(pdVar49 + 8) * auVar123._0_8_ + pdVar49[3];
          local_5a8._8_8_ = dVar165;
          local_5a8._0_8_ = auVar123._0_8_;
          if (((pUVar37->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
            local_538 = pdVar49[2];
            local_548 = *pdVar49;
            dStack_540 = pdVar49[1];
          }
          else {
            auVar123._0_8_ = auVar123._0_8_ * (pTVar38->Scale3D).XY.m128d_f64[0];
            dVar165 = dVar165 * (pTVar38->Scale3D).XY.m128d_f64[1];
            auVar168._0_8_ = local_598 * (pTVar38->Scale3D).ZW.m128d_f64[0];
            auVar168._8_8_ = (pTVar38->Scale3D).ZW.m128d_f64[1] * 0.0;
            auVar130._8_4_ = SUB84(dVar165,0);
            auVar130._0_8_ = auVar123._0_8_;
            uVar166 = (undefined4)((ulonglong)dVar165 >> 0x20);
            auVar130._12_4_ = uVar166;
            auVar118 = *(undefined1 (*) [16])(pTVar38->Rotation).ZW.m128d_f64;
            auVar123._8_8_ = auVar118._0_8_;
            auVar61 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
            dVar87 = (pTVar38->Rotation).ZW.m128d_f64[1];
            auVar100 = blendpd(auVar61,auVar118,2);
            auVar131._0_8_ = auVar130._8_8_ * auVar61._0_8_ - auVar61._8_8_ * auVar123._0_8_;
            auVar131._8_8_ = auVar168._0_8_ * auVar61._8_8_ - auVar123._8_8_ * dVar165;
            auVar180._8_4_ = SUB84(auVar131._8_8_,0);
            auVar180._0_8_ = auVar131._0_8_;
            auVar180._12_4_ = (int)((ulonglong)auVar131._8_8_ >> 0x20);
            auVar61._8_4_ = SUB84(dVar165,0);
            auVar61._0_8_ = auVar123._0_8_;
            auVar61._12_4_ = uVar166;
            auVar61 = blendpd(auVar61,auVar168,2);
            auVar101._0_8_ = auVar61._0_8_ * auVar123._8_8_ - auVar100._0_8_ * auVar168._0_8_;
            auVar101._8_8_ = auVar61._8_8_ * auVar118._8_8_ - auVar100._8_8_ * auVar168._8_8_;
            auVar61 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
            auVar100 = blendpd(auVar131,auVar101,2);
            auVar132._0_8_ = auVar100._0_8_ + auVar100._0_8_;
            auVar132._8_8_ = auVar100._8_8_ + auVar100._8_8_;
            dVar179 = auVar180._8_8_ + auVar180._8_8_;
            dVar188 = auVar101._0_8_ + auVar101._0_8_;
            auVar116._8_4_ = SUB84(dVar188,0);
            auVar116._0_8_ = dVar179;
            uVar166 = (undefined4)((ulonglong)dVar188 >> 0x20);
            auVar116._12_4_ = uVar166;
            auVar107._8_4_ = SUB84(dVar188,0);
            auVar107._0_8_ = dVar179;
            auVar107._12_4_ = uVar166;
            auVar108 = blendpd(auVar107,auVar132,2);
            auVar101 = blendpd(auVar61,auVar118,2);
            auVar117._0_8_ = auVar116._8_8_ * auVar61._0_8_ - auVar61._8_8_ * dVar179;
            auVar117._8_8_ = auVar132._0_8_ * auVar61._8_8_ - auVar123._8_8_ * dVar188;
            auVar100._8_4_ = SUB84(auVar117._8_8_,0);
            auVar100._0_8_ = auVar117._0_8_;
            auVar100._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
            auVar109._0_8_ = auVar108._0_8_ * auVar123._8_8_ - auVar101._0_8_ * auVar132._0_8_;
            auVar109._8_8_ = auVar108._8_8_ * auVar118._8_8_ - auVar101._8_8_ * auVar132._8_8_;
            auVar118 = blendpd(auVar117,auVar109,2);
            auVar123._0_8_ =
                 dVar179 * dVar87 + auVar123._0_8_ + auVar100._8_8_ +
                 (pTVar38->Translation).XY.m128d_f64[0];
            auVar123._8_8_ =
                 dVar188 * dVar87 + dVar165 + auVar109._0_8_ +
                 (pTVar38->Translation).XY.m128d_f64[1];
            local_598 = auVar132._0_8_ * dVar87 + auVar168._0_8_ + auVar118._0_8_ +
                        (pTVar38->Translation).ZW.m128d_f64[0];
            dVar179 = *pdVar49 * (pTVar38->Scale3D).XY.m128d_f64[0];
            dVar188 = pdVar49[1] * (pTVar38->Scale3D).XY.m128d_f64[1];
            auVar169._0_8_ = pdVar49[2] * (pTVar38->Scale3D).ZW.m128d_f64[0];
            auVar169._8_8_ = (pTVar38->Scale3D).ZW.m128d_f64[1] * 0.0;
            local_528 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
            auVar133._8_4_ = SUB84(dVar188,0);
            auVar133._0_8_ = dVar179;
            uVar166 = (undefined4)((ulonglong)dVar188 >> 0x20);
            auVar133._12_4_ = uVar166;
            auVar118 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
            auVar61 = *(undefined1 (*) [16])(pTVar38->Rotation).ZW.m128d_f64;
            dVar87 = auVar61._0_8_;
            dVar165 = (pTVar38->Rotation).ZW.m128d_f64[1];
            auVar101 = blendpd(auVar118,auVar61,2);
            auVar134._0_8_ = auVar133._8_8_ * auVar118._0_8_ - auVar118._8_8_ * dVar179;
            auVar134._8_8_ = auVar169._0_8_ * auVar118._8_8_ - dVar87 * dVar188;
            auVar118._8_4_ = SUB84(dVar188,0);
            auVar118._0_8_ = dVar179;
            auVar118._12_4_ = uVar166;
            auVar118 = blendpd(auVar118,auVar169,2);
            auVar108._0_8_ = auVar118._0_8_ * dVar87 - auVar101._0_8_ * auVar169._0_8_;
            auVar108._8_8_ = auVar118._8_8_ * auVar61._8_8_ - auVar101._8_8_ * auVar169._8_8_;
            auVar118 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
            auVar191._8_4_ = SUB84(auVar134._8_8_,0);
            auVar191._0_8_ = auVar134._0_8_;
            auVar191._12_4_ = (int)((ulonglong)auVar134._8_8_ >> 0x20);
            auVar101 = blendpd(auVar134,auVar108,2);
            auVar135._0_8_ = auVar101._0_8_ + auVar101._0_8_;
            auVar135._8_8_ = auVar101._8_8_ + auVar101._8_8_;
            dVar190 = auVar191._8_8_ + auVar191._8_8_;
            dVar196 = auVar108._0_8_ + auVar108._0_8_;
            auVar119._8_4_ = SUB84(dVar196,0);
            auVar119._0_8_ = dVar190;
            uVar166 = (undefined4)((ulonglong)dVar196 >> 0x20);
            auVar119._12_4_ = uVar166;
            auVar110._8_4_ = SUB84(dVar196,0);
            auVar110._0_8_ = dVar190;
            auVar110._12_4_ = uVar166;
            auVar101 = blendpd(auVar110,auVar135,2);
            auVar120._0_8_ = auVar119._8_8_ * auVar118._0_8_ - auVar118._8_8_ * dVar190;
            auVar120._8_8_ = auVar135._0_8_ * auVar118._8_8_ - dVar87 * dVar196;
            auVar118 = blendpd(auVar118,auVar61,2);
            auVar111._0_8_ = auVar101._0_8_ * dVar87 - auVar118._0_8_ * auVar135._0_8_;
            auVar111._8_8_ = auVar101._8_8_ * auVar61._8_8_ - auVar118._8_8_ * auVar135._8_8_;
            auVar62._8_4_ = SUB84(auVar120._8_8_,0);
            auVar62._0_8_ = auVar120._0_8_;
            auVar62._12_4_ = (int)((ulonglong)auVar120._8_8_ >> 0x20);
            auVar118 = blendpd(auVar120,auVar111,2);
            local_538 = auVar135._0_8_ * dVar165 + auVar169._0_8_ + auVar118._0_8_ +
                        (pTVar38->Translation).ZW.m128d_f64[0];
            local_548 = dVar190 * dVar165 + dVar179 + auVar62._8_8_ +
                        (pTVar38->Translation).XY.m128d_f64[0];
            dStack_540 = dVar196 * dVar165 + dVar188 + auVar111._0_8_ +
                         (pTVar38->Translation).XY.m128d_f64[1];
            dVar165 = auVar123._8_8_;
            dVar87 = __real_3e45798ee0000000;
            local_5a8 = auVar123;
            local_230 = auVar123;
            local_220 = local_598;
            local_218 = local_548;
            dStack_210 = dStack_540;
            local_208 = local_538;
          }
          local_5b0 = local_598 - local_538;
          local_5c0._0_8_ = auVar123._0_8_ - local_548;
          auVar157._8_4_ = SUB84(auVar123._8_8_,0);
          auVar157._0_8_ = dVar165;
          auVar157._12_4_ = (int)((ulonglong)auVar123._8_8_ >> 0x20);
          auVar123._8_8_ = auVar157._8_8_;
          dVar179 = dVar165 - dStack_540;
          dVar188 = dVar179 * dVar179 + (double)local_5c0._0_8_ * (double)local_5c0._0_8_ +
                    local_5b0 * local_5b0;
          if (dVar188 == (double)CONCAT44(uVar189,uVar129)) {
            local_5c0._8_8_ = dVar179;
            uVar60 = local_5c0._0_8_;
          }
          else if (dVar87 <= dVar188) {
            local_290 = (double)CONCAT44(uVar189,uVar129) / SQRT(dVar188);
            uVar60 = local_290 * (double)local_5c0._0_8_;
            dVar179 = local_290 * dVar179;
            local_5b0 = local_290 * local_5b0;
            local_5c0._8_8_ = dVar179;
            local_5c0._0_8_ = uVar60;
            auVar123._8_8_ = 0.0;
          }
          else {
            auVar16._4_8_ = auVar123._8_8_;
            auVar16._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            auVar158._0_8_ = auVar16._0_8_ << 0x20;
            auVar158._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            auVar158._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_5b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dVar179 = auVar158._8_8_;
            auVar123._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
            local_5c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
            uVar60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
          local_570 = (double)*(float *)(pdVar49 + 0xd) * local_428;
          dStack_578 = (double)*(float *)((longlong)pdVar49 + 100) * dStack_430;
          local_580 = (double)*(float *)(pdVar49 + 0xc) * local_438;
          local_4b0 = 0.0;
          local_4c0 = ZEXT816(0);
          if ((pUVar37->TypeDataModule).field0_0x0.DebugPtr != (UParticleModuleTypeDataBase *)0x0) {
            pUVar40 = Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister();
            bVar26 = FObjectPtr::IsA((FObjectPtr *)&pUVar37->TypeDataModule,pUVar40);
            if (((bVar26) &&
                (pUVar10 = (pUVar37->TypeDataModule).field0_0x0.DebugPtr,
                pUVar10 != (UParticleModuleTypeDataBase *)0x0)) &&
               (*(UStaticMesh **)(pUVar10 + 1) != (UStaticMesh *)0x0)) {
              pTVar41 = UStaticMesh::GetBounds(*(UStaticMesh **)(pUVar10 + 1),&local_150);
              auVar123 = *(undefined1 (*) [16])&(pTVar41->BoxExtent).field0_0x0;
              local_4c0._8_8_ = auVar123._8_8_;
              if ((pUVar10[3].field_0x1c & 4) == 0) {
                local_4b0 = (pTVar41->BoxExtent).field0_0x0._s_0.Z;
                local_200 = (pTVar41->BoxExtent).field0_0x0._s_0.X;
                dStack_1f8 = (pTVar41->BoxExtent).field0_0x0._s_0.Y;
                local_4c0 = *(undefined1 (*) [16])&(pTVar41->BoxExtent).field0_0x0;
                local_1f0 = local_4b0;
              }
              else {
                local_518 = (pTVar41->BoxExtent).field0_0x0._s_0.Z * local_570;
                local_4c0._8_8_ = (double)local_4c0._8_8_ * dStack_578;
                local_4c0._0_8_ = auVar123._0_8_ * local_580;
                local_4b0 = local_518;
              }
            }
            auVar123._8_8_ = 0.0;
            dVar165 = (double)local_5a8._8_8_;
            uVar60 = local_5c0._0_8_;
            auVar123._0_8_ = (double)local_5a8._0_8_;
            dVar179 = (double)local_5c0._8_8_;
          }
          dVar190 = local_570;
          dVar188 = dStack_578;
          dVar87 = local_580;
          memset(local_398,0,0x100);
          uVar52 = 0;
          local_458 = 0;
          uStack_450 = 0;
          uStack_43b = 0;
          local_2e0.ReferenceObject.WeakPtr.ObjectIndex = 0;
          local_2e0.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
          local_2e0.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
          local_2e0.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
          uStack_439 = 0;
          local_448 = 0;
          local_348 = 0.0;
          uStack_440 = 0xffffffff;
          uStack_43c = 0;
          local_2e0.InstanceIndex = -1;
          local_2e0.ResolutionStatus = Invalid;
          local_2e0._29_3_ = 0;
          local_394 = 1.0;
          local_2f4 = 0xffffffff;
          local_2e0.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
          local_358 = 0.0;
          dStack_350 = 0.0;
          dVar196 = (double)CONCAT44(uVar189,uVar129) / (double)this->DirScalar;
          local_4a8 = dVar87 * (double)uVar60 * dVar196 + auVar123._0_8_;
          local_4a0 = dVar188 * dVar179 * dVar196 + dVar165;
          local_498 = dVar190 * local_5b0 * dVar196 + local_598;
          bVar26 = UWorld::IsGameWorld(local_560);
          if ((!bVar26) ||
             (__real_4a000000 < this->MaxCollisionDistance ||
              __real_4a000000 == this->MaxCollisionDistance)) {
LAB_1481ab322:
            pFVar6 = local_478;
            cVar28 = (**(code **)(this->_padding_ + 0x398))(this,local_478,pdVar49);
            dVar165 = local_5d8;
            dVar87 = __real_3e45798ee0000000;
            if (cVar28 != '\0') {
              bVar26 = FActorInstanceHandle::IsValid(&local_2e0);
              if (bVar26) {
                if (this->bPawnsDoNotDecrementCount == 0) {
LAB_1481ab3ba:
                  bVar26 = true;
                }
                else {
                  pUVar40 = Z_Construct_UClass_APawn_NoRegister();
                  bVar29 = FActorInstanceHandle::DoesRepresentClass(&local_2e0,pUVar40);
                  bVar26 = false;
                  if (!bVar29) goto LAB_1481ab3ba;
                }
                if (this->bIgnoreTriggerVolumes != 0) {
                  pUVar40 = Z_Construct_UClass_ATriggerBase_NoRegister();
                  bVar29 = FActorInstanceHandle::DoesRepresentClass(&local_2e0,pUVar40);
                  dVar165 = local_5d8;
                  dVar87 = __real_3e45798ee0000000;
                  if (bVar29) goto LAB_1481ac18d;
                }
                if (bVar26) goto LAB_1481ab3ec;
LAB_1481ab465:
                uVar53 = SUB84(local_358,0);
                uVar204 = (uint)((ulonglong)local_358 >> 0x20);
              }
              else {
LAB_1481ab3ec:
                if (this->bOnlyVerticalNormalsDecrementCount == 0) {
LAB_1481ab462:
                  pfVar48[6] = (float)((int)pfVar48[6] + -1);
                  goto LAB_1481ab465;
                }
                uVar53 = SUB84(local_358,0);
                uVar204 = (uint)((ulonglong)local_358 >> 0x20);
                uVar34 = (uint)((ulonglong)local_348 >> 0x20);
                if (((((double)CONCAT44(uVar204 & uVar85,uVar53 & uVar32) <= __real_3f1a36e2e0000000
                      ) && ((double)CONCAT44((uint)((ulonglong)dStack_350 >> 0x20) & uVar85,
                                             SUB84(dStack_350,0) & uVar32) <=
                            __real_3f1a36e2e0000000)) &&
                    ((double)CONCAT44(uVar34 & uVar85,SUB84(local_348,0) & uVar32) <=
                     __real_3f1a36e2e0000000)) ||
                   ((double)CONCAT44(uVar189,uVar129) <=
                    (double)CONCAT44(uVar34 & uVar85,SUB84(local_348,0) & uVar32) +
                    (double)this->VerticalFudgeFactor)) goto LAB_1481ab462;
              }
              pUVar11 = (pUVar37->RequiredModule).field0_0x0.DebugPtr;
              if ((int)pfVar48[6] < 1) {
                if (pUVar11->bUseLocalSpace != 0) {
                  local_528 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
                  local_580 = local_580 * (pTVar38->Scale3D).XY.m128d_f64[0];
                  dStack_578 = dStack_578 * (pTVar38->Scale3D).XY.m128d_f64[1];
                  auVar185._0_8_ = local_570 * (pTVar38->Scale3D).ZW.m128d_f64[0];
                  auVar185._8_8_ = (pTVar38->Scale3D).ZW.m128d_f64[1] * 0.0;
                  auVar154._8_4_ = SUB84(dStack_578,0);
                  auVar154._0_8_ = local_580;
                  uVar129 = (undefined4)((ulonglong)dStack_578 >> 0x20);
                  auVar154._12_4_ = uVar129;
                  auVar118 = *(undefined1 (*) [16])(pTVar38->Rotation).ZW.m128d_f64;
                  dVar165 = auVar118._0_8_;
                  auVar61 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
                  auVar101 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
                  auVar123._8_8_ = (pTVar38->Rotation).ZW.m128d_f64[1];
                  auVar100 = blendpd(auVar61,auVar118,2);
                  auVar155._0_8_ = auVar154._8_8_ * auVar61._0_8_ - auVar61._8_8_ * local_580;
                  auVar155._8_8_ = auVar185._0_8_ * auVar61._8_8_ - dVar165 * dStack_578;
                  auVar142._8_4_ = SUB84(auVar155._8_8_,0);
                  auVar142._0_8_ = auVar155._0_8_;
                  auVar142._12_4_ = (int)((ulonglong)auVar155._8_8_ >> 0x20);
                  auVar78._8_4_ = SUB84(dStack_578,0);
                  auVar78._0_8_ = local_580;
                  auVar78._12_4_ = uVar129;
                  auVar61 = blendpd(auVar78,auVar185,2);
                  auVar79._0_8_ = auVar61._0_8_ * dVar165 - auVar100._0_8_ * auVar185._0_8_;
                  auVar79._8_8_ = auVar61._8_8_ * auVar118._8_8_ - auVar100._8_8_ * auVar185._8_8_;
                  auVar61 = blendpd(auVar155,auVar79,2);
                  dVar167 = auVar142._8_8_ + auVar142._8_8_;
                  dVar87 = auVar79._0_8_ + auVar79._0_8_;
                  auVar156._0_8_ = auVar61._0_8_ + auVar61._0_8_;
                  auVar156._8_8_ = auVar61._8_8_ + auVar61._8_8_;
                  auVar127._8_4_ = SUB84(dVar87,0);
                  auVar127._0_8_ = dVar167;
                  uVar129 = (undefined4)((ulonglong)dVar87 >> 0x20);
                  auVar127._12_4_ = uVar129;
                  auVar96._8_4_ = SUB84(dVar87,0);
                  auVar96._0_8_ = dVar167;
                  auVar96._12_4_ = uVar129;
                  auVar61 = blendpd(auVar96,auVar156,2);
                  auVar128._0_8_ = auVar127._8_8_ * auVar101._0_8_ - auVar101._8_8_ * dVar167;
                  auVar128._8_8_ = auVar156._0_8_ * auVar101._8_8_ - dVar165 * dVar87;
                  auVar101 = blendpd(auVar101,auVar118,2);
                  auVar80._8_4_ = SUB84(auVar128._8_8_,0);
                  auVar80._0_8_ = auVar128._0_8_;
                  auVar80._12_4_ = (int)((ulonglong)auVar128._8_8_ >> 0x20);
                  auVar97._0_8_ = auVar61._0_8_ * dVar165 - auVar101._0_8_ * auVar156._0_8_;
                  auVar97._8_8_ = auVar61._8_8_ * auVar118._8_8_ - auVar101._8_8_ * auVar156._8_8_;
                  local_580 = dVar167 * auVar123._8_8_ + local_580 + auVar80._8_8_;
                  dStack_578 = dVar87 * auVar123._8_8_ + dStack_578 + auVar97._0_8_;
                  auVar118 = blendpd(auVar128,auVar97,2);
                  local_570 = auVar156._0_8_ * auVar123._8_8_ + auVar185._0_8_ + auVar118._0_8_;
                  local_1d0 = local_580;
                  dStack_1c8 = dStack_578;
                  local_1c0 = local_570;
                }
                auVar20._8_8_ = dStack_380;
                auVar20._0_8_ = local_388;
                *(undefined1 (*) [16])(pdVar49 + 3) = auVar20;
                pdVar49[5] = local_378;
                if (((pUVar37->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0) {
                  dVar165 = local_388 - (pTVar38->Translation).XY.m128d_f64[0];
                  dVar167 = dStack_380 - (pTVar38->Translation).XY.m128d_f64[1];
                  uVar189 = (undefined4)((ulonglong)dVar167 >> 0x20);
                  auVar123._0_8_ =
                       (pTVar38->Rotation).XY.m128d_f64[0] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  dVar179 = (pTVar38->Rotation).XY.m128d_f64[1] *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  dVar87 = local_378 - (pTVar38->Translation).ZW.m128d_f64[0];
                  auVar143._0_8_ =
                       (pTVar38->Rotation).ZW.m128d_f64[0] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  auVar143._8_8_ =
                       (pTVar38->Rotation).ZW.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  auVar19._4_8_ = auVar123._8_8_;
                  auVar19._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                  auVar163._0_8_ = auVar19._0_8_ << 0x20;
                  auVar163._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                  auVar163._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                  auVar106._8_4_ = SUB84(dVar179,0);
                  auVar106._0_8_ = auVar123._0_8_;
                  uVar129 = (undefined4)((ulonglong)dVar179 >> 0x20);
                  auVar106._12_4_ = uVar129;
                  auVar123._8_8_ = auVar106._8_8_;
                  auVar201._8_4_ = SUB84(dVar167,0);
                  auVar201._0_8_ = dVar165;
                  auVar201._12_4_ = uVar189;
                  auVar81._8_4_ = SUB84(auVar143._0_8_,0);
                  auVar81._0_8_ = auVar123._8_8_;
                  auVar81._12_4_ = (int)((ulonglong)auVar143._0_8_ >> 0x20);
                  auVar114._8_4_ = SUB84(dVar179,0);
                  auVar114._0_8_ = auVar123._0_8_;
                  auVar114._12_4_ = uVar129;
                  auVar98._8_4_ = SUB84(dVar167,0);
                  auVar98._0_8_ = dVar165;
                  auVar98._12_4_ = uVar189;
                  auVar202._0_8_ = auVar201._8_8_ * auVar123._0_8_ - auVar123._8_8_ * dVar165;
                  auVar202._8_8_ = dVar87 * dVar179 - auVar81._8_8_ * dVar167;
                  auVar61 = blendpd(auVar114,auVar143,2);
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = dVar87;
                  auVar118 = blendpd(auVar98,auVar15,2);
                  auVar195._8_4_ = SUB84(auVar202._8_8_,0);
                  auVar195._0_8_ = auVar202._0_8_;
                  auVar195._12_4_ = (int)((ulonglong)auVar202._8_8_ >> 0x20);
                  auVar99._0_8_ = auVar118._0_8_ * auVar143._0_8_ - auVar61._0_8_ * dVar87;
                  auVar99._8_8_ = auVar118._8_8_ * auVar143._8_8_ - auVar61._8_8_ * 0.0;
                  auVar118 = blendpd(auVar202,auVar99,2);
                  dVar188 = auVar195._8_8_ + auVar195._8_8_;
                  dVar190 = auVar99._0_8_ + auVar99._0_8_;
                  auVar203._0_8_ = auVar118._0_8_ + auVar118._0_8_;
                  auVar203._8_8_ = auVar118._8_8_ + auVar118._8_8_;
                  uVar129 = SUB84(dVar190,0);
                  auVar186._8_4_ = uVar129;
                  auVar186._0_8_ = dVar188;
                  uVar189 = (undefined4)((ulonglong)dVar190 >> 0x20);
                  auVar186._12_4_ = uVar189;
                  auVar82._8_4_ = uVar129;
                  auVar82._0_8_ = dVar188;
                  auVar82._12_4_ = uVar189;
                  auVar177._8_4_ = uVar129;
                  auVar177._0_8_ = dVar188;
                  auVar177._12_4_ = uVar189;
                  auVar118 = blendpd(auVar177,auVar203,2);
                  auVar144._0_8_ =
                       (double)CONCAT44(*(uint *)((longlong)(pTVar38->Scale3D).XY.m128d_f64 + 4) &
                                        uVar85,*(uint *)(pTVar38->Scale3D).XY.m128d_f64 & uVar32);
                  auVar144._8_4_ = *(uint *)((pTVar38->Scale3D).XY.m128d_f64 + 1) & uVar206;
                  auVar144._12_4_ =
                       *(uint *)((longlong)(pTVar38->Scale3D).XY.m128d_f64 + 0xc) & uVar207;
                  auVar187._0_8_ = auVar186._8_8_ * auVar123._0_8_ - dVar188 * auVar123._8_8_;
                  auVar187._8_8_ = auVar203._0_8_ * dVar179 - auVar82._8_8_ * auVar143._0_8_;
                  auVar83._8_4_ = SUB84(auVar203._8_8_,0);
                  auVar83._0_8_ = auVar203._0_8_;
                  auVar83._12_4_ = (int)((ulonglong)auVar203._8_8_ >> 0x20);
                  auVar178._0_8_ = auVar118._0_8_ * auVar143._0_8_ - auVar203._0_8_ * auVar61._0_8_;
                  auVar178._8_8_ = auVar118._8_8_ * auVar143._8_8_ - auVar83._8_8_ * auVar61._8_8_;
                  auVar123 = *(undefined1 (*) [16])(pTVar38->Scale3D).ZW.m128d_f64;
                  auVar164._8_8_ = auVar163._8_8_;
                  auVar164._0_8_ = auVar123._0_8_;
                  lVar55 = -(ulonglong)
                            ((double)CONCAT44(auVar123._4_4_ & uVar85,auVar123._0_4_ & uVar32) <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                  auVar123 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                   *(undefined1 (*) [16])(pTVar38->Scale3D).XY.m128d_f64);
                  lVar56 = -(ulonglong)
                            (auVar144._0_8_ <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
                  lVar57 = -(ulonglong)
                            (auVar144._8_8_ <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
                  auVar84._8_4_ = SUB84(auVar187._8_8_,0);
                  auVar84._0_8_ = auVar187._0_8_;
                  auVar84._12_4_ = (int)((ulonglong)auVar187._8_8_ >> 0x20);
                  auVar145._0_8_ =
                       (double)CONCAT44(~(uint)((ulonglong)lVar56 >> 0x20) & auVar123._4_4_,
                                        ~(uint)lVar56 & auVar123._0_4_);
                  auVar145._8_4_ = ~(uint)lVar57 & auVar123._8_4_;
                  auVar145._12_4_ = ~(uint)((ulonglong)lVar57 >> 0x20) & auVar123._12_4_;
                  auVar123 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                   auVar164);
                  local_1b8 = auVar145._0_8_ * (dVar188 * auVar143._8_8_ + dVar165 + auVar84._8_8_);
                  dStack_1b0 = auVar145._8_8_ *
                               (dVar190 * auVar143._8_8_ + dVar167 + auVar178._0_8_);
                  auVar118 = blendpd(auVar187,auVar178,2);
                  local_1a8 = (double)CONCAT44(~(uint)((ulonglong)lVar55 >> 0x20) & auVar123._4_4_,
                                               ~(uint)lVar55 & auVar123._0_4_) *
                              (auVar203._0_8_ * auVar143._8_8_ + dVar87 + auVar118._0_8_);
                  pdVar49[3] = local_1b8;
                  pdVar49[4] = dStack_1b0;
                  pdVar49[5] = local_1a8;
                }
                switch((this->CollisionCompletionOption).Value) {
                case '\0':
                  if ((local_590 != (byte *)0x0) && ((*local_590 & 2) != 0)) {
                    pUVar7 = (pUVar37->EventGenerator).field0_0x0.DebugPtr;
                    (**(code **)(pUVar7->_padding_ + 0x3a0))(pUVar7,pFVar6,local_590,pdVar49);
                  }
                  *(undefined2 *)((longlong)local_588 + (longlong)local_5d0 * 2) =
                       *(undefined2 *)
                        ((longlong)local_588 + -2 + (longlong)*(int *)(local_488 + 0x18c) * 2);
                  *(ushort *)((longlong)local_588 + -2 + (longlong)*(int *)(local_488 + 0x18c) * 2)
                       = uVar5;
                  *(int *)(local_488 + 0x18c) = *(int *)(local_488 + 0x18c) + -1;
                  break;
                case '\x01':
                  *(uint *)((longlong)pdVar49 + 0x6c) =
                       *(uint *)((longlong)pdVar49 + 0x6c) | 0x4000000;
                  break;
                case '\x02':
                  *(uint *)((longlong)pdVar49 + 0x6c) =
                       *(uint *)((longlong)pdVar49 + 0x6c) | 0x8000000;
                  break;
                case '\x03':
                  *(uint *)((longlong)pdVar49 + 0x6c) =
                       *(uint *)((longlong)pdVar49 + 0x6c) | 0x10000000;
                  break;
                case '\x04':
                  *(uint *)((longlong)pdVar49 + 0x6c) =
                       *(uint *)((longlong)pdVar49 + 0x6c) | 0x20000000;
                  break;
                case '\x05':
                  *(uint *)((longlong)pdVar49 + 0x6c) =
                       *(uint *)((longlong)pdVar49 + 0x6c) | 0x30000000;
                }
                if ((local_590 != (byte *)0x0) && ((*local_590 & 4) != 0)) {
                  pUVar7 = (pUVar37->EventGenerator).field0_0x0.DebugPtr;
                  (**(code **)(pUVar7->_padding_ + 0x3a8))(pUVar7,pFVar6,local_590,pfVar48);
                }
              }
              else {
                if (pUVar11->bUseLocalSpace == 0) {
                  fVar59 = *(float *)(pdVar49 + 7);
                  fVar58 = *(float *)(pdVar49 + 8);
                  fVar1 = *(float *)((longlong)pdVar49 + 0x44);
                  fVar2 = *(float *)(pdVar49 + 9);
                  fVar86 = (float)(double)CONCAT44(uVar204,uVar53) * *(float *)(pdVar49 + 6) +
                           (float)dStack_350 * *(float *)((longlong)pdVar49 + 0x34);
                  fVar86 = (fVar59 + fVar59) * (float)local_348 + fVar86 + fVar86;
                  fVar115 = (float)dStack_350 * fVar86;
                  fVar3 = pfVar48[1];
                  fVar4 = pfVar48[2];
                  *(float *)(pdVar49 + 6) =
                       (*(float *)(pdVar49 + 6) - (float)(double)CONCAT44(uVar204,uVar53) * fVar86)
                       * *pfVar48;
                  *(float *)((longlong)pdVar49 + 0x34) =
                       (*(float *)((longlong)pdVar49 + 0x34) - fVar115) * fVar3;
                  *(float *)(pdVar49 + 7) = (fVar59 - (float)local_348 * fVar86) * fVar4;
                  *(float *)((longlong)pdVar49 + 0x4c) =
                       *(float *)((longlong)pdVar49 + 0x4c) * pfVar48[3];
                  if ((cVar27 != '\0') && (0 < lVar47)) {
                    *(float *)((longlong)pdVar49 + lVar47 + 0x3c) =
                         pfVar48[3] * *(float *)((longlong)pdVar49 + lVar47 + 0x3c);
                    *(float *)((longlong)pdVar49 + lVar47 + 0x40) =
                         pfVar48[4] * *(float *)((longlong)pdVar49 + lVar47 + 0x40);
                    *(float *)((longlong)pdVar49 + lVar47 + 0x44) =
                         pfVar48[5] * *(float *)((longlong)pdVar49 + lVar47 + 0x44);
                  }
                  fVar59 = pfVar48[2];
                  fVar3 = pfVar48[1];
                  dVar87 = dStack_350 * (double)local_5c0._8_8_ +
                           local_358 * (double)local_5c0._0_8_ + local_348 * local_5b0;
                  dVar87 = dVar87 + dVar87;
                  fVar4 = *pfVar48;
                  auVar105._0_8_ =
                       ((double)local_5a8._8_8_ - dStack_540) *
                       ((double)local_5a8._8_8_ - dStack_540) +
                       ((double)local_5a8._0_8_ - local_548) * ((double)local_5a8._0_8_ - local_548)
                       + (local_598 - local_538) * (local_598 - local_538);
                  auVar105._8_8_ = 0;
                  pdVar49[8] = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                  *(float *)(pdVar49 + 9) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                  auVar123 = sqrtpd(ZEXT416((uint)fVar115),auVar105);
                  dVar165 = auVar123._0_8_;
                  dVar167 = (double)(__real_3f800000 - local_394);
                  auVar123._0_8_ =
                       ((double)local_5c0._0_8_ - dVar87 * local_358) * dVar165 * (double)fVar4;
                  pdVar49[3] = auVar123._0_8_ * dVar167 + pdVar49[3];
                  auVar123._8_8_ =
                       ((double)local_5c0._8_8_ - dVar87 * dStack_350) * dVar165 * (double)fVar3;
                  dVar165 = (local_5b0 - dVar87 * local_348) * dVar165 * (double)fVar59;
                  pdVar49[4] = auVar123._8_8_ * dVar167 + pdVar49[4];
                  pdVar49[5] = dVar165 * dVar167 + pdVar49[5];
                  if (this->bApplyPhysics != 0) {
                    bVar26 = IsInGameThread();
                    if ((!bVar26) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsInGameThread()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Collision.cpp"
                                            ,0x1da,L""), bVar26)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pUVar42 = FWeakObjectPtr::Get(local_2c0);
                    if ((pUVar42 != (UObject *)0x0) &&
                       (cVar28 = (**(code **)(*(longlong *)pUVar42 + 0x500))(pUVar42),
                       cVar28 != '\0')) {
                      pUVar43 = (UObject *)
                                (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
                      fVar59 = FRawDistributionFloat::GetValue
                                         (&this->ParticleMass,*(float *)(pdVar49 + 0x12),pUVar43,
                                          (FRandomStream *)0x0);
                      lVar55 = *(longlong *)pUVar42;
                      local_258 = local_378;
                      local_3a8 = (double)fVar59;
                      pdVar50 = &local_268;
                      pdVar44 = &local_3b8;
                      local_3b8 = ((double)fVar58 - auVar123._0_8_) * local_3a8;
                      local_3b0 = ((double)fVar1 - auVar123._8_8_) * local_3a8;
                      local_3a8 = ((double)fVar2 - dVar165) * local_3a8;
                      local_268 = local_388;
                      dStack_260 = dStack_380;
                      goto LAB_1481ac0fb;
                    }
                  }
                }
                else {
                  local_410 = (double)*(float *)(pdVar49 + 9);
                  local_420 = (double)*(float *)(pdVar49 + 8);
                  dStack_418 = (double)*(float *)((longlong)pdVar49 + 0x44);
                  auVar181._0_8_ = local_410 * (pTVar38->Scale3D).ZW.m128d_f64[0];
                  auVar181._8_8_ = (pTVar38->Scale3D).ZW.m128d_f64[1] * 0.0;
                  auVar123._0_8_ = local_420 * (pTVar38->Scale3D).XY.m128d_f64[0];
                  dVar179 = dStack_418 * (pTVar38->Scale3D).XY.m128d_f64[1];
                  auVar146._8_4_ = SUB84(dVar179,0);
                  auVar146._0_8_ = auVar123._0_8_;
                  uVar129 = (undefined4)((ulonglong)dVar179 >> 0x20);
                  auVar146._12_4_ = uVar129;
                  auVar118 = *(undefined1 (*) [16])(pTVar38->Rotation).ZW.m128d_f64;
                  dVar167 = auVar118._0_8_;
                  auVar61 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
                  auVar101 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
                  dVar165 = (pTVar38->Rotation).ZW.m128d_f64[1];
                  auVar100 = blendpd(auVar61,auVar118,2);
                  auVar147._0_8_ = auVar146._8_8_ * auVar61._0_8_ - auVar61._8_8_ * auVar123._0_8_;
                  auVar147._8_8_ = auVar181._0_8_ * auVar61._8_8_ - dVar167 * dVar179;
                  auVar136._8_4_ = SUB84(auVar147._8_8_,0);
                  auVar136._0_8_ = auVar147._0_8_;
                  auVar136._12_4_ = (int)((ulonglong)auVar147._8_8_ >> 0x20);
                  auVar63._8_4_ = SUB84(dVar179,0);
                  auVar63._0_8_ = auVar123._0_8_;
                  auVar63._12_4_ = uVar129;
                  auVar61 = blendpd(auVar63,auVar181,2);
                  auVar64._0_8_ = auVar61._0_8_ * dVar167 - auVar100._0_8_ * auVar181._0_8_;
                  auVar64._8_8_ = auVar61._8_8_ * auVar118._8_8_ - auVar100._8_8_ * auVar181._8_8_;
                  auVar61 = blendpd(auVar147,auVar64,2);
                  dVar87 = auVar136._8_8_ + auVar136._8_8_;
                  auVar123._8_8_ = auVar64._0_8_ + auVar64._0_8_;
                  auVar148._0_8_ = auVar61._0_8_ + auVar61._0_8_;
                  auVar148._8_8_ = auVar61._8_8_ + auVar61._8_8_;
                  auVar121._8_4_ = SUB84(auVar123._8_8_,0);
                  auVar121._0_8_ = dVar87;
                  uVar129 = (undefined4)((ulonglong)auVar123._8_8_ >> 0x20);
                  auVar121._12_4_ = uVar129;
                  auVar88._8_4_ = SUB84(auVar123._8_8_,0);
                  auVar88._0_8_ = dVar87;
                  auVar88._12_4_ = uVar129;
                  auVar61 = blendpd(auVar88,auVar148,2);
                  auVar100 = blendpd(auVar101,auVar118,2);
                  auVar122._0_8_ = auVar121._8_8_ * auVar101._0_8_ - auVar101._8_8_ * dVar87;
                  auVar122._8_8_ = auVar148._0_8_ * auVar101._8_8_ - dVar167 * auVar123._8_8_;
                  auVar89._0_8_ = auVar61._0_8_ * dVar167 - auVar100._0_8_ * auVar148._0_8_;
                  auVar89._8_8_ = auVar61._8_8_ * auVar118._8_8_ - auVar100._8_8_ * auVar148._8_8_;
                  auVar65._8_4_ = SUB84(auVar122._8_8_,0);
                  auVar65._0_8_ = auVar122._0_8_;
                  auVar65._12_4_ = (int)((ulonglong)auVar122._8_8_ >> 0x20);
                  local_3f0 = dVar87 * dVar165 + auVar123._0_8_ + auVar65._8_8_;
                  dStack_3e8 = auVar123._8_8_ * dVar165 + dVar179 + auVar89._0_8_;
                  auVar123 = blendpd(auVar122,auVar89,2);
                  local_3e0 = auVar148._0_8_ * dVar165 + auVar181._0_8_ + auVar123._0_8_;
                  local_248 = (double)SUB84(pdVar49[6],0);
                  dStack_240 = (double)(float)((ulonglong)pdVar49[6] >> 0x20);
                  local_238 = (double)*(float *)(pdVar49 + 7);
                  auVar149._0_8_ = local_238 * (pTVar38->Scale3D).ZW.m128d_f64[0];
                  auVar149._8_8_ = (pTVar38->Scale3D).ZW.m128d_f64[1] * 0.0;
                  dVar87 = local_248 * (pTVar38->Scale3D).XY.m128d_f64[0];
                  auVar123._8_8_ = dStack_240 * (pTVar38->Scale3D).XY.m128d_f64[1];
                  dVar165 = (pTVar38->Rotation).ZW.m128d_f64[1];
                  auVar118 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
                  auVar61 = *(undefined1 (*) [16])(pTVar38->Rotation).ZW.m128d_f64;
                  dVar167 = auVar61._0_8_;
                  auVar101 = *(undefined1 (*) [16])(pTVar38->Rotation).XY.m128d_f64;
                  auVar170._8_4_ = SUB84(auVar123._8_8_,0);
                  auVar170._0_8_ = dVar87;
                  uVar129 = (undefined4)((ulonglong)auVar123._8_8_ >> 0x20);
                  auVar170._12_4_ = uVar129;
                  auVar100 = blendpd(auVar118,auVar61,2);
                  auVar171._0_8_ = auVar170._8_8_ * auVar118._0_8_ - auVar118._8_8_ * dVar87;
                  auVar171._8_8_ = auVar149._0_8_ * auVar118._8_8_ - dVar167 * auVar123._8_8_;
                  auVar182._8_4_ = SUB84(auVar171._8_8_,0);
                  auVar182._0_8_ = auVar171._0_8_;
                  auVar182._12_4_ = (int)((ulonglong)auVar171._8_8_ >> 0x20);
                  auVar66._8_4_ = SUB84(auVar123._8_8_,0);
                  auVar66._0_8_ = dVar87;
                  auVar66._12_4_ = uVar129;
                  auVar118 = blendpd(auVar66,auVar149,2);
                  auVar67._0_8_ = auVar118._0_8_ * dVar167 - auVar100._0_8_ * auVar149._0_8_;
                  auVar67._8_8_ = auVar118._8_8_ * auVar61._8_8_ - auVar100._8_8_ * auVar149._8_8_;
                  auVar118 = blendpd(auVar171,auVar67,2);
                  auVar123._0_8_ = auVar182._8_8_ + auVar182._8_8_;
                  dVar179 = auVar67._0_8_ + auVar67._0_8_;
                  auVar172._0_8_ = auVar118._0_8_ + auVar118._0_8_;
                  auVar172._8_8_ = auVar118._8_8_ + auVar118._8_8_;
                  auVar124._8_4_ = SUB84(dVar179,0);
                  auVar124._0_8_ = auVar123._0_8_;
                  uVar129 = (undefined4)((ulonglong)dVar179 >> 0x20);
                  auVar124._12_4_ = uVar129;
                  auVar90._8_4_ = SUB84(dVar179,0);
                  auVar90._0_8_ = auVar123._0_8_;
                  auVar90._12_4_ = uVar129;
                  auVar118 = blendpd(auVar90,auVar172,2);
                  auVar125._0_8_ = auVar124._8_8_ * auVar101._0_8_ - auVar101._8_8_ * auVar123._0_8_
                  ;
                  auVar125._8_8_ = auVar172._0_8_ * auVar101._8_8_ - dVar167 * dVar179;
                  auVar101 = blendpd(auVar101,auVar61,2);
                  auVar68._8_4_ = SUB84(auVar125._8_8_,0);
                  auVar68._0_8_ = auVar125._0_8_;
                  auVar68._12_4_ = (int)((ulonglong)auVar125._8_8_ >> 0x20);
                  auVar91._0_8_ = auVar118._0_8_ * dVar167 - auVar101._0_8_ * auVar172._0_8_;
                  auVar91._8_8_ = auVar118._8_8_ * auVar61._8_8_ - auVar101._8_8_ * auVar172._8_8_;
                  dVar87 = auVar123._0_8_ * dVar165 + dVar87 + auVar68._8_8_;
                  auVar123._8_8_ = dVar179 * dVar165 + auVar123._8_8_ + auVar91._0_8_;
                  auVar118 = blendpd(auVar125,auVar91,2);
                  dVar167 = auVar172._0_8_ * dVar165 + auVar149._0_8_ + auVar118._0_8_;
                  auVar17._4_8_ = auVar118._8_8_;
                  auVar17._0_4_ = (int)((ulonglong)dVar87 >> 0x20);
                  auVar126._0_8_ = auVar17._0_8_ << 0x20;
                  auVar126._8_4_ = SUB84(auVar123._8_8_,0);
                  auVar126._12_4_ = (int)((ulonglong)auVar123._8_8_ >> 0x20);
                  dVar165 = auVar126._8_8_ * dStack_350 + dVar87 * (double)CONCAT44(uVar204,uVar53)
                            + dVar167 * local_348;
                  dVar165 = dVar165 + dVar165;
                  local_470 = (dVar87 - (double)CONCAT44(uVar204,uVar53) * dVar165) *
                              (double)*pfVar48;
                  dStack_468 = (auVar126._8_8_ - dStack_350 * dVar165) * (double)pfVar48[1];
                  local_460 = (dVar167 - local_348 * dVar165) * (double)pfVar48[2];
                  auVar150._0_8_ =
                       (pTVar38->Rotation).ZW.m128d_f64[0] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  auVar150._8_8_ =
                       (pTVar38->Rotation).ZW.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  dVar165 = (pTVar38->Rotation).XY.m128d_f64[0] *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  dVar167 = (pTVar38->Rotation).XY.m128d_f64[1] *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  auVar102._8_4_ = SUB84(dVar167,0);
                  auVar102._0_8_ = dVar165;
                  uVar129 = (undefined4)((ulonglong)dVar167 >> 0x20);
                  auVar102._12_4_ = uVar129;
                  auVar112._8_4_ = SUB84(dVar167,0);
                  auVar112._0_8_ = dVar165;
                  auVar112._12_4_ = uVar129;
                  uVar129 = SUB84(dStack_468,0);
                  auVar197._8_4_ = uVar129;
                  auVar197._0_8_ = local_470;
                  uVar189 = (undefined4)((ulonglong)dStack_468 >> 0x20);
                  auVar197._12_4_ = uVar189;
                  auVar69._8_4_ = uVar129;
                  auVar69._0_8_ = local_470;
                  auVar69._12_4_ = uVar189;
                  auVar61 = blendpd(auVar112,auVar150,2);
                  auVar198._0_8_ = auVar197._8_8_ * dVar165 - local_470 * auVar102._8_8_;
                  auVar198._8_8_ = local_460 * dVar167 - auVar69._8_8_ * auVar150._0_8_;
                  auVar92._8_4_ = uVar129;
                  auVar92._0_8_ = local_470;
                  auVar92._12_4_ = uVar189;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = local_460;
                  auVar123 = blendpd(auVar92,auVar13,2);
                  auVar183._8_4_ = SUB84(auVar198._8_8_,0);
                  auVar183._0_8_ = auVar198._0_8_;
                  auVar183._12_4_ = (int)((ulonglong)auVar198._8_8_ >> 0x20);
                  auVar93._0_8_ = auVar123._0_8_ * auVar150._0_8_ - auVar61._0_8_ * local_460;
                  auVar93._8_8_ = auVar123._8_8_ * auVar150._8_8_ - auVar61._8_8_ * 0.0;
                  auVar118 = blendpd(auVar198,auVar93,2);
                  dVar87 = auVar183._8_8_ + auVar183._8_8_;
                  auVar123._8_8_ = auVar93._0_8_ + auVar93._0_8_;
                  auVar199._0_8_ = auVar118._0_8_ + auVar118._0_8_;
                  auVar199._8_8_ = auVar118._8_8_ + auVar118._8_8_;
                  uVar129 = SUB84(auVar123._8_8_,0);
                  auVar173._8_4_ = uVar129;
                  auVar173._0_8_ = dVar87;
                  uVar189 = (undefined4)((ulonglong)auVar123._8_8_ >> 0x20);
                  auVar173._12_4_ = uVar189;
                  auVar70._8_4_ = uVar129;
                  auVar70._0_8_ = dVar87;
                  auVar70._12_4_ = uVar189;
                  auVar159._8_4_ = uVar129;
                  auVar159._0_8_ = dVar87;
                  auVar159._12_4_ = uVar189;
                  auVar101 = blendpd(auVar159,auVar199,2);
                  auVar174._0_8_ = auVar173._8_8_ * dVar165 - dVar87 * auVar102._8_8_;
                  auVar174._8_8_ = auVar199._0_8_ * dVar167 - auVar70._8_8_ * auVar150._0_8_;
                  auVar71._8_4_ = SUB84(auVar199._8_8_,0);
                  auVar71._0_8_ = auVar199._0_8_;
                  auVar71._12_4_ = (int)((ulonglong)auVar199._8_8_ >> 0x20);
                  auVar118 = *(undefined1 (*) [16])(pTVar38->Scale3D).XY.m128d_f64;
                  auVar18._4_8_ = auVar150._8_8_;
                  auVar18._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                  auVar151._0_8_ = auVar18._0_8_ << 0x20;
                  auVar151._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                  auVar151._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                  auVar160._0_8_ = auVar101._0_8_ * auVar150._0_8_ - auVar199._0_8_ * auVar61._0_8_;
                  auVar160._8_8_ = auVar101._8_8_ * auVar150._8_8_ - auVar71._8_8_ * auVar61._8_8_;
                  auVar61 = *(undefined1 (*) [16])(pTVar38->Scale3D).ZW.m128d_f64;
                  auVar137._0_8_ = (double)CONCAT44(auVar118._4_4_ & uVar85,auVar118._0_4_ & uVar32)
                  ;
                  auVar137._8_4_ = auVar118._8_4_ & uVar206;
                  auVar137._12_4_ = auVar118._12_4_ & uVar207;
                  auVar152._8_8_ = auVar151._8_8_;
                  auVar152._0_8_ = auVar61._0_8_;
                  lVar55 = -(ulonglong)
                            ((double)CONCAT44(uVar85 & auVar61._4_4_,uVar32 & auVar61._0_4_) <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                  auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                   auVar118);
                  lVar56 = -(ulonglong)
                            (auVar137._0_8_ <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
                  lVar57 = -(ulonglong)
                            (auVar137._8_8_ <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
                  auVar72._8_4_ = SUB84(auVar174._8_8_,0);
                  auVar72._0_8_ = auVar174._0_8_;
                  auVar72._12_4_ = (int)((ulonglong)auVar174._8_8_ >> 0x20);
                  local_528 = ZEXT816(0);
                  auVar138._0_8_ =
                       (double)CONCAT44(~(uint)((ulonglong)lVar56 >> 0x20) & auVar118._4_4_,
                                        ~(uint)lVar56 & auVar118._0_4_);
                  auVar138._8_4_ = ~(uint)lVar57 & auVar118._8_4_;
                  auVar138._12_4_ = ~(uint)((ulonglong)lVar57 >> 0x20) & auVar118._12_4_;
                  auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                   auVar152);
                  local_1e8._0_8_ =
                       auVar138._0_8_ * (dVar87 * auVar150._8_8_ + local_470 + auVar72._8_8_);
                  local_1e8._8_8_ =
                       auVar138._8_8_ *
                       (auVar123._8_8_ * auVar150._8_8_ + dStack_468 + auVar160._0_8_);
                  auVar73._0_8_ = (ulonglong)local_1e8._0_8_ & 0xffffffff00000000;
                  auVar73._8_4_ = SUB84(local_1e8._8_8_,0);
                  auVar73._12_4_ = (int)((ulonglong)local_1e8._8_8_ >> 0x20);
                  auVar123 = blendpd(auVar174,auVar160,2);
                  local_1d8 = (double)CONCAT44(~(uint)((ulonglong)lVar55 >> 0x20) & auVar118._4_4_,
                                               ~(uint)lVar55 & auVar118._0_4_) *
                              (auVar199._0_8_ * auVar150._8_8_ + local_460 + auVar123._0_8_);
                  *(float *)(pdVar49 + 6) = (float)local_1e8._0_8_;
                  *(float *)((longlong)pdVar49 + 0x34) = (float)auVar73._8_8_;
                  *(float *)(pdVar49 + 7) = (float)local_1d8;
                  *(float *)((longlong)pdVar49 + 0x4c) =
                       *(float *)((longlong)pdVar49 + 0x4c) * pfVar48[3];
                  if ((cVar27 != '\0') && (0 < lVar47)) {
                    *(float *)((longlong)pdVar49 + lVar47 + 0x3c) =
                         *(float *)((longlong)pdVar49 + lVar47 + 0x3c) * pfVar48[3];
                    *(float *)((longlong)pdVar49 + lVar47 + 0x40) =
                         pfVar48[4] * *(float *)((longlong)pdVar49 + lVar47 + 0x40);
                    *(float *)((longlong)pdVar49 + lVar47 + 0x44) =
                         pfVar48[5] * *(float *)((longlong)pdVar49 + lVar47 + 0x44);
                  }
                  fVar59 = pfVar48[1];
                  auVar123._8_8_ =
                       dStack_350 * (double)local_5c0._8_8_ + local_358 * (double)local_5c0._0_8_ +
                       local_348 * local_5b0;
                  auVar123._8_8_ = auVar123._8_8_ + auVar123._8_8_;
                  fVar58 = *pfVar48;
                  auVar103._0_8_ =
                       ((double)local_5a8._8_8_ - dStack_540) *
                       ((double)local_5a8._8_8_ - dStack_540) +
                       ((double)local_5a8._0_8_ - local_548) * ((double)local_5a8._0_8_ - local_548)
                       + (local_598 - local_538) * (local_598 - local_538);
                  auVar103._8_8_ = 0;
                  auVar118 = sqrtpd(local_1e8,auVar103);
                  fVar1 = pfVar48[2];
                  pdVar49[8] = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                  *(float *)(pdVar49 + 9) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                  dVar87 = auVar118._0_8_;
                  dVar205 = ((double)local_5c0._0_8_ - auVar123._8_8_ * local_358) * dVar87 *
                            (double)fVar58;
                  dVar167 = (double)(__real_3f800000 - local_394);
                  dVar165 = dVar205 * dVar167 + (double)local_5a8._0_8_;
                  local_550 = (float *)((local_5b0 - auVar123._8_8_ * local_348) * dVar87 *
                                       (double)fVar1);
                  dVar87 = ((double)local_5c0._8_8_ - auVar123._8_8_ * dStack_350) * dVar87 *
                           (double)fVar59;
                  local_3f8 = (double)local_550 * dVar167 + local_598;
                  dVar167 = dVar87 * dVar167 + (double)local_5a8._8_8_;
                  local_408._8_4_ = SUB84(dVar167,0);
                  local_408._0_8_ = dVar165;
                  local_408._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
                  auVar139._0_8_ =
                       (pTVar38->Rotation).ZW.m128d_f64[0] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  auVar139._8_8_ =
                       (pTVar38->Rotation).ZW.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  dVar179 = (pTVar38->Rotation).XY.m128d_f64[0] *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  dVar188 = (pTVar38->Rotation).XY.m128d_f64[1] *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  dVar165 = dVar165 - (pTVar38->Translation).XY.m128d_f64[0];
                  dVar167 = dVar167 - (pTVar38->Translation).XY.m128d_f64[1];
                  uVar189 = (undefined4)((ulonglong)dVar167 >> 0x20);
                  auVar200._8_4_ = SUB84(auVar139._8_8_,0);
                  auVar200._0_8_ = auVar139._0_8_;
                  auVar200._12_4_ = (int)((ulonglong)auVar139._8_8_ >> 0x20);
                  auVar123._8_8_ = local_3f8 - (pTVar38->Translation).ZW.m128d_f64[0];
                  auVar104._8_4_ = SUB84(dVar188,0);
                  auVar104._0_8_ = dVar179;
                  uVar129 = (undefined4)((ulonglong)dVar188 >> 0x20);
                  auVar104._12_4_ = uVar129;
                  auVar113._8_4_ = SUB84(dVar188,0);
                  auVar113._0_8_ = dVar179;
                  auVar113._12_4_ = uVar129;
                  auVar123._0_8_ = auVar104._8_8_;
                  auVar192._8_4_ = SUB84(dVar167,0);
                  auVar192._0_8_ = dVar165;
                  auVar192._12_4_ = uVar189;
                  auVar74._8_4_ = SUB84(auVar139._0_8_,0);
                  auVar74._0_8_ = auVar123._0_8_;
                  auVar74._12_4_ = (int)((ulonglong)auVar139._0_8_ >> 0x20);
                  auVar61 = blendpd(auVar113,auVar139,2);
                  auVar193._0_8_ = auVar192._8_8_ * dVar179 - auVar123._0_8_ * dVar165;
                  auVar193._8_8_ = auVar123._8_8_ * dVar188 - auVar74._8_8_ * dVar167;
                  auVar94._8_4_ = SUB84(dVar167,0);
                  auVar94._0_8_ = dVar165;
                  auVar94._12_4_ = uVar189;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = auVar123._8_8_;
                  auVar118 = blendpd(auVar94,auVar14,2);
                  auVar184._8_4_ = SUB84(auVar193._8_8_,0);
                  auVar184._0_8_ = auVar193._0_8_;
                  auVar184._12_4_ = (int)((ulonglong)auVar193._8_8_ >> 0x20);
                  auVar95._0_8_ = auVar118._0_8_ * auVar139._0_8_ - auVar61._0_8_ * auVar123._8_8_;
                  auVar95._8_8_ = auVar118._8_8_ * auVar139._8_8_ - auVar61._8_8_ * 0.0;
                  auVar118 = blendpd(auVar193,auVar95,2);
                  dVar190 = auVar184._8_8_ + auVar184._8_8_;
                  dVar196 = auVar95._0_8_ + auVar95._0_8_;
                  auVar194._0_8_ = auVar118._0_8_ + auVar118._0_8_;
                  auVar194._8_8_ = auVar118._8_8_ + auVar118._8_8_;
                  uVar129 = SUB84(dVar196,0);
                  auVar175._8_4_ = uVar129;
                  auVar175._0_8_ = dVar190;
                  uVar189 = (undefined4)((ulonglong)dVar196 >> 0x20);
                  auVar175._12_4_ = uVar189;
                  auVar75._8_4_ = uVar129;
                  auVar75._0_8_ = dVar190;
                  auVar75._12_4_ = uVar189;
                  auVar161._8_4_ = uVar129;
                  auVar161._0_8_ = dVar190;
                  auVar161._12_4_ = uVar189;
                  auVar118 = blendpd(auVar161,auVar194,2);
                  auVar176._0_8_ = auVar175._8_8_ * dVar179 - dVar190 * auVar123._0_8_;
                  auVar176._8_8_ = auVar194._0_8_ * dVar188 - auVar75._8_8_ * auVar139._0_8_;
                  auVar76._8_4_ = SUB84(auVar194._8_8_,0);
                  auVar76._0_8_ = auVar194._0_8_;
                  auVar76._12_4_ = (int)((ulonglong)auVar194._8_8_ >> 0x20);
                  auVar140._0_8_ =
                       (double)CONCAT44(*(uint *)((longlong)(pTVar38->Scale3D).XY.m128d_f64 + 4) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        *(uint *)(pTVar38->Scale3D).XY.m128d_f64 &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                  auVar140._8_4_ = *(uint *)((pTVar38->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
                  auVar140._12_4_ =
                       *(uint *)((longlong)(pTVar38->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
                  auVar162._0_8_ = auVar118._0_8_ * auVar139._0_8_ - auVar194._0_8_ * auVar61._0_8_;
                  auVar162._8_8_ = auVar118._8_8_ * auVar139._8_8_ - auVar76._8_8_ * auVar61._8_8_;
                  auVar118 = *(undefined1 (*) [16])(pTVar38->Scale3D).ZW.m128d_f64;
                  auVar153._8_8_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
                  auVar153._0_8_ = auVar118._0_8_;
                  lVar55 = -(ulonglong)
                            ((double)CONCAT44(auVar118._4_4_ &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              auVar118._0_4_ &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                  auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                   *(undefined1 (*) [16])(pTVar38->Scale3D).XY.m128d_f64);
                  lVar56 = -(ulonglong)
                            (auVar140._0_8_ <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
                  lVar57 = -(ulonglong)
                            (auVar140._8_8_ <=
                            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
                  auVar77._8_4_ = SUB84(auVar176._8_8_,0);
                  auVar77._0_8_ = auVar176._0_8_;
                  auVar77._12_4_ = (int)((ulonglong)auVar176._8_8_ >> 0x20);
                  auVar141._0_8_ =
                       (double)CONCAT44(~(uint)((ulonglong)lVar56 >> 0x20) & auVar118._4_4_,
                                        ~(uint)lVar56 & auVar118._0_4_);
                  auVar141._8_4_ = ~(uint)lVar57 & auVar118._8_4_;
                  auVar141._12_4_ = ~(uint)((ulonglong)lVar57 >> 0x20) & auVar118._12_4_;
                  auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                   auVar153);
                  local_1a0 = auVar141._0_8_ * (dVar190 * auVar200._8_8_ + dVar165 + auVar77._8_8_);
                  dStack_198 = auVar141._8_8_ *
                               (dVar196 * auVar139._8_8_ + dVar167 + auVar162._0_8_);
                  pdVar49[3] = local_1a0;
                  pdVar49[4] = dStack_198;
                  auVar61 = blendpd(auVar176,auVar162,2);
                  local_190 = (double)CONCAT44(~(uint)((ulonglong)lVar55 >> 0x20) & auVar118._4_4_,
                                               ~(uint)lVar55 & auVar118._0_4_) *
                              (auVar194._0_8_ * auVar200._8_8_ + auVar123._8_8_ + auVar61._0_8_);
                  pdVar49[5] = local_190;
                  if (this->bApplyPhysics != 0) {
                    bVar26 = IsInGameThread();
                    if ((!bVar26) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsInGameThread()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Collision.cpp"
                                            ,0x1bc,L""), bVar26)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pUVar42 = FWeakObjectPtr::Get(local_2c0);
                    if ((pUVar42 != (UObject *)0x0) &&
                       (cVar28 = (**(code **)(*(longlong *)pUVar42 + 0x500))(pUVar42),
                       cVar28 != '\0')) {
                      dVar205 = dVar205 - local_3f0;
                      dVar87 = dVar87 - dStack_3e8;
                      dVar167 = (double)local_550 - local_3e0;
                      pUVar43 = (UObject *)
                                (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
                      fVar59 = FRawDistributionFloat::GetValue
                                         (&this->ParticleMass,*(float *)(pdVar49 + 0x12),pUVar43,
                                          (FRandomStream *)0x0);
                      lVar55 = *(longlong *)pUVar42;
                      pdVar50 = &local_288;
                      pdVar44 = &local_3d8;
                      local_278 = local_378;
                      dVar165 = (double)fVar59;
                      dVar205 = dVar205 * dVar165;
                      dVar87 = dVar87 * dVar165;
                      dVar167 = dVar167 * dVar165;
                      local_288 = local_388;
                      dStack_280 = dStack_380;
                      uVar32 = (uint)__xmm_80000000000000008000000000000000;
                      uVar85 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
                      local_3d8 = (double)CONCAT44((uint)((ulonglong)dVar205 >> 0x20) ^ uVar85,
                                                   SUB84(dVar205,0) ^ uVar32);
                      local_3c8 = CONCAT44((uint)((ulonglong)dVar167 >> 0x20) ^ uVar85,
                                           SUB84(dVar167,0) ^ uVar32);
                      local_3d0 = CONCAT44((uint)((ulonglong)dVar87 >> 0x20) ^ uVar85,
                                           SUB84(dVar87,0) ^ uVar32);
LAB_1481ac0fb:
                      (**(code **)(lVar55 + 0x718))(pUVar42,pdVar44,pdVar50,local_2a8);
                    }
                  }
                }
                uVar32 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar85 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                uVar206 = _UNK_15061cc88;
                uVar207 = _UNK_15061cc8c;
                if ((local_590 != (byte *)0x0) && ((*local_590 & 4) != 0)) {
                  pUVar7 = (pUVar37->EventGenerator).field0_0x0.DebugPtr;
                  (**(code **)(pUVar7->_padding_ + 0x3a8))(pUVar7,pFVar6,local_590,pfVar48);
                  uVar32 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                  uVar85 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                  uVar206 = _UNK_15061cc88;
                  uVar207 = _UNK_15061cc8c;
                }
              }
              *(uint *)((longlong)pdVar49 + 0x6c) = *(uint *)((longlong)pdVar49 + 0x6c) | 0x80000000
              ;
              uVar129 = (undefined4)__real_3ff0000000000000;
              uVar189 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              dVar165 = local_5d8;
              dVar167 = local_480;
              dVar87 = __real_3e45798ee0000000;
            }
          }
          else {
            uVar51 = uVar52;
            uVar54 = uVar52;
            if (0 < local_558) {
              do {
                uVar53 = (uint)uVar51;
                uVar34 = 0;
                if ((int)uVar53 < (local_4e0->PlayerLocations).ArrayNum) {
                  uVar34 = ~uVar53 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar8 = (local_4e0->PlayerLocations).AllocatorInstance.Data;
                dVar165 = *(double *)(pFVar8 + uVar52) - local_4a8;
                dVar87 = *(double *)(pFVar8 + uVar52 + 8) - local_4a0;
                auVar123._0_8_ = *(double *)(pFVar8 + uVar52 + 0x10) - local_498;
                uVar34 = 0;
                if ((int)uVar53 < local_5e0) {
                  uVar34 = ~uVar53 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                auVar123._8_8_ = 0.0;
                pfVar48 = local_550;
                this = local_4d8;
                if ((double)(float)((dVar165 * dVar165 + dVar87 * dVar87 +
                                    auVar123._0_8_ * auVar123._0_8_) *
                                   (double)*(float *)(local_5e8.Data + uVar54 * 4)) < dVar167)
                goto LAB_1481ab322;
                uVar54 = uVar54 + 1;
                uVar52 = uVar52 + 0x18;
                uVar51 = (ulonglong)(uVar53 + 1);
              } while ((longlong)uVar54 < local_558);
            }
            *(uint *)((longlong)pdVar49 + 0x6c) = *(uint *)((longlong)pdVar49 + 0x6c) | 0x8000000;
            dVar165 = local_5d8;
            this = local_4d8;
            dVar87 = __real_3e45798ee0000000;
          }
        }
LAB_1481ac18d:
        local_5d0 = local_5d0 + -1;
        FVar45 = local_5c8;
      } while (-1 < (longlong)local_5d0);
    }
  }
  if (local_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data);
  }
LAB_1481ac215:
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar25) {
    FThreadStats::AddMessage(FVar45,CycleScopeEnd);
  }
  return;
}

