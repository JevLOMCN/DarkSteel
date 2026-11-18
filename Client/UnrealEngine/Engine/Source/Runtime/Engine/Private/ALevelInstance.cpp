// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// StaticClass @ 147e44c30

UClass * __cdecl ALevelInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstance",
               &Z_Registration_Info_UClass_ALevelInstance.InnerSingleton,
               StaticRegisterNativesALevelInstance,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelInstance>,
               InternalVTableHelperCtorCaller<ALevelInstance>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstance.InnerSingleton;
}

// ALevelInstance @ 147e54040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelInstance * __thiscall
ALevelInstance::ALevelInstance(ALevelInstance *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  AActor::AActor((AActor *)this,param_1);
  this_00 = &(this->CookedWorldAsset).SoftObjectPtr.field_0x18;
  (this->LevelInstanceComponent).field0_0x0.DebugPtr = (ULevelInstanceComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__ILevelInstanceInterface__;
  *(undefined8 *)&(this->CookedWorldAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CookedWorldAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->CookedWorldAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CookedWorldAsset).SoftObjectPtr.field_0x8 = 0;
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

// ALevelInstance @ 147e54120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelInstance * __thiscall ALevelInstance::ALevelInstance(ALevelInstance *this)

{
  undefined1 *this_00;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  ULevelInstanceComponent *pUVar4;
  ILevelInstanceInterface *pIVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this);
  this_00 = &(this->CookedWorldAsset).SoftObjectPtr.field_0x18;
  (this->LevelInstanceComponent).field0_0x0.DebugPtr = (ULevelInstanceComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&_vftable__for__ILevelInstanceInterface__;
  *(undefined8 *)&(this->CookedWorldAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CookedWorldAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->CookedWorldAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CookedWorldAsset).SoftObjectPtr.field_0x8 = 0;
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
  if (this == (ALevelInstance *)0x0) {
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
  pUVar3 = ULevelInstanceComponent::StaticClass();
  pUVar4 = (ULevelInstanceComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (ULevelInstanceComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->LevelInstanceComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (ULevelInstanceComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar4 = (this->LevelInstanceComponent).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)pUVar4;
  pUVar4->field_0x1ab = 0;
  return this;
}

// ~ALevelInstance @ 147e57040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelInstance::~ALevelInstance(ALevelInstance *this)

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
  pvVar2 = *(void **)&(this->CookedWorldAsset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7ILevelInstanceInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetLevelInstanceGuid @ 147e68000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall ALevelInstance::GetLevelInstanceGuid(ALevelInstance *this)

{
  FGuid *pFVar1;
  
  pFVar1 = FLevelInstanceActorGuid::GetGuid((FLevelInstanceActorGuid *)&this->_padding_);
  return pFVar1;
}

// GetLevelInstanceID @ 147e68010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelInstanceID * __thiscall ALevelInstance::GetLevelInstanceID(ALevelInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FLevelInstanceID *pFVar3;
  
  if (((*(int *)((longlong)&this->_padding_ + 4) == 0 && (int)this->_padding_ == 0) &&
      *(int *)((longlong)&this->_padding_ + 4) == 0) && (int)this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasValidLevelInstanceID()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorImpl.cpp"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLevelInstanceID *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FLevelInstanceID *)&this->_padding_;
}

// GetLifetimeReplicatedProps @ 147e68ba0

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
ALevelInstance::GetLifetimeReplicatedProps
          (ALevelInstance *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  local_28.Condition = COND_InitialOnly;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.RepIndex = 0xb;
  local_38.PropertyName = L"LevelInstanceSpawnGuid";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 10;
  local_38.PropertyName = L"CookedWorldAsset";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 147e69490

UClass * __cdecl ALevelInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstance",
               &Z_Registration_Info_UClass_ALevelInstance.InnerSingleton,
               StaticRegisterNativesALevelInstance,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelInstance>,
               InternalVTableHelperCtorCaller<ALevelInstance>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstance.InnerSingleton;
}

// GetWorldAsset @ 147e6a9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSoftObjectPtr<UWorld> * __thiscall ALevelInstance::GetWorldAsset(ALevelInstance *this)

{
  return (TSoftObjectPtr<UWorld> *)&this->_padding_;
}

// HasValidLevelInstanceID @ 147e6b560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ALevelInstance::HasValidLevelInstanceID(ALevelInstance *this)

{
  return ((*(int *)((longlong)&this->_padding_ + 4) != 0 || (int)this->_padding_ != 0) ||
         *(int *)((longlong)&this->_padding_ + 4) != 0) || (int)this->_padding_ != 0;
}

// IsLoadingEnabled @ 147e6e1e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ALevelInstance::IsLoadingEnabled(ALevelInstance *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147e6e1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  return (bool)uVar1;
}

// OnLevelInstanceLoaded @ 147e713a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelInstance::OnLevelInstanceLoaded(ALevelInstance *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147e713a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))(&this->_padding_);
  return;
}

// PostNetInit @ 147e722b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelInstance::PostNetInit(ALevelInstance *this)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  AActor::PostNetInit((AActor *)this);
  if ((this->LevelInstanceActorGuid).Actor.field0_0x0.DebugPtr == (AActor *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Actor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                       ,0x1f,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((((this->LevelInstanceActorGuid).ActorGuid.D != 0 ||
       (this->LevelInstanceActorGuid).ActorGuid.C != 0) ||
      (this->LevelInstanceActorGuid).ActorGuid.B != 0) ||
      (this->LevelInstanceActorGuid).ActorGuid.A != 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2113260429462470732>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActor.cpp"
                       ,0x4c,"!LevelInstanceActorGuid.IsValid()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
  if ((((this->LevelInstanceSpawnGuid).D == 0 && (this->LevelInstanceSpawnGuid).C == 0) &&
      (this->LevelInstanceSpawnGuid).B == 0) && (this->LevelInstanceSpawnGuid).A == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelInstanceSpawnGuid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActor.cpp"
                       ,0x4e,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = (this->LevelInstanceSpawnGuid).B;
  uVar4 = (this->LevelInstanceSpawnGuid).C;
  uVar5 = (this->LevelInstanceSpawnGuid).D;
  lVar1 = (this->LevelInstanceActorImpl)._padding_;
  (this->LevelInstanceActorGuid).ActorGuid.A = (this->LevelInstanceSpawnGuid).A;
  (this->LevelInstanceActorGuid).ActorGuid.B = uVar3;
  (this->LevelInstanceActorGuid).ActorGuid.C = uVar4;
  (this->LevelInstanceActorGuid).ActorGuid.D = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000147e72398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}

// PostRegisterAllComponents @ 147e723b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelInstance::PostRegisterAllComponents(ALevelInstance *this)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  UWorld *this_00;
  FGuid *pFVar6;
  FGuid local_18;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  if ((char)this->_padding_ == '\x03') {
    this_00 = AActor::GetWorld((AActor *)this);
    bVar5 = UWorld::IsGameWorld(this_00);
    if (bVar5) {
      if ((((this->LevelInstanceActorGuid).ActorGuid.D == 0 &&
           (this->LevelInstanceActorGuid).ActorGuid.C == 0) &&
          (this->LevelInstanceActorGuid).ActorGuid.B == 0) &&
          (this->LevelInstanceActorGuid).ActorGuid.A == 0) {
        pFVar6 = FGuid::NewGuid(&local_18);
        uVar2 = pFVar6->B;
        uVar3 = pFVar6->C;
        uVar4 = pFVar6->D;
        (this->LevelInstanceActorGuid).ActorGuid.A = pFVar6->A;
        (this->LevelInstanceActorGuid).ActorGuid.B = uVar2;
        (this->LevelInstanceActorGuid).ActorGuid.C = uVar3;
        (this->LevelInstanceActorGuid).ActorGuid.D = uVar4;
      }
      pFVar6 = FLevelInstanceActorGuid::GetGuid(&this->LevelInstanceActorGuid);
      uVar2 = pFVar6->B;
      uVar3 = pFVar6->C;
      uVar4 = pFVar6->D;
      (this->LevelInstanceSpawnGuid).A = pFVar6->A;
      (this->LevelInstanceSpawnGuid).B = uVar2;
      (this->LevelInstanceSpawnGuid).C = uVar3;
      (this->LevelInstanceSpawnGuid).D = uVar4;
    }
  }
  if ((this->LevelInstanceActorGuid).Actor.field0_0x0.DebugPtr == (AActor *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Actor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                       ,0x1f,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((((this->LevelInstanceActorGuid).ActorGuid.D != 0 ||
       (this->LevelInstanceActorGuid).ActorGuid.C != 0) ||
      (this->LevelInstanceActorGuid).ActorGuid.B != 0) ||
      (this->LevelInstanceActorGuid).ActorGuid.A != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e72478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((this->LevelInstanceActorImpl)._padding_ + 8))();
    return;
  }
  return;
}

// PostUnregisterAllComponents @ 147e72620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelInstance::PostUnregisterAllComponents(ALevelInstance *this)

{
  AActor::PostUnregisterAllComponents((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000147e7263d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->LevelInstanceActorImpl)._padding_ + 0x10))();
  return;
}

// Serialize @ 147e7cf20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelInstance::Serialize(ALevelInstance *this,FArchive *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FGuid *pFVar6;
  FGuid local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  AActor::Serialize((AActor *)this,param_1);
  if ((this->LevelInstanceActorGuid).Actor.field0_0x0.DebugPtr == (AActor *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelInstanceActorGuid.Actor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                       ,0x2b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    bVar5 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)
                       (this->LevelInstanceActorGuid).Actor.field0_0x0.DebugPtr,
                       RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar5) {
      if ((((this->LevelInstanceActorGuid).ActorGuid.D != 0 ||
           (this->LevelInstanceActorGuid).ActorGuid.C != 0) ||
          (this->LevelInstanceActorGuid).ActorGuid.B != 0) ||
          (this->LevelInstanceActorGuid).ActorGuid.A != 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!LevelInstanceActorGuid.ActorGuid.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                           ,0x46,L"");
        if (!bVar5) {
          return;
        }
code_r0x000147e7d06a:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if ((*(uint *)&param_1->field_0x34 & 0x1000) != 0) {
        pFVar6 = FGuid::NewGuid(&local_18);
        uVar2 = pFVar6->B;
        uVar3 = pFVar6->C;
        uVar4 = pFVar6->D;
        (this->LevelInstanceActorGuid).ActorGuid.A = pFVar6->A;
        (this->LevelInstanceActorGuid).ActorGuid.B = uVar2;
        (this->LevelInstanceActorGuid).ActorGuid.C = uVar3;
        (this->LevelInstanceActorGuid).ActorGuid.D = uVar4;
        return;
      }
      if ((param_1->field_0x29 & 1) != 0) {
        ::operator<<(param_1,&(this->LevelInstanceActorGuid).ActorGuid);
        if ((((this->LevelInstanceActorGuid).ActorGuid.D == 0 &&
             (this->LevelInstanceActorGuid).ActorGuid.C == 0) &&
            (this->LevelInstanceActorGuid).ActorGuid.B == 0) &&
            (this->LevelInstanceActorGuid).ActorGuid.A == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("LevelInstanceActorGuid.ActorGuid.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                             ,0x4f,L"");
          if (bVar5) goto code_r0x000147e7d06a;
        }
      }
    }
  }
  return;
}

// Serialize @ 147e7d080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelInstance::Serialize(ALevelInstance *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FArchive *pFVar6;
  FGuid *pFVar7;
  FSlotBase local_res8;
  FGuid local_18;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  (**(code **)(*(longlong *)pFVar6 + 0x230))(pFVar6,&FFortniteMainBranchObjectVersion::GUID);
  AActor::Serialize((AActor *)this,pFVar6);
  if ((this->LevelInstanceActorGuid).Actor.field0_0x0.DebugPtr == (AActor *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelInstanceActorGuid.Actor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                       ,0x2b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((pFVar6->field_0x28 & 1) != 0) {
    bVar5 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)
                       (this->LevelInstanceActorGuid).Actor.field0_0x0.DebugPtr,
                       RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar5) {
      if ((((this->LevelInstanceActorGuid).ActorGuid.D != 0 ||
           (this->LevelInstanceActorGuid).ActorGuid.C != 0) ||
          (this->LevelInstanceActorGuid).ActorGuid.B != 0) ||
          (this->LevelInstanceActorGuid).ActorGuid.A != 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!LevelInstanceActorGuid.ActorGuid.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                           ,0x46,L"");
        if (!bVar5) {
          return;
        }
code_r0x000147e7d1dd:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if ((*(uint *)&pFVar6->field_0x34 & 0x1000) != 0) {
        pFVar7 = FGuid::NewGuid(&local_18);
        uVar2 = pFVar7->B;
        uVar3 = pFVar7->C;
        uVar4 = pFVar7->D;
        (this->LevelInstanceActorGuid).ActorGuid.A = pFVar7->A;
        (this->LevelInstanceActorGuid).ActorGuid.B = uVar2;
        (this->LevelInstanceActorGuid).ActorGuid.C = uVar3;
        (this->LevelInstanceActorGuid).ActorGuid.D = uVar4;
        return;
      }
      if ((pFVar6->field_0x29 & 1) != 0) {
        ::operator<<(pFVar6,&(this->LevelInstanceActorGuid).ActorGuid);
        if ((((this->LevelInstanceActorGuid).ActorGuid.D == 0 &&
             (this->LevelInstanceActorGuid).ActorGuid.C == 0) &&
            (this->LevelInstanceActorGuid).ActorGuid.B == 0) &&
            (this->LevelInstanceActorGuid).ActorGuid.A == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("LevelInstanceActorGuid.ActorGuid.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                             ,0x4f,L"");
          if (bVar5) goto code_r0x000147e7d1dd;
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesALevelInstance @ 147e82180

void __cdecl ALevelInstance::StaticRegisterNativesALevelInstance(void)

{
  return;
}

// ValidateGeneratedRepEnums @ 147e86af0

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
ALevelInstance::ValidateGeneratedRepEnums
          (ALevelInstance *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_CookedWorldAsset,L"CookedWorldAsset");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_LevelInstanceSpawnGuid,L"LevelInstanceSpawnGuid");
    _Init_thread_footer(&::_TSS1);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_CookedWorldAsset == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    if (bVar3) {
      FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_LevelInstanceSpawnGuid == FVar6) {
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\LevelInstanceActor.gen.cpp"
                     ,0xc4,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelInstance"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// _getUObject @ 147e87f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall ALevelInstance::_getUObject(ALevelInstance *this)

{
  return (UObject *)&this[-1]._padding_;
}

