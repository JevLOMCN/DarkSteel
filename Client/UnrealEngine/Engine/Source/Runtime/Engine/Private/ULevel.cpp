// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 86

// ULevel @ 14725d510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall ULevel::ULevel(ULevel *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IEditorPathObjectInterface__;
  FURL::FURL(&this->URL,(wchar_t *)0x0);
  (this->Actors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actors).ArrayNum = 0;
  (this->Actors).ArrayMax = 0;
  (this->ActorsForGC).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorsForGC).ArrayNum = 0;
  (this->ActorsForGC).ArrayMax = 0;
  (this->OwningWorld).field0_0x0.DebugPtr = (UWorld *)0x0;
  (this->Model).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->ModelComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModelComponents).ArrayNum = 0;
  (this->ModelComponents).ArrayMax = 0;
  (this->ActorCluster).field0_0x0.DebugPtr = (ULevelActorContainer *)0x0;
  (this->LevelScriptActor).field0_0x0.DebugPtr = (ALevelScriptActor *)0x0;
  (this->NavListStart).field0_0x0.DebugPtr = (ANavigationObjectBase *)0x0;
  (this->NavListEnd).field0_0x0.DebugPtr = (ANavigationObjectBase *)0x0;
  (this->NavDataChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavDataChunks).ArrayNum = 0;
  (this->NavDataChunks).ArrayMax = 0;
  (this->StaticNavigableGeometry).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticNavigableGeometry).ArrayNum = 0;
  (this->StaticNavigableGeometry).ArrayMax = 0;
  (this->StreamingTextureGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingTextureGuids).ArrayNum = 0;
  (this->StreamingTextureGuids).ArrayMax = 0;
  (this->StreamingTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingTextures).ArrayNum = 0;
  (this->StreamingTextures).ArrayMax = 0;
  (this->PrecomputedVisibilityHandler).Id = FPrecomputedVisibilityHandler::NextId;
  (this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.ArrayNum = 0;
  (this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.ArrayMax = 0;
  FPrecomputedVisibilityHandler::NextId = FPrecomputedVisibilityHandler::NextId + 1;
  (this->PrecomputedVolumeDistanceField).VolumeBox.IsValid = '\0';
  (this->PrecomputedVolumeDistanceField).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrecomputedVolumeDistanceField).Data.ArrayNum = 0;
  (this->PrecomputedVolumeDistanceField).Data.ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->RemoveFromSceneFence);
  this_00 = &(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x18;
  (this->LevelBuildDataId).A = 0;
  (this->LevelBuildDataId).B = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x20 = 0;
  (this->LevelBuildDataId).C = 0;
  (this->LevelBuildDataId).D = 0;
  (this->MapBuildData).field0_0x0.DebugPtr = (UMapBuildDataRegistry *)0x0;
  this->VolumetricLightmapGridManager = (FVolumetricLightmapGridManager *)0x0;
  *(undefined8 *)&this->OnApplyLevelTransform = 0;
  *(undefined8 *)&(this->OnApplyLevelTransform).field_0x8 = 0;
  *(undefined8 *)&(this->OnApplyLevelTransform).field_0x10 = 0;
  *(undefined8 *)&(this->OnApplyLevelTransform).field_0x18 = 2;
  *(undefined8 *)&this->OnCleanupLevel = 0;
  *(undefined8 *)&(this->OnCleanupLevel).field_0x8 = 0;
  *(undefined8 *)&(this->OnCleanupLevel).field_0x10 = 0;
  *(undefined8 *)&(this->OnCleanupLevel).field_0x18 = 2;
  (this->LevelBoundsActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->InstancedFoliageActor).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->LevelBoundsActorUpdatedEvent = 0;
  *(undefined8 *)&(this->LevelBoundsActorUpdatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->LevelBoundsActorUpdatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->LevelBoundsActorUpdatedEvent).field_0x18 = 2;
  (this->WorldSettings).field0_0x0.DebugPtr = (AWorldSettings *)0x0;
  (this->WorldDataLayers).field0_0x0.DebugPtr = (AWorldDataLayers *)0x0;
  *(undefined8 *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->AsyncRegisterLevelContext).Ptr = (FAsyncRegisterLevelContext *)0x0;
  *(undefined8 *)&(this->PreUnregisteringActorComponents).Elements = 0;
  *(undefined8 *)&(this->PreUnregisteringActorComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreUnregisteringActorComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreUnregisteringActorComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreUnregisteringActorComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreUnregisteringActorComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreUnregisteringActorComponents).Elements.field_0x34 = 0;
  (this->PreUnregisteringActorComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreUnregisteringActorComponents).HashSize = 0;
  *(undefined8 *)&(this->PreRegisteringActorComponents).Elements = 0;
  *(undefined8 *)&(this->PreRegisteringActorComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreRegisteringActorComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreRegisteringActorComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreRegisteringActorComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreRegisteringActorComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreRegisteringActorComponents).Elements.field_0x34 = 0;
  (this->PreRegisteringActorComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreRegisteringActorComponents).HashSize = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->PendingAutoReceiveInputActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAutoReceiveInputActors).ArrayNum = 0;
  (this->PendingAutoReceiveInputActors).ArrayMax = 0;
  (this->DestroyedReplicatedStaticActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestroyedReplicatedStaticActors).ArrayNum = 0;
  (this->DestroyedReplicatedStaticActors).ArrayMax = 0;
  return this;
}

// IsNameStableForNetworking @ 147260ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::IsNameStableForNetworking(ULevel *this)

{
  return true;
}

// StaticClass @ 147260db0

UClass * __cdecl ULevel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULevel.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Level",&Z_Registration_Info_UClass_ULevel.InnerSingleton,
               StaticRegisterNativesULevel,0x3f0,8,CLASS_Intrinsic,CASTCLASS_ULevel,L"Engine",
               InternalConstructor<ULevel>,InternalVTableHelperCtorCaller<ULevel>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevel.InnerSingleton;
}

// _getUObject @ 147262df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall ULevel::_getUObject(ULevel *this)

{
  return (UObject *)&this[-1].PendingAutoReceiveInputActors.ArrayNum;
}

// _getUObject`adjustor{8}' @ 147262dfc

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl ULevel::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall ULevel::_getUObject_adjustor_8__(ULevel *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ULevel *)&this[-1].RouteActorEndPlayForRemoveFromWorldIndex);
  return (UObject *)pUVar1;
}

// ULevel @ 147e554d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall ULevel::ULevel(ULevel *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FPrecomputedLightVolume *this_00;
  FPrecomputedVolumetricLightmap *pFVar2;
  FPrecomputedVolumetricLightmap *pFVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IEditorPathObjectInterface__;
  FURL::FURL(&this->URL,(wchar_t *)0x0);
  pFVar3 = (FPrecomputedVolumetricLightmap *)0x0;
  (this->Actors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actors).ArrayNum = 0;
  (this->Actors).ArrayMax = 0;
  (this->ActorsForGC).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorsForGC).ArrayNum = 0;
  (this->ActorsForGC).ArrayMax = 0;
  (this->OwningWorld).field0_0x0.DebugPtr = (UWorld *)0x0;
  (this->Model).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->ModelComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModelComponents).ArrayNum = 0;
  (this->ModelComponents).ArrayMax = 0;
  (this->ActorCluster).field0_0x0.DebugPtr = (ULevelActorContainer *)0x0;
  (this->LevelScriptActor).field0_0x0.DebugPtr = (ALevelScriptActor *)0x0;
  (this->NavListStart).field0_0x0.DebugPtr = (ANavigationObjectBase *)0x0;
  (this->NavListEnd).field0_0x0.DebugPtr = (ANavigationObjectBase *)0x0;
  (this->NavDataChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavDataChunks).ArrayNum = 0;
  (this->NavDataChunks).ArrayMax = 0;
  (this->StaticNavigableGeometry).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticNavigableGeometry).ArrayNum = 0;
  (this->StaticNavigableGeometry).ArrayMax = 0;
  (this->StreamingTextureGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingTextureGuids).ArrayNum = 0;
  (this->StreamingTextureGuids).ArrayMax = 0;
  (this->StreamingTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingTextures).ArrayNum = 0;
  (this->StreamingTextures).ArrayMax = 0;
  this->TickTaskLevel = (FTickTaskLevel *)0x0;
  this_00 = ::operator_new(0x30);
  pFVar2 = pFVar3;
  if (this_00 != (FPrecomputedLightVolume *)0x0) {
    pFVar2 = (FPrecomputedVolumetricLightmap *)
             FPrecomputedLightVolume::FPrecomputedLightVolume(this_00);
  }
  this->PrecomputedLightVolume = (FPrecomputedLightVolume *)pFVar2;
  pFVar2 = ::operator_new(0x30);
  if (pFVar2 != (FPrecomputedVolumetricLightmap *)0x0) {
    pFVar3 = FPrecomputedVolumetricLightmap::FPrecomputedVolumetricLightmap(pFVar2);
  }
  this->PrecomputedVolumetricLightmap = pFVar3;
  (this->PrecomputedVisibilityHandler).Id = FPrecomputedVisibilityHandler::NextId;
  (this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.ArrayNum = 0;
  (this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.ArrayMax = 0;
  FPrecomputedVisibilityHandler::NextId = FPrecomputedVisibilityHandler::NextId + 1;
  (this->PrecomputedVolumeDistanceField).VolumeBox.IsValid = '\0';
  (this->PrecomputedVolumeDistanceField).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrecomputedVolumeDistanceField).Data.ArrayNum = 0;
  (this->PrecomputedVolumeDistanceField).Data.ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->RemoveFromSceneFence);
  puVar1 = &(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x18;
  (this->LevelBuildDataId).A = 0;
  (this->LevelBuildDataId).B = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x20 = 0;
  (this->LevelBuildDataId).C = 0;
  (this->LevelBuildDataId).D = 0;
  (this->MapBuildData).field0_0x0.DebugPtr = (UMapBuildDataRegistry *)0x0;
  this->VolumetricLightmapGridManager = (FVolumetricLightmapGridManager *)0x0;
  *(undefined8 *)&this->OnApplyLevelTransform = 0;
  *(undefined8 *)&(this->OnApplyLevelTransform).field_0x8 = 0;
  *(undefined8 *)&(this->OnApplyLevelTransform).field_0x10 = 0;
  *(undefined8 *)&(this->OnApplyLevelTransform).field_0x18 = 2;
  *(undefined8 *)&this->OnCleanupLevel = 0;
  *(undefined8 *)&(this->OnCleanupLevel).field_0x8 = 0;
  *(undefined8 *)&(this->OnCleanupLevel).field_0x10 = 0;
  *(undefined8 *)&(this->OnCleanupLevel).field_0x18 = 2;
  (this->LevelBoundsActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->InstancedFoliageActor).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->LevelBoundsActorUpdatedEvent = 0;
  *(undefined8 *)&(this->LevelBoundsActorUpdatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->LevelBoundsActorUpdatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->LevelBoundsActorUpdatedEvent).field_0x18 = 2;
  (this->WorldSettings).field0_0x0.DebugPtr = (AWorldSettings *)0x0;
  (this->WorldDataLayers).field0_0x0.DebugPtr = (AWorldDataLayers *)0x0;
  *(undefined8 *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->AsyncRegisterLevelContext).Ptr = (FAsyncRegisterLevelContext *)0x0;
  *(undefined8 *)&(this->PreUnregisteringActorComponents).Elements = 0;
  *(undefined8 *)&(this->PreUnregisteringActorComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreUnregisteringActorComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreUnregisteringActorComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreUnregisteringActorComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreUnregisteringActorComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreUnregisteringActorComponents).Elements.field_0x34 = 0;
  (this->PreUnregisteringActorComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreUnregisteringActorComponents).HashSize = 0;
  *(undefined8 *)&(this->PreRegisteringActorComponents).Elements = 0;
  *(undefined8 *)&(this->PreRegisteringActorComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreRegisteringActorComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreRegisteringActorComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreRegisteringActorComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreRegisteringActorComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreRegisteringActorComponents).Elements.field_0x34 = 0;
  (this->PreRegisteringActorComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreRegisteringActorComponents).HashSize = 0;
  this->bIncrementalUnregisterComponentsCompleted = '\0';
  this->bActorClusterCreated = '\0';
  this->bStaticComponentsRegisteredInStreamingManager = '\0';
  this->bIsMapBuildDataOwner = '\x01';
  this->bGarbageCollectionClusteringEnabled = '\x01';
  this->bIsPartitioned = '\0';
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->PendingAutoReceiveInputActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAutoReceiveInputActors).ArrayNum = 0;
  (this->PendingAutoReceiveInputActors).ArrayMax = 0;
  (this->DestroyedReplicatedStaticActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestroyedReplicatedStaticActors).ArrayNum = 0;
  (this->DestroyedReplicatedStaticActors).ArrayMax = 0;
  this->RouteActorInitializationState = Preinitialize;
  this->RouteActorInitializationIndex = 0;
  this->RouteActorEndPlayForRemoveFromWorldIndex = 0;
  this->IncrementalComponentState = Init;
  this->IncrementalUnregisterComponentState = Init;
  this->CurrentActorIndexForIncrementalUpdate = 0;
  this->CurrentActorIndexForUnregisterComponents = 0;
  return this;
}

// ~ULevel @ 147e57780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::~ULevel(ULevel *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  FAsyncRegisterLevelContext *pFVar3;
  void *pvVar4;
  FTickTaskManagerInterface *pFVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IEditorPathObjectInterface__;
  if (this->TickTaskLevel != (FTickTaskLevel *)0x0) {
    pFVar5 = FTickTaskManagerInterface::Get();
    (**(code **)((longlong)*pFVar5 + 0x10))(pFVar5,this->TickTaskLevel);
    this->TickTaskLevel = (FTickTaskLevel *)0x0;
  }
  DestructItems<FReplicatedStaticActorDestructionInfo,int>
            ((FReplicatedStaticActorDestructionInfo *)
             (this->DestroyedReplicatedStaticActors).AllocatorInstance.Data,
             (this->DestroyedReplicatedStaticActors).ArrayNum);
  pFVar1 = (this->DestroyedReplicatedStaticActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingAutoReceiveInputActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PreRegisteringActorComponents).HashSize = 0;
  FVar2 = (this->PreRegisteringActorComponents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreRegisteringActorComponents).Elements);
  (this->PreUnregisteringActorComponents).HashSize = 0;
  FVar2 = (this->PreUnregisteringActorComponents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreUnregisteringActorComponents).Elements);
  pFVar3 = (this->AsyncRegisterLevelContext).Ptr;
  if (pFVar3 != (FAsyncRegisterLevelContext *)0x0) {
    FSendRenderDynamicDataPrimitivesQueue::~FSendRenderDynamicDataPrimitivesQueue
              (&pFVar3->SendRenderDynamicDataPrimitivesQueue);
    FAsyncAddPrimitiveQueue::~FAsyncAddPrimitiveQueue(&pFVar3->AsyncAddPrimitiveQueue);
    ::operator_delete(pFVar3,0x78);
  }
  pvVar4 = *(void **)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x18;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LevelBoundsActorUpdatedEvent).field_0x8,
             *(int *)&(this->LevelBoundsActorUpdatedEvent).field_0x10);
  pvVar4 = *(void **)&(this->LevelBoundsActorUpdatedEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LevelBoundsActorUpdatedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCleanupLevel).field_0x8,*(int *)&(this->OnCleanupLevel).field_0x10);
  pvVar4 = *(void **)&(this->OnCleanupLevel).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCleanupLevel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnApplyLevelTransform).field_0x8,
             *(int *)&(this->OnApplyLevelTransform).field_0x10);
  pvVar4 = *(void **)&(this->OnApplyLevelTransform).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnApplyLevelTransform);
  FRenderCommandFence::~FRenderCommandFence(&this->RemoveFromSceneFence);
  pFVar1 = (this->PrecomputedVolumeDistanceField).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrecomputedVisibilityHandler::UpdateVisibilityStats(&this->PrecomputedVisibilityHandler,false);
  DestructItems<FPrecomputedVisibilityBucket,int>
            ((FPrecomputedVisibilityBucket *)
             (this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.AllocatorInstance
             .Data,(this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.ArrayNum);
  pFVar1 = (this->PrecomputedVisibilityHandler).PrecomputedVisibilityCellBuckets.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamingTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamingTextureGuids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticNavigableGeometry).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NavDataChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModelComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorsForGC).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Actors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FURL::~FURL(&this->URL);
  this->_padding_ = (longlong)&___7IEditorPathObjectInterface__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 147e5adb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::AddAssetUserData(ULevel *this,UAssetUserData *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  UObject **ppUVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar3 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar8 = (UObject *)(*pcVar3)(this,local_res18);
    if (pUVar8 != (UObject *)0x0) {
      local_48 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      ppUVar4 = *(UObject ***)&(this->PreRegisteringActorComponents).Elements.field_0x28;
      if (((ppUVar4 <= &local_48) &&
          (&local_48 < ppUVar4 + *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x34)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30;
      if (iVar7 != 0) {
        iVar12 = 0;
        plVar5 = *(longlong **)&(this->PreRegisteringActorComponents).Elements.field_0x28;
        bVar6 = (UObject *)*plVar5 != local_48;
        lVar9 = 0;
        pUVar8 = local_48;
        iVar10 = 0;
        do {
          iVar11 = iVar10;
          do {
            lVar9 = lVar9 + 1;
            iVar11 = iVar11 + 1;
            if (iVar7 <= lVar9) break;
          } while (bVar6 == ((UObject *)plVar5[lVar9] != pUVar8));
          if (bVar6 != false) {
            if (iVar12 != iVar10) {
              memmove(plVar5 + iVar12,plVar5 + iVar10,(longlong)(iVar11 - iVar10) << 3);
              pUVar8 = local_48;
            }
            iVar12 = iVar12 + (iVar11 - iVar10);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar10 = iVar11;
        } while (lVar9 < iVar7);
        *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30 = iVar12;
      }
    }
    puVar2 = &(this->PreRegisteringActorComponents).Elements.field_0x28;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)puVar2 <= &local_40) &&
        (&local_40 <
         *(UAssetUserData ***)puVar2 +
         *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x34)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30;
    puVar1 = &(this->PreRegisteringActorComponents).Elements.field_0x34;
    if (iVar7 == *(int *)puVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar2,(int *)puVar1);
    }
    *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30 = iVar7 + 1;
    *(UAssetUserData **)(*(longlong *)puVar2 + (longlong)iVar7 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// AddReferencedObjects @ 147e5bcf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULevel::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  ULevel *pUVar1;
  longlong lVar2;
  
  pUVar1 = CastChecked<ULevel,UObject>(param_1);
  if (GActorClusteringFixStalePointers == 0) {
    if (((GActorClusteringEnabled == 0) || (pUVar1->bGarbageCollectionClusteringEnabled == 0)) ||
       (lVar2 = 0xb0, !(bool)pUVar1->bActorClusterCreated)) {
      lVar2 = 0xa0;
    }
  }
  else {
    lVar2 = 0xa0;
  }
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_2,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&pUVar1->_padding_ + lVar2));
  UObject::AddReferencedObjects((UObject *)pUVar1,param_2);
  return;
}

// AddReplicatedDestructionInfo @ 147e5be50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::AddReplicatedDestructionInfo(ULevel *this,AActor *param_1)

{
  int *piVar1;
  TArray<FReplicatedStaticActorDestructionInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  USceneComponent *pUVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  UObject *local_res8;
  FString local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  longlong local_58;
  FString local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  FWeakObjectPtr local_28;
  UObject *local_20;
  
  local_58 = param_1->_padding_;
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_20 = (UObject *)0x0;
  pFVar9 = UObjectBaseUtility::GetFullName
                     ((UObjectBaseUtility *)param_1,&local_88,(UObject *)0x0,None);
  if (&local_50 != pFVar9) {
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    local_50.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    local_50.Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pUVar3 = (param_1->RootComponent).field0_0x0.DebugPtr;
  local_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_3c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar3 != (USceneComponent *)0x0) {
    local_68 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
    local_78 = *(undefined4 *)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64;
    uStack_74 = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uStack_70 = *(undefined4 *)((pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uStack_6c = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 0xc)
    ;
    local_40 = local_78;
    uStack_3c = uStack_74;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    local_30 = local_68;
  }
  local_res8 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
  pUVar4 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  pTVar2 = &this->DestroyedReplicatedStaticActors;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  local_20 = pUVar4;
  if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar5 + (longlong)(this->DestroyedReplicatedStaticActors).ArrayMax * 0x40)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->DestroyedReplicatedStaticActors).ArrayNum;
  piVar1 = &(this->DestroyedReplicatedStaticActors).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&pTVar2->AllocatorInstance,piVar1);
  }
  _Src.Data = local_50.Data.AllocatorInstance.Data;
  (this->DestroyedReplicatedStaticActors).ArrayNum = iVar8 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x40;
  pFVar5 = pFVar10 + 8;
  *(longlong *)pFVar10 = local_58;
  *(FScriptContainerElement **)pFVar5 = (FScriptContainerElement *)0x0;
  lVar11 = (longlong)local_50.Data.ArrayNum;
  *(int *)(pFVar10 + 0x10) = local_50.Data.ArrayNum;
  if (local_50.Data.ArrayNum == 0) {
    *(int *)(pFVar10 + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50.Data.ArrayNum,0,(ForAnyElementType *)pFVar5,local_50.Data.ArrayNum,
               (int *)(pFVar10 + 0x14));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar5,_Src.Data,lVar11 * 2);
  }
  *(ulonglong *)(pFVar10 + 0x18) = CONCAT44(uStack_3c,local_40);
  *(ulonglong *)(pFVar10 + 0x20) = CONCAT44(uStack_34,uStack_38);
  *(double *)(pFVar10 + 0x28) = local_30;
  *(FWeakObjectPtr *)(pFVar10 + 0x30) = local_28;
  *(UObject **)(pFVar10 + 0x38) = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// ApplyWorldOffset @ 147e5c350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147e5c684) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::ApplyWorldOffset(ULevel *this,TVector<double> *param_1,bool param_2)

{
  int *piVar1;
  undefined8 uVar2;
  FPrecomputedLightVolume *this_00;
  FPrecomputedVolumetricLightmap *this_01;
  UObjectBaseUtility *pUVar3;
  longlong *plVar4;
  UWorld *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_2_::FStat_STAT_ULevel_ApplyWorldOffset>
  FVar16;
  FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_5_::FStat_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume>
  FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_18_::FStat_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume>
  FVar20;
  FRenderCommandList *pFVar21;
  FCommandList *pFVar22;
  FRenderCommandTag *pFVar23;
  FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_29_::FStat_STAT_ULevel_ApplyWorldOffset_Actors>
  FVar24;
  TVector<double> *pTVar25;
  FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_35_::FStat_STAT_ULevel_ApplyWorldOffset_Model>
  FVar26;
  FStreamingManagerCollection *pFVar27;
  code **ppcVar28;
  FName FVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong lVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_398 [32];
  FName local_328;
  FName local_318;
  int local_308;
  FColor_u_0 local_2f8;
  FColor_u_0 local_2f4;
  FColor_u_0 local_2f0;
  FColor_u_0 local_2ec;
  FColor_u_0 local_2e8 [2];
  FName local_2e0;
  byte local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_298;
  FName local_288;
  FName local_278;
  LARGE_INTEGER local_268;
  LARGE_INTEGER local_260;
  FStatMessage local_258;
  FStatMessage local_248;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  FDestructionSentinel local_208;
  FPrecomputedLightVolume *local_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  FPrecomputedVolumetricLightmap *local_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  double local_170;
  double dStack_168;
  double local_160;
  FName local_158;
  FName local_150;
  code *local_148 [2];
  code *local_138 [3];
  code **local_120;
  code *local_118 [2];
  code *local_108 [3];
  code **local_f0;
  undefined1 local_e8 [40];
  code **local_c0;
  byte local_b8;
  undefined1 local_a8 [40];
  code **local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_398;
  uVar32 = (ulonglong)_tls_index;
  lVar34 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar32 * 8);
  if ((*(int *)(lVar34 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_ULevel_ApplyWorldOffset =
         (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_2_::FStat_STAT_ULevel_ApplyWorldOffset>
          )0x0;
    pFVar15 = ::FName::FName(&local_158,"STAT_ULevel_ApplyWorldOffset");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ULevel_ApplyWorldOffset,*pFVar15,
               L"STAT_ULevel_ApplyWorldOffset","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_ULevel_ApplyWorldOffset;
  if (StatPtr_STAT_ULevel_ApplyWorldOffset ==
      (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_2_::FStat_STAT_ULevel_ApplyWorldOffset>
       )0x0) {
    pFVar15 = ::FName::FName(&local_1a8,"STAT_ULevel_ApplyWorldOffset");
    FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_2_::FStat_STAT_ULevel_ApplyWorldOffset>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ULevel_ApplyWorldOffset,
                          *pFVar15,L"STAT_ULevel_ApplyWorldOffset","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar9 = false;
  bVar10 = false;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  local_318 = *(FName *)FVar16;
  bVar11 = false;
  bVar7 = false;
  if ((local_318.ComparisonIndex.Value.Value == 0) && (local_318.Number == 0)) {
LAB_147e5c58e:
    bVar10 = bVar7;
    bVar9 = bVar11;
    bVar11 = false;
    local_318 = local_278;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2f8._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar11 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2d0.ComparisonIndex.Value = local_318.ComparisonIndex.Value.Value;
        local_2d0.Number = local_318.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                   ,0x12f8);
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e5c58e;
    FThreadStats::AddMessage(local_318,CycleScopeStart);
    bVar11 = true;
  }
  if ((this->PrecomputedLightVolume != (FPrecomputedLightVolume *)0x0) &&
     ((((param_1->field0_0x0)._s_0.X != 0.0 || ((param_1->field0_0x0)._s_0.Y != 0.0)) ||
      ((param_1->field0_0x0)._s_0.Z != 0.0)))) {
    if ((*(int *)(lVar34 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume =
           (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_5_::FStat_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume>
            )0x0;
      pFVar15 = ::FName::FName(&local_1b0,"STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume,*pFVar15,
                 L"STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    FVar17 = StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume;
    if (StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume ==
        (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_5_::FStat_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume>
         )0x0) {
      pFVar15 = ::FName::FName(&local_150,"STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume");
      FVar17 = (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_5_::FStat_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume,*pFVar15,
                            L"STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume","STATGROUP_Quick"
                            ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar29 = *(FName *)FVar17;
    bVar7 = false;
    bVar13 = false;
    local_288.ComparisonIndex.Value = 0;
    local_288.Number = 0;
    if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_147e5c7bb:
      bVar8 = false;
      FVar29 = local_288;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2f4.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2f4._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar7 = false;
        bVar13 = true;
        if (-1 < CpuChannel->Enabled) {
          local_2c8.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
          local_2c8.Number = FVar29.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_2c8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                     ,0x12fd);
          bVar7 = true;
          bVar13 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147e5c7bb;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar8 = true;
    }
    this_00 = this->PrecomputedLightVolume;
    if (this_00->bAddedToScene == false) {
      if (this->bIsAssociatingLevel != '\0') {
        uVar2 = *(undefined8 *)&(this->LightBuildLevelOffset).field0_0x0;
        local_308 = (int)uVar2;
        local_238._s_0.X = (param_1->field0_0x0)._s_0.X - (double)local_308;
        local_238._s_0.Y = (param_1->field0_0x0)._s_0.Y - (double)(int)((ulonglong)uVar2 >> 0x20);
        local_238._s_0.Z =
             (param_1->field0_0x0)._s_0.Z - (double)(this->LightBuildLevelOffset).field0_0x0._s_0.Z;
        FPrecomputedLightVolume::ApplyWorldOffset(this_00,(TVector<double> *)&local_238._s_0);
      }
    }
    else if (!param_2) {
      pcStack_1e8 = (code *)(param_1->field0_0x0)._s_0.X;
      uStack_1e0 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
      uVar35 = (undefined4)uVar2;
      uVar36 = (undefined4)((ulonglong)uVar2 >> 0x20);
      local_148[0] = (code *)0x0;
      local_1f0 = this_00;
      local_120 = FMemory::Malloc(0x28,8);
      *local_120 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::`15'::<lambda_1>,1,1>
                            ::_vftable_;
      local_120[1] = (code *)local_1f0;
      local_120[2] = pcStack_1e8;
      *(undefined4 *)(local_120 + 3) = (undefined4)uStack_1e0;
      *(undefined4 *)((longlong)local_120 + 0x1c) = uStack_1e0._4_4_;
      *(undefined4 *)(local_120 + 4) = uVar35;
      *(undefined4 *)((longlong)local_120 + 0x24) = uVar36;
      if (local_120 + 1 != (code **)0x0) {
        local_148[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`ULevel::ApplyWorldOffset'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      uStack_1d8 = uVar35;
      uStack_1d4 = uVar36;
      pFVar21 = FRenderCommandList::GetInstanceTLS();
      if (pFVar21 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_ULevel::ApplyWorldOffset_::__l15::TSTR_ApplyWorldOffset_PLV4877>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
      }
      else {
        pFVar22 = FRenderCommandList::GetRenderThread(pFVar21);
        local_e8._0_8_ = local_148[0];
        local_c0 = local_120;
        local_120 = (code **)0x0;
        local_e8._16_8_ = local_138[0];
        local_e8._24_8_ = local_138[1];
        local_e8._32_8_ = local_138[2];
        local_148[0] = (code *)0x0;
        local_b8 = 2;
        pFVar23 = (FRenderCommandTag *)
                  TRenderCommandTag<`ULevel::ApplyWorldOffset'::__l15::TSTR_ApplyWorldOffset_PLV4877>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar22,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_e8,pFVar23);
        uVar31 = (ulonglong)local_b8;
        if ((2 < uVar31) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_e8._0_8_ != (code *)0x0) {
            ppcVar28 = (code **)(local_e8 + 0x10);
            if (local_c0 != (code **)0x0) {
              ppcVar28 = local_c0;
            }
            (**(code **)(*ppcVar28 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31])(local_e8);
        }
      }
      if (local_148[0] != (code *)0x0) {
        ppcVar28 = local_148 + 2;
        if (local_120 != (code **)0x0) {
          ppcVar28 = local_120;
        }
        (**(code **)(*ppcVar28 + 0x10))();
      }
    }
    if (bVar13) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar8) && (FVar29 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
        local_258.NameAndInfo.Index = FVar29.ComparisonIndex.Value;
        local_258.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_268);
        local_258.StatData.Pad[4] = '\0';
        local_258.StatData.Pad[5] = '\0';
        local_258.StatData.Pad[6] = '\0';
        local_258.StatData.Pad[7] = '\0';
        local_258.StatData.Pad[0] = local_268.s.LowPart._0_1_;
        local_258.StatData.Pad[1] = local_268.s.LowPart._1_1_;
        local_258.StatData.Pad[2] = local_268.s.LowPart._2_1_;
        local_258.StatData.Pad[3] = local_268.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar18,&local_258);
        piVar1 = &pFVar18->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar18,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
  }
  if ((this->PrecomputedVolumetricLightmap != (FPrecomputedVolumetricLightmap *)0x0) &&
     ((((param_1->field0_0x0)._s_0.X != 0.0 || ((param_1->field0_0x0)._s_0.Y != 0.0)) ||
      ((param_1->field0_0x0)._s_0.Z != 0.0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar32 * 8) + 0x9d4c) <
         ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume =
           (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_18_::FStat_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume>
            )0x0;
      pFVar15 = ::FName::FName(&local_178,"STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume,*pFVar15,
                 L"STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS2);
    }
    FVar20 = StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume;
    if (StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume ==
        (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_18_::FStat_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume>
         )0x0) {
      pFVar15 = ::FName::FName(&local_180,"STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume");
      FVar20 = (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_18_::FStat_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume,*pFVar15,
                            L"STAT_ULevel_ApplyWorldOffset_PrecomputedLightVolume","STATGROUP_Quick"
                            ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar29 = *(FName *)FVar20;
    bVar7 = false;
    bVar13 = false;
    local_298.ComparisonIndex.Value = 0;
    local_298.Number = 0;
    if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_147e5ccee:
      bVar8 = false;
      FVar29 = local_298;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2f0.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2f0._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
        bVar7 = false;
        bVar13 = true;
        if (-1 < CpuChannel->Enabled) {
          local_2c0.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
          local_2c0.Number = FVar29.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_2c0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                     ,0x1317);
          bVar7 = true;
          bVar13 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147e5ccee;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar8 = true;
    }
    this_01 = this->PrecomputedVolumetricLightmap;
    if (this_01->bAddedToScene == false) {
      if (this->bIsAssociatingLevel != '\0') {
        uVar2 = *(undefined8 *)&(this->LightBuildLevelOffset).field0_0x0;
        local_328.ComparisonIndex.Value = (uint)uVar2;
        local_220._s_0.X =
             (param_1->field0_0x0)._s_0.X - (double)(int)local_328.ComparisonIndex.Value;
        local_220._s_0.Y = (param_1->field0_0x0)._s_0.Y - (double)(int)((ulonglong)uVar2 >> 0x20);
        local_220._s_0.Z =
             (param_1->field0_0x0)._s_0.Z - (double)(this->LightBuildLevelOffset).field0_0x0._s_0.Z;
        FPrecomputedVolumetricLightmap::ApplyWorldOffset(this_01,(TVector<double> *)&local_220._s_0)
        ;
      }
    }
    else if (!param_2) {
      pcStack_1c8 = (code *)(param_1->field0_0x0)._s_0.X;
      uStack_1c0 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
      uVar35 = (undefined4)uVar2;
      uVar36 = (undefined4)((ulonglong)uVar2 >> 0x20);
      local_118[0] = (code *)0x0;
      local_1d0 = this_01;
      local_f0 = FMemory::Malloc(0x28,8);
      *local_f0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`ULevel::ApplyWorldOffset'::`28'::<lambda_2>,1,1>::
                           _vftable_;
      local_f0[1] = (code *)local_1d0;
      local_f0[2] = pcStack_1c8;
      *(undefined4 *)(local_f0 + 3) = (undefined4)uStack_1c0;
      *(undefined4 *)((longlong)local_f0 + 0x1c) = uStack_1c0._4_4_;
      *(undefined4 *)(local_f0 + 4) = uVar35;
      *(undefined4 *)((longlong)local_f0 + 0x24) = uVar36;
      if (local_f0 + 1 != (code **)0x0) {
        local_118[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`ULevel::ApplyWorldOffset'::__l28::<lambda_2>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      uStack_1b8 = uVar35;
      uStack_1b4 = uVar36;
      pFVar21 = FRenderCommandList::GetInstanceTLS();
      if (pFVar21 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_ULevel::ApplyWorldOffset_::__l28::TSTR_ApplyWorldOffset_PLV4903>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
      }
      else {
        pFVar22 = FRenderCommandList::GetRenderThread(pFVar21);
        local_a8._0_8_ = local_118[0];
        local_80 = local_f0;
        local_f0 = (code **)0x0;
        local_a8._16_8_ = local_108[0];
        local_a8._24_8_ = local_108[1];
        local_a8._32_8_ = local_108[2];
        local_118[0] = (code *)0x0;
        local_78 = 2;
        pFVar23 = (FRenderCommandTag *)
                  TRenderCommandTag<`ULevel::ApplyWorldOffset'::__l28::TSTR_ApplyWorldOffset_PLV4903>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar22,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_a8,pFVar23);
        uVar31 = (ulonglong)local_78;
        if ((2 < uVar31) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_a8._0_8_ != (code *)0x0) {
            ppcVar28 = (code **)(local_a8 + 0x10);
            if (local_80 != (code **)0x0) {
              ppcVar28 = local_80;
            }
            (**(code **)(*ppcVar28 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31])(local_a8);
        }
      }
      if (local_118[0] != (code *)0x0) {
        ppcVar28 = local_118 + 2;
        if (local_f0 != (code **)0x0) {
          ppcVar28 = local_f0;
        }
        (**(code **)(*ppcVar28 + 0x10))();
      }
    }
    if (bVar13) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar8) && (FVar29 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
        local_248.NameAndInfo.Index = FVar29.ComparisonIndex.Value;
        local_248.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_260);
        local_248.StatData.Pad[4] = '\0';
        local_248.StatData.Pad[5] = '\0';
        local_248.StatData.Pad[6] = '\0';
        local_248.StatData.Pad[7] = '\0';
        local_248.StatData.Pad[0] = local_260.s.LowPart._0_1_;
        local_248.StatData.Pad[1] = local_260.s.LowPart._1_1_;
        local_248.StatData.Pad[2] = local_260.s.LowPart._2_1_;
        local_248.StatData.Pad[3] = local_260.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar18,&local_248);
        piVar1 = &pFVar18->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar18,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar32 * 8) + 0x9d4c) < ::_TSS3)
     && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    StatPtr_STAT_ULevel_ApplyWorldOffset_Actors =
         (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_29_::FStat_STAT_ULevel_ApplyWorldOffset_Actors>
          )0x0;
    pFVar15 = ::FName::FName(&local_1a0,"STAT_ULevel_ApplyWorldOffset_Actors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ULevel_ApplyWorldOffset_Actors,*pFVar15,
               L"STAT_ULevel_ApplyWorldOffset_Actors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS3);
  }
  uVar32 = 0;
  FVar24 = StatPtr_STAT_ULevel_ApplyWorldOffset_Actors;
  if (StatPtr_STAT_ULevel_ApplyWorldOffset_Actors ==
      (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_29_::FStat_STAT_ULevel_ApplyWorldOffset_Actors>
       )0x0) {
    pFVar15 = ::FName::FName(&local_198,"STAT_ULevel_ApplyWorldOffset_Actors");
    FVar24 = (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_29_::FStat_STAT_ULevel_ApplyWorldOffset_Actors>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ULevel_ApplyWorldOffset_Actors,
                          *pFVar15,L"STAT_ULevel_ApplyWorldOffset_Actors","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_328 = *(FName *)FVar24;
  bVar7 = false;
  bVar13 = false;
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  if ((local_328.ComparisonIndex.Value.Value == 0) && (local_328.Number == 0)) {
LAB_147e5d20c:
    bVar8 = false;
    local_328 = local_2a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2ec.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2ec._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar7 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = local_328.ComparisonIndex.Value.Value;
        local_2b8.Number = local_328.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                   ,0x1330);
        bVar7 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e5d20c;
    FThreadStats::AddMessage(local_328,CycleScopeStart);
    bVar8 = true;
  }
  uVar31 = uVar32;
  if (0 < (this->Actors).ArrayNum) {
    do {
      uVar33 = (uint)uVar31;
      uVar30 = 0;
      if ((int)uVar33 < (this->Actors).ArrayNum) {
        uVar30 = ~uVar33 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar3 = *(UObjectBaseUtility **)((this->Actors).AllocatorInstance.Data + uVar32);
      if (pUVar3 != (UObjectBaseUtility *)0x0) {
        if ((!param_2) ||
           (pTVar25 = &UE::Math::TVector<double>::ZeroVector, -1 < (char)pUVar3[2].field_0xa)) {
          pTVar25 = param_1;
        }
        local_170 = (pTVar25->field0_0x0)._s_0.X;
        dStack_168 = (pTVar25->field0_0x0)._s_0.Y;
        local_160 = (pTVar25->field0_0x0)._s_0.Z;
        FScopeCycleCounterUObject::FScopeCycleCounterUObject
                  ((FScopeCycleCounterUObject *)&local_2e0,pUVar3);
        (**(code **)(*(longlong *)pUVar3 + 0x448))(pUVar3,&local_170,param_2);
        if ((local_2d8 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_2d8 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_2d8 & 4) != 0) {
          FThreadStats::AddMessage(local_2e0,CycleScopeEnd);
        }
        local_2d8 = 0;
      }
      uVar32 = uVar32 + 8;
      uVar31 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < (this->Actors).ArrayNum);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(local_328,CycleScopeEnd);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    StatPtr_STAT_ULevel_ApplyWorldOffset_Model =
         (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_35_::FStat_STAT_ULevel_ApplyWorldOffset_Model>
          )0x0;
    pFVar15 = ::FName::FName(&local_190,"STAT_ULevel_ApplyWorldOffset_Model");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ULevel_ApplyWorldOffset_Model,*pFVar15,
               L"STAT_ULevel_ApplyWorldOffset_Model","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS4);
  }
  FVar26 = StatPtr_STAT_ULevel_ApplyWorldOffset_Model;
  if (StatPtr_STAT_ULevel_ApplyWorldOffset_Model ==
      (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_35_::FStat_STAT_ULevel_ApplyWorldOffset_Model>
       )0x0) {
    pFVar15 = ::FName::FName(&local_188,"STAT_ULevel_ApplyWorldOffset_Model");
    FVar26 = (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::ApplyWorldOffset(UE::Math::TVector<double>_const_&,bool)_::_35_::FStat_STAT_ULevel_ApplyWorldOffset_Model>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ULevel_ApplyWorldOffset_Model,
                          *pFVar15,L"STAT_ULevel_ApplyWorldOffset_Model","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar26;
  bVar7 = false;
  bVar13 = false;
  if ((FVar29.ComparisonIndex.Value.Value != 0) || (FVar29.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e8[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar7 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b0.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_2b0.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                   ,0x133f);
        bVar7 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar8 = true;
      goto LAB_147e5d54e;
    }
  }
  bVar8 = false;
  FVar29.ComparisonIndex.Value = 0;
  FVar29.Number = 0;
LAB_147e5d54e:
  uVar30 = 0;
  if (0 < (this->ModelComponents).ArrayNum) {
    lVar34 = 0;
    do {
      uVar33 = 0;
      if ((int)uVar30 < (this->ModelComponents).ArrayNum) {
        uVar33 = ~uVar30 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar4 = *(longlong **)((this->ModelComponents).AllocatorInstance.Data + lVar34);
      (**(code **)(*plVar4 + 0x4d8))(plVar4,param_1,param_2);
      uVar30 = uVar30 + 1;
      lVar34 = lVar34 + 8;
    } while ((int)uVar30 < (this->ModelComponents).ArrayNum);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  if ((((param_1->field0_0x0)._s_0.X != 0.0) || ((param_1->field0_0x0)._s_0.Y != 0.0)) ||
     ((param_1->field0_0x0)._s_0.Z != 0.0)) {
    pFVar27 = IStreamingManager::Get();
    (**(code **)(pFVar27->_padding_ + 0x58))(pFVar27,this,param_1);
  }
  pUVar5 = (this->OwningWorld).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FWorldDelegates::PostApplyLevelOffset,(FWriteAccessScope *)&local_208);
  bVar7 = false;
  FWorldDelegates::PostApplyLevelOffset._28_4_ = FWorldDelegates::PostApplyLevelOffset._28_4_ + 1;
  uVar30 = FWorldDelegates::PostApplyLevelOffset._16_4_ - 1;
  if (-1 < (int)uVar30) {
    lVar34 = (longlong)(int)uVar30 << 4;
    do {
      uVar33 = 0;
      if ((int)uVar30 < (int)FWorldDelegates::PostApplyLevelOffset._16_4_) {
        uVar33 = ~uVar30 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(int *)(lVar34 + 8 + FWorldDelegates::PostApplyLevelOffset._8_8_) == 0) ||
          (plVar4 = *(longlong **)(lVar34 + FWorldDelegates::PostApplyLevelOffset._8_8_),
          plVar4 == (longlong *)0x0)) ||
         (cVar14 = (**(code **)(*plVar4 + 0x68))(plVar4,this,pUVar5,param_1), cVar14 == '\0')) {
        bVar7 = true;
      }
      lVar34 = lVar34 + -0x10;
      uVar30 = uVar30 - 1;
    } while (-1 < (int)uVar30);
  }
  FWorldDelegates::PostApplyLevelOffset._28_4_ = FWorldDelegates::PostApplyLevelOffset._28_4_ + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::PostApplyLevelOffset,false);
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(local_318,CycleScopeEnd);
  }
  return;
}

// BeginDestroy @ 147e5e120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::BeginDestroy(ULevel *this)

{
  UWorld *pUVar1;
  ULevel *pUVar2;
  bool bVar3;
  FStreamingManagerCollection *pFVar4;
  wchar_t *pwVar5;
  
  FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::RemoveAnnotation
            (&ULevelStreaming::LevelAnnotations,(UObjectBase *)this);
  bVar3 = IStreamingManager::HasShutdown();
  if (!bVar3) {
    pFVar4 = IStreamingManager::Get();
    (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4);
  }
  UObject::BeginDestroy((UObject *)this);
  if (this->CachedLevelCollection != (FLevelCollection *)0x0) {
    FLevelCollection::RemoveLevel(this->CachedLevelCollection,this);
  }
  pUVar1 = (this->OwningWorld).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorld *)0x0) {
    pUVar2 = (pUVar1->PersistentLevel).field0_0x0.DebugPtr;
    if (pUVar2 == (ULevel *)0x0) {
      bVar3 = this == (ULevel *)0x0;
    }
    else {
      bVar3 = pUVar2 == this;
    }
    if ((bVar3) && (pUVar1->Scene != (FSceneInterface *)0x0)) {
      (**(code **)(pUVar1->Scene->_padding_ + 0x270))();
      (**(code **)(((this->OwningWorld).field0_0x0.DebugPtr)->Scene->_padding_ + 0x278))();
    }
  }
  if ((this->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar5 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar5,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
        && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            == false)) && (this->bIsMapBuildDataOwner != '\0')) {
      if (this->VolumetricLightmapGridManager != (FVolumetricLightmapGridManager *)0x0) {
        FVolumetricLightmapGridManager::RemoveFromScene
                  (this->VolumetricLightmapGridManager,
                   ((this->OwningWorld).field0_0x0.DebugPtr)->Scene);
      }
      if (this->PrecomputedLightVolume != (FPrecomputedLightVolume *)0x0) {
        FPrecomputedLightVolume::RemoveFromScene
                  (this->PrecomputedLightVolume,((this->OwningWorld).field0_0x0.DebugPtr)->Scene);
      }
      if (this->PrecomputedVolumetricLightmap != (FPrecomputedVolumetricLightmap *)0x0) {
        FPrecomputedVolumetricLightmap::RemoveFromScene
                  (this->PrecomputedVolumetricLightmap,
                   ((this->OwningWorld).field0_0x0.DebugPtr)->Scene);
      }
    }
  }
  FRenderCommandFence::BeginFence(&this->RemoveFromSceneFence,RenderThread);
  return;
}

// BuildStreamingData @ 147e5ebb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULevel::BuildStreamingData(UWorld *param_1,ULevel *param_2,UTexture2D *param_3)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
  return;
}

// CanBeClusterRoot @ 147e5eef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::CanBeClusterRoot(ULevel *this)

{
  return false;
}

// CleanupLevel @ 147e5fb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::CleanupLevel(ULevel *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  UWorld *this_00;
  UPackage *pUVar11;
  UPackage *pUVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStackY_e8 [32];
  char local_b8;
  undefined1 local_b4 [12];
  FDestructionSentinel local_a8;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCleanupLevel,
             (FWriteAccessScope *)&local_a8);
  puVar1 = &(this->OnCleanupLevel).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar8 = false;
  uVar13 = *(int *)&(this->OnCleanupLevel).field_0x10 - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar8 = false;
    do {
      uVar9 = 0;
      if ((int)uVar13 < *(int *)&(this->OnCleanupLevel).field_0x10) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnCleanupLevel).field_0x8;
      if (((*(int *)(lVar14 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar14 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar8 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  puVar1 = &(this->OnCleanupLevel).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnCleanupLevel,false);
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (this != (ULevel *)0x0) {
    pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
    this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
    if (((this_00 != (UWorld *)0x0) && (bVar8 = UWorld::IsGameWorld(this_00), bVar8)) &&
       (LevelStreamingCVars::bShouldReuseUnloadedButStillAroundLevels == false)) {
      bVar8 = true;
      goto LAB_147e5fc9a;
    }
  }
  bVar8 = false;
LAB_147e5fc9a:
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  pUVar11 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  if (((bVar8) &&
      (local_b4._4_8_ = pUVar11,
      TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator>::
      Emplace<UPackage_*_const_&>
                ((TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator> *)local_88,
                 (UPackage **)local_b4,(bool *)(local_b4 + 4)), local_b8 == '\0')) &&
     (pUVar12 = GetTransientPackage(), pUVar11 != pUVar12)) {
    FLevelStreamingGCHelper::TrashPackage(pUVar11);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar5 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// ClearActorsSeamlessTraveledFlag @ 147e5fe10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::ClearActorsSeamlessTraveledFlag(ULevel *this)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Actors).AllocatorInstance.Data;
  iVar3 = (this->Actors).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Actors).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar2) break;
    if (*(longlong *)pFVar4 != 0) {
      pbVar1 = (byte *)(*(longlong *)pFVar4 + 0x5b);
      *pbVar1 = *pbVar1 & 0xfb;
    }
    pFVar4 = pFVar4 + 8;
  }
  this->bAlreadyClearedActorsSeamlessTravelFlag = '\x01';
  return;
}

// ClearLevelComponents @ 147e5fe90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::ClearLevelComponents(ULevel *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UActorComponent *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  this->bAreComponentsCurrentlyRegistered = '\0';
  pFVar8 = (this->ModelComponents).AllocatorInstance.Data;
  iVar2 = (this->ModelComponents).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ModelComponents).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UModelComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    this_00 = *(UActorComponent **)pFVar8;
    if ((this_00 != (UActorComponent *)0x0) && (this_00->bRegistered != 0)) {
      UActorComponent::UnregisterComponent(this_00);
    }
    pFVar8 = pFVar8 + 8;
  }
  uVar7 = 0;
  if (0 < (this->Actors).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Actors).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar3 = *(longlong **)((this->Actors).AllocatorInstance.Data + lVar9);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x5c8))(plVar3,0);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < (this->Actors).ArrayNum);
  }
  this->bIncrementalUnregisterComponentsCompleted = '\0';
  TMulticastDelegate<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FWorldDelegates::LevelComponentsCleared,(this->OwningWorld).field0_0x0.DebugPtr,this);
  return;
}

// CommitModelSurfaces @ 147e600c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::CommitModelSurfaces(ULevel *this)

{
  undefined1 *puVar1;
  UModel *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  TMap<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>_>
  *pTVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  pUVar2 = (this->Model).field0_0x0.DebugPtr;
  if (pUVar2->InvalidSurfaces != false) {
    uVar9 = 0;
    uVar14 = 0;
    if ((pUVar2->bOnlyRebuildMaterialIndexBuffers == false) &&
       (uVar6 = uVar9, uVar13 = uVar9, 0 < (this->ModelComponents).ArrayNum)) {
      do {
        uVar7 = (uint)uVar6;
        uVar11 = ~uVar7 >> 0x1f;
        uVar12 = uVar14;
        if ((int)uVar7 < (this->ModelComponents).ArrayNum) {
          uVar12 = uVar11;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((this->ModelComponents).AllocatorInstance.Data + uVar13) != 0) {
          uVar12 = uVar14;
          if ((int)uVar7 < (this->ModelComponents).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(byte *)(*(longlong *)((this->ModelComponents).AllocatorInstance.Data + uVar13) +
                        0x98) & 1) != 0) {
            uVar12 = uVar14;
            if ((int)uVar7 < (this->ModelComponents).ArrayNum) {
              uVar12 = uVar11;
            }
            if ((uVar12 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            UActorComponent::UnregisterComponent
                      (*(UActorComponent **)
                        ((this->ModelComponents).AllocatorInstance.Data + uVar13));
          }
        }
        uVar6 = (ulonglong)(uVar7 + 1);
        uVar13 = uVar13 + 8;
      } while ((int)(uVar7 + 1) < (this->ModelComponents).ArrayNum);
    }
    UModel::BeginReleaseResources((this->Model).field0_0x0.DebugPtr);
    FlushRenderingCommands();
    pUVar2 = (this->Model).field0_0x0.DebugPtr;
    pTVar8 = &pUVar2->MaterialIndexBuffers;
    bVar5 = 1 < *(int *)&(pUVar2->MaterialIndexBuffers).field_0x48;
    if (!bVar5) {
      TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
                        *)pTVar8);
    }
    TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar8,0,*(int *)&(pUVar2->MaterialIndexBuffers).field_0x8);
    puVar1 = &(pUVar2->MaterialIndexBuffers).field_0xc;
    *(undefined4 *)&(pUVar2->MaterialIndexBuffers).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pTVar8,0,(int *)puVar1);
    }
    *(undefined4 *)&(pUVar2->MaterialIndexBuffers).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pUVar2->MaterialIndexBuffers).field_0x34 = 0;
    iVar10 = *(int *)&(pUVar2->MaterialIndexBuffers).field_0x2c;
    *(undefined4 *)&(pUVar2->MaterialIndexBuffers).field_0x28 = 0;
    if ((iVar10 < 0) || (0x80 < iVar10)) {
      *(undefined4 *)&(pUVar2->MaterialIndexBuffers).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pUVar2->MaterialIndexBuffers).field_0x10,
                 0);
    }
    iVar10 = 1;
    if (bVar5) {
      *(undefined4 *)&(pUVar2->MaterialIndexBuffers).field_0x48 = 1;
      TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
                *)pTVar8);
    }
    UModel::UpdateVertices((this->Model).field0_0x0.DebugPtr);
    uVar6 = uVar9;
    uVar13 = uVar9;
    if (0 < (this->ModelComponents).ArrayNum) {
      do {
        uVar7 = (uint)uVar6;
        uVar12 = uVar14;
        if ((int)uVar7 < (this->ModelComponents).ArrayNum) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((this->ModelComponents).AllocatorInstance.Data + uVar13) != 0) {
          uVar12 = uVar14;
          if ((int)uVar7 < (this->ModelComponents).ArrayNum) {
            uVar12 = ~uVar7 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UModelComponent::CommitSurfaces
                    (*(UModelComponent **)((this->ModelComponents).AllocatorInstance.Data + uVar13))
          ;
        }
        uVar6 = (ulonglong)(uVar7 + 1);
        uVar13 = uVar13 + 8;
      } while ((int)(uVar7 + 1) < (this->ModelComponents).ArrayNum);
    }
    ((this->Model).field0_0x0.DebugPtr)->InvalidSurfaces = false;
    pTVar8 = &((this->Model).field0_0x0.DebugPtr)->MaterialIndexBuffers;
    TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
                *)pTVar8);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar6 = local_88._24_8_ >> 0x20;
    local_28 = (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
                *)pTVar8;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        BeginInitResource(*(FRenderResource **)(*local_58 + 8 + (longlong)(int)uVar6 * 0x18),
                          (FRenderCommandPipe *)0x0);
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar6 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar12 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (3 < uVar12) {
          uVar6 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_28->HashSize < iVar10)) || (iVar10 < local_28->HashSize)) {
          local_28->HashSize = iVar10;
          TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
    if (0 < (this->ModelComponents).ArrayNum) {
      if (((this->OwningWorld).field0_0x0.DebugPtr == (UWorld *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwningWorld",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                             ,0xc37,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = uVar9;
      if (0 < (this->ModelComponents).ArrayNum) {
        do {
          uVar7 = (uint)uVar9;
          uVar11 = ~uVar7 >> 0x1f;
          uVar12 = uVar14;
          if ((int)uVar7 < (this->ModelComponents).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)((this->ModelComponents).AllocatorInstance.Data + uVar6) != 0) {
            iVar10 = (this->ModelComponents).ArrayNum;
            if (((this->Model).field0_0x0.DebugPtr)->bOnlyRebuildMaterialIndexBuffers == false) {
              uVar12 = 0;
              if ((int)uVar7 < iVar10) {
                uVar12 = uVar11;
              }
              if ((uVar12 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UActorComponent::RegisterComponentWithWorld
                        (*(UActorComponent **)
                          ((this->ModelComponents).AllocatorInstance.Data + uVar6),
                         (this->OwningWorld).field0_0x0.DebugPtr,(FRegisterComponentContext *)0x0);
            }
            else {
              uVar12 = 0;
              if ((int)uVar7 < iVar10) {
                uVar12 = uVar11;
              }
              if ((uVar12 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UActorComponent::RecreateRenderState_Concurrent
                        (*(UActorComponent **)
                          ((this->ModelComponents).AllocatorInstance.Data + uVar6));
            }
          }
          uVar9 = (ulonglong)(uVar7 + 1);
          uVar6 = uVar6 + 8;
        } while ((int)(uVar7 + 1) < (this->ModelComponents).ArrayNum);
      }
    }
    ((this->Model).field0_0x0.DebugPtr)->bOnlyRebuildMaterialIndexBuffers = false;
  }
  return;
}

// CreateAsyncRegisterLevelContext @ 147e61930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::CreateAsyncRegisterLevelContext(ULevel *this)

{
  TUniquePtr<FAsyncRegisterLevelContext,TDefaultDelete<FAsyncRegisterLevelContext>_> *pTVar1;
  FAsyncRegisterLevelContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<FAsyncRegisterLevelContext,TDefaultDelete<FAsyncRegisterLevelContext>_> TVar5;
  void *local_res8;
  
  pTVar1 = &this->AsyncRegisterLevelContext;
  if (pTVar1->Ptr != (FAsyncRegisterLevelContext *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AsyncRegisterLevelContext.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                       ,0x7ad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = FAsyncRegisterLevelContext::CreateInstance((ULevel *)&local_res8);
  if ((FAsyncRegisterLevelContext *)pTVar1 != TVar5.Ptr) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FAsyncRegisterLevelContext *)(TVar5.Ptr)->Level;
    (TVar5.Ptr)->Level = (ULevel *)0x0;
    if (pFVar2 != (FAsyncRegisterLevelContext *)0x0) {
      FSendRenderDynamicDataPrimitivesQueue::~FSendRenderDynamicDataPrimitivesQueue
                (&pFVar2->SendRenderDynamicDataPrimitivesQueue);
      FAsyncAddPrimitiveQueue::~FAsyncAddPrimitiveQueue(&pFVar2->AsyncAddPrimitiveQueue);
      ::operator_delete(pFVar2,0x78);
    }
  }
  if (local_res8 != (void *)0x0) {
    FSendRenderDynamicDataPrimitivesQueue::~FSendRenderDynamicDataPrimitivesQueue
              ((FSendRenderDynamicDataPrimitivesQueue *)((longlong)local_res8 + 0x48));
    FAsyncAddPrimitiveQueue::~FAsyncAddPrimitiveQueue
              ((FAsyncAddPrimitiveQueue *)((longlong)local_res8 + 8));
    ::operator_delete(local_res8,0x78);
  }
  return;
}

// CreateCluster @ 147e619f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ULevel::CreateCluster(ULevel *this)

{
  int *piVar1;
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  UClass *pUVar11;
  ULevelActorContainer *pUVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStackY_138 [32];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  AActor *local_d0;
  AActor *local_c8;
  FName local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1514,"ULevel::CreateCluster",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp",
               0x5ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1514);
  }
  if ((((GCreateGCClusters != 0) && (GActorClusteringEnabled != 0)) &&
      (this->bGarbageCollectionClusteringEnabled != 0)) && (!(bool)this->bActorClusterCreated)) {
    pTVar2 = &this->ActorsForGC;
    piVar1 = &(this->ActorsForGC).ArrayMax;
    (this->ActorsForGC).ArrayNum = 0;
    if ((this->ActorsForGC).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    uVar15 = (this->Actors).ArrayNum - 1;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    if (-1 < (int)uVar15) {
      lVar14 = (longlong)(int)uVar15 * 8;
      do {
        uVar8 = 0;
        if ((int)uVar15 < (this->Actors).ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_d0 = *(AActor **)((this->Actors).AllocatorInstance.Data + lVar14);
        if ((local_d0 == (AActor *)0x0) ||
           (cVar7 = (**(code **)(local_d0->_padding_ + 0x28))(), cVar7 == '\0')) {
          local_c8 = local_d0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_d0);
          }
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->ActorsForGC).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ActorsForGC).ArrayNum = iVar9 + 1;
          *(AActor **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_c8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_c8);
          }
        }
        else {
          if (((local_e0.Data <= (FScriptContainerElement *)&local_d0) &&
              ((FScriptContainerElement *)&local_d0 < local_e0.Data + (longlong)local_d8._4_4_ * 8))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (int)local_d8;
          if ((int)local_d8 == local_d8._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_e0,(int *)((longlong)&local_d8 + 4));
          }
          local_d8 = CONCAT44(local_d8._4_4_,iVar9 + 1);
          *(AActor **)(local_e0.Data + (longlong)iVar9 * 8) = local_d0;
        }
        lVar14 = lVar14 + -8;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
      if ((int)local_d8 != 0) {
        pFVar10 = ::FName::FName(&local_c0,L"ActorCluster");
        FVar4 = *pFVar10;
        if (FVar4 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar11 = ULevelActorContainer::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar11);
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._24_4_ = RF_Transient;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._8_8_ = this;
        local_b8._16_8_ = FVar4;
        pUVar12 = (ULevelActorContainer *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar13 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar13 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (ULevelActorContainer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        (this->ActorCluster).field0_0x0.DebugPtr = pUVar12;
        TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::CopyToEmpty<AActor_*,int>
                  (&pUVar12->Actors,(AActor **)local_e0.Data,(int)local_d8,
                   (pUVar12->Actors).ArrayMax);
        (**(code **)(((this->ActorCluster).field0_0x0.DebugPtr)->_padding_ + 0x30))();
      }
    }
    this->bActorClusterCreated = '\x01';
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateMapBuildDataPackage @ 147e62a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPackage * __thiscall ULevel::CreateMapBuildDataPackage(ULevel *this)

{
  UPackage *pUVar1;
  ForAnyElementType FVar2;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  local_res10[0] = (FName)pUVar1->_padding_;
  ::FName::ToString(local_res10,&local_18);
  ::FString::ConcatFC(&local_28,&local_18,L"_BuiltData");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  pUVar1 = CreatePackage((wchar_t *)FVar2.Data);
  if ((atomic<unsigned_int>)((uint)pUVar1->PackageFlagsPrivate | 0x4000) !=
      pUVar1->PackageFlagsPrivate) {
    LOCK();
    pUVar1->PackageFlagsPrivate = (atomic<unsigned_int>)((uint)pUVar1->PackageFlagsPrivate | 0x4000)
    ;
    UNLOCK();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pUVar1;
}

// CreateReplicatedDestructionInfo @ 147e62ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::CreateReplicatedDestructionInfo(ULevel *this,AActor *param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((((param_1 != (AActor *)0x0) && (!GIsReconstructingBlueprintInstances)) &&
      (bVar1 = UE::Net::ShouldIgnoreStaticActorDestruction(), !bVar1)) &&
     (((cVar2 = (**(code **)(param_1->_padding_ + 0x208))(param_1), cVar2 != '\0' &&
       (cVar2 = (**(code **)(param_1->_padding_ + 0x210))(param_1), cVar2 != '\0')) &&
      ((param_1->RemoteRole).Value != '\0')))) {
    AddReplicatedDestructionInfo(this,param_1);
  }
  return;
}

// DestroyAsyncRegisterLevelContext @ 147e633f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::DestroyAsyncRegisterLevelContext(ULevel *this)

{
  FAsyncRegisterLevelContext *pFVar1;
  
  pFVar1 = (this->AsyncRegisterLevelContext).Ptr;
  if (pFVar1 != (FAsyncRegisterLevelContext *)0x0) {
    (this->AsyncRegisterLevelContext).Ptr = (FAsyncRegisterLevelContext *)0x0;
    FSendRenderDynamicDataPrimitivesQueue::~FSendRenderDynamicDataPrimitivesQueue
              (&pFVar1->SendRenderDynamicDataPrimitivesQueue);
    FAsyncAddPrimitiveQueue::~FAsyncAddPrimitiveQueue(&pFVar1->AsyncAddPrimitiveQueue);
    ::operator_delete(pFVar1,0x78);
    return;
  }
  return;
}

// FinishDestroy @ 147e66260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::FinishDestroy(ULevel *this)

{
  FPrecomputedLightVolume *this_00;
  FPrecomputedVolumetricLightmap *this_01;
  FVolumetricLightmapGridManager *this_02;
  
  this_00 = this->PrecomputedLightVolume;
  if (this_00 != (FPrecomputedLightVolume *)0x0) {
    FPrecomputedLightVolume::~FPrecomputedLightVolume(this_00);
    ::operator_delete(this_00,0x30);
  }
  this_01 = this->PrecomputedVolumetricLightmap;
  this->PrecomputedLightVolume = (FPrecomputedLightVolume *)0x0;
  if (this_01 != (FPrecomputedVolumetricLightmap *)0x0) {
    FPrecomputedVolumetricLightmap::~FPrecomputedVolumetricLightmap(this_01);
    ::operator_delete(this_01,0x30);
  }
  this_02 = this->VolumetricLightmapGridManager;
  this->PrecomputedVolumetricLightmap = (FPrecomputedVolumetricLightmap *)0x0;
  if (this_02 != (FVolumetricLightmapGridManager *)0x0) {
    FVolumetricLightmapGridManager::~FVolumetricLightmapGridManager(this_02);
    ::operator_delete(this_02,0xe0);
  }
  this->VolumetricLightmapGridManager = (FVolumetricLightmapGridManager *)0x0;
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetAssetUserDataOfClass @ 147e66df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAssetUserData * __thiscall
ULevel::GetAssetUserDataOfClass(ULevel *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)
                (lVar9 + *(longlong *)&(this->PreRegisteringActorComponents).Elements.field_0x28);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_147e66e9c;
LAB_147e66eca:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_147e66eca;
          UE::GC::MarkAsReachable(pUVar7);
LAB_147e66e9c:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_147e66eca;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_147e66eca;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30);
  }
  return (UAssetUserData *)0x0;
}

// GetDefaultBrush @ 147e67a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABrush * __thiscall ULevel::GetDefaultBrush(ULevel *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  ABrush *pAVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Actors).ArrayNum < 2) {
    return (ABrush *)0x0;
  }
  pFVar1 = (this->Actors).AllocatorInstance.Data;
  if (*(longlong *)(pFVar1 + 8) != 0) {
    pUVar4 = Z_Construct_UClass_ABrush_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(pFVar1 + 8),pUVar4);
    if (bVar3) {
      pAVar5 = *(ABrush **)(pFVar1 + 8);
      if (pAVar5 == (ABrush *)0x0) {
        return (ABrush *)0x0;
      }
      if ((pAVar5->BrushComponent).field0_0x0.DebugPtr == (UBrushComponent *)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultBrush->GetBrushComponent()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                           ,0xde7,L"%s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pAVar5 = (ABrush *)(*pcVar2)();
          return pAVar5;
        }
      }
      if ((pAVar5->Brush).field0_0x0.DebugPtr == (UModel *)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultBrush->Brush != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                           ,0xde8,L"%s");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pAVar5 = (ABrush *)(*pcVar2)();
          return pAVar5;
        }
      }
      return pAVar5;
    }
  }
  return (ABrush *)0x0;
}

// GetDestroyedReplicatedStaticActors @ 147e67b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FReplicatedStaticActorDestructionInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULevel::GetDestroyedReplicatedStaticActors(ULevel *this)

{
  return &this->DestroyedReplicatedStaticActors;
}

// GetEstimatedAddToWorldWorkUnitsRemaining @ 147e67ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall ULevel::GetEstimatedAddToWorldWorkUnitsRemaining(ULevel *this)

{
  int iVar1;
  int iVar2;
  
  if (this->bIsVisible != '\0') {
    return 0;
  }
  iVar1 = (this->Actors).ArrayNum;
  iVar2 = 0;
  if ((this->bAlreadyUpdatedComponents == '\0') &&
     (iVar2 = 0, this->IncrementalComponentState != Finalize)) {
    iVar2 = iVar1 - this->CurrentActorIndexForIncrementalUpdate;
  }
  if (this->RouteActorInitializationState != Finished) {
    iVar2 = (int)((float)(int)((3 - (uint)this->RouteActorInitializationState) * iVar1 -
                              this->RouteActorInitializationIndex) *
                  GRouteActorInitializationWorkUnitWeighting * __real_3eaaaaab + (float)iVar2);
  }
  return iVar2;
}

// GetEstimatedAddToWorldWorkUnitsTotal @ 147e67c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall ULevel::GetEstimatedAddToWorldWorkUnitsTotal(ULevel *this)

{
  return (int)((float)(this->Actors).ArrayNum *
              (GRouteActorInitializationWorkUnitWeighting + __real_3f800000));
}

// GetLevelScriptActor @ 147e68610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelScriptActor * __thiscall ULevel::GetLevelScriptActor(ULevel *this)

{
  return (this->LevelScriptActor).field0_0x0.DebugPtr;
}

// GetOrCreateMapBuildData @ 147e68d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMapBuildDataRegistry * __thiscall ULevel::GetOrCreateMapBuildData(ULevel *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULevel *pUVar3;
  bool bVar4;
  byte bVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UMapBuildDataRegistry *pUVar8;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ULevel *pUVar10;
  ForAnyElementType FVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  FName local_f4;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar8 = (this->MapBuildData).field0_0x0.DebugPtr;
  if (pUVar8 != (UMapBuildDataRegistry *)0x0) {
    bVar4 = UMapBuildDataRegistry::IsLegacyBuildData(pUVar8);
    if ((!bVar4) && (((byte)(int)((this->MapBuildData).field0_0x0.DebugPtr)->_padding_ & 3) == 3))
    goto LAB_147e68fb0;
  }
  pUVar8 = (this->MapBuildData).field0_0x0.DebugPtr;
  if (pUVar8 != (UMapBuildDataRegistry *)0x0) {
    UMapBuildDataRegistry::InvalidateStaticLighting
              (pUVar8,(this->OwningWorld).field0_0x0.DebugPtr,true,
               (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0);
    UObjectBase::AtomicallyClearFlags
              ((UObjectBase *)(this->MapBuildData).field0_0x0.DebugPtr,RF_Standalone);
  }
  pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  local_f4 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_f4,&local_d0);
  ::FString::ConcatFC(&local_e0,&local_d0,L"_BuiltData");
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar11.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pUVar6 = CreatePackage((wchar_t *)FVar11.Data);
  if ((atomic<unsigned_int>)((uint)pUVar6->PackageFlagsPrivate | 0x4000) !=
      pUVar6->PackageFlagsPrivate) {
    LOCK();
    pUVar6->PackageFlagsPrivate = (atomic<unsigned_int>)((uint)pUVar6->PackageFlagsPrivate | 0x4000)
    ;
    UNLOCK();
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  local_f4 = (FName)pUVar6->_padding_;
  FPackageName::GetShortFName(&local_e8);
  if (local_e8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar7);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = local_e8.ComparisonIndex.Value;
  local_b8._20_4_ = local_e8.Number;
  local_b8._24_4_ = RF_Standalone|RF_Public;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar6;
  pUVar8 = (UMapBuildDataRegistry *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UMapBuildDataRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->MapBuildData).field0_0x0.DebugPtr = pUVar8;
  pTVar9 = UWorld::GetLevels((this->OwningWorld).field0_0x0.DebugPtr);
  pFVar13 = (pTVar9->AllocatorInstance).Data;
  iVar2 = pTVar9->ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar9->ArrayNum != iVar2) {
      `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    if (pFVar13 == pFVar1) break;
    pUVar3 = *(ULevel **)pFVar13;
    pUVar10 = ULevelInstanceSubsystem::GetOwningLevel(pUVar3,true);
    if (pUVar10 == this) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 = (this->MapBuildData).field0_0x0.DebugPtr, pUVar8 != (UMapBuildDataRegistry *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (pUVar3->MapBuildData).field0_0x0 = (this->MapBuildData).field0_0x0;
      pUVar3->bIsMapBuildDataOwner = '\0';
      bVar5 = 0;
      if (pUVar3 == pUVar10) {
        bVar5 = 0x40;
      }
      pUVar3->field_0x240 = pUVar3->field_0x240 | bVar5;
    }
    pFVar13 = pFVar13 + 8;
  }
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
LAB_147e68fb0:
  return (this->MapBuildData).field0_0x0.DebugPtr;
}

// GetPendingVisibilityState @ 147e692f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ELevelPendingVisibilityState __thiscall ULevel::GetPendingVisibilityState(ULevel *this)

{
  return this->PendingVisibilityState;
}

// GetPrivateStaticClass @ 147e69a60

UClass * __cdecl ULevel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Level",&Z_Registration_Info_UClass_ULevel.InnerSingleton,
               StaticRegisterNativesULevel,0x3f0,8,CLASS_Intrinsic,CASTCLASS_ULevel,L"Engine",
               InternalConstructor<ULevel>,InternalVTableHelperCtorCaller<ULevel>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevel.InnerSingleton;
}

// GetWorld @ 147e6a990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorld * __thiscall ULevel::GetWorld(ULevel *this)

{
  return (this->OwningWorld).field0_0x0.DebugPtr;
}

// GetWorldDataLayers @ 147e6aa70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldDataLayers * __thiscall ULevel::GetWorldDataLayers(ULevel *this)

{
  return (this->WorldDataLayers).field0_0x0.DebugPtr;
}

// GetWorldPartition @ 147e6aa80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorldPartition * __thiscall ULevel::GetWorldPartition(ULevel *this)

{
  code *pcVar1;
  bool bVar2;
  UWorldPartition *pUVar3;
  FString local_18;
  
  if (this->bIsPartitioned == '\0') {
    return (UWorldPartition *)0x0;
  }
  if ((this->WorldSettings).field0_0x0.DebugPtr == (AWorldSettings *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldSettings != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                       ,0xdf3,L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorldPartition *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = AWorldSettings::GetWorldPartition((this->WorldSettings).field0_0x0.DebugPtr);
  return pUVar3;
}

// GetWorldPartitionRuntimeCell @ 147e6ab30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

IWorldPartitionCell * __thiscall ULevel::GetWorldPartitionRuntimeCell(ULevel *this)

{
  TSoftObjectPtr<UWorldPartitionRuntimeCell> *this_00;
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UObject *local_res8;
  
  this_00 = &this->WorldPartitionRuntimeCell;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if ((pUVar3 == (UObject *)0x0) &&
     (*(longlong *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 != 0)) {
    pUVar4 = FSoftObjectPath::ResolveObject
                       ((FSoftObjectPath *)
                        &(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8);
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    bVar2 = TPersistentObjectPtr<FSoftObjectPath>::CanCacheObjectPointer
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00,(FObjectPtr)&local_res8);
    if (bVar2) {
      local_res8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
    }
    if ((pUVar4 == (UObject *)0x0) || ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pUVar3 = (UObject *)0x0;
    if (bVar2) {
      pUVar3 = pUVar4;
    }
  }
  if (pUVar3 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return (IWorldPartitionCell *)(pUVar3 + 1);
    }
  }
  return (IWorldPartitionCell *)0x0;
}

// GetWorldSettings @ 147e6ac30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldSettings * __thiscall ULevel::GetWorldSettings(ULevel *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  AWorldSettings *pAVar3;
  FString local_18;
  
  if ((!param_1) || ((this->WorldSettings).field0_0x0.DebugPtr != (AWorldSettings *)0x0)) {
    return (this->WorldSettings).field0_0x0.DebugPtr;
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("WorldSettings != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                     ,0xdf3,L"%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pAVar3 = (AWorldSettings *)(*pcVar1)();
    return pAVar3;
  }
  return (this->WorldSettings).field0_0x0.DebugPtr;
}

// HasAnyActorsOfType @ 147e6b440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::HasAnyActorsOfType(ULevel *this,UClass *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->Actors).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Actors).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar2 = *(longlong *)((this->Actors).AllocatorInstance.Data + lVar8);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        iVar1 = (int)param_1->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
            &param_1->_padding_)) {
          return true;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->Actors).ArrayNum);
  }
  return false;
}

// HasVisibilityChangeRequestPending @ 147e6b5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::HasVisibilityChangeRequestPending(ULevel *this)

{
  UWorld *this_00;
  bool bVar1;
  
  this_00 = (this->OwningWorld).field0_0x0.DebugPtr;
  if (this_00 == (UWorld *)0x0) {
    return false;
  }
  bVar1 = UWorld::IsLevelMakingVisible(this_00,this);
  if ((!bVar1) &&
     (bVar1 = UWorld::IsLevelMakingInvisible((this->OwningWorld).field0_0x0.DebugPtr,this), !bVar1))
  {
    return false;
  }
  return true;
}

// IncrementalPreRegisterComponents @ 147e6bf00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevel::IncrementalPreRegisterComponents(ULevel *this,FRegisterComponentContext *param_1)

{
  AActor *this_00;
  ulong64 uVar1;
  FPhysScene_Chaos *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  LARGE_INTEGER local_res8;
  
  if (((this->OwningWorld).field0_0x0.DebugPtr == (UWorld *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0x78e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar6 = this->CurrentActorIndexForIncrementalUpdate;
  if ((int)uVar6 < (this->Actors).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Actors).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      this_00 = *(AActor **)((this->Actors).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
      this->CurrentActorIndexForIncrementalUpdate = this->CurrentActorIndexForIncrementalUpdate + 1;
      if ((this_00 != (AActor *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
        AActor::IncrementalPreRegisterComponents(this_00);
      }
      uVar1 = (param_1->Timeout).TimeoutCycles;
    } while (((uVar1 == 0xffffffffffffffff) ||
             ((uVar1 != 0 &&
              (QueryPerformanceCounter(&local_res8),
              (ulonglong)local_res8 <=
              (param_1->Timeout).TimeoutCycles + (param_1->Timeout).StartCycles)))) &&
            (uVar6 = this->CurrentActorIndexForIncrementalUpdate,
            (int)uVar6 < (this->Actors).ArrayNum));
  }
  if ((0 < *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x8 -
           *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x34) &&
     (this_01 = ((this->OwningWorld).field0_0x0.DebugPtr)->PhysicsScene,
     this_01 != (FPhysScene_Chaos *)0x0)) {
    FPhysScene_Chaos::ProcessAsyncPhysicsStateJobs(this_01,false);
  }
  if ((*(int *)&(this->PreRegisteringActorComponents).Elements.field_0x8 -
       *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x34 < 1) &&
     ((this->Actors).ArrayNum <= this->CurrentActorIndexForIncrementalUpdate)) {
    this->CurrentActorIndexForIncrementalUpdate = 0;
    return true;
  }
  return false;
}

// IncrementalPreUnregisterComponents @ 147e6c090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevel::IncrementalPreUnregisterComponents(ULevel *this,FUnregisterComponentContext *param_1)

{
  AActor *this_00;
  ulong64 uVar1;
  FPhysScene_Chaos *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  LARGE_INTEGER local_res8;
  
  if (((this->OwningWorld).field0_0x0.DebugPtr == (UWorld *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0x841,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar6 = this->CurrentActorIndexForUnregisterComponents;
  if ((int)uVar6 < (this->Actors).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Actors).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      this_00 = *(AActor **)((this->Actors).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
      this->CurrentActorIndexForUnregisterComponents =
           this->CurrentActorIndexForUnregisterComponents + 1;
      if ((this_00 != (AActor *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
        AActor::IncrementalPreUnregisterComponents(this_00);
      }
      uVar1 = (param_1->Timeout).TimeoutCycles;
    } while (((uVar1 == 0xffffffffffffffff) ||
             ((uVar1 != 0 &&
              (QueryPerformanceCounter(&local_res8),
              (ulonglong)local_res8 <=
              (param_1->Timeout).TimeoutCycles + (param_1->Timeout).StartCycles)))) &&
            (uVar6 = this->CurrentActorIndexForUnregisterComponents,
            (int)uVar6 < (this->Actors).ArrayNum));
  }
  if ((0 < *(int *)&(this->PreUnregisteringActorComponents).Elements.field_0x8 -
           *(int *)&(this->PreUnregisteringActorComponents).Elements.field_0x34) &&
     (this_01 = ((this->OwningWorld).field0_0x0.DebugPtr)->PhysicsScene,
     this_01 != (FPhysScene_Chaos *)0x0)) {
    FPhysScene_Chaos::ProcessAsyncPhysicsStateJobs(this_01,false);
  }
  if ((*(int *)&(this->PreUnregisteringActorComponents).Elements.field_0x8 -
       *(int *)&(this->PreUnregisteringActorComponents).Elements.field_0x34 < 1) &&
     ((this->Actors).ArrayNum <= this->CurrentActorIndexForUnregisterComponents)) {
    this->CurrentActorIndexForUnregisterComponents = 0;
    return true;
  }
  return false;
}

// IncrementalRegisterComponents @ 147e6c220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevel::IncrementalRegisterComponents(ULevel *this,FRegisterComponentContext *param_1)

{
  int iVar1;
  int iVar2;
  UWorld *this_00;
  AActor *this_01;
  code *pcVar3;
  <lambda_1> <Var4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  uint uVar11;
  bool bVar12;
  UClass *local_res8;
  UClass *local_res10;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1976,"ULevel::IncrementalRegisterComponents()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp",
               0x7b8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1976);
  }
  this_00 = (this->OwningWorld).field0_0x0.DebugPtr;
  iVar1 = param_1->IncrementalUpdateNumComponentsToUpdate;
  if (this_00 != (UWorld *)0x0) {
    UWorld::SetAllowDeferredPhysicsStateCreation(this_00,true);
  }
  uVar11 = this->CurrentActorIndexForIncrementalUpdate;
  if ((int)uVar11 < (this->Actors).ArrayNum) {
    <Var4 = local_res8._0_1_;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->Actors).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_01 = *(AActor **)((this->Actors).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
      if ((this_01 == (AActor *)0x0) || (((uint)this_01->_padding_ >> 0x1e & 1) != 0)) {
LAB_147e6c449:
        this->CurrentActorIndexForIncrementalUpdate =
             this->CurrentActorIndexForIncrementalUpdate + 1;
      }
      else {
        if (((bool)this_01->bHasRegisteredAllComponents) && (GOptimizeActorRegistration != 0)) {
          if (GOptimizeActorRegistration != 2) goto LAB_147e6c449;
          pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar8 != (UClass *)0x0) goto LAB_147e6c38a;
LAB_147e6c3bd:
            pUVar9 = (UClass *)0x0;
          }
          else {
            if (pUVar8 == (UClass *)0x0) goto LAB_147e6c3bd;
            UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_147e6c38a:
            pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar9 == (UClass *)0x0) goto LAB_147e6c3bd;
            iVar2 = (int)pUVar9->_padding_;
            if (((int)pUVar8->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar9->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            pUVar9 = pUVar8;
            if (!bVar5) goto LAB_147e6c3bd;
          }
          pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar9 == pUVar10) {
            local_res8 = pUVar8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            AActor::
            ForEachComponent_Internal<UActorComponent,1,0,_ULevel::IncrementalRegisterComponents_::__l20::<lambda_1>_>
                      (this_01,(TSubclassOf<UActorComponent>)&local_res8,<Var4);
          }
          else {
            local_res10 = pUVar8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            AActor::
            ForEachComponent_Internal<UActorComponent,0,0,_ULevel::IncrementalRegisterComponents_::__l20::<lambda_1>_>
                      (this_01,(TSubclassOf<UActorComponent>)&local_res10,<Var4);
          }
          goto LAB_147e6c449;
        }
        if (this_01->bHasPreRegisteredAllComponents == '\0') {
          (**(code **)(this_01->_padding_ + 0x5b8))(this_01);
        }
        bVar5 = AActor::IncrementalRegisterComponents(this_01,iVar1,param_1);
        if (bVar5) goto LAB_147e6c449;
      }
    } while ((iVar1 == 0) &&
            (uVar11 = this->CurrentActorIndexForIncrementalUpdate,
            (int)uVar11 < (this->Actors).ArrayNum));
  }
  if ((this->CurrentActorIndexForIncrementalUpdate < (this->Actors).ArrayNum) ||
     (bVar5 = FRegisterComponentContext::OnIncrementalRegisterComponentsDone(param_1), !bVar5)) {
    bVar5 = false;
  }
  else {
    this->CurrentActorIndexForIncrementalUpdate = 0;
    bVar5 = true;
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// IncrementalUnregisterComponents @ 147e6c4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevel::IncrementalUnregisterComponents
          (ULevel *this,int param_1,FUnregisterComponentContext *param_2)

{
  EIncrementalUnregisterComponentState EVar1;
  AActor *this_00;
  UWorld *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ENetMode EVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  int iVar9;
  char cVar10;
  TObjectPtr<UWorld>_u_0 *pTVar11;
  LARGE_INTEGER local_res8;
  TObjectPtr<UWorld>_u_0 local_38;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  
  if (((param_1 != 0) &&
      (bVar3 = UWorld::IsGameWorld((this->OwningWorld).field0_0x0.DebugPtr), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningWorld->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0x867,
                         L"Cannot call IncrementalUnregisterComponents with non 0 argument in the Editor/ commandlets."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (this->bIncrementalUnregisterComponentsCompleted == '\0') {
    local_38 = (this->OwningWorld).field0_0x0;
    QueryPerformanceCounter(&local_res8);
    local_30 = local_res8;
    local_28 = 0;
    pTVar11 = &local_38;
    if (param_2 != (FUnregisterComponentContext *)0x0) {
      pTVar11 = (TObjectPtr<UWorld>_u_0 *)param_2;
    }
    do {
      while( true ) {
        while( true ) {
          EVar1 = this->IncrementalUnregisterComponentState;
          if (EVar1 != Init) break;
          if (((((param_1 == 0) || (param_1 == 0x7fffffff)) ||
               (GAllowIncrementalPreUnregisterComponents == false)) ||
              ((EVar7 = UWorld::InternalGetNetMode((this->OwningWorld).field0_0x0.DebugPtr),
               EVar7 == NM_DedicatedServer ||
               (bVar3 = FPhysScene_Chaos::SupportsAsyncPhysicsStateDestruction(), !bVar3)))) ||
             ((this_01 = (this->OwningWorld).field0_0x0.DebugPtr,
              (bool)this_01->bRequestedBlockOnAsyncLoading ||
              (this_01->IsInBlockTillLevelStreamingCompleted != 0)))) {
            cVar10 = '\x01';
          }
          else {
            cVar10 = '\0';
            bVar3 = UWorld::IsGameWorld(this_01);
            if ((!bVar3) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!bIsPreUnregisterInitialComponentsAllowed || OwningWorld->IsGameWorld()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                                   ,0x8ae,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          this->IncrementalUnregisterComponentState = cVar10 + PreUnregisterComponents;
        }
        if (EVar1 != PreUnregisterComponents) break;
        bVar3 = IncrementalPreUnregisterComponents
                          (this,(FUnregisterComponentContext *)&pTVar11->ObjectPtr);
        if (!bVar3) {
          return false;
        }
        this->IncrementalUnregisterComponentState = UnregisterComponents;
      }
      if (EVar1 != UnregisterComponents) {
        if (EVar1 != Finalize) {
          return false;
        }
        this->bIncrementalUnregisterComponentsCompleted = '\x01';
        this->IncrementalUnregisterComponentState = Init;
        return true;
      }
      uVar6 = this->CurrentActorIndexForUnregisterComponents;
      iVar9 = 0;
      if ((int)uVar6 < (this->Actors).ArrayNum) {
        do {
          uVar5 = 0;
          if ((int)uVar6 < (this->Actors).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          this_00 = *(AActor **)((this->Actors).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
          if (this_00 != (AActor *)0x0) {
            pTVar8 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                               (&this_00->OwnedComponents);
            iVar9 = iVar9 + (*(int *)&(pTVar8->Elements).field_0x8 -
                            *(int *)&(pTVar8->Elements).field_0x34);
            (**(code **)(this_00->_padding_ + 0x5c8))(this_00);
            AActor::RegisterAllActorTickFunctions(this_00,false,false);
          }
          uVar6 = this->CurrentActorIndexForUnregisterComponents + 1;
          this->CurrentActorIndexForUnregisterComponents = uVar6;
        } while ((iVar9 <= param_1) && ((int)uVar6 < (this->Actors).ArrayNum));
        if ((int)uVar6 < (this->Actors).ArrayNum) {
          return false;
        }
      }
      this->CurrentActorIndexForUnregisterComponents = 0;
      this->IncrementalUnregisterComponentState = Finalize;
    } while( true );
  }
  if ((param_1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIncrementalUnregisterComponents",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0x86c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this->IncrementalUnregisterComponentState != Init) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IncrementalUnregisterComponentState == EIncrementalUnregisterComponentState::Init"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0x86d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return true;
}

// IncrementalUpdateComponents @ 147e6c7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevel::IncrementalUpdateComponents
          (ULevel *this,int param_1,bool param_2,FRegisterComponentContext *param_3)

{
  int *piVar1;
  EIncrementalComponentState EVar2;
  FAsyncRegisterLevelContext *this_00;
  UWorld *this_01;
  FPhysScene_Chaos *this_02;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ENetMode EVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_DeferredUpdateBodies> FVar10;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  uint uVar11;
  char cVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FRegisterComponentContext *this_05;
  FNameEntryId FVar15;
  FName local_res8;
  FColor_u_0 local_res18 [2];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  LARGE_INTEGER local_a0;
  undefined8 local_98;
  FName local_90;
  FTimeout local_88;
  FRegisterComponentContext local_78;
  
  if ((param_2) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1878737386691626771>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0x713,"!bRerunConstructionScripts"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1814,"ULevel::IncrementalUpdateComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp",
               0x716);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1814);
  }
  if (param_1 != 0) {
    bVar7 = UWorld::IsGameWorld((this->OwningWorld).field0_0x0.DebugPtr);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningWorld->IsGameWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                           ,0x71c,
                           L"Cannot call IncrementalUpdateComponents with non 0 argument in the Editor/ commandlets."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = UWorld::IsGameWorld((this->OwningWorld).field0_0x0.DebugPtr);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFullyUpdateComponents || OwningWorld->IsGameWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                           ,0x722,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRegisterComponentContext::FRegisterComponentContext
            (&local_78,(this->OwningWorld).field0_0x0.DebugPtr);
  this_05 = &local_78;
  if (param_3 != (FRegisterComponentContext *)0x0) {
    this_05 = param_3;
  }
  FVar15.Value = 0;
  if (param_3 == (FRegisterComponentContext *)0x0) {
    QueryPerformanceCounter(&local_res20);
    local_a0 = local_res20;
    local_98 = 0;
    FRegisterComponentContext::SetIncrementalUpdateTimeout(this_05,(FTimeout *)&local_a0.s);
    FRegisterComponentContext::SetIncrementalUpdateNumComponentsToUpdate(this_05,param_1);
    uVar11 = FVar15.Value;
  }
  else {
    local_88.StartCycles = (param_3->Timeout).StartCycles;
    local_88.TimeoutCycles = (param_3->Timeout).TimeoutCycles;
    FRegisterComponentContext::SetIncrementalUpdateTimeout(this_05,&local_88);
    FRegisterComponentContext::SetIncrementalUpdateNumComponentsToUpdate(this_05,param_1);
    uVar11 = param_3->IncrementalUpdateAddPrimitiveBatchSize;
  }
  FRegisterComponentContext::SetIncrementalUpdateAddPrimitiveBatchSize(this_05,uVar11);
  FRegisterComponentContext::SetAsyncRegisterLevelContext
            (this_05,(this->AsyncRegisterLevelContext).Ptr);
LAB_147e6c9b0:
  do {
    while (EVar2 = this->IncrementalComponentState, EVar2 == Init) {
      UpdateModelComponents(this);
      SortActorsHierarchy(&this->Actors,this);
      if ((((param_1 == 0) || (GAllowIncrementalPreRegisterComponents == false)) ||
          (EVar8 = UWorld::InternalGetNetMode((this->OwningWorld).field0_0x0.DebugPtr),
          EVar8 == NM_DedicatedServer)) ||
         (((bVar7 = FPhysScene_Chaos::SupportsAsyncPhysicsStateCreation(), !bVar7 ||
           (this_01 = (this->OwningWorld).field0_0x0.DebugPtr,
           (bool)this_01->bRequestedBlockOnAsyncLoading)) ||
          (this_01->IsInBlockTillLevelStreamingCompleted != 0)))) {
        cVar12 = '\x01';
      }
      else {
        cVar12 = '\0';
        bVar7 = UWorld::IsGameWorld(this_01);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bIsPreRegisterInitialComponentsAllowed || OwningWorld->IsGameWorld()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                               ,0x749,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this->IncrementalComponentState = cVar12 + PreRegisterInitialComponents;
    }
    if (EVar2 == PreRegisterInitialComponents) {
      bVar7 = IncrementalPreRegisterComponents(this,this_05);
      if (bVar7) {
        this->IncrementalComponentState = RegisterInitialComponents;
        goto LAB_147e6c9b0;
      }
    }
    else if (EVar2 == RegisterInitialComponents) {
      bVar7 = IncrementalRegisterComponents(this,this_05);
      if (bVar7) {
        this->IncrementalComponentState = Finalize;
      }
    }
    else if (EVar2 == Finalize) {
      this_00 = (this->AsyncRegisterLevelContext).Ptr;
      if (((this_00 != (FAsyncRegisterLevelContext *)0x0) &&
          (bVar7 = FAsyncRegisterLevelContext::HasRemainingWork(this_00), bVar7)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AsyncRegisterLevelContext.IsValid() || !AsyncRegisterLevelContext->HasRemainingWork()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                             ,0x76b,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->bAreComponentsCurrentlyRegistered = '\x01';
      this->IncrementalComponentState = Init;
      this->CurrentActorIndexForIncrementalUpdate = 0;
      (**(code **)(this->_padding_ + 0x30))(this);
    }
    if ((param_1 != 0) || (this->bAreComponentsCurrentlyRegistered != '\0')) break;
  } while( true );
  FVar10 = StatPtr_STAT_DeferredUpdateBodies;
  if (StatPtr_STAT_DeferredUpdateBodies ==
      (FThreadSafeStaticStat<FStat_STAT_DeferredUpdateBodies>)0x0) {
    pFVar9 = ::FName::FName(&local_90,"STAT_DeferredUpdateBodies");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_DeferredUpdateBodies>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeferredUpdateBodies,*pFVar9,
                        L"Deferred Init Bodies","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar7 = false;
  bVar5 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar7 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.Value;
        local_res8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                   ,0x775);
        bVar7 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.ComparisonIndex.Value = FVar13.Value;
      local_res8.Number = uVar11;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      FVar15.Value = FVar13.Value;
      goto LAB_147e6cc73;
    }
  }
  bVar4 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_147e6cc73:
  this_02 = ((this->OwningWorld).field0_0x0.DebugPtr)->PhysicsScene;
  if (this_02 != (FPhysScene_Chaos *)0x0) {
    FPhysScene_Chaos::ProcessDeferredCreatePhysicsState(this_02);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_b0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_b0.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_b8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_b0);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  FRegisterComponentContext::~FRegisterComponentContext(&local_78);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Initialize @ 147e6d380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::Initialize(ULevel *this,FURL *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  ::FString::operator=(&(this->URL).Protocol,&param_1->Protocol);
  ::FString::operator=(&(this->URL).Host,&param_1->Host);
  (this->URL).Port = param_1->Port;
  (this->URL).Valid = param_1->Valid;
  ::FString::operator=(&(this->URL).Map,&param_1->Map);
  ::FString::operator=(&(this->URL).RedirectURL,&param_1->RedirectURL);
  pTVar1 = &(this->URL).Op;
  if (pTVar1 != &param_1->Op) {
    DestructItems<FString,int>((FString *)(pTVar1->AllocatorInstance).Data,(this->URL).Op.ArrayNum);
    iVar3 = (param_1->Op).ArrayNum;
    piVar2 = &(this->URL).Op.ArrayMax;
    pFVar5 = (param_1->Op).AllocatorInstance.Data;
    iVar4 = *piVar2;
    (this->URL).Op.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar5,iVar3);
    }
  }
  ::FString::operator=(&(this->URL).Portal,&param_1->Portal);
  return;
}

// InitializeNetworkActors @ 147e6d480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::InitializeNetworkActors(ULevel *this)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  AActor *this_00;
  uint *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  uint local_res18;
  ENetMode local_res20;
  longlong local_d8;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  if (((this->OwningWorld).field0_0x0.DebugPtr == (UWorld *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0xe3c,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_res20 = UWorld::InternalGetNetMode((this->OwningWorld).field0_0x0.DebugPtr);
  local_res18 = 0;
  if (0 < (this->Actors).ArrayNum) {
    local_d8 = 0;
    do {
      uVar9 = local_res18;
      uVar14 = 0;
      if ((int)local_res18 < (this->Actors).ArrayNum) {
        uVar14 = ~local_res18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_00 = *(AActor **)((this->Actors).AllocatorInstance.Data + local_d8);
      if (this_00 != (AActor *)0x0) {
        if ((this_00->bActorInitialized == '\0') && (this_00->bActorSeamlessTraveled == '\0')) {
          if (this_00->bNetLoadOnClient != '\0') {
            this_00->bNetStartup = '\x01';
            pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                (&this_00->OwnedComponents);
            iVar4 = *(int *)&(pTVar11->Elements).field_0x28;
            iVar15 = 0;
            iVar17 = 0;
            uVar9 = 1;
            TStack_90.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar11->Elements).field_0x10;
            iVar10 = 0;
            if (iVar4 != 0) {
              puVar5 = *(uint **)&(pTVar11->Elements).field_0x20;
              puVar18 = (uint *)TStack_90.Array;
              if (puVar5 != (uint *)0x0) {
                puVar18 = puVar5;
              }
              uVar14 = *puVar18;
              while (uVar14 == 0) {
                lVar12 = (longlong)iVar15;
                iVar17 = iVar17 + 0x20;
                iVar15 = iVar15 + 1;
                iVar10 = iVar4;
                if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15)
                goto LAB_147e6d63e;
                uVar14 = puVar18[lVar12 + 1];
              }
              uVar9 = -uVar14 & uVar14;
              uVar3 = (ulonglong)uVar9 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              iVar10 = (int)lVar12 + -1 + iVar17;
              if (iVar4 < iVar10) {
                iVar10 = iVar4;
              }
            }
LAB_147e6d63e:
            uVar14 = *(uint *)&(pTVar11->Elements).field_0x28;
            puVar2 = &(pTVar11->Elements).field_0x10;
            uVar13 = uVar14 & 0xffffffe0;
            TStack_90._padding_ = CONCAT44(uVar9,iVar15);
            TStack_90.CurrentBitIndex = iVar10;
            TStack_90.UnvisitedBitMask = 0xffffffff;
            iVar15 = (int)uVar14 >> 5;
            TStack_90._28_4_ = local_4c;
            TStack_90.BaseBitIndex = iVar17;
            uStack_70 = CONCAT44(uStack_9c,
                                 *(int *)&(pTVar11->Elements).field_0x8 -
                                 *(int *)&(pTVar11->Elements).field_0x34);
            if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
            if (uVar14 != uVar9) {
              puVar6 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
              puVar16 = puVar2;
              if (puVar6 != (undefined1 *)0x0) {
                puVar16 = puVar6;
              }
              uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
              while (uVar14 == 0) {
                lVar12 = (longlong)iVar15;
                uVar13 = uVar13 + 0x20;
                iVar15 = iVar15 + 1;
                uVar14 = uVar9;
                if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
                goto LAB_147e6d750;
                uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
              }
              uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
              lVar12 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              uVar14 = (int)lVar12 + -1 + uVar13;
              if ((int)uVar9 < (int)uVar14) {
                uVar14 = uVar9;
              }
            }
LAB_147e6d750:
            while( true ) {
              if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34
                  != (int)uStack_70) {
                local_res10[0] = 0;
                `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
              }
              if ((TStack_90.CurrentBitIndex == uVar14) &&
                 (uVar9 = local_res18,
                 TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
              lVar12 = *(longlong *)
                        (*(longlong *)&pTVar11->Elements +
                        (longlong)TStack_90.CurrentBitIndex * 0x10);
              if (lVar12 != 0) {
                pbVar1 = (byte *)(lVar12 + 0xb8);
                *pbVar1 = *pbVar1 | 1;
              }
              TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
            }
          }
          if (local_res20 == NM_Client) {
            if (this_00->bNetLoadOnClient == '\0') {
              AActor::Destroy(this_00,true,true);
            }
            else {
              AActor::ExchangeNetRoles(this_00,true);
            }
          }
        }
        this_00->bActorSeamlessTraveled = '\0';
      }
      local_res18 = uVar9 + 1;
      local_d8 = local_d8 + 8;
    } while ((int)local_res18 < (this->Actors).ArrayNum);
  }
  this->bAlreadyInitializedNetworkActors = '\x01';
  this->bAlreadyClearedActorsSeamlessTravelFlag = '\x01';
  return;
}

// InitializeRenderingResources @ 147e6d840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::InitializeRenderingResources(ULevel *this)

{
  UMapBuildDataRegistry *pUVar1;
  UWorld *pUVar2;
  FSceneInterface *pFVar3;
  ULevel *pUVar4;
  FVolumetricLightmapGridManager *this_00;
  FVolumetricLightmapGridManager *pFVar5;
  wchar_t *pwVar6;
  UMapBuildDataRegistry *this_01;
  bool bVar7;
  FGuid local_18;
  
  if (((this->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0) && (this->bIsVisible != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pUVar4 = UWorld::GetActiveLightingScenario((this->OwningWorld).field0_0x0.DebugPtr);
      this_01 = (this->MapBuildData).field0_0x0.DebugPtr;
      if (this->bIsMapBuildDataOwner != '\0') {
        if ((pUVar4 != (ULevel *)0x0) &&
           (pUVar1 = (pUVar4->MapBuildData).field0_0x0.DebugPtr,
           pUVar1 != (UMapBuildDataRegistry *)0x0)) {
          this_01 = pUVar1;
        }
        if (this->PrecomputedLightVolume->bAddedToScene == false) {
          local_18.A = (this->LevelBuildDataId).A;
          local_18.B = (this->LevelBuildDataId).B;
          local_18.C = (this->LevelBuildDataId).C;
          local_18.D = (this->LevelBuildDataId).D;
          FPrecomputedLightVolume::AddToScene
                    (this->PrecomputedLightVolume,((this->OwningWorld).field0_0x0.DebugPtr)->Scene,
                     this_01,&local_18);
        }
        if ((this_01 != (UMapBuildDataRegistry *)0x0) &&
           (this_01->VolumetricLightMapGridDesc != (FVolumetricLightMapGridDesc *)0x0)) {
          this_00 = ::operator_new(0xe0);
          pFVar5 = (FVolumetricLightmapGridManager *)0x0;
          if (this_00 != (FVolumetricLightmapGridManager *)0x0) {
            pFVar5 = FVolumetricLightmapGridManager::FVolumetricLightmapGridManager
                               (this_00,(this->OwningWorld).field0_0x0.DebugPtr,
                                this_01->VolumetricLightMapGridDesc);
          }
          this->VolumetricLightmapGridManager = pFVar5;
        }
        if (this->PrecomputedVolumetricLightmap->bAddedToScene == false) {
          pUVar2 = (this->OwningWorld).field0_0x0.DebugPtr;
          bVar7 = false;
          if (pUVar2 != (UWorld *)0x0) {
            pUVar4 = (pUVar2->PersistentLevel).field0_0x0.DebugPtr;
            if (pUVar4 == (ULevel *)0x0) {
              bVar7 = this == (ULevel *)0x0;
            }
            else {
              bVar7 = pUVar4 == this;
            }
          }
          local_18.A = (this->LevelBuildDataId).A;
          local_18.B = (this->LevelBuildDataId).B;
          local_18.C = (this->LevelBuildDataId).C;
          local_18.D = (this->LevelBuildDataId).D;
          FPrecomputedVolumetricLightmap::AddToScene
                    (this->PrecomputedVolumetricLightmap,pUVar2->Scene,this_01,&local_18,bVar7);
        }
        pFVar3 = ((this->OwningWorld).field0_0x0.DebugPtr)->Scene;
        if ((pFVar3 != (FSceneInterface *)0x0) && (this_01 != (UMapBuildDataRegistry *)0x0)) {
          UMapBuildDataRegistry::InitializeClusterRenderingResources(this_01,pFVar3->FeatureLevel);
        }
      }
    }
  }
  return;
}

// InvalidateModelGeometry @ 147e6db20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::InvalidateModelGeometry(ULevel *this)

{
  TArray<TObjectPtr<UModelComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  pTVar1 = &this->ModelComponents;
  uVar5 = 0;
  if (0 < (this->ModelComponents).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = ~uVar5 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar5 < (this->ModelComponents).ArrayNum) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar7) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->ModelComponents).ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = 0;
        if ((int)uVar5 < (this->ModelComponents).ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UActorComponent::UnregisterComponent
                  (*(UActorComponent **)((pTVar1->AllocatorInstance).Data + lVar7));
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < (this->ModelComponents).ArrayNum);
  }
  (this->ModelComponents).ArrayNum = 0;
  if ((this->ModelComponents).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->ModelComponents).ArrayMax);
  }
  UModel::BeginReleaseResources((this->Model).field0_0x0.DebugPtr);
  return;
}

// InvalidateModelSurface @ 147e6dcc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::InvalidateModelSurface(ULevel *this)

{
  ((this->Model).field0_0x0.DebugPtr)->InvalidSurfaces = true;
  return;
}

// IsCurrentLevel @ 147e6dda0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::IsCurrentLevel(ULevel *this)

{
  UWorld *this_00;
  ULevel *pUVar1;
  
  this_00 = (this->OwningWorld).field0_0x0.DebugPtr;
  if (this_00 != (UWorld *)0x0) {
    pUVar1 = UWorld::GetCurrentLevel(this_00);
    return this == pUVar1;
  }
  return false;
}

// IsFinishedRouteActorEndPlayForRemoveFromWorld @ 147e6dea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::IsFinishedRouteActorEndPlayForRemoveFromWorld(ULevel *this)

{
  return (this->Actors).ArrayNum <= this->RouteActorEndPlayForRemoveFromWorldIndex;
}

// IsInstancedLevel @ 147e6e050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::IsInstancedLevel(ULevel *this)

{
  bool bVar1;
  UClass *pUVar2;
  UWorld *this_00;
  
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (this_00 != (UWorld *)0x0) {
    bVar1 = UWorld::IsInstanced(this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsMapBuildDataOwner @ 147e6e210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::IsMapBuildDataOwner(ULevel *this)

{
  return this->bIsMapBuildDataOwner;
}

// IsNetActor @ 147e6e230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl ULevel::IsNetActor(AActor *param_1)

{
  ENetMode EVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  if (param_1 == (AActor *)0x0) {
    return false;
  }
  if (param_1->NetDriverName != (FName)0x0) {
    FNameEntryId::FromValidEName((EName)local_res8);
  }
  EVar1 = AActor::InternalGetNetMode(param_1);
  lVar2 = 0x60;
  if (EVar1 == NM_Client) {
    lVar2 = 0x168;
  }
  return *(char *)((longlong)&param_1->_padding_ + lVar2) != '\0';
}

// IsPersistentLevel @ 147e6e2a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::IsPersistentLevel(ULevel *this)

{
  UWorld *pUVar1;
  ULevel *pUVar2;
  
  pUVar1 = (this->OwningWorld).field0_0x0.DebugPtr;
  if (pUVar1 == (UWorld *)0x0) {
    return false;
  }
  pUVar2 = (pUVar1->PersistentLevel).field0_0x0.DebugPtr;
  if (pUVar2 == (ULevel *)0x0) {
    return this == (ULevel *)0x0;
  }
  return pUVar2 == this;
}

// IsReadyForFinishDestroy @ 147e6e2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::IsReadyForFinishDestroy(ULevel *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->RemoveFromSceneFence);
  return bVar1;
}

// MarkLevelBoundsDirty @ 147e709a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::MarkLevelBoundsDirty(ULevel *this)

{
  return;
}

// MarkLevelComponentsRenderStateDirty @ 147e709b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::MarkLevelComponentsRenderStateDirty(ULevel *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ModelComponents).AllocatorInstance.Data;
  iVar2 = (this->ModelComponents).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ModelComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UModelComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UActorComponent **)pFVar3 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderStateDirty(*(UActorComponent **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = (this->Actors).AllocatorInstance.Data;
  iVar2 = (this->Actors).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Actors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(AActor **)pFVar3 != (AActor *)0x0) {
      AActor::MarkComponentsRenderStateDirty(*(AActor **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnLevelLoaded @ 147e71450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::OnLevelLoaded(ULevel *this)

{
  int iVar1;
  UMapBuildDataRegistry *pUVar2;
  UWorld *pUVar3;
  code *pcVar4;
  bool bVar5;
  ULevelStreaming *pUVar6;
  longlong *plVar7;
  UClass *pUVar8;
  ULevel *pUVar9;
  UClass *pUVar10;
  USubsystem *pUVar11;
  UWorldPartition *this_00;
  UWorldPartition *pUVar12;
  UObject *pUVar13;
  TTransform<double> *pTVar14;
  byte bVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c0;
  UClass *local_b8;
  FName local_b0;
  FString local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar6 = FLevelUtils::FindStreamingLevel(this);
  bVar15 = 0;
  if ((pUVar6 != (ULevelStreaming *)0x0) &&
     (*(longlong *)&(this->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 == 0)) {
    plVar7 = (longlong *)(**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6);
    if ((plVar7 == (longlong *)0x0) ||
       (local_b8 = (UClass *)(**(code **)(*plVar7 + 8))(plVar7), local_b8 == (UClass *)0x0)) {
LAB_147e714db:
      local_b8 = (UClass *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(local_b8->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(local_b8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) goto LAB_147e714db;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8);
    }
    FSoftObjectPtr::operator=
              (&(this->WorldPartitionRuntimeCell).SoftObjectPtr,(FObjectPtr)&local_b8);
  }
  pUVar9 = ULevelInstanceSubsystem::GetOwningLevel(this,true);
  if (pUVar9 != (ULevel *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pUVar9->MapBuildData).field0_0x0.DebugPtr, pUVar2 != (UMapBuildDataRegistry *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->MapBuildData).field0_0x0 = (pUVar9->MapBuildData).field0_0x0;
    this->bIsMapBuildDataOwner = '\0';
    if (pUVar9 == this) {
      bVar15 = 0x40;
    }
    this->field_0x240 = this->field_0x240 | bVar15;
  }
  pUVar3 = (this->OwningWorld).field0_0x0.DebugPtr;
  pUVar8 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 != (UClass *)0x0) goto LAB_147e7158b;
  }
  else if (pUVar8 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_147e7158b:
    pUVar10 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
    if (pUVar10 != (UClass *)0x0) {
      iVar1 = (int)pUVar10->_padding_;
      if (((int)pUVar8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar10->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_147e715bc;
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_147e715bc:
  pUVar11 = FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar8);
  if ((pUVar11 != (USubsystem *)0x0) &&
     (this_00 = GetWorldPartition(this), this_00 != (UWorldPartition *)0x0)) {
    bVar5 = UWorld::IsGameWorld((this->OwningWorld).field0_0x0.DebugPtr);
    pUVar12 = UWorld::GetWorldPartition((this->OwningWorld).field0_0x0.DebugPtr);
    pUVar9 = (((this->OwningWorld).field0_0x0.DebugPtr)->PersistentLevel).field0_0x0.DebugPtr;
    if (pUVar9 == (ULevel *)0x0) {
      bVar16 = this == (ULevel *)0x0;
    }
    else {
      bVar16 = pUVar9 == this;
    }
    if (4 < (byte)LogWorldPartition._0_1_) {
      pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
      local_b0.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
      local_b0.Number = *(uint *)&pUVar13->field_0x1c;
      ::FName::ToString(&local_b0,&local_a8);
      local_c0 = (uint)bVar5;
      local_c8 = (uint)!bVar5;
      local_d0 = (uint)bVar16;
      local_d8 = (uint)(pUVar12 != (UWorldPartition *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar16 != false) || (!bVar5)) {
      bVar5 = UWorldPartition::IsInitialized(this_00);
      if ((bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!WorldPartition->IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                             ,0xda7,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar14 = &pUVar6->LevelTransform;
      if (pUVar6 == (ULevelStreaming *)0x0) {
        pTVar14 = &UE::Math::TTransform<double>::Identity;
      }
      local_98.Rotation.XY.m128d_f64[0] = (pTVar14->Rotation).XY.m128d_f64[0];
      local_98.Rotation.XY.m128d_f64[1] = (pTVar14->Rotation).XY.m128d_f64[1];
      local_98.Rotation.ZW.m128d_f64[0] = (pTVar14->Rotation).ZW.m128d_f64[0];
      local_98.Rotation.ZW.m128d_f64[1] = (pTVar14->Rotation).ZW.m128d_f64[1];
      local_98.Translation.XY.m128d_f64[0] = (pTVar14->Translation).XY.m128d_f64[0];
      local_98.Translation.XY.m128d_f64[1] = (pTVar14->Translation).XY.m128d_f64[1];
      local_98.Translation.ZW.m128d_f64[0] = (pTVar14->Translation).ZW.m128d_f64[0];
      local_98.Translation.ZW.m128d_f64[1] = (pTVar14->Translation).ZW.m128d_f64[1];
      local_98.Scale3D.XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
      local_98.Scale3D.XY.m128d_f64[1] = (pTVar14->Scale3D).XY.m128d_f64[1];
      local_98.Scale3D.ZW.m128d_f64[0] = (pTVar14->Scale3D).ZW.m128d_f64[0];
      local_98.Scale3D.ZW.m128d_f64[1] = (pTVar14->Scale3D).ZW.m128d_f64[1];
      UWorldPartition::Initialize(this_00,(this->OwningWorld).field0_0x0.DebugPtr,&local_98);
    }
  }
  return;
}

// PostInitProperties @ 147e71d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::PostInitProperties(ULevel *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FGuid *pFVar5;
  FGuid local_18;
  
  UObject::PostInitProperties((UObject *)this);
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar4) {
    pFVar5 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar5->B;
    uVar2 = pFVar5->C;
    uVar3 = pFVar5->D;
    (this->LevelBuildDataId).A = pFVar5->A;
    (this->LevelBuildDataId).B = uVar1;
    (this->LevelBuildDataId).C = uVar2;
    (this->LevelBuildDataId).D = uVar3;
  }
  return;
}

// PostLoad @ 147e71e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::PostLoad(ULevel *this)

{
  int *piVar1;
  FName FVar2;
  FObjectPtr_u_0 *this_00;
  UModel *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UPackage *pUVar7;
  TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_> *pTVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  AWorldSettings *pAVar11;
  bool bVar12;
  FWeakObjectPtr local_res8;
  FName local_res10;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1328,"ULevel::PostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp",
               0x530);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1328);
  }
  UObject::PostLoad((UObject *)this);
  pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  pTVar8 = TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)&StreamedLevelsOwningWorld,(FName)pUVar7->_padding_);
  pAVar11 = (AWorldSettings *)0x0;
  if (pTVar8 == (TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_> *)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
  }
  else {
    local_res8.ObjectIndex = *(int *)&pTVar8->field_0x8;
    local_res8.ObjectSerialNumber = *(int *)&pTVar8->field_0xc;
  }
  pUVar9 = (UWorld *)FWeakObjectPtr::Get(&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar9 == (UWorld *)0x0)) {
    (this->OwningWorld).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = CastChecked<UWorld,UObject>((UObject *)this->_padding_);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->OwningWorld).field0_0x0.DebugPtr = pUVar9;
      goto LAB_147e71f19;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
    (this->OwningWorld).field0_0x0.DebugPtr = pUVar9;
  }
  pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  FVar2 = (FName)pUVar7->_padding_;
  local_res10 = FVar2;
  if (StreamedLevelsOwningWorld._8_4_ != StreamedLevelsOwningWorld._52_4_) {
    uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UWorld,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                         *)&StreamedLevelsOwningWorld,FVar2.Number + uVar6,&local_res10);
  }
LAB_147e71f19:
  UWorldComposition::OnLevelPostLoad(this);
  if ((this->WorldSettings).field0_0x0.DebugPtr == (AWorldSettings *)0x0) {
    if (((this->Actors).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (FObjectPtr_u_0 *)(this->Actors).AllocatorInstance.Data;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_AWorldSettings_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
      if (bVar5) {
        pAVar11 = (AWorldSettings *)this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (AWorldSettings *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    (this->WorldSettings).field0_0x0.DebugPtr = pAVar11;
  }
  pUVar3 = (this->Model).field0_0x0.DebugPtr;
  if ((pUVar3 == (UModel *)0x0) || (pUVar3->NumUniqueVertices == 0)) {
    piVar1 = &(this->StaticNavigableGeometry).ArrayMax;
    (this->StaticNavigableGeometry).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->StaticNavigableGeometry).AllocatorInstance,0,piVar1);
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostSaveFromRoot @ 147e72490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::PostSaveFromRoot(ULevel *this,FObjectPostSaveRootContext param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UActorComponent *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  
  if (*(char *)(*(longlong *)param_1 + 0x98) != '\0') {
    this->bAreComponentsCurrentlyRegistered = '\0';
    pFVar9 = (this->ModelComponents).AllocatorInstance.Data;
    iVar2 = (this->ModelComponents).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ModelComponents).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UModelComponent>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      this_00 = *(UActorComponent **)pFVar9;
      if ((this_00 != (UActorComponent *)0x0) && (this_00->bRegistered != 0)) {
        UActorComponent::UnregisterComponent(this_00);
      }
      pFVar9 = pFVar9 + 8;
    }
    uVar8 = 0;
    if (0 < (this->Actors).ArrayNum) {
      lVar7 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->Actors).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        plVar3 = *(longlong **)((this->Actors).AllocatorInstance.Data + lVar7);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x5c8))(plVar3,0);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar8 < (this->Actors).ArrayNum);
    }
    this->bIncrementalUnregisterComponentsCompleted = '\0';
    TMulticastDelegate<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>::Broadcast
              (&FWorldDelegates::LevelComponentsCleared,(this->OwningWorld).field0_0x0.DebugPtr,this
              );
  }
  pFVar9 = (this->Actors).AllocatorInstance.Data;
  iVar2 = (this->Actors).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Actors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar1) break;
    plVar3 = *(longlong **)pFVar9;
    if (plVar3 != (longlong *)0x0) {
      pcVar4 = *(code **)(*plVar3 + 0x430);
      local_res18[0] = *(longlong *)param_1;
      *(int *)(local_res18[0] + 0x9c) = *(int *)(local_res18[0] + 0x9c) + 1;
      (*pcVar4)(plVar3,local_res18);
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// PreDuplicate @ 147e72650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ULevel::PreDuplicate(ULevel *this,FObjectDuplicationParameters *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Actors).AllocatorInstance.Data;
  iVar2 = (this->Actors).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Actors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x420))(plVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// PreSave @ 147e72840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::PreSave(ULevel *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// PreSaveFromRoot @ 147e72870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::PreSaveFromRoot(ULevel *this,FObjectPreSaveRootContext param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  longlong local_res8;
  
  pFVar4 = (this->Actors).AllocatorInstance.Data;
  iVar2 = (this->Actors).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Actors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(longlong **)pFVar4 != (longlong *)0x0) {
      pcVar3 = *(code **)(**(longlong **)pFVar4 + 0x428);
      local_res8 = *(longlong *)param_1;
      *(int *)(local_res8 + 0x9c) = *(int *)(local_res8 + 0x9c) + 1;
      (*pcVar3)();
    }
    pFVar4 = pFVar4 + 8;
  }
  if (this->bAreComponentsCurrentlyRegistered == '\0') {
    IncrementalUpdateComponents(this,0,true,(FRegisterComponentContext *)0x0);
    TMulticastDelegate<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>::Broadcast
              (&FWorldDelegates::LevelComponentsUpdated,(this->OwningWorld).field0_0x0.DebugPtr,this
              );
    *(undefined1 *)(*(longlong *)param_1 + 0x98) = 1;
  }
  return;
}

// PushPendingAutoReceiveInput @ 147e76730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::PushPendingAutoReceiveInput(ULevel *this,APlayerController *param_1)

{
  int *piVar1;
  TArray<FPendingAutoReceiveInputActor,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  APawn *pAVar4;
  code *pcVar5;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UWorld *this_00;
  APlayerController *pAVar10;
  UClass *pUVar11;
  int iVar12;
  FWeakObjectPtr *this_01;
  int iVar13;
  longlong lVar14;
  int iVar15;
  UObject *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_40;
  
  if ((param_1 == (APlayerController *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPlayerController",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0x1357,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = 0;
  this_00 = AActor::GetWorld((AActor *)param_1);
  UWorld::GetPlayerControllerIterator(this_00,&local_40);
  while( true ) {
    iVar13 = local_40.Index;
    pTVar6 = local_40.Container;
    if (local_40.Index < 0) {
      return;
    }
    if ((local_40.Container)->ArrayNum <= local_40.Index) {
      return;
    }
    uVar8 = 0;
    if (local_40.Index < (local_40.Container)->ArrayNum) {
      uVar8 = (uint)~local_40.Index >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar10 = (APlayerController *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((pTVar6->AllocatorInstance).Data + (longlong)iVar13 * 8));
    if (param_1 == pAVar10) break;
    iVar15 = iVar15 + 1;
    local_40.Index = local_40.Index + 1;
  }
  if (-1 < iVar15) {
    iVar13 = (this->PendingAutoReceiveInputActors).ArrayNum + -1;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    if (-1 < iVar13) {
      pTVar2 = &this->PendingAutoReceiveInputActors;
      lVar14 = (longlong)iVar13 * 0xc;
      do {
        if (((this->PendingAutoReceiveInputActors).ArrayNum <= iVar13) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_01 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + lVar14);
        if (this_01[1].ObjectIndex == iVar15) {
          bVar7 = FWeakObjectPtr::IsValid(this_01);
          if (bVar7) {
            local_58 = FWeakObjectPtr::Get(this_01);
            if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
                ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8
                )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = (int)local_48;
            if ((int)local_48 == local_48._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_50,(int *)((longlong)&local_48 + 4));
            }
            local_48 = CONCAT44(local_48._4_4_,iVar9 + 1);
            *(UObject **)(local_50.Data + (longlong)iVar9 * 8) = local_58;
          }
          if (((this->PendingAutoReceiveInputActors).ArrayNum <= iVar13) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->PendingAutoReceiveInputActors).ArrayNum;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          iVar12 = (iVar9 - iVar13) + -1;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            memmove(pFVar3 + lVar14,pFVar3 + (longlong)(iVar9 - iVar12) * 0xc,(longlong)iVar12 * 0xc
                   );
          }
          piVar1 = &(this->PendingAutoReceiveInputActors).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&pTVar2->AllocatorInstance,(this->PendingAutoReceiveInputActors).ArrayNum
                     ,&(this->PendingAutoReceiveInputActors).ArrayMax);
        }
        lVar14 = lVar14 + -0xc;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iVar15 = (int)local_48 + -1;
    if (-1 < iVar15) {
      lVar14 = (longlong)iVar15 * 8;
      do {
        if (((int)local_48 <= iVar15) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pAVar4 = *(APawn **)(local_50.Data + lVar14);
        if (pAVar4 == (APawn *)0x0) {
LAB_147e76aa5:
          if (((int)local_48 <= iVar15) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(**(longlong **)(local_50.Data + lVar14) + 0x330))
                    (*(longlong **)(local_50.Data + lVar14),param_1);
        }
        else {
          pUVar11 = Z_Construct_UClass_APawn_NoRegister();
          iVar13 = (int)pUVar11->_padding_;
          if ((*(int *)(pAVar4->_padding_ + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
              &pUVar11->_padding_)) goto LAB_147e76aa5;
          AController::Possess((AController *)param_1,pAVar4);
        }
        lVar14 = lVar14 + -8;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  return;
}

// RegisterActorForAutoReceiveInput @ 147e76d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::RegisterActorForAutoReceiveInput(ULevel *this,AActor *param_1,int param_2)

{
  int *piVar1;
  TArray<FPendingAutoReceiveInputActor,TSizedDefaultAllocator<32>_> *pTVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  AActor *local_res8;
  FWeakObjectPtr local_18;
  int local_10;
  
  pTVar2 = &this->PendingAutoReceiveInputActors;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_18.ObjectIndex = 0;
  local_18.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_res8);
  pFVar3 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  local_10 = param_2;
  if ((pFVar3 <= &local_18) &&
     (&local_18 <
      (FWeakObjectPtr *)
      ((longlong)pFVar3 + (longlong)(this->PendingAutoReceiveInputActors).ArrayMax * 0xc))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->PendingAutoReceiveInputActors).ArrayNum;
  piVar1 = &(this->PendingAutoReceiveInputActors).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingAutoReceiveInputActors).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(FWeakObjectPtr *)(pFVar4 + (longlong)iVar7 * 0xc) = local_18;
  *(int *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = local_10;
  return;
}

// ReleaseRenderingResources @ 147e79030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::ReleaseRenderingResources(ULevel *this)

{
  wchar_t *pwVar1;
  
  if ((this->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar1 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar1,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
        && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            == false)) && (this->bIsMapBuildDataOwner != '\0')) {
      if (this->VolumetricLightmapGridManager != (FVolumetricLightmapGridManager *)0x0) {
        FVolumetricLightmapGridManager::RemoveFromScene
                  (this->VolumetricLightmapGridManager,
                   ((this->OwningWorld).field0_0x0.DebugPtr)->Scene);
      }
      if (this->PrecomputedLightVolume != (FPrecomputedLightVolume *)0x0) {
        FPrecomputedLightVolume::RemoveFromScene
                  (this->PrecomputedLightVolume,((this->OwningWorld).field0_0x0.DebugPtr)->Scene);
      }
      if (this->PrecomputedVolumetricLightmap != (FPrecomputedVolumetricLightmap *)0x0) {
        FPrecomputedVolumetricLightmap::RemoveFromScene
                  (this->PrecomputedVolumetricLightmap,
                   ((this->OwningWorld).field0_0x0.DebugPtr)->Scene);
        return;
      }
    }
  }
  return;
}

// RemoveUserDataOfClass @ 147e7a0e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::RemoveUserDataOfClass(ULevel *this,TSubclassOf<UAssetUserData> param_1)

{
  undefined1 *puVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  
  pUVar11 = (UObject *)0x0;
  pUVar8 = pUVar11;
  pUVar10 = pUVar11;
  if (0 < *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30) {
    do {
      uVar9 = (uint)pUVar8;
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)
               (&pUVar10->field_0x0 +
               *(longlong *)&(this->PreRegisteringActorComponents).Elements.field_0x28);
      if (lVar2 != 0) {
        pUVar8 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UObject *)0x0) goto LAB_147e7a19e;
LAB_147e7a1cc:
          pUVar8 = pUVar11;
        }
        else {
          if (pUVar8 == (UObject *)0x0) goto LAB_147e7a1cc;
          UE::GC::MarkAsReachable(pUVar8);
LAB_147e7a19e:
          pUVar7 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_147e7a1cc;
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)&pUVar8[1].field_0x10 < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar6 * 8)
              != &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_147e7a1cc;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8) ==
            &pUVar8[1].field_0x8)) {
          puVar1 = &(this->PreRegisteringActorComponents).Elements.field_0x28;
          uVar5 = 0;
          if ((int)uVar9 < *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (void *)(*(longlong *)puVar1 + (longlong)(int)uVar9 * 8);
          iVar6 = (*(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30 - uVar9) + -1;
          if (iVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
          }
          iVar6 = *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30 + -1;
          *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30 = iVar6;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)puVar1,iVar6,
                     (int *)&(this->PreRegisteringActorComponents).Elements.field_0x34);
          return;
        }
      }
      pUVar8 = (UObject *)(ulonglong)(uVar9 + 1);
      pUVar10 = (UObject *)&pUVar10->field_0x8;
    } while ((int)(uVar9 + 1) < *(int *)&(this->PreRegisteringActorComponents).Elements.field_0x30);
  }
  return;
}

// ResetRouteActorEndPlayForRemoveFromWorld @ 147e7c030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::ResetRouteActorEndPlayForRemoveFromWorld(ULevel *this)

{
  this->RouteActorEndPlayForRemoveFromWorldIndex = 0;
  return;
}

// ResetRouteActorInitializationState @ 147e7c050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::ResetRouteActorInitializationState(ULevel *this)

{
  this->RouteActorInitializationState = Preinitialize;
  this->RouteActorInitializationIndex = 0;
  return;
}

// ResolveSubobject @ 147e7c6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ULevel::ResolveSubobject(ULevel *this,wchar_t *param_1,UObject **param_2,bool param_3)

{
  bool bVar1;
  undefined1 uVar2;
  size_t sVar3;
  UObject *pUVar4;
  FString *this_00;
  UWorldPartition *this_01;
  ForAnyElementType FVar5;
  int iVar6;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  iVar6 = 0;
  local_38.Size = iVar6;
  local_38.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    local_38.Size = (int)sVar3;
  }
  pUVar4 = StaticFindObject((UClass *)0x0,(UObject *)this,&local_38,None);
  *param_2 = pUVar4;
  if (pUVar4 != (UObject *)0x0) {
    return true;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::FString(&local_48,param_1);
  this_00 = ::FString::FString((FString *)&local_28,param_1);
  ::FString::FString((FString *)&local_38,L".");
  bVar1 = ::FString::Split(this_00,(FString *)&local_38,&local_48,&local_58);
  if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  if (bVar1) {
    if (local_48.Data.ArrayNum == 0) {
      local_38.DataPtr = L"";
LAB_147e7c7f8:
      sVar3 = wcslen(local_38.DataPtr);
      iVar6 = (int)sVar3;
    }
    else {
      local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147e7c7f8;
    }
    local_38.Size = iVar6;
    local_28.DataPtr = local_38.DataPtr;
    local_28.Size = iVar6;
    local_28._12_4_ = local_38._12_4_;
    pUVar4 = StaticFindObject((UClass *)0x0,(UObject *)this,&local_28,None);
    if (pUVar4 != (UObject *)0x0) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar5.Data = local_58.Data.AllocatorInstance.Data;
      }
      uVar2 = (**(code **)(*(longlong *)pUVar4 + 0x88))(pUVar4,FVar5.Data,param_2,param_3);
      goto LAB_147e7c875;
    }
  }
  this_01 = GetWorldPartition(this);
  if (this_01 == (UWorldPartition *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UWorldPartition::ResolveSubobject(this_01,param_1,param_2,param_3);
  }
LAB_147e7c875:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// RouteActorEndPlayForRemoveFromWorld @ 147e7c8d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::RouteActorEndPlayForRemoveFromWorld(ULevel *this,int param_1)

{
  AActor *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = this->RouteActorEndPlayForRemoveFromWorldIndex;
  iVar5 = param_1;
  if ((int)uVar4 < (this->Actors).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Actors).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(AActor **)((this->Actors).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
      if (this_00 != (AActor *)0x0) {
        AActor::RouteEndPlay(this_00,RemovedFromWorld);
      }
      uVar4 = this->RouteActorEndPlayForRemoveFromWorldIndex + 1;
      this->RouteActorEndPlayForRemoveFromWorldIndex = uVar4;
      if ((0 < param_1) && (iVar5 = iVar5 + -1, iVar5 == 0)) {
        return;
      }
    } while ((int)uVar4 < (this->Actors).ArrayNum);
  }
  return;
}

// RouteActorInitialize @ 147e7c9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::RouteActorInitialize(ULevel *this,int param_1)

{
  int *piVar1;
  ERouteActorInitializationState EVar2;
  longlong *plVar3;
  AActor *pAVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ActorBeginPlay> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  uint uVar13;
  FName FVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68;
  FString local_58;
  
  EVar2 = this->RouteActorInitializationState;
  uVar16 = 0;
  iVar15 = param_1;
  if (EVar2 == Preinitialize) {
    uVar13 = this->RouteActorInitializationIndex;
    if ((int)uVar13 < (this->Actors).ArrayNum) {
      do {
        uVar9 = uVar16;
        if ((int)uVar13 < (this->Actors).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar3 = *(longlong **)((this->Actors).AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
        if ((plVar3 != (longlong *)0x0) && ((*(byte *)((longlong)plVar3 + 0x5c) & 2) == 0)) {
          (**(code **)(*plVar3 + 0x540))();
        }
        uVar13 = this->RouteActorInitializationIndex + 1;
        this->RouteActorInitializationIndex = uVar13;
        if ((0 < param_1) && (iVar15 = iVar15 + -1, iVar15 == 0)) {
          return;
        }
      } while ((int)uVar13 < (this->Actors).ArrayNum);
    }
    this->RouteActorInitializationState = Initialize;
    this->RouteActorInitializationIndex = 0;
  }
  else if (EVar2 != Initialize) {
    if (EVar2 != BeginPlay) {
      return;
    }
    goto LAB_147e7cbe1;
  }
  uVar13 = this->RouteActorInitializationIndex;
  if ((int)uVar13 < (this->Actors).ArrayNum) {
    do {
      uVar9 = uVar16;
      if ((int)uVar13 < (this->Actors).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pAVar4 = *(AActor **)((this->Actors).AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
      if ((pAVar4 != (AActor *)0x0) && (pAVar4->bActorInitialized == '\0')) {
        AActor::InitializeComponents(pAVar4);
        (**(code **)(pAVar4->_padding_ + 0x548))(pAVar4);
        if ((pAVar4->bActorInitialized == '\0') && (((uint)pAVar4->_padding_ >> 0x1e & 1) == 0)) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pAVar4,&local_58,(UObject *)0x0,None);
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogActor);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar13 = this->RouteActorInitializationIndex + 1;
      this->RouteActorInitializationIndex = uVar13;
      if ((0 < param_1) && (iVar15 = iVar15 + -1, iVar15 == 0)) {
        return;
      }
    } while ((int)uVar13 < (this->Actors).ArrayNum);
  }
  this->RouteActorInitializationIndex = 0;
  this->RouteActorInitializationState = BeginPlay;
LAB_147e7cbe1:
  bVar8 = UWorld::HasBegunPlay((this->OwningWorld).field0_0x0.DebugPtr);
  if ((bVar8) &&
     (uVar13 = this->RouteActorInitializationIndex, (int)uVar13 < (this->Actors).ArrayNum)) {
    do {
      uVar9 = uVar16;
      if ((int)uVar13 < (this->Actors).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pAVar4 = *(AActor **)((this->Actors).AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
      if ((pAVar4 != (AActor *)0x0) && (bVar8 = AActor::IsChildActor(pAVar4), !bVar8)) {
        FVar11 = StatPtr_STAT_ActorBeginPlay;
        if (StatPtr_STAT_ActorBeginPlay == (FThreadSafeStaticStat<FStat_STAT_ActorBeginPlay>)0x0) {
          pFVar10 = ::FName::FName(&local_80,"STAT_ActorBeginPlay");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_ActorBeginPlay>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActorBeginPlay,*pFVar10,
                              L"Actor BeginPlay","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                              true,ST_int64,true,false,MCR_Invalid);
        }
        FVar5 = *(FName *)FVar11;
        bVar8 = false;
        bVar7 = false;
        local_78.ComparisonIndex.Value = 0;
        local_78.Number = 0;
        FVar12 = FVar5.ComparisonIndex.Value;
        uVar13 = FVar5.Number;
        if ((FVar12.Value == 0) && (uVar13 == 0)) {
          AActor::DispatchBeginPlay(pAVar4,true);
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res8[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
            bVar8 = false;
            bVar7 = true;
            if (-1 < CpuChannel->Enabled) {
              local_res18.ComparisonIndex.Value = FVar12.Value;
              local_res18.Number = uVar13;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0xf2e);
              bVar8 = true;
              bVar7 = true;
            }
          }
          bVar17 = FThreadStats::bPrimaryEnable != false;
          FVar14 = local_78;
          if (bVar17) {
            local_res20 = FVar12.Value;
            uStackX_24 = uVar13;
            local_78 = FVar5;
            FThreadStats::AddMessage(FVar5,CycleScopeStart);
            FVar14 = FVar5;
          }
          AActor::DispatchBeginPlay(pAVar4,true);
          if (bVar7) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar17) && (FVar14 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
              local_68.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
              local_68.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
              QueryPerformanceCounter(&local_88);
              local_68.StatData.Pad[4] = '\0';
              local_68.StatData.Pad[5] = '\0';
              local_68.StatData.Pad[6] = '\0';
              local_68.StatData.Pad[7] = '\0';
              local_68.StatData.Pad[0] = local_88.s.LowPart._0_1_;
              local_68.StatData.Pad[1] = local_88.s.LowPart._1_1_;
              local_68.StatData.Pad[2] = local_88.s.LowPart._2_1_;
              local_68.StatData.Pad[3] = local_88.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this_00,&local_68);
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
        }
      }
      uVar13 = this->RouteActorInitializationIndex + 1;
      this->RouteActorInitializationIndex = uVar13;
      if ((0 < param_1) && (iVar15 = iVar15 + -1, iVar15 == 0)) {
        return;
      }
    } while ((int)uVar13 < (this->Actors).ArrayNum);
  }
  this->RouteActorInitializationState = Finished;
  return;
}

// Serialize @ 147e7d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::Serialize(ULevel *this,FArchive *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULevel::Serialize(FArchive_&)_::_2_::FStat_STAT_Level_Serialize>
  FVar15;
  ULevel *pUVar16;
  longlong lVar17;
  UPackage *pUVar18;
  FPrecomputedLightVolumeData *this_00;
  FPrecomputedLightVolumeData *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ForAnyElementType FVar22;
  FNameEntryId FVar23;
  FName FVar24;
  ForAnyElementType FVar25;
  FScriptContainerElement *pFVar26;
  ULevel *pUVar27;
  undefined1 auStackY_318 [32];
  undefined1 local_2b7;
  undefined1 local_2b6 [6];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_2b0;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint uStack_294;
  UObject *local_290;
  undefined8 local_288;
  FColor_u_0 local_280 [2];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_278;
  ULevel *local_268;
  FName local_260;
  AActor *local_258;
  FName local_250;
  ULevel *local_240;
  undefined8 local_238;
  AActor **local_230;
  ULevel *local_228;
  FName local_220;
  FName local_218;
  undefined1 local_210 [8];
  FLevelLegacyMapBuildData local_208;
  undefined1 local_1e8 [32];
  void *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  TSet<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_198;
  TSet<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_148;
  undefined1 local_f8 [24];
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  uchar local_b0;
  uchar local_af [7];
  FString local_a8 [2];
  bool local_88;
  bool local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_240 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Level_Serialize ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULevel::Serialize(FArchive_&)_::_2_::FStat_STAT_Level_Serialize>
         )0x0) {
      pFVar14 = ::FName::FName(&local_220,"STAT_Level_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Level_Serialize,*pFVar14,
                 L"ULevel::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_Level_Serialize;
  if (StatPtr_STAT_Level_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULevel::Serialize(FArchive_&)_::_2_::FStat_STAT_Level_Serialize>
       )0x0) {
    pFVar14 = ::FName::FName(&local_218,"STAT_Level_Serialize");
    FVar15 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ULevel::Serialize(FArchive_&)_::_2_::FStat_STAT_Level_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Level_Serialize,*pFVar14,
                          L"ULevel::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar15;
  bVar8 = false;
  bVar9 = false;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar20 = FVar24.Number;
  if ((FVar23.Value == 0) && (uVar20 == 0)) {
LAB_147e7d378:
    bVar9 = bVar11;
    bVar8 = bVar10;
    bVar10 = false;
    FVar24 = local_250;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_280[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_280[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar23.Value;
        local_260.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                   ,0x291);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e7d378;
    local_298 = FVar23.Value;
    uStack_294 = uVar20;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar10 = true;
  }
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  pUVar27 = this;
  if ((param_1->field_0x28 & 1) == 0) {
    if (((param_1->field_0x29 & 1) == 0) ||
       (((param_1->field_0x28 & 4) == 0 && ((param_1->field_0x2b & 1) == 0)))) {
      TArrayPrivateFriend::Serialize<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>
                (param_1,&this->Actors);
      goto LAB_147e7d58f;
    }
    UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    uVar20 = (this->Actors).ArrayNum;
    local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b0.ArrayNum = 0;
    local_2b0.ArrayMax = 0;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if (0 < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar20,&local_2b0.AllocatorInstance,0,&local_2b0.ArrayMax);
    }
    pFVar26 = (this->Actors).AllocatorInstance.Data;
    iVar12 = (this->Actors).ArrayNum;
    pFVar3 = pFVar26 + (longlong)iVar12 * 8;
    while( true ) {
      if ((this->Actors).ArrayNum != iVar12) {
        local_2b6[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2b6);
      }
      if (pFVar26 == pFVar3) break;
      local_258 = *(AActor **)pFVar26;
      if (local_258 != (AActor *)0x0) {
        pUVar16 = AActor::GetLevel(local_258);
        if (pUVar16 != this) {
          local_230 = &local_258;
          local_228 = this;
          bVar11 = ``ULevel::Serialize'::__l18::<lambda_1>::operator()'::__l2::<lambda_1>::
                   operator()(&local_230);
          if (!bVar11) goto LAB_147e7d877;
        }
        if ((local_258->_padding_ & 0x40) == 0) {
          local_288 = *(undefined8 *)pFVar26;
          if (((local_2b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_288) &&
              ((FScriptContainerElement *)&local_288 <
               local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayMax * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = local_2b0.ArrayNum;
          if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
          }
          local_2b0.ArrayNum = iVar13 + 1;
          *(undefined8 *)(local_2b0.AllocatorInstance.Data + (longlong)iVar13 * 8) = local_288;
        }
      }
LAB_147e7d877:
      pFVar26 = pFVar26 + 8;
    }
    TArrayPrivateFriend::Serialize<AActor_*,TSizedDefaultAllocator<32>_>(param_1,&local_2b0);
    FVar22.Data = local_2b0.AllocatorInstance.Data;
  }
  else {
    pTVar2 = &this->Actors;
    iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (2 < iVar12) {
      TArrayPrivateFriend::Serialize<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>(param_1,pTVar2)
      ;
      goto LAB_147e7d58f;
    }
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    local_268 = this;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_268);
    TArrayPrivateFriend::Serialize<AActor_*,TSizedDefaultAllocator<32>_>(param_1,&local_278);
    uVar21 = local_278._8_8_ & 0xffffffff;
    if (local_278.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar21);
    }
    piVar1 = &(this->Actors).ArrayMax;
    if (*piVar1 < local_278.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_278.ArrayNum,&pTVar2->AllocatorInstance,(this->Actors).ArrayNum,piVar1);
      uVar21 = local_278._8_8_ & 0xffffffff;
    }
    iVar12 = (int)uVar21;
    pFVar3 = local_278.AllocatorInstance.Data + (longlong)iVar12 * 8;
    FVar25.Data = local_278.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar21 != iVar12) {
        local_2b7 = 0;
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2b7);
      }
      FVar22.Data = local_278.AllocatorInstance.Data;
      pUVar27 = local_240;
      if (FVar25.Data == pFVar3) break;
      local_290 = *(UObject **)FVar25.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_290);
      }
      pFVar26 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar26 <= (FScriptContainerElement *)&local_290) &&
          ((FScriptContainerElement *)&local_290 < pFVar26 + (longlong)*piVar1 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (this->Actors).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->Actors).ArrayNum = iVar13 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_290;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_290);
      }
      uVar21 = local_278._8_8_ & 0xffffffff;
      FVar25.Data = FVar25.Data + 8;
    }
  }
  if (FVar22.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar22.Data);
  }
LAB_147e7d58f:
  pFVar19 = (FPrecomputedLightVolumeData *)0x0;
  ::operator<<(param_1,&pUVar27->URL);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&pUVar27->Model);
  TArrayPrivateFriend::Serialize<TObjectPtr<UModelComponent>,TSizedDefaultAllocator<32>_>
            (param_1,&pUVar27->ModelComponents);
  if (((param_1->field_0x2b & 0x10) == 0) || (*(int *)&param_1->field_0x40 < 0x143)) {
    local_238 = 0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_238);
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&pUVar27->LevelScriptActor);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     iVar12 < 3)) {
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    local_198.Elements._0_8_ = 0;
    local_198.Elements._8_8_ = 0;
    local_198.Elements._32_8_ = 0;
    local_198.Elements._40_4_ = 0;
    local_198.Elements._44_4_ = 0x80;
    local_198.Elements._48_4_ = 0xffffffff;
    local_198.Elements._52_4_ = 0;
    local_198.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_198.HashSize = 0;
    TSetPrivateFriend::
    Serialize<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              (param_1,&local_148);
    TSetPrivateFriend::
    Serialize<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              (param_1,&local_198);
    puVar4 = *(ulonglong **)&param_1->field_0x8;
    if (puVar4[1] < *puVar4 + 4) {
      local_298 = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_298);
      if (1 < local_298) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
    if ((param_1->field_0x28 & 1) == 0) {
      if ((param_1->field_0x28 & 4) != 0) {
        plVar5 = *(longlong **)&param_1->field_0x8;
        local_29c = 0;
        if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_29c);
          }
        }
        else {
          local_29c = *(uint *)*plVar5;
          *plVar5 = *plVar5 + 4;
        }
      }
    }
    else {
      plVar5 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_2a0);
        }
      }
      else {
        local_2a0 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      lVar6 = *(longlong *)param_1;
      uVar21 = (ulonglong)local_2a0;
      lVar17 = (**(code **)(lVar6 + 0x28))(param_1);
      (**(code **)(lVar6 + 0x1b8))(param_1,uVar21 + lVar17);
    }
    if (*(int *)&param_1->field_0x40 < 0xfb) {
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,local_210);
    }
    local_1e8._0_8_ = (FScriptContainerElement *)0x0;
    local_1e8._8_8_ = 0;
    local_1c8 = (void *)0x0;
    local_1c0 = 0;
    local_1bc = 0x80;
    local_1b8 = 0xffffffff;
    local_1b4 = 0;
    local_1a8 = (ForElementType<FSetElementId>)0x0;
    local_1a0 = 0;
    TSetPrivateFriend::
    Serialize<TTuple<UTexture2D_*,bool>,TDefaultMapHashableKeyFuncs<UTexture2D_*,bool,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<UTexture2D_*,bool>,TDefaultMapHashableKeyFuncs<UTexture2D_*,bool,0>,FDefaultSetAllocator>
                        *)local_1e8);
    local_1a0 = 0;
    if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1a8);
    }
    bVar11 = local_1e8._12_4_ != 0;
    local_1e8._8_8_ = (ulonglong)(uint)local_1e8._12_4_ << 0x20;
    if (bVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_1e8,0,(int *)(local_1e8 + 0xc));
    }
    local_1b8 = 0xffffffff;
    local_1b4 = 0;
    local_1c0 = 0;
    if (0x80 < local_1bc) {
      local_1bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),0);
    }
    if (local_1c8 != (void *)0x0) {
      FMemory::Free(local_1c8);
    }
    if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1e8._0_8_);
    }
    local_198.HashSize = 0;
    if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<FDynamicTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_198.Elements);
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UTexture2D_*,TArray<FStreamableTextureInstance,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  if (((pUVar27->_padding_ & 0x10) == 0) && ((param_1->field_0x29 & 1) != 0)) {
    param_1->field_0x29 = param_1->field_0x29 | 0x40;
    pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar27);
    if ((atomic<unsigned_int>)((uint)pUVar18->PackageFlagsPrivate | 0x20000) !=
        pUVar18->PackageFlagsPrivate) {
      LOCK();
      pUVar18->PackageFlagsPrivate =
           (atomic<unsigned_int>)((uint)pUVar18->PackageFlagsPrivate | 0x20000);
      UNLOCK();
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&pUVar27->NavListStart);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&pUVar27->NavListEnd);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     iVar12 < 9)) {
    this_00 = ::operator_new(0x1a0);
    if (this_00 != (FPrecomputedLightVolumeData *)0x0) {
      pFVar19 = FPrecomputedLightVolumeData::FPrecomputedLightVolumeData(this_00);
    }
    ::operator<<(param_1,pFVar19);
    local_208.Id.A = (pUVar27->LevelBuildDataId).A;
    local_208.Id.B = (pUVar27->LevelBuildDataId).B;
    local_208.Id.C = (pUVar27->LevelBuildDataId).C;
    local_208.Id.D = (pUVar27->LevelBuildDataId).D;
    local_208.Data = pFVar19;
    FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::AddAnnotation
              (&GLevelsWithLegacyBuildData,(UObjectBase *)pUVar27,&local_208);
  }
  ::operator<<(param_1,&pUVar27->PrecomputedVisibilityHandler);
  ::operator<<(param_1,&pUVar27->PrecomputedVolumeDistanceField);
  if ((0xdf < *(int *)&param_1->field_0x40) && (*(int *)&param_1->field_0x40 < 0x10c)) {
    local_f8._16_8_ = 0;
    local_af[0] = '\0';
    local_af[1] = '\0';
    local_af[2] = '\0';
    local_af[3] = '\0';
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_e0._s_0.X = 0.0;
    local_c8._s_0.Z = 0.0;
    local_e0._s_0.Y = 0.0;
    local_e0._s_0.Z = 0.0;
    local_c8._s_0.X = 0.0;
    local_c8._s_0.Y = 0.0;
    local_af[4] = '\0';
    local_af[5] = '\0';
    local_af[6] = '\0';
    local_b0 = '\0';
    ::FString::FString(local_a8,L"Uncategorized");
    local_a8[1].Data.AllocatorInstance.Data =
         (FScriptContainerElement *)___xmm_0000c350000000000000000000000000;
    local_a8[1].Data._8_8_ = _UNK_1507f03a8;
    local_88 = true;
    local_80 = false;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60._0_4_ = 0;
    local_60._4_4_ = 0;
    local_58 = 0;
    FWorldTileInfo::StreamArchive((FWorldTileInfo *)local_f8,param_1);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if ((*(uint *)&param_1->field_0x34 & 0x400000) != 0) {
      pUVar27->bWasDuplicatedForPIE = '\x01';
    }
    if ((pUVar27->bWasDuplicatedForPIE != '\0') || ((*(uint *)&param_1->field_0x34 & 0x1000) != 0))
    {
      pUVar27->field_0x242 = pUVar27->field_0x242 | 4;
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// Serialize @ 147e7ddd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::Serialize(ULevel *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetLightingScenario @ 147e7e590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::SetLightingScenario(ULevel *this,bool param_1)

{
  this->bIsLightingScenario = '\0';
  this->field_0x240 = this->field_0x240 | param_1;
  UWorld::PropagateLightingScenarioChange((this->OwningWorld).field0_0x0.DebugPtr);
  return;
}

// SetWorldDataLayers @ 147e7eea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::SetWorldDataLayers(ULevel *this,AWorldDataLayers *param_1)

{
  AWorldDataLayers *pAVar1;
  code *pcVar2;
  bool bVar3;
  
  pAVar1 = (this->WorldDataLayers).field0_0x0.DebugPtr;
  if ((pAVar1 != (AWorldDataLayers *)0x0) && (pAVar1 != param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!WorldDataLayers || WorldDataLayers == NewWorldDataLayers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                       ,0xe26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AWorldDataLayers *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WorldDataLayers).field0_0x0.DebugPtr = param_1;
  return;
}

// SetWorldSettings @ 147e7ef20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::SetWorldSettings(ULevel *this,AWorldSettings *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  AWorldSettings *pAVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  AWorldSettings *pAVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  AWorldSettings *local_28 [2];
  
  if ((param_1 == (AWorldSettings *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewWorldSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                         ,0xdfa,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pAVar3 = (this->WorldSettings).field0_0x0.DebugPtr;
  if (pAVar3 == (AWorldSettings *)0x0) {
    bVar8 = param_1 == (AWorldSettings *)0x0;
  }
  else {
    bVar8 = pAVar3 == param_1;
  }
  if (bVar8) {
    return;
  }
  pTVar2 = &this->Actors;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AWorldSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  iVar10 = (this->Actors).ArrayNum;
  lVar14 = 8;
  pFVar12 = pFVar4 + (longlong)iVar10 * 8;
  uVar15 = 0;
  do {
    if (pFVar12 == pFVar4) {
      uVar13 = 0xffffffff;
      goto LAB_147e7efe6;
    }
    pFVar12 = pFVar12 + -8;
  } while (*(AWorldSettings **)pFVar12 != param_1);
  uVar13 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
  if (uVar13 != 0) {
LAB_147e7efe6:
    if ((iVar10 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(longlong *)(pTVar2->AllocatorInstance).Data != 0) {
      if (((this->Actors).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = UObjectBaseUtility::IsA<AWorldSettings>
                        (*(UObjectBaseUtility **)(pTVar2->AllocatorInstance).Data);
      if (!bVar8) {
        uVar9 = uVar15;
        if ((int)uVar13 < (this->Actors).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar13 * 8) = 0;
        local_28[0] = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (AWorldSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar12 + (longlong)(this->Actors).ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (this->Actors).ArrayNum;
        piVar1 = &(this->Actors).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        (this->Actors).ArrayNum = iVar10 + 1;
        memmove(pFVar12 + 8,pFVar12,(longlong)iVar10 << 3);
        *(AWorldSettings **)(pTVar2->AllocatorInstance).Data = local_28[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_28[0] != (AWorldSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_28[0]);
        }
        goto LAB_147e7f25f;
      }
    }
    uVar9 = uVar15;
    if ((int)uVar13 < (this->Actors).ArrayNum) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar13 * 8;
    if (((this->Actors).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (this->Actors).AllocatorInstance.Data;
    uVar5 = *(undefined8 *)pFVar4;
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar12;
    *(undefined8 *)pFVar12 = uVar5;
  }
LAB_147e7f25f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AWorldSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WorldSettings).field0_0x0.DebugPtr = param_1;
  uVar13 = 1;
  if (1 < (this->Actors).ArrayNum) {
    do {
      uVar9 = uVar15;
      if ((int)uVar13 < (this->Actors).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pAVar3 = *(AWorldSettings **)((this->Actors).AllocatorInstance.Data + lVar14);
      if (pAVar3 != (AWorldSettings *)0x0) {
        pUVar11 = Z_Construct_UClass_AWorldSettings_NoRegister();
        iVar10 = (int)pUVar11->_padding_;
        if ((iVar10 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar11->_padding_)) {
          pAVar6 = (this->WorldSettings).field0_0x0.DebugPtr;
          if (pAVar6 == (AWorldSettings *)0x0) {
            bVar8 = pAVar3 == (AWorldSettings *)0x0;
          }
          else {
            bVar8 = pAVar6 == pAVar3;
          }
          if ((bVar8) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ExistingWorldSettings != WorldSettings",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                                 ,0xe17,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          AActor::Destroy((AActor *)pAVar3,false,true);
        }
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < (this->Actors).ArrayNum);
  }
  return;
}

// SortActorList @ 147e7f5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::SortActorList(ULevel *this)

{
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  TObjectPtr<AWorldSettings>_u_0 TVar4;
  UWorld *pUVar5;
  AWorldSettings *pAVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FNameEntryId FVar13;
  ENetMode EVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_void___cdecl_ULevel::SortActorList(void)_::_2_::FStat_STAT_Level_SortActorList>
  FVar17;
  undefined4 extraout_var;
  longlong lVar18;
  FName FVar19;
  FName FVar20;
  TEnumAsByte<ENetRole> *pTVar21;
  FName FVar22;
  undefined1 auStackY_118 [32];
  FName local_b8;
  int local_b0 [2];
  undefined1 local_a8;
  FMemScopePtr local_a7 [7];
  TObjectPtr<AWorldSettings>_u_0 local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FName local_88;
  TObjectPtr<AWorldSettings>_u_0 local_80;
  FColor_u_0 local_78 [2];
  FName local_70;
  FName local_68;
  FName local_60;
  undefined1 local_50 [4];
  FName local_4c;
  FName local_44;
  FLLMScopeFromPtr local_3c [2];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Level_SortActorList ==
        (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::SortActorList(void)_::_2_::FStat_STAT_Level_SortActorList>
         )0x0) {
      pFVar16 = ::FName::FName(&local_4c,"STAT_Level_SortActorList");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Level_SortActorList,*pFVar16,
                 L"STAT_Level_SortActorList","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                 ,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_Level_SortActorList;
  if (StatPtr_STAT_Level_SortActorList ==
      (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::SortActorList(void)_::_2_::FStat_STAT_Level_SortActorList>
       )0x0) {
    pFVar16 = ::FName::FName(&local_44,"STAT_Level_SortActorList");
    FVar17 = (FThreadSafeStaticStat<_public:_void___cdecl_ULevel::SortActorList(void)_::_2_::FStat_STAT_Level_SortActorList>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Level_SortActorList,*pFVar16,
                          L"STAT_Level_SortActorList","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar17;
  bVar8 = false;
  bVar10 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_70.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                   ,0x4e2);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar20;
      local_68 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar9 = true;
      goto LAB_147e7f759;
    }
  }
  bVar9 = false;
  local_68 = local_60;
  FVar20 = local_60;
LAB_147e7f759:
  if ((this->Actors).ArrayNum != 0) {
    pTVar1 = &this->Actors;
    FLLMScopeFromPtr::FLLMScopeFromPtr(local_3c,(pTVar1->AllocatorInstance).Data,Default);
    FMemScopePtr::FMemScopePtr(local_a7,(ulong64)(pTVar1->AllocatorInstance).Data,0);
    uVar3 = (this->Actors).ArrayNum;
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    local_8c = 0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,(ForAnyElementType *)&local_b8,0,local_b0 + 1);
    }
    uVar3 = (this->Actors).ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (local_8c < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&local_98,local_90,&local_8c);
    }
    TVar4 = (TObjectPtr<AWorldSettings>_u_0)(this->WorldSettings).field0_0x0.DebugPtr;
    if (TVar4.DebugPtr != (AWorldSettings *)0x0) {
      local_80 = TVar4;
      if ((((ulonglong)local_b8 <= &local_80) &&
          (&local_80 <
           (TObjectPtr<AWorldSettings>_u_0 *)((longlong)local_b8 + (longlong)local_b0[1] * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_b0[0] == local_b0[1]) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&local_b8,local_b0 + 1);
        local_b0[0] = iVar12;
      }
      lVar18 = (longlong)local_b0[0];
      local_b0[0] = local_b0[0] + 1;
      ((TObjectPtr<AWorldSettings>_u_0 *)((longlong)local_b8 + lVar18 * 8))->DebugPtr =
           (AWorldSettings *)local_80;
      pUVar5 = (this->OwningWorld).field0_0x0.DebugPtr;
      if (pUVar5 != (UWorld *)0x0) {
        UWorld::AddNetworkActor(pUVar5,(AActor *)(this->WorldSettings).field0_0x0.DebugPtr);
      }
    }
    FVar22 = (FName)(pTVar1->AllocatorInstance).Data;
    iVar12 = (this->Actors).ArrayNum;
    local_88 = (FName)((longlong)FVar22 + (longlong)iVar12 * 8);
    FVar19 = local_88;
    while( true ) {
      if ((this->Actors).ArrayNum != iVar12) {
        local_a8 = 0;
        `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_a8);
      }
      FVar20 = local_68;
      if (FVar22 == FVar19) break;
      TVar4 = *(TObjectPtr<AWorldSettings>_u_0 *)FVar22;
      local_a0 = TVar4;
      if (((TVar4.DebugPtr == (AWorldSettings *)0x0) ||
          (((uint)(TVar4.DebugPtr)->_padding_ >> 0x1e & 1) != 0)) ||
         ((pAVar6 = (this->WorldSettings).field0_0x0.DebugPtr, pAVar6 != (AWorldSettings *)0x0 &&
          (pAVar6 == TVar4.DebugPtr)))) {
LAB_147e7fb18:
        FVar22 = (FName)((longlong)FVar22 + 8);
      }
      else {
        if (TVar4.DebugPtr == (AWorldSettings *)0x0) {
LAB_147e7fa78:
          if ((((ulonglong)local_b8 <= &local_a0) &&
              (&local_a0 <
               (TObjectPtr<AWorldSettings>_u_0 *)((longlong)local_b8 + (longlong)local_b0[1] * 8)))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar15 = local_b0[0];
          if (local_b0[0] == local_b0[1]) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&local_b8,local_b0 + 1);
          }
          local_b0[0] = iVar15 + 1;
          ((TObjectPtr<AWorldSettings>_u_0 *)((longlong)local_b8 + (longlong)iVar15 * 8))->DebugPtr
               = (AWorldSettings *)local_a0;
          FVar19 = local_88;
          goto LAB_147e7fb18;
        }
        FVar20 = *(FName *)&(TVar4.DebugPtr)->_padding_;
        if ((FVar20 == (FName)0x0) ||
           (FVar13 = FNameEntryId::FromValidEName((EName)local_50), FVar19.Number = 0,
           FVar19.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value),
           FVar20 == FVar19)) {
          EVar14 = AActor::InternalGetNetMode((AActor *)TVar4.DebugPtr);
          if (EVar14 == NM_Client) goto LAB_147e7fa6c;
LAB_147e7f98c:
          pTVar21 = (TEnumAsByte<ENetRole> *)&(TVar4.DebugPtr)->_padding_;
        }
        else {
          EVar14 = AActor::InternalGetNetMode((AActor *)TVar4.DebugPtr);
          if (EVar14 != NM_Client) goto LAB_147e7f98c;
LAB_147e7fa6c:
          pTVar21 = (TEnumAsByte<ENetRole> *)&(TVar4.DebugPtr)->_padding_;
        }
        if (pTVar21->Value == '\0') goto LAB_147e7fa78;
        if (((local_98.Data <= &local_a0) &&
            (&local_a0 < (TObjectPtr<AWorldSettings>_u_0 *)(local_98.Data + (longlong)local_8c * 8))
            ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_90 == local_8c) {
          local_90 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_98,&local_8c);
        }
        iVar15 = local_90 + 1;
        ((TObjectPtr<AWorldSettings>_u_0 *)(local_98.Data + (longlong)local_90 * 8))->DebugPtr =
             (AWorldSettings *)local_a0;
        pUVar5 = (this->OwningWorld).field0_0x0.DebugPtr;
        FVar19 = local_88;
        local_90 = iVar15;
        if (pUVar5 == (UWorld *)0x0) goto LAB_147e7fb18;
        UWorld::AddNetworkActor(pUVar5,(AActor *)local_a0.DebugPtr);
        FVar22 = (FName)((longlong)FVar22 + 8);
        FVar19 = local_88;
      }
    }
    lVar18 = (longlong)local_90;
    if (local_90 != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,local_90,(ForAnyElementType *)&local_b8,local_b0,local_b0 + 1);
      memmove((TObjectPtr<AWorldSettings>_u_0 *)((longlong)local_b8 + (longlong)iVar12 * 8),
              local_98.Data,lVar18 << 3);
      local_90 = 0;
    }
    FVar22 = local_b8;
    if (pTVar1 != (TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)&local_b8) {
      iVar12 = local_b0[0];
      piVar2 = &(this->Actors).ArrayMax;
      (this->Actors).ArrayNum = local_b0[0];
      if ((local_b0[0] == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_b0[0],*piVar2,&pTVar1->AllocatorInstance,local_b0[0],piVar2);
        ConstructItems<TObjectPtr<AActor>,TObjectPtr<AActor>,int>
                  ((pTVar1->AllocatorInstance).Data,(TObjectPtr<AActor> *)FVar22,iVar12);
      }
    }
    if ((TObjectPtr<AWorldSettings>_u_0 *)local_98.Data != (TObjectPtr<AWorldSettings>_u_0 *)0x0) {
      FMemory::Free(local_98.Data);
    }
    if (local_b8 != (FName)0x0) {
      FMemory::Free((void *)local_b8);
    }
    FMemScopePtr::~FMemScopePtr(local_a7);
    FLLMScopeFromPtr::~FLLMScopeFromPtr(local_3c);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// StaticRegisterNativesULevel @ 147e82290

void __cdecl ULevel::StaticRegisterNativesULevel(void)

{
  return;
}

// TryAddActorToList @ 147e82b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULevel::TryAddActorToList(ULevel *this,AActor *param_1,bool param_2)

{
  int *piVar1;
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  bool bVar8;
  TObjectPtr<AActor>_u_0 local_res20;
  AActor *local_38;
  AActor *local_30;
  TObjectPtr<AActor>_u_0 local_28 [2];
  
  pTVar2 = &this->Actors;
  bVar8 = true;
  if (param_2) {
    iVar7 = (this->Actors).ArrayNum;
    local_res20.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<AActor>_>
              (pTVar2,(TObjectPtr<AActor> *)&local_res20.ObjectPtr);
    bVar8 = (this->Actors).ArrayNum != iVar7;
  }
  else {
    local_38 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Actors).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->Actors).ArrayNum;
    piVar1 = &(this->Actors).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Actors).ArrayNum = iVar7 + 1;
    *(AActor **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
  }
  if ((GActorClusteringFixStalePointers == 0) || ((bool)this->bActorClusterCreated)) {
    pTVar2 = &this->ActorsForGC;
    if (param_2) {
      local_28[0].DebugPtr = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<AActor>_>
                (pTVar2,(TObjectPtr<AActor> *)&local_28[0].ObjectPtr);
    }
    else {
      local_30 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
          ((FScriptContainerElement *)&local_30 <
           pFVar3 + (longlong)(this->ActorsForGC).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = (this->ActorsForGC).ArrayNum;
      piVar1 = &(this->ActorsForGC).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ActorsForGC).ArrayNum = iVar7 + 1;
      *(AActor **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_30;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_30);
      }
    }
  }
  return bVar8;
}

// UpdateLevelComponents @ 147e83b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevel::UpdateLevelComponents(ULevel *this,bool param_1,FRegisterComponentContext *param_2)

{
  IncrementalUpdateComponents(this,0,param_1,param_2);
  TMulticastDelegate<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FWorldDelegates::LevelComponentsUpdated,(this->OwningWorld).field0_0x0.DebugPtr,this);
  return;
}

// UpdateModelComponents @ 147e83c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::UpdateModelComponents(ULevel *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  TMap<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>_>
  *pTVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  iVar4 = (this->ModelComponents).ArrayNum;
  if ((iVar4 != 0) && (uVar6 = 0, 0 < iVar4)) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar6 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar6 < (this->ModelComponents).ArrayNum) {
        uVar3 = uVar9;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)((this->ModelComponents).AllocatorInstance.Data + lVar8) != 0) {
        uVar3 = 0;
        if ((int)uVar6 < (this->ModelComponents).ArrayNum) {
          uVar3 = uVar9;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((*(byte *)(*(longlong *)((this->ModelComponents).AllocatorInstance.Data + lVar8) + 0x98)
            & 1) != 0) {
          uVar3 = 0;
          if ((int)uVar6 < (this->ModelComponents).ArrayNum) {
            uVar3 = uVar9;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UActorComponent::UnregisterComponent
                    (*(UActorComponent **)((this->ModelComponents).AllocatorInstance.Data + lVar8));
        }
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->ModelComponents).ArrayNum);
  }
  pTVar7 = &((this->Model).field0_0x0.DebugPtr)->MaterialIndexBuffers;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              *)pTVar7);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar5 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
              *)pTVar7;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      BeginInitResource(*(FRenderResource **)(*local_58 + 8 + (longlong)(int)uVar5 * 0x18),
                        (FRenderCommandPipe *)0x0);
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar5 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_28->HashSize < iVar4)) || (iVar4 < local_28->HashSize)) {
        local_28->HashSize = iVar4;
        TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  if (0 < (this->ModelComponents).ArrayNum) {
    if (((this->OwningWorld).field0_0x0.DebugPtr == (UWorld *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningWorld",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Level.cpp"
                           ,0xa6b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = 0;
    if (0 < (this->ModelComponents).ArrayNum) {
      lVar8 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < (this->ModelComponents).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(longlong *)((this->ModelComponents).AllocatorInstance.Data + lVar8) != 0) {
          uVar3 = 0;
          if ((int)uVar6 < (this->ModelComponents).ArrayNum) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UActorComponent::RegisterComponentWithWorld
                    (*(UActorComponent **)((this->ModelComponents).AllocatorInstance.Data + lVar8),
                     (this->OwningWorld).field0_0x0.DebugPtr,(FRegisterComponentContext *)0x0);
        }
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar6 < (this->ModelComponents).ArrayNum);
    }
  }
  ((this->Model).field0_0x0.DebugPtr)->bInvalidForStaticLighting = true;
  return;
}

// HandleLegacyMapBuildData @ 147ec8fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevel::HandleLegacyMapBuildData(ULevel *this)

{
  TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined4 *puVar4;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> *pTVar5;
  AActor *pAVar6;
  undefined8 *puVar7;
  FLightMap *pFVar8;
  FLightMap *pFVar9;
  FShadowMap *pFVar10;
  FShadowMap *pFVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  ULevel *pUVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  UMapBuildDataRegistry *pUVar21;
  TObjectPtr<UClass>_u_0 TVar22;
  UClass *pUVar23;
  UClass *pUVar24;
  FMeshMapBuildData *pFVar25;
  ulong64 uVar26;
  FLightComponentMapBuildData *pFVar27;
  UClass *pUVar28;
  UClass *pUVar29;
  ForElementType<UActorComponent_*> FVar30;
  UMapBuildDataRegistry *pUVar31;
  FReflectionCaptureMapBuildData *pFVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined1 *puVar35;
  longlong lVar36;
  longlong lVar37;
  int iVar38;
  int iVar39;
  TMap<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
  *this_00;
  void *pvVar40;
  UObjectBase *pUVar41;
  int iVar42;
  uint uVar43;
  FLightComponentMapBuildData *pFVar44;
  ulonglong uVar45;
  longlong *plVar46;
  ulonglong *puVar47;
  uint uVar48;
  FLightComponentMapBuildData *pFVar49;
  void *pvVar50;
  FScriptContainerElement *pFVar51;
  ulonglong uVar52;
  int iVar53;
  FLightComponentMapBuildData *pFVar54;
  int iVar55;
  undefined1 auStackY_388 [32];
  undefined1 local_348 [4];
  uint local_344;
  UMapBuildDataRegistry *local_340;
  uint local_338;
  uint local_334;
  ULevel *local_330;
  uint local_328;
  uint local_324;
  void *local_320;
  void *local_318;
  FScriptContainerElement *local_310;
  longlong local_308;
  FScriptContainerElement *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  FGuid local_2e8;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  void *local_2d0;
  ulonglong uStack_2c8;
  FLightComponentMapBuildData *local_2c0;
  FLevelLegacyMapBuildData local_2b8;
  FGuid local_298;
  FMeshMapBuildLegacyData local_288;
  FMeshMapBuildLegacyData local_278;
  UClass *local_268;
  FPrecomputedLightVolumeData *local_260;
  TObjectPtr<UClass>_u_0 local_258;
  TObjectPtr<UClass>_u_0 local_250;
  TObjectPtr<UClass>_u_0 local_248;
  TPairInitializer<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&> local_240;
  FLightComponentLegacyMapBuildData local_230;
  FReflectionCaptureMapBuildLegacyData local_218;
  FLevelLegacyMapBuildData *local_200;
  FPrecomputedLightVolumeData **local_1f8;
  ulonglong local_1f0 [2];
  longlong local_1e0 [2];
  ForElementType<UActorComponent_*> local_1d0;
  int local_108;
  int local_104;
  ForElementType<UActorComponent_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  FLightComponentMapBuildData *pFVar56;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pUVar31 = (UMapBuildDataRegistry *)0x0;
  local_330 = this;
  if (((0 < (int)(GComponentsWithLegacyLightmaps.AnnotationMap._8_4_ -
                 GComponentsWithLegacyLightmaps.AnnotationMap._52_4_)) ||
      (0 < (int)(GLevelsWithLegacyBuildData.AnnotationMap._8_4_ -
                GLevelsWithLegacyBuildData.AnnotationMap._52_4_))) ||
     (0 < (int)(GLightComponentsWithLegacyBuildData.AnnotationMap._8_4_ -
               GLightComponentsWithLegacyBuildData.AnnotationMap._52_4_))) {
    FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::GetAndRemoveAnnotation
              (&GLevelsWithLegacyBuildData,&local_2b8,(UObjectBase *)this);
    local_340 = (UMapBuildDataRegistry *)0x0;
    pUVar21 = pUVar31;
    if (((local_2b8.Id.C != 0 || local_2b8.Id.B != 0) || local_2b8.Id.A != 0) || local_2b8.Id.D != 0
       ) {
      pUVar21 = CreateRegistryForLegacyMap(this);
      local_260 = local_2b8.Data;
      local_340 = pUVar21;
      if ((((local_2b8.Id.C == 0 && local_2b8.Id.B == 0) && local_2b8.Id.A == 0) &&
           local_2b8.Id.D == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("LevelId.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                              ,0x2fd,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_200 = &local_2b8;
      local_1f8 = &local_260;
      TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&>_>
                ((TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
                  *)&pUVar21->LevelPrecomputedLightVolumeBuildData,&local_240,(bool *)&local_200);
    }
    local_338 = 0;
    if (0 < (this->Actors).ArrayNum) {
      local_308 = 0;
      local_320 = (void *)0x0;
      do {
        lVar37 = local_308;
        pvVar40 = local_320;
        uVar48 = (uint)pUVar31;
        uVar33 = 0;
        if ((int)uVar48 < (this->Actors).ArrayNum) {
          uVar33 = ~uVar48 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (*(longlong *)((longlong)pvVar40 + (longlong)(this->Actors).AllocatorInstance.Data) != 0)
        {
          local_100.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
          local_38 = 0;
          uVar33 = 0;
          if ((int)uVar48 < (this->Actors).ArrayNum) {
            uVar33 = ~uVar48 >> 0x1f;
          }
          local_34 = 0x18;
          if ((uVar33 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pAVar6 = *(AActor **)((this->Actors).AllocatorInstance.Data + lVar37 * 8);
          if (local_34 < 0) {
            local_38 = 0;
            if (local_34 != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                        (8,8,0,&local_100,0,&local_34);
            }
          }
          else {
            local_38 = 0;
          }
          TVar22.DebugPtr = Z_Construct_UClass_UActorComponent_NoRegister();
          local_258.DebugPtr = TVar22.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar22.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar22.DebugPtr);
          }
          pUVar23 = TSubclassOf<UActorComponent>::operator*
                              ((TSubclassOf<UActorComponent> *)&local_258.ObjectPtr);
          pUVar24 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar23 == pUVar24) {
            local_250.DebugPtr = TVar22.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar22.DebugPtr != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar22.DebugPtr);
            }
            AActor::
            ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (pAVar6,(TSubclassOf<UActorComponent>)&local_250,
                       (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)&local_100);
          }
          else {
            local_248.DebugPtr = TVar22.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar22.DebugPtr != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar22.DebugPtr);
            }
            AActor::
            ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (pAVar6,(TSubclassOf<UActorComponent>)&local_248,
                       (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)&local_100);
          }
          local_324 = 0;
          if (0 < local_38) {
            local_310 = (FScriptContainerElement *)0x0;
            do {
              pFVar51 = local_310;
              uVar33 = 0;
              if ((int)local_324 < local_38) {
                uVar33 = ~local_324 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar30 = (ForElementType<UActorComponent_*>)&local_100;
              if (local_100.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
                FVar30 = local_100.SecondaryData;
              }
              pUVar41 = *(UObjectBase **)(pFVar51 + (longlong)FVar30);
              local_2f8 = pUVar41;
              if ((pUVar41 == (UObjectBase *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                                      ,0xb5,L""), bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              local_318 = (void *)0x0;
              local_344 = 0;
              local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_288.Data.ArrayNum = 0;
              local_288.Data.ArrayMax = 0;
              FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::SetAnnotationCacheKeyAndValue
                        (&GComponentsWithLegacyLightmaps,pUVar41,&local_288);
              if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_288.Data.AllocatorInstance.Data);
              }
              AcquireSRWLockExclusive
                        ((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationMapCritical);
              uVar33 = ((uint)((ulonglong)pUVar41 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pUVar41 >> 4)) * -0x7a143595;
              local_328 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
              local_328 = local_328 >> 0x10 ^ local_328;
              iVar38 = GComponentsWithLegacyLightmaps.AnnotationMap._8_4_ -
                       GComponentsWithLegacyLightmaps.AnnotationMap._52_4_;
              uVar33 = 0;
              if (GComponentsWithLegacyLightmaps.AnnotationMap._8_4_ ==
                  GComponentsWithLegacyLightmaps.AnnotationMap._52_4_) {
LAB_147ec94c7:
                ReleaseSRWLockExclusive
                          ((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationMapCritical);
              }
              else {
                lVar37 = 0x154c57d00;
                if (GComponentsWithLegacyLightmaps.AnnotationMap._64_8_ != 0) {
                  lVar37 = GComponentsWithLegacyLightmaps.AnnotationMap._64_8_;
                }
                for (iVar39 = *(int *)(lVar37 + (ulonglong)
                                                (GComponentsWithLegacyLightmaps.AnnotationMap._72_4_
                                                 - 1 & local_328) * 4); uVar33 = 0, iVar39 != -1;
                    iVar39 = *(int *)((longlong)iVar39 * 0x20 + 0x18 +
                                     GComponentsWithLegacyLightmaps.AnnotationMap._0_8_)) {
                  if (*(UObjectBase **)
                       ((longlong)iVar39 * 0x20 + GComponentsWithLegacyLightmaps.AnnotationMap._0_8_
                       ) == pUVar41) {
                    uVar33 = 0;
                    if (iVar39 != -1) {
                      plVar46 = (longlong *)
                                ((longlong)iVar39 * 0x20 + 8 +
                                GComponentsWithLegacyLightmaps.AnnotationMap._0_8_);
                      uVar33 = 0;
                      if (local_1e0 != plVar46) {
                        local_318 = (void *)*plVar46;
                        *plVar46 = 0;
                        local_344 = *(uint *)(plVar46 + 1);
                        plVar46[1] = 0;
                        uVar33 = local_344;
                      }
                      TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                      ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                                       *)&GComponentsWithLegacyLightmaps.AnnotationMap,iVar39);
                    }
                    break;
                  }
                }
                if ((iVar38 < 1) ||
                   (GComponentsWithLegacyLightmaps.AnnotationMap._8_4_ !=
                    GComponentsWithLegacyLightmaps.AnnotationMap._52_4_)) goto LAB_147ec94c7;
                ReleaseSRWLockExclusive
                          ((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationMapCritical);
                FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::ProcessRegistration
                          (&GComponentsWithLegacyLightmaps);
              }
              local_334 = 0;
              if (0 < (int)uVar33) {
                local_300 = (FScriptContainerElement *)0x0;
                do {
                  pFVar51 = local_300;
                  uVar48 = local_334;
                  if (pUVar21 == (UMapBuildDataRegistry *)0x0) {
                    local_340 = CreateRegistryForLegacyMap(local_330);
                  }
                  uVar43 = 0;
                  if ((int)uVar48 < (int)uVar33) {
                    uVar43 = ~uVar48 >> 0x1f;
                  }
                  if ((uVar43 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  pvVar40 = local_318;
                  pFVar25 = UMapBuildDataRegistry::AllocateMeshBuildData
                                      (local_340,
                                       (FGuid *)((longlong)local_318 + (longlong)(int)uVar48 * 0x18)
                                       ,false);
                  if ((uVar43 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  puVar7 = *(undefined8 **)(pFVar51 + 0x10 + (longlong)pvVar40);
                  pFVar8 = (pFVar25->LightMap).Reference;
                  pFVar9 = (FLightMap *)*puVar7;
                  if (pFVar8 != pFVar9) {
                    (pFVar25->LightMap).Reference = pFVar9;
                    if (pFVar9 != (FLightMap *)0x0) {
                      FLightMap::AddRef(pFVar9);
                    }
                    if (pFVar8 != (FLightMap *)0x0) {
                      FLightMap::Release(pFVar8);
                    }
                  }
                  pFVar10 = (FShadowMap *)puVar7[1];
                  pFVar11 = (pFVar25->ShadowMap).Reference;
                  if (pFVar11 != pFVar10) {
                    (pFVar25->ShadowMap).Reference = pFVar10;
                    if (pFVar10 != (FShadowMap *)0x0) {
                      FShadowMap::AddRef(pFVar10);
                    }
                    if (pFVar11 != (FShadowMap *)0x0) {
                      FShadowMap::Release(pFVar11);
                    }
                  }
                  TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
                            (&pFVar25->IrrelevantLights,
                             (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(puVar7 + 2));
                  pTVar1 = &pFVar25->PerInstanceLightmapData;
                  if (pTVar1 != (TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_> *)
                                (puVar7 + 4)) {
                    iVar38 = *(int *)(puVar7 + 5);
                    piVar2 = &(pFVar25->PerInstanceLightmapData).ArrayMax;
                    pvVar40 = (void *)puVar7[4];
                    (pFVar25->PerInstanceLightmapData).ArrayNum = iVar38;
                    if ((iVar38 == 0) && (*piVar2 == 0)) {
                      *piVar2 = 0;
                      uVar48 = local_334;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,4,iVar38,*piVar2,&pTVar1->AllocatorInstance,iVar38,piVar2);
                      uVar48 = local_334;
                      if (iVar38 != 0) {
                        memcpy((pTVar1->AllocatorInstance).Data,pvVar40,(longlong)iVar38 << 4);
                        uVar48 = local_334;
                      }
                    }
                  }
                  uVar33 = local_344;
                  pFVar25->ResourceCluster = (FLightmapResourceCluster *)puVar7[6];
                  if ((uVar43 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  pFVar51 = local_300;
                  puVar7 = *(undefined8 **)(local_300 + 0x10 + (longlong)local_318);
                  if (puVar7 != (undefined8 *)0x0) {
                    if ((void *)puVar7[4] != (void *)0x0) {
                      FMemory::Free((void *)puVar7[4]);
                    }
                    if ((void *)puVar7[2] != (void *)0x0) {
                      FMemory::Free((void *)puVar7[2]);
                    }
                    if ((FShadowMap *)puVar7[1] != (FShadowMap *)0x0) {
                      FShadowMap::Release((FShadowMap *)puVar7[1]);
                    }
                    if ((FLightMap *)*puVar7 != (FLightMap *)0x0) {
                      FLightMap::Release((FLightMap *)*puVar7);
                    }
                    ::operator_delete(puVar7,0x38);
                  }
                  local_334 = uVar48 + 1;
                  local_300 = pFVar51 + 0x18;
                  pUVar21 = local_340;
                  pUVar41 = local_2f8;
                } while ((int)local_334 < (int)uVar33);
              }
              pFVar27 = (FLightComponentMapBuildData *)0x0;
              if ((pUVar41 == (UObjectBase *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                                      ,0xb5,L""), bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              local_2d0 = (void *)0x0;
              uStack_2c8 = 0;
              local_2c0 = (FLightComponentMapBuildData *)0x0;
              local_230.Id.A = 0;
              local_230.Id.B = 0;
              local_230.Id.C = 0;
              local_230.Id.D = 0;
              local_230.Data = (FLightComponentMapBuildData *)0x0;
              FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::
              SetAnnotationCacheKeyAndValue(&GLightComponentsWithLegacyBuildData,pUVar41,&local_230)
              ;
              AcquireSRWLockExclusive
                        ((PSRWLOCK)&GLightComponentsWithLegacyBuildData.AnnotationMapCritical);
              iVar38 = GLightComponentsWithLegacyBuildData.AnnotationMap._8_4_ -
                       GLightComponentsWithLegacyBuildData.AnnotationMap._52_4_;
              pFVar44 = pFVar27;
              pFVar49 = pFVar27;
              pFVar54 = pFVar27;
              pFVar56 = pFVar27;
              if (GLightComponentsWithLegacyBuildData.AnnotationMap._8_4_ ==
                  GLightComponentsWithLegacyBuildData.AnnotationMap._52_4_) {
                local_2f8 = local_2d0;
                uStack_2f0 = uStack_2c8;
LAB_147ec98f5:
                iVar42 = (int)pFVar44;
                iVar55 = (int)pFVar56;
                iVar53 = (int)pFVar54;
                iVar39 = (int)pFVar27;
                ReleaseSRWLockExclusive
                          ((PSRWLOCK)&GLightComponentsWithLegacyBuildData.AnnotationMapCritical);
              }
              else {
                lVar37 = 0x154c57e20;
                if (GLightComponentsWithLegacyBuildData.AnnotationMap._64_8_ != 0) {
                  lVar37 = GLightComponentsWithLegacyBuildData.AnnotationMap._64_8_;
                }
                for (iVar39 = *(int *)(lVar37 + (ulonglong)
                                                (GLightComponentsWithLegacyBuildData.AnnotationMap.
                                                 _72_4_ - 1 & local_328) * 4); iVar39 != -1;
                    iVar39 = *(int *)(GLightComponentsWithLegacyBuildData.AnnotationMap._0_8_ + 0x20
                                     + (longlong)iVar39 * 0x28)) {
                  if (*(UObjectBase **)
                       (GLightComponentsWithLegacyBuildData.AnnotationMap._0_8_ +
                       (longlong)iVar39 * 0x28) == pUVar41) {
                    if (iVar39 != -1) {
                      puVar47 = (ulonglong *)
                                (GLightComponentsWithLegacyBuildData.AnnotationMap._0_8_ + 8 +
                                (longlong)iVar39 * 0x28);
                      local_2f8 = (UObjectBase *)*puVar47;
                      uStack_2f0 = puVar47[1];
                      local_2c0 = *(FLightComponentMapBuildData **)
                                   (GLightComponentsWithLegacyBuildData.AnnotationMap._0_8_ + 0x18 +
                                   (longlong)iVar39 * 0x28);
                      local_2d0 = local_2f8;
                      uStack_2c8 = uStack_2f0;
                      TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
                      ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
                                       *)&GLightComponentsWithLegacyBuildData.AnnotationMap,iVar39);
                      pFVar56 = (FLightComponentMapBuildData *)((ulonglong)local_2f8 >> 0x20);
                      pFVar27 = (FLightComponentMapBuildData *)(uStack_2f0 >> 0x20);
                      pFVar54 = (FLightComponentMapBuildData *)(uStack_2f0 & 0xffffffff);
                      pFVar44 = (FLightComponentMapBuildData *)((ulonglong)local_2f8 & 0xffffffff);
                      pFVar49 = local_2c0;
                      goto LAB_147ec9841;
                    }
                    break;
                  }
                }
                local_2f8 = local_2d0;
                uStack_2f0 = uStack_2c8;
LAB_147ec9841:
                iVar42 = (int)pFVar44;
                iVar55 = (int)pFVar56;
                iVar53 = (int)pFVar54;
                iVar39 = (int)pFVar27;
                if ((iVar38 < 1) ||
                   (GLightComponentsWithLegacyBuildData.AnnotationMap._8_4_ !=
                    GLightComponentsWithLegacyBuildData.AnnotationMap._52_4_)) goto LAB_147ec98f5;
                ReleaseSRWLockExclusive
                          ((PSRWLOCK)&GLightComponentsWithLegacyBuildData.AnnotationMapCritical);
                FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::ProcessRegistration
                          (&GLightComponentsWithLegacyBuildData);
              }
              if (((iVar39 != 0 || iVar53 != 0) || iVar55 != 0) || iVar42 != 0) {
                local_298.A = (uint)local_2f8;
                local_298.B = local_2f8._4_4_;
                local_298.C = (uint)uStack_2f0;
                local_298.D = uStack_2f0._4_4_;
                if ((((local_2f8._4_4_ == 0 && uStack_2f0._4_4_ == 0) && iVar53 == 0) && iVar42 == 0
                    ) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("LightId.IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MapBuildData.cpp"
                                              ,0x356,L""), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pUVar31 = local_340;
                this_00 = &local_340->LightBuildData;
                uVar26 = CityHash64((char *)&local_298,0x10);
                if (*(int *)&(pUVar31->LightBuildData).field_0x8 !=
                    *(int *)&(pUVar31->LightBuildData).field_0x34) {
                  puVar12 = *(undefined1 **)&(pUVar31->LightBuildData).field_0x40;
                  puVar35 = &(pUVar31->LightBuildData).field_0x38;
                  if (puVar12 != (undefined1 *)0x0) {
                    puVar35 = puVar12;
                  }
                  iVar38 = *(int *)(puVar35 +
                                   ((ulonglong)(*(int *)&(pUVar31->LightBuildData).field_0x48 - 1) &
                                   uVar26 & 0xffffffff) * 4);
                  if (iVar38 != -1) {
                    lVar37 = *(longlong *)this_00;
                    do {
                      lVar36 = (longlong)iVar38 * 0xd0;
                      if (((local_298.D == *(uint *)(lVar36 + 0xc + lVar37) &&
                           local_298.C == *(uint *)(lVar36 + 8 + lVar37)) &&
                          local_298.B == *(uint *)(lVar36 + 4 + lVar37)) &&
                          local_298.A == *(uint *)(lVar36 + lVar37)) {
                        if ((iVar38 != -1) &&
                           (lVar37 = (longlong)iVar38 * 0xd0 + lVar37, lVar37 != 0)) {
                          pFVar27 = (FLightComponentMapBuildData *)(lVar37 + 0x10);
                          goto LAB_147ec9a23;
                        }
                        break;
                      }
                      iVar38 = *(int *)(lVar36 + 0xc0 + lVar37);
                    } while (iVar38 != -1);
                  }
                }
                pFVar27 = TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
                          ::EmplaceByHash<FGuid_const_&>
                                    ((TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
                                      *)this_00,(uint)uVar26,&local_298);
LAB_147ec9a23:
                pTVar3 = &(pFVar27->DepthMap).DepthSamples;
                pFVar27->ShadowMapChannel = pFVar49->ShadowMapChannel;
                pTVar5 = &(pFVar49->DepthMap).DepthSamples;
                dVar17 = (pFVar49->DepthMap).WorldToLight.M[0][1];
                (pFVar27->DepthMap).WorldToLight.M[0][0] = (pFVar49->DepthMap).WorldToLight.M[0][0];
                (pFVar27->DepthMap).WorldToLight.M[0][1] = dVar17;
                dVar17 = (pFVar49->DepthMap).WorldToLight.M[0][3];
                (pFVar27->DepthMap).WorldToLight.M[0][2] = (pFVar49->DepthMap).WorldToLight.M[0][2];
                (pFVar27->DepthMap).WorldToLight.M[0][3] = dVar17;
                dVar17 = (pFVar49->DepthMap).WorldToLight.M[1][1];
                (pFVar27->DepthMap).WorldToLight.M[1][0] = (pFVar49->DepthMap).WorldToLight.M[1][0];
                (pFVar27->DepthMap).WorldToLight.M[1][1] = dVar17;
                dVar17 = (pFVar49->DepthMap).WorldToLight.M[1][3];
                (pFVar27->DepthMap).WorldToLight.M[1][2] = (pFVar49->DepthMap).WorldToLight.M[1][2];
                (pFVar27->DepthMap).WorldToLight.M[1][3] = dVar17;
                dVar17 = (pFVar49->DepthMap).WorldToLight.M[2][1];
                (pFVar27->DepthMap).WorldToLight.M[2][0] = (pFVar49->DepthMap).WorldToLight.M[2][0];
                (pFVar27->DepthMap).WorldToLight.M[2][1] = dVar17;
                dVar17 = (pFVar49->DepthMap).WorldToLight.M[2][3];
                (pFVar27->DepthMap).WorldToLight.M[2][2] = (pFVar49->DepthMap).WorldToLight.M[2][2];
                (pFVar27->DepthMap).WorldToLight.M[2][3] = dVar17;
                dVar17 = (pFVar49->DepthMap).WorldToLight.M[3][1];
                (pFVar27->DepthMap).WorldToLight.M[3][0] = (pFVar49->DepthMap).WorldToLight.M[3][0];
                (pFVar27->DepthMap).WorldToLight.M[3][1] = dVar17;
                uVar14 = *(undefined4 *)((longlong)(pFVar49->DepthMap).WorldToLight.M[3] + 0x14);
                uVar15 = *(undefined4 *)((pFVar49->DepthMap).WorldToLight.M[3] + 3);
                uVar16 = *(undefined4 *)((longlong)(pFVar49->DepthMap).WorldToLight.M[3] + 0x1c);
                *(undefined4 *)((pFVar27->DepthMap).WorldToLight.M[3] + 2) =
                     *(undefined4 *)((pFVar49->DepthMap).WorldToLight.M[3] + 2);
                *(undefined4 *)((longlong)(pFVar27->DepthMap).WorldToLight.M[3] + 0x14) = uVar14;
                *(undefined4 *)((pFVar27->DepthMap).WorldToLight.M[3] + 3) = uVar15;
                *(undefined4 *)((longlong)(pFVar27->DepthMap).WorldToLight.M[3] + 0x1c) = uVar16;
                (pFVar27->DepthMap).ShadowMapSizeX = (pFVar49->DepthMap).ShadowMapSizeX;
                (pFVar27->DepthMap).ShadowMapSizeY = (pFVar49->DepthMap).ShadowMapSizeY;
                if (pTVar3 != pTVar5) {
                  iVar38 = (pFVar49->DepthMap).DepthSamples.ArrayNum;
                  piVar2 = &(pFVar27->DepthMap).DepthSamples.ArrayMax;
                  pFVar51 = (pTVar5->AllocatorInstance).Data;
                  iVar39 = *piVar2;
                  (pFVar27->DepthMap).DepthSamples.ArrayNum = iVar38;
                  if ((iVar38 == 0) && (iVar39 == 0)) {
                    *piVar2 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar38,iVar39,&pTVar3->AllocatorInstance,iVar38,piVar2);
                    if (iVar38 != 0) {
                      memcpy((pTVar3->AllocatorInstance).Data,pFVar51,(longlong)iVar38 * 2);
                    }
                  }
                }
                FLightComponentMapBuildData::~FLightComponentMapBuildData(pFVar49);
                ::operator_delete(pFVar49,0xb0);
              }
              if (local_318 != (void *)0x0) {
                FMemory::Free(local_318);
              }
              local_324 = local_324 + 1;
              local_310 = local_310 + 8;
              pUVar21 = local_340;
              lVar37 = local_308;
              pvVar40 = local_320;
              uVar48 = local_338;
            } while ((int)local_324 < local_38);
          }
          this = local_330;
          if (local_100.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
            FMemory::Free((void *)local_100.SecondaryData);
            this = local_330;
          }
        }
        local_338 = uVar48 + 1;
        pUVar31 = (UMapBuildDataRegistry *)(ulonglong)local_338;
        local_308 = lVar37 + 1;
        local_320 = (void *)((longlong)pvVar40 + 8);
        pUVar21 = local_340;
      } while ((int)local_338 < (this->Actors).ArrayNum);
    }
    local_328 = (this->ModelComponents).ArrayNum;
    uVar34 = (ulonglong)(int)local_328;
    pFVar51 = (this->ModelComponents).AllocatorInstance.Data;
    local_300 = pFVar51 + uVar34 * 8;
    while( true ) {
      pFVar19 = local_300;
      pvVar40 = (void *)0x0;
      local_310 = pFVar51;
      if ((this->ModelComponents).ArrayNum != (int)uVar34) {
        local_348[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UModelComponent>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_348);
      }
      if (pFVar51 == pFVar19) break;
      pUVar41 = *(UObjectBase **)pFVar51;
      (**(code **)(pUVar41->_padding_ + 0x628))(pUVar41);
      local_320 = (void *)0x0;
      local_344 = 0;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::SetAnnotationCacheKeyAndValue
                (&GComponentsWithLegacyLightmaps,pUVar41,&local_278);
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      AcquireSRWLockExclusive((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationMapCritical);
      uVar33 = ((uint)((ulonglong)pUVar41 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar41 >> 4)) *
               -0x7a143595;
      uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
      iVar38 = GComponentsWithLegacyLightmaps.AnnotationMap._8_4_ -
               GComponentsWithLegacyLightmaps.AnnotationMap._52_4_;
      pvVar50 = pvVar40;
      if (GComponentsWithLegacyLightmaps.AnnotationMap._8_4_ ==
          GComponentsWithLegacyLightmaps.AnnotationMap._52_4_) {
LAB_147ec9ca9:
        ReleaseSRWLockExclusive((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationMapCritical);
      }
      else {
        lVar37 = 0x154c57d00;
        if (GComponentsWithLegacyLightmaps.AnnotationMap._64_8_ != 0) {
          lVar37 = GComponentsWithLegacyLightmaps.AnnotationMap._64_8_;
        }
        for (iVar39 = *(int *)(lVar37 + (ulonglong)
                                        (GComponentsWithLegacyLightmaps.AnnotationMap._72_4_ - 1 &
                                        (uVar33 >> 0x10 ^ uVar33)) * 4); iVar39 != -1;
            iVar39 = *(int *)((longlong)iVar39 * 0x20 + 0x18 +
                             GComponentsWithLegacyLightmaps.AnnotationMap._0_8_)) {
          if (*(UObjectBase **)
               ((longlong)iVar39 * 0x20 + GComponentsWithLegacyLightmaps.AnnotationMap._0_8_) ==
              pUVar41) {
            if (iVar39 != -1) {
              puVar47 = (ulonglong *)
                        ((longlong)iVar39 * 0x20 + 8 +
                        GComponentsWithLegacyLightmaps.AnnotationMap._0_8_);
              if (local_1f0 != puVar47) {
                pvVar50 = (void *)*puVar47;
                *puVar47 = 0;
                local_344 = (uint)puVar47[1];
                pvVar40 = (void *)(ulonglong)local_344;
                puVar47[1] = 0;
                local_320 = pvVar50;
              }
              TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                               *)&GComponentsWithLegacyLightmaps.AnnotationMap,iVar39);
            }
            break;
          }
        }
        if ((iVar38 < 1) ||
           (GComponentsWithLegacyLightmaps.AnnotationMap._8_4_ !=
            GComponentsWithLegacyLightmaps.AnnotationMap._52_4_)) goto LAB_147ec9ca9;
        ReleaseSRWLockExclusive((PSRWLOCK)&GComponentsWithLegacyLightmaps.AnnotationMapCritical);
        FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::ProcessRegistration
                  (&GComponentsWithLegacyLightmaps);
      }
      uVar33 = 0;
      if (0 < (int)pvVar40) {
        local_308 = 0;
        do {
          lVar37 = local_308;
          if (local_340 == (UMapBuildDataRegistry *)0x0) {
            local_340 = CreateRegistryForLegacyMap(local_330);
          }
          uVar48 = 0;
          if ((int)uVar33 < (int)pvVar40) {
            uVar48 = ~uVar33 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar25 = UMapBuildDataRegistry::AllocateMeshBuildData
                              (local_340,(FGuid *)((longlong)pvVar50 + (longlong)(int)uVar33 * 0x18)
                               ,false);
          if ((uVar48 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar7 = *(undefined8 **)(lVar37 + 0x10 + (longlong)pvVar50);
          pFVar8 = (pFVar25->LightMap).Reference;
          pFVar9 = (FLightMap *)*puVar7;
          if (pFVar8 != pFVar9) {
            (pFVar25->LightMap).Reference = pFVar9;
            if (pFVar9 != (FLightMap *)0x0) {
              FLightMap::AddRef(pFVar9);
            }
            if (pFVar8 != (FLightMap *)0x0) {
              FLightMap::Release(pFVar8);
            }
          }
          pFVar10 = (FShadowMap *)puVar7[1];
          pFVar11 = (pFVar25->ShadowMap).Reference;
          if (pFVar11 != pFVar10) {
            (pFVar25->ShadowMap).Reference = pFVar10;
            if (pFVar10 != (FShadowMap *)0x0) {
              FShadowMap::AddRef(pFVar10);
            }
            if (pFVar11 != (FShadowMap *)0x0) {
              FShadowMap::Release(pFVar11);
            }
          }
          TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
                    (&pFVar25->IrrelevantLights,
                     (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(puVar7 + 2));
          pTVar1 = &pFVar25->PerInstanceLightmapData;
          if (pTVar1 != (TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_> *)(puVar7 + 4)
             ) {
            iVar38 = *(int *)(puVar7 + 5);
            piVar2 = &(pFVar25->PerInstanceLightmapData).ArrayMax;
            local_2f8 = (UObjectBase *)puVar7[4];
            (pFVar25->PerInstanceLightmapData).ArrayNum = iVar38;
            if ((iVar38 == 0) && (*piVar2 == 0)) {
              *piVar2 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,iVar38,*piVar2,&pTVar1->AllocatorInstance,iVar38,piVar2);
              if (iVar38 != 0) {
                memcpy((pTVar1->AllocatorInstance).Data,local_2f8,(longlong)iVar38 << 4);
              }
            }
          }
          pFVar25->ResourceCluster = (FLightmapResourceCluster *)puVar7[6];
          if (uVar48 == 0) {
            uVar34 = (ulonglong)(int)local_344;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          else {
            uVar34 = (ulonglong)local_344;
          }
          lVar37 = local_308;
          pvVar50 = local_320;
          puVar7 = *(undefined8 **)(local_308 + 0x10 + (longlong)local_320);
          if (puVar7 != (undefined8 *)0x0) {
            if ((void *)puVar7[4] != (void *)0x0) {
              FMemory::Free((void *)puVar7[4]);
            }
            if ((void *)puVar7[2] != (void *)0x0) {
              FMemory::Free((void *)puVar7[2]);
            }
            if ((FShadowMap *)puVar7[1] != (FShadowMap *)0x0) {
              FShadowMap::Release((FShadowMap *)puVar7[1]);
            }
            if ((FLightMap *)*puVar7 != (FLightMap *)0x0) {
              FLightMap::Release((FLightMap *)*puVar7);
            }
            ::operator_delete(puVar7,0x38);
          }
          local_308 = lVar37 + 0x18;
          uVar33 = uVar33 + 1;
          pvVar40 = (void *)(uVar34 & 0xffffffff);
          pFVar51 = local_310;
        } while ((int)uVar33 < (int)uVar34);
      }
      if (pvVar50 != (void *)0x0) {
        FMemory::Free(pvVar50);
      }
      uVar34 = (ulonglong)local_328;
      pFVar51 = pFVar51 + 8;
      this = local_330;
    }
    pUVar31 = (this->MapBuildData).field0_0x0.DebugPtr;
    if (pUVar31 != (UMapBuildDataRegistry *)0x0) {
      UMapBuildDataRegistry::SetupLightmapResourceClusters(pUVar31);
    }
  }
  uVar34 = 0;
  if (0 < (int)(GReflectionCapturesWithLegacyBuildData.AnnotationMap._8_4_ -
               GReflectionCapturesWithLegacyBuildData.AnnotationMap._52_4_)) {
    pUVar31 = (this->MapBuildData).field0_0x0.DebugPtr;
    local_338 = 0;
    uVar52 = uVar34;
    if (0 < (this->Actors).ArrayNum) {
      do {
        uVar48 = (uint)uVar34;
        uVar33 = 0;
        if ((int)uVar48 < (this->Actors).ArrayNum) {
          uVar33 = ~uVar48 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (*(longlong *)((this->Actors).AllocatorInstance.Data + uVar52) != 0) {
          local_1d0.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
          local_108 = 0;
          uVar33 = 0;
          if ((int)uVar48 < (this->Actors).ArrayNum) {
            uVar33 = ~uVar48 >> 0x1f;
          }
          local_104 = 0x18;
          if ((uVar33 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pUVar24 = (UClass *)0x0;
          pUVar23 = (UClass *)0x0;
          pAVar6 = *(AActor **)((this->Actors).AllocatorInstance.Data + uVar52);
          local_108 = 0;
          if ((local_104 < 0) && (local_104 != 0)) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                      (8,8,0,&local_1d0,0,&local_104);
          }
          pUVar28 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar28 != (UClass *)0x0) goto LAB_147eca19b;
          }
          else {
            pUVar23 = pUVar24;
            if (pUVar28 != (UClass *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar28);
LAB_147eca19b:
              pUVar29 = Z_Construct_UClass_UActorComponent_NoRegister();
              pUVar23 = pUVar24;
              if (pUVar29 != (UClass *)0x0) {
                iVar38 = (int)pUVar29->_padding_;
                if (((int)pUVar28->_padding_ < iVar38) ||
                   ((longlong *)*(undefined1 **)(pUVar28->_padding_ + (longlong)iVar38 * 8) !=
                    &pUVar29->_padding_)) {
                  bVar20 = false;
                }
                else {
                  bVar20 = true;
                }
                if (bVar20) {
                  pUVar23 = pUVar28;
                }
              }
            }
          }
          pUVar24 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar23 == pUVar24) {
            local_240.Value = (FPrecomputedLightVolumeData **)pUVar28;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar28 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar28);
            }
            AActor::
            ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (pAVar6,(TSubclassOf<UActorComponent>)&local_240.Value,
                       (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)&local_1d0);
          }
          else {
            local_268 = pUVar28;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar28 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar28);
            }
            AActor::
            ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (pAVar6,(TSubclassOf<UActorComponent>)&local_268,
                       (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                        *)&local_1d0);
          }
          pUVar18 = local_330;
          uVar45 = 0;
          uVar34 = uVar45;
          if (0 < local_108) {
            do {
              uVar43 = (uint)uVar45;
              uVar33 = 0;
              if ((int)uVar43 < local_108) {
                uVar33 = ~uVar43 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar30 = (ForElementType<UActorComponent_*>)&local_1d0;
              if (local_1d0.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
                FVar30 = local_1d0.SecondaryData;
              }
              pUVar41 = *(UObjectBase **)((longlong)FVar30 + uVar34);
              if (pUVar41 == (UObjectBase *)0x0) {
LAB_147eca2dd:
                pUVar41 = (UObjectBase *)0x0;
              }
              else {
                pUVar24 = Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
                pUVar23 = (pUVar41->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
                iVar38 = (int)pUVar24->_padding_;
                if (((int)pUVar23->_padding_ < iVar38) ||
                   ((longlong *)*(undefined1 **)(pUVar23->_padding_ + (longlong)iVar38 * 8) !=
                    &pUVar24->_padding_)) goto LAB_147eca2dd;
              }
              if (pUVar41 != (UObjectBase *)0x0) {
                local_2e8.A = 0;
                local_2e8.B = 0;
                local_2e8.C = 0;
                local_2e8.D = 0;
                local_218.MapBuildData = (FReflectionCaptureMapBuildData *)0x0;
                local_218.Id.A = 0;
                local_218.Id.B = 0;
                local_218.Id.C = 0;
                local_218.Id.D = 0;
                FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::
                SetAnnotationCacheKeyAndValue
                          (&GReflectionCapturesWithLegacyBuildData,pUVar41,&local_218);
                AcquireSRWLockExclusive
                          ((PSRWLOCK)&GReflectionCapturesWithLegacyBuildData.AnnotationMapCritical);
                uVar33 = ((uint)((ulonglong)pUVar41 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pUVar41 >> 4)) * -0x7a143595;
                uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
                iVar38 = GReflectionCapturesWithLegacyBuildData.AnnotationMap._8_4_ -
                         GReflectionCapturesWithLegacyBuildData.AnnotationMap._52_4_;
                if (GReflectionCapturesWithLegacyBuildData.AnnotationMap._8_4_ ==
                    GReflectionCapturesWithLegacyBuildData.AnnotationMap._52_4_) {
LAB_147eca429:
                  ReleaseSRWLockExclusive
                            ((PSRWLOCK)&GReflectionCapturesWithLegacyBuildData.AnnotationMapCritical
                            );
                }
                else {
                  lVar37 = 0x154c57eb0;
                  if (GReflectionCapturesWithLegacyBuildData.AnnotationMap._64_8_ != 0) {
                    lVar37 = GReflectionCapturesWithLegacyBuildData.AnnotationMap._64_8_;
                  }
                  for (iVar39 = *(int *)(lVar37 + (ulonglong)
                                                  (GReflectionCapturesWithLegacyBuildData.
                                                   AnnotationMap._72_4_ - 1 &
                                                  (uVar33 >> 0x10 ^ uVar33)) * 4); iVar39 != -1;
                      iVar39 = *(int *)(GReflectionCapturesWithLegacyBuildData.AnnotationMap._0_8_ +
                                        0x20 + (longlong)iVar39 * 0x28)) {
                    if (*(UObjectBase **)
                         (GReflectionCapturesWithLegacyBuildData.AnnotationMap._0_8_ +
                         (longlong)iVar39 * 0x28) == pUVar41) {
                      if (iVar39 != -1) {
                        puVar7 = (undefined8 *)
                                 (GReflectionCapturesWithLegacyBuildData.AnnotationMap._0_8_ + 8 +
                                 (longlong)iVar39 * 0x28);
                        local_2e8._0_8_ = *puVar7;
                        local_2e8._8_8_ = puVar7[1];
                        puVar4 = (undefined4 *)
                                 (GReflectionCapturesWithLegacyBuildData.AnnotationMap._0_8_ + 0x18
                                 + (longlong)iVar39 * 0x28);
                        local_2d8 = *puVar4;
                        uStack_2d4 = puVar4[1];
                        TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
                        ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
                                         *)&GReflectionCapturesWithLegacyBuildData.AnnotationMap,
                                        iVar39);
                      }
                      break;
                    }
                  }
                  if ((iVar38 < 1) ||
                     (GReflectionCapturesWithLegacyBuildData.AnnotationMap._8_4_ !=
                      GReflectionCapturesWithLegacyBuildData.AnnotationMap._52_4_))
                  goto LAB_147eca429;
                  ReleaseSRWLockExclusive
                            ((PSRWLOCK)&GReflectionCapturesWithLegacyBuildData.AnnotationMapCritical
                            );
                  FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::
                  ProcessRegistration(&GReflectionCapturesWithLegacyBuildData);
                }
                if (((local_2e8.D != 0 || local_2e8.C != 0) || local_2e8.B != 0) || local_2e8.A != 0
                   ) {
                  if (pUVar31 == (UMapBuildDataRegistry *)0x0) {
                    pUVar31 = CreateRegistryForLegacyMap(pUVar18);
                  }
                  pFVar32 = UMapBuildDataRegistry::AllocateReflectionCaptureBuildData
                                      (pUVar31,&local_2e8,false);
                  puVar4 = (undefined4 *)CONCAT44(uStack_2d4,local_2d8);
                  *(undefined4 *)&pFVar32->_padding_ = *puVar4;
                  *(undefined4 *)((longlong)&pFVar32->_padding_ + 4) = puVar4[1];
                  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                             &pFVar32->_padding_,
                             (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 2));
                  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                             &pFVar32->_padding_,
                             (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar4 + 6));
                  *(undefined1 *)&pFVar32->_padding_ = *(undefined1 *)(puVar4 + 10);
                  pFVar32->AllocatedSize = *(ulong64 *)(puVar4 + 0xc);
                  pFVar32 = (FReflectionCaptureMapBuildData *)CONCAT44(uStack_2d4,local_2d8);
                  if (pFVar32 != (FReflectionCaptureMapBuildData *)0x0) {
                    FReflectionCaptureMapBuildData::~FReflectionCaptureMapBuildData(pFVar32);
                    ::operator_delete(pFVar32,0x38);
                  }
                }
              }
              uVar45 = (ulonglong)(uVar43 + 1);
              uVar34 = uVar34 + 8;
              uVar48 = local_338;
            } while ((int)(uVar43 + 1) < local_108);
          }
          this = local_330;
          if (local_1d0.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
            FMemory::Free((void *)local_1d0.SecondaryData);
            this = local_330;
          }
        }
        local_338 = uVar48 + 1;
        uVar34 = (ulonglong)local_338;
        uVar52 = uVar52 + 8;
      } while ((int)local_338 < (this->Actors).ArrayNum);
    }
  }
  return;
}

