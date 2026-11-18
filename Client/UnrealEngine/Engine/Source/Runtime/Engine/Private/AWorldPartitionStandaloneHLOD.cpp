// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 148a74190

UClass * __cdecl AWorldPartitionStandaloneHLOD::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStandaloneHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton,
               StaticRegisterNativesAWorldPartitionStandaloneHLOD,0x358,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionStandaloneHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionStandaloneHLOD>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton;
}

// AWorldPartitionStandaloneHLOD @ 148a7f0f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionStandaloneHLOD * __thiscall
AWorldPartitionStandaloneHLOD::AWorldPartitionStandaloneHLOD
          (AWorldPartitionStandaloneHLOD *this,FVTableHelper *param_1)

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

// AWorldPartitionStandaloneHLOD @ 148a7f1c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionStandaloneHLOD * __thiscall
AWorldPartitionStandaloneHLOD::AWorldPartitionStandaloneHLOD
          (AWorldPartitionStandaloneHLOD *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  ILevelInstanceInterface *pIVar5;
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
  pIVar5 = (ILevelInstanceInterface *)&this->_padding_;
  if (this == (AWorldPartitionStandaloneHLOD *)0x0) {
    pIVar5 = (ILevelInstanceInterface *)0x0;
  }
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.A = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.B = 0;
  (this->LevelInstanceActorImpl).LevelInstance = pIVar5;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.C = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ContainerID.Guid.D = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ActorName.ComparisonIndex = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.ActorName.Number = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.ArrayNum = 0;
  (this->LevelInstanceActorImpl).LevelInstanceID.PackageShortName.Data.ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,L"Root");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_ULevelInstanceComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  pUVar4[10].field_0x1b = 0;
  return this;
}

// ~AWorldPartitionStandaloneHLOD @ 148a81700

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
AWorldPartitionStandaloneHLOD::~AWorldPartitionStandaloneHLOD(AWorldPartitionStandaloneHLOD *this)

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

// GetLevelInstanceGuid @ 148a956b0

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
AWorldPartitionStandaloneHLOD::GetLevelInstanceGuid(AWorldPartitionStandaloneHLOD *this)

{
  FGuid *pFVar1;
  
  pFVar1 = FLevelInstanceActorGuid::GetGuid((FLevelInstanceActorGuid *)&this->_padding_);
  return pFVar1;
}

// GetLevelInstanceID @ 148a956d0

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
AWorldPartitionStandaloneHLOD::GetLevelInstanceID(AWorldPartitionStandaloneHLOD *this)

{
  FLevelInstanceID *pFVar1;
  
  pFVar1 = FLevelInstanceActorImpl::GetLevelInstanceID((FLevelInstanceActorImpl *)&this->_padding_);
  return pFVar1;
}

// GetPrivateStaticClass @ 148a95a40

UClass * __cdecl AWorldPartitionStandaloneHLOD::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStandaloneHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton,
               StaticRegisterNativesAWorldPartitionStandaloneHLOD,0x358,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionStandaloneHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionStandaloneHLOD>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionStandaloneHLOD.InnerSingleton;
}

// GetWorldAsset @ 148a97170

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
AWorldPartitionStandaloneHLOD::GetWorldAsset(AWorldPartitionStandaloneHLOD *this)

{
  return (TSoftObjectPtr<UWorld> *)&this->_padding_;
}

// HasValidLevelInstanceID @ 148a97670

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
AWorldPartitionStandaloneHLOD::HasValidLevelInstanceID(AWorldPartitionStandaloneHLOD *this)

{
  bool bVar1;
  
  bVar1 = FLevelInstanceActorImpl::HasValidLevelInstanceID
                    ((FLevelInstanceActorImpl *)&this->_padding_);
  return bVar1;
}

// IsLoadingEnabled @ 148a9a170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AWorldPartitionStandaloneHLOD::IsLoadingEnabled(AWorldPartitionStandaloneHLOD *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148a9a178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  return (bool)uVar1;
}

// PostRegisterAllComponents @ 148a9d610

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
AWorldPartitionStandaloneHLOD::PostRegisterAllComponents(AWorldPartitionStandaloneHLOD *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  UWorld *this_00;
  FGuid *pFVar5;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  if ((char)this->_padding_ == '\x03') {
    this_00 = AActor::GetWorld((AActor *)this);
    bVar4 = UWorld::IsGameWorld(this_00);
    if (bVar4) {
      FLevelInstanceActorGuid::AssignIfInvalid(&this->LevelInstanceActorGuid);
      pFVar5 = FLevelInstanceActorGuid::GetGuid(&this->LevelInstanceActorGuid);
      uVar1 = pFVar5->B;
      uVar2 = pFVar5->C;
      uVar3 = pFVar5->D;
      (this->LevelInstanceSpawnGuid).A = pFVar5->A;
      (this->LevelInstanceSpawnGuid).B = uVar1;
      (this->LevelInstanceSpawnGuid).C = uVar2;
      (this->LevelInstanceSpawnGuid).D = uVar3;
    }
  }
  bVar4 = FLevelInstanceActorGuid::IsValid(&this->LevelInstanceActorGuid);
  if (bVar4) {
                    /* WARNING: Could not recover jumptable at 0x000148a9d686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((this->LevelInstanceActorImpl)._padding_ + 8))();
    return;
  }
  return;
}

// PostUnregisterAllComponents @ 148a9d740

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
AWorldPartitionStandaloneHLOD::PostUnregisterAllComponents(AWorldPartitionStandaloneHLOD *this)

{
  AActor::PostUnregisterAllComponents((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000148a9d75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LevelInstanceActorImpl)._padding_ + 0x10))();
  return;
}

// SetWorldAsset @ 148aa25d0

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
AWorldPartitionStandaloneHLOD::SetWorldAsset
          (AWorldPartitionStandaloneHLOD *this,TSoftObjectPtr<UWorld> *param_1)

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

// StaticRegisterNativesAWorldPartitionStandaloneHLOD @ 148aa28c0

void __cdecl AWorldPartitionStandaloneHLOD::StaticRegisterNativesAWorldPartitionStandaloneHLOD(void)

{
  return;
}

// _getUObject @ 148aa5ad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall AWorldPartitionStandaloneHLOD::_getUObject(AWorldPartitionStandaloneHLOD *this)

{
  return (UObject *)&this[-1]._padding_;
}

