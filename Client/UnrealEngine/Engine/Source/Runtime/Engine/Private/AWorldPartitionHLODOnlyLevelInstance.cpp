// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 148a72830

UClass * __cdecl AWorldPartitionHLODOnlyLevelInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODOnlyLevelInstance",
               &Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton,
               StaticRegisterNativesAWorldPartitionHLODOnlyLevelInstance,0x358,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionHLODOnlyLevelInstance>,
               InternalVTableHelperCtorCaller<AWorldPartitionHLODOnlyLevelInstance>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton;
}

// AWorldPartitionHLODOnlyLevelInstance @ 148a7eed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionHLODOnlyLevelInstance * __thiscall
AWorldPartitionHLODOnlyLevelInstance::AWorldPartitionHLODOnlyLevelInstance
          (AWorldPartitionHLODOnlyLevelInstance *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  AActor::AActor((AActor *)this,param_1);
  this_00 = &(this->WorldAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__ILevelInstanceInterface__;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->LevelInstanceSpawnGuid).A = 0;
  (this->LevelInstanceSpawnGuid).B = 0;
  (this->LevelInstanceSpawnGuid).C = 0;
  (this->LevelInstanceSpawnGuid).D = 0;
  (this->LevelInstanceActorGuid).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->LevelInstanceActorGuid).ActorGuid.A = 0;
  (this->LevelInstanceActorGuid).ActorGuid.B = 0;
  (this->LevelInstanceActorGuid).ActorGuid.C = 0;
  (this->LevelInstanceActorGuid).ActorGuid.D = 0;
  (this->LevelInstanceActorImpl)._padding_ = (longlong)&___7FLevelInstanceActorImpl__6B_;
  (this->LevelInstanceActorImpl).LevelInstance = (ILevelInstanceInterface *)0x0;
  (this->LevelInstanceActorImpl).LevelInstanceID.Hash = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.A = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.B = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.C = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.D = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ActorName.ComparisonIndex = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ActorName.Number = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.ArrayNum = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.ArrayMax = 0;
  return this;
}

// AWorldPartitionHLODOnlyLevelInstance @ 148a7efa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionHLODOnlyLevelInstance * __thiscall
AWorldPartitionHLODOnlyLevelInstance::AWorldPartitionHLODOnlyLevelInstance
          (AWorldPartitionHLODOnlyLevelInstance *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *this_00;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  ILevelInstanceInterface *pIVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this_00 = &(this->WorldAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__ILevelInstanceInterface__;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WorldAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->LevelInstanceSpawnGuid).A = 0;
  (this->LevelInstanceSpawnGuid).B = 0;
  (this->LevelInstanceSpawnGuid).C = 0;
  (this->LevelInstanceSpawnGuid).D = 0;
  (this->LevelInstanceActorGuid).Actor.field0_0x0.DebugPtr = (AActor *)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (this->LevelInstanceActorGuid).ActorGuid.A = 0;
  (this->LevelInstanceActorGuid).ActorGuid.B = 0;
  (this->LevelInstanceActorGuid).ActorGuid.C = 0;
  (this->LevelInstanceActorGuid).ActorGuid.D = 0;
  (this->LevelInstanceActorImpl)._padding_ = (longlong)&___7FLevelInstanceActorImpl__6B_;
  (this->LevelInstanceActorImpl).LevelInstanceID.Hash = 0;
  pIVar6 = (ILevelInstanceInterface *)&this->_padding_;
  if (this == (AWorldPartitionHLODOnlyLevelInstance *)0x0) {
    pIVar6 = (ILevelInstanceInterface *)0x0;
  }
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.A = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.B = 0;
  (this->LevelInstanceActorImpl).LevelInstance = pIVar6;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.C = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.D = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ActorName.ComparisonIndex = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ActorName.Number = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.ArrayNum = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.ArrayMax = 0;
  pFVar3 = ::FName::FName(&local_res8,L"Root");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_ULevelInstanceComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pUVar5[10].field_0x1b = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  return this;
}

// ~AWorldPartitionHLODOnlyLevelInstance @ 148a81680

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
AWorldPartitionHLODOnlyLevelInstance::~AWorldPartitionHLODOnlyLevelInstance
          (AWorldPartitionHLODOnlyLevelInstance *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__ILevelInstanceInterface__;
  (this->LevelInstanceActorImpl)._padding_ = (longlong)&___7FLevelInstanceActorImpl__6B_;
  pFVar1 = (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->WorldAsset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7ILevelInstanceInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetLevelInstanceGuid @ 148a956a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall
AWorldPartitionHLODOnlyLevelInstance::GetLevelInstanceGuid
          (AWorldPartitionHLODOnlyLevelInstance *this)

{
  FGuid *pFVar1;
  
  pFVar1 = FLevelInstanceActorGuid::GetGuid((FLevelInstanceActorGuid *)&this->_padding_);
  return pFVar1;
}

// GetLevelInstanceID @ 148a956c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelInstanceID * __thiscall
AWorldPartitionHLODOnlyLevelInstance::GetLevelInstanceID(AWorldPartitionHLODOnlyLevelInstance *this)

{
  FLevelInstanceID *pFVar1;
  
  pFVar1 = FLevelInstanceActorImpl::GetLevelInstanceID((FLevelInstanceActorImpl *)&this->_padding_);
  return pFVar1;
}

// GetPrivateStaticClass @ 148a95980

UClass * __cdecl AWorldPartitionHLODOnlyLevelInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODOnlyLevelInstance",
               &Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton,
               StaticRegisterNativesAWorldPartitionHLODOnlyLevelInstance,0x358,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionHLODOnlyLevelInstance>,
               InternalVTableHelperCtorCaller<AWorldPartitionHLODOnlyLevelInstance>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionHLODOnlyLevelInstance.InnerSingleton;
}

// GetWorldAsset @ 148a97160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSoftObjectPtr<UWorld> * __thiscall
AWorldPartitionHLODOnlyLevelInstance::GetWorldAsset(AWorldPartitionHLODOnlyLevelInstance *this)

{
  return (TSoftObjectPtr<UWorld> *)&this->_padding_;
}

// HasValidLevelInstanceID @ 148a97660

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
AWorldPartitionHLODOnlyLevelInstance::HasValidLevelInstanceID
          (AWorldPartitionHLODOnlyLevelInstance *this)

{
  bool bVar1;
  
  bVar1 = FLevelInstanceActorImpl::HasValidLevelInstanceID
                    ((FLevelInstanceActorImpl *)&this->_padding_);
  return bVar1;
}

// IsLoadingEnabled @ 148a9a160

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
AWorldPartitionHLODOnlyLevelInstance::IsLoadingEnabled(AWorldPartitionHLODOnlyLevelInstance *this)

{
  return false;
}

// PostRegisterAllComponents @ 148a9d5d0

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
AWorldPartitionHLODOnlyLevelInstance::PostRegisterAllComponents
          (AWorldPartitionHLODOnlyLevelInstance *this)

{
  bool bVar1;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  bVar1 = FLevelInstanceActorGuid::IsValid(&this->LevelInstanceActorGuid);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000148a9d5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((this->LevelInstanceActorImpl)._padding_ + 8))();
    return;
  }
  return;
}

// PostUnregisterAllComponents @ 148a9d710

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
AWorldPartitionHLODOnlyLevelInstance::PostUnregisterAllComponents
          (AWorldPartitionHLODOnlyLevelInstance *this)

{
  AActor::PostUnregisterAllComponents((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000148a9d72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LevelInstanceActorImpl)._padding_ + 0x10))();
  return;
}

// SetWorldAsset @ 148aa25a0

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
AWorldPartitionHLODOnlyLevelInstance::SetWorldAsset
          (AWorldPartitionHLODOnlyLevelInstance *this,TSoftObjectPtr<UWorld> *param_1)

{
  void *pvVar1;
  
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_,
             (TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return true;
}

// StaticRegisterNativesAWorldPartitionHLODOnlyLevelInstance @ 148aa28b0

void __cdecl
AWorldPartitionHLODOnlyLevelInstance::StaticRegisterNativesAWorldPartitionHLODOnlyLevelInstance
          (void)

{
  return;
}

// _getUObject @ 148aa5ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
AWorldPartitionHLODOnlyLevelInstance::_getUObject(AWorldPartitionHLODOnlyLevelInstance *this)

{
  return (UObject *)&this[-1]._padding_;
}

