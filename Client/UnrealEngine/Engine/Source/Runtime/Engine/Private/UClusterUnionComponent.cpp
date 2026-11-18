// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 95

// StaticClass @ 14822c250

UClass * __cdecl UClusterUnionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClusterUnionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ClusterUnionComponent",
               &Z_Registration_Info_UClass_UClusterUnionComponent.InnerSingleton,
               StaticRegisterNativesUClusterUnionComponent,2000,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UClusterUnionComponent>,
               InternalVTableHelperCtorCaller<UClusterUnionComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClusterUnionComponent.InnerSingleton;
}

// GetBoneIDsFromComponentData<TArray<int,TSizedDefaultAllocator<32>_>,FClusteredComponentData> @ 148240010

void __thiscall
UClusterUnionComponent::
GetBoneIDsFromComponentData<TArray<int,TSizedDefaultAllocator<32>_>,FClusteredComponentData>
          (UClusterUnionComponent *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FClusteredComponentData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar3 = (param_2->BonesData).ArrayNum;
  if (-1 < (int)uVar3) {
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    pFVar10 = (param_2->BonesData).AllocatorInstance.Data;
    iVar4 = (param_2->BonesData).ArrayNum;
    pFVar2 = pFVar10 + (longlong)iVar4 * 8;
    while( true ) {
      if ((param_2->BonesData).ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FClusterUnionBoneData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar10 == pFVar2) break;
      pFVar6 = (param_1->AllocatorInstance).Data;
      if ((pFVar6 <= pFVar10) && (pFVar10 < pFVar6 + (longlong)*piVar1 * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      uVar5 = *(undefined4 *)pFVar10;
      pFVar10 = pFVar10 + 8;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) = uVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// UClusterUnionComponent @ 1482512b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClusterUnionComponent * __thiscall
UClusterUnionComponent::UClusterUnionComponent(UClusterUnionComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->OnComponentAddedEvent = 0;
  *(undefined8 *)&(this->OnComponentAddedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentAddedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentRemovedEvent = 0;
  *(undefined8 *)&(this->OnComponentRemovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentRemovedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentBoundsChangedEvent = 0;
  *(undefined8 *)&(this->OnComponentBoundsChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentBoundsChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentAddedNativeEvent = 0;
  *(undefined8 *)&(this->OnComponentAddedNativeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentAddedNativeEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentRemovedNativeEvent = 0;
  *(undefined8 *)&(this->OnComponentRemovedNativeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentRemovedNativeEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnClusterUnionPostSyncBodiesEvent = 0;
  *(undefined8 *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x10 = 0;
  *(undefined8 *)&this->PerComponentData = 0;
  *(undefined8 *)&(this->PerComponentData).field_0x8 = 0;
  *(undefined8 *)&(this->PerComponentData).field_0x20 = 0;
  *(undefined8 *)&(this->OnComponentAddedNativeEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnComponentRemovedNativeEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x18 = 2;
  *(undefined4 *)&(this->PerComponentData).field_0x28 = 0;
  *(undefined4 *)&(this->PerComponentData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerComponentData).field_0x34 = 0;
  *(undefined4 *)&(this->PerComponentData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerComponentData).field_0x40 = 0;
  *(undefined4 *)&(this->PerComponentData).field_0x48 = 0;
  (this->ClusteredComponentsReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusteredComponentsReferences).ArrayNum = 0;
  (this->ClusteredComponentsReferences).ArrayMax = 0;
  *(undefined8 *)&this->ActorToComponents = 0;
  *(undefined8 *)&(this->ActorToComponents).field_0x8 = 0;
  *(undefined8 *)&(this->ActorToComponents).field_0x20 = 0;
  *(undefined4 *)&(this->ActorToComponents).field_0x28 = 0;
  *(undefined4 *)&(this->ActorToComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorToComponents).field_0x34 = 0;
  *(undefined4 *)&(this->ActorToComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActorToComponents).field_0x40 = 0;
  *(undefined4 *)&(this->ActorToComponents).field_0x48 = 0;
  *(undefined8 *)&this->PendingComponentsToAdd = 0;
  *(undefined8 *)&(this->PendingComponentsToAdd).field_0x8 = 0;
  *(undefined8 *)&(this->PendingComponentsToAdd).field_0x20 = 0;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x28 = 0;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x34 = 0;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingComponentsToAdd).field_0x40 = 0;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x48 = 0;
  *(undefined8 *)&this->PendingComponentSync = 0;
  *(undefined8 *)&(this->PendingComponentSync).field_0x8 = 0;
  *(undefined8 *)&(this->PendingComponentSync).field_0x20 = 0;
  *(undefined4 *)&(this->PendingComponentSync).field_0x28 = 0;
  *(undefined4 *)&(this->PendingComponentSync).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingComponentSync).field_0x34 = 0;
  *(undefined4 *)&(this->PendingComponentSync).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingComponentSync).field_0x40 = 0;
  *(undefined4 *)&(this->PendingComponentSync).field_0x48 = 0;
  (this->PerShapeComponentBone).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerShapeComponentBone).ArrayNum = 0;
  (this->PerShapeComponentBone).ArrayMax = 0;
  (this->PhysicsUserData).Type = Invalid;
  (this->PhysicsUserData).Payload = (void *)0x0;
  (this->AccelerationStructure).Ptr =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0;
  (this->ReplicatedRigidState).ObjectState = '\0';
  (this->ReplicatedRigidState).bIsAnchored = true;
  return this;
}

// UClusterUnionComponent @ 148251500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClusterUnionComponent * __thiscall
UClusterUnionComponent::UClusterUnionComponent
          (UClusterUnionComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->OnComponentAddedEvent = 0;
  *(undefined8 *)&(this->OnComponentAddedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentAddedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentRemovedEvent = 0;
  *(undefined8 *)&(this->OnComponentRemovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentRemovedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentBoundsChangedEvent = 0;
  *(undefined8 *)&(this->OnComponentBoundsChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentBoundsChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentAddedNativeEvent = 0;
  *(undefined8 *)&(this->OnComponentAddedNativeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentAddedNativeEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentRemovedNativeEvent = 0;
  *(undefined8 *)&(this->OnComponentRemovedNativeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnComponentRemovedNativeEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnClusterUnionPostSyncBodiesEvent = 0;
  *(undefined8 *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x10 = 0;
  *(undefined8 *)&this->PerComponentData = 0;
  *(undefined8 *)&(this->PerComponentData).field_0x8 = 0;
  *(undefined8 *)&(this->PerComponentData).field_0x20 = 0;
  *(undefined8 *)&(this->OnComponentAddedNativeEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnComponentRemovedNativeEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x18 = 2;
  *(undefined4 *)&(this->PerComponentData).field_0x28 = 0;
  *(undefined4 *)&(this->PerComponentData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerComponentData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerComponentData).field_0x34 = 0;
  *(undefined8 *)&(this->PerComponentData).field_0x40 = 0;
  *(undefined4 *)&(this->PerComponentData).field_0x48 = 0;
  (this->ClusteredComponentsReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusteredComponentsReferences).ArrayNum = 0;
  (this->ClusteredComponentsReferences).ArrayMax = 0;
  *(undefined8 *)&this->ActorToComponents = 0;
  *(undefined8 *)&(this->ActorToComponents).field_0x8 = 0;
  *(undefined8 *)&(this->ActorToComponents).field_0x20 = 0;
  *(undefined4 *)&(this->ActorToComponents).field_0x28 = 0;
  *(undefined4 *)&(this->ActorToComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorToComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorToComponents).field_0x34 = 0;
  *(undefined8 *)&(this->ActorToComponents).field_0x40 = 0;
  *(undefined4 *)&(this->ActorToComponents).field_0x48 = 0;
  *(undefined8 *)&this->PendingComponentsToAdd = 0;
  *(undefined8 *)&(this->PendingComponentsToAdd).field_0x8 = 0;
  *(undefined8 *)&(this->PendingComponentsToAdd).field_0x20 = 0;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x28 = 0;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x34 = 0;
  *(undefined8 *)&(this->PendingComponentsToAdd).field_0x40 = 0;
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x48 = 0;
  *(undefined8 *)&this->PendingComponentSync = 0;
  *(undefined8 *)&(this->PendingComponentSync).field_0x8 = 0;
  *(undefined8 *)&(this->PendingComponentSync).field_0x20 = 0;
  *(undefined4 *)&(this->PendingComponentSync).field_0x28 = 0;
  *(undefined4 *)&(this->PendingComponentSync).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingComponentSync).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingComponentSync).field_0x34 = 0;
  *(undefined8 *)&(this->PendingComponentSync).field_0x40 = 0;
  *(undefined4 *)&(this->PendingComponentSync).field_0x48 = 0;
  (this->PerShapeComponentBone).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerShapeComponentBone).ArrayNum = 0;
  (this->PerShapeComponentBone).ArrayMax = 0;
  (this->ReplicatedRigidState).ObjectState = '\0';
  (this->ReplicatedRigidState).bIsAnchored = true;
  (this->PhysicsUserData).Type = Invalid;
  (this->PhysicsUserData).Payload = (void *)0x0;
  (this->AccelerationStructure).Ptr =
       (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0;
  this->PhysicsProxy = (FClusterUnionPhysicsProxy *)0x0;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  this->field_0x1a9 = this->field_0x1a9 & 0x7f;
  this->bHasCachedLocalBounds = false;
  this->GravityGroupIndexOverride = -1;
  this->bEnableDamageFromCollision = true;
  return this;
}

// ~UClusterUnionComponent @ 148253650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UClusterUnionComponent::~UClusterUnionComponent(UClusterUnionComponent *this)

{
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pIVar1 = (this->AccelerationStructure).Ptr;
  if (pIVar1 != (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  pFVar2 = (this->PerShapeComponentBone).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PendingComponentSync).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PendingComponentSync).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingComponentSync);
  *(undefined4 *)&(this->PendingComponentsToAdd).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PendingComponentsToAdd).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingComponentsToAdd);
  *(undefined4 *)&(this->ActorToComponents).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ActorToComponents).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FClusteredActorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FClusteredActorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FClusteredActorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActorToComponents);
  DestructItems<FComponentReference,int>
            ((FComponentReference *)(this->ClusteredComponentsReferences).AllocatorInstance.Data,
             (this->ClusteredComponentsReferences).ArrayNum);
  pFVar2 = (this->ClusteredComponentsReferences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PerComponentData).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerComponentData).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerComponentData);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClusterUnionPostSyncBodiesEvent).field_0x8,
             *(int *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClusterUnionPostSyncBodiesEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnComponentRemovedNativeEvent).field_0x8,
             *(int *)&(this->OnComponentRemovedNativeEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnComponentRemovedNativeEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComponentRemovedNativeEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnComponentAddedNativeEvent).field_0x8,
             *(int *)&(this->OnComponentAddedNativeEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnComponentAddedNativeEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComponentAddedNativeEvent);
  pvVar3 = *(void **)&(this->OnComponentBoundsChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComponentBoundsChangedEvent);
  pvVar3 = *(void **)&(this->OnComponentRemovedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComponentRemovedEvent);
  pvVar3 = *(void **)&(this->OnComponentAddedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComponentAddedEvent);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// operator() @ 148255120

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
`UClusterUnionComponent::GetAllCurrentActors'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  AActor *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(AActor **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 1482551d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`UClusterUnionComponent::GetAllCurrentChildComponents'::__l2::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPrimitiveComponent *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(UPrimitiveComponent **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 148255660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`UClusterUnionComponent::LineTraceComponent'::__l2::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  FHitResult local_108;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  memset(&local_108,0,0x100);
  local_108.Time = 1.0;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_108.MyItem = -1;
  local_108.HitObjectHandle.InstanceIndex = -1;
  local_108.HitObjectHandle.ResolutionStatus = Invalid;
  local_108.HitObjectHandle._29_3_ = 0;
  local_108.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_148 = *puVar2;
  uStack_140 = puVar2[1];
  local_138 = puVar2[2];
  puVar3 = *(undefined4 **)this;
  local_128 = *puVar3;
  uStack_124 = puVar3[1];
  uStack_120 = puVar3[2];
  uStack_11c = puVar3[3];
  local_118 = *(undefined8 *)(puVar3 + 4);
  cVar6 = (**(code **)(*(longlong *)param_1 + 0xa28))
                    (param_1,&local_108,&local_128,&local_148,
                     CONCAT44(uVar10,*(undefined4 *)((longlong)this + 0x10)),
                     *(undefined8 *)((longlong)this + 0x18),*(undefined8 *)((longlong)this + 0x20),
                     *(undefined8 *)((longlong)this + 0x28));
  if (cVar6 != '\0') {
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x30);
    if (((FHitResult *)pFVar4->Data <= &local_108) &&
       (&local_108 < (FHitResult *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    iVar9 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,8,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar9 + 1;
    FHitResult::FHitResult((FHitResult *)(pFVar4->Data + (longlong)iVar9 * 0x100),&local_108);
  }
  return true;
}

// operator() @ 148255830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`UClusterUnionComponent::LineTraceComponent'::__l2::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 auStack_188 [4];
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_108 [4];
  undefined4 uStack_104;
  float fStack_100;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  memset(local_108,0,0x100);
  uStack_104 = 0x3f800000;
  uStack_12b = 0;
  uStack_129 = 0;
  uStack_12c = 0;
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_50 = 0;
  uStack_48 = 0;
  local_64 = 0xffffffff;
  uStack_130 = 0xffffffff;
  uStack_38 = 0xffffffff;
  local_40 = 0;
  local_128 = *puVar1;
  uStack_120 = puVar1[1];
  local_118 = puVar1[2];
  puVar2 = *(undefined4 **)this;
  local_148 = *puVar2;
  uStack_144 = puVar2[1];
  uStack_140 = puVar2[2];
  uStack_13c = puVar2[3];
  local_138 = *(undefined8 *)(puVar2 + 4);
  local_150 = *(undefined8 *)((longlong)this + 0x28);
  local_158 = *(undefined8 *)((longlong)this + 0x20);
  local_160 = *(undefined8 *)((longlong)this + 0x18);
  local_168 = *(undefined4 *)((longlong)this + 0x10);
  cVar4 = (**(code **)(*(longlong *)param_1 + 0xa28))(param_1,local_108,&local_148,&local_128);
  if ((cVar4 != '\0') && (fStack_100 < *(float *)(*(longlong *)((longlong)this + 0x38) + 8))) {
    lVar6 = 2;
    **(undefined1 **)((longlong)this + 0x30) = 1;
    puVar5 = *(undefined8 **)((longlong)this + 0x38);
    puVar1 = auStack_188;
    do {
      uVar3 = puVar1[0x11];
      *puVar5 = puVar1[0x10];
      puVar5[1] = uVar3;
      uVar3 = puVar1[0x13];
      puVar5[2] = puVar1[0x12];
      puVar5[3] = uVar3;
      uVar3 = puVar1[0x15];
      puVar5[4] = puVar1[0x14];
      puVar5[5] = uVar3;
      uVar3 = puVar1[0x17];
      puVar5[6] = puVar1[0x16];
      puVar5[7] = uVar3;
      uVar3 = puVar1[0x19];
      puVar5[8] = puVar1[0x18];
      puVar5[9] = uVar3;
      uVar3 = puVar1[0x1b];
      puVar5[10] = puVar1[0x1a];
      puVar5[0xb] = uVar3;
      uVar3 = puVar1[0x1d];
      puVar5[0xc] = puVar1[0x1c];
      puVar5[0xd] = uVar3;
      uVar3 = puVar1[0x1f];
      puVar5[0xe] = puVar1[0x1e];
      puVar5[0xf] = uVar3;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 0x10;
      puVar1 = puVar1 + 0x10;
    } while (lVar6 != 0);
  }
  return true;
}

// operator() @ 1482559b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`UClusterUnionComponent::OverlapComponentWithResult'::__l2::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  double *pdVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pdVar1 = *(double **)this;
  dVar12 = pdVar1[1] - *(double *)&param_1->field_0x118;
  dVar11 = *pdVar1 - *(double *)&param_1->field_0x110;
  dVar9 = pdVar1[2] - *(double *)&param_1->field_0x120;
  dVar10 = pdVar1[6] + *(double *)&param_1->field_0x140 + __real_3f1a36e2e0000000;
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  if (dVar12 * dVar12 + dVar11 * dVar11 + dVar9 * dVar9 <= dVar10 * dVar10) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    cVar5 = (**(code **)(*(longlong *)param_1 + 0xa68))
                      (param_1,*(undefined8 *)((longlong)this + 0x10),
                       *(undefined8 *)((longlong)this + 0x18),*(undefined8 *)((longlong)this + 8),
                       *(undefined4 *)((longlong)this + 0x20),*(undefined8 *)((longlong)this + 0x28)
                       ,*(undefined8 *)((longlong)this + 0x30),
                       *(undefined8 *)((longlong)this + 0x38),&local_18);
    if (cVar5 != '\0') {
      **(undefined1 **)((longlong)this + 0x40) = 1;
      pFVar2 = *(ForAnyElementType **)((longlong)this + 0x48);
      if ((pFVar2 == &local_18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar4 = (int)local_10;
      if ((int)local_10 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x48,8,(int)local_10,pFVar2,(int *)(pFVar2 + 1),
                           (int *)((longlong)&pFVar2[1].Data + 4));
        ConstructItems<FOverlapResult,FOverlapResult,int>
                  (pFVar2->Data + (longlong)iVar8 * 0x48,(FOverlapResult *)local_18.Data,iVar4);
      }
    }
    if ((FOverlapResult *)local_18.Data != (FOverlapResult *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return true;
}

// operator() @ 148256000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`UClusterUnionComponent::SweepComponent'::__l2::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  FHitResult local_108;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  memset(&local_108,0,0x100);
  local_108.Time = 1.0;
  puVar2 = *(undefined8 **)((longlong)this + 0x10);
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_108.MyItem = -1;
  local_108.HitObjectHandle.InstanceIndex = -1;
  local_108.HitObjectHandle.ResolutionStatus = Invalid;
  local_108.HitObjectHandle._29_3_ = 0;
  local_108.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_148 = *puVar2;
  uStack_140 = puVar2[1];
  local_138 = puVar2[2];
  puVar3 = *(undefined4 **)((longlong)this + 8);
  local_128 = *puVar3;
  uStack_124 = puVar3[1];
  uStack_120 = puVar3[2];
  uStack_11c = puVar3[3];
  local_118 = *(undefined8 *)(puVar3 + 4);
  cVar6 = (**(code **)(*(longlong *)param_1 + 0xa38))
                    (param_1,&local_108,&local_128,&local_148,*(undefined8 *)((longlong)this + 0x18)
                     ,*(undefined8 *)this,CONCAT44(uVar10,*(undefined4 *)((longlong)this + 0x20)),
                     *(undefined8 *)((longlong)this + 0x28),*(undefined8 *)((longlong)this + 0x30),
                     *(undefined8 *)((longlong)this + 0x38),0,0);
  if (cVar6 != '\0') {
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x40);
    if (((FHitResult *)pFVar4->Data <= &local_108) &&
       (&local_108 < (FHitResult *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    iVar9 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,8,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar9 + 1;
    FHitResult::FHitResult((FHitResult *)(pFVar4->Data + (longlong)iVar9 * 0x100),&local_108);
  }
  return true;
}

// operator() @ 1482561f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`UClusterUnionComponent::SweepComponent'::__l2::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  float fStack_100;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  memset(&local_108,0,0x100);
  local_108._4_4_ = 0x3f800000;
  uStack_12b = 0;
  uStack_129 = 0;
  uStack_12c = 0;
  puVar4 = *(undefined8 **)((longlong)this + 0x10);
  local_50 = 0;
  uStack_48 = 0;
  local_64 = 0xffffffff;
  uStack_130 = 0xffffffff;
  uStack_38 = 0xffffffff;
  local_40 = 0;
  local_128 = *puVar4;
  uStack_120 = puVar4[1];
  local_118 = puVar4[2];
  puVar1 = *(undefined4 **)((longlong)this + 8);
  local_148 = *puVar1;
  uStack_144 = puVar1[1];
  uStack_140 = puVar1[2];
  uStack_13c = puVar1[3];
  local_138 = *(undefined8 *)(puVar1 + 4);
  cVar3 = (**(code **)(*(longlong *)param_1 + 0xa38))
                    (param_1,&local_108,&local_148,&local_128,*(undefined8 *)((longlong)this + 0x18)
                     ,*(undefined8 *)this,*(undefined4 *)((longlong)this + 0x20),
                     *(undefined8 *)((longlong)this + 0x28),*(undefined8 *)((longlong)this + 0x30),
                     *(undefined8 *)((longlong)this + 0x38));
  if ((cVar3 != '\0') && (fStack_100 < *(float *)(*(longlong *)((longlong)this + 0x48) + 8))) {
    lVar6 = 2;
    **(undefined1 **)((longlong)this + 0x40) = 1;
    puVar4 = *(undefined8 **)((longlong)this + 0x48);
    puVar5 = &local_108;
    do {
      uVar2 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar2;
      uVar2 = puVar5[3];
      puVar4[2] = puVar5[2];
      puVar4[3] = uVar2;
      uVar2 = puVar5[5];
      puVar4[4] = puVar5[4];
      puVar4[5] = uVar2;
      uVar2 = puVar5[7];
      puVar4[6] = puVar5[6];
      puVar4[7] = uVar2;
      uVar2 = puVar5[9];
      puVar4[8] = puVar5[8];
      puVar4[9] = uVar2;
      uVar2 = puVar5[0xb];
      puVar4[10] = puVar5[10];
      puVar4[0xb] = uVar2;
      uVar2 = puVar5[0xd];
      puVar4[0xc] = puVar5[0xc];
      puVar4[0xd] = uVar2;
      uVar2 = puVar5[0xf];
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xf] = uVar2;
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 0x10;
      puVar5 = puVar5 + 0x10;
    } while (lVar6 != 0);
  }
  return true;
}

// operator() @ 148256390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`UClusterUnionComponent::VisitAllCurrentChildComponentsForCollision'::__l2::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    plVar2 = *(longlong **)((longlong)this + 0x10);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar4 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar4 = plVar2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      (ulonglong)((int)plVar2[9] - 1U & *(uint *)&param_1->field_0xc) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*plVar2 + (longlong)iVar3 * 0xc) == *(uint *)&param_1->field_0xc) {
            return true;
          }
          iVar3 = *(int *)(*plVar2 + 4 + (longlong)iVar3 * 0xc);
        } while (iVar3 != -1);
      }
    }
    if (*(longlong *)&param_1->field_0xa8 != 0) {
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar1 = *(uint *)(*(longlong *)&param_1->field_0xa8 + 0xc);
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        plVar4 = (longlong *)plVar2[8];
        if ((longlong *)plVar2[8] == (longlong *)0x0) {
          plVar4 = plVar2 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar2[9] - 1U & uVar1) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*plVar2 + (longlong)iVar3 * 0xc) == uVar1) {
              return true;
            }
            iVar3 = *(int *)(*plVar2 + 4 + (longlong)iVar3 * 0xc);
          } while (iVar3 != -1);
        }
      }
    }
    iVar3 = (**(code **)(*(longlong *)param_1 + 0x5e8))(param_1,*(undefined4 *)this);
    if (iVar3 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(UPrimitiveComponent_*)>
      ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(UPrimitiveComponent_*)>
                     **)((longlong)this + 0x18),param_1);
    }
  }
  return true;
}

// operator() @ 1482591b0

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
`UClusterUnionComponent::ComponentOverlapComponentWithResultImpl'::__l8::<lambda_2>::operator()
          (void *this,FPhysicsObject *param_1,FShapeInstanceProxy *param_2)

{
  longlong *plVar1;
  byte bVar2;
  FImplicitObject *pFVar3;
  FCollisionQueryParams *pFVar4;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *pTVar5;
  TQuat<double> *pTVar6;
  TVector<double> *pTVar7;
  longlong lVar8;
  ECollisionChannel EVar9;
  bool bVar10;
  UWorld *pUVar11;
  
  if (param_2 != (FShapeInstanceProxy *)0x0) {
    pFVar3 = (FImplicitObject *)param_2->_padding_;
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      EVar9 = DefaultCollisionChannel;
      UNLOCK();
      pFVar4 = *(FCollisionQueryParams **)((longlong)this + 0x28);
      pTVar5 = *(TArray<FOverlapResult,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20);
      pTVar6 = *(TQuat<double> **)((longlong)this + 0x18);
      pTVar7 = *(TVector<double> **)((longlong)this + 0x10);
      bVar2 = **(byte **)((longlong)this + 8);
      pUVar11 = (*(UActorComponent **)this)->WorldPrivate;
      if (pUVar11 == (UWorld *)0x0) {
        pUVar11 = UActorComponent::GetWorld_Uncached(*(UActorComponent **)this);
      }
      bVar10 = FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
               ::GeomOverlapMulti(*(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>
                                    **)(*(longlong *)this + 0x7c0),pUVar11,pFVar3,pTVar7,pTVar6,
                                  pTVar5,EVar9,pFVar4,
                                  &FCollisionResponseParams::DefaultResponseParam,
                                  &FCollisionObjectQueryParams::DefaultObjectQueryParam);
      **(byte **)((longlong)this + 8) = bVar10 | bVar2;
      LOCK();
      plVar1 = &pFVar3->_padding_;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    return true;
  }
  return true;
}

// operator() @ 14825a340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`UClusterUnionComponent::ComponentOverlapComponentWithResultImpl'::__l2::<lambda_3>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  double *pdVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pdVar1 = *(double **)this;
  dVar12 = pdVar1[1] - *(double *)&param_1->field_0x118;
  dVar11 = *pdVar1 - *(double *)&param_1->field_0x110;
  dVar9 = pdVar1[2] - *(double *)&param_1->field_0x120;
  dVar10 = pdVar1[6] + *(double *)&param_1->field_0x140 + __real_3f1a36e2e0000000;
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  if (dVar12 * dVar12 + dVar11 * dVar11 + dVar9 * dVar9 <= dVar10 * dVar10) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    cVar5 = (**(code **)(*(longlong *)param_1 + 0xa50))
                      (param_1,*(undefined8 *)((longlong)this + 8),
                       *(undefined8 *)((longlong)this + 0x10),*(undefined8 *)((longlong)this + 0x18)
                       ,*(undefined8 *)((longlong)this + 0x20),&local_18);
    if (cVar5 != '\0') {
      **(undefined1 **)((longlong)this + 0x28) = 1;
      pFVar2 = *(ForAnyElementType **)((longlong)this + 0x30);
      if ((pFVar2 == &local_18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar4 = (int)local_10;
      if ((int)local_10 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x48,8,(int)local_10,pFVar2,(int *)(pFVar2 + 1),
                           (int *)((longlong)&pFVar2[1].Data + 4));
        ConstructItems<FOverlapResult,FOverlapResult,int>
                  (pFVar2->Data + (longlong)iVar8 * 0x48,(FOverlapResult *)local_18.Data,iVar4);
      }
    }
    if ((FOverlapResult *)local_18.Data != (FOverlapResult *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return true;
}

// AddComponentToCluster @ 1482612b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::AddComponentToCluster
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  TMap<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  FPhysicsObject *pFVar2;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *pIVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  FPhysicsObject **_Src;
  UPrimitiveComponent *pUVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_AddComponentToCluster> FVar18;
  UWorld *pUVar19;
  FName FVar20;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> *pTVar21;
  TPBDRigidParticle<double,3> *pTVar22;
  ulong64 uVar23;
  ulonglong uVar24;
  TTransform<double> *pTVar25;
  char *pcVar26;
  char *pcVar27;
  ForElementType<unsigned_int> FVar28;
  ForAnyElementType FVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  FName FVar33;
  uint uVar34;
  FScriptContainerElement *pFVar35;
  ForAnyElementType FVar36;
  uint uVar37;
  uint *puVar38;
  int iVar39;
  undefined1 auStackY_528 [32];
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_4c0;
  undefined1 local_4b0;
  undefined1 local_4af;
  char local_4ae;
  char local_4ad;
  ForAnyElementType local_4a8;
  undefined8 local_4a0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_498;
  undefined1 local_488 [8];
  FName local_480;
  FName local_478;
  undefined8 local_470;
  FColor_u_0 local_468;
  int local_464;
  uint local_460;
  UClusterUnionComponent *local_458;
  TArray<int,TSizedDefaultAllocator<32>_> local_450;
  int local_440;
  uint uStack_43c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_438;
  undefined4 local_430;
  int iStack_42c;
  int iStack_428;
  undefined4 uStack_424;
  FName local_420;
  undefined4 local_418;
  undefined4 local_414;
  int local_410;
  int iStack_40c;
  FName local_408;
  FPhysicsObject **local_400;
  uint local_3f8;
  FName *local_3e8;
  undefined1 *puStack_3e0;
  FPhysicsObject **local_3d8;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  FName local_3c8;
  TPBDRigidParticle<double,3> *local_3b8;
  FPhysicsObject *local_3b0;
  FScriptContainerElement *local_3a8;
  FPhysicsObject *local_3a0;
  UPrimitiveComponent *local_398;
  UPrimitiveComponent *local_390;
  undefined1 local_388 [8];
  undefined4 local_380;
  FName local_378;
  undefined4 local_370;
  FName local_368;
  int local_360;
  int local_35c;
  int local_358;
  undefined1 local_354 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_340;
  FLockedPhysicsObjectExternalInterface<1> local_320;
  FPhysicsObject **local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  FSparseArrayAllocationInfo local_2e8;
  FName *local_2d8;
  undefined1 *local_2d0;
  FPhysicsObject **local_2c8;
  uint uStack_2c0;
  FName local_2b8 [2];
  code *local_2a8;
  ulonglong uStack_2a0;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_298;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_288;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_278;
  code *local_268;
  longlong lStack_260;
  char local_258 [16];
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_248;
  TVector<double>_u_0 local_238;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  char local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_1d0;
  undefined1 local_1b8 [32];
  ForElementType<unsigned_int> local_198;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  undefined1 local_180 [8];
  ForAnyElementType local_178;
  uint local_170;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_528;
  FVar18 = StatPtr_STAT_ClusterUnionComponent_AddComponentToCluster;
  local_4ad = param_3;
  local_458 = this;
  local_398 = param_1;
  if (StatPtr_STAT_ClusterUnionComponent_AddComponentToCluster ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_AddComponentToCluster>)0x0) {
    pFVar17 = ::FName::FName(local_2b8,"STAT_ClusterUnionComponent_AddComponentToCluster");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_AddComponentToCluster>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ClusterUnionComponent_AddComponentToCluster,*pFVar17,
                        L"UClusterUnionComponent::AddComponentToCluster","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar18;
  bVar6 = false;
  bVar7 = false;
  local_3c8.ComparisonIndex.Value = 0;
  local_3c8.Number = 0;
  bVar9 = false;
  bVar11 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_14826142b:
    bVar7 = bVar11;
    bVar6 = bVar9;
    bVar9 = false;
    local_408 = local_3c8;
    FVar33 = local_3c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_468.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_468._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_420.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_420.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_420,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x85);
        bVar6 = true;
        bVar7 = true;
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14826142b;
    local_480 = FVar33;
    local_408 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar9 = true;
  }
  if (((param_1 == (UPrimitiveComponent *)0x0) ||
      (this->PhysicsProxy == (FClusterUnionPhysicsProxy *)0x0)) ||
     ((*(longlong *)&param_1->field_0xb0 == 0 &&
      (pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
      pUVar19 == (UWorld *)0x0)))) goto LAB_148262543;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_480.ComparisonIndex.Value = 0;
  local_480.Number = 0;
  local_390 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_480,(FObjectPtr)&local_390);
  this_00 = &this->PendingComponentsToAdd;
  local_478 = local_480;
  local_1b8._0_8_ = (FScriptContainerElement *)0x0;
  local_1b8._8_8_ = 0;
  local_198 = (ForElementType<unsigned_int>)0x0;
  local_190 = 0;
  local_18c = 0x80;
  local_188 = -1;
  local_184 = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  cVar10 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
  if (cVar10 == '\0') {
    uVar12 = ::GetTypeHash((FObjectKey *)&local_478);
    iVar13 = TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TObjectKey<UPrimitiveComponent>_>
                       ((TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
                         *)this_00,uVar12,(TObjectKey<UPrimitiveComponent> *)&local_478);
    if (iVar13 == -1) {
      pFVar35 = (param_2->AllocatorInstance).Data;
      iVar13 = param_2->ArrayNum;
      pFVar1 = pFVar35 + (longlong)iVar13 * 4;
      while( true ) {
        if (param_2->ArrayNum != iVar13) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_488);
        }
        if (pFVar35 == pFVar1) break;
        local_418 = *(undefined4 *)pFVar35;
        local_414 = 0xffffffff;
        TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>::
        Emplace<FClusterUnionBoneData>
                  ((TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
                    *)local_1b8,(FClusterUnionBoneData *)local_388,(bool *)&local_418);
        pFVar35 = pFVar35 + 4;
      }
      local_3e8 = &local_478;
      puStack_3e0 = local_1b8;
      TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TObjectKey<UPrimitiveComponent>_const_&,FClusterUnionPendingAddData_const_&>_>
                ((TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<TObjectKey<UPrimitiveComponent>_const_&,FClusterUnionPendingAddData_const_&>
                  *)(local_388 + 4),(bool *)&local_3e8);
      FVar20 = UE::Delegates::Private::GetTrimmedMemberFunctionName(local_258);
      local_3e8 = (FName *)HandleComponentPhysicsStateChange;
      puStack_3e0 = (undefined1 *)((ulonglong)puStack_3e0 & 0xffffffff00000000);
      local_2a8 = HandleComponentPhysicsStateChange;
      uStack_2a0 = (ulonglong)puStack_3e0;
      TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
      ::__Internal_AddDynamic<UClusterUnionComponent>
                ((TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
                  *)&param_1->OnComponentPhysicsStateChanged,local_458,(pmf_37216b21 *)&local_2a8,
                 *(FName *)FVar20);
    }
  }
  else {
    TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
    ::Remove((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
              *)this_00,(TObjectKey<UPrimitiveComponent> *)&local_478);
    (**(code **)(*(longlong *)&param_1->field_0x260 + 0x20))(&param_1->field_0x260,&local_400);
    uStack_2c0 = local_3f8;
    local_2c8 = local_400;
    if (((int)local_3f8 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_248.DataPtr = local_2c8;
    FPhysicsObjectExternalInterface::LockWrite(&local_320,&local_248);
    _Src = local_400;
    uVar12 = param_2->ArrayNum;
    local_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c0.ArrayNum = 0;
    local_4c0.ArrayMax = 0;
    if (uVar12 == 0) {
      local_4c0.ArrayMax = 0;
      local_4c0.ArrayNum = local_3f8;
      if (local_3f8 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_3f8,0,&local_4c0.AllocatorInstance,local_3f8,&local_4c0.ArrayMax);
        memcpy(local_4c0.AllocatorInstance.Data,_Src,(longlong)(int)local_3f8 << 3);
      }
    }
    else {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar12,&local_4c0.AllocatorInstance,0,&local_4c0.ArrayMax);
      }
      pFVar35 = (param_2->AllocatorInstance).Data;
      iVar13 = param_2->ArrayNum;
      pFVar1 = pFVar35 + (longlong)iVar13 * 4;
      while( true ) {
        if (param_2->ArrayNum != iVar13) {
          local_4b0 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_4b0);
        }
        this = local_458;
        if (pFVar35 == pFVar1) break;
        local_470 = (**(code **)(*(longlong *)&param_1->field_0x260 + 0x10))
                              (&param_1->field_0x260,*(undefined4 *)pFVar35);
        if (((local_4c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_470) &&
            ((FScriptContainerElement *)&local_470 <
             local_4c0.AllocatorInstance.Data + (longlong)local_4c0.ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar14 = local_4c0.ArrayNum;
        if (local_4c0.ArrayNum == local_4c0.ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_4c0.AllocatorInstance,&local_4c0.ArrayMax);
        }
        pFVar35 = pFVar35 + 4;
        local_4c0.ArrayNum = iVar14 + 1;
        *(undefined8 *)(local_4c0.AllocatorInstance.Data + (longlong)iVar14 * 8) = local_470;
      }
    }
    if (param_2->ArrayNum == 0) {
      local_4a8.Data = (FScriptContainerElement *)0x0;
      local_4a0 = 0;
      pFVar1 = local_4c0.AllocatorInstance.Data + (longlong)local_4c0.ArrayNum * 8;
      for (FVar36.Data = local_4c0.AllocatorInstance.Data; FVar36.Data != pFVar1;
          FVar36.Data = FVar36.Data + 8) {
        local_354._4_8_ = *(undefined8 *)FVar36.Data;
        local_2f8 = (FPhysicsObject **)(local_354 + 4);
        uStack_2f0 = 1;
        local_298._12_4_ = uStack_2ec;
        local_298.ArrayNum = 1;
        local_298.DataPtr = local_2f8;
        bVar11 = Chaos::FReadPhysicsObjectInterface<0>::AreAllDisabled
                           ((FReadPhysicsObjectInterface<0> *)&local_320.Interface,&local_298);
        if (!bVar11) {
          if (((local_4a8.Data <= FVar36.Data) &&
              (FVar36.Data < local_4a8.Data + (longlong)local_4a0._4_4_ * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = (int)local_4a0;
          if ((int)local_4a0 == local_4a0._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_4a8,(int *)((longlong)&local_4a0 + 4));
          }
          local_4a0 = CONCAT44(local_4a0._4_4_,iVar13 + 1);
          *(undefined8 *)(local_4a8.Data + (longlong)iVar13 * 8) = *(undefined8 *)FVar36.Data;
        }
      }
      if (local_4c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c0.AllocatorInstance.Data);
      }
      local_4c0.AllocatorInstance.Data = local_4a8.Data;
      local_4c0._8_8_ = local_4a0;
      local_4a0 = 0;
      local_4a8.Data = (FScriptContainerElement *)0x0;
    }
    iVar13 = local_4c0.ArrayNum;
    if (local_4c0.ArrayNum == 0) {
      if (2 < (byte)LogClusterUnion._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClusterUnion);
      }
    }
    else {
      uVar12 = 1;
      if (3 < (uint)local_4c0.ArrayNum) {
        uVar31 = (ulonglong)(((uint)local_4c0.ArrayNum >> 1) + 7) * 2 + 1;
        lVar32 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        local_380 = (undefined4)lVar32;
        uVar12 = 1 << ((byte)lVar32 & 0x1f);
      }
      if (((local_4c0.ArrayNum < 1) || ((int)uVar12 <= (int)local_170)) &&
         ((int)local_170 <= (int)uVar12)) {
        TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
                        *)local_1b8);
        TSparseArray<TSparseSetElement<FClusterUnionBoneData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<FClusterUnionBoneData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_1b8,iVar13);
      }
      else {
        TSparseArray<TSparseSetElement<FClusterUnionBoneData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<FClusterUnionBoneData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_1b8,local_4c0.ArrayNum);
        local_170 = uVar12;
        TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>::
        Rehash((TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
                *)local_1b8);
      }
      local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_498.ArrayNum = 0;
      local_498.ArrayMax = 0;
      if (local_4c0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_4c0._8_8_ & 0xffffffff);
      }
      if (0 < local_4c0.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,local_4c0.ArrayNum,&local_498.AllocatorInstance,0,&local_498.ArrayMax);
      }
      local_168.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
      local_168.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x1f8;
      local_168.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x200;
      local_168.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x208;
      local_168.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x210;
      local_168.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x218;
      local_168.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x220;
      local_168.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0x228;
      local_168.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x230;
      local_168.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0x238;
      local_168.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x240;
      local_168.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0x248;
      pTVar21 = TArrayView<Chaos::FPhysicsObject_const_*_const,int>::
                TArrayView<Chaos::FPhysicsObject_const_*_const,int><TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_>_>
                          (&local_1d0,&local_4c0);
      local_288.DataPtr = pTVar21->DataPtr;
      local_288.ArrayNum = pTVar21->ArrayNum;
      local_288._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
      local_4ae = Chaos::FReadPhysicsObjectInterface<0>::AreAllDynamicOrSleeping
                            ((FReadPhysicsObjectInterface<0> *)&local_320.Interface,&local_288);
      uVar30 = (ulonglong)local_4c0.ArrayNum;
      local_460 = local_4c0.ArrayNum;
      local_3a8 = local_4c0.AllocatorInstance.Data + uVar30 * 8;
      uVar31 = uVar30;
      FVar36.Data = local_4c0.AllocatorInstance.Data;
      while( true ) {
        pFVar1 = local_3a8;
        if ((int)uVar31 != (int)uVar30) {
          local_4af = 0;
          `TCheckedPointerIterator<Chaos::FPhysicsObject_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_4af);
        }
        FVar33 = local_408;
        if (FVar36.Data == pFVar1) break;
        pFVar2 = *(FPhysicsObject **)FVar36.Data;
        local_3b0 = pFVar2;
        pTVar22 = Chaos::FReadPhysicsObjectInterface<0>::GetRigidParticle
                            ((FReadPhysicsObjectInterface<0> *)&local_320.Interface,pFVar2);
        local_3b8 = pTVar22;
        if ((pTVar22 != (TPBDRigidParticle<double,3> *)0x0) &&
           (iVar13 = Chaos::FPhysicsObjectInterface::GetId(pFVar2), iVar13 != -1)) {
          local_464 = *(int *)&pTVar22->field_0x58;
          local_410 = iVar13;
          iStack_40c = local_464;
          if (local_184 == 0) {
            iVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,4,1,(ForAnyElementType *)local_1b8,(int *)(local_1b8 + 8),
                                (int *)(local_1b8 + 0xc));
            iVar14 = local_190;
            if (local_190 == 0) {
              iVar39 = 0;
LAB_148261bd7:
              if (local_18c < local_190 + 1) {
                uVar12 = local_18c + 0x1fU >> 5;
                uVar34 = local_190 + 0x20U >> 5;
                if (uVar34 < 5) {
                  local_18c = 4;
                }
                else {
                  uVar31 = (ulonglong)uVar34;
                  if (uVar12 < 5) {
                    uVar12 = 0;
                  }
                  if (uVar12 == 0) {
                    uVar30 = 4;
                    if (4 < uVar31) {
                      uVar30 = uVar31;
                    }
                  }
                  else {
                    uVar30 = ((ulonglong)uVar34 * 3 >> 3) + 0x10 + uVar31;
                  }
                  uVar23 = FMemory::QuantizeSize(uVar30 * 4,0);
                  local_18c = (int)(uVar23 >> 2);
                  if (local_18c < (int)uVar34) {
                    local_18c = 0x7fffffff;
                  }
                }
                local_18c = local_18c << 5;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10),local_190);
              }
              local_190 = local_190 + 1;
              uVar34 = local_190 >> 0x1f & 0x1f;
              uVar12 = local_190 + uVar34;
              iVar16 = (uVar12 & 0x1f) - uVar34;
              if (iVar16 != 0) {
                FVar28 = (ForElementType<unsigned_int>)((longlong)local_1b8 + 0x10);
                if (local_198 != (ForElementType<unsigned_int>)0x0) {
                  FVar28 = local_198;
                }
                puVar38 = (uint *)((longlong)FVar28 + (longlong)((int)uVar12 >> 5) * 4);
                *puVar38 = *puVar38 & 0xffffffffU >> (0x20U - (char)iVar16 & 0x1f);
              }
            }
            else {
              iVar39 = (int)(local_190 + (local_190 >> 0x1f & 0x1fU)) >> 5;
              if (iVar39 != (int)((local_190 + -1 >> 0x1f & 0x1fU) + local_190 + -1) >> 5)
              goto LAB_148261bd7;
              local_190 = local_190 + 1;
            }
            FVar28 = (ForElementType<unsigned_int>)((longlong)local_1b8 + 0x10);
            if (local_198 != (ForElementType<unsigned_int>)0x0) {
              FVar28 = local_198;
            }
            puVar38 = (uint *)((longlong)FVar28 + (longlong)iVar39 * 4);
            *puVar38 = *puVar38 & ~(1 << ((byte)iVar14 & 0x1f));
            iVar14 = local_188;
          }
          else {
            local_184 = local_184 + -1;
            iVar14 = *(int *)(local_1b8._0_8_ + (longlong)local_188 * 0x10 + 4);
            iVar15 = local_188;
            if (local_184 != 0) {
              *(undefined4 *)(local_1b8._0_8_ + (longlong)iVar14 * 0x10) = 0xffffffff;
            }
          }
          local_188 = iVar14;
          puVar38 = (uint *)0x0;
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_1b8,&local_2e8,iVar15);
          if (local_2e8.Pointer != (uint *)0x0) {
            *(ulonglong *)local_2e8.Pointer = CONCAT44(iStack_40c,local_410);
            *(uint *)((longlong)local_2e8.Pointer + 8) = 0xffffffff;
            puVar38 = local_2e8.Pointer;
          }
          uVar12 = *puVar38;
          if ((local_1b8._8_4_ - local_184 != 1) && (local_1b8._8_4_ != local_184)) {
            FVar29.Data = (FScriptContainerElement *)local_180;
            if ((ForElementType<FSetElementId>)local_178.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar29.Data = local_178.Data;
            }
            for (iVar14 = *(int *)((longlong)FVar29.Data + (ulonglong)(local_170 - 1 & uVar12) * 4);
                iVar14 != -1; iVar14 = *(int *)(local_1b8._0_8_ + (longlong)iVar14 * 0x10 + 8)) {
              if (*(uint *)(local_1b8._0_8_ + (longlong)iVar14 * 0x10) == uVar12) {
                if (iVar14 != -1) {
                  *(undefined8 *)(local_1b8._0_8_ + (longlong)iVar14 * 0x10) =
                       *(undefined8 *)puVar38;
                  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_1b8,local_2e8.Index,1);
                  goto LAB_1482620df;
                }
                break;
              }
            }
          }
          uVar37 = local_1b8._8_4_ - local_184;
          uVar34 = 1;
          if (3 < uVar37) {
            uVar31 = (ulonglong)((uVar37 >> 1) + 7) * 2 + 1;
            lVar32 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            local_370 = (undefined4)lVar32;
            uVar34 = 1 << ((byte)lVar32 & 0x1f);
          }
          if (((int)uVar37 < 1) || ((int)uVar34 <= (int)local_170)) {
            uVar12 = local_170 - 1 & uVar12;
            puVar38[3] = uVar12;
            FVar29.Data = (FScriptContainerElement *)local_180;
            if ((ForElementType<FSetElementId>)local_178.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar29.Data = local_178.Data;
            }
            uVar31 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar12;
            puVar38[2] = *(uint *)((longlong)FVar29.Data + uVar31 * 4);
            *(int *)((longlong)FVar29.Data + uVar31 * 4) = local_2e8.Index;
          }
          else {
            local_170 = uVar34;
            if ((ForElementType<FSetElementId>)local_178.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,4)
              ;
            }
            if (uVar34 != 0) {
              uVar12 = uVar34;
              if (uVar34 < 2) {
                if ((ForElementType<FSetElementId>)local_178.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar12 = 0;
                  goto LAB_148261eb5;
                }
              }
              else {
LAB_148261eb5:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_178,0,uVar12,4);
              }
              if (0 < (int)uVar34) {
                uVar31 = 0;
                uVar30 = (ulonglong)uVar34;
                do {
                  FVar29.Data = (FScriptContainerElement *)local_180;
                  if ((ForElementType<FSetElementId>)local_178.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar29.Data = local_178.Data;
                  }
                  uVar24 = (longlong)(int)uVar34 - 1U & uVar31;
                  uVar31 = uVar31 + 1;
                  *(undefined4 *)((longlong)FVar29.Data + uVar24 * 4) = 0xffffffff;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
            }
            if (local_170 != 0) {
              pTStack_438 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
              local_440 = 0;
              uStack_43c = 1;
              iStack_42c = 0;
              iStack_428 = 0;
              if (local_190 != 0) {
                FVar28 = (ForElementType<unsigned_int>)((longlong)local_1b8 + 0x10);
                if (local_198 != (ForElementType<unsigned_int>)0x0) {
                  FVar28 = local_198;
                }
                uVar12 = *(uint *)FVar28;
                local_440 = 0;
                iStack_428 = 0;
                while (uVar12 == 0) {
                  iStack_428 = iStack_428 + 0x20;
                  lVar32 = (longlong)local_440;
                  local_440 = local_440 + 1;
                  if ((int)(local_190 + -1 + (local_190 + -1 >> 0x1f & 0x1fU)) >> 5 < local_440)
                  goto LAB_148261fe0;
                  uVar12 = ((uint *)((longlong)FVar28 + 4))[lVar32];
                }
                uStack_43c = -uVar12 & uVar12;
                uVar31 = (ulonglong)uStack_43c * 2 + 1;
                lVar32 = 0x3f;
                if (uVar31 != 0) {
                  for (; uVar31 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                  }
                }
                local_358 = (int)lVar32;
                iStack_42c = local_358 + -1 + iStack_428;
                if (local_190 < iStack_42c) {
LAB_148261fe0:
                  iStack_42c = local_190;
                }
              }
              local_430 = 0xffffffff;
              local_354._12_8_ = local_1b8;
              local_340._padding_ = CONCAT44(uStack_43c,local_440);
              local_340.CurrentBitIndex = iStack_42c;
              local_340.UnvisitedBitMask = 0xffffffff;
              local_340._28_4_ = uStack_424;
              local_340.BaseBitIndex = iStack_428;
              iVar14 = iStack_42c;
              local_340.Array = pTStack_438;
              if (iStack_42c < local_190) {
                do {
                  puVar38 = (uint *)((longlong)iVar14 * 0x10 + *(longlong *)local_354._12_8_);
                  uVar12 = local_170 - 1 & *puVar38;
                  puVar38[3] = uVar12;
                  FVar29.Data = (FScriptContainerElement *)local_180;
                  if ((ForElementType<FSetElementId>)local_178.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar29.Data = local_178.Data;
                  }
                  uVar31 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar12;
                  puVar38[2] = *(uint *)((longlong)FVar29.Data + uVar31 * 4);
                  *(int *)((longlong)FVar29.Data + uVar31 * 4) = iVar14;
                  local_340.UnvisitedBitMask =
                       local_340.UnvisitedBitMask & ~local_340._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_340);
                  iVar14 = local_340.CurrentBitIndex;
                } while (local_340.CurrentBitIndex < (local_340.Array)->NumBits);
              }
            }
          }
LAB_1482620df:
          this = local_458;
          if ((local_458->AccelerationStructure).Ptr !=
              (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
            ::`anonymous_namespace'::GetWorldBoundsForParticle
                      ((TBox<double> *)&local_238._s_0,local_3b8);
            local_368 = local_478;
            local_35c = local_464;
            local_360 = iVar13;
            if (local_464 == -1) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3065361942051815200>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                                  ,0xe0,"Handle.IsValid()");
              if (bVar11) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              pIVar3 = (this->AccelerationStructure).Ptr;
              local_200 = local_238._s_0.X;
              dStack_1f8 = local_238._s_0.Y;
              local_1f0 = local_238._s_0.Z;
              local_1e8 = local_220;
              uStack_1e4 = uStack_21c;
              uStack_1e0 = uStack_218;
              uStack_1dc = uStack_214;
              local_1d8 = local_210;
              (**(code **)(pIVar3->_padding_ + 0x80))
                        (pIVar3,&local_368,&local_200,local_208 != '\0');
            }
          }
          Chaos::FReadPhysicsObjectInterface<0>::GetTransform
                    ((FReadPhysicsObjectInterface<0> *)&local_320.Interface,&local_108,local_3b0);
          pTVar25 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_108,&local_a8,&local_168);
          if (((local_498.AllocatorInstance.Data <= pTVar25) &&
              (pTVar25 < (TTransform<double> *)
                         (local_498.AllocatorInstance.Data + (longlong)local_498.ArrayMax * 0x60)))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = local_498.ArrayNum;
          if (local_498.ArrayNum == local_498.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&local_498.AllocatorInstance,&local_498.ArrayMax);
          }
          local_498.ArrayNum = iVar13 + 1;
          dVar5 = (pTVar25->Rotation).XY.m128d_f64[1];
          lVar32 = (longlong)iVar13 * 0x60;
          *(double *)&local_498.AllocatorInstance.Data[lVar32].field_0x0 =
               (pTVar25->Rotation).XY.m128d_f64[0];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 8) = dVar5;
          dVar5 = (pTVar25->Rotation).ZW.m128d_f64[1];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x10) =
               (pTVar25->Rotation).ZW.m128d_f64[0];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x10 + 8) = dVar5;
          dVar5 = (pTVar25->Translation).XY.m128d_f64[1];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x20) =
               (pTVar25->Translation).XY.m128d_f64[0];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x20 + 8) = dVar5;
          dVar5 = (pTVar25->Translation).ZW.m128d_f64[1];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x30) =
               (pTVar25->Translation).ZW.m128d_f64[0];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x30 + 8) = dVar5;
          dVar5 = (pTVar25->Scale3D).XY.m128d_f64[1];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x40) =
               (pTVar25->Scale3D).XY.m128d_f64[0];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x40 + 8) = dVar5;
          dVar5 = (pTVar25->Scale3D).ZW.m128d_f64[1];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x50) =
               (pTVar25->Scale3D).ZW.m128d_f64[0];
          *(double *)(local_498.AllocatorInstance.Data + lVar32 + 0x50 + 8) = dVar5;
        }
        uVar31 = local_4c0._8_8_ & 0xffffffff;
        FVar36.Data = FVar36.Data + 8;
        uVar30 = (ulonglong)local_460;
      }
      if (local_498.ArrayNum != 0) {
        if (((local_4ae == '\0') &&
            (*(int *)&(this->PendingComponentSync).field_0x8 ==
             *(int *)&(this->PendingComponentSync).field_0x34)) &&
           (*(int *)&(this->PerComponentData).field_0x8 ==
            *(int *)&(this->PerComponentData).field_0x34)) {
          uStack_3d0 = 1;
          local_3a0 = (this->PhysicsProxy->PhysicsObject).Ptr;
          local_3d8 = &local_3a0;
          local_278._12_4_ = uStack_3cc;
          local_278.ArrayNum = 1;
          local_278.DataPtr = local_3d8;
          Chaos::FWritePhysicsObjectInterface<0>::ForceKinematic(&local_320.Interface,&local_278);
        }
        pUVar8 = local_398;
        pcVar26 = strstr("&UClusterUnionComponent::HandleComponentPhysicsStateChangePostAddIntoClusterUnion"
                         ,"::");
        if (pcVar26 == (char *)0x0) {
LAB_14826239c:
          pcVar26 = &DAT_00000002;
LAB_1482623a2:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result && Result[2] != \'0\'",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                              ,0x1da,L"\'%hs\' does not look like a member function");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          do {
            pcVar27 = pcVar26;
            pcVar26 = strstr(pcVar27 + 1,"::");
          } while (pcVar26 != (char *)0x0);
          if (pcVar27 == (char *)0x0) goto LAB_14826239c;
          pcVar26 = pcVar27 + 2;
          if (pcVar27[2] == '0') goto LAB_1482623a2;
        }
        ::FName::FName(&local_378,pcVar26);
        local_3d8 = (FPhysicsObject **)HandleComponentPhysicsStateChangePostAddIntoClusterUnion;
        uStack_3d0 = 0;
        lStack_260 = (ulonglong)uStack_3cc << 0x20;
        local_268 = HandleComponentPhysicsStateChangePostAddIntoClusterUnion;
        TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
        ::__Internal_AddUniqueDynamic<UClusterUnionComponent>
                  ((TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
                    *)&pUVar8->OnComponentPhysicsStateChanged,this,(pmf_37216b21 *)&local_268,
                   local_378);
        if (local_4ad != '\0') {
          AddGTParticleGeometry(this,&local_4c0);
        }
        local_2d8 = &local_478;
        local_2d0 = local_1b8;
        TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TObjectKey<UPrimitiveComponent>_const_&,FClusterUnionPendingAddData_const_&>_>
                  ((TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
                    *)&this->PendingComponentSync,
                   (TPairInitializer<TObjectKey<UPrimitiveComponent>_const_&,FClusterUnionPendingAddData_const_&>
                    *)local_354,(bool *)&local_2d8);
        Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External(this->PhysicsProxy,&local_4c0);
        uVar12 = local_1b8._8_4_ - local_184;
        local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_450.ArrayNum = 0;
        local_450.ArrayMax = 0;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if (0 < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar12,&local_450.AllocatorInstance,0,&local_450.ArrayMax);
        }
        Algo::
        Transform<TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>,TArray<int,TSizedDefaultAllocator<32>_>_&,int_FClusterUnionBoneData::*>
                  ((TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
                    *)local_1b8,&local_450,(pdm_f08077e3)0x0);
        ForceSetChildToParent(this,pUVar8,&local_450,&local_498);
        if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_450.AllocatorInstance.Data);
        }
      }
      if ((TTransform<double> *)local_498.AllocatorInstance.Data != (TTransform<double> *)0x0) {
        FMemory::Free(local_498.AllocatorInstance.Data);
      }
    }
    if (local_4c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.AllocatorInstance.Data);
    }
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_320.Lock);
    if (local_400 != (FPhysicsObject **)0x0) {
      FMemory::Free(local_400);
    }
  }
  local_170 = 0;
  if ((ForElementType<FSetElementId>)local_178.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_178.Data);
  }
  TSparseArray<TSparseSetElement<FClusterUnionBoneData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FClusterUnionBoneData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FClusterUnionBoneData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1b8);
LAB_148262543:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  return;
}

// AddGTParticleGeometry @ 1482638f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UClusterUnionComponent::AddGTParticleGeometry
          (UClusterUnionComponent *this,
          TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FPhysicsObject *pFVar5;
  TPBDRigidParticle<double,3> *pTVar6;
  FImplicitObject *this_00;
  FClusterUnionPhysicsProxy *this_01;
  code *pcVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uchar uVar14;
  int iVar15;
  UWorld *pUVar16;
  FImplicitObjectUnionClustered *this_02;
  FImplicitObjectUnionClustered *this_03;
  FImplicitObjectUnion *this_04;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_248 [32];
  TRefCountPtr<Chaos::FImplicitObject> *local_228;
  FScriptContainerElement *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined1 local_1f8 [8];
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> local_1e0;
  TRefCountPtr<Chaos::FImplicitObject> local_1d0;
  TRefCountPtr<Chaos::FImplicitObject> local_1c8;
  TRefCountPtr<Chaos::FImplicitObject> local_1c0 [2];
  FLockedPhysicsObjectExternalInterface<1> local_1b0;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_248;
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    pUVar16 = *(UWorld **)&this->field_0xb0;
    if (pUVar16 == (UWorld *)0x0) {
      pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    FPhysicsObjectExternalInterface::LockWrite(&local_1b0,(FChaosScene *)pUVar16->PhysicsScene);
    dVar12 = _UNK_150689688;
    dVar11 = ___xmm_3ff00000000000003ff0000000000000;
    dVar10 = _UNK_150689518;
    dVar9 = ___xmm_00000000000000003ff0000000000000;
    local_188.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
    local_188.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x1f8;
    this_03 = (FImplicitObjectUnionClustered *)0x0;
    local_188.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x200;
    local_188.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x208;
    pFVar17 = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    local_188.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x210;
    local_188.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x218;
    pFVar3 = pFVar17 + (longlong)iVar4 * 8;
    local_188.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x220;
    local_188.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0x228;
    local_188.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x230;
    local_188.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0x238;
    local_188.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x240;
    local_188.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0x248;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_1f8);
      }
      if (pFVar17 == pFVar3) break;
      pFVar5 = *(FPhysicsObject **)pFVar17;
      iVar15 = Chaos::FPhysicsObjectInterface::GetId(pFVar5);
      if (((iVar15 != -1) &&
          (local_1c8.Reference =
                (FImplicitObject *)
                Chaos::FReadPhysicsObjectInterface<0>::GetRigidParticle
                          ((FReadPhysicsObjectInterface<0> *)&local_1b0.Interface,pFVar5),
          (TPBDRigidParticle<double,3> *)local_1c8.Reference != (TPBDRigidParticle<double,3> *)0x0))
         && (*(longlong *)&((TPBDRigidParticle<double,3> *)local_1c8.Reference)->field_0x50 != 0)) {
        local_128.Rotation.ZW.m128d_f64[0] =
             (double)(float)*(undefined8 *)
                             &((TPBDRigidParticle<double,3> *)local_1c8.Reference)->field_0x48;
        local_128.Rotation.ZW.m128d_f64[1] =
             (double)(float)((ulonglong)
                             *(undefined8 *)
                              &((TPBDRigidParticle<double,3> *)local_1c8.Reference)->field_0x48 >>
                            0x20);
        local_128.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)*(float *)&((TPBDRigidParticle<double,3> *)local_1c8.Reference)->
                                      field_0x44,0);
        local_128.Rotation.XY.m128d_f64[0] =
             (double)*(float *)&((TPBDRigidParticle<double,3> *)local_1c8.Reference)->field_0x40;
        local_128.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)
                   (double)*(float *)&((TPBDRigidParticle<double,3> *)local_1c8.Reference)->
                                      field_0x44 >> 0x20);
        local_128.Translation.ZW.m128d_f64[0] =
             *(double *)&((TPBDRigidParticle<double,3> *)local_1c8.Reference)->field_0x30;
        local_128.Translation.XY.m128d_f64[0] =
             *(double *)&((TPBDRigidParticle<double,3> *)local_1c8.Reference)->field_0x20;
        local_128.Translation.XY.m128d_f64[1] =
             *(double *)&((TPBDRigidParticle<double,3> *)local_1c8.Reference)->field_0x28;
        local_128.Translation.ZW.m128d_f64[1] = 0.0;
        local_128.Scale3D.XY.m128d_f64[0] = dVar11;
        local_128.Scale3D.XY.m128d_f64[1] = dVar12;
        local_128.Scale3D.ZW.m128d_f64[0] = dVar9;
        local_128.Scale3D.ZW.m128d_f64[1] = dVar10;
        UE::Math::TTransform<double>::GetRelativeTransform(&local_128,&local_c8,&local_188);
        local_1d0.Reference =
             (FImplicitObject *)
             Chaos::FClusterUnionManager::CreateTransformGeometryForClusterUnion<0>
                       (local_1c8.Reference,&local_c8);
        if ((TImplicitObjectTransformed<double,3,1> *)local_1d0.Reference !=
            (TImplicitObjectTransformed<double,3,1> *)0x0) {
          LOCK();
          *(int *)&((TImplicitObjectTransformed<double,3,1> *)local_1d0.Reference)->_padding_ =
               (int)((TImplicitObjectTransformed<double,3,1> *)local_1d0.Reference)->_padding_ + 1;
          UNLOCK();
        }
        if (local_1f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d0) {
          if ((FScriptContainerElement *)&local_1d0 <
              local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayMax * 8) {
            local_210 = (longlong)local_1f0.ArrayNum;
            local_208 = 8;
            local_228 = &local_1d0;
            local_220 = local_1f0.AllocatorInstance.Data;
            local_218 = (longlong)local_1f0.ArrayMax;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
        iVar15 = local_1f0.ArrayNum;
        if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
        }
        local_1f0.ArrayNum = iVar15 + 1;
        *(undefined8 *)(local_1f0.AllocatorInstance.Data + (longlong)iVar15 * 8) = 0;
        *(FImplicitObject **)(local_1f0.AllocatorInstance.Data + (longlong)iVar15 * 8) =
             local_1d0.Reference;
        local_1d0.Reference = (FImplicitObject *)0x0;
        if (local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1c8) {
          if ((FScriptContainerElement *)&local_1c8 <
              local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 8) {
            local_210 = (longlong)local_1e0.ArrayNum;
            local_208 = 8;
            local_228 = &local_1c8;
            local_220 = local_1e0.AllocatorInstance.Data;
            local_218 = (longlong)local_1e0.ArrayMax;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
        iVar15 = local_1e0.ArrayNum;
        if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
        }
        local_1e0.ArrayNum = iVar15 + 1;
        *(FImplicitObject **)(local_1e0.AllocatorInstance.Data + (longlong)iVar15 * 8) =
             local_1c8.Reference;
      }
      pFVar17 = pFVar17 + 8;
    }
    if ((local_1f0.ArrayNum != 0) &&
       (pTVar6 = (this->PhysicsProxy->Particle_External).Ptr,
       pTVar6 != (TPBDRigidParticle<double,3> *)0x0)) {
      this_00 = *(FImplicitObject **)&pTVar6->field_0x50;
      if ((this_00 == (FImplicitObject *)0x0) ||
         (uVar14 = Chaos::FImplicitObject::GetType(this_00), uVar14 != '\x05')) {
        if (local_1f0.ArrayNum == 0) {
          this_02 = ::operator_new(0xd0);
          if (this_02 != (FImplicitObjectUnionClustered *)0x0) {
            this_03 = Chaos::FImplicitObjectUnionClustered::FImplicitObjectUnionClustered(this_02);
          }
        }
        else {
          this_04 = ::operator_new(0x70);
          if (this_04 != (FImplicitObjectUnion *)0x0) {
            this_03 = (FImplicitObjectUnionClustered *)
                      Chaos::FImplicitObjectUnion::FImplicitObjectUnion(this_04,&local_1f0);
          }
        }
        if ((this_03->_padding_ & 0x100000000) == 0) {
          Chaos::FImplicitObjectUnion::CheckNotLocked((FImplicitObjectUnion *)this_03);
          pbVar1 = (byte *)((longlong)&this_03->_padding_ + 4);
          *pbVar1 = *pbVar1 | 1;
          Chaos::FImplicitObjectUnion::RebuildBVH((FImplicitObjectUnion *)this_03);
        }
        this_01 = this->PhysicsProxy;
        LOCK();
        *(int *)&this_03->_padding_ = (int)this_03->_padding_ + 1;
        UNLOCK();
        local_1c0[0].Reference = (FImplicitObject *)this_03;
        Chaos::FClusterUnionPhysicsProxy::SetGeometry_External(this_01,local_1c0,&local_1e0);
        if ((FImplicitObjectUnionClustered *)local_1c0[0].Reference !=
            (FImplicitObjectUnionClustered *)0x0) {
          LOCK();
          plVar2 = &(local_1c0[0].Reference)->_padding_;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar8 == 1) &&
             (*(int *)((longlong)&(local_1c0[0].Reference)->_padding_ + 4) == 0)) {
            (**(code **)(local_1c0[0].Reference)->_padding_)(local_1c0[0].Reference,1);
          }
        }
      }
      else {
        Chaos::FClusterUnionPhysicsProxy::MergeGeometry_External
                  (this->PhysicsProxy,&local_1f0,&local_1e0);
      }
    }
    if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_1f0.AllocatorInstance.Data,
               local_1f0.ArrayNum);
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_1b0.Lock);
  }
  return;
}

// AddReferencedObjects @ 148265000

void __cdecl
UClusterUnionComponent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  UScriptStruct *pUVar6;
  longlong *plVar7;
  bool bVar8;
  UClass *pUVar9;
  UPackage *pUVar10;
  longlong lVar11;
  FString *pFVar12;
  byte bVar13;
  wchar_t *pwVar14;
  uint uVar15;
  wchar_t *pwVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  int iVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  undefined1 local_res8 [8];
  FReferenceCollector *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_280 [8];
  ulonglong local_278;
  undefined1 *local_270;
  int iStack_268;
  uint uStack_264;
  undefined1 *local_260;
  undefined4 uStack_258;
  int iStack_254;
  int local_250;
  int iStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_228;
  undefined1 *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  UScriptStruct *local_1c0;
  UScriptStruct *local_1b8;
  UScriptStruct *local_1b0;
  TObjectPtr<UScriptStruct_const_>_u_0 local_1a8;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0 [2];
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  local_res10 = param_2;
  UActorComponent::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar12 = GetTypeName<UClusterUnionComponent>(&local_e0);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar16);
  }
  pUVar9 = GetPrivateStaticClass();
  iVar23 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar23) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar23 * 8) !=
      &pUVar9->_padding_)) {
    pFVar12 = GetTypeName<UClusterUnionComponent>(&local_d0);
    pwVar16 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UObject>(local_c0,param_1);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar16,pwVar14);
  }
  if (Z_Registration_Info_UScriptStruct_FClusteredComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FClusteredComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusteredComponentData,(UObject *)pUVar10,
                         L"ClusteredComponentData");
  }
  pUVar6 = Z_Registration_Info_UScriptStruct_FClusteredComponentData.OuterSingleton;
  puVar1 = &param_1[0x26].field_0x8;
  local_278 = 1;
  iVar23 = *(int *)&param_1[0x27].field_0x8;
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1[0x26].field_0x18;
  iStack_200 = 0;
  local_1e8 = 0;
  uStack_1fc = 1;
  iStack_1ec = 0;
  if (iVar23 != 0) {
    puVar20 = *(uint **)(param_1 + 0x27);
    if (*(uint **)(param_1 + 0x27) == (uint *)0x0) {
      puVar20 = (uint *)pTVar24;
    }
    uStack_1fc = *puVar20;
    while (uStack_1fc == 0) {
      iStack_200 = iStack_200 + 1;
      local_1e8 = local_1e8 + 0x20;
      uStack_1fc = 1;
      iStack_1ec = iVar23;
      if ((int)((iVar23 + -1 >> 0x1f & 0x1fU) + iVar23 + -1) >> 5 < iStack_200) goto LAB_14826514e;
      uStack_1fc = puVar20[iStack_200];
    }
    uStack_1fc = -uStack_1fc & uStack_1fc;
    uVar2 = (ulonglong)uStack_1fc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1d8 = (int)lVar11;
    iStack_1ec = local_1d8 + -1 + local_1e8;
    if (iVar23 < iStack_1ec) {
      iStack_1ec = iVar23;
    }
  }
LAB_14826514e:
  uVar15 = *(uint *)&param_1[0x27].field_0x8;
  uStack_1e4 = local_94;
  bVar13 = (byte)uVar15 & 0x1f;
  iStack_1e0 = *(int *)&param_1[0x26].field_0x10 - *(int *)&param_1[0x27].field_0x14;
  local_228._padding_._0_4_ = (int)uVar15 >> 5;
  local_228._padding_._4_4_ = 1 << bVar13;
  local_228.UnvisitedBitMask = -1 << bVar13;
  local_228.BaseBitIndex = uVar15 & 0xffffffe0;
  uStack_1f0 = 0xffffffff;
  TStack_198._padding_ = CONCAT44(uStack_1fc,iStack_200);
  TStack_198.CurrentBitIndex = iStack_1ec;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  TStack_198._28_4_ = local_94;
  TStack_198.BaseBitIndex = local_1e8;
  uStack_178 = CONCAT44(uStack_1dc,iStack_1e0);
  local_228.Array = pTVar24;
  local_228.CurrentBitIndex = uVar15;
  local_208 = puVar1;
  local_1f8 = (undefined1 *)pTVar24;
  local_1a0 = (longlong *)puVar1;
  TStack_198.Array = pTVar24;
  if ((((int)uVar15 < 0) || (iVar23 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar15 != *(uint *)&param_1[0x27].field_0x8) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
    pTVar24 = local_228.Array;
    uVar15 = local_228.CurrentBitIndex;
  }
  while( true ) {
    plVar7 = local_1a0;
    if ((int)local_1a0[1] - *(int *)((longlong)local_1a0 + 0x34) != (int)uStack_178) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar11 = (longlong)TStack_198.CurrentBitIndex;
    if (((TStack_198.CurrentBitIndex == uVar15) && (TStack_198.Array == pTVar24)) &&
       (plVar7 == (longlong *)puVar1)) break;
    lVar4 = *plVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_240.ObjectIndex = 0;
    local_240.ObjectSerialNumber = 0;
    local_1c0 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_1c0);
    FReferenceCollector::AddReferencedObjects
              (local_res10,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_240,
               (void *)(lVar11 * 0x38 + lVar4 + 8),param_1,(FProperty *)0x0);
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
  }
  if (Z_Registration_Info_UScriptStruct_FClusteredActorData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar10 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FClusteredActorData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusteredActorData,(UObject *)pUVar10,
                         L"ClusteredActorData");
  }
  pUVar6 = Z_Registration_Info_UScriptStruct_FClusteredActorData.OuterSingleton;
  puVar21 = &param_1[0x28].field_0x20;
  iVar23 = *(int *)&param_1[0x29].field_0x20;
  puVar1 = &param_1[0x29].field_0x8;
  iStack_268 = 0;
  local_250 = 0;
  uStack_264 = (uint)local_278;
  iStack_254 = 0;
  if (iVar23 != 0) {
    puVar20 = *(uint **)&param_1[0x29].field_0x18;
    if (*(uint **)&param_1[0x29].field_0x18 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      iStack_268 = iStack_268 + 1;
      local_250 = local_250 + 0x20;
      iStack_254 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_268) goto LAB_14826538f;
      uVar15 = puVar20[iStack_268];
    }
    uStack_264 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_264 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1d4 = (int)lVar11;
    iStack_254 = local_250 + -1 + local_1d4;
    if (iVar23 < iStack_254) {
      iStack_254 = iVar23;
    }
  }
LAB_14826538f:
  uVar15 = *(uint *)&param_1[0x29].field_0x20;
  iStack_24c = local_74;
  uVar22 = uVar15 & 0xffffffe0;
  iStack_248 = *(int *)(param_1 + 0x29) - *(int *)&param_1[0x2a].field_0x4;
  uStack_258 = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uStack_264,iStack_268);
  TStack_168.CurrentBitIndex = iStack_254;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_168._28_4_ = local_74;
  TStack_168.BaseBitIndex = local_250;
  uStack_148 = CONCAT44(uStack_244,iStack_248);
  local_270 = puVar21;
  local_260 = puVar1;
  local_170 = (longlong *)puVar21;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar23 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1[0x29].field_0x20;
  if (uVar15 != uVar3) {
    puVar19 = puVar1;
    if (*(undefined1 **)&param_1[0x29].field_0x18 != (undefined1 *)0x0) {
      puVar19 = *(undefined1 **)&param_1[0x29].field_0x18;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      iVar17 = iVar17 + 1;
      uVar22 = uVar22 + 0x20;
      uVar15 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar17) goto LAB_14826549d;
      uVar15 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1d0 = (int)lVar11;
    uVar15 = (uVar22 - 1) + local_1d0;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_14826549d:
  iVar23 = 0;
  while( true ) {
    plVar7 = local_170;
    if ((int)local_170[1] - *(int *)((longlong)local_170 + 0x34) != (int)uStack_148) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FClusteredActorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar11 = (longlong)TStack_168.CurrentBitIndex;
    if (((TStack_168.CurrentBitIndex == uVar15) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (plVar7 == (longlong *)puVar21)) break;
    lVar4 = *plVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_238.ObjectIndex = 0;
    local_238.ObjectSerialNumber = 0;
    local_1b8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_1b8);
    FReferenceCollector::AddReferencedObjects
              (local_res10,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_238,
               (void *)(lVar11 * 0x68 + lVar4 + 8),param_1,(FProperty *)0x0);
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  if (Z_Registration_Info_UScriptStruct_FClusterUnionPendingAddData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FClusterUnionPendingAddData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnionPendingAddData,(UObject *)pUVar10,
                         L"ClusterUnionPendingAddData");
  }
  pUVar6 = Z_Registration_Info_UScriptStruct_FClusterUnionPendingAddData.OuterSingleton;
  puVar1 = &param_1[0x2a].field_0x20;
  iVar17 = *(int *)&param_1[0x2b].field_0x20;
  puVar21 = &param_1[0x2b].field_0x8;
  uStack_264 = (uint)local_278;
  iStack_254 = iVar23;
  iStack_268 = iVar23;
  if (iVar17 != 0) {
    puVar20 = *(uint **)&param_1[0x2b].field_0x18;
    if (*(uint **)&param_1[0x2b].field_0x18 == (uint *)0x0) {
      puVar20 = (uint *)puVar21;
    }
    uVar15 = *puVar20;
    iStack_268 = 0;
    while (uVar15 == 0) {
      iStack_268 = iStack_268 + 1;
      iVar23 = iVar23 + 0x20;
      iStack_254 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_268) goto LAB_148265620;
      uVar15 = puVar20[iStack_268];
    }
    uStack_264 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_264 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1cc = (int)lVar11;
    iStack_254 = iVar23 + -1 + local_1cc;
    if (iVar17 < iStack_254) {
      iStack_254 = iVar17;
    }
  }
LAB_148265620:
  uVar15 = *(uint *)&param_1[0x2b].field_0x20;
  iStack_24c = local_54;
  uVar22 = uVar15 & 0xffffffe0;
  iStack_248 = *(int *)(param_1 + 0x2b) - *(int *)&param_1[0x2c].field_0x4;
  TStack_138._padding_ = CONCAT44(uStack_264,iStack_268);
  uStack_258 = 0xffffffff;
  TStack_138.CurrentBitIndex = iStack_254;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_138._28_4_ = local_54;
  TStack_138.BaseBitIndex = iVar23;
  uStack_118 = CONCAT44(uStack_244,iStack_248);
  local_270 = puVar1;
  local_260 = puVar21;
  local_250 = iVar23;
  local_140 = (longlong *)puVar1;
  TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar21;
  if ((((int)uVar15 < 0) || (iVar17 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1[0x2b].field_0x20;
  if (uVar15 != uVar3) {
    puVar19 = puVar21;
    if (*(undefined1 **)&param_1[0x2b].field_0x18 != (undefined1 *)0x0) {
      puVar19 = *(undefined1 **)&param_1[0x2b].field_0x18;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      iVar18 = iVar18 + 1;
      uVar22 = uVar22 + 0x20;
      uVar15 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar18) goto LAB_148265740;
      uVar15 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1c8 = (int)lVar11;
    uVar15 = (uVar22 - 1) + local_1c8;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_148265740:
  while( true ) {
    plVar7 = local_140;
    if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar11 = (longlong)TStack_138.CurrentBitIndex;
    if (((TStack_138.CurrentBitIndex == uVar15) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar21)) &&
       (plVar7 == (longlong *)puVar1)) break;
    lVar4 = *plVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_230.ObjectIndex = 0;
    local_230.ObjectSerialNumber = 0;
    local_1b0 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1b0);
    FReferenceCollector::AddReferencedObjects
              (local_res10,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_230,
               (void *)(lVar11 * 0x60 + lVar4 + 8),param_1,(FProperty *)0x0);
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  if (Z_Registration_Info_UScriptStruct_FClusterUnionPendingAddData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FClusterUnionPendingAddData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnionPendingAddData,(UObject *)pUVar10,
                         L"ClusterUnionPendingAddData");
  }
  puVar21 = &param_1[0x2c].field_0x20;
  iVar23 = *(int *)&param_1[0x2d].field_0x20;
  puVar1 = &param_1[0x2d].field_0x8;
  iStack_268 = 0;
  local_250 = 0;
  iStack_254 = iStack_268;
  if (iVar23 != 0) {
    puVar20 = *(uint **)&param_1[0x2d].field_0x18;
    if (*(uint **)&param_1[0x2d].field_0x18 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    iStack_268 = 0;
    local_250 = 0;
    while (uVar15 == 0) {
      iStack_268 = iStack_268 + 1;
      local_250 = local_250 + 0x20;
      iStack_254 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_268) goto LAB_1482658ce;
      uVar15 = puVar20[iStack_268];
    }
    local_278 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = local_278 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1c4 = (int)lVar11;
    iStack_254 = local_250 + -1 + local_1c4;
    if (iVar23 < iStack_254) {
      iStack_254 = iVar23;
    }
  }
LAB_1482658ce:
  uVar15 = *(uint *)&param_1[0x2d].field_0x20;
  uStack_264 = (uint)local_278;
  uVar22 = uVar15 & 0xffffffe0;
  iStack_24c = iStack_1ec;
  iStack_248 = *(int *)(param_1 + 0x2d) - *(int *)&param_1[0x2e].field_0x4;
  uStack_258 = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_264,iStack_268);
  TStack_108.CurrentBitIndex = iStack_254;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_108._28_4_ = iStack_1ec;
  TStack_108.BaseBitIndex = local_250;
  uStack_e8 = CONCAT44(uStack_244,iStack_248);
  local_270 = puVar21;
  local_260 = puVar1;
  local_1a8.DebugPtr = Z_Registration_Info_UScriptStruct_FClusterUnionPendingAddData.OuterSingleton;
  local_110 = (longlong *)puVar21;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar23 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1[0x2d].field_0x20;
  if (uVar15 != uVar3) {
    puVar19 = puVar1;
    if (*(undefined1 **)&param_1[0x2d].field_0x18 != (undefined1 *)0x0) {
      puVar19 = *(undefined1 **)&param_1[0x2d].field_0x18;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      iVar17 = iVar17 + 1;
      uVar22 = uVar22 + 0x20;
      uVar15 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar17) goto LAB_1482659f0;
      uVar15 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (uVar22 - 1) + (int)lVar11;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_1482659f0:
  while( true ) {
    plVar7 = local_110;
    if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_280);
    }
    if (((TStack_108.CurrentBitIndex == uVar15) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (plVar7 == (longlong *)puVar21)) break;
    FReferenceCollector::AddReferencedObjects
              (local_res10,(TObjectPtr<UScriptStruct_const_> *)&local_1a8.ObjectPtr,
               (void *)(*plVar7 + 8 + (longlong)TStack_108.CurrentBitIndex * 0x60),param_1,
               (FProperty *)0x0);
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  return;
}

// BroadcastComponentAddedEvents @ 1482685c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::BroadcastComponentAddedEvents
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_> *param_4)

{
  TMulticastDelegate<void___cdecl(UPrimitiveComponent_*,TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_>_const_&,TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  ForAnyElementType _Dst;
  ForElementType<unsigned_int> FVar13;
  ForAnyElementType FVar14;
  undefined1 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8;
  undefined1 local_1c7;
  int local_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  UPrimitiveComponent *local_1a0;
  undefined4 local_194;
  int local_190;
  FScriptContainerElement *local_188;
  UClusterUnionComponent *local_180;
  TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_> *local_178;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  FSparseArrayAllocationInfo local_148;
  FDestructionSentinel local_138;
  FReadAccessScope local_120;
  UPrimitiveComponent *local_108;
  undefined1 local_100 [32];
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FScriptContainerElement local_c8 [8];
  ForAnyElementType local_c0;
  uint local_b8;
  undefined1 local_b0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_178 = param_4;
  local_1c7 = param_3;
  local_1a0 = param_1;
  local_180 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComponentAddedEvent,
             &local_120);
  iVar1 = *(int *)&(this->OnComponentAddedEvent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_120);
  if (0 < iVar1) {
    pFVar25 = (param_2->AllocatorInstance).Data;
    iVar1 = param_2->ArrayNum;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_a8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_188 = pFVar25 + (longlong)iVar1 * 8;
    local_a8.AllocationFlags.NumBits = 0;
    local_a8.AllocationFlags.MaxBits = 0x80;
    local_a8.FirstFreeIndex = -1;
    local_a8.NumFreeIndices = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    while( true ) {
      pFVar2 = local_188;
      if (param_2->ArrayNum != iVar1) {
        local_1c8 = 0;
        `TCheckedPointerIterator<FClusterUnionBoneData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_1c8);
      }
      uVar22 = local_60;
      if (pFVar25 == pFVar2) break;
      if (local_a8.NumFreeIndices == 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)&local_a8,&local_a8.Data.ArrayNum,
                           &local_a8.Data.ArrayMax);
        iVar24 = local_a8.AllocationFlags.NumBits;
        if (local_a8.AllocationFlags.NumBits == 0) {
          iVar20 = 0;
LAB_148268729:
          if (local_a8.AllocationFlags.MaxBits < local_a8.AllocationFlags.NumBits + 1) {
            uVar22 = local_a8.AllocationFlags.MaxBits + 0x1fU >> 5;
            uVar16 = local_a8.AllocationFlags.NumBits + 0x20U >> 5;
            if (uVar16 < 5) {
              iVar10 = 4;
            }
            else {
              uVar17 = (ulonglong)uVar16;
              if (uVar22 < 5) {
                uVar22 = 0;
              }
              if (uVar22 == 0) {
                uVar23 = 4;
                if (4 < uVar17) {
                  uVar23 = uVar17;
                }
              }
              else {
                uVar23 = ((ulonglong)uVar16 * 3 >> 3) + 0x10 + uVar17;
              }
              uVar11 = FMemory::QuantizeSize(uVar23 * 4,0);
              iVar10 = (int)(uVar11 >> 2);
              if (iVar10 < (int)uVar16) {
                iVar10 = 0x7fffffff;
              }
            }
            local_a8.AllocationFlags.MaxBits = iVar10 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      (&local_a8.AllocationFlags,local_a8.AllocationFlags.NumBits);
          }
          local_a8.AllocationFlags.NumBits = local_a8.AllocationFlags.NumBits + 1;
          uVar16 = local_a8.AllocationFlags.NumBits >> 0x1f & 0x1f;
          uVar22 = local_a8.AllocationFlags.NumBits + uVar16;
          iVar10 = (uVar22 & 0x1f) - uVar16;
          if (iVar10 != 0) {
            FVar13 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
            if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            puVar21 = (uint *)((longlong)FVar13 + (longlong)((int)uVar22 >> 5) * 4);
            *puVar21 = *puVar21 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
          }
        }
        else {
          iVar20 = (int)(local_a8.AllocationFlags.NumBits +
                        (local_a8.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
          if (iVar20 != (int)((local_a8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU) +
                             local_a8.AllocationFlags.NumBits + -1) >> 5) goto LAB_148268729;
          local_a8.AllocationFlags.NumBits = local_a8.AllocationFlags.NumBits + 1;
        }
        FVar13 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
        if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        puVar21 = (uint *)((longlong)FVar13 + (longlong)iVar20 * 4);
        *puVar21 = *puVar21 & ~(1 << ((byte)iVar24 & 0x1f));
        iVar24 = local_a8.FirstFreeIndex;
      }
      else {
        iVar24 = *(int *)(local_a8.Data.AllocatorInstance.Data +
                         (longlong)local_a8.FirstFreeIndex * 0xc + 4);
        local_a8.NumFreeIndices = local_a8.NumFreeIndices + -1;
        iVar9 = local_a8.FirstFreeIndex;
        if (local_a8.NumFreeIndices != 0) {
          *(undefined4 *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar24 * 0xc) =
               0xffffffff;
        }
      }
      local_a8.FirstFreeIndex = iVar24;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex(&local_a8,&local_148,iVar9);
      if (local_148.Pointer == (uint *)0x0) {
        puVar21 = (uint *)0x0;
      }
      else {
        *(uint *)local_148.Pointer = *(uint *)pFVar25;
        *(uint *)((longlong)local_148.Pointer + 4) = 0xffffffff;
        puVar21 = local_148.Pointer;
      }
      uVar22 = *puVar21;
      if ((local_a8.Data.ArrayNum - local_a8.NumFreeIndices != 1) &&
         (local_a8.Data.ArrayNum != local_a8.NumFreeIndices)) {
        FVar14.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_68.Data;
        }
        for (iVar24 = *(int *)(FVar14.Data + (ulonglong)(local_60 - 1 & uVar22) * 4); iVar24 != -1;
            iVar24 = *(int *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar24 * 0xc + 4)) {
          if (*(uint *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar24 * 0xc) == uVar22) {
            if (iVar24 != -1) {
              *(uint *)(local_a8.Data.AllocatorInstance.Data + (longlong)iVar24 * 0xc) = uVar22;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(&local_a8,local_148.Index,1);
              goto LAB_148268b95;
            }
            break;
          }
        }
      }
      uVar19 = 1;
      uVar16 = local_a8.Data.ArrayNum - local_a8.NumFreeIndices;
      if (3 < uVar16) {
        uVar17 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_194 = (undefined4)lVar18;
        uVar19 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (((int)uVar16 < 1) || ((int)uVar19 <= (int)local_60)) {
        uVar22 = local_60 - 1 & uVar22;
        puVar21[2] = uVar22;
        FVar14.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_68.Data;
        }
        uVar17 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar22;
        puVar21[1] = *(uint *)(FVar14.Data + uVar17 * 4);
        *(int *)(FVar14.Data + uVar17 * 4) = local_148.Index;
      }
      else {
        local_60 = uVar19;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
        }
        if (uVar19 != 0) {
          uVar22 = uVar19;
          if (uVar19 < 2) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar22 = 0;
              goto LAB_148268992;
            }
          }
          else {
LAB_148268992:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar22,4);
          }
          uVar17 = 0;
          if (0 < (int)uVar19) {
            uVar23 = (ulonglong)uVar19;
            do {
              FVar14.Data = local_70;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_68.Data;
              }
              uVar12 = (longlong)(int)uVar19 - 1U & uVar17;
              uVar17 = uVar17 + 1;
              *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
        }
        if (local_60 != 0) {
          pTStack_1b8 = &local_a8.AllocationFlags;
          local_1c0 = 0;
          uStack_1bc = 1;
          iStack_1ac = 0;
          iStack_1a8 = 0;
          if (local_a8.AllocationFlags.NumBits != 0) {
            FVar13 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
            if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar22 = *(uint *)FVar13;
            while (uVar22 == 0) {
              iStack_1a8 = iStack_1a8 + 0x20;
              lVar18 = (longlong)local_1c0;
              local_1c0 = local_1c0 + 1;
              if ((int)(local_a8.AllocationFlags.NumBits + -1 +
                       (local_a8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1c0)
              goto LAB_148268ab3;
              uVar22 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar18 * 4);
            }
            uStack_1bc = -uVar22 & uVar22;
            uVar17 = (ulonglong)uStack_1bc * 2 + 1;
            lVar18 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            local_190 = (int)lVar18;
            iStack_1ac = iStack_1a8 + -1 + local_190;
            if (local_a8.AllocationFlags.NumBits < iStack_1ac) {
LAB_148268ab3:
              iStack_1ac = local_a8.AllocationFlags.NumBits;
            }
          }
          local_1b0 = 0xffffffff;
          local_170 = &local_a8;
          local_168._padding_ = CONCAT44(uStack_1bc,local_1c0);
          local_168.CurrentBitIndex = iStack_1ac;
          local_168.UnvisitedBitMask = 0xffffffff;
          local_168._28_4_ = uStack_1a4;
          local_168.BaseBitIndex = iStack_1a8;
          local_168.Array = pTStack_1b8;
          iVar24 = iStack_1ac;
          if (iStack_1ac < local_a8.AllocationFlags.NumBits) {
            do {
              lVar18 = (longlong)iVar24;
              pFVar2 = (local_170->Data).AllocatorInstance.Data;
              uVar22 = local_60 - 1 & *(uint *)(pFVar2 + lVar18 * 0xc);
              *(uint *)(pFVar2 + lVar18 * 0xc + 8) = uVar22;
              FVar14.Data = local_70;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_68.Data;
              }
              uVar17 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar22;
              *(undefined4 *)(pFVar2 + lVar18 * 0xc + 4) = *(undefined4 *)(FVar14.Data + uVar17 * 4)
              ;
              *(int *)(FVar14.Data + uVar17 * 4) = iVar24;
              local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
              iVar24 = local_168.CurrentBitIndex;
            } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
          }
        }
      }
LAB_148268b95:
      pFVar25 = pFVar25 + 8;
    }
    lVar18 = (longlong)(int)local_60;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_100._0_8_ = (FScriptContainerElement *)0x0;
    local_100._8_8_ = 0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_d0 = _UNK_150631d98;
    local_b8 = 0;
    local_108 = local_1a0;
    if (1 < local_60) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,local_60,4);
    }
    FVar14.Data = local_70;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FVar14.Data = local_68.Data;
    }
    _Dst.Data = local_c8;
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      _Dst.Data = local_c0.Data;
    }
    if (uVar22 != 0) {
      memcpy(_Dst.Data,FVar14.Data,lVar18 << 2);
    }
    local_b8 = uVar22;
    iVar1 = local_a8.Data.ArrayNum;
    lVar18 = (longlong)local_a8.Data.ArrayNum;
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_100,local_a8.Data.ArrayNum);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,(ForAnyElementType *)local_100,(int *)(local_100 + 8),
               (int *)(local_100 + 0xc));
    uVar22 = local_d8._4_4_;
    uStack_d0._4_4_ = local_a8.NumFreeIndices;
    uStack_d0._0_4_ = local_a8.FirstFreeIndex;
    local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
    uVar16 = local_a8.AllocationFlags.NumBits + 0x1fU & 0xffffffe0;
    if (((int)uVar22 < (int)uVar16) || (0x80 < (int)uVar22)) {
      uVar22 = 0x80;
      if (0x80 < (int)uVar16) {
        uVar22 = uVar16;
      }
      local_d8 = (ulonglong)uVar22 << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_100 + 0x10),0);
    }
    local_d8._0_4_ = local_a8.AllocationFlags.NumBits;
    if (local_a8.AllocationFlags.NumBits != 0) {
      FVar13 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
      if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      puVar15 = local_100 + 0x10;
      if (local_e0 != (undefined1 *)0x0) {
        puVar15 = local_e0;
      }
      memcpy(puVar15,(void *)FVar13,(ulonglong)(local_a8.AllocationFlags.NumBits + 0x1fU >> 5) << 2)
      ;
    }
    if (iVar1 != 0) {
      memcpy((void *)local_100._0_8_,local_a8.Data.AllocatorInstance.Data,lVar18 * 0xc);
    }
    this = local_180;
    local_b0 = local_1c7;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &local_180->OnComponentAddedEvent,&local_108);
    local_b8 = 0;
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    iVar1 = SUB84(local_100._8_8_,4);
    local_100._8_8_ = local_100._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_100,0,(int *)(local_100 + 0xc));
    }
    uVar22 = local_d8._4_4_;
    uStack_d0 = 0xffffffff;
    local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
    if (0x80 < uVar22) {
      local_d8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_100 + 0x10),0);
    }
    if (local_e0 != (undefined1 *)0x0) {
      FMemory::Free(local_e0);
    }
    if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_100._0_8_);
    }
    local_60 = 0;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    iVar1 = local_a8.Data.ArrayMax;
    local_a8.Data._8_8_ = local_a8.Data._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&local_a8,0,&local_a8.Data.ArrayMax);
    }
    local_a8.FirstFreeIndex = -1;
    local_a8.NumFreeIndices = 0;
    local_a8.AllocationFlags.NumBits = 0;
    if (0x80 < (uint)local_a8.AllocationFlags.MaxBits) {
      local_a8.AllocationFlags.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8.AllocationFlags,0);
    }
    if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_a8.AllocationFlags.AllocatorInstance.SecondaryData);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  this_00 = &this->OnComponentAddedNativeEvent;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_138);
    puVar15 = &(this->OnComponentAddedNativeEvent).field_0x1c;
    *(int *)puVar15 = *(int *)puVar15 + 1;
    bVar6 = false;
    uVar22 = *(int *)&(this->OnComponentAddedNativeEvent).field_0x10 - 1;
    if (-1 < (int)uVar22) {
      lVar18 = (longlong)(int)uVar22 << 4;
      bVar6 = false;
      do {
        uVar16 = 0;
        if ((int)uVar22 < *(int *)&(this->OnComponentAddedNativeEvent).field_0x10) {
          uVar16 = ~uVar22 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnComponentAddedNativeEvent).field_0x8;
        if (((*(int *)(lVar18 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar18 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,local_1a0,param_2,local_178), cVar8 == '\0'
           )) {
          bVar6 = true;
        }
        lVar18 = lVar18 + -0x10;
        uVar22 = uVar22 - 1;
      } while (-1 < (int)uVar22);
    }
    puVar15 = &(this->OnComponentAddedNativeEvent).field_0x1c;
    *(int *)puVar15 = *(int *)puVar15 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
  }
  return;
}

// BroadcastComponentRemovedEvents @ 148268f40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::BroadcastComponentRemovedEvents
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(UPrimitiveComponent_*,TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  UPrimitiveComponent *local_res8;
  FDestructionSentinel local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnComponentRemovedEvent,&local_40);
  iVar2 = *(int *)&(this->OnComponentRemovedEvent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if (0 < iVar2) {
    local_res8 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnComponentRemovedEvent,&local_res8);
  }
  this_00 = &this->OnComponentRemovedNativeEvent;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_58);
    puVar1 = &(this->OnComponentRemovedNativeEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar10 = *(int *)&(this->OnComponentRemovedNativeEvent).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar10 < *(int *)&(this->OnComponentRemovedNativeEvent).field_0x10) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnComponentRemovedNativeEvent).field_0x8;
        if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1,param_2), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->OnComponentRemovedNativeEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  return;
}

// CalcBounds @ 148269fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UClusterUnionComponent::CalcBounds
          (UClusterUnionComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TBox<double> *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_1a8 [32];
  FPhysicsObject *local_188 [2];
  FPhysicsObject **local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  FPhysicsObject **local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_158;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_148;
  FLockedPhysicsObjectExternalInterface<0> local_138;
  TMatrix<double> local_118;
  TBox<double> local_98;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (this->bHasCachedLocalBounds == false) {
    if (this->PhysicsProxy == (FClusterUnionPhysicsProxy *)0x0) {
      USceneComponent::CalcBounds((USceneComponent *)this,__return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
    local_188[0] = (this->PhysicsProxy->PhysicsObject).Ptr;
    local_178 = local_188;
    uStack_170 = 1;
    local_158._12_4_ = uStack_16c;
    local_158.ArrayNum = 1;
    local_158.DataPtr = local_178;
    FPhysicsObjectExternalInterface::LockRead(&local_138,&local_158);
    local_168 = local_188;
    uStack_160 = 1;
    local_148._12_4_ = uStack_15c;
    local_148.ArrayNum = 1;
    local_148.DataPtr = local_168;
    pTVar8 = Chaos::FReadPhysicsObjectInterface<0>::GetBounds
                       (&local_138.Interface,&local_98,&local_148);
    dVar7 = __real_3fe0000000000000;
    dVar1 = (pTVar8->Min).field0_0x0._s_0.X;
    dVar2 = (pTVar8->Min).field0_0x0._s_0.Y;
    dVar5 = (pTVar8->Max).field0_0x0._s_0.X - dVar1;
    dVar3 = (pTVar8->Min).field0_0x0._s_0.Z;
    dVar6 = (pTVar8->Max).field0_0x0._s_0.Y - dVar2;
    dVar4 = (pTVar8->Max).field0_0x0._s_0.Z;
    this->bHasCachedLocalBounds = true;
    dVar4 = dVar4 - dVar3;
    (this->CachedLocalBounds).Origin.field0_0x0._s_0.X = dVar5 * dVar7 + dVar1;
    auVar9._0_8_ = dVar4 * dVar7 + dVar3;
    auVar9._8_8_ = 0;
    (this->CachedLocalBounds).Origin.field0_0x0._s_0.Y = dVar6 * dVar7 + dVar2;
    (this->CachedLocalBounds).Origin.field0_0x0._s_0.Z = auVar9._0_8_;
    (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.X = dVar5 * dVar7;
    (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.Y = dVar6 * dVar7;
    (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar4 * dVar7;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4) * __real_3fd0000000000000;
    auVar10 = sqrtpd(auVar9,auVar10);
    (this->CachedLocalBounds).SphereRadius = auVar10._0_8_;
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_138.Lock);
  }
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_118);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            (&this->CachedLocalBounds,__return_storage_ptr__,&local_118);
  return __return_storage_ptr__;
}

// CanEditSimulatePhysics @ 14826bb10

bool __thiscall UClusterUnionComponent::CanEditSimulatePhysics(UClusterUnionComponent *this)

{
  return true;
}

// ChangeIfComponentBonesAreMainParticle @ 14826bb20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::ChangeIfComponentBonesAreMainParticle
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_40;
  
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    uVar3 = param_2->ArrayNum;
    if ((uVar3 != 0) && (param_1 != (UPrimitiveComponent *)0x0)) {
      puVar1 = &param_1->field_0x260;
      if (puVar1 == (undefined1 *)0x0) {
        local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_40.ArrayNum = 0;
        local_40.ArrayMax = 0;
      }
      else {
        local_50.Data = (FScriptContainerElement *)0x0;
        local_48._0_4_ = 0;
        local_48._4_4_ = 0;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        if (0 < (int)uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar3,&local_50,0,(int *)((longlong)&local_48 + 4));
        }
        pFVar8 = (param_2->AllocatorInstance).Data;
        iVar4 = param_2->ArrayNum;
        pFVar2 = pFVar8 + (longlong)iVar4 * 4;
        while( true ) {
          if (param_2->ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar8 == pFVar2) break;
          local_58 = (**(code **)(*(longlong *)puVar1 + 0x10))(puVar1,*(undefined4 *)pFVar8);
          if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8))
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
          iVar7 = (int)local_48;
          if ((int)local_48 == local_48._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_50,(int *)((longlong)&local_48 + 4));
          }
          pFVar8 = pFVar8 + 4;
          local_48._0_4_ = iVar7 + 1;
          *(undefined8 *)(local_50.Data + (longlong)iVar7 * 8) = local_58;
        }
        iVar4 = (int)local_48;
        local_40.AllocatorInstance.Data = local_50.Data;
        local_40.ArrayNum = (int)local_48;
        local_40.ArrayMax = local_48._4_4_;
        if (iVar4 != 0) {
          Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External
                    (this->PhysicsProxy,&local_40,param_3);
        }
      }
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ComponentOverlapComponentWithResultImpl @ 14826ea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UClusterUnionComponent::ComponentOverlapComponentWithResultImpl
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,TVector<double> *param_2,
          TQuat<double> *param_3,FCollisionQueryParams *param_4,
          TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentComponentOverlapComponentWithResultImpl>
  FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar16;
  FName FVar17;
  code cVar18;
  FName *pFVar19;
  double dVar20;
  double dVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStackY_408 [32];
  undefined1 local_3a8 [8];
  ForAnyElementType local_3a0;
  undefined8 local_398;
  FColor_u_0 local_390 [2];
  FName local_388;
  FName *local_380;
  int local_378;
  undefined4 local_374;
  FName local_370;
  FCollisionQueryParams *local_368;
  FName local_360;
  TQuat<double> *local_350;
  LARGE_INTEGER local_348;
  FStatMessage local_340;
  FName *local_328;
  int iStack_320;
  FName *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  FName *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  code *local_2f8;
  UClusterUnionComponent **local_2f0;
  UClusterUnionComponent *local_2e8;
  undefined1 *local_2e0;
  TVector<double> *local_2d8;
  TQuat<double> *local_2d0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *local_2c8;
  FCollisionQueryParams *local_2c0;
  FName local_2b8 [2];
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_2a8;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_298;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_288;
  FLockedPhysicsObjectExternalInterface<0> local_278;
  undefined1 local_240 [16];
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  double dStack_1f8;
  double local_1f0;
  TTransform<double> local_1e8;
  TMatrix<double> local_188;
  code *local_108 [2];
  code *local_f8 [3];
  code **local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_368 = param_4;
  FVar15 = StatPtr_STAT_ClusterUnionComponentComponentOverlapComponentWithResultImpl;
  local_350 = param_3;
  if (StatPtr_STAT_ClusterUnionComponentComponentOverlapComponentWithResultImpl ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentComponentOverlapComponentWithResultImpl>
       )0x0) {
    pFVar14 = ::FName::FName(local_2b8,
                             "STAT_ClusterUnionComponentComponentOverlapComponentWithResultImpl");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentComponentOverlapComponentWithResultImpl>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ClusterUnionComponentComponentOverlapComponentWithResultImpl
                          ,*pFVar14,
                          L"UClusterUnionComponent::ComponentOverlapComponentWithResultImpl",
                          "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  local_360.ComparisonIndex.Value = 0;
  local_360.Number = 0;
  bVar8 = false;
  bVar10 = false;
  FVar17 = *(FName *)FVar15;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_390[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_390[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_370.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_370.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_370,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x64c);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_388 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      goto LAB_14826ebee;
    }
  }
  bVar9 = false;
  FVar17 = local_360;
LAB_14826ebee:
  if (param_1 == (UPrimitiveComponent *)0x0) {
    cVar18 = (code)0x0;
  }
  else {
    local_3a8[0] = (code)0x0;
    if ((this->AccelerationStructure).Ptr ==
        (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
      local_1e8.Rotation.ZW.m128d_f64[0] = param_3->Z;
      local_1e8.Rotation.ZW.m128d_f64[1] = param_3->W;
      local_1e8.Rotation.XY.m128d_f64[0] = param_3->X;
      local_1e8.Rotation.XY.m128d_f64[1] = param_3->Y;
      local_1e8.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
      local_1e8.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
      local_1e8.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
      local_1e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_1e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_1e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_1e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_1e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      UE::Math::TTransform<double>::ToMatrixWithScale(&local_1e8,&local_188);
      auVar30 = *(undefined1 (*) [16])&param_1->field_0x128;
      dVar6 = *(double *)&param_1->field_0x110;
      dVar7 = *(double *)&param_1->field_0x118;
      dVar20 = *(double *)&param_1->field_0x138;
      dVar2 = *(double *)&param_1->field_0x120;
      dVar4 = auVar30._0_8_;
      dVar5 = auVar30._8_8_;
      auVar29._8_4_ = auVar30._0_4_;
      auVar29._0_8_ = dVar4;
      auVar29._12_4_ = auVar30._4_4_;
      dVar24 = auVar29._8_8_ * local_188.M[0][1];
      auVar21._0_8_ =
           (double)CONCAT44((uint)((ulonglong)(dVar4 * local_188.M[0][0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar4 * local_188.M[0][0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar21._8_4_ = SUB84(dVar24,0) & _UNK_15061cc88;
      auVar21._12_4_ = (uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c;
      auVar25._8_4_ = SUB84(dVar20,0);
      auVar25._0_8_ = dVar20;
      auVar25._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      dVar24 = auVar25._8_8_ * local_188.M[2][1];
      auVar26._0_8_ =
           (double)CONCAT44((uint)((ulonglong)(dVar20 * local_188.M[2][0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar20 * local_188.M[2][0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar26._8_4_ = SUB84(dVar24,0) & _UNK_15061cc88;
      auVar26._12_4_ = (uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c;
      dStack_208 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][0]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar5 * local_188.M[1][0],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar21._0_8_ +
                   auVar26._0_8_;
      dVar24 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][1]) >> 0x20) &
                                _UNK_15061cc8c,SUB84(dVar5 * local_188.M[1][1],0) & _UNK_15061cc88)
               + auVar21._8_8_ + auVar26._8_8_;
      auVar27._8_4_ = SUB84(dVar2,0);
      auVar27._0_8_ = dVar2;
      auVar27._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      dStack_1f8 = (double)CONCAT44((uint)((ulonglong)(dVar5 * local_188.M[1][2]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar5 * local_188.M[1][2],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)(dVar4 * local_188.M[0][2]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar4 * local_188.M[0][2],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)(dVar20 * local_188.M[2][2]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar20 * local_188.M[2][2],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      local_220 = local_188.M[0][0] * dVar6 + local_188.M[1][0] * dVar7 + dVar2 * local_188.M[2][0]
                  + local_188.M[3][0];
      dStack_218 = local_188.M[0][1] * dVar6 + local_188.M[1][1] * dVar7 +
                   auVar27._8_8_ * local_188.M[2][1] + local_188.M[3][1];
      local_240._8_4_ = SUB84(dVar24,0);
      local_240._0_8_ = dStack_208;
      local_240._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      local_210 = local_188.M[0][2] * dVar6 + local_188.M[1][2] * dVar7 + dVar2 * local_188.M[2][2]
                  + local_188.M[3][2];
      local_108[0] = (code *)0x0;
      auVar28._0_8_ =
           local_188.M[1][0] * local_188.M[1][0] + local_188.M[0][0] * local_188.M[0][0] +
           local_188.M[2][0] * local_188.M[2][0];
      auVar28._8_8_ =
           local_188.M[1][1] * local_188.M[1][1] + local_188.M[0][1] * local_188.M[0][1] +
           local_188.M[2][1] * local_188.M[2][1];
      auVar22._8_4_ = SUB84(auVar28._8_8_,0);
      auVar22._0_8_ = auVar28._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
      auVar23._8_8_ = auVar28._8_8_;
      auVar23._0_8_ = auVar22._8_8_;
      auVar29 = maxpd(auVar28,auVar23);
      dVar20 = local_188.M[1][2] * local_188.M[1][2] + local_188.M[0][2] * local_188.M[0][2] +
               local_188.M[2][2] * local_188.M[2][2];
      auVar30._8_4_ = SUB84(dVar20,0);
      auVar30._0_8_ = dVar20;
      auVar30._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      auVar30 = maxpd(auVar29,auVar30);
      local_1f0 = SQRT(dStack_1f8 * dStack_1f8 + dStack_208 * dStack_208 + dVar24 * dVar24);
      dVar20 = SQRT(auVar30._0_8_) * *(double *)&param_1->field_0x140;
      if (dVar20 <= local_1f0) {
        local_1f0 = dVar20;
      }
      local_200 = local_240._8_8_;
      local_e0 = FMemory::Malloc(0x40,8);
      *local_e0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UClusterUnionComponent::ComponentOverlapComponentWithResultImpl'::`2'::<lambda_3>,0,1>
                           ::_vftable_;
      local_e0[1] = (code *)&local_220;
      local_e0[2] = (code *)param_1;
      local_e0[3] = (code *)param_2;
      local_e0[4] = (code *)param_3;
      local_e0[5] = (code *)local_368;
      local_e0[6] = (code *)local_3a8;
      local_e0[7] = (code *)param_5;
      if (local_e0 + 1 != (code **)0x0) {
        local_108[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UClusterUnionComponent::ComponentOverlapComponentWithResultImpl'::__l2::<lambda_3>,bool,UPrimitiveComponent_*>
                       ::Call;
      }
      VisitAllCurrentChildComponentsForCollision
                (this,DefaultCollisionChannel,local_368,
                 &FCollisionResponseParams::DefaultResponseParam,
                 &FCollisionObjectQueryParams::DefaultObjectQueryParam,
                 (TFunction<bool___cdecl(UPrimitiveComponent_*)> *)local_108);
      cVar18 = local_3a8[0];
      if (local_108[0] != (code *)0x0) {
        ppcVar16 = local_108 + 2;
        if (local_e0 != (code **)0x0) {
          ppcVar16 = local_e0;
        }
        (**(code **)(*ppcVar16 + 0x10))();
        cVar18 = local_3a8[0];
      }
    }
    else {
      (**(code **)(*(longlong *)&param_1->field_0x260 + 0x20))(&param_1->field_0x260,&local_380);
      iStack_320 = local_378;
      local_328 = local_380;
      if ((local_378 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      local_2a8.DataPtr = (FPhysicsObject **)local_328;
      FPhysicsObjectExternalInterface::LockRead(&local_278,&local_2a8);
      local_398._0_4_ = 0;
      local_3a0.Data = (FScriptContainerElement *)0x0;
      local_398 = 0;
      pFVar14 = local_380 + local_378;
      pFVar19 = local_380;
      if (local_380 != pFVar14) {
        do {
          local_388 = *pFVar19;
          local_318 = &local_388;
          uStack_310 = 1;
          local_298._12_4_ = uStack_30c;
          local_298.ArrayNum = 1;
          local_298.DataPtr = (FPhysicsObject **)local_318;
          bVar11 = Chaos::FReadPhysicsObjectInterface<0>::AreAllDisabled
                             (&local_278.Interface,&local_298);
          if (!bVar11) {
            if (((local_3a0.Data <= pFVar19) &&
                (pFVar19 < (FName *)(local_3a0.Data + (longlong)local_398._4_4_ * 8))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar3 = (code *)swi(3);
              uVar12 = (*pcVar3)();
              return (bool)uVar12;
            }
            iVar13 = (int)local_398;
            if ((int)local_398 == local_398._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_3a0,(int *)((longlong)&local_398 + 4));
            }
            local_398 = CONCAT44(local_398._4_4_,iVar13 + 1);
            *(FName *)(local_3a0.Data + (longlong)iVar13 * 8) = *pFVar19;
          }
          pFVar19 = pFVar19 + 1;
        } while (pFVar19 != pFVar14);
      }
      iStack_300 = (int)local_398;
      if (local_380 != (FName *)0x0) {
        FMemory::Free(local_380);
        iStack_300 = (int)local_398;
      }
      local_308 = (FName *)local_3a0.Data;
      local_374 = local_398._4_4_;
      local_2e0 = local_3a8;
      local_2d0 = local_350;
      local_2c8 = param_5;
      local_2f0 = &local_2e8;
      local_2f8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UClusterUnionComponent::ComponentOverlapComponentWithResultImpl'::__l8::<lambda_2>,bool,Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*>
                  ::Call;
      local_380 = (FName *)local_3a0.Data;
      local_3a0.Data = (FScriptContainerElement *)0x0;
      local_398 = 0;
      local_2c0 = local_368;
      local_378 = iStack_300;
      local_2e8 = this;
      local_2d8 = param_2;
      if ((iStack_300 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      local_288._12_4_ = uStack_2fc;
      local_288.ArrayNum = iStack_300;
      local_288.DataPtr = (FPhysicsObject **)local_308;
      Chaos::FReadPhysicsObjectInterface<0>::VisitEveryShape
                (&local_278.Interface,&local_288,
                 (TFunctionRef<bool___cdecl(Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*)>
                  *)&local_2f8);
      cVar18 = local_3a8[0];
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_278.Lock);
      if (local_380 != (FName *)0x0) {
        FMemory::Free(local_380);
      }
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_340.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_340.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_348);
      local_340.StatData.Pad[4] = '\0';
      local_340.StatData.Pad[5] = '\0';
      local_340.StatData.Pad[6] = '\0';
      local_340.StatData.Pad[7] = '\0';
      local_340.StatData.Pad[0] = local_348.s.LowPart._0_1_;
      local_340.StatData.Pad[1] = local_348.s.LowPart._1_1_;
      local_340.StatData.Pad[2] = local_348.s.LowPart._2_1_;
      local_340.StatData.Pad[3] = local_348.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_340);
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
  return (bool)cVar18;
}

// DoCustomNavigableGeometryExport @ 14827b590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UClusterUnionComponent::DoCustomNavigableGeometryExport
          (UClusterUnionComponent *this,FNavigableGeometryExport *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48 [2];
  undefined **local_38;
  undefined1 *local_30;
  FNavigableGeometryExport *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UClusterUnionComponent::DoCustomNavigableGeometryExport'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_58;
  local_58[0] = 0;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UClusterUnionComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
                ::Call;
  local_28 = param_1;
  VisitAllCurrentChildComponents
            ((UClusterUnionComponent *)&this[-1].OnComponentBoundsChangedEvent,
             (TFunction<bool___cdecl(UPrimitiveComponent_*)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return (bool)local_58[0];
}

// FindChildPhysicsObjectByShapeIndex @ 148280c20

FPhysicsObject * __thiscall
UClusterUnionComponent::FindChildPhysicsObjectByShapeIndex(UClusterUnionComponent *this,int param_1)

{
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPhysicsObject *pFVar6;
  
  if ((-1 < param_1) && (param_1 < (this->PerShapeComponentBone).ArrayNum)) {
    pFVar6 = (FPhysicsObject *)0x0;
    uVar5 = 0;
    if (param_1 < (this->PerShapeComponentBone).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPhysicsObject *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar1 = (this->PerShapeComponentBone).AllocatorInstance.Data;
    this_00 = (FWeakObjectPtr *)(pFVar1 + (longlong)param_1 * 0x18);
    if (*(longlong *)(pFVar1 + (longlong)param_1 * 0x18 + 8) != 0) {
      bVar4 = FWeakObjectPtr::IsValid(this_00);
      if ((bVar4) && (FVar2 = this_00[1], FVar2 != (FWeakObjectPtr)0x0)) {
        pFVar6 = (FPhysicsObject *)
                 (**(code **)(*(longlong *)FVar2 + 0x10))(FVar2,this_00[2].ObjectIndex);
      }
    }
    return pFVar6;
  }
  return (FPhysicsObject *)0x0;
}

// ForceRebuildGTParticleGeometry @ 148282750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UClusterUnionComponent::ForceRebuildGTParticleGeometry(UClusterUnionComponent *this)

{
  longlong *plVar1;
  byte *pbVar2;
  UObject *pUVar3;
  FImplicitObject *pFVar4;
  FImplicitObject *pFVar5;
  FClusterUnionPhysicsProxy *this_00;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  UWorld *pUVar16;
  FClusteredComponentData *pFVar17;
  TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator> *pTVar18
  ;
  TImplicitObjectTransformed<double,3,1> *this_01;
  FImplicitObjectUnionClustered *pFVar19;
  FImplicitObjectUnionClustered *this_02;
  FImplicitObjectUnion *this_03;
  undefined ***pppuVar20;
  ulong64 uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  TRefCountPtr<Chaos::FImplicitObject> TVar25;
  uint uVar26;
  FImplicitObjectUnionClustered *pFVar27;
  ForAnyElementType FVar28;
  undefined1 auStackY_3a8 [32];
  undefined1 local_358;
  undefined1 local_357 [7];
  ForAnyElementType local_350;
  undefined8 local_348;
  TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> local_340;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_330;
  uint local_31c;
  FWeakObjectPtr local_318;
  FImplicitObjectUnionClustered *local_310;
  TRefCountPtr<Chaos::FImplicitObject> local_308;
  longlong local_300;
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2e8;
  undefined8 local_2d8;
  FScriptContainerElement *local_2d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c8;
  FWeakObjectPtr local_2b8;
  FWeakObjectPtr local_2b0;
  FObjectKey local_2a8;
  FScriptContainerElement *local_2a0;
  TRefCountPtr<Chaos::FImplicitObject> local_298;
  TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> local_290;
  FScriptContainerElement *local_280;
  UClusterUnionComponent *local_278;
  FScriptContainerElement *local_270;
  UObject *local_268;
  UObject *local_260;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_248;
  FLockedPhysicsObjectExternalInterface<0> local_238;
  code *local_218 [2];
  undefined **local_208;
  ForAnyElementType *local_200;
  undefined ***local_1f0;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  this_02 = (FImplicitObjectUnionClustered *)0x0;
  local_31c = 0;
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    pUVar16 = *(UWorld **)&this->field_0xb0;
    local_278 = this;
    if (pUVar16 == (UWorld *)0x0) {
      pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    FPhysicsObjectExternalInterface::LockRead(&local_238,(FChaosScene *)pUVar16->PhysicsScene);
    local_1e8.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
    local_1e8.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x1f8;
    local_1e8.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x200;
    local_1e8.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x208;
    uVar26 = ((*(int *)&(this->PendingComponentSync).field_0x8 -
              *(int *)&(this->PendingComponentSync).field_0x34) -
             *(int *)&(this->PerComponentData).field_0x34) +
             *(int *)&(this->PerComponentData).field_0x8;
    local_1e8.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x210;
    local_1e8.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x218;
    local_1e8.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x220;
    local_1e8.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0x228;
    local_1e8.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x230;
    local_1e8.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0x238;
    local_1e8.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x240;
    local_1e8.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0x248;
    local_2f8.Data = (FScriptContainerElement *)0x0;
    local_2f0 = 0;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    if (0 < (int)uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar26,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
    }
    local_1f0 = (undefined ***)0x0;
    local_208 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UClusterUnionComponent::GetAllCurrentChildComponents'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    local_200 = &local_2f8;
    local_218[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UClusterUnionComponent::GetAllCurrentChildComponents'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
                   ::Call;
    VisitAllCurrentChildComponents(this,(TFunction<bool___cdecl(UPrimitiveComponent_*)> *)local_218)
    ;
    if (local_218[0] != (code *)0x0) {
      pppuVar20 = &local_208;
      if (local_1f0 != (undefined ***)0x0) {
        pppuVar20 = local_1f0;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    uVar21 = local_2f0 & 0xffffffff;
    local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.ArrayNum = 0;
    local_330.ArrayMax = 0;
    local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.ArrayNum = 0;
    local_340.ArrayMax = 0;
    if ((int)local_2f0 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar21);
    }
    if (0 < (int)local_2f0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_2f0,&local_330.AllocatorInstance,0,&local_330.ArrayMax);
      uVar21 = local_2f0 & 0xffffffff;
    }
    iVar14 = (int)uVar21;
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar21);
    }
    if (local_340.ArrayMax < iVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar14,&local_340.AllocatorInstance,local_340.ArrayNum,&local_340.ArrayMax);
      uVar21 = local_2f0 & 0xffffffff;
    }
    dVar12 = _UNK_150689688;
    dVar11 = ___xmm_3ff00000000000003ff0000000000000;
    dVar10 = _UNK_150689518;
    dVar9 = ___xmm_00000000000000003ff0000000000000;
    local_31c = (uint)uVar21;
    uVar22 = (ulonglong)(int)local_31c;
    local_270 = local_2f8.Data + uVar22 * 8;
    FVar28.Data = local_2f8.Data;
    pFVar27 = this_02;
    while( true ) {
      pFVar24 = local_270;
      local_2a0 = FVar28.Data;
      if ((int)uVar21 != (int)uVar22) {
        local_358 = 0;
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_358);
      }
      if (FVar28.Data == pFVar24) break;
      pUVar3 = *(UObject **)FVar28.Data;
      if ((pUVar3 == (UObject *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Child != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                              ,0x23a,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_318.ObjectIndex = 0;
      local_318.ObjectSerialNumber = 0;
      if (pUVar3 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        local_2b8.ObjectIndex = 0;
        local_2b8.ObjectSerialNumber = 0;
        local_268 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_2b8,(FObjectPtr)&local_268);
        local_318 = local_2b8;
      }
      pFVar17 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                        *)&this->PerComponentData,(TObjectKey<UPrimitiveComponent> *)&local_318);
      if (pFVar17 == (FClusteredComponentData *)0x0) {
        local_2a8.ObjectIndex = 0;
        local_2a8.ObjectSerialNumber = 0;
        if (pUVar3 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          local_2b0.ObjectIndex = 0;
          local_2b0.ObjectSerialNumber = 0;
          local_260 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&local_2b0,(FObjectPtr)&local_260);
          local_2a8.ObjectIndex = local_2b0.ObjectIndex;
          local_2a8.ObjectSerialNumber = local_2b0.ObjectSerialNumber;
        }
        pTVar18 = &TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                   ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                           *)&this->PendingComponentSync,
                          (TObjectKey<UPrimitiveComponent> *)&local_2a8)->BonesData;
        if (pTVar18 !=
            (TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
             *)0x0) {
          uVar26 = *(int *)&(pTVar18->Elements).field_0x8 - *(int *)&(pTVar18->Elements).field_0x34;
          local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2e8.ArrayNum = 0;
          local_2e8.ArrayMax = 0;
          if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
          }
          if (0 < (int)uVar26) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar26,&local_2e8.AllocatorInstance,0,&local_2e8.ArrayMax);
          }
          Algo::
          Transform<TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>,TArray<int,TSizedDefaultAllocator<32>_>_&,int_FClusterUnionBoneData::*>
                    (pTVar18,&local_2e8,(pdm_f08077e3)0x0);
          FVar28.Data = local_2e8.AllocatorInstance.Data;
          uVar26 = local_2e8.ArrayNum;
          local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2e8.ArrayNum = 0;
          local_2e8.ArrayMax = 0;
          goto LAB_148282b3d;
        }
        local_2d0 = (FScriptContainerElement *)0x0;
        local_350.Data = (FScriptContainerElement *)0x0;
        local_348 = 0;
        uVar26 = 0;
      }
      else {
        local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.ArrayNum = 0;
        local_2c8.ArrayMax = 0;
        GetBoneIDsFromComponentData<TArray<int,TSizedDefaultAllocator<32>_>,FClusteredComponentData>
                  (this,&local_2c8,pFVar17);
        FVar28.Data = local_2c8.AllocatorInstance.Data;
        uVar26 = local_2c8.ArrayNum;
        local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.ArrayNum = 0;
        local_2c8.ArrayMax = 0;
LAB_148282b3d:
        local_350.Data = (FScriptContainerElement *)0x0;
        local_348 = 0;
        local_2d0 = FVar28.Data;
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        if (0 < (int)uVar26) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar26,&local_350,0,(int *)((longlong)&local_348 + 4));
          local_2d0 = FVar28.Data;
        }
      }
      pFVar24 = local_2d0 + (longlong)(int)uVar26 * 4;
      for (pFVar23 = local_2d0; pFVar23 != pFVar24; pFVar23 = pFVar23 + 4) {
        local_2d8 = (**(code **)(*(longlong *)&pUVar3[0xf].field_0x8 + 0x10))
                              (&pUVar3[0xf].field_0x8,*(undefined4 *)pFVar23);
        if (((local_350.Data <= (FScriptContainerElement *)&local_2d8) &&
            ((FScriptContainerElement *)&local_2d8 < local_350.Data + (longlong)local_348._4_4_ * 8)
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar14 = (int)local_348;
        if ((int)local_348 == local_348._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_350,(int *)((longlong)&local_348 + 4));
        }
        local_348 = CONCAT44(local_348._4_4_,iVar14 + 1);
        *(undefined8 *)(local_350.Data + (longlong)iVar14 * 8) = local_2d8;
      }
      iVar14 = (int)local_348;
      local_258 = local_350.Data;
      if (((int)local_348 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iStack_250 = iVar14;
      local_248._12_4_ = uStack_24c;
      local_248.ArrayNum = iVar14;
      local_248.DataPtr = (FPhysicsObject **)local_258;
      Chaos::FReadPhysicsObjectInterface<0>::GetAllRigidParticles
                (&local_238.Interface,&local_290,&local_248,false);
      iVar14 = local_290.ArrayNum;
      pFVar24 = local_290.AllocatorInstance.Data + (longlong)local_290.ArrayNum * 8;
      TVar25.Reference = local_308.Reference;
      FVar28.Data = local_290.AllocatorInstance.Data;
      local_280 = pFVar24;
      while( true ) {
        if (local_290.ArrayNum != iVar14) {
          local_357[0] = 0;
          `TCheckedPointerIterator<Chaos::TPBDRigidParticle<double,3>_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_357);
        }
        if (FVar28.Data == pFVar24) break;
        local_300 = *(longlong *)FVar28.Data;
        if ((local_300 != 0) && (*(longlong *)(local_300 + 0x50) != 0)) {
          local_188.Rotation.ZW.m128d_f64[0] = (double)(float)*(undefined8 *)(local_300 + 0x48);
          local_188.Rotation.ZW.m128d_f64[1] =
               (double)(float)((ulonglong)*(undefined8 *)(local_300 + 0x48) >> 0x20);
          local_188.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)(local_300 + 0x44),0);
          local_188.Rotation.XY.m128d_f64[0] = (double)*(float *)(local_300 + 0x40);
          local_188.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)*(float *)(local_300 + 0x44) >> 0x20);
          local_188.Translation.ZW.m128d_f64[0] = *(double *)(local_300 + 0x30);
          local_188.Translation.XY.m128d_f64[0] = *(double *)(local_300 + 0x20);
          local_188.Translation.XY.m128d_f64[1] = *(double *)(local_300 + 0x28);
          local_188.Translation.ZW.m128d_f64[1] = 0.0;
          local_188.Scale3D.XY.m128d_f64[0] = dVar11;
          local_188.Scale3D.XY.m128d_f64[1] = dVar12;
          local_188.Scale3D.ZW.m128d_f64[0] = dVar9;
          local_188.Scale3D.ZW.m128d_f64[1] = dVar10;
          UE::Math::TTransform<double>::GetRelativeTransform(&local_188,&local_128,&local_1e8);
          lVar8 = local_300;
          this_01 = ::operator_new(0xc0);
          pFVar19 = this_02;
          if (this_01 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
            local_308.Reference = *(FImplicitObject **)(lVar8 + 0x50);
            local_c8 = local_128.Rotation.XY.m128d_f64[0];
            dStack_c0 = local_128.Rotation.XY.m128d_f64[1];
            local_b8 = local_128.Rotation.ZW.m128d_f64[0];
            dStack_b0 = local_128.Rotation.ZW.m128d_f64[1];
            local_a8 = local_128.Translation.XY.m128d_f64[0];
            dStack_a0 = local_128.Translation.XY.m128d_f64[1];
            local_98 = local_128.Translation.ZW.m128d_f64[0];
            dStack_90 = local_128.Translation.ZW.m128d_f64[1];
            local_88 = local_128.Scale3D.XY.m128d_f64[0];
            dStack_80 = local_128.Scale3D.XY.m128d_f64[1];
            local_78 = local_128.Scale3D.ZW.m128d_f64[0];
            dStack_70 = local_128.Scale3D.ZW.m128d_f64[1];
            if (local_308.Reference != (FImplicitObject *)0x0) {
              LOCK();
              *(int *)&(local_308.Reference)->_padding_ = (int)(local_308.Reference)->_padding_ + 1;
              UNLOCK();
            }
            pFVar27 = (FImplicitObjectUnionClustered *)&DAT_00000001;
            pFVar19 = (FImplicitObjectUnionClustered *)
                      Chaos::TImplicitObjectTransformed<double,3,1>::
                      TImplicitObjectTransformed<double,3,1>
                                (this_01,&local_308,(TRigidTransform<double,3> *)&local_c8);
            TVar25.Reference = local_308.Reference;
          }
          if ((pFVar27 != (FImplicitObjectUnionClustered *)0x0) &&
             (pFVar27 = (FImplicitObjectUnionClustered *)0x0,
             TVar25.Reference != (FImplicitObject *)0x0)) {
            LOCK();
            plVar1 = &(TVar25.Reference)->_padding_;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar7 == 1) && (*(int *)((longlong)&(TVar25.Reference)->_padding_ + 4) == 0))
            {
              (**(code **)(TVar25.Reference)->_padding_)(TVar25.Reference,1);
            }
          }
          pFVar4 = *(FImplicitObject **)(lVar8 + 0x50);
          if (pFVar4 != (FImplicitObject *)0x0) {
            LOCK();
            *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
            UNLOCK();
          }
          pFVar5 = ((TRefCountPtr<Chaos::FImplicitObject> *)&pFVar19->_padding_)->Reference;
          if (pFVar5 != pFVar4) {
            ((TRefCountPtr<Chaos::FImplicitObject> *)&pFVar19->_padding_)->Reference = pFVar4;
            if (pFVar4 != (FImplicitObject *)0x0) {
              LOCK();
              *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
              UNLOCK();
            }
            if (pFVar5 != (FImplicitObject *)0x0) {
              LOCK();
              plVar1 = &pFVar5->_padding_;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if (((int)lVar8 == 1) && (*(int *)((longlong)&pFVar5->_padding_ + 4) == 0)) {
                (**(code **)pFVar5->_padding_)(pFVar5,1);
              }
            }
          }
          if (pFVar4 != (FImplicitObject *)0x0) {
            LOCK();
            plVar1 = &pFVar4->_padding_;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar8 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
              (**(code **)pFVar4->_padding_)(pFVar4,1);
            }
          }
          LOCK();
          *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
          UNLOCK();
          local_310 = pFVar19;
          if (((local_330.AllocatorInstance.Data <= (FScriptContainerElement *)&local_310) &&
              ((FScriptContainerElement *)&local_310 <
               local_330.AllocatorInstance.Data + (longlong)local_330.ArrayMax * 8)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar15 = local_330.ArrayNum;
          if (local_330.ArrayNum == local_330.ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_330.AllocatorInstance,&local_330.ArrayMax);
          }
          local_330.ArrayNum = iVar15 + 1;
          *(undefined8 *)(local_330.AllocatorInstance.Data + (longlong)iVar15 * 8) = 0;
          *(FImplicitObjectUnionClustered **)
           (local_330.AllocatorInstance.Data + (longlong)iVar15 * 8) = local_310;
          local_310 = (FImplicitObjectUnionClustered *)0x0;
          if (((local_340.AllocatorInstance.Data <= (FScriptContainerElement *)&local_300) &&
              ((FScriptContainerElement *)&local_300 <
               local_340.AllocatorInstance.Data + (longlong)local_340.ArrayMax * 8)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_340.ArrayNum == local_340.ArrayMax) {
            local_340.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_340.AllocatorInstance,&local_340.ArrayMax);
          }
          *(longlong *)(local_340.AllocatorInstance.Data + (longlong)local_340.ArrayNum * 8) =
               local_300;
          pFVar24 = local_280;
          local_340.ArrayNum = local_340.ArrayNum + 1;
        }
        FVar28.Data = FVar28.Data + 8;
      }
      if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.AllocatorInstance.Data);
      }
      if (local_350.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data);
      }
      if (local_2d0 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0);
      }
      uVar21 = local_2f0 & 0xffffffff;
      FVar28.Data = local_2a0 + 8;
      uVar22 = (ulonglong)local_31c;
      this = local_278;
    }
    if (local_340.ArrayNum != 0) {
      if (local_330.ArrayNum == 0) {
        pFVar27 = ::operator_new(0xd0);
        if (pFVar27 != (FImplicitObjectUnionClustered *)0x0) {
          this_02 = Chaos::FImplicitObjectUnionClustered::FImplicitObjectUnionClustered(pFVar27);
        }
      }
      else {
        this_03 = ::operator_new(0x70);
        if (this_03 != (FImplicitObjectUnion *)0x0) {
          this_02 = (FImplicitObjectUnionClustered *)
                    Chaos::FImplicitObjectUnion::FImplicitObjectUnion(this_03,&local_330);
        }
      }
      if ((this_02->_padding_ & 0x100000000) == 0) {
        Chaos::FImplicitObjectUnion::CheckNotLocked((FImplicitObjectUnion *)this_02);
        pbVar2 = (byte *)((longlong)&this_02->_padding_ + 4);
        *pbVar2 = *pbVar2 | 1;
        Chaos::FImplicitObjectUnion::RebuildBVH((FImplicitObjectUnion *)this_02);
      }
      this_00 = this->PhysicsProxy;
      LOCK();
      *(int *)&this_02->_padding_ = (int)this_02->_padding_ + 1;
      UNLOCK();
      local_298.Reference = (FImplicitObject *)this_02;
      Chaos::FClusterUnionPhysicsProxy::SetGeometry_External(this_00,&local_298,&local_340);
      if ((FImplicitObjectUnionClustered *)local_298.Reference !=
          (FImplicitObjectUnionClustered *)0x0) {
        LOCK();
        plVar1 = &(local_298.Reference)->_padding_;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar8 == 1) && (*(int *)((longlong)&(local_298.Reference)->_padding_ + 4) == 0)) {
          (**(code **)(local_298.Reference)->_padding_)(local_298.Reference,1);
        }
      }
    }
    if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.AllocatorInstance.Data);
    }
    DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
              ((TRefCountPtr<Chaos::FImplicitObject> *)local_330.AllocatorInstance.Data,
               local_330.ArrayNum);
    if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.AllocatorInstance.Data);
    }
    if (local_2f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data);
    }
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_238.Lock);
  }
  return;
}

// ForceSetChildToParent @ 1482831f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::ForceSetChildToParent
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint local_res8 [2];
  UPrimitiveComponent *local_res10;
  longlong local_68;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_50;
  uint *local_48;
  UPrimitiveComponent **local_40;
  
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    local_res10 = param_1;
    if (param_1 == (UPrimitiveComponent *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3065361942051814031>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                         ,0x571,"InComponent");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      uVar2 = param_2->ArrayNum;
      if (uVar2 == param_3->ArrayNum) {
        local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.ArrayNum = 0;
        local_60.ArrayMax = 0;
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if (0 < (int)uVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar2,&local_60.AllocatorInstance,0,&local_60.ArrayMax);
        }
        iVar6 = param_2->ArrayNum;
        local_res8[0] = 0;
        if (0 < iVar6) {
          do {
            uVar2 = local_res8[0];
            puVar1 = &local_res10->field_0x260;
            pcVar3 = *(code **)(*(longlong *)puVar1 + 0x10);
            uVar5 = 0;
            if ((int)local_res8[0] < iVar6) {
              uVar5 = ~local_res8[0] >> 0x1f;
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
            local_68 = (*pcVar3)(puVar1,*(undefined4 *)
                                         ((param_2->AllocatorInstance).Data +
                                         (longlong)(int)uVar2 * 4));
            if (local_68 == 0) {
              local_48 = local_res8;
              local_40 = &local_res10;
              local_50 = param_2;
              bVar4 = `UClusterUnionComponent::ForceSetChildToParent'::__l7::<lambda_1>::operator()
                                (&local_50);
              if (bVar4) goto LAB_1482833b4;
            }
            else {
LAB_1482833b4:
              if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
                  ((FScriptContainerElement *)&local_68 <
                   local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 8)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = local_60.ArrayNum;
              if (local_60.ArrayNum == local_60.ArrayMax) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_60.AllocatorInstance,&local_60.ArrayMax);
              }
              local_60.ArrayNum = iVar6 + 1;
              *(longlong *)(local_60.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_68;
            }
            iVar6 = param_2->ArrayNum;
            local_res8[0] = local_res8[0] + 1;
          } while ((int)local_res8[0] < iVar6);
        }
        if (local_60.ArrayNum != 0) {
          Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External
                    (this->PhysicsProxy,&local_60,param_3,true);
        }
        if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.AllocatorInstance.Data);
        }
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3065361942051814031>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                           ,0x571,"BoneIds.Num() == ChildToParent.Num()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  return;
}

// GetActors @ 148284300

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
UClusterUnionComponent::GetActors
          (UClusterUnionComponent *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  FWeakObjectPtr local_res8;
  UObject *local_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
  *pTStack_58;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar9 = *(int *)&(this->ActorToComponents).field_0x8 -
          *(int *)&(this->ActorToComponents).field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_80,
             (TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
              *)&this->ActorToComponents);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_80._16_16_;
  local_48 = (longlong *)local_80._0_8_;
  auStack_40._0_8_ = local_80._8_8_;
  local_28 = local_60;
  pTStack_20 = pTStack_58;
  uVar7 = local_80._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
              *)&this->ActorToComponents;
  if (local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
    do {
      lVar8 = (longlong)(int)uVar7 * 0x68;
      local_res8.ObjectIndex = *(int *)(lVar8 + *local_48);
      local_res8.ObjectSerialNumber = *(int *)(lVar8 + 4 + *local_48);
      local_88 = FWeakObjectPtr::Get(&local_res8);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
         ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)*piVar1 * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_88;
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetAddedBoneIdsForComponent @ 148284510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UClusterUnionComponent::GetAddedBoneIdsForComponent
          (UClusterUnionComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPrimitiveComponent *param_1)

{
  FClusteredComponentData *pFVar1;
  TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator> *pTVar2;
  uint uVar3;
  FWeakObjectPtr local_res8;
  UPrimitiveComponent *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  }
  pFVar1 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
           ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                   *)&this->PerComponentData,(TObjectKey<UPrimitiveComponent> *)&local_res8);
  if (pFVar1 == (FClusteredComponentData *)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (param_1 != (UPrimitiveComponent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    }
    pTVar2 = &TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
              ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                      *)&this->PendingComponentSync,(TObjectKey<UPrimitiveComponent> *)&local_res8)
              ->BonesData;
    if (pTVar2 == (TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
                   *)0x0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
    uVar3 = *(int *)&(pTVar2->Elements).field_0x8 - *(int *)&(pTVar2->Elements).field_0x34;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
    }
    Algo::
    Transform<TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>,TArray<int,TSizedDefaultAllocator<32>_>_&,int_FClusterUnionBoneData::*>
              (pTVar2,&local_28,(pdm_f08077e3)0x0);
  }
  else {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    GetBoneIDsFromComponentData<TArray<int,TSizedDefaultAllocator<32>_>,FClusteredComponentData>
              (this,&local_28,pFVar1);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_28.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_28.ArrayMax;
  return __return_storage_ptr__;
}

// GetAllCurrentActors @ 148284760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
UClusterUnionComponent::GetAllCurrentActors
          (UClusterUnionComponent *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined ***pppuVar1;
  uint uVar2;
  undefined1 auStackY_78 [32];
  code *local_48 [2];
  undefined **local_38;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = *(int *)&(this->ActorToComponents).field_0x8 -
          *(int *)&(this->ActorToComponents).field_0x34;
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UClusterUnionComponent::GetAllCurrentActors'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UClusterUnionComponent::GetAllCurrentActors'::__l2::<lambda_1>,bool,AActor_*>
                  ::Call;
    local_30 = __return_storage_ptr__;
    VisitAllCurrentActors(this,(TFunction<bool___cdecl(AActor_*)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar1 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar1 = local_20;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetAllCurrentChildComponents @ 148284850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
UClusterUnionComponent::GetAllCurrentChildComponents
          (UClusterUnionComponent *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined ***pppuVar1;
  uint uVar2;
  undefined1 auStackY_78 [32];
  code *local_48 [2];
  undefined **local_38;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = ((*(int *)&(this->PendingComponentSync).field_0x8 -
           *(int *)&(this->PendingComponentSync).field_0x34) -
          *(int *)&(this->PerComponentData).field_0x34) +
          *(int *)&(this->PerComponentData).field_0x8;
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UClusterUnionComponent::GetAllCurrentChildComponents'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UClusterUnionComponent::GetAllCurrentChildComponents'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
                  ::Call;
    local_30 = __return_storage_ptr__;
    VisitAllCurrentChildComponents(this,(TFunction<bool___cdecl(UPrimitiveComponent_*)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar1 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar1 = local_20;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetAllPhysicsObjects @ 148284940

TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UClusterUnionComponent::GetAllPhysicsObjects
          (UClusterUnionComponent *this,
          TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)this + 0x10))(this,0);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,&__return_storage_ptr__->ArrayMax)
  ;
  *(undefined8 *)(__return_storage_ptr__->AllocatorInstance).Data = uVar1;
  return __return_storage_ptr__;
}

// GetBodyInstance @ 148284f80

FBodyInstance * __thiscall
UClusterUnionComponent::GetBodyInstance
          (UClusterUnionComponent *this,FName param_1,bool param_2,int param_3)

{
  return (FBodyInstance *)0x0;
}

// GetChaosScene @ 1482853f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPhysScene_Chaos * __thiscall UClusterUnionComponent::GetChaosScene(UClusterUnionComponent *this)

{
  AActor *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FPhysScene_Chaos *pFVar4;
  
  this_00 = *(AActor **)&this->field_0xa8;
  if (this_00 != (AActor *)0x0) {
    pUVar3 = AActor::GetWorld(this_00);
    if (pUVar3 != (UWorld *)0x0) {
      pUVar3 = AActor::GetWorld(this_00);
      return pUVar3->PhysicsScene;
    }
  }
  if (GWorld.World == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                       ,0x7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPhysScene_Chaos *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (GWorld.World)->PhysicsScene;
}

// GetComponentVelocity @ 148286710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
UClusterUnionComponent::GetComponentVelocity
          (UClusterUnionComponent *this,TVector<double> *__return_storage_ptr__)

{
  FPhysicsObject *local_res8 [4];
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_38;
  FLockedPhysicsObjectExternalInterface<0> local_28;
  
  if (this->PhysicsProxy == (FClusterUnionPhysicsProxy *)0x0) {
    UPrimitiveComponent::GetComponentVelocity((UPrimitiveComponent *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  local_res8[0] = (this->PhysicsProxy->PhysicsObject).Ptr;
  local_38.ArrayNum = 1;
  local_38.DataPtr = local_res8;
  FPhysicsObjectExternalInterface::LockRead(&local_28,&local_38);
  Chaos::FReadPhysicsObjectInterface<0>::GetV
            (&local_28.Interface,__return_storage_ptr__,local_res8[0]);
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28.Lock);
  return __return_storage_ptr__;
}

// GetIdFromGTParticle @ 148288ea0

int __thiscall
UClusterUnionComponent::GetIdFromGTParticle
          (UClusterUnionComponent *this,TGeometryParticle<double,3> *param_1)

{
  return 0;
}

// GetLifetimeReplicatedProps @ 148289670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::GetLifetimeReplicatedProps
          (UClusterUnionComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  USceneComponent::GetLifetimeReplicatedProps((USceneComponent *)this,param_1);
  local_28.bIsPushBased = true;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.RepIndex = 0x11;
  local_38.PropertyName = L"ReplicatedRigidState";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 5;
  local_38.PropertyName = L"RelativeLocation";
  local_38.ArrayDim = 1;
  DisableReplicatedLifetimeProperty(&local_38,param_1);
  local_38.RepIndex = 6;
  local_38.PropertyName = L"RelativeRotation";
  local_38.ArrayDim = 1;
  DisableReplicatedLifetimeProperty(&local_38,param_1);
  return;
}

// GetPhysicsObjectById @ 14828b9a0

FPhysicsObject * __thiscall
UClusterUnionComponent::GetPhysicsObjectById(UClusterUnionComponent *this,int param_1)

{
  if (*(longlong *)&this->bEnableDamageFromCollision == 0) {
    return (FPhysicsObject *)0x0;
  }
  return *(FPhysicsObject **)(*(longlong *)&this->bEnableDamageFromCollision + 0x140);
}

// GetPhysicsObjectByName @ 14828b9c0

FPhysicsObject * __thiscall
UClusterUnionComponent::GetPhysicsObjectByName(UClusterUnionComponent *this,FName *param_1)

{
  FPhysicsObject *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014828b9c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FPhysicsObject *)(**(code **)(*(longlong *)this + 0x10))(this,0);
  return pFVar1;
}

// GetPrimitiveComponents @ 14828bb20

TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
UClusterUnionComponent::GetPrimitiveComponents
          (UClusterUnionComponent *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  FWeakObjectPtr local_res8;
  UObject *local_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *pTStack_58;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar9 = *(int *)&(this->PerComponentData).field_0x8 - *(int *)&(this->PerComponentData).field_0x34
  ;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_80,
             (TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
              *)&this->PerComponentData);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_80._16_16_;
  local_48 = (longlong *)local_80._0_8_;
  auStack_40._0_8_ = local_80._8_8_;
  local_28 = local_60;
  pTStack_20 = pTStack_58;
  uVar7 = local_80._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
              *)&this->PerComponentData;
  if (local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
    do {
      lVar8 = (longlong)(int)uVar7 * 0x38;
      local_res8.ObjectIndex = *(int *)(lVar8 + *local_48);
      local_res8.ObjectSerialNumber = *(int *)(lVar8 + 4 + *local_48);
      local_88 = FWeakObjectPtr::Get(&local_res8);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
         ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)*piVar1 * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_88;
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14828c020

UClass * __cdecl UClusterUnionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClusterUnionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ClusterUnionComponent",
               &Z_Registration_Info_UClass_UClusterUnionComponent.InnerSingleton,
               StaticRegisterNativesUClusterUnionComponent,2000,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UClusterUnionComponent>,
               InternalVTableHelperCtorCaller<UClusterUnionComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClusterUnionComponent.InnerSingleton;
}

// GetSpatialAcceleration @ 14828e1f0

ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> * __thiscall
UClusterUnionComponent::GetSpatialAcceleration(UClusterUnionComponent *this)

{
  return (this->AccelerationStructure).Ptr;
}

// HandleAddOrModifiedClusteredComponent @ 14828ef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::HandleAddOrModifiedClusteredComponent
          (UClusterUnionComponent *this,FMappedComponentKey *param_1,
          TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
          *param_2,TTransform<double> *param_3,
          TArray<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  TMap<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
  *this_00;
  longlong lVar1;
  AActor *this_01;
  UObject *pUVar2;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FMappedComponentKey *pFVar6;
  UClusterUnionComponent *this_02;
  char cVar7;
  bool bVar8;
  ENetMode EVar9;
  int iVar10;
  int iVar11;
  UWorld *pUVar12;
  FClusteredComponentData *pFVar13;
  ForElementType<FSetElementId> this_03;
  UClass *pUVar14;
  UClusterUnionReplicatedProxyComponent *pUVar15;
  FMappedBoneData *pFVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  FScriptContainerElement *pFVar22;
  ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> FVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> FVar27;
  int *piVar28;
  ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> FVar29;
  undefined1 auStackY_308 [32];
  bool local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4 [4];
  uint local_2b0;
  ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> local_2a8;
  TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_> local_2a0;
  int local_290;
  int iStack_28c;
  FWeakObjectPtr local_288;
  FWeakObjectPtr local_280;
  FWeakObjectPtr local_278;
  int local_270;
  int iStack_26c;
  int *local_268;
  TArray<int,TSizedDefaultAllocator<32>_> local_260;
  TPairInitializer<TObjectKey<AActor>_&&,FClusteredActorData_const_&> local_250;
  FWeakObjectPtr local_240;
  AActor *local_238;
  FWeakObjectPtr local_230;
  AActor *local_228;
  UClusterUnionReplicatedProxyComponent *local_220;
  FMappedComponentKey *local_218;
  UClusterUnionComponent *local_210;
  TArray<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_>
  *local_208;
  TTransform<double> *local_200;
  undefined1 local_1f8 [8];
  FObjectKey local_1f0;
  int local_1e8;
  int local_1e4;
  FObjectKey local_1e0;
  int local_1d8;
  int local_1d4;
  FWeakObjectPtr *local_1d0;
  ForElementType<FSetElementId> *local_1c8;
  TVector<double>_u_0 local_1c0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  char local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  FLockedPhysicsObjectExternalInterface<0> local_158;
  undefined1 local_138 [128];
  undefined1 local_b8 [32];
  ForElementType<FSetElementId> local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_208 = param_4;
  if (param_1->ComponentPtr == (UPrimitiveComponent *)0x0) {
    return;
  }
  local_2a8 = (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)param_2;
  local_218 = param_1;
  local_210 = this;
  local_200 = param_3;
  cVar7 = (**(code **)(*(longlong *)param_1->ComponentPtr + 0x3c8))();
  if (cVar7 == '\0') {
    return;
  }
  if ((*(UWorld **)&param_1->ComponentPtr->field_0xb0 == (UWorld *)0x0) &&
     (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1->ComponentPtr),
     pUVar12 == (UWorld *)0x0)) {
    return;
  }
  uVar18 = (param_1->ComponentKey).ObjectKey.ObjectSerialNumber;
  this_00 = &this->PerComponentData;
  iVar11 = (param_1->ComponentKey).ObjectKey.ObjectIndex;
  uVar17 = iVar11 - uVar18 ^ uVar18 >> 0xd;
  uVar25 = (-0x61c88647 - uVar18) - uVar17 ^ uVar17 << 8;
  uVar26 = (uVar18 - uVar25) - uVar17 ^ uVar25 >> 0xd;
  uVar17 = (uVar17 - uVar26) - uVar25 ^ uVar26 >> 0xc;
  uVar25 = (uVar25 - uVar17) - uVar26 ^ uVar17 << 0x10;
  uVar26 = (uVar26 - uVar25) - uVar17 ^ uVar25 >> 5;
  uVar17 = (uVar17 - uVar26) - uVar25 ^ uVar26 >> 3;
  uVar25 = (uVar25 - uVar17) - uVar26 ^ uVar17 << 10;
  uVar17 = (uVar26 - uVar25) - uVar17 ^ uVar25 >> 0xf;
  if (*(int *)&(this->PerComponentData).field_0x8 != *(int *)&(this->PerComponentData).field_0x34) {
    puVar21 = *(undefined1 **)&(this->PerComponentData).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->PerComponentData).field_0x38;
    }
    iVar10 = *(int *)(puVar21 +
                     (ulonglong)(*(int *)&(this->PerComponentData).field_0x48 - 1U & uVar17) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)this_00;
      do {
        lVar19 = (longlong)iVar10 * 0x38;
        if ((*(int *)(lVar19 + lVar1) == iVar11) && (*(uint *)(lVar19 + 4 + lVar1) == uVar18)) {
          local_2b8 = iVar10 == -1;
          pFVar13 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                    ::FindOrAddImpl<TObjectKey<UPrimitiveComponent>_const_&>
                              ((TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                                *)this_00,uVar17,&param_1->ComponentKey);
          if (iVar10 != -1) goto LAB_14828f4aa;
          goto LAB_14828f126;
        }
        iVar10 = *(int *)(lVar19 + 0x30 + lVar1);
      } while (iVar10 != -1);
    }
  }
  pFVar13 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
            ::FindOrAddImpl<TObjectKey<UPrimitiveComponent>_const_&>
                      ((TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                        *)this_00,uVar17,&param_1->ComponentKey);
  local_2b8 = true;
LAB_14828f126:
  TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  ::Remove((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
            *)&this->PendingComponentSync,&param_1->ComponentKey);
  this_01 = *(AActor **)&param_1->ComponentPtr->field_0xa8;
  if (this_01 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    local_280.ObjectIndex = 0;
    local_280.ObjectSerialNumber = 0;
    local_250.Value = (FClusteredActorData *)this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FWeakObjectPtr::operator=(&local_280,(FObjectPtr)&local_250.Value);
    local_240 = local_280;
    this_03 = (ForElementType<FSetElementId>)
              TMapBase<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
              ::Find((TMapBase<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
                      *)&this->ActorToComponents,(TObjectKey<AActor> *)&local_240);
    if (this_03 == (ForElementType<FSetElementId>)0x0) {
      local_90 = 0;
      local_8c = 0x80;
      local_88 = 0xffffffff;
      local_84 = 0;
      local_70 = 0;
      local_68 = 1;
      local_b8._0_8_ = this_03;
      local_b8._8_8_ = this_03;
      local_98 = this_03;
      local_78 = this_03;
      TSet<TObjectKey<UPrimitiveComponent>,DefaultKeyFuncs<TObjectKey<UPrimitiveComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectKey<UPrimitiveComponent>_const_&>
                ((TSet<TObjectKey<UPrimitiveComponent>,DefaultKeyFuncs<TObjectKey<UPrimitiveComponent>,0>,FDefaultSetAllocator>
                  *)local_b8,(TObjectKey<UPrimitiveComponent> *)(local_1f8 + 4),(bool *)param_1);
      local_68 = this_01->bReplicateMovement;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      local_278.ObjectIndex = 0;
      local_278.ObjectSerialNumber = 0;
      local_238 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=(&local_278,(FObjectPtr)&local_238);
      local_230 = local_278;
      local_1d0 = &local_230;
      local_1c8 = (ForElementType<FSetElementId> *)local_b8;
      TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TObjectKey<AActor>_&&,FClusteredActorData_const_&>_>
                ((TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
                  *)&this->ActorToComponents,&local_250,(bool *)&local_1d0);
      bVar8 = IsAuthority(this);
      if ((bVar8) && (this_01 != *(AActor **)&this->field_0xa8)) {
        AActor::SetReplicatingMovement(this_01,false);
      }
      local_70 = 0;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78);
      }
      TSparseArray<TSparseSetElement<TObjectKey<UPrimitiveComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectKey<UPrimitiveComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectKey<UPrimitiveComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b8);
    }
    else {
      TSet<TObjectKey<UPrimitiveComponent>,DefaultKeyFuncs<TObjectKey<UPrimitiveComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectKey<UPrimitiveComponent>_const_&>
                ((TSet<TObjectKey<UPrimitiveComponent>,DefaultKeyFuncs<TObjectKey<UPrimitiveComponent>,0>,FDefaultSetAllocator>
                  *)this_03,(TObjectKey<UPrimitiveComponent> *)local_1f8,(bool *)param_1);
    }
    local_228 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FWeakObjectPtr::operator=(&(pFVar13->Owner).WeakPtr,(FObjectPtr)&local_228);
  }
  pFVar13->bWasReplicating = (bool)((byte)param_1->ComponentPtr->field_0x98 >> 7);
  if (bUseLocalRoleForAuthorityCheck == false) {
    EVar9 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    if ((EVar9 != NM_Standalone) &&
       (((*(longlong *)&this->field_0xa8 == 0 ||
         (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) != '\x03')) || (EVar9 == NM_Client))))
    goto LAB_14828f4aa;
  }
  else if ((*(longlong *)&this->field_0xa8 == 0) ||
          (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) != '\x03')) goto LAB_14828f4aa;
  pUVar2 = *(UObject **)&param_1->ComponentPtr->field_0xa8;
  if (pUVar2 == (UObject *)0x0) goto LAB_14828f4aa;
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar14 = UClusterUnionReplicatedProxyComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar14);
  local_138._8_8_ = pUVar2;
  pUVar15 = (UClusterUnionReplicatedProxyComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar20 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar15 == (UClusterUnionReplicatedProxyComponent *)0x0) goto LAB_14828f586;
LAB_14828f418:
    UActorComponent::RegisterComponent((UActorComponent *)pUVar15);
    UClusterUnionReplicatedProxyComponent::SetParentClusterUnion(pUVar15,this);
    UClusterUnionReplicatedProxyComponent::SetChildClusteredComponent(pUVar15,param_1->ComponentPtr)
    ;
    UActorComponent::SetIsReplicated((UActorComponent *)pUVar15,true);
  }
  else {
    if (pUVar15 != (UClusterUnionReplicatedProxyComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
      goto LAB_14828f418;
    }
LAB_14828f586:
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3065361942051814269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                       ,0x483,"ReplicatedProxy");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar15 != (UClusterUnionReplicatedProxyComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UClusterUnionReplicatedProxyComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
  }
  local_288.ObjectIndex = 0;
  local_288.ObjectSerialNumber = 0;
  local_220 = pUVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UClusterUnionReplicatedProxyComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  FWeakObjectPtr::operator=(&local_288,(FObjectPtr)&local_220);
  (pFVar13->ReplicatedProxyComponent).WeakPtr = local_288;
LAB_14828f4aa:
  local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.ArrayNum = 0;
  local_2a0.ArrayMax = 0;
  uVar18 = (pFVar13->BonesData).ArrayNum;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar18,&local_2a0.AllocatorInstance,0,&local_2a0.ArrayMax);
  }
  pFVar22 = (pFVar13->BonesData).AllocatorInstance.Data;
  iVar11 = (pFVar13->BonesData).ArrayNum;
  pFVar4 = pFVar22 + (longlong)iVar11 * 8;
  while( true ) {
    if ((pFVar13->BonesData).ArrayNum != iVar11) {
      local_2b7 = 0;
      `TCheckedPointerIterator<FClusterUnionBoneData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2b7);
    }
    if (pFVar22 == pFVar4) break;
    pFVar16 = TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
              ::Find(param_2,*(int *)pFVar22);
    if (pFVar16 == (FMappedBoneData *)0x0) {
      pIVar3 = (this->AccelerationStructure).Ptr;
      if (pIVar3 != (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
        local_1f0 = (param_1->ComponentKey).ObjectKey;
        local_1e8 = *(int *)pFVar22;
        local_1e4 = *(int *)(pFVar22 + 4);
        if (local_1e4 == -1) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3065361942051814243>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                             ,0x49d,"Handle.IsValid()");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          (**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,&local_1f0);
        }
      }
      local_270 = *(int *)pFVar22;
      iStack_26c = *(int *)(pFVar22 + 4);
      iVar10 = local_2a0.ArrayNum;
      if (local_2a0.ArrayNum == local_2a0.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_2a0.AllocatorInstance,&local_2a0.ArrayMax);
      }
      local_2a0.ArrayNum = iVar10 + 1;
      *(ulonglong *)(local_2a0.AllocatorInstance.Data + (longlong)iVar10 * 8) =
           CONCAT44(iStack_26c,local_270);
    }
    pFVar22 = pFVar22 + 8;
  }
  piVar28 = &(pFVar13->BonesData).ArrayMax;
  (pFVar13->BonesData).ArrayNum = 0;
  if ((pFVar13->BonesData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)pFVar13,0,piVar28);
  }
  piVar24 = &(param_2->Pairs).ArrayNum;
  uVar18 = *piVar24;
  local_2b0 = uVar18;
  local_268 = piVar24;
  if (-1 < (int)uVar18) {
    if (*piVar28 < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar18,(ForAnyElementType *)pFVar13,(pFVar13->BonesData).ArrayNum,piVar28);
      uVar18 = *(uint *)((longlong)local_2a8 + 0xa0);
    }
    FVar23 = local_2a8;
    if (*(ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> *)
         ((longlong)local_2a8 + 0x90) !=
        (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
      FVar23 = *(ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> *)
                ((longlong)local_2a8 + 0x90);
    }
    FVar27 = (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)
             ((longlong)(int)uVar18 * 0x90 + (longlong)FVar23);
    local_2b0 = uVar18;
    while( true ) {
      if (*piVar24 != uVar18) {
        local_2b6 = 0;
        `TCheckedPointerIterator<TTuple<int,UClusterUnionComponent::FMappedBoneData>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_2b6);
      }
      this_02 = local_210;
      pFVar6 = local_218;
      if (FVar23 == FVar27) break;
      local_290 = *(int *)FVar23;
      pFVar4 = (pFVar13->BonesData).AllocatorInstance.Data;
      iStack_28c = *(int *)((longlong)FVar23 + 0x20);
      if (((pFVar4 <= (FScriptContainerElement *)&local_290) &&
          ((FScriptContainerElement *)&local_290 < pFVar4 + (longlong)*piVar28 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (pFVar13->BonesData).ArrayNum;
      if (iVar11 == *piVar28) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,(ForAnyElementType *)pFVar13,piVar28);
      }
      FVar23 = (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)
               ((longlong)FVar23 + 0x90);
      (pFVar13->BonesData).ArrayNum = iVar11 + 1;
      *(ulonglong *)((pFVar13->BonesData).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           CONCAT44(iStack_28c,local_290);
    }
    BroadcastComponentAddedEvents
              (local_210,local_218->ComponentPtr,&pFVar13->BonesData,local_2b8,&local_2a0);
    bVar8 = IsAuthority(this_02);
    piVar28 = local_268;
    FVar23 = local_2a8;
    if ((bVar8) &&
       (bVar8 = FWeakObjectPtr::IsValid(&(pFVar13->ReplicatedProxyComponent).WeakPtr),
       FVar23 = local_2a8, bVar8)) {
      pUVar15 = (UClusterUnionReplicatedProxyComponent *)
                FWeakObjectPtr::Get(&(pFVar13->ReplicatedProxyComponent).WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar15 != (UClusterUnionReplicatedProxyComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.ArrayNum = 0;
      local_260.ArrayMax = 0;
      GetBoneIDsFromComponentData<TArray<int,TSizedDefaultAllocator<32>_>,FClusteredComponentData>
                (this_02,&local_260,pFVar13);
      UClusterUnionReplicatedProxyComponent::SetParticleBoneIds(pUVar15,&local_260);
      uVar18 = *piVar28;
      FVar27 = local_2a8;
      if (*(ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> *)
           ((longlong)local_2a8 + 0x90) !=
          (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
        FVar27 = *(ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> *)
                  ((longlong)local_2a8 + 0x90);
      }
      FVar29 = (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)
               ((longlong)(int)uVar18 * 0x90 + (longlong)FVar27);
      local_2b0 = uVar18;
      while( true ) {
        if (*piVar28 != uVar18) {
          local_2b5 = 0;
          `TCheckedPointerIterator<TTuple<int,UClusterUnionComponent::FMappedBoneData>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_2b5);
        }
        FVar23 = local_2a8;
        if (FVar27 == FVar29) break;
        UClusterUnionReplicatedProxyComponent::SetParticleChildToParent
                  (pUVar15,*(int *)FVar27,(TTransform<double> *)((longlong)FVar27 + 0x30));
        FVar27 = (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)
                 ((longlong)FVar27 + 0x90);
      }
      piVar28 = local_268;
      if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)this_02 + 0xa98))(this_02,pFVar6->ComponentPtr,FVar23,local_200);
    if (*piVar28 != 0) {
      pUVar12 = *(UWorld **)&this_02->field_0xb0;
      if (pUVar12 == (UWorld *)0x0) {
        pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_02);
      }
      FPhysicsObjectExternalInterface::LockRead(&local_158,(FChaosScene *)pUVar12->PhysicsScene);
      uVar18 = *piVar28;
      if (*(ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> *)
           ((longlong)FVar23 + 0x90) !=
          (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)0x0) {
        FVar23 = *(ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> *)
                  ((longlong)FVar23 + 0x90);
      }
      piVar24 = (int *)((longlong)FVar23 + 0x18);
      FVar23 = (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)
               ((longlong)(int)uVar18 * 0x90 + (longlong)FVar23);
      local_2a8 = FVar23;
      while( true ) {
        if (*piVar28 != uVar18) {
          local_2b4[0] = 0;
          `TCheckedPointerIterator<TTuple<int,UClusterUnionComponent::FMappedBoneData>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_2b4);
          FVar23 = local_2a8;
        }
        if ((ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>)(piVar24 + -6) ==
            FVar23) break;
        if (((this_02->AccelerationStructure).Ptr !=
             (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) &&
           (*(longlong *)(piVar24 + -2) != 0)) {
          ::`anonymous_namespace'::GetWorldBoundsForParticle
                    ((TBox<double> *)&local_1c0._s_0,*(TPBDRigidParticle<double,3> **)piVar24);
          local_1e0 = (pFVar6->ComponentKey).ObjectKey;
          local_1d8 = piVar24[-6];
          local_1d4 = piVar24[2];
          if (local_1d4 == -1) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3065361942051814190>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                               ,0x4d2,"Handle.IsValid()");
            FVar23 = local_2a8;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            pIVar3 = (this_02->AccelerationStructure).Ptr;
            local_188 = local_1c0._s_0.X;
            dStack_180 = local_1c0._s_0.Y;
            local_178 = local_1c0._s_0.Z;
            local_170 = local_1a8;
            uStack_16c = uStack_1a4;
            uStack_168 = uStack_1a0;
            uStack_164 = uStack_19c;
            local_160 = local_198;
            (**(code **)(pIVar3->_padding_ + 0x80))(pIVar3,&local_1e0,&local_188,local_190 != '\0');
            FVar23 = local_2a8;
          }
        }
        piVar24 = piVar24 + 0x24;
      }
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_158.Lock);
    }
    if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
}

// HandleComponentPhysicsStateChange @ 1482915a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::HandleComponentPhysicsStateChange
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          EComponentPhysicsStateChange param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator> *pTVar4;
  char *pcVar5;
  uint uVar6;
  FWeakObjectPtr local_res10 [2];
  FName local_res20;
  UPrimitiveComponent *local_68 [2];
  FWeakObjectPtr local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  longlong lStack_30;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return;
  }
  if (param_2 != Created) {
    return;
  }
  pcVar3 = strstr("&UClusterUnionComponent::HandleComponentPhysicsStateChange","::");
  if (pcVar3 == (char *)0x0) {
LAB_14829161b:
    pcVar5 = &DAT_00000002;
  }
  else {
    do {
      pcVar5 = pcVar3;
      pcVar3 = strstr(pcVar5 + 1,"::");
    } while (pcVar3 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14829161b;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 != '0') goto LAB_14829164e;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14829164e:
  ::FName::FName(&local_res20,pcVar5);
  local_58 = (FWeakObjectPtr)HandleComponentPhysicsStateChange;
  uStack_50 = 0;
  lStack_30 = (ulonglong)uStack_4c << 0x20;
  local_38 = HandleComponentPhysicsStateChange;
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  ::__Internal_RemoveDynamic<UClusterUnionComponent>
            ((TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
              *)&param_1->OnComponentPhysicsStateChanged,this,(pmf_37216b21 *)&local_38,local_res20)
  ;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_68[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)local_68);
  local_58 = local_res10[0];
  pTVar4 = &TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
            ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                    *)&this->PendingComponentsToAdd,(TObjectKey<UPrimitiveComponent> *)&local_58)->
            BonesData;
  if (pTVar4 != (TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
                 *)0x0) {
    uVar6 = *(int *)&(pTVar4->Elements).field_0x8 - *(int *)&(pTVar4->Elements).field_0x34;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
    }
    Algo::
    Transform<TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>,TArray<int,TSizedDefaultAllocator<32>_>_&,int_FClusterUnionBoneData::*>
              (pTVar4,&local_48,(pdm_f08077e3)0x0);
    AddComponentToCluster(this,param_1,&local_48,true);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleComponentPhysicsStateChangePostAddIntoClusterUnion @ 1482917a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::HandleComponentPhysicsStateChangePostAddIntoClusterUnion
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          EComponentPhysicsStateChange param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  FName local_res10;
  code *local_28;
  undefined8 uStack_20;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return;
  }
  if (param_2 != Destroyed) {
    return;
  }
  pcVar3 = strstr("&UClusterUnionComponent::HandleComponentPhysicsStateChangePostAddIntoClusterUnion"
                  ,"::");
  if (pcVar3 == (char *)0x0) {
LAB_14829181b:
    pcVar4 = &DAT_00000002;
  }
  else {
    do {
      pcVar4 = pcVar3;
      pcVar3 = strstr(pcVar4 + 1,"::");
    } while (pcVar3 != (char *)0x0);
    if (pcVar4 == (char *)0x0) goto LAB_14829181b;
    pcVar4 = pcVar4 + 2;
    if (*pcVar4 != '0') goto LAB_14829184e;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14829184e:
  ::FName::FName(&local_res10,pcVar4);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = HandleComponentPhysicsStateChangePostAddIntoClusterUnion;
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  ::__Internal_RemoveDynamic<UClusterUnionComponent>
            ((TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
              *)&param_1->OnComponentPhysicsStateChanged,this,(pmf_37216b21 *)&local_28,local_res10)
  ;
  RemoveComponentFromCluster(this,param_1);
  return;
}

// HandleRemovedClusteredComponent @ 148292ac0

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
UClusterUnionComponent::HandleRemovedClusteredComponent
          (UClusterUnionComponent *this,TObjectKey<UPrimitiveComponent> param_1,
          FClusteredComponentData *param_2)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(UPrimitiveComponent_*,TArray<FClusterUnionBoneData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  ENetMode EVar10;
  UPrimitiveComponent *pUVar11;
  UObject *pUVar12;
  FClusteredActorData *this_01;
  AActor *this_02;
  UClusterUnionReplicatedProxyComponent *pUVar13;
  FTimerManager *this_03;
  FTimerData *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  FObjectKey local_res10;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_a8;
  FObjectKey local_a0;
  UObject *local_98;
  UPrimitiveComponent *local_90;
  FObjectKey local_88;
  undefined4 local_80;
  int local_7c;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  
  local_res10 = param_1.ObjectKey;
  if ((this->AccelerationStructure).Ptr !=
      (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
    pFVar18 = (param_2->BonesData).AllocatorInstance.Data;
    iVar20 = (param_2->BonesData).ArrayNum;
    pFVar2 = pFVar18 + (longlong)iVar20 * 8;
    while( true ) {
      if ((param_2->BonesData).ArrayNum != iVar20) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FClusterUnionBoneData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar18 == pFVar2) break;
      local_80 = *(undefined4 *)pFVar18;
      local_7c = *(int *)(pFVar18 + 4);
      local_88 = param_1.ObjectKey;
      if (local_7c == -1) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3065361942051814152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                           ,0x4f8,"Handle.IsValid()");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        (**(code **)(((this->AccelerationStructure).Ptr)->_padding_ + 0x70))();
      }
      pFVar18 = pFVar18 + 8;
    }
  }
  local_a0 = param_1.ObjectKey;
  pUVar11 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_a0);
  if (bUseLocalRoleForAuthorityCheck == false) {
    EVar10 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    if ((EVar10 != NM_Standalone) &&
       (((*(longlong *)&this->field_0xa8 == 0 ||
         (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) != '\x03')) || (EVar10 == NM_Client))))
    goto LAB_148292ef7;
  }
  else if ((*(longlong *)&this->field_0xa8 == 0) ||
          (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) != '\x03')) {
LAB_148292ef7:
    pUVar13 = GetReplicatedProxyFromComponent(this,pUVar11);
    if (pUVar13 != (UClusterUnionReplicatedProxyComponent *)0x0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&pUVar13->LastSyncedBoneIds);
      if (((AActor *)pUVar13->_padding_ != (AActor *)0x0) &&
         ((pUVar13->DeferSetChildToParentHandle).Handle != 0)) {
        this_03 = AActor::GetWorldTimerManager((AActor *)pUVar13->_padding_);
        pFVar14 = FTimerManager::FindTimer(this_03,&pUVar13->DeferSetChildToParentHandle);
        if (pFVar14 != (FTimerData *)0x0) {
          FTimerManager::InternalClearTimer
                    (this_03,(FTimerHandle)(pUVar13->DeferSetChildToParentHandle).Handle);
        }
        (pUVar13->DeferSetChildToParentHandle).Handle = 0;
      }
    }
    goto LAB_148292bd9;
  }
  pUVar12 = FWeakObjectPtr::Get(&(param_2->ReplicatedProxyComponent).WeakPtr);
  if (pUVar12 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar12 + 0x4a0))(pUVar12,0);
  }
LAB_148292bd9:
  pUVar12 = FWeakObjectPtr::Get(&(param_2->Owner).WeakPtr,true);
  iVar20 = 0;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  uVar17 = 0;
  if (pUVar12 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    local_98 = pUVar12;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_98);
    local_res20 = local_a8;
    FVar6 = local_res20;
    iVar20 = local_a8.ObjectIndex;
    local_res20.ObjectSerialNumber = local_a8.ObjectSerialNumber;
    uVar17 = local_res20.ObjectSerialNumber;
    local_res20 = FVar6;
  }
  this_01 = TMapBase<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
            ::Find((TMapBase<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
                    *)&this->ActorToComponents,(TObjectKey<AActor> *)&local_res20);
  if (this_01 != (FClusteredActorData *)0x0) {
    if (*(int *)&(this_01->Components).Elements.field_0x8 !=
        *(int *)&(this_01->Components).Elements.field_0x34) {
      uVar16 = param_1.ObjectKey.ObjectIndex - local_res10.ObjectSerialNumber ^
               (uint)local_res10.ObjectSerialNumber >> 0xd;
      uVar19 = (-0x61c88647 - local_res10.ObjectSerialNumber) - uVar16 ^ uVar16 << 8;
      uVar15 = (local_res10.ObjectSerialNumber - uVar19) - uVar16 ^ uVar19 >> 0xd;
      uVar16 = (uVar16 - uVar15) - uVar19 ^ uVar15 >> 0xc;
      uVar19 = (uVar19 - uVar16) - uVar15 ^ uVar16 << 0x10;
      uVar15 = (uVar15 - uVar19) - uVar16 ^ uVar19 >> 5;
      uVar16 = (uVar16 - uVar15) - uVar19 ^ uVar15 >> 3;
      uVar19 = (uVar19 - uVar16) - uVar15 ^ uVar16 << 10;
      TSet<TObjectKey<UPrimitiveComponent>,DefaultKeyFuncs<TObjectKey<UPrimitiveComponent>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectKey<UPrimitiveComponent>_>
                (&this_01->Components,(uVar15 - uVar19) - uVar16 ^ uVar19 >> 0xf,
                 (TObjectKey<UPrimitiveComponent> *)&local_res10);
    }
    if (*(int *)&(this_01->Components).Elements.field_0x8 ==
        *(int *)&(this_01->Components).Elements.field_0x34) {
      this_02 = (AActor *)FWeakObjectPtr::Get(&(param_2->Owner).WeakPtr);
      if ((this_02 != (AActor *)0x0) && (bVar7 = IsAuthority(this), bVar7)) {
        AActor::SetReplicatingMovement(this_02,this_01->bWasReplicatingMovement);
      }
      if (*(int *)&(this->ActorToComponents).field_0x8 !=
          *(int *)&(this->ActorToComponents).field_0x34) {
        uVar16 = iVar20 - uVar17 ^ uVar17 >> 0xd;
        uVar15 = (-0x61c88647 - uVar17) - uVar16 ^ uVar16 << 8;
        uVar17 = (uVar17 - uVar15) - uVar16 ^ uVar15 >> 0xd;
        uVar16 = (uVar16 - uVar17) - uVar15 ^ uVar17 >> 0xc;
        uVar15 = (uVar15 - uVar17) - uVar16 ^ uVar16 << 0x10;
        uVar17 = (uVar17 - uVar15) - uVar16 ^ uVar15 >> 5;
        uVar16 = (uVar16 - uVar17) - uVar15 ^ uVar17 >> 3;
        uVar15 = (uVar15 - uVar16) - uVar17 ^ uVar16 << 10;
        TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
        ::RemoveImpl<TObjectKey<AActor>_>
                  ((TSet<TTuple<TObjectKey<AActor>,FClusteredActorData>,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>,FDefaultSetAllocator>
                    *)&this->ActorToComponents,(uVar17 - uVar15) - uVar16 ^ uVar15 >> 0xf,
                   (TObjectKey<AActor> *)&local_res20);
      }
    }
  }
  if (pUVar11 != (UPrimitiveComponent *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnComponentRemovedEvent,&local_60);
    iVar20 = *(int *)&(this->OnComponentRemovedEvent).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (0 < iVar20) {
      local_90 = pUVar11;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnComponentRemovedEvent,&local_90);
    }
    this_00 = &this->OnComponentRemovedNativeEvent;
    bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_78);
      puVar1 = &(this->OnComponentRemovedNativeEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar7 = false;
      uVar17 = *(int *)&(this->OnComponentRemovedNativeEvent).field_0x10 - 1;
      if (-1 < (int)uVar17) {
        lVar21 = (longlong)(int)uVar17 << 4;
        bVar7 = false;
        do {
          uVar15 = 0;
          if ((int)uVar17 < *(int *)&(this->OnComponentRemovedNativeEvent).field_0x10) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(this->OnComponentRemovedNativeEvent).field_0x8;
          if (((*(int *)(lVar3 + 8 + lVar21) == 0) ||
              (plVar4 = *(longlong **)(lVar3 + lVar21), plVar4 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,pUVar11,param_2), cVar9 == '\0')) {
            bVar7 = true;
          }
          lVar21 = lVar21 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      puVar1 = &(this->OnComponentRemovedNativeEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
    }
  }
  TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  ::Remove((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
            *)&this->PendingComponentsToAdd,(TObjectKey<UPrimitiveComponent> *)&local_res10);
  TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  ::Remove((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
            *)&this->PendingComponentSync,(TObjectKey<UPrimitiveComponent> *)&local_res10);
  return;
}

// HasValidPhysicsState @ 148293140

bool __thiscall UClusterUnionComponent::HasValidPhysicsState(UClusterUnionComponent *this)

{
  return this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0;
}

// IsAnchored @ 148294830

bool __thiscall UClusterUnionComponent::IsAnchored(UClusterUnionComponent *this)

{
  if (this->PhysicsProxy == (FClusterUnionPhysicsProxy *)0x0) {
    return false;
  }
  return (this->PhysicsProxy->SyncedData_External).bIsAnchored;
}

// IsAnyRigidBodyAwake @ 148294850

bool __thiscall UClusterUnionComponent::IsAnyRigidBodyAwake(UClusterUnionComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPhysicsObject **local_78;
  int local_70;
  FPhysicsObject **local_68;
  int iStack_60;
  FPhysicsObject **local_58;
  int iStack_50;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_48;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_38;
  FLockedPhysicsObjectExternalInterface<0> local_28;
  
  (**(code **)(*(longlong *)&this->field_0x260 + 0x20))(&this->field_0x260,&local_78);
  iStack_60 = local_70;
  local_68 = local_78;
  if (local_70 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_48.DataPtr = local_68;
  FPhysicsObjectExternalInterface::LockRead(&local_28,&local_48);
  local_58 = local_78;
  if (local_70 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iStack_50 = local_70;
  local_38.DataPtr = local_58;
  bVar2 = Chaos::FReadPhysicsObjectInterface<0>::AreAllSleeping(&local_28.Interface,&local_38);
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28.Lock);
  if (local_78 != (FPhysicsObject **)0x0) {
    FMemory::Free(local_78);
  }
  return !bVar2;
}

// IsAuthority @ 148294960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UClusterUnionComponent::IsAuthority(UClusterUnionComponent *this)

{
  ENetMode EVar1;
  
  if (bUseLocalRoleForAuthorityCheck) {
    if (*(longlong *)&this->field_0xa8 != 0) {
      return *(char *)(*(longlong *)&this->field_0xa8 + 0x168) == '\x03';
    }
  }
  else {
    EVar1 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    if ((EVar1 == NM_Standalone) ||
       (((*(longlong *)&this->field_0xa8 != 0 &&
         (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) == '\x03')) && (EVar1 != NM_Client)))) {
      return true;
    }
  }
  return false;
}

// IsComponentAdded @ 148294b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UClusterUnionComponent::IsComponentAdded(UClusterUnionComponent *this,UPrimitiveComponent *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  FWeakObjectPtr local_res8;
  UPrimitiveComponent *local_res10;
  
  uVar7 = 0;
  uVar10 = uVar7;
  iVar11 = 0;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    uVar10 = (ulonglong)local_res8 >> 0x20;
    iVar11 = local_res8.ObjectIndex;
  }
  iVar6 = (int)uVar10;
  uVar4 = iVar11 - iVar6 ^ (uint)(uVar10 >> 0xd);
  uVar2 = (-0x61c88647 - uVar4) - iVar6 ^ uVar4 << 8;
  uVar8 = (iVar6 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar8) - uVar2 ^ uVar8 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar8 ^ uVar4 << 0x10;
  uVar8 = (uVar8 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar8) - uVar2 ^ uVar8 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar8 ^ uVar4 << 10;
  if (*(int *)&(this->PerComponentData).field_0x8 != *(int *)&(this->PerComponentData).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PerComponentData).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PerComponentData).field_0x38;
    }
    iVar9 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PerComponentData).field_0x48 - 1U &
                              ((uVar8 - uVar2) - uVar4 ^ uVar2 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->PerComponentData;
      do {
        lVar3 = (longlong)iVar9 * 0x38;
        if ((*(int *)(lVar3 + lVar1) == iVar11) && (*(int *)(lVar3 + 4 + lVar1) == iVar6)) {
          if (iVar9 != -1) {
            return true;
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 0x30 + lVar1);
      } while (iVar9 != -1);
    }
  }
  iVar11 = 0;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    uVar7 = (ulonglong)local_res8 >> 0x20;
    iVar11 = local_res8.ObjectIndex;
  }
  iVar6 = (int)uVar7;
  uVar2 = iVar11 - iVar6 ^ (uint)(uVar7 >> 0xd);
  uVar4 = (-0x61c88647 - uVar2) - iVar6 ^ uVar2 << 8;
  uVar8 = (iVar6 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar8) - uVar4 ^ uVar8 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar8 ^ uVar2 << 0x10;
  uVar8 = (uVar8 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar8) - uVar4 ^ uVar8 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar8 ^ uVar2 << 10;
  if (*(int *)&(this->PendingComponentSync).field_0x8 !=
      *(int *)&(this->PendingComponentSync).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PendingComponentSync).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PendingComponentSync).field_0x38;
    }
    iVar9 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PendingComponentSync).field_0x48 - 1U &
                              ((uVar8 - uVar4) - uVar2 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->PendingComponentSync;
      do {
        lVar3 = (longlong)iVar9 * 0x60;
        if ((*(int *)(lVar3 + lVar1) == iVar11) && (*(int *)(lVar3 + 4 + lVar1) == iVar6)) {
          if (iVar9 == -1) {
            return false;
          }
          return true;
        }
        iVar9 = *(int *)(lVar3 + 0x58 + lVar1);
      } while (iVar9 != -1);
    }
  }
  return false;
}

// LineTraceComponent @ 148295390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UClusterUnionComponent::LineTraceComponent
          (UClusterUnionComponent *this,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,ECollisionChannel param_4,
          FCollisionQueryParams *param_5,FCollisionResponseParams *param_6,
          FCollisionObjectQueryParams *param_7)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentLineTraceComponentMulti> FVar7;
  UWorld *pUVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  code **ppcVar10;
  FNameEntryId FVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108;
  uint uStack_104;
  LARGE_INTEGER local_100;
  FCollisionObjectQueryParams *local_f8;
  FCollisionResponseParams *local_f0;
  FName local_e8;
  TVector<double> *local_d8;
  FStatMessage local_d0;
  TVector<double> *local_c0;
  LARGE_INTEGER LStack_b8;
  ECollisionChannel local_b0;
  undefined4 uStack_ac;
  FCollisionQueryParams *pFStack_a8;
  FCollisionResponseParams *local_a0;
  FCollisionObjectQueryParams *pFStack_98;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f0 = param_6;
  local_f8 = param_7;
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_ClusterUnionComponentLineTraceComponentMulti;
  local_100 = (LARGE_INTEGER)param_3;
  local_d8 = param_2;
  if (StatPtr_STAT_ClusterUnionComponentLineTraceComponentMulti ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentLineTraceComponentMulti>)0x0) {
    pFVar6 = ::FName::FName((FName *)&local_d0,"STAT_ClusterUnionComponentLineTraceComponentMulti");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentLineTraceComponentMulti>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ClusterUnionComponentLineTraceComponentMulti,*pFVar6,
                       L"UClusterUnionComponent::LineTraceComponentMulti","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar13 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.Bits = FVar12.Bits;
        uStack_104 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x5b5);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_108.Bits = FVar12.Bits;
      uStack_104 = uVar9;
      local_e8 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = local_e8.ComparisonIndex.Value;
      goto LAB_148295510;
    }
  }
  bVar4 = false;
  FVar13 = local_e8;
LAB_148295510:
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if ((this->AccelerationStructure).Ptr ==
      (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
    local_c0 = local_d8;
    LStack_b8 = local_100;
    local_a0 = local_f0;
    pFStack_98 = local_f8;
    local_88[0] = (code *)0x0;
    local_b0 = param_4;
    pFStack_a8 = param_5;
    local_90 = param_1;
    local_60 = FMemory::Malloc(0x40,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UClusterUnionComponent::LineTraceComponent'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_60[1] = (code *)local_c0;
    *(LARGE_INTEGER *)(local_60 + 2) = LStack_b8;
    local_60[3] = (code *)CONCAT44(uStack_ac,local_b0);
    local_60[4] = (code *)pFStack_a8;
    local_60[5] = (code *)local_a0;
    local_60[6] = (code *)pFStack_98;
    local_60[7] = (code *)local_90;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UClusterUnionComponent::LineTraceComponent'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
                    ::Call;
    }
    VisitAllCurrentChildComponentsForCollision
              (this,param_4,param_5,local_f0,local_f8,
               (TFunction<bool___cdecl(UPrimitiveComponent_*)> *)local_88);
    if (local_88[0] != (code *)0x0) {
      ppcVar10 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar10 = local_60;
      }
      (**(code **)(*ppcVar10 + 0x10))();
    }
  }
  else {
    pUVar8 = *(UWorld **)&this->field_0xb0;
    if (pUVar8 == (UWorld *)0x0) {
      pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
    ::RaycastMulti((this->AccelerationStructure).Ptr,pUVar8,param_1,local_d8,
                   (TVector<double> *)local_100,param_4,param_5,local_f0,local_f8);
  }
  iVar2 = param_1->ArrayNum;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_d0.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_d0.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_100);
      local_d0.StatData.Pad = (uchar  [8])(local_100.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_d0);
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
  return iVar2 != 0;
}

// LineTraceComponent @ 148295780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UClusterUnionComponent::LineTraceComponent
          (UClusterUnionComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,ECollisionChannel param_4,FCollisionQueryParams *param_5,
          FCollisionResponseParams *param_6,FCollisionObjectQueryParams *param_7)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  LARGE_INTEGER LVar5;
  undefined1 uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentLineTraceComponentSingle> FVar8;
  UWorld *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar10;
  FNameEntryId FVar11;
  FName FVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_188 [32];
  undefined1 local_128 [8];
  FName local_120;
  TVector<double> *local_118;
  LARGE_INTEGER local_110;
  FCollisionObjectQueryParams *local_108;
  FCollisionResponseParams *local_100;
  TVector<double>_u_0 local_f8;
  FName local_d8;
  TVector<double> *local_c8;
  TVector<double> *pTStack_c0;
  ECollisionChannel local_b8;
  undefined4 uStack_b4;
  LARGE_INTEGER LStack_b0;
  FCollisionResponseParams *local_a8;
  FCollisionObjectQueryParams *pFStack_a0;
  undefined1 *local_98;
  FHitResult *pFStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_110 = (LARGE_INTEGER)param_5;
  local_100 = param_6;
  local_108 = param_7;
  FVar11.Value = 0;
  FVar8 = StatPtr_STAT_ClusterUnionComponentLineTraceComponentSingle;
  local_118 = param_3;
  if (StatPtr_STAT_ClusterUnionComponentLineTraceComponentSingle ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentLineTraceComponentSingle>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_f8._s_0,
                            "STAT_ClusterUnionComponentLineTraceComponentSingle");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentLineTraceComponentSingle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ClusterUnionComponentLineTraceComponentSingle,*pFVar7,
                       L"UClusterUnionComponent::LineTraceComponentSingle","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar12 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120 = (FName)((ulonglong)local_120 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120 = FVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x5eb);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120 = FVar12;
      local_d8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d8.ComparisonIndex.Value;
      goto LAB_148295902;
    }
  }
  bVar3 = false;
  FVar12 = local_d8;
LAB_148295902:
  LVar5 = local_110;
  param_1->Distance = 3.4028235e+38;
  if ((this->AccelerationStructure).Ptr ==
      (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
    local_a8 = local_100;
    pTStack_c0 = local_118;
    local_98 = local_128;
    pFStack_a0 = local_108;
    local_128[0] = 0;
    local_b8 = param_4;
    LStack_b0 = local_110;
    local_88 = (code *)0x0;
    local_c8 = param_2;
    pFStack_90 = param_1;
    local_60 = FMemory::Malloc(0x48,8);
    *local_60 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UClusterUnionComponent::LineTraceComponent'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_60[1] = (longlong)local_c8;
    local_60[2] = (longlong)pTStack_c0;
    local_60[3] = CONCAT44(uStack_b4,local_b8);
    *(LARGE_INTEGER *)(local_60 + 4) = LStack_b0;
    local_60[5] = (longlong)local_a8;
    local_60[6] = (longlong)pFStack_a0;
    local_60[7] = (longlong)local_98;
    local_60[8] = (longlong)pFStack_90;
    if (local_60 + 1 != (longlong *)0x0) {
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UClusterUnionComponent::LineTraceComponent'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
                 ::Call;
    }
    VisitAllCurrentChildComponentsForCollision
              (this,param_4,(FCollisionQueryParams *)LVar5,local_100,local_108,
               (TFunction<bool___cdecl(UPrimitiveComponent_*)> *)&local_88);
    uVar6 = local_128[0];
    if (local_88 != (code *)0x0) {
      plVar10 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar10 = local_60;
      }
      (**(code **)(*plVar10 + 0x10))();
      uVar6 = local_128[0];
    }
  }
  else {
    local_f8._0_4_ = *(undefined4 *)&local_118->field0_0x0;
    local_f8._4_4_ = *(undefined4 *)((longlong)&local_118->field0_0x0 + 4);
    local_f8._8_4_ = *(undefined4 *)((longlong)&local_118->field0_0x0 + 8);
    local_f8._12_4_ = *(undefined4 *)((longlong)&local_118->field0_0x0 + 0xc);
    local_118 = *(TVector<double> **)((longlong)&local_118->field0_0x0 + 0x10);
    uVar13 = SUB84(local_118,0);
    uVar14 = (undefined4)((ulonglong)local_118 >> 0x20);
    local_88._0_4_ = *(undefined4 *)&param_2->field0_0x0;
    local_88._4_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uStack_80 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uStack_7c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    pUVar9 = *(UWorld **)&this->field_0xb0;
    local_120 = (FName)(param_2->field0_0x0)._s_0.Z;
    uVar15 = (undefined4)local_88;
    uVar16 = local_88._4_4_;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      uVar13 = SUB84(local_118,0);
      uVar14 = (undefined4)((ulonglong)local_118 >> 0x20);
      uVar15 = (undefined4)local_88;
      uVar16 = local_88._4_4_;
    }
    local_88 = (code *)CONCAT44(local_f8._4_4_,local_f8._0_4_);
    local_78[0] = CONCAT44(uVar14,uVar13);
    local_f8._4_4_ = uVar16;
    local_f8._0_4_ = uVar15;
    uVar15 = local_f8._8_4_;
    local_f8._8_4_ = uStack_80;
    uVar16 = local_f8._12_4_;
    local_f8._12_4_ = uStack_7c;
    local_f8._s_0.Z = (double)local_120;
    uStack_80 = uVar15;
    uStack_7c = uVar16;
    FGenericRaycastPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>
    ::RaycastSingle((this->AccelerationStructure).Ptr,pUVar9,param_1,
                    (TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_88,param_4,
                    (FCollisionQueryParams *)local_110,local_100,local_108);
    uVar6 = FActorInstanceHandle::IsValid(&param_1->HitObjectHandle);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_f8._12_4_ = FVar12.Number & 0xffff6fff | 0x6000;
      local_f8._8_4_ = FVar11.Value;
      QueryPerformanceCounter(&local_110);
      local_f8._s_0.X = (double)(local_110.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_f8._s_0);
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
  return (bool)uVar6;
}

// NumChildClusterComponents @ 148296fa0

int __thiscall UClusterUnionComponent::NumChildClusterComponents(UClusterUnionComponent *this)

{
  return ((*(int *)&(this->PendingComponentSync).field_0x8 -
          *(int *)&(this->PendingComponentSync).field_0x34) -
         *(int *)&(this->PerComponentData).field_0x34) + *(int *)&(this->PerComponentData).field_0x8
  ;
}

// OnChildToParentUpdated @ 148296fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::OnChildToParentUpdated
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
          *param_2,TTransform<double> *param_3,
          TArray<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  return;
}

// OnCreatePhysicsState @ 148296fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UClusterUnionComponent::OnCreatePhysicsState(UClusterUnionComponent *this)

{
  TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
  *pTVar1;
  FComponentReference *pFVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  UPrimitiveComponent *pUVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  UWorld *pUVar10;
  UPhysicsSettings *pUVar11;
  FString *pFVar12;
  FClusterUnionPhysicsProxy *pFVar13;
  UPrimitiveComponent *pUVar14;
  FPhysScene_Chaos *this_00;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *this_01;
  undefined8 *puVar15;
  AActor *pAVar16;
  UClass *pUVar17;
  FComponentReference *this_02;
  ForAnyElementType FVar18;
  UPrimitiveComponent *pUVar19;
  TReferenceControllerBase<1> *pTVar20;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  FString local_250;
  UClusterUnionComponent *local_240;
  FString local_238;
  undefined8 local_228;
  FSharedReferencer<1> local_220;
  TArray<int,TSizedDefaultAllocator<32>_> local_218;
  UClusterUnionComponent *local_208;
  FName local_200;
  FName local_1f8;
  FString local_1f0;
  undefined1 local_1d8 [56];
  double dStack_1a0;
  double local_198;
  bool local_190;
  bool local_18f;
  longlong local_188;
  FString local_180;
  TVector<double>_u_0 local_170;
  TQuat<double> local_158 [4];
  FClusterUnionInitData local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pUVar19 = (UPrimitiveComponent *)0x0;
  UActorComponent::OnCreatePhysicsState((UActorComponent *)this);
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    return;
  }
  local_208 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x4e0,(FObjectPtr)&local_208);
  if ((*(longlong *)&this->field_0xb0 == 0) &&
     (pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar10 == (UWorld *)0x0)) {
    return;
  }
  pUVar10 = *(UWorld **)&this->field_0xb0;
  if (pUVar10 == (UWorld *)0x0) {
    pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  bVar9 = UWorld::IsGameWorld(pUVar10);
  if (!bVar9) {
    pUVar10 = *(UWorld **)&this->field_0xb0;
    if (pUVar10 == (UWorld *)0x0) {
      pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    bVar9 = UWorld::IsPreviewWorld(pUVar10);
    if (!bVar9) {
      return;
    }
  }
  pUVar11 = UPhysicsSettings::Get();
  local_d8.UserData = &this->PhysicsUserData;
  local_18f = this->bEnableDamageFromCollision;
  local_1d8._0_8_ = __real_3fd3333340000000;
  local_1d8._24_8_ = 0.0;
  this->bPhysicsPredictionEnabled = (pUVar11->PhysicsPrediction).bEnablePhysicsPrediction;
  local_1d8._8_4_ = 100;
  local_1d8[0xc] = false;
  local_1d8[0xd] = false;
  local_1d8[0xe] = true;
  local_1d8._32_8_ = (FBVHParticles *)0x0;
  local_1d8._40_8_ = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  local_190 = false;
  local_1d8._16_4_ = PointImplicit;
  local_1d8._48_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_1a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_198 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  if ((local_d8.UserData == (FChaosUserData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Public\\PhysicsInterfaceTypesCore.h"
                         ,0xf3,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ((FChaosUserData *)local_d8.UserData)->Type = PrimitiveComponent;
  (this->PhysicsUserData).Payload = this;
  cVar3 = *(char *)(*(longlong *)&this->field_0xa8 + 0x168);
  local_d8.bCheckConnectivity = cVar3 == '\x03';
  local_d8.DebugName.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.InitialTransform.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x200;
  local_d8.InitialTransform.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x208;
  local_d8.ActorId = *(uint *)(*(longlong *)&this->field_0xa8 + 0xc);
  local_d8.InitialTransform.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
  local_d8.InitialTransform.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x1f8;
  local_d8.ComponentId = *(uint *)&this->field_0xc;
  local_d8.GravityGroupOverride = this->GravityGroupIndexOverride;
  local_d8.bCCDEnabled = (bool)(this->field_0x3cb & 1);
  local_d8.bMACDEnabled = (bool)((byte)this->field_0x3cb >> 3 & 1);
  local_d8.InitialTransform.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x210;
  local_d8.InitialTransform.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x218;
  local_d8.bUnbreakable = cVar3 != '\x03';
  local_d8.InitialTransform.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x220;
  local_d8.InitialTransform.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0x228;
  local_d8.InitialTransform.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x230;
  local_d8.InitialTransform.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0x238;
  local_d8.InitialTransform.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x240;
  local_d8.InitialTransform.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0x248;
  local_200.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_200.Number = *(uint *)&this->field_0x1c;
  local_d8.bGenerateConnectivityEdges = local_d8.bCheckConnectivity;
  ::FName::ToString(&local_200,&local_1f0);
  if (*(longlong *)&this->field_0xa8 == 0) {
    pFVar12 = ::FString::FString(&local_180,L"NULL");
    FVar18.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_1f8 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
    ::FName::ToString(&local_1f8,&local_238);
    FVar18.Data = local_238.Data.AllocatorInstance.Data;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.Data.ArrayNum = 0;
    local_238.Data.ArrayMax = 0;
  }
  ::FString::PrintfImpl(&local_250,L"%s %s");
  local_220.ReferenceController = ::operator_new(0x20);
  if (local_220.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_220.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    (local_220.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar20 = local_220.ReferenceController + 1;
    (local_220.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_220.ReferenceController)->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFString___00_SharedPointerInternals__6B_;
    local_220.ReferenceController[1]._padding_ = 0;
    local_220.ReferenceController[1]._padding_ = (longlong)local_250.Data.AllocatorInstance.Data;
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ReferenceController[1].SharedReferenceCount = (atomic<int>)local_250.Data.ArrayNum;
    local_220.ReferenceController[1].WeakReferenceCount = (atomic<int>)local_250.Data.ArrayMax;
    local_250.Data.ArrayNum = 0;
    local_250.Data.ArrayMax = 0;
    if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    LOCK();
    (local_220.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_220.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar8.ReferenceController = local_220.ReferenceController;
  local_228 = 0;
  local_d8.DebugName.Object = (FString *)pTVar20;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_d8.DebugName.SharedReferenceCount,&local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::operator_new(400);
  pUVar14 = pUVar19;
  if (pFVar13 != (FClusterUnionPhysicsProxy *)0x0) {
    pUVar14 = (UPrimitiveComponent *)
              Chaos::FClusterUnionPhysicsProxy::FClusterUnionPhysicsProxy
                        (pFVar13,(UObject *)this,(FClusterCreationParameters *)local_1d8,&local_d8);
  }
  this->PhysicsProxy = (FClusterUnionPhysicsProxy *)pUVar14;
  Chaos::FClusterUnionPhysicsProxy::Initialize_External((FClusterUnionPhysicsProxy *)pUVar14);
  this_00 = GetChaosScene(this);
  if (this_00 != (FPhysScene_Chaos *)0x0) {
    pFVar13 = this->PhysicsProxy;
    FPhysScene_Chaos::AddToComponentMaps
              (this_00,(UPrimitiveComponent *)this,(IPhysicsProxyBase *)pFVar13);
    Chaos::FPBDRigidsSolver::RegisterObject((FPBDRigidsSolver *)this_00->_padding_,pFVar13);
    if ((this->field_0x3cb & 0x40) != 0) {
      pUVar14 = pUVar19;
      if (Chaos::CVars::bEnableAsyncInitBody != false) {
        pUVar14 = (UPrimitiveComponent *)&this_00->CollisionEventRegistrationsLock;
      }
      local_240 = this;
      if (pUVar14 == (UPrimitiveComponent *)0x0) {
        TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
        Emplace<UPrimitiveComponent_*_const_&>
                  (&this_00->CollisionEventRegistrations,(UPrimitiveComponent **)local_254,
                   (bool *)&local_240);
      }
      else {
        AcquireSRWLockExclusive((PSRWLOCK)pUVar14);
        TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
        Emplace<UPrimitiveComponent_*_const_&>
                  (&this_00->CollisionEventRegistrations,(UPrimitiveComponent **)local_254,
                   (bool *)&local_240);
        ReleaseSRWLockExclusive((PSRWLOCK)pUVar14);
      }
    }
  }
  if (bUseClusterUnionAccelerationStructure == false) goto LAB_1482975d1;
  this_01 = ::operator_new(0x1f8);
  pUVar14 = pUVar19;
  if (((this_01 ==
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
         *)0x0) ||
      (pUVar14 = (UPrimitiveComponent *)
                 Chaos::
                 TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                 ::
                 TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                           (this_01,(EmptyInit)0x0,0xc,0x10,__real_40f86a0000000000,0,true,false,
                            true), pUVar14 == (UPrimitiveComponent *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Structure != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                         ,0x54,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar1 = &this->AccelerationStructure;
  if (pTVar1 == (TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
                 *)&local_188) {
    if (pUVar14 != (UPrimitiveComponent *)0x0) {
      puVar15 = *(undefined8 **)&pUVar14->field_0x0;
      goto LAB_14829759f;
    }
  }
  else {
    pUVar6 = (UPrimitiveComponent *)pTVar1->Ptr;
    pTVar1->Ptr = (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)pUVar14;
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      puVar15 = *(undefined8 **)&pUVar6->field_0x0;
      pUVar14 = pUVar6;
LAB_14829759f:
      (*(code *)*puVar15)(pUVar14,1);
    }
  }
  if ((pTVar1->Ptr == (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccelerationStructure != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                         ,0x2f8,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_1482975d1:
  bVar9 = IsAuthority(this);
  if (bVar9) {
    iVar4 = (this->ClusteredComponentsReferences).ArrayNum;
    this_02 = (FComponentReference *)(this->ClusteredComponentsReferences).AllocatorInstance.Data;
    pFVar2 = this_02 + iVar4;
    while( true ) {
      if ((this->ClusteredComponentsReferences).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FComponentReference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_258);
      }
      if (this_02 == pFVar2) break;
      bVar9 = FWeakObjectPtr::IsValid(&(this_02->OtherActor).WeakPtr);
      if (bVar9) {
        local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.ArrayNum = 0;
        local_218.ArrayMax = 0;
        pAVar16 = (AActor *)FWeakObjectPtr::Get(&(this_02->OtherActor).WeakPtr);
        pUVar14 = (UPrimitiveComponent *)FComponentReference::GetComponent(this_02,pAVar16);
        if (pUVar14 == (UPrimitiveComponent *)0x0) {
LAB_148297667:
          pUVar14 = pUVar19;
        }
        else {
          pUVar17 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar5 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar17->_padding_)) goto LAB_148297667;
        }
        AddComponentToCluster(this,pUVar14,&local_218,true);
        if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.AllocatorInstance.Data);
        }
      }
      this_02 = this_02 + 1;
    }
  }
  else {
    local_158[0].X = *(double *)&this->field_0x1f0;
    local_158[0].Y = *(double *)&this->field_0x1f8;
    local_158[0].Z = *(double *)&this->field_0x200;
    local_158[0].W = *(double *)&this->field_0x208;
    local_170._s_0.X = (double)*(undefined8 *)&this->field_0x210;
    local_170._s_0.Y = (double)*(undefined8 *)&this->field_0x218;
    local_170._s_0.Z = (double)*(undefined8 *)&this->field_0x220;
    Chaos::FClusterUnionPhysicsProxy::SetXR_External
              (this->PhysicsProxy,(TVector<double> *)&local_170._s_0,local_158);
    if (bApplyReplicatedRigidStateOnCreatePhysicsState != false) {
      (**(code **)(*(longlong *)this + 0xaa8))(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.DebugName.SharedReferenceCount.ReferenceController);
  return;
}

// OnDestroyPhysicsState @ 148297740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UClusterUnionComponent::OnDestroyPhysicsState(UClusterUnionComponent *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FClusterUnionPhysicsProxy *pFVar4;
  FPBDRigidsSolver *this_00;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *pIVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FPhysScene_Chaos *this_01;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  UActorComponent::OnDestroyPhysicsState((UActorComponent *)this);
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    iVar12 = 0;
    iVar14 = 0;
    uVar8 = 1;
    iVar3 = *(int *)&(this->PerComponentData).field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PerComponentData).field_0x10;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->PerComponentData).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)TStack_60.Array;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14829781f;
        uVar11 = puVar15[lVar10 + 1];
      }
      uVar8 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res10 = (int)lVar10;
      iVar9 = local_res10 + -1 + iVar14;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_14829781f:
    uVar11 = *(uint *)&(this->PerComponentData).field_0x28;
    puVar1 = &(this->PerComponentData).field_0x10;
    uVar16 = uVar11 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar9;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uVar8,iVar12);
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar9;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->PerComponentData).field_0x8 -
                         *(int *)&(this->PerComponentData).field_0x34);
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(uint *)&(this->PerComponentData).field_0x28;
    if (uVar11 != uVar8) {
      puVar13 = *(undefined1 **)&(this->PerComponentData).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_148297930;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = (int)lVar10 + -1 + uVar16;
      if ((int)uVar8 < (int)uVar11) {
        uVar11 = uVar8;
      }
    }
LAB_148297930:
    while( true ) {
      if (*(int *)&(this->PerComponentData).field_0x8 - *(int *)&(this->PerComponentData).field_0x34
          != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar10 = *(longlong *)&(this->PerComponentData).field_0x0;
      HandleRemovedClusteredComponent
                (this,(TObjectKey<UPrimitiveComponent>)
                      *(FObjectKey *)((longlong)TStack_60.CurrentBitIndex * 0x38 + lVar10),
                 (FClusteredComponentData *)
                 (lVar10 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x38));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
             *)&this->PerComponentData);
    this_01 = GetChaosScene(this);
    if (this_01 != (FPhysScene_Chaos *)0x0) {
      pFVar4 = this->PhysicsProxy;
      this_00 = (FPBDRigidsSolver *)pFVar4->_padding_;
      FChaosScene::RemoveActorFromAccelerationStructureImp
                ((FChaosScene *)this_01,
                 (TGeometryParticle<double,3> *)(pFVar4->Particle_External).Ptr);
      if (this_00 != (FPBDRigidsSolver *)0x0) {
        Chaos::FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
                  ((FPhysicsSolverBase *)this_00,
                   (TGeometryParticle<double,3> *)(pFVar4->Particle_External).Ptr,Delete);
        Chaos::FPBDRigidsSolver::UnregisterObject(this_00,pFVar4);
      }
      FPhysScene_Chaos::RemoveFromComponentMaps(this_01,(IPhysicsProxyBase *)pFVar4);
    }
    this->PhysicsProxy = (FClusterUnionPhysicsProxy *)0x0;
    pIVar5 = (this->AccelerationStructure).Ptr;
    if (pIVar5 != (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
      (this->AccelerationStructure).Ptr =
           (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0;
      (**(code **)pIVar5->_padding_)(pIVar5,1);
    }
  }
  return;
}

// OnReceiveReplicatedState @ 148298c20

void __thiscall
UClusterUnionComponent::OnReceiveReplicatedState
          (UClusterUnionComponent *this,TVector<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  return;
}

// OnRep_RigidState @ 148298c70

void __thiscall UClusterUnionComponent::OnRep_RigidState(UClusterUnionComponent *this)

{
  uchar uVar1;
  EObjectStateType EVar2;
  
  if (((this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) &&
      ((uVar1 = (this->ReplicatedRigidState).ObjectState, uVar1 != '\0' || (!GSkipZeroStateInOnRep))
      )) && ((this->bPhysicsPredictionEnabled == false ||
             ((EVar2 = Chaos::FClusterUnionPhysicsProxy::GetObjectState_External(this->PhysicsProxy)
              , EVar2 == Kinematic || (uVar1 == '\x02')))))) {
    (**(code **)(*(longlong *)this + 0xaa0))(this,uVar1);
  }
  return;
}

// OnUpdateTransform @ 148299220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::OnUpdateTransform
          (UClusterUnionComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  TVector<double>_u_0 local_a8;
  TQuat<double> local_88 [4];
  
  USceneComponent::OnUpdateTransform((USceneComponent *)this,param_1,param_2);
  if ((this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) &&
     ((param_1 & SkipPhysicsUpdate) == None)) {
    local_88[0].X = *(double *)&this->field_0x1f0;
    local_88[0].Y = *(double *)&this->field_0x1f8;
    local_88[0].Z = *(double *)&this->field_0x200;
    local_88[0].W = *(double *)&this->field_0x208;
    local_a8._s_0.X = (double)*(undefined8 *)&this->field_0x210;
    local_a8._s_0.Y = (double)*(undefined8 *)&this->field_0x218;
    local_a8._s_0.Z = (double)*(undefined8 *)&this->field_0x220;
    Chaos::FClusterUnionPhysicsProxy::SetXR_External
              (this->PhysicsProxy,(TVector<double> *)&local_a8._s_0,local_88);
    if (param_2 == ResetPhysics) {
      Chaos::FClusterUnionPhysicsProxy::SetLinearVelocity_External
                (this->PhysicsProxy,&UE::Math::TVector<double>::ZeroVector);
      Chaos::FClusterUnionPhysicsProxy::SetAngularVelocity_External
                (this->PhysicsProxy,&UE::Math::TVector<double>::ZeroVector);
    }
  }
  return;
}

// OverlapComponentWithResult @ 148299790

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

bool __thiscall
UClusterUnionComponent::OverlapComponentWithResult
          (UClusterUnionComponent *this,TVector<double> *param_1,TQuat<double> *param_2,
          FImplicitObject *param_3,ECollisionChannel param_4,FCollisionQueryParams *param_5,
          FCollisionResponseParams *param_6,FCollisionObjectQueryParams *param_7,
          TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  FImplicitObject *pFVar9;
  FCollisionQueryParams *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentOverlapComponentWithResult> FVar12;
  UWorld *pUVar13;
  double *pdVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FColor_u_0 FVar15;
  FName FVar16;
  undefined1 uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStackY_2f8 [32];
  undefined1 local_298 [8];
  FColor_u_0 local_290;
  uint uStack_28c;
  LARGE_INTEGER local_288;
  FCollisionObjectQueryParams *local_280;
  FImplicitObject *local_278;
  FCollisionQueryParams *local_270;
  FName local_268;
  FStatMessage local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double local_218;
  TTransform<double> local_208;
  TMatrix<double> local_1a8;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined8 uStack_108;
  double *pdStack_100;
  double local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_270 = param_5;
  local_288 = (LARGE_INTEGER)param_6;
  local_280 = param_7;
  FVar12 = StatPtr_STAT_ClusterUnionComponentOverlapComponentWithResult;
  local_278 = param_3;
  if (StatPtr_STAT_ClusterUnionComponentOverlapComponentWithResult ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentOverlapComponentWithResult>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_258,
                             "STAT_ClusterUnionComponentOverlapComponentWithResult");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentOverlapComponentWithResult>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ClusterUnionComponentOverlapComponentWithResult,*pFVar11,
                        L"UClusterUnionComponent::OverlapComponentWithResult","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  bVar5 = false;
  bVar7 = false;
  FVar16 = *(FName *)FVar12;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar31 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar31 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_290.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_290._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_290.Bits = FVar15.Bits;
        uStack_28c = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_290._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x628);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_290.Bits = FVar15.Bits;
      uStack_28c = uVar31;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar6 = true;
      goto LAB_148299920;
    }
  }
  bVar6 = false;
  FVar16 = local_268;
LAB_148299920:
  pFVar9 = local_278;
  if ((this->AccelerationStructure).Ptr ==
      (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
    local_298[0] = 0;
    pdVar14 = (double *)(**(code **)(local_278->_padding_ + 0x90))(local_278,local_128);
    dVar26 = pdVar14[3] - *pdVar14;
    dStack_240 = pdVar14[1] - pdVar14[4];
    dVar2 = pdVar14[2] - pdVar14[5];
    uVar31 = SUB84(dVar26,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar32 = (uint)((ulonglong)dVar26 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar26 = dVar26 - (double)CONCAT44(uVar32,uVar31);
    dVar3 = (pdVar14[4] - pdVar14[1]) - dStack_240;
    dVar18 = (pdVar14[5] - pdVar14[2]) - dVar2;
    dStack_230 = dVar26 * __real_3fe0000000000000;
    dStack_228 = dVar3 * __real_3fe0000000000000;
    dStack_220 = dVar18 * __real_3fe0000000000000;
    local_248 = dStack_230 + (double)CONCAT44(uVar32,uVar31);
    dStack_240 = dStack_228 + dStack_240;
    local_208.Translation.XY.m128d_f64[0] = *(double *)&param_1->field0_0x0;
    local_208.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
    auVar19._0_8_ = dStack_220 + dVar2;
    auVar19._8_8_ = 0;
    local_208.Rotation.XY.m128d_f64[0] = param_2->X;
    local_208.Rotation.XY.m128d_f64[1] = param_2->Y;
    local_208.Translation.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
    local_208.Translation.ZW.m128d_f64[1] = 0.0;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = (dVar3 * dVar3 + dVar26 * dVar26 + dVar18 * dVar18) * __real_3fd0000000000000;
    auVar20 = sqrtpd(auVar19,auVar34);
    local_208.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_208.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_218 = auVar20._0_8_;
    local_208.Rotation.ZW.m128d_f64[0] = param_2->Z;
    local_208.Rotation.ZW.m128d_f64[1] = param_2->W;
    local_208.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_208.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_238 = auVar19._0_8_;
    UE::Math::TTransform<double>::ToMatrixWithScale(&local_208,&local_1a8);
    pFVar10 = local_270;
    LVar8 = local_288;
    auVar21._8_4_ = SUB84(dStack_230,0);
    auVar21._0_8_ = dStack_230;
    auVar21._12_4_ = (int)((ulonglong)dStack_230 >> 0x20);
    dVar26 = auVar21._8_8_ * local_1a8.M[0][1];
    dVar2 = dStack_230 * local_1a8.M[0][2];
    auVar22._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dStack_230 * local_1a8.M[0][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dStack_230 * local_1a8.M[0][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar22._8_4_ = SUB84(dVar26,0) & _UNK_15061cc88;
    auVar22._12_4_ = (uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c;
    auVar27._8_4_ = SUB84(dStack_220,0);
    auVar27._0_8_ = dStack_220;
    auVar27._12_4_ = (int)((ulonglong)dStack_220 >> 0x20);
    auVar23._8_4_ = SUB84(local_248,0);
    auVar23._0_8_ = local_248;
    auVar23._12_4_ = (int)((ulonglong)local_248 >> 0x20);
    dVar26 = auVar27._8_8_ * local_1a8.M[2][1];
    auVar28._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dStack_220 * local_1a8.M[2][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dStack_220 * local_1a8.M[2][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar28._8_4_ = SUB84(dVar26,0) & _UNK_15061cc88;
    auVar28._12_4_ = (uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c;
    dStack_230 = (double)CONCAT44((uint)((ulonglong)(dStack_228 * local_1a8.M[1][0]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dStack_228 * local_1a8.M[1][0],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar22._0_8_ +
                 auVar28._0_8_;
    dVar18 = (double)CONCAT44((uint)((ulonglong)(dStack_228 * local_1a8.M[1][1]) >> 0x20) &
                              _UNK_15061cc8c,
                              SUB84(dStack_228 * local_1a8.M[1][1],0) & _UNK_15061cc88) +
             auVar22._8_8_ + auVar28._8_8_;
    auVar29._8_4_ = SUB84(local_238,0);
    auVar29._0_8_ = local_238;
    auVar29._12_4_ = (int)((ulonglong)local_238 >> 0x20);
    auVar30._8_4_ = SUB84(dStack_240,0);
    auVar30._0_8_ = dStack_240;
    auVar30._12_4_ = (int)((ulonglong)dStack_240 >> 0x20);
    dVar3 = dStack_240 * local_1a8.M[1][2];
    auVar4._8_4_ = SUB84(dVar18,0);
    auVar4._0_8_ = dStack_230;
    auVar4._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dStack_220 = (double)CONCAT44((uint)((ulonglong)(dStack_228 * local_1a8.M[1][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dStack_228 * local_1a8.M[1][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)(dStack_220 * local_1a8.M[2][2]) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dStack_220 * local_1a8.M[2][2],0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar26 = local_248 * local_1a8.M[0][2];
    auVar33._0_8_ =
         local_1a8.M[1][0] * local_1a8.M[1][0] + local_1a8.M[0][0] * local_1a8.M[0][0] +
         local_1a8.M[2][0] * local_1a8.M[2][0];
    auVar33._8_8_ =
         local_1a8.M[1][1] * local_1a8.M[1][1] + local_1a8.M[0][1] * local_1a8.M[0][1] +
         local_1a8.M[2][1] * local_1a8.M[2][1];
    auVar24._8_4_ = SUB84(auVar33._8_8_,0);
    auVar24._0_8_ = auVar33._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
    auVar25._8_8_ = auVar33._8_8_;
    auVar25._0_8_ = auVar24._8_8_;
    auVar34 = maxpd(auVar33,auVar25);
    dVar2 = local_1a8.M[1][2] * local_1a8.M[1][2] + local_1a8.M[0][2] * local_1a8.M[0][2] +
            local_1a8.M[2][2] * local_1a8.M[2][2];
    auVar20._8_4_ = SUB84(dVar2,0);
    auVar20._0_8_ = dVar2;
    auVar20._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar20 = maxpd(auVar34,auVar20);
    dVar2 = SQRT(dStack_220 * dStack_220 + dStack_230 * dStack_230 + dVar18 * dVar18);
    dVar18 = SQRT(auVar20._0_8_) * local_218;
    uStack_108 = auVar4._8_8_;
    local_248 = dStack_240 * local_1a8.M[1][0] + local_248 * local_1a8.M[0][0] +
                local_238 * local_1a8.M[2][0] + local_1a8.M[3][0];
    dStack_240 = auVar30._8_8_ * local_1a8.M[1][1] + auVar23._8_8_ * local_1a8.M[0][1] +
                 auVar29._8_8_ * local_1a8.M[2][1] + local_1a8.M[3][1];
    local_218 = dVar2;
    if (dVar18 <= dVar2) {
      local_218 = dVar18;
    }
    local_238 = dVar3 + dVar26 + local_238 * local_1a8.M[2][2] + local_1a8.M[3][2];
    dStack_110 = dStack_230;
    dStack_228 = (double)uStack_108;
    local_208.Rotation.XY.m128d_f64[0] = (double)&local_248;
    local_208.Scale3D.XY.m128d_f64[0] = (double)local_298;
    local_208.Translation.ZW.m128d_f64[1] = (double)local_280;
    local_208.Rotation.XY.m128d_f64[1] = (double)pFVar9;
    local_208.Translation.XY.m128d_f64[0] =
         (double)CONCAT44(local_208.Translation.XY.m128d_f64[0]._4_4_,param_4);
    local_208.Translation.XY.m128d_f64[1] = (double)local_270;
    local_208.Translation.ZW.m128d_f64[0] = (double)local_288;
    local_208.Scale3D.XY.m128d_f64[1] = (double)param_8;
    local_128._0_8_ = (code *)0x0;
    local_208.Rotation.ZW.m128d_f64[0] = (double)param_1;
    local_208.Rotation.ZW.m128d_f64[1] = (double)param_2;
    local_118 = local_238;
    pdStack_100 = (double *)dStack_220;
    local_f8 = local_218;
    pdStack_100 = FMemory::Malloc(0x58,8);
    pdStack_100[1] = local_208.Rotation.XY.m128d_f64[0];
    pdStack_100[2] = local_208.Rotation.XY.m128d_f64[1];
    *pdStack_100 = (double)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`UClusterUnionComponent::OverlapComponentWithResult'::`2'::<lambda_1>,0,1>
                            ::_vftable_;
    pdStack_100[3] = local_208.Rotation.ZW.m128d_f64[0];
    pdStack_100[4] = local_208.Rotation.ZW.m128d_f64[1];
    pdStack_100[5] = local_208.Translation.XY.m128d_f64[0];
    pdStack_100[6] = local_208.Translation.XY.m128d_f64[1];
    *(double *)(pdStack_100 + 7) = local_208.Translation.ZW.m128d_f64[0];
    pdStack_100[8] = local_208.Translation.ZW.m128d_f64[1];
    pdStack_100[9] = local_208.Scale3D.XY.m128d_f64[0];
    pdStack_100[10] = local_208.Scale3D.XY.m128d_f64[1];
    if (pdStack_100 != (double *)&DAT_fffffffffffffff8) {
      local_128._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UClusterUnionComponent::OverlapComponentWithResult'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
           ::Call;
    }
    VisitAllCurrentChildComponentsForCollision
              (this,param_4,pFVar10,(FCollisionResponseParams *)LVar8,local_280,
               (TFunction<bool___cdecl(UPrimitiveComponent_*)> *)local_128);
    uVar17 = local_298[0];
    if ((code *)local_128._0_8_ != (code *)0x0) {
      pdVar14 = &local_118;
      if (pdStack_100 != (double *)0x0) {
        pdVar14 = pdStack_100;
      }
      (**(code **)((longlong)*pdVar14 + 0x10))();
      uVar17 = local_298[0];
    }
  }
  else {
    pUVar13 = *(UWorld **)&this->field_0xb0;
    if (pUVar13 == (UWorld *)0x0) {
      pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
    ::GeomOverlapMulti((this->AccelerationStructure).Ptr,pUVar13,local_278,param_1,param_2,param_8,
                       param_4,local_270,(FCollisionResponseParams *)local_288,local_280);
    uVar17 = param_8->ArrayNum != 0;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_258.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_258.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_288);
      local_258.StatData.Pad = (uchar  [8])(local_288.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_258);
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
  return (bool)uVar17;
}

// RemoveComponentBonesFromCluster @ 1482a1f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::RemoveComponentBonesFromCluster
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *pIVar3;
  longlong lVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ENetMode EVar11;
  TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator> *pTVar12
  ;
  UObject *pUVar13;
  FPhysicsObject *pFVar14;
  TGeometryParticle<double,3> *pTVar15;
  FClusteredComponentData *pFVar16;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  FWeakObjectPtr local_1b0;
  undefined1 local_1a8 [8];
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  undefined4 local_188;
  int local_184;
  FClusterUnionBoneData local_180;
  FWeakObjectPtr local_178;
  FClusterUnionBoneData local_170;
  TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
  *local_168;
  FWeakObjectPtr local_160;
  undefined8 uStack_158;
  UPrimitiveComponent *local_150;
  UPrimitiveComponent *local_148;
  UPrimitiveComponent *local_140;
  TArray<int,TSizedDefaultAllocator<32>_> *local_138;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_130;
  FLockedPhysicsObjectExternalInterface<0> local_120;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  local_f8;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return;
  }
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (this->PhysicsProxy == (FClusterUnionPhysicsProxy *)0x0) {
    return;
  }
  local_148 = param_1;
  local_138 = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_1a0.ObjectIndex = 0;
  local_1a0.ObjectSerialNumber = 0;
  local_150 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_150);
  FVar6 = local_1a0;
  local_1b0 = local_1a0;
  pTVar12 = &TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
             ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                     *)&this->PendingComponentsToAdd,(TObjectKey<UPrimitiveComponent> *)&local_1b0)
             ->BonesData;
  if (pTVar12 !=
      (TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator> *)
      0x0) {
    pFVar21 = (param_2->AllocatorInstance).Data;
    iVar10 = param_2->ArrayNum;
    pFVar2 = pFVar21 + (longlong)iVar10 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar10) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1a8);
      }
      if (pFVar21 == pFVar2) break;
      local_180.ID = *(int *)pFVar21;
      local_180.ParticleID.Idx = -1;
      TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>::
      Remove(pTVar12,&local_180);
      pFVar21 = pFVar21 + 4;
    }
    if (*(int *)&(pTVar12->Elements).field_0x8 != *(int *)&(pTVar12->Elements).field_0x34) {
      return;
    }
    TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
    ::Remove((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
              *)&this->PendingComponentsToAdd,(TObjectKey<UPrimitiveComponent> *)&local_1b0);
    return;
  }
  local_168 = &TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
               ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                       *)&this->PendingComponentSync,(TObjectKey<UPrimitiveComponent> *)&local_1b0)
               ->BonesData;
  if (local_168 !=
      (TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator> *)
      0x0) {
    if ((this->AccelerationStructure).Ptr !=
        (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
      pFVar21 = (param_2->AllocatorInstance).Data;
      iVar10 = param_2->ArrayNum;
      pFVar2 = pFVar21 + (longlong)iVar10 * 4;
      while( true ) {
        if (param_2->ArrayNum != iVar10) {
          local_1b8 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1b8);
        }
        if (pFVar21 == pFVar2) break;
        local_188 = *(undefined4 *)pFVar21;
        local_178.ObjectSerialNumber = FVar6.ObjectSerialNumber;
        local_184 = -1;
        local_190 = FVar6;
        local_178.ObjectIndex = FVar6.ObjectIndex;
        pUVar13 = FWeakObjectPtr::Get(&local_178);
        if ((pUVar13 != (UObject *)0x0) &&
           (cVar8 = (**(code **)(*(longlong *)pUVar13 + 0x3c8))(pUVar13), cVar8 != '\0')) {
          pFVar14 = (FPhysicsObject *)
                    (**(code **)(*(longlong *)&pUVar13[0xf].field_0x8 + 0x10))
                              (&pUVar13[0xf].field_0x8,local_188);
          FPhysicsObjectExternalInterface::LockRead(&local_120,pFVar14);
          pTVar15 = Chaos::FReadPhysicsObjectInterface<0>::GetParticle(&local_120.Interface,pFVar14)
          ;
          FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_120.Lock);
          if (pTVar15 != (TGeometryParticle<double,3> *)0x0) {
            local_184 = (pTVar15->MNonFrequentData).Property.MUniqueIdx.Idx;
          }
        }
        if (local_184 == -1) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3065361942051815034>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                             ,0x186,"Payload.IsValid()");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          (**(code **)(((this->AccelerationStructure).Ptr)->_padding_ + 0x70))();
        }
        pFVar21 = pFVar21 + 4;
      }
    }
    pTVar12 = local_168;
    pFVar21 = (param_2->AllocatorInstance).Data;
    iVar10 = param_2->ArrayNum;
    pFVar2 = pFVar21 + (longlong)iVar10 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar10) {
        local_1b7[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1b7);
      }
      param_1 = local_148;
      if (pFVar21 == pFVar2) break;
      local_170.ID = *(int *)pFVar21;
      local_170.ParticleID.Idx = -1;
      TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>::
      Remove(pTVar12,&local_170);
      pFVar21 = pFVar21 + 4;
    }
    if ((*(int *)&(pTVar12->Elements).field_0x8 == *(int *)&(pTVar12->Elements).field_0x34) &&
       (*(int *)&(this->PendingComponentSync).field_0x8 !=
        *(int *)&(this->PendingComponentSync).field_0x34)) {
      uVar20 = FVar6.ObjectIndex - local_1b0.ObjectSerialNumber ^
               (uint)local_1b0.ObjectSerialNumber >> 0xd;
      uVar23 = (-0x61c88647 - local_1b0.ObjectSerialNumber) - uVar20 ^ uVar20 << 8;
      uVar18 = (local_1b0.ObjectSerialNumber - uVar23) - uVar20 ^ uVar23 >> 0xd;
      uVar20 = (uVar20 - uVar18) - uVar23 ^ uVar18 >> 0xc;
      uVar23 = (uVar23 - uVar20) - uVar18 ^ uVar20 << 0x10;
      uVar18 = (uVar18 - uVar23) - uVar20 ^ uVar23 >> 5;
      uVar20 = (uVar20 - uVar18) - uVar23 ^ uVar18 >> 3;
      uVar23 = (uVar23 - uVar20) - uVar18 ^ uVar20 << 10;
      TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectKey<UPrimitiveComponent>_>
                ((TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>,FDefaultSetAllocator>
                  *)&this->PendingComponentSync,(uVar18 - uVar23) - uVar20 ^ uVar23 >> 0xf,
                 (TObjectKey<UPrimitiveComponent> *)&local_1b0);
    }
  }
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  local_f8.Elements._48_4_ = 0xffffffff;
  pFVar16 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
            ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                    *)&this->PerComponentData,(TObjectKey<UPrimitiveComponent> *)&local_1b0);
  uVar7 = _UNK_15076cb68;
  FVar6 = ___xmm_ffffffffffffffff0000000000000000;
  FVar22 = (ForElementType<FSetElementId>)0x0;
  if (pFVar16 == (FClusteredComponentData *)0x0) goto LAB_1482a26a0;
  while (0 < (pFVar16->BonesData).ArrayNum) {
    if ((this->AccelerationStructure).Ptr !=
        (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
      pFVar2 = (pFVar16->BonesData).AllocatorInstance.Data;
      local_160 = FVar6;
      uStack_158 = uVar7;
      if (((pFVar16->BonesData).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar1 = *(undefined4 *)(pFVar16->BonesData).AllocatorInstance.Data;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_198.ObjectIndex = 0;
      local_198.ObjectSerialNumber = 0;
      local_140 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_140);
      local_160 = local_198;
      iVar10 = *(int *)(pFVar2 + 4);
      uStack_158 = CONCAT44(iVar10,uVar1);
      if (iVar10 == -1) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3065361942051815007>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                           ,0x1a1,"Payload.IsValid()");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        pIVar3 = (this->AccelerationStructure).Ptr;
        (**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,&local_160);
      }
    }
    if (((pFVar16->BonesData).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = (pFVar16->BonesData).AllocatorInstance.Data;
    iVar10 = (pFVar16->BonesData).ArrayNum + -1;
    if (iVar10 != 0) {
      memmove(pFVar2,pFVar2 + 8,(longlong)iVar10 << 3);
    }
    iVar10 = (pFVar16->BonesData).ArrayNum + -1;
    (pFVar16->BonesData).ArrayNum = iVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(ForAnyElementType *)pFVar16,iVar10,&(pFVar16->BonesData).ArrayMax);
  }
  cVar8 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
  if (cVar8 != '\0') {
    pTVar17 = GetAllPhysicsObjectsById<int>
                        (&local_130,(IPhysicsComponent *)&param_1->field_0x260,local_138);
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>::
    Append<TSizedDefaultAllocator<32>_>(&local_a8,pTVar17);
    TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>::
    operator=(&local_f8,&local_a8);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
    Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External(this->PhysicsProxy,&local_f8);
    RemoveGTParticleGeometry(this,&local_f8);
  }
  FVar22 = local_f8.Hash.SecondaryData;
  if ((pFVar16->BonesData).ArrayNum != 0) goto LAB_1482a26a0;
  pFVar16->bPendingDeletion = true;
  if (bUseLocalRoleForAuthorityCheck == false) {
    EVar11 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    if ((EVar11 == NM_Standalone) ||
       (((*(longlong *)&this->field_0xa8 != 0 &&
         (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) == '\x03')) && (EVar11 != NM_Client))))
    goto LAB_1482a257d;
  }
  else if ((*(longlong *)&this->field_0xa8 != 0) &&
          (*(char *)(*(longlong *)&this->field_0xa8 + 0x168) == '\x03')) {
LAB_1482a257d:
    pUVar13 = FWeakObjectPtr::Get(&(pFVar16->ReplicatedProxyComponent).WeakPtr);
    if (pUVar13 != (UObject *)0x0) {
      pUVar13[8].field_0x4 = 1;
    }
  }
  FVar22 = local_f8.Hash.SecondaryData;
  if (*(int *)&(this->PerComponentData).field_0x8 != *(int *)&(this->PerComponentData).field_0x34) {
    puVar24 = *(undefined1 **)&(this->PerComponentData).field_0x40;
    uVar20 = local_1b0.ObjectIndex - local_1b0.ObjectSerialNumber ^
             (uint)local_1b0.ObjectSerialNumber >> 0xd;
    uVar23 = (-0x61c88647 - local_1b0.ObjectSerialNumber) - uVar20 ^ uVar20 << 8;
    uVar18 = (local_1b0.ObjectSerialNumber - uVar23) - uVar20 ^ uVar23 >> 0xd;
    uVar20 = (uVar20 - uVar18) - uVar23 ^ uVar18 >> 0xc;
    uVar23 = (uVar23 - uVar20) - uVar18 ^ uVar20 << 0x10;
    uVar18 = (uVar18 - uVar23) - uVar20 ^ uVar23 >> 5;
    uVar20 = (uVar20 - uVar18) - uVar23 ^ uVar18 >> 3;
    uVar23 = (uVar23 - uVar20) - uVar18 ^ uVar20 << 10;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = &(this->PerComponentData).field_0x38;
    }
    iVar10 = *(int *)(puVar24 +
                     (((longlong)(int)((uVar18 - uVar23) - uVar20) ^ (ulonglong)(uVar23 >> 0xf)) &
                     (longlong)*(int *)&(this->PerComponentData).field_0x48 - 1U) * 4);
    if (iVar10 != -1) {
      lVar4 = *(longlong *)&(this->PerComponentData).field_0x0;
      do {
        lVar19 = (longlong)iVar10 * 0x38;
        if ((*(int *)(lVar19 + lVar4) == local_1b0.ObjectIndex) &&
           (*(uint *)(lVar19 + 4 + lVar4) == local_1b0.ObjectSerialNumber)) {
          TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
                           *)&this->PerComponentData,iVar10);
          FVar22 = local_f8.Hash.SecondaryData;
          break;
        }
        iVar10 = *(int *)(lVar19 + 0x30 + lVar4);
      } while (iVar10 != -1);
    }
  }
LAB_1482a26a0:
  local_f8.HashSize = 0;
  if (FVar22 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar22);
  }
  TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  return;
}

// RemoveComponentFromCluster @ 1482a2700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::RemoveComponentFromCluster
          (UClusterUnionComponent *this,UPrimitiveComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  ForElementType<unsigned_int> FVar9;
  FClusterUnionPendingAddData *pFVar10;
  FClusterUnionPendingAddData *pFVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_RemoveComponentFromCluster> FVar17;
  UWorld *pUVar18;
  FClusteredComponentData *pFVar19;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *pTVar20;
  UObject *pUVar21;
  longlong lVar22;
  int iVar23;
  FName FVar24;
  FScriptContainerElement *pFVar25;
  int iVar26;
  ForElementType<unsigned_int> FVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_2c8 [32];
  undefined1 local_267;
  undefined1 local_266 [6];
  FName local_260;
  FColor_u_0 local_258 [2];
  FName local_250;
  FWeakObjectPtr local_248;
  ForElementType<unsigned_int> local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FName local_228;
  FName local_220;
  TArray<int,TSizedDefaultAllocator<32>_> local_218;
  FName local_208;
  FClusterUnionPendingAddData *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  int iStack_1dc;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  UPrimitiveComponent *local_1c8;
  FWeakObjectPtr local_1c0;
  FClusterUnionPendingAddData *local_1b8;
  UPrimitiveComponent *local_1b0;
  UPrimitiveComponent *local_1a8;
  FWeakObjectPtr local_1a0;
  UPrimitiveComponent *local_198;
  FWeakObjectPtr local_190;
  int local_188;
  int local_184;
  FName local_180;
  undefined4 local_178;
  int local_174;
  FName local_170;
  undefined4 local_168;
  int local_164;
  UPrimitiveComponent *local_160;
  FClusterUnionPendingAddData *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_128;
  FName local_118;
  FLockedPhysicsObjectExternalInterface<1> local_110;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  iVar26 = 0;
  FVar17 = StatPtr_STAT_ClusterUnionComponent_RemoveComponentFromCluster;
  local_1b0 = param_1;
  if (StatPtr_STAT_ClusterUnionComponent_RemoveComponentFromCluster ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_RemoveComponentFromCluster>)0x0) {
    pFVar16 = ::FName::FName(&local_118,"STAT_ClusterUnionComponent_RemoveComponentFromCluster");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_RemoveComponentFromCluster>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ClusterUnionComponent_RemoveComponentFromCluster,*pFVar16,
                        L"UClusterUnionComponent::RemoveComponentFromCluster","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar17;
  bVar7 = false;
  bVar8 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_258[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_258[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_228.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x10a);
        bVar7 = true;
        bVar8 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_260 = FVar24;
      local_220 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar12 = true;
      goto LAB_1482a2881;
    }
  }
  bVar8 = bVar13;
  bVar7 = bVar12;
  bVar12 = false;
  local_220 = local_208;
  FVar24 = local_208;
LAB_1482a2881:
  if ((param_1 != (UPrimitiveComponent *)0x0) &&
     (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_250.ComparisonIndex.Value = 0;
    local_250.Number = 0;
    local_160 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_250,(FObjectPtr)&local_160);
    local_260 = local_250;
    iVar15 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
             ::Remove((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                       *)&this->PendingComponentsToAdd,(TObjectKey<UPrimitiveComponent> *)&local_260
                     );
    if (iVar15 < 1) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_248.ObjectIndex = 0;
      local_248.ObjectSerialNumber = 0;
      local_1c8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_248,(FObjectPtr)&local_1c8);
      local_1c0 = local_248;
      local_1b8 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                  ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                          *)&this->PendingComponentSync,
                         (TObjectKey<UPrimitiveComponent> *)&local_1c0);
      if (local_1b8 != (FClusterUnionPendingAddData *)0x0) {
        if ((this->AccelerationStructure).Ptr !=
            (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
          iVar15 = *(int *)&(local_1b8->BonesData).Elements.field_0x28;
          local_240 = (ForElementType<unsigned_int>)&(local_1b8->BonesData).Elements.field_0x10;
          uStack_1ec = 1;
          iVar23 = 0;
          iStack_1dc = iVar26;
          local_1d8 = iVar26;
          if (iVar15 != 0) {
            puVar28 = *(uint **)&(local_1b8->BonesData).Elements.field_0x20;
            if (puVar28 == (uint *)0x0) {
              puVar28 = (uint *)local_240;
            }
            uVar30 = *puVar28;
            local_1d8 = 0;
            iVar26 = 0;
            while (uVar30 == 0) {
              lVar22 = (longlong)iVar26;
              local_1d8 = local_1d8 + 0x20;
              iVar26 = iVar26 + 1;
              if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) {
                iVar23 = *(int *)&(local_1b8->BonesData).Elements.field_0x28;
                iStack_1dc = iVar15;
                goto LAB_1482a29f5;
              }
              uVar30 = puVar28[lVar22 + 1];
            }
            iVar23 = *(int *)&(local_1b8->BonesData).Elements.field_0x28;
            uStack_1ec = -uVar30 & uVar30;
            uVar2 = (ulonglong)uStack_1ec * 2 + 1;
            lVar22 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_188 = (int)lVar22;
            iStack_1dc = local_1d8 + -1 + local_188;
            if (iVar23 < iStack_1dc) {
              iStack_1dc = iVar15;
            }
          }
LAB_1482a29f5:
          iStack_1d0 = *(int *)&(local_1b8->BonesData).Elements.field_0x8 -
                       *(int *)&(local_1b8->BonesData).Elements.field_0x34;
          uVar30 = *(uint *)&(local_1b8->BonesData).Elements.field_0x28;
          uStack_1e0 = 0xffffffff;
          TStack_150._padding_ = CONCAT44(uStack_1ec,iVar26);
          uVar29 = uVar30 & 0xffffffe0;
          TStack_150.CurrentBitIndex = iStack_1dc;
          TStack_150.UnvisitedBitMask = 0xffffffff;
          iVar15 = (int)uVar30 >> 5;
          TStack_150._28_4_ = iStack_1dc;
          TStack_150.BaseBitIndex = local_1d8;
          uStack_130 = CONCAT44(uStack_1cc,iStack_1d0);
          local_1f8 = local_1b8;
          iStack_1f0 = iVar26;
          local_1e8 = (undefined1 *)local_240;
          iStack_1d4 = iStack_1dc;
          local_158 = local_1b8;
          TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
          if ((((int)uVar30 < 0) || (iVar23 < (int)uVar30)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar10 = local_1b8;
          FVar9 = local_240;
          uVar3 = *(int *)((longlong)local_240 + 0x18);
          if (uVar30 != uVar3) {
            FVar27 = *(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10);
            if (*(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10) ==
                (ForElementType<unsigned_int>)0x0) {
              FVar27 = local_240;
            }
            uVar30 = -1 << ((byte)uVar30 & 0x1f) &
                     *(uint *)((longlong)FVar27 + (longlong)iVar15 * 4);
            while (uVar30 == 0) {
              lVar22 = (longlong)iVar15;
              uVar29 = uVar29 + 0x20;
              iVar15 = iVar15 + 1;
              uVar30 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_1482a2b20;
              uVar30 = *(uint *)((undefined1 *)((longlong)FVar27 + 4) + lVar22 * 4);
            }
            uVar2 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_184 = (int)lVar22;
            uVar30 = (uVar29 - 1) + local_184;
            if ((int)uVar3 < (int)uVar30) {
              uVar30 = uVar3;
            }
          }
LAB_1482a2b20:
          while( true ) {
            pFVar11 = local_158;
            if (*(int *)&(local_158->BonesData).Elements.field_0x8 -
                *(int *)&(local_158->BonesData).Elements.field_0x34 != (int)uStack_130) {
              local_267 = 0;
              `TSparseArray<TSparseSetElement<FClusterUnionBoneData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_267);
            }
            if (((TStack_150.CurrentBitIndex == uVar30) &&
                ((ForElementType<unsigned_int>)TStack_150.Array == FVar9)) &&
               (param_1 = local_1b0, pFVar11 == pFVar10)) break;
            uVar4 = *(undefined8 *)
                     (*(longlong *)&(pFVar11->BonesData).Elements +
                     (longlong)TStack_150.CurrentBitIndex * 0x10);
            local_180 = local_260;
            local_178 = (undefined4)uVar4;
            local_174 = (int)((ulonglong)uVar4 >> 0x20);
            if (local_174 == -1) {
              bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3065361942051815132>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                                  ,0x124,"Payload.IsValid()");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              pIVar5 = (this->AccelerationStructure).Ptr;
              (**(code **)(pIVar5->_padding_ + 0x70))(pIVar5,&local_180);
            }
            TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
          }
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_238.ObjectIndex = 0;
        local_238.ObjectSerialNumber = 0;
        local_1a8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_1a8);
        local_1a0 = local_238;
        TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
        ::Remove((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                  *)&this->PendingComponentSync,(TObjectKey<UPrimitiveComponent> *)&local_1a0);
      }
      pUVar18 = *(UWorld **)&this->field_0xb0;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      if (pUVar18 == (UWorld *)0x0) {
        pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      FPhysicsObjectExternalInterface::LockWrite(&local_110,(FChaosScene *)pUVar18->PhysicsScene);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_230.ObjectIndex = 0;
      local_230.ObjectSerialNumber = 0;
      local_198 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_198);
      local_190 = local_230;
      pFVar19 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                        *)&this->PerComponentData,(TObjectKey<UPrimitiveComponent> *)&local_190);
      if (pFVar19 != (FClusteredComponentData *)0x0) {
        pFVar19->bPendingDeletion = true;
        cVar14 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
        if (cVar14 != '\0') {
          local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_218.ArrayNum = 0;
          local_218.ArrayMax = 0;
          GetBoneIDsFromComponentData<TArray<int,TSizedDefaultAllocator<32>_>,FClusteredComponentData>
                    (this,&local_218,pFVar19);
          pTVar20 = GetAllPhysicsObjectsById<int>
                              (&local_128,(IPhysicsComponent *)&param_1->field_0x260,&local_218);
          local_e8._0_8_ = (FScriptContainerElement *)0x0;
          local_e8._8_8_ = 0;
          local_c8 = (void *)0x0;
          local_c0 = 0;
          local_bc = 0x80;
          local_b8 = 0xffffffff;
          local_b4 = 0;
          local_a8 = (ForElementType<FSetElementId>)0x0;
          local_a0 = 0;
          TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
          ::Append<TSizedDefaultAllocator<32>_>
                    ((TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
                      *)local_e8,pTVar20);
          TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
          ::operator=(&local_98,
                      (TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
                       *)local_e8);
          local_a0 = 0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_a8);
          }
          bVar13 = local_e8._12_4_ != 0;
          local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
          if (bVar13) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
          }
          local_b8 = 0xffffffff;
          local_b4 = 0;
          local_c0 = 0;
          if (0x80 < local_bc) {
            local_bc = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free(local_c8);
          }
          if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_e8._0_8_);
          }
          if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
          if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.AllocatorInstance.Data);
          }
        }
        bVar13 = IsAuthority(this);
        if ((bVar13) &&
           (pUVar21 = FWeakObjectPtr::Get(&(pFVar19->ReplicatedProxyComponent).WeakPtr),
           pUVar21 != (UObject *)0x0)) {
          pUVar21[8].field_0x4 = 1;
        }
        if ((this->AccelerationStructure).Ptr !=
            (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
          pFVar25 = (pFVar19->BonesData).AllocatorInstance.Data;
          iVar26 = (pFVar19->BonesData).ArrayNum;
          pFVar1 = pFVar25 + (longlong)iVar26 * 8;
          while( true ) {
            if ((pFVar19->BonesData).ArrayNum != iVar26) {
              local_266[0] = 0;
              `TCheckedPointerIterator<FClusterUnionBoneData,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_266);
            }
            FVar24 = local_220;
            if (pFVar25 == pFVar1) break;
            local_170 = local_260;
            local_168 = *(undefined4 *)pFVar25;
            local_164 = *(int *)(pFVar25 + 4);
            if (local_164 == -1) {
              bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3065361942051815090>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                                  ,0x14e,"Payload.IsValid()");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              (**(code **)(((this->AccelerationStructure).Ptr)->_padding_ + 0x70))();
            }
            pFVar25 = pFVar25 + 8;
          }
        }
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External
                    (this->PhysicsProxy,&local_98);
          RemoveGTParticleGeometry(this,&local_98);
        }
      }
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_110.Lock);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// RemoveGTParticleGeometry @ 1482a4500

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
UClusterUnionComponent::RemoveGTParticleGeometry
          (UClusterUnionComponent *this,
          TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  code *pcVar5;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  int iVar8;
  UWorld *pUVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_198;
  int local_190;
  int iStack_18c;
  TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> local_188;
  undefined8 local_178;
  TPBDRigidParticle<double,3> *local_170;
  ulonglong local_168;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  *local_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FLockedPhysicsObjectExternalInterface<1> local_90;
  undefined4 local_54;
  
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    uVar11 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    iStack_18c = 0;
    if ((int)uVar11 < 1) {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
    }
    else {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar11,&local_198,&local_190,&iStack_18c);
      memset(local_198.Data + (longlong)iVar8 * 8,0,(longlong)(int)uVar11 << 3);
    }
    iVar8 = *(int *)&(param_1->Elements).field_0x28;
    iStack_158 = 0;
    puVar1 = &(param_1->Elements).field_0x10;
    local_168 = 1;
    local_140 = 0;
    uStack_154 = 1;
    iStack_144 = iStack_158;
    if (iVar8 != 0) {
      puVar14 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uStack_154 = *puVar14;
      local_140 = 0;
      iStack_158 = 0;
      while (uStack_154 == 0) {
        lVar10 = (longlong)iStack_158;
        local_140 = local_140 + 0x20;
        iStack_158 = iStack_158 + 1;
        uStack_154 = 1;
        iStack_144 = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_1482a463d;
        uStack_154 = puVar14[lVar10 + 1];
      }
      uStack_154 = -uStack_154 & uStack_154;
      uVar2 = (ulonglong)uStack_154 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_130 = (int)lVar10;
      iStack_144 = local_140 + -1 + local_130;
      if (iVar8 < iStack_144) {
        iStack_144 = iVar8;
      }
    }
LAB_1482a463d:
    uVar11 = *(uint *)&(param_1->Elements).field_0x28;
    uStack_13c = local_54;
    iStack_138 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar15 = uVar11 & 0xffffffe0;
    TStack_e8._padding_ = CONCAT44(uStack_154,iStack_158);
    uStack_148 = 0xffffffff;
    TStack_e8.CurrentBitIndex = iStack_144;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_e8._28_4_ = local_54;
    TStack_e8.BaseBitIndex = local_140;
    uStack_c8 = CONCAT44(uStack_134,iStack_138);
    local_160 = param_1;
    local_150 = puVar1;
    local_f0 = param_1;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar11 != uVar3) {
      puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar15 = uVar15 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1482a4750;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_12c = (int)lVar10;
      uVar11 = local_12c + -1 + uVar15;
      if ((int)uVar3 < (int)uVar11) {
        uVar11 = uVar3;
      }
    }
LAB_1482a4750:
    while( true ) {
      pTVar6 = local_f0;
      if (*(int *)&(local_f0->Elements).field_0x8 - *(int *)&(local_f0->Elements).field_0x34 !=
          (int)uStack_c8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_e8.CurrentBitIndex == uVar11) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == param_1)) break;
      local_178 = *(undefined8 *)
                   (*(longlong *)&pTVar6->Elements + (longlong)TStack_e8.CurrentBitIndex * 0x10);
      if (((local_198.Data <= (FScriptContainerElement *)&local_178) &&
          ((FScriptContainerElement *)&local_178 < local_198.Data + (longlong)iStack_18c * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_190 == iStack_18c) {
        local_190 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_198,&iStack_18c);
      }
      lVar10 = (longlong)local_190;
      local_190 = local_190 + 1;
      *(undefined8 *)(local_198.Data + lVar10 * 8) = local_178;
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    pUVar9 = *(UWorld **)&this->field_0xb0;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    FPhysicsObjectExternalInterface::LockWrite(&local_90,(FChaosScene *)pUVar9->PhysicsScene);
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iStack_118 = 0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    local_100 = 0;
    iVar8 = *(int *)&(param_1->Elements).field_0x28;
    iStack_104 = iStack_118;
    if (iVar8 != 0) {
      puVar14 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar11 = *puVar14;
      local_100 = 0;
      iStack_118 = 0;
      while (uVar11 == 0) {
        lVar10 = (longlong)iStack_118;
        local_100 = local_100 + 0x20;
        iStack_118 = iStack_118 + 1;
        iStack_104 = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_1482a491f;
        uVar11 = puVar14[lVar10 + 1];
      }
      local_168 = (ulonglong)(-uVar11 & uVar11);
      uVar2 = local_168 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_128 = (int)lVar10;
      iStack_104 = local_100 + -1 + local_128;
      if (iVar8 < iStack_104) {
        iStack_104 = iVar8;
      }
    }
LAB_1482a491f:
    uStack_114 = (undefined4)local_168;
    uVar11 = *(uint *)&(param_1->Elements).field_0x28;
    iStack_fc = iStack_144;
    iStack_f8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uStack_108 = 0xffffffff;
    uVar15 = uVar11 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uStack_114,iStack_118);
    TStack_b8.CurrentBitIndex = iStack_104;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_b8._28_4_ = iStack_144;
    TStack_b8.BaseBitIndex = local_100;
    uStack_98 = CONCAT44(uStack_f4,iStack_f8);
    local_120 = param_1;
    local_110 = puVar1;
    local_c0 = param_1;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar11 != uVar3) {
      puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar15 = uVar15 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1482a4a30;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_124 = (int)lVar10;
      uVar11 = local_124 + -1 + uVar15;
      if ((int)uVar3 < (int)uVar11) {
        uVar11 = uVar3;
      }
    }
LAB_1482a4a30:
    while( true ) {
      pTVar6 = local_c0;
      if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
          (int)uStack_98) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<Chaos::FPhysicsObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_b8.CurrentBitIndex == uVar11) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == param_1)) break;
      pFVar4 = *(FPhysicsObject **)
                (*(longlong *)&pTVar6->Elements + (longlong)TStack_b8.CurrentBitIndex * 0x10);
      iVar8 = Chaos::FPhysicsObjectInterface::GetId(pFVar4);
      if (((iVar8 != -1) &&
          (local_170 = Chaos::FReadPhysicsObjectInterface<0>::GetRigidParticle
                                 ((FReadPhysicsObjectInterface<0> *)&local_90.Interface,pFVar4),
          local_170 != (TPBDRigidParticle<double,3> *)0x0)) &&
         (*(longlong *)&local_170->field_0x50 != 0)) {
        if (((local_188.AllocatorInstance.Data <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 <
             local_188.AllocatorInstance.Data + (longlong)local_188.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = local_188.ArrayNum;
        if (local_188.ArrayNum == local_188.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_188.AllocatorInstance,&local_188.ArrayMax);
        }
        local_188.ArrayNum = iVar8 + 1;
        *(TPBDRigidParticle<double,3> **)(local_188.AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_170;
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    if ((local_188.ArrayNum != 0) &&
       ((this->PhysicsProxy->Particle_External).Ptr != (TPBDRigidParticle<double,3> *)0x0)) {
      Chaos::FClusterUnionPhysicsProxy::RemoveShapes_External(this->PhysicsProxy,&local_188);
    }
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_90.Lock);
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data);
    }
  }
  return;
}

// SetEnableDamageFromCollision @ 1482aabe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UClusterUnionComponent::SetEnableDamageFromCollision(UClusterUnionComponent *this,bool param_1)

{
  longlong lVar1;
  FClusterUnionPhysicsProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined ***pppuVar6;
  FSimCallbackCommandObject *pFVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined1 auStackY_a8 [32];
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  FSimCallbackCommandObject *pFStack_58;
  undefined **ppuStack_48;
  FClusterUnionPhysicsProxy *pFStack_40;
  bool bStack_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  undefined ***pppuStack_30;
  ulonglong uStack_28;
  
  this->bEnableDamageFromCollision = param_1;
  pFVar2 = this->PhysicsProxy;
  if (pFVar2 == (FClusterUnionPhysicsProxy *)0x0) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  lVar1 = pFVar2->_padding_;
  pFVar7 = (FSimCallbackCommandObject *)0x0;
  uStack_74 = 0;
  if (lVar1 != 0) {
    if ((pFVar2->Particle_External).Ptr == (TPBDRigidParticle<double,3> *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784158>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x3a2,"Particle_External");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar4 = IsInGameThread(), !bVar4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar5 = ::operator_new(0xc0);
      pFVar8 = pFVar7;
      if (pFVar5 != (FSimCallbackCommandObject *)0x0) {
        pFStack_40 = pFVar2;
        ppuStack_48 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::`5'::<lambda_1>,1,0>
                       ::_vftable_;
        uStack_37 = uStack_67;
        uStack_33 = uStack_63;
        uStack_31 = uStack_61;
        pppuStack_30 = (undefined ***)0x0;
        bStack_38 = param_1;
        *(undefined ***)pFVar5 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar5->field_0x8 = 0;
        *(undefined8 *)&pFVar5->field_0x10 = 0;
        *(undefined8 *)&pFVar5->field_0x18 = 0;
        *(undefined8 *)&pFVar5->field_0x20 = 0;
        *(undefined8 *)&pFVar5->field_0x28 = 0;
        *(undefined2 *)&pFVar5->field_0x40 = 1;
        *(code **)&pFVar5->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::__l5::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar5->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar5->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::`5'::<lambda_1>,1,0>
              ::_vftable_;
        *(FClusterUnionPhysicsProxy **)&(pFVar5->Func).field_0x18 = pFVar2;
        *(ulonglong *)&(pFVar5->Func).field_0x20 =
             CONCAT17(uStack_61,CONCAT25(uStack_63,CONCAT41(uStack_67,param_1)));
        pFStack_58 = (FSimCallbackCommandObject *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::__l5::<lambda_1>,void>
                     ::Call;
        if (*(longlong *)&pFVar5->Func != 0) {
          pFStack_58 = pFVar7;
        }
        *(undefined8 *)&pFVar5->Func2 = 0;
        *(undefined8 *)&(pFVar5->Func2).field_0x28 = 0;
        pFVar5->bFuncHasTimeParameters = false;
        pFVar5->ExecuteOnStep = -1;
        if (*(longlong *)&pFVar5->Func == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(auStack_78);
        }
        pFVar7 = pFVar5;
        pFVar8 = (FSimCallbackCommandObject *)&DAT_00000001;
      }
      if ((pFVar8 != (FSimCallbackCommandObject *)0x0) &&
         (pFStack_58 != (FSimCallbackCommandObject *)0x0)) {
        pppuVar6 = &ppuStack_48;
        if (pppuStack_30 != (undefined ***)0x0) {
          pppuVar6 = pppuStack_30;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      Chaos::FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar1 + 0x98),pFVar7);
    }
  }
  return;
}

// SetIsAnchored @ 1482ab720

void __thiscall UClusterUnionComponent::SetIsAnchored(UClusterUnionComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3065361942051814787>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                     ,0x27d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External(this->PhysicsProxy,param_1);
  }
  return;
}

// SetMassOverrideInKg @ 1482aca40

void __thiscall
UClusterUnionComponent::SetMassOverrideInKg
          (UClusterUnionComponent *this,FName param_1,float param_2,bool param_3)

{
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    Chaos::FClusterUnionPhysicsProxy::SetMass_External(this->PhysicsProxy,(double)param_2);
    return;
  }
  return;
}

// SetRigidState @ 1482ae870

void __thiscall
UClusterUnionComponent::SetRigidState(UClusterUnionComponent *this,EObjectStateType param_1)

{
  bool bVar1;
  
  if (this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) {
    Chaos::FClusterUnionPhysicsProxy::SetObjectState_External(this->PhysicsProxy,param_1);
    if ((param_1 == Dynamic) || (param_1 == Sleeping)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External(this->PhysicsProxy,bVar1);
  }
  return;
}

// SetSimulatePhysics @ 1482ae940

void __thiscall
UClusterUnionComponent::SetSimulatePhysics(UClusterUnionComponent *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001482ae947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xaa0))(this,(param_1 + '\x01') * '\x02');
  return;
}

// ShouldCreatePhysicsState @ 1482af2e0

bool __thiscall UClusterUnionComponent::ShouldCreatePhysicsState(UClusterUnionComponent *this)

{
  return true;
}

// ShouldDispatchWakeEvents @ 1482af2f0

bool __thiscall
UClusterUnionComponent::ShouldDispatchWakeEvents(UClusterUnionComponent *this,FName param_1)

{
  return true;
}

// StaticRegisterNativesUClusterUnionComponent @ 1482b1d20

void __cdecl UClusterUnionComponent::StaticRegisterNativesUClusterUnionComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UClusterUnionComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SweepComponent @ 1482b1f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UClusterUnionComponent::SweepComponent
          (UClusterUnionComponent *this,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TQuat<double> *param_4,
          FImplicitObject *param_5,ECollisionChannel param_6,FCollisionQueryParams *param_7,
          FCollisionResponseParams *param_8,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  LARGE_INTEGER LVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentSweepComponentMulti> FVar8;
  UWorld *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  double *pdVar10;
  FNameEntryId FVar11;
  FName FVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_1a8 [32];
  FName local_148;
  TVector<double> *local_140;
  LARGE_INTEGER local_138;
  FCollisionObjectQueryParams *local_130;
  FCollisionResponseParams *local_128;
  TVector<double>_u_0 local_118;
  FName local_f8;
  FImplicitObject *local_e8;
  TQuat<double> *local_e0;
  FImplicitObject *local_d8;
  TVector<double> *pTStack_d0;
  TVector<double> *local_c8;
  TQuat<double> *pTStack_c0;
  ECollisionChannel local_b8;
  undefined4 uStack_b4;
  LARGE_INTEGER LStack_b0;
  FCollisionResponseParams *local_a8;
  FCollisionObjectQueryParams *pFStack_a0;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *local_98;
  undefined1 local_88 [40];
  double *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_e0 = param_4;
  local_e8 = param_5;
  local_138 = (LARGE_INTEGER)param_7;
  local_128 = param_8;
  local_130 = param_9;
  FVar11.Value = 0;
  FVar8 = StatPtr_STAT_ClusterUnionComponentSweepComponentMulti;
  local_140 = param_3;
  if (StatPtr_STAT_ClusterUnionComponentSweepComponentMulti ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentSweepComponentMulti>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_118._s_0,"STAT_ClusterUnionComponentSweepComponentMulti"
                           );
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentSweepComponentMulti>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ClusterUnionComponentSweepComponentMulti,*pFVar7,
                       L"UClusterUnionComponent::SweepComponentMulti","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148 = (FName)((ulonglong)local_148 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148 = FVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x5d0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar12;
      local_f8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = local_f8.ComparisonIndex.Value;
      goto LAB_1482b2109;
    }
  }
  bVar4 = false;
  FVar12 = local_f8;
LAB_1482b2109:
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  LVar6 = local_138;
  if ((this->AccelerationStructure).Ptr ==
      (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
    local_d8 = local_e8;
    pTStack_c0 = local_e0;
    local_a8 = local_128;
    pFStack_a0 = local_130;
    local_88._0_8_ = (code *)0x0;
    local_c8 = local_140;
    local_b8 = param_6;
    LStack_b0 = local_138;
    pTStack_d0 = param_2;
    local_98 = param_1;
    local_60 = FMemory::Malloc(0x50,8);
    local_60[1] = (double)local_d8;
    local_60[2] = (double)pTStack_d0;
    *local_60 = (double)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UClusterUnionComponent::SweepComponent'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_60[3] = (double)local_c8;
    local_60[4] = (double)pTStack_c0;
    local_60[5] = (double)CONCAT44(uStack_b4,local_b8);
    *(LARGE_INTEGER *)(local_60 + 6) = LStack_b0;
    local_60[7] = (double)local_a8;
    local_60[8] = (double)pFStack_a0;
    local_60[9] = (double)local_98;
    if (local_60 != (double *)&DAT_fffffffffffffff8) {
      local_88._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UClusterUnionComponent::SweepComponent'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
           ::Call;
    }
    VisitAllCurrentChildComponentsForCollision
              (this,param_6,(FCollisionQueryParams *)LVar6,local_128,local_130,
               (TFunction<bool___cdecl(UPrimitiveComponent_*)> *)
               &((TVector<double>_u_0 *)local_88)->_s_0);
    if ((code *)local_88._0_8_ != (code *)0x0) {
      pdVar10 = &(((TVector<double>_u_0 *)local_88)->_s_0).Z;
      if (local_60 != (double *)0x0) {
        pdVar10 = local_60;
      }
      (**(code **)((longlong)*pdVar10 + 0x10))();
    }
  }
  else {
    local_118._0_4_ = *(undefined4 *)&local_140->field0_0x0;
    local_118._4_4_ = *(undefined4 *)((longlong)&local_140->field0_0x0 + 4);
    local_118._8_4_ = *(undefined4 *)((longlong)&local_140->field0_0x0 + 8);
    local_118._12_4_ = *(undefined4 *)((longlong)&local_140->field0_0x0 + 0xc);
    local_140 = *(TVector<double> **)((longlong)&local_140->field0_0x0 + 0x10);
    uVar13 = SUB84(local_140,0);
    uVar14 = (undefined4)((ulonglong)local_140 >> 0x20);
    local_88._0_4_ = *(undefined4 *)&param_2->field0_0x0;
    local_88._4_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    local_88._8_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    local_88._12_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    pUVar9 = *(UWorld **)&this->field_0xb0;
    local_148 = (FName)(param_2->field0_0x0)._s_0.Z;
    uVar15 = local_88._0_4_;
    uVar16 = local_88._4_4_;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      uVar13 = SUB84(local_140,0);
      uVar14 = (undefined4)((ulonglong)local_140 >> 0x20);
      uVar15 = local_88._0_4_;
      uVar16 = local_88._4_4_;
    }
    local_88._4_4_ = local_118._4_4_;
    local_88._0_4_ = local_118._0_4_;
    local_88._16_8_ = CONCAT44(uVar14,uVar13);
    local_118._4_4_ = uVar16;
    local_118._0_4_ = uVar15;
    uVar15 = local_118._8_4_;
    local_118._8_4_ = local_88._8_4_;
    uVar16 = local_118._12_4_;
    local_118._12_4_ = local_88._12_4_;
    local_118._s_0.Z = (double)local_148;
    local_88._8_4_ = uVar15;
    local_88._12_4_ = uVar16;
    FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
    ::GeomSweepMulti((this->AccelerationStructure).Ptr,pUVar9,local_e8,local_e0,param_1,
                     (TVector<double> *)&local_118._s_0,
                     (TVector<double> *)&((TVector<double>_u_0 *)local_88)->_s_0,param_6,
                     (FCollisionQueryParams *)local_138,local_128,local_130);
  }
  iVar2 = param_1->ArrayNum;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118._12_4_ = FVar12.Number & 0xffff6fff | 0x6000;
      local_118._8_4_ = FVar11.Value;
      QueryPerformanceCounter(&local_138);
      local_118._s_0.X = (double)(local_138.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_118._s_0);
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
  return iVar2 != 0;
}

// SweepComponent @ 1482b23f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UClusterUnionComponent::SweepComponent
          (UClusterUnionComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TQuat<double> *param_4,FImplicitObject *param_5,
          ECollisionChannel param_6,FCollisionQueryParams *param_7,FCollisionResponseParams *param_8
          ,FCollisionObjectQueryParams *param_9)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  LARGE_INTEGER LVar5;
  undefined1 uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentSweepComponentSingle> FVar8;
  UWorld *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  double *pdVar10;
  FNameEntryId FVar11;
  FName FVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_1a8 [32];
  undefined1 local_148 [8];
  FName local_140;
  TVector<double> *local_138;
  LARGE_INTEGER local_130;
  FCollisionObjectQueryParams *local_128;
  FCollisionResponseParams *local_120;
  TVector<double>_u_0 local_118;
  FName local_f8;
  FImplicitObject *local_e8;
  TQuat<double> *local_e0;
  FImplicitObject *local_d8;
  TVector<double> *pTStack_d0;
  TVector<double> *local_c8;
  TQuat<double> *pTStack_c0;
  ECollisionChannel local_b8;
  undefined4 uStack_b4;
  LARGE_INTEGER LStack_b0;
  FCollisionResponseParams *local_a8;
  FCollisionObjectQueryParams *pFStack_a0;
  undefined1 *local_98;
  FHitResult *pFStack_90;
  undefined1 local_88 [40];
  double *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_e0 = param_4;
  local_e8 = param_5;
  local_130 = (LARGE_INTEGER)param_7;
  local_120 = param_8;
  local_128 = param_9;
  FVar11.Value = 0;
  FVar8 = StatPtr_STAT_ClusterUnionComponentSweepComponentSingle;
  local_138 = param_3;
  if (StatPtr_STAT_ClusterUnionComponentSweepComponentSingle ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentSweepComponentSingle>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_118._s_0,
                            "STAT_ClusterUnionComponentSweepComponentSingle");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponentSweepComponentSingle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ClusterUnionComponentSweepComponentSingle,*pFVar7,
                       L"UClusterUnionComponent::SweepComponentSingle","STATGROUP_Chaos",
                       "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FVar12 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140 = (FName)((ulonglong)local_140 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140 = FVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x60a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar12;
      local_f8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_f8.ComparisonIndex.Value;
      goto LAB_1482b2588;
    }
  }
  bVar3 = false;
  FVar12 = local_f8;
LAB_1482b2588:
  LVar5 = local_130;
  param_1->Distance = 3.4028235e+38;
  if ((this->AccelerationStructure).Ptr ==
      (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)0x0) {
    local_d8 = local_e8;
    pTStack_c0 = local_e0;
    local_a8 = local_120;
    local_c8 = local_138;
    local_98 = local_148;
    pFStack_a0 = local_128;
    local_148[0] = 0;
    local_b8 = param_6;
    LStack_b0 = local_130;
    local_88._0_8_ = (code *)0x0;
    pTStack_d0 = param_2;
    pFStack_90 = param_1;
    local_60 = FMemory::Malloc(0x58,8);
    local_60[1] = (double)local_d8;
    local_60[2] = (double)pTStack_d0;
    *local_60 = (double)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UClusterUnionComponent::SweepComponent'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_60[3] = (double)local_c8;
    local_60[4] = (double)pTStack_c0;
    local_60[5] = (double)CONCAT44(uStack_b4,local_b8);
    *(LARGE_INTEGER *)(local_60 + 6) = LStack_b0;
    local_60[7] = (double)local_a8;
    local_60[8] = (double)pFStack_a0;
    local_60[9] = (double)local_98;
    local_60[10] = (double)pFStack_90;
    if (local_60 != (double *)&DAT_fffffffffffffff8) {
      local_88._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UClusterUnionComponent::SweepComponent'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
           ::Call;
    }
    VisitAllCurrentChildComponentsForCollision
              (this,param_6,(FCollisionQueryParams *)LVar5,local_120,local_128,
               (TFunction<bool___cdecl(UPrimitiveComponent_*)> *)
               &((TVector<double>_u_0 *)local_88)->_s_0);
    uVar6 = local_148[0];
    if ((code *)local_88._0_8_ != (code *)0x0) {
      pdVar10 = &(((TVector<double>_u_0 *)local_88)->_s_0).Z;
      if (local_60 != (double *)0x0) {
        pdVar10 = local_60;
      }
      (**(code **)((longlong)*pdVar10 + 0x10))();
      uVar6 = local_148[0];
    }
  }
  else {
    local_118._0_4_ = *(undefined4 *)&local_138->field0_0x0;
    local_118._4_4_ = *(undefined4 *)((longlong)&local_138->field0_0x0 + 4);
    local_118._8_4_ = *(undefined4 *)((longlong)&local_138->field0_0x0 + 8);
    local_118._12_4_ = *(undefined4 *)((longlong)&local_138->field0_0x0 + 0xc);
    local_138 = *(TVector<double> **)((longlong)&local_138->field0_0x0 + 0x10);
    uVar13 = SUB84(local_138,0);
    uVar14 = (undefined4)((ulonglong)local_138 >> 0x20);
    local_88._0_4_ = *(undefined4 *)&param_2->field0_0x0;
    local_88._4_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    local_88._8_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    local_88._12_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    pUVar9 = *(UWorld **)&this->field_0xb0;
    local_140 = (FName)(param_2->field0_0x0)._s_0.Z;
    uVar15 = local_88._0_4_;
    uVar16 = local_88._4_4_;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      uVar13 = SUB84(local_138,0);
      uVar14 = (undefined4)((ulonglong)local_138 >> 0x20);
      uVar15 = local_88._0_4_;
      uVar16 = local_88._4_4_;
    }
    local_88._4_4_ = local_118._4_4_;
    local_88._0_4_ = local_118._0_4_;
    local_88._16_8_ = CONCAT44(uVar14,uVar13);
    local_118._4_4_ = uVar16;
    local_118._0_4_ = uVar15;
    uVar15 = local_118._8_4_;
    local_118._8_4_ = local_88._8_4_;
    uVar16 = local_118._12_4_;
    local_118._12_4_ = local_88._12_4_;
    local_118._s_0.Z = (double)local_140;
    local_88._8_4_ = uVar15;
    local_88._12_4_ = uVar16;
    FGenericGeomPhysicsInterfaceUsingSpatialAcceleration<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,Chaos::FImplicitObject>
    ::GeomSweepSingle((this->AccelerationStructure).Ptr,pUVar9,local_e8,local_e0,param_1,
                      (TVector<double> *)&local_118._s_0,
                      (TVector<double> *)&((TVector<double>_u_0 *)local_88)->_s_0,param_6,
                      (FCollisionQueryParams *)local_130,local_120,local_128);
    uVar6 = FActorInstanceHandle::IsValid(&param_1->HitObjectHandle);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118._12_4_ = FVar12.Number & 0xffff6fff | 0x6000;
      local_118._8_4_ = FVar11.Value;
      QueryPerformanceCounter(&local_130);
      local_118._s_0.X = (double)(local_130.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_118._s_0);
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
  return (bool)uVar6;
}

// SyncClusterUnionFromProxy @ 1482b2ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UClusterUnionComponent::SyncClusterUnionFromProxy
          (UClusterUnionComponent *this,TTransform<double> *param_1,
          TArray<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  undefined1 *puVar1;
  TArray<FSafePhysicsObjectHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
  *pTVar3;
  TMulticastDelegate<void___cdecl(FClusterUnionInitializationData_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  undefined8 uVar4;
  FWeakObjectPtr *pFVar5;
  FObjectKey FVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  bool bVar24;
  ForAnyElementType FVar25;
  TArray<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_>
  *pTVar26;
  TTransform<double> *pTVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  char cVar31;
  int iVar32;
  int iVar33;
  FName *pFVar34;
  FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_SyncClusterUnionFromProxy> FVar35;
  UWorld *pUVar36;
  UPrimitiveComponent *this_01;
  FClusteredComponentData *pFVar37;
  TTuple<int,UClusterUnionComponent::FMappedBoneData> *pTVar38;
  UClass *pUVar39;
  FScriptContainerElement *pFVar40;
  uint uVar41;
  uint uVar42;
  ulonglong uVar43;
  longlong lVar44;
  uint uVar45;
  FMappedComponentKey *pFVar46;
  FNameEntryId FVar47;
  FName FVar48;
  uint *puVar49;
  ForElementType<FSetElementId> FVar50;
  int *piVar51;
  uint uVar52;
  FClusterUnionPhysicsProxy *pFVar53;
  FScriptContainerElement *pFVar54;
  TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *pTVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auStackY_518 [32];
  FClusterUnionReplicatedData local_4b4 [2];
  undefined1 local_4b0 [8];
  ForAnyElementType local_4a8;
  undefined8 local_4a0;
  uint local_498;
  ForAnyElementType local_490;
  undefined8 local_488;
  TPBDRigidParticle<double,3> *local_480;
  TObjectPtr<UPrimitiveComponent>_u_0 local_478;
  undefined8 local_470;
  FColor_u_0 local_468;
  int local_464;
  FPhysicsObject *local_460;
  uint local_458;
  uint local_450;
  uint uStack_44c;
  FWeakObjectPtr local_448;
  FWeakObjectPtr FStack_440;
  undefined4 local_438;
  undefined4 uStack_434;
  FMappedComponentKey local_430;
  FClusterUnionPhysicsProxy *local_420;
  FWeakObjectPtr local_418;
  FName local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  UClusterUnionComponent *local_3f0;
  ForAnyElementType local_3e8;
  int local_3e0;
  int local_3dc;
  FName local_3d8;
  longlong *local_3c8;
  undefined1 auStack_3c0 [16];
  uint uStack_3b0;
  uint uStack_3ac;
  longlong local_3a8;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *pTStack_3a0;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *local_398;
  undefined2 local_390;
  FPhysScene_Chaos *local_388;
  TArray<TTuple<UPrimitiveComponent_*,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_>
  *local_380;
  int local_378;
  int local_374;
  TTransform<double> *local_370;
  undefined4 local_368;
  FObjectKey local_364;
  FMappedComponentKey *local_358;
  UPrimitiveComponent *local_350;
  longlong *local_348;
  int iStack_340;
  uint uStack_33c;
  TBitArray<FDefaultBitArrayAllocator> *local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  int local_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  FScriptContainerElement *local_318;
  longlong *local_308;
  undefined1 auStack_300 [16];
  uint uStack_2f0;
  uint uStack_2ec;
  longlong local_2e8;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *pTStack_2e0;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *local_2d8;
  undefined2 local_2d0;
  longlong *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  FDestructionSentinel local_298;
  int local_280;
  uint uStack_27c;
  FName local_270;
  undefined1 local_268 [32];
  longlong local_248;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *pTStack_240;
  double local_238;
  FLockedPhysicsObjectExternalInterface<0> local_230;
  UClusterUnionComponent *local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined1 local_1c8 [32];
  longlong local_1a8;
  TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
  *pTStack_1a0;
  undefined4 local_17c;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  undefined1 local_140 [8];
  ForElementType<FSetElementId> local_138;
  int local_130;
  FPhysicsObject *local_128;
  TPBDRigidParticle<double,3> *pTStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  FVar35 = StatPtr_STAT_ClusterUnionComponent_SyncClusterUnionFromProxy;
  local_380 = param_2;
  local_370 = param_1;
  if (StatPtr_STAT_ClusterUnionComponent_SyncClusterUnionFromProxy ==
      (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_SyncClusterUnionFromProxy>)0x0) {
    pFVar34 = ::FName::FName(&local_270,"STAT_ClusterUnionComponent_SyncClusterUnionFromProxy");
    FVar35 = (FThreadSafeStaticStat<FStat_STAT_ClusterUnionComponent_SyncClusterUnionFromProxy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ClusterUnionComponent_SyncClusterUnionFromProxy,*pFVar34,
                        L"UClusterUnionComponent::SyncClusterUnionFromProxy","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar48 = *(FName *)FVar35;
  bVar23 = false;
  bVar24 = false;
  local_3d8.ComparisonIndex.Value = 0;
  local_3d8.Number = 0;
  bVar28 = false;
  bVar29 = false;
  FVar47 = FVar48.ComparisonIndex.Value;
  uVar42 = FVar48.Number;
  if ((FVar47.Value != 0) || (uVar42 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_468.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_468._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar23 = false;
      bVar24 = true;
      bVar28 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_410.ComparisonIndex.Value = FVar47.Value;
        local_410.Number = uVar42;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_410,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                   ,0x3ab);
        bVar23 = true;
        bVar24 = true;
        bVar28 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_450 = FVar47.Value;
      uStack_44c = uVar42;
      FThreadStats::AddMessage(FVar48,CycleScopeStart);
      bVar28 = true;
      goto LAB_1482b2d0c;
    }
  }
  bVar24 = bVar29;
  bVar23 = bVar28;
  bVar28 = false;
  FVar48 = local_3d8;
LAB_1482b2d0c:
  if ((this->PhysicsProxy != (FClusterUnionPhysicsProxy *)0x0) &&
     ((*(longlong *)&this->field_0xb0 != 0 ||
      (pUVar36 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar36 != (UWorld *)0x0)))) {
    pUVar36 = *(UWorld **)&this->field_0xb0;
    if (pUVar36 == (UWorld *)0x0) {
      pUVar36 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    local_388 = pUVar36->PhysicsScene;
    if (local_388 != (FPhysScene_Chaos *)0x0) {
      bVar29 = IsAuthority(this);
      if (bVar29) {
        local_4b4[0].ObjectState =
             Chaos::FClusterUnionPhysicsProxy::GetObjectState_External(this->PhysicsProxy);
        local_4b4[0].bIsAnchored = (this->PhysicsProxy->SyncedData_External).bIsAnchored;
        if ((((this->ReplicatedRigidState).ObjectState != local_4b4[0].ObjectState) ||
            ((this->ReplicatedRigidState).bIsAnchored != local_4b4[0].bIsAnchored)) ||
           (bDirtyRigidStateOnlyIfChanged == false)) {
          if ((bFlushNetDormancyOnSyncProxy != false) &&
             (*(AActor **)&this->field_0xa8 != (AActor *)0x0)) {
            AActor::FlushNetDormancy(*(AActor **)&this->field_0xa8);
          }
          this->ReplicatedRigidState = local_4b4[0];
        }
      }
      pFVar53 = this->PhysicsProxy;
      local_4a8.Data = (FScriptContainerElement *)0x0;
      local_4a0 = 0;
      local_420 = pFVar53;
      if ((pFVar53->SyncedData_External).bDidSyncGeometry != false) {
        uVar42 = (pFVar53->SyncedData_External).ChildParticles.ArrayNum;
        if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
        }
        if (0 < (int)uVar42) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar42,&local_4a8,0,(int *)((longlong)&local_4a0 + 4));
        }
      }
      uVar42 = (pFVar53->SyncedData_External).ChildParticles.ArrayNum;
      pTVar2 = &this->PerShapeComponentBone;
      if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
      }
      (this->PerShapeComponentBone).ArrayNum = 0;
      if ((this->PerShapeComponentBone).ArrayMax < (int)uVar42) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar42,&pTVar2->AllocatorInstance,0,
                   &(this->PerShapeComponentBone).ArrayMax);
      }
      local_178._0_8_ = 0;
      local_178._8_8_ = 0;
      local_158 = (uint *)0x0;
      local_150 = 0;
      local_14c = 0x80;
      local_148 = 0xffffffff;
      local_144 = 0;
      local_138 = (ForElementType<FSetElementId>)0x0;
      local_130 = 0;
      if (bPreAllocateLocalBoneDataMap != false) {
        TSet<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>,TDefaultMapHashableKeyFuncs<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>,0>,FDefaultSetAllocator>
        ::Reserve((TSet<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>,TDefaultMapHashableKeyFuncs<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>,0>,FDefaultSetAllocator>
                   *)local_178,
                  *(int *)&(this->PerComponentData).field_0x8 -
                  *(int *)&(this->PerComponentData).field_0x34);
      }
      pUVar36 = *(UWorld **)&this->field_0xb0;
      if (pUVar36 == (UWorld *)0x0) {
        pUVar36 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      FPhysicsObjectExternalInterface::LockRead(&local_230,(FChaosScene *)pUVar36->PhysicsScene);
      local_458 = (pFVar53->SyncedData_External).ChildParticles.ArrayNum;
      uVar43 = (ulonglong)(int)local_458;
      pFVar54 = (pFVar53->SyncedData_External).ChildParticles.AllocatorInstance.Data;
      local_318 = pFVar54 + uVar43 * 0x90;
      while( true ) {
        pFVar40 = local_318;
        piVar51 = &(this->PerShapeComponentBone).ArrayMax;
        if ((pFVar53->SyncedData_External).ChildParticles.ArrayNum != (int)uVar43) {
          local_4b0[0] = 0;
          `TCheckedPointerIterator<Chaos::FClusterUnionChildData_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_4b0);
        }
        if (pFVar54 == pFVar40) break;
        this_01 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                            (local_388,*(IPhysicsProxyBase **)(pFVar54 + 0x70));
        if ((this_01 == (UPrimitiveComponent *)0x0) ||
           (this_01 != *(UPrimitiveComponent **)(pFVar54 + 0x78))) {
          if ((pFVar53->SyncedData_External).bDidSyncGeometry != false) {
            local_470 = 0;
            if (((local_4a8.Data <= (FScriptContainerElement *)&local_470) &&
                ((FScriptContainerElement *)&local_470 <
                 local_4a8.Data + (longlong)local_4a0._4_4_ * 8)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar29)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar32 = (int)local_4a0;
            if ((int)local_4a0 == local_4a0._4_4_) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_4a8,(int *)((longlong)&local_4a0 + 4));
            }
            local_4a0 = CONCAT44(local_4a0._4_4_,iVar32 + 1);
            *(undefined8 *)(local_4a8.Data + (longlong)iVar32 * 8) = local_470;
          }
          pFVar40 = (pTVar2->AllocatorInstance).Data;
          local_3f8 = 0;
          local_408 = 0;
          uStack_400 = 0;
          if (((pFVar40 <= (FScriptContainerElement *)&local_408) &&
              ((FScriptContainerElement *)&local_408 < pFVar40 + (longlong)*piVar51 * 0x18)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar32 = (this->PerShapeComponentBone).ArrayNum;
          if (iVar32 == *piVar51) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&pTVar2->AllocatorInstance,piVar51);
          }
          lVar44 = (longlong)iVar32;
          (this->PerShapeComponentBone).ArrayNum = iVar32 + 1;
          pFVar40 = (pTVar2->AllocatorInstance).Data;
          *(undefined8 *)(pFVar40 + lVar44 * 0x18) = local_408;
          *(undefined8 *)(pFVar40 + lVar44 * 0x18 + 8) = uStack_400;
          uVar4 = local_3f8;
        }
        else {
          local_430.ComponentKey.ObjectKey.ObjectIndex = 0;
          local_430.ComponentKey.ObjectKey.ObjectSerialNumber = 0;
          FObjectKey::FObjectKey(&local_364,(UObject *)this_01);
          uVar42 = local_178._8_4_;
          local_460 = (FPhysicsObject *)CONCAT44(local_460._4_4_,local_144);
          uVar52 = local_364.ObjectSerialNumber;
          local_430.ComponentKey.ObjectKey = local_364;
          uVar41 = local_364.ObjectIndex - uVar52 ^ uVar52 >> 0xd;
          local_498 = local_178._8_4_;
          uVar45 = (-0x61c88647 - uVar41) - uVar52 ^ uVar41 << 8;
          uVar52 = (uVar52 - uVar45) - uVar41 ^ uVar45 >> 0xd;
          uVar41 = (uVar41 - uVar52) - uVar45 ^ uVar52 >> 0xc;
          uVar45 = (uVar45 - uVar41) - uVar52 ^ uVar41 << 0x10;
          uVar52 = (uVar52 - uVar45) - uVar41 ^ uVar45 >> 5;
          uVar41 = (uVar41 - uVar52) - uVar45 ^ uVar52 >> 3;
          uVar45 = (uVar45 - uVar41) - uVar52 ^ uVar41 << 10;
          uVar41 = (uVar52 - uVar45) - uVar41 ^ uVar45 >> 0xf;
          local_430.ComponentPtr = this_01;
          iVar32 = TSet<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>,TDefaultMapHashableKeyFuncs<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<UClusterUnionComponent::FMappedComponentKey>
                             ((TSet<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>,TDefaultMapHashableKeyFuncs<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>,0>,FDefaultSetAllocator>
                               *)local_178,uVar41,&local_430);
          if ((iVar32 == -1) || (lVar44 = (longlong)iVar32 * 0xd0 + local_178._0_8_, lVar44 == 0)) {
            local_358 = &local_430;
            TSet<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>,TDefaultMapHashableKeyFuncs<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<UClusterUnionComponent::FMappedComponentKey_const_&>_>
                      ((TSet<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>,TDefaultMapHashableKeyFuncs<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>,0>,FDefaultSetAllocator>
                        *)local_178,(uint)&local_464,
                       (TKeyInitializer<UClusterUnionComponent::FMappedComponentKey_const_&> *)
                       (ulonglong)uVar41,(bool *)&local_358);
            lVar44 = (longlong)local_464 * 0xd0 + local_178._0_8_;
            uVar42 = local_178._8_4_;
          }
          if ((((bPreAllocateLocalBoneDataMap != false) &&
               ((int)(local_498 - (int)local_460) < (int)(uVar42 - local_144))) &&
              (pFVar37 = TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                         ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
                                 *)&this->PerComponentData,&local_430.ComponentKey),
              pFVar37 != (FClusteredComponentData *)0x0)) &&
             (iVar32 = (pFVar37->BonesData).ArrayNum, iVar32 != 0)) {
            uVar42 = (uint)((float)iVar32 * LocalBoneDataMapGrowFactor);
            if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
            }
            if (*(int *)(lVar44 + 0xb4) < (int)uVar42) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_>_>
                        (0x90,0x10,uVar42,
                         (ForElementType<TTuple<int,UClusterUnionComponent::FMappedBoneData>_> *)
                         (lVar44 + 0x10),*(int *)(lVar44 + 0xb0),(int *)(lVar44 + 0xb4));
            }
          }
          if ((*(int *)(pFVar54 + 0x80) == -1) &&
             (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3065361942051814398>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                                  ,0x402,"ChildData.BoneId != INDEX_NONE"), bVar29)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_460 = (FPhysicsObject *)
                      (**(code **)(*(longlong *)&this_01->field_0x260 + 0x10))
                                (&this_01->field_0x260,*(undefined4 *)(pFVar54 + 0x80));
          local_480 = Chaos::FReadPhysicsObjectInterface<0>::GetRigidParticle
                                (&local_230.Interface,local_460);
          if ((local_420->SyncedData_External).bDidSyncGeometry != false) {
            if (((local_4a8.Data <= (FScriptContainerElement *)&local_480) &&
                ((FScriptContainerElement *)&local_480 <
                 local_4a8.Data + (longlong)local_4a0._4_4_ * 8)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar29)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar32 = (int)local_4a0;
            if ((int)local_4a0 == local_4a0._4_4_) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_4a8,(int *)((longlong)&local_4a0 + 4));
            }
            local_4a0 = CONCAT44(local_4a0._4_4_,iVar32 + 1);
            *(TPBDRigidParticle<double,3> **)(local_4a8.Data + (longlong)iVar32 * 8) = local_480;
          }
          if (local_480 == (TPBDRigidParticle<double,3> *)0x0) {
            local_118 = 0xffffffff;
          }
          else {
            local_118 = *(undefined4 *)&local_480->field_0x58;
          }
          uVar4 = *(undefined8 *)(pFVar54 + 0x10);
          uVar12 = *(undefined8 *)(pFVar54 + 0x18);
          uVar13 = *(undefined8 *)(pFVar54 + 0x20);
          uVar14 = *(undefined8 *)(pFVar54 + 0x28);
          uVar15 = *(undefined8 *)(pFVar54 + 0x30);
          uVar16 = *(undefined8 *)(pFVar54 + 0x38);
          uVar17 = *(undefined8 *)(pFVar54 + 0x40);
          uVar18 = *(undefined8 *)(pFVar54 + 0x48);
          uVar19 = *(undefined8 *)(pFVar54 + 0x50);
          uVar20 = *(undefined8 *)(pFVar54 + 0x58);
          uVar21 = *(undefined8 *)(pFVar54 + 0x60);
          uVar22 = *(undefined8 *)(pFVar54 + 0x68);
          local_128 = local_460;
          pTStack_120 = local_480;
          pTVar38 = TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
                    ::AllocateMemoryForEmplace<int_const_&>
                              ((TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
                                *)(lVar44 + 0x10),(int *)(pFVar54 + 0x80));
          *(undefined4 *)pTVar38 = *(undefined4 *)(pFVar54 + 0x80);
          *(FPhysicsObject **)&pTVar38->field_0x10 = local_128;
          *(TPBDRigidParticle<double,3> **)&pTVar38->field_0x18 = pTStack_120;
          *(ulonglong *)&pTVar38->field_0x20 = CONCAT44(uStack_114,local_118);
          *(undefined8 *)&pTVar38->field_0x28 = uStack_110;
          *(undefined8 *)&pTVar38->field_0x30 = uVar4;
          *(undefined8 *)&pTVar38->field_0x38 = uVar12;
          *(undefined8 *)&pTVar38->field_0x40 = uVar13;
          *(undefined8 *)&pTVar38->field_0x48 = uVar14;
          *(undefined8 *)&pTVar38->field_0x50 = uVar15;
          *(undefined8 *)&pTVar38->field_0x58 = uVar16;
          *(undefined8 *)&pTVar38->field_0x60 = uVar17;
          *(undefined8 *)&pTVar38->field_0x68 = uVar18;
          *(undefined8 *)&pTVar38->field_0x70 = uVar19;
          *(undefined8 *)&pTVar38->field_0x78 = uVar20;
          *(undefined8 *)&pTVar38->field_0x80 = uVar21;
          *(undefined8 *)&pTVar38->field_0x88 = uVar22;
          local_448.ObjectIndex = 0;
          local_448.ObjectSerialNumber = 0;
          FStack_440.ObjectIndex = 0;
          FStack_440.ObjectSerialNumber = 0;
          local_108 = uVar4;
          uStack_100 = uVar12;
          local_f8 = uVar13;
          uStack_f0 = uVar14;
          local_e8 = uVar15;
          uStack_e0 = uVar16;
          local_d8 = uVar17;
          uStack_d0 = uVar18;
          local_c8 = uVar19;
          uStack_c0 = uVar20;
          local_b8 = uVar21;
          uStack_b0 = uVar22;
          pUVar39 = Z_Construct_UClass_UPhysicsComponent_NoRegister();
          FStack_440 = (FWeakObjectPtr)
                       UObjectBaseUtility::GetInterfaceAddress
                                 ((UObjectBaseUtility *)this_01,pUVar39);
          if (FStack_440 != (FWeakObjectPtr)0x0) {
            local_350 = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            FWeakObjectPtr::operator=(&local_448,(FObjectPtr)&local_350);
          }
          local_438 = *(undefined4 *)(pFVar54 + 0x80);
          piVar51 = &(this->PerShapeComponentBone).ArrayMax;
          pFVar5 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar5 <= &local_448) && (&local_448 < pFVar5 + (longlong)*piVar51 * 3)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar32 = (this->PerShapeComponentBone).ArrayNum;
          if (iVar32 == *piVar51) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&pTVar2->AllocatorInstance,piVar51);
          }
          lVar44 = (longlong)iVar32;
          (this->PerShapeComponentBone).ArrayNum = iVar32 + 1;
          pFVar40 = (pTVar2->AllocatorInstance).Data;
          *(FWeakObjectPtr *)(pFVar40 + lVar44 * 0x18) = local_448;
          ((FWeakObjectPtr *)(pFVar40 + lVar44 * 0x18))[1] = FStack_440;
          pFVar53 = local_420;
          uVar4 = CONCAT44(uStack_434,local_438);
        }
        pFVar54 = pFVar54 + 0x90;
        *(undefined8 *)(pFVar40 + lVar44 * 0x18 + 0x10) = uVar4;
        uVar43 = (ulonglong)local_458;
      }
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_230.Lock);
      FVar25.Data = local_4a8.Data;
      if ((pFVar53->SyncedData_External).bDidSyncGeometry != false) {
        pFVar53 = this->PhysicsProxy;
        pTVar55 = &pFVar53->GeometryChildParticles_External;
        if (pTVar55 !=
            (TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *)&local_4a8)
        {
          iVar32 = (int)local_4a0;
          lVar44 = (longlong)(int)local_4a0;
          piVar51 = &(pFVar53->GeometryChildParticles_External).ArrayMax;
          (pFVar53->GeometryChildParticles_External).ArrayNum = (int)local_4a0;
          if (((int)local_4a0 == 0) && (*piVar51 == 0)) {
            *piVar51 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_4a0,*piVar51,&pTVar55->AllocatorInstance,(int)local_4a0,
                       piVar51);
            if (iVar32 != 0) {
              memcpy((pTVar55->AllocatorInstance).Data,FVar25.Data,lVar44 << 3);
            }
          }
        }
      }
      uVar42 = local_150;
      iStack_340 = 0;
      local_328 = 0;
      uStack_33c = 1;
      uStack_32c = 0;
      if (local_150 != 0) {
        puVar49 = (uint *)(local_178 + 0x10);
        if (local_158 != (uint *)0x0) {
          puVar49 = local_158;
        }
        uVar41 = *puVar49;
        while (uVar41 == 0) {
          lVar44 = (longlong)iStack_340;
          local_328 = local_328 + 0x20;
          iStack_340 = iStack_340 + 1;
          uStack_32c = local_150;
          if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_340)
          goto LAB_1482b36c3;
          uVar41 = puVar49[lVar44 + 1];
        }
        uStack_33c = -uVar41 & uVar41;
        uVar43 = (ulonglong)uStack_33c * 2 + 1;
        lVar44 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar44 == 0; lVar44 = lVar44 + -1) {
          }
        }
        local_378 = (int)lVar44;
        uStack_32c = local_378 + -1 + local_328;
        if ((int)local_150 < (int)uStack_32c) {
          uStack_32c = local_150;
        }
      }
LAB_1482b36c3:
      local_348 = (longlong *)local_178;
      uStack_324 = local_17c;
      local_338 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
      uVar41 = local_150 & 0xffffffe0;
      iStack_320 = local_178._8_4_ - local_144;
      uStack_330 = 0xffffffff;
      TStack_2c0.CurrentBitIndex = uStack_32c;
      TStack_2c0.UnvisitedBitMask = 0xffffffff;
      local_498 = -1 << ((byte)local_150 & 0x1f);
      TStack_2c0._padding_ = CONCAT44(uStack_33c,iStack_340);
      iVar32 = (int)local_150 >> 5;
      TStack_2c0._28_4_ = local_17c;
      TStack_2c0.BaseBitIndex = local_328;
      uStack_2a0 = CONCAT44(uStack_31c,iStack_320);
      local_2c8 = local_348;
      TStack_2c0.Array = local_338;
      if (((int)local_150 < 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar29)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar27 = local_370;
      pTVar26 = local_380;
      if (uVar42 != local_150) {
        puVar49 = (uint *)(local_178 + 0x10);
        if (local_158 != (uint *)0x0) {
          puVar49 = local_158;
        }
        uVar42 = local_498 & puVar49[iVar32];
        while (uVar42 == 0) {
          lVar44 = (longlong)iVar32;
          uVar41 = uVar41 + 0x20;
          iVar32 = iVar32 + 1;
          uVar42 = local_150;
          if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
          goto LAB_1482b3817;
          uVar42 = puVar49[lVar44 + 1];
        }
        uVar43 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
        lVar44 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar44 == 0; lVar44 = lVar44 + -1) {
          }
        }
        local_374 = (int)lVar44;
        uVar42 = local_374 + -1 + uVar41;
        if ((int)local_150 < (int)uVar42) {
          uVar42 = local_150;
        }
      }
LAB_1482b3817:
      while( true ) {
        plVar8 = local_2c8;
        if ((int)local_2c8[1] - *(int *)((longlong)local_2c8 + 0x34) != (int)uStack_2a0) {
          local_4b4[0] = (FClusterUnionReplicatedData)((ushort)local_4b4[0] & 0xff00);
          `TSparseArray<TSparseSetElement<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4b4);
        }
        if (((TStack_2c0.CurrentBitIndex == uVar42) &&
            (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
           (plVar8 == (longlong *)local_178)) break;
        pFVar46 = (FMappedComponentKey *)((longlong)TStack_2c0.CurrentBitIndex * 0xd0 + *plVar8);
        HandleAddOrModifiedClusteredComponent
                  (this,pFVar46,
                   (TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>
                    *)(pFVar46 + 1),pTVar27,pTVar26);
        TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
      }
      pTVar3 = &this->PerComponentData;
      TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_1c8,
                 (TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
                  *)pTVar3);
      iVar32 = 1;
      local_390 = 0;
      stack0xfffffffffffffc48 = local_1c8._16_16_;
      local_3c8 = (longlong *)local_1c8._0_8_;
      auStack_3c0._0_8_ = local_1c8._8_8_;
      local_3a8 = local_1a8;
      pTStack_3a0 = pTStack_1a0;
      uVar43 = local_1c8._24_8_ >> 0x20;
      uVar42 = local_1c8._28_4_;
      local_398 = (TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
                   *)pTVar3;
      if ((int)uVar42 < *(int *)(local_1c8._16_8_ + 0x18)) {
        do {
          FVar6 = *(FObjectKey *)((longlong)(int)uVar43 * 0x38 + *local_3c8);
          local_280 = FVar6.ObjectIndex;
          uStack_27c = FVar6.ObjectSerialNumber;
          uVar45 = local_280 - uStack_27c ^ uStack_27c >> 0xd;
          uVar41 = (-0x61c88647 - uVar45) - uStack_27c ^ uVar45 << 8;
          uVar52 = (uStack_27c - uVar45) - uVar41 ^ uVar41 >> 0xd;
          uVar45 = (uVar45 - uVar52) - uVar41 ^ uVar52 >> 0xc;
          uVar41 = (uVar41 - uVar45) - uVar52 ^ uVar45 << 0x10;
          uVar52 = (uVar52 - uVar41) - uVar45 ^ uVar41 >> 5;
          uVar45 = (uVar45 - uVar52) - uVar41 ^ uVar52 >> 3;
          uVar41 = (uVar41 - uVar45) - uVar52 ^ uVar45 << 10;
          if (local_178._8_4_ != local_144) {
            FVar50 = (ForElementType<FSetElementId>)local_140;
            if (local_138 != (ForElementType<FSetElementId>)0x0) {
              FVar50 = local_138;
            }
            iVar33 = *(int *)((longlong)FVar50 +
                             (ulonglong)
                             (local_130 - 1U & ((uVar52 - uVar41) - uVar45 ^ uVar41 >> 0xf)) * 4);
            while (iVar33 != -1) {
              lVar44 = (longlong)iVar33 * 0xd0;
              if ((*(int *)(lVar44 + local_178._0_8_) == local_280) &&
                 (*(uint *)(lVar44 + 4 + local_178._0_8_) == uStack_27c)) {
                if (iVar33 != -1) goto LAB_1482b3a75;
                break;
              }
              iVar33 = *(int *)(lVar44 + 0xc0 + local_178._0_8_);
            }
          }
          HandleRemovedClusteredComponent
                    (this,(TObjectKey<UPrimitiveComponent>)FVar6,
                     (FClusteredComponentData *)((longlong)(int)uVar42 * 0x38 + *local_3c8 + 8));
          TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_3a0,uVar42);
          local_390 = CONCAT11(local_390._1_1_,1);
LAB_1482b3a75:
          uStack_3b0 = uStack_3b0 & ~auStack_3c0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_3c0);
          uVar43 = (ulonglong)uStack_3ac;
          uVar42 = uStack_3ac;
        } while ((int)uStack_3ac < *(int *)(auStack_3c0._8_8_ + 0x18));
        if (((char)local_390 != '\0') && (local_390._1_1_ != '\0')) {
          uVar42 = *(int *)&(local_398->Elements).field_0x8 -
                   *(int *)&(local_398->Elements).field_0x34;
          if (uVar42 < 4) {
            iVar33 = 1;
          }
          else {
            uVar43 = (ulonglong)((uVar42 >> 1) + 7) * 2 + 1;
            lVar44 = 0x3f;
            if (uVar43 != 0) {
              for (; uVar43 >> lVar44 == 0; lVar44 = lVar44 + -1) {
              }
            }
            local_368 = (undefined4)lVar44;
            iVar33 = 1 << ((byte)lVar44 & 0x1f);
          }
          if (((0 < (int)uVar42) && (local_398->HashSize < iVar33)) ||
             (iVar33 < local_398->HashSize)) {
            local_398->HashSize = iVar33;
            TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
            ::Rehash(local_398);
          }
        }
      }
      local_238 = (this->CachedLocalBounds).SphereRadius;
      dVar56 = (this->CachedLocalBounds).Origin.field0_0x0._s_0.X;
      dVar11 = (this->CachedLocalBounds).Origin.field0_0x0._s_0.Y;
      this->bHasCachedLocalBounds = false;
      dVar57 = (this->CachedLocalBounds).Origin.field0_0x0._s_0.Z;
      dVar10 = (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.X;
      dVar58 = (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.Y;
      dVar59 = (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.Z;
      (**(code **)(*(longlong *)this + 0x5b0))(this);
      dVar56 = dVar56 - (this->CachedLocalBounds).Origin.field0_0x0._s_0.X;
      if (((((__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar56,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
            (dVar11 = dVar11 - (this->CachedLocalBounds).Origin.field0_0x0._s_0.Y,
            uVar42 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar41 = (uint)((ulonglong)dVar11 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar41,uVar42) &&
            (double)CONCAT44(uVar41,uVar42) != __real_3f1a36e2e0000000)) ||
           ((dVar57 = dVar57 - (this->CachedLocalBounds).Origin.field0_0x0._s_0.Z,
            __real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar57,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
            ((dVar10 = dVar10 - (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.X,
             uVar42 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar41 = (uint)((ulonglong)dVar10 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar41,uVar42) &&
             (double)CONCAT44(uVar41,uVar42) != __real_3f1a36e2e0000000 ||
             (dVar58 = dVar58 - (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.Y,
             __real_3f1a36e2e0000000 <
             (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))))))
          || (dVar59 = dVar59 - (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.Z,
             uVar42 = SUB84(dVar59,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar41 = (uint)((ulonglong)dVar59 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar41,uVar42) &&
             (double)CONCAT44(uVar41,uVar42) != __real_3f1a36e2e0000000)) ||
         (dVar59 = local_238 - (this->CachedLocalBounds).SphereRadius,
         __real_3f1a36e2e0000000 <=
         (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar59,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        local_200 = (this->CachedLocalBounds).Origin.field0_0x0._s_0.X;
        dStack_1f8 = (this->CachedLocalBounds).Origin.field0_0x0._s_0.Y;
        local_1f0 = (this->CachedLocalBounds).Origin.field0_0x0._s_0.Z;
        dStack_1e8 = (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.X;
        local_1e0 = (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.Y;
        dStack_1d8 = (this->CachedLocalBounds).BoxExtent.field0_0x0._s_0.Z;
        local_1d0 = (this->CachedLocalBounds).SphereRadius;
        local_208 = this;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnComponentBoundsChangedEvent,&local_208);
      }
      this_00 = &this->OnClusterUnionPostSyncBodiesEvent;
      bVar29 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar29) {
        bVar29 = false;
        uVar42 = *(int *)&(this->PerComponentData).field_0x8 -
                 *(int *)&(this->PerComponentData).field_0x34;
        local_490.Data = (FScriptContainerElement *)0x0;
        local_488 = 0;
        if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
        }
        if (0 < (int)uVar42) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar42,&local_490,0,(int *)((longlong)&local_488 + 4));
        }
        TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_268,
                   (TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
                    *)pTVar3);
        local_2d0 = 0;
        stack0xfffffffffffffd08 = local_268._16_16_;
        local_308 = (longlong *)local_268._0_8_;
        auStack_300._0_8_ = local_268._8_8_;
        local_2e8 = local_248;
        pTStack_2e0 = pTStack_240;
        uVar43 = local_268._24_8_ >> 0x20;
        local_2d8 = (TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
                     *)pTVar3;
        if (local_268._28_4_ < *(int *)(local_268._16_8_ + 0x18)) {
          do {
            lVar44 = (longlong)(int)uVar43 * 0x38;
            local_418.ObjectIndex = *(int *)(lVar44 + *local_308);
            local_418.ObjectSerialNumber = *(int *)(lVar44 + 4 + *local_308);
            local_478.DebugPtr = (UPrimitiveComponent *)FWeakObjectPtr::Get(&local_418);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_478.DebugPtr != (UPrimitiveComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_478.DebugPtr);
            }
            if (((local_490.Data <= &local_478) &&
                (&local_478 <
                 (TObjectPtr<UPrimitiveComponent>_u_0 *)
                 (local_490.Data + (longlong)local_488._4_4_ * 8))) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar33 = (int)local_488;
            if ((int)local_488 == local_488._4_4_) {
              iVar33 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_490,(int *)((longlong)&local_488 + 4));
            }
            local_488 = CONCAT44(local_488._4_4_,iVar33 + 1);
            ((TObjectPtr<UPrimitiveComponent>_u_0 *)(local_490.Data + (longlong)iVar33 * 8))->
            DebugPtr = (UPrimitiveComponent *)local_478;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_478.DebugPtr != (UPrimitiveComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_478.DebugPtr);
            }
            uStack_2f0 = uStack_2f0 & ~auStack_300._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_300);
            uVar43 = (ulonglong)uStack_2ec;
          } while ((int)uStack_2ec < *(int *)(auStack_300._8_8_ + 0x18));
          if (((char)local_2d0 != '\0') && (local_2d0._1_1_ != '\0')) {
            uVar42 = *(int *)&(local_2d8->Elements).field_0x8 -
                     *(int *)&(local_2d8->Elements).field_0x34;
            if (3 < uVar42) {
              uVar43 = (ulonglong)((uVar42 >> 1) + 7) * 2 + 1;
              lVar44 = 0x3f;
              if (uVar43 != 0) {
                for (; uVar43 >> lVar44 == 0; lVar44 = lVar44 + -1) {
                }
              }
              local_450 = (uint)lVar44;
              iVar32 = 1 << ((byte)lVar44 & 0x1f);
            }
            if (((0 < (int)uVar42) && (local_2d8->HashSize < iVar32)) ||
               (iVar32 < local_2d8->HashSize)) {
              local_2d8->HashSize = iVar32;
              TSet<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>,FDefaultSetAllocator>
              ::Rehash(local_2d8);
            }
          }
        }
        local_3f0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FVar25.Data = local_490.Data;
        iVar32 = (int)local_488;
        local_3e8.Data = (FScriptContainerElement *)0x0;
        local_3e0 = (int)local_488;
        if ((int)local_488 == 0) {
          local_3dc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_488,0,&local_3e8,(int)local_488,&local_3dc);
          ConstructItems<TObjectPtr<UPrimitiveComponent>,TObjectPtr<UPrimitiveComponent>,int>
                    (local_3e8.Data,(TObjectPtr<UPrimitiveComponent> *)FVar25.Data,iVar32);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_298);
        puVar1 = &(this->OnClusterUnionPostSyncBodiesEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        uVar42 = *(int *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x10 - 1;
        if (-1 < (int)uVar42) {
          lVar44 = (longlong)(int)uVar42 << 4;
          do {
            uVar41 = 0;
            if ((int)uVar42 < *(int *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x10) {
              uVar41 = ~uVar42 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)&(this->OnClusterUnionPostSyncBodiesEvent).field_0x8;
            if (((*(int *)(lVar44 + 8 + lVar7) == 0) ||
                (plVar8 = *(longlong **)(lVar44 + lVar7), plVar8 == (longlong *)0x0)) ||
               (cVar31 = (**(code **)(*plVar8 + 0x68))(), cVar31 == '\0')) {
              bVar29 = true;
            }
            lVar44 = lVar44 + -0x10;
            uVar42 = uVar42 - 1;
          } while (-1 < (int)uVar42);
        }
        puVar1 = &(this->OnClusterUnionPostSyncBodiesEvent).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar29) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_298.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
        }
        if (local_3e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data);
        }
        if ((TObjectPtr<UPrimitiveComponent>_u_0 *)local_490.Data !=
            (TObjectPtr<UPrimitiveComponent>_u_0 *)0x0) {
          FMemory::Free(local_490.Data);
        }
      }
      local_130 = 0;
      if (local_138 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138);
      }
      TSparseArray<TSparseSetElement<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_178);
      if (local_4a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.Data);
      }
    }
  }
  if (bVar24) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FThreadStats::AddMessage(FVar48,CycleScopeEnd);
  }
  return;
}

// ValidateGeneratedRepEnums @ 1482be190

void __thiscall
UClusterUnionComponent::ValidateGeneratedRepEnums
          (UClusterUnionComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_ReplicatedRigidState,L"ReplicatedRigidState");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0x12) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_ReplicatedRigidState != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ClusterUnionComponent.gen.cpp"
                       ,0x686,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UClusterUnionComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// VisitAllCurrentActors @ 1482be5e0

void __thiscall
UClusterUnionComponent::VisitAllCurrentActors
          (UClusterUnionComponent *this,TFunction<bool___cdecl(AActor_*)> *param_1)

{
  undefined1 *puVar1;
  TMap<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
  *pTVar7;
  bool bVar8;
  char cVar9;
  UObject *pUVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res20;
  UObject *local_a8;
  TMap<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<TObjectKey<AActor>,FClusteredActorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FClusteredActorData,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_98 = 0;
  puVar1 = &(this->ActorToComponents).field_0x10;
  iVar4 = *(int *)&(this->ActorToComponents).field_0x28;
  pTVar2 = &this->ActorToComponents;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->ActorToComponents).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1482be68d;
      uVar17 = puVar19[lVar12 + 1];
    }
    uStack_94 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_84 = (int)lVar12 + -1 + local_80;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_1482be68d:
  iStack_78 = *(int *)&(this->ActorToComponents).field_0x8 -
              *(int *)&(this->ActorToComponents).field_0x34;
  uVar17 = *(uint *)&(this->ActorToComponents).field_0x28;
  uStack_88 = 0xffffffff;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->ActorToComponents).field_0x28;
  if (uVar17 != uVar5) {
    puVar18 = *(undefined1 **)&(this->ActorToComponents).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1482be790;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = (int)lVar12 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_1482be790:
  do {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FClusteredActorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar17) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    {
      return;
    }
    piVar14 = (int *)((longlong)TStack_68.CurrentBitIndex * 0x68 + *(longlong *)pTVar7);
    local_res20.ObjectIndex = *piVar14;
    local_res20.ObjectSerialNumber = piVar14[1];
    pUVar10 = FWeakObjectPtr::Get(&local_res20);
    if (pUVar10 != (UObject *)0x0) {
      local_a8 = pUVar10;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar13 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar13 = (longlong *)&param_1->field_0x10;
      }
      uVar11 = (**(code **)(*plVar13 + 8))();
      cVar9 = (*pcVar6)(uVar11,&local_a8);
      if (cVar9 == '\0') {
        return;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// VisitAllCurrentChildComponents @ 1482be850

void __thiscall
UClusterUnionComponent::VisitAllCurrentChildComponents
          (UClusterUnionComponent *this,TFunction<bool___cdecl(UPrimitiveComponent_*)> *param_1)

{
  undefined1 *puVar1;
  TMap<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TMap<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  *pTVar6;
  TMap<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  *pTVar7;
  TMap<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
  *pTVar8;
  bool bVar9;
  char cVar10;
  UObject *pUVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_160;
  ulonglong local_158;
  FWeakObjectPtr local_150;
  TMap<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  int local_110;
  TMap<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  *local_108;
  UObject *local_100;
  UObject *local_f8;
  TMap<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
  *local_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TMap<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TMap<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusteredComponentData,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar19 = 0;
  puVar1 = &(this->PendingComponentSync).field_0x10;
  local_158 = 1;
  iVar16 = *(int *)&(this->PendingComponentSync).field_0x28;
  local_148 = &this->PendingComponentSync;
  iStack_140 = 0;
  local_128 = 0;
  iVar17 = 0;
  uStack_13c = 1;
  iStack_12c = 0;
  if (iVar16 != 0) {
    puVar21 = *(uint **)&(this->PendingComponentSync).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uStack_13c = *puVar21;
    local_128 = 0;
    while (uStack_13c == 0) {
      lVar13 = (longlong)iStack_140;
      local_128 = local_128 + 0x20;
      iStack_140 = iStack_140 + 1;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140) {
        iVar17 = *(int *)&(this->PendingComponentSync).field_0x28;
        uStack_13c = 1;
        iStack_12c = iVar16;
        goto LAB_1482be915;
      }
      uStack_13c = puVar21[lVar13 + 1];
    }
    iVar17 = *(int *)&(this->PendingComponentSync).field_0x28;
    uStack_13c = -uStack_13c & uStack_13c;
    uVar3 = (ulonglong)uStack_13c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_118 = (int)lVar13;
    iStack_12c = local_128 + -1 + local_118;
    if (iVar17 < iStack_12c) {
      iStack_12c = iVar16;
    }
  }
LAB_1482be915:
  iStack_120 = *(int *)&(this->PendingComponentSync).field_0x8 -
               *(int *)&(this->PendingComponentSync).field_0x34;
  uVar18 = *(uint *)&(this->PendingComponentSync).field_0x28;
  uVar22 = uVar18 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_13c,iStack_140);
  uStack_130 = 0xffffffff;
  TStack_b8.CurrentBitIndex = iStack_12c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_b8._28_4_ = local_44;
  TStack_b8.BaseBitIndex = local_128;
  uStack_98 = CONCAT44(uStack_11c,iStack_120);
  local_138 = puVar1;
  local_108 = local_148;
  local_c0 = local_148;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar17 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_108;
  uVar4 = *(uint *)&(this->PendingComponentSync).field_0x28;
  if (uVar18 != uVar4) {
    puVar20 = *(undefined1 **)&(this->PendingComponentSync).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar16;
      uVar22 = uVar22 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1482bea40;
      uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_114 = (int)lVar13;
    uVar18 = local_114 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_1482bea40:
  while( true ) {
    pTVar7 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b8.CurrentBitIndex == uVar18) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    break;
    piVar15 = (int *)((longlong)TStack_b8.CurrentBitIndex * 0x60 + *(longlong *)pTVar7);
    local_160.ObjectIndex = *piVar15;
    local_160.ObjectSerialNumber = piVar15[1];
    pUVar11 = FWeakObjectPtr::Get(&local_160);
    if ((pUVar11 != (UObject *)0x0) &&
       (cVar10 = (**(code **)(*(longlong *)pUVar11 + 0x3c8))(pUVar11), cVar10 != '\0')) {
      local_100 = pUVar11;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar5 = *(code **)param_1;
      plVar14 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar14 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar14 + 8))();
      cVar10 = (*pcVar5)(uVar12,&local_100);
      if (cVar10 == '\0') {
        return;
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  local_d0 = 0;
  puVar1 = &(this->PerComponentData).field_0x10;
  iVar16 = *(int *)&(this->PerComponentData).field_0x28;
  pTVar2 = &this->PerComponentData;
  iStack_d4 = 0;
  if (iVar16 != 0) {
    puVar21 = *(uint **)&(this->PerComponentData).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    local_d0 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar19;
      local_d0 = local_d0 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_d4 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1482beba1;
      uVar18 = puVar21[lVar13 + 1];
    }
    local_158 = (ulonglong)(-uVar18 & uVar18);
    uVar3 = local_158 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_110 = (int)lVar13;
    iStack_d4 = local_d0 + -1 + local_110;
    if (iVar16 < iStack_d4) {
      iStack_d4 = iVar16;
    }
  }
LAB_1482beba1:
  uStack_e4 = (undefined4)local_158;
  iStack_cc = iStack_12c;
  iStack_c8 = *(int *)&(this->PerComponentData).field_0x8 -
              *(int *)&(this->PerComponentData).field_0x34;
  uVar18 = *(uint *)&(this->PerComponentData).field_0x28;
  uStack_d8 = 0xffffffff;
  uVar22 = uVar18 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uStack_e4,iVar19);
  TStack_88.CurrentBitIndex = iStack_d4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar18 >> 5;
  TStack_88._28_4_ = iStack_12c;
  TStack_88.BaseBitIndex = local_d0;
  uStack_68 = CONCAT44(uStack_c4,iStack_c8);
  local_f0 = pTVar2;
  iStack_e8 = iVar19;
  local_e0 = puVar1;
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar16 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->PerComponentData).field_0x28;
  if (uVar18 != uVar4) {
    puVar20 = *(undefined1 **)&(this->PerComponentData).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1482beca0;
      uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = (int)lVar13 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_1482beca0:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPrimitiveComponent>,FClusteredComponentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_88.CurrentBitIndex == uVar18) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    piVar15 = (int *)((longlong)TStack_88.CurrentBitIndex * 0x38 + *(longlong *)pTVar8);
    local_150.ObjectIndex = *piVar15;
    local_150.ObjectSerialNumber = piVar15[1];
    pUVar11 = FWeakObjectPtr::Get(&local_150);
    if (((pUVar11 != (UObject *)0x0) &&
        (cVar10 = (**(code **)(*(longlong *)pUVar11 + 0x3c8))(pUVar11), cVar10 != '\0')) &&
       (*(char *)((longlong)piVar15 + 0x29) == '\0')) {
      local_f8 = pUVar11;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar5 = *(code **)param_1;
      plVar14 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar14 = (longlong *)&param_1->field_0x10;
      }
      uVar12 = (**(code **)(*plVar14 + 8))();
      cVar10 = (*pcVar5)(uVar12,&local_f8);
      if (cVar10 == '\0') {
        return;
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// VisitAllCurrentChildComponentsForCollision @ 1482bed80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UClusterUnionComponent::VisitAllCurrentChildComponentsForCollision
          (UClusterUnionComponent *this,ECollisionChannel param_1,FCollisionQueryParams *param_2,
          FCollisionResponseParams *param_3,FCollisionObjectQueryParams *param_4,
          TFunction<bool___cdecl(UPrimitiveComponent_*)> *param_5)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  ECollisionChannel local_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  uint local_11c;
  code *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  TBitArray<FDefaultBitArrayAllocator> **local_f0;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar10 = (param_2->IgnoreSourceObjects).ArrayNum;
  uVar7 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar10 != 0) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar10);
    if (uVar10 < 4) {
      uVar10 = 1;
    }
    else {
      uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar10)) {
      local_50 = uVar10;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar10 != 0) {
        uVar12 = uVar10;
        if (uVar10 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar12 = 0;
            goto LAB_1482bee63;
          }
        }
        else {
LAB_1482bee63:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4)
          ;
        }
        if (0 < (int)uVar10) {
          uVar14 = (ulonglong)uVar10;
          uVar13 = uVar7;
          do {
            FVar8.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar8.Data = local_58.Data;
            }
            uVar4 = uVar13 & (longlong)(int)uVar10 - 1U;
            uVar13 = uVar13 + 1;
            *(undefined4 *)(FVar8.Data + uVar4 * 4) = 0xffffffff;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      if (local_50 != 0) {
        pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_140 = 0;
        uStack_13c = 1;
        local_130._4_4_ = 0;
        uStack_128._0_4_ = 0;
        if (local_70 != 0) {
          FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_78;
          }
          uVar10 = *(uint *)FVar11;
          uVar13 = uVar7;
          while (uVar10 == 0) {
            uStack_128._0_4_ = (int)uVar13 + 0x20;
            uVar13 = (ulonglong)(uint)uStack_128;
            iVar6 = (int)uVar7;
            local_140 = iVar6 + 1;
            uVar7 = (ulonglong)local_140;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_140)
            goto LAB_1482bef6e;
            uVar10 = ((uint *)((longlong)FVar11 + 4))[iVar6];
          }
          uStack_13c = -uVar10 & uVar10;
          uVar7 = (ulonglong)uStack_13c * 2 + 1;
          lVar3 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          local_130._4_4_ = (int)lVar3 + -1 + (uint)uStack_128;
          uVar7 = (ulonglong)local_130._4_4_;
          if ((int)local_70 < (int)local_130._4_4_) {
LAB_1482bef6e:
            uVar7 = (ulonglong)local_70;
            local_130._4_4_ = local_70;
          }
        }
        local_130._0_4_ = 0xffffffff;
        local_118 = (code *)local_98;
        local_110._padding_ = CONCAT44(uStack_13c,local_140);
        local_110.Array = pTStack_138;
        local_110.UnvisitedBitMask = 0xffffffff;
        local_110.CurrentBitIndex = local_130._4_4_;
        local_110.BaseBitIndex = (uint)uStack_128;
        local_110._28_4_ = uStack_128._4_4_;
        if ((int)uVar7 < (int)local_70) {
          do {
            iVar6 = (int)uVar7;
            uVar10 = local_50 - 1 & *(uint *)(*(longlong *)local_118 + (longlong)iVar6 * 0xc);
            lVar3 = *(longlong *)local_118 + (longlong)iVar6 * 0xc;
            *(uint *)(lVar3 + 8) = uVar10;
            FVar8.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar8.Data = local_58.Data;
            }
            uVar7 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar10;
            *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar8.Data + uVar7 * 4);
            *(int *)(FVar8.Data + uVar7 * 4) = iVar6;
            local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
            uVar7 = (ulonglong)(uint)local_110.CurrentBitIndex;
          } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
        }
      }
    }
  }
  FVar11 = (param_2->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  iVar6 = (param_2->IgnoreSourceObjects).ArrayNum;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&param_2->IgnoreSourceObjects;
  }
  FVar2 = (ForElementType<unsigned_int>)((longlong)FVar11 + (longlong)iVar6 * 4);
  while( true ) {
    if ((param_2->IgnoreSourceObjects).ArrayNum != iVar6) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_148);
    }
    if (FVar11 == FVar2) break;
    local_120 = *(undefined4 *)FVar11;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_98,
               &local_11c,(bool *)&local_120);
    FVar11 = (ForElementType<unsigned_int>)((longlong)FVar11 + 4);
  }
  uVar7 = 0;
  local_bc = 0x80;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_b8 = -1;
  pTVar5 = FCollisionQueryParams::GetIgnoredComponents(param_2);
  uVar10 = pTVar5->ArrayNum;
  if (uVar10 <= (uint)(local_e8._8_4_ - local_b4)) goto LAB_1482bf2df;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar10 <= (int)local_a0)) goto LAB_1482bf2df;
  local_a0 = uVar10;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar10 != 0) {
    uVar12 = uVar10;
    if (uVar10 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_1482bf12f;
      }
    }
    else {
LAB_1482bf12f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar12,4);
    }
    if (0 < (int)uVar10) {
      uVar14 = (ulonglong)uVar10;
      uVar13 = uVar7;
      do {
        FVar8.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_a8.Data;
        }
        uVar4 = uVar13 & (longlong)(int)uVar10 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(FVar8.Data + uVar4 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (local_a0 != 0) {
    pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_140 = 0;
    uStack_13c = 1;
    local_130._4_4_ = 0;
    uStack_128._0_4_ = 0;
    if (local_c0 != 0) {
      FVar11 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_c8;
      }
      uVar10 = *(uint *)FVar11;
      uVar13 = uVar7;
      while (uVar10 == 0) {
        uStack_128._0_4_ = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)(uint)uStack_128;
        iVar6 = (int)uVar7;
        local_140 = iVar6 + 1;
        uVar7 = (ulonglong)local_140;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_140)
        goto LAB_1482bf23e;
        uVar10 = ((uint *)((longlong)FVar11 + 4))[iVar6];
      }
      uStack_13c = -uVar10 & uVar10;
      uVar7 = (ulonglong)uStack_13c * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_130._4_4_ = (int)lVar3 + -1 + (uint)uStack_128;
      uVar7 = (ulonglong)local_130._4_4_;
      if ((int)local_c0 < (int)local_130._4_4_) {
LAB_1482bf23e:
        uVar7 = (ulonglong)local_c0;
        local_130._4_4_ = local_c0;
      }
    }
    local_130._0_4_ = 0xffffffff;
    local_118 = (code *)local_e8;
    local_110._padding_ = CONCAT44(uStack_13c,local_140);
    local_110.Array = pTStack_138;
    local_110.UnvisitedBitMask = 0xffffffff;
    local_110.CurrentBitIndex = local_130._4_4_;
    local_110.BaseBitIndex = (uint)uStack_128;
    local_110._28_4_ = uStack_128._4_4_;
    if ((int)uVar7 < (int)local_c0) {
      do {
        iVar6 = (int)uVar7;
        uVar10 = local_a0 - 1 & *(uint *)(*(longlong *)local_118 + (longlong)iVar6 * 0xc);
        lVar3 = *(longlong *)local_118 + (longlong)iVar6 * 0xc;
        *(uint *)(lVar3 + 8) = uVar10;
        FVar8.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_a8.Data;
        }
        uVar7 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar8.Data + uVar7 * 4);
        *(int *)(FVar8.Data + uVar7 * 4) = iVar6;
        local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
        uVar7 = (ulonglong)(uint)local_110.CurrentBitIndex;
      } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
    }
  }
LAB_1482bf2df:
  FVar11 = (ForElementType<unsigned_int>)FCollisionQueryParams::GetIgnoredComponents(param_2);
  iVar6 = *(int *)((longlong)FVar11 + 0x28);
  piVar1 = (int *)((longlong)FVar11 + 0x28);
  if (*(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x20) !=
      (ForElementType<unsigned_int>)0x0) {
    FVar11 = *(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x20);
  }
  FVar2 = (ForElementType<unsigned_int>)((longlong)FVar11 + (longlong)iVar6 * 4);
  while( true ) {
    if (*piVar1 != iVar6) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_148);
    }
    if (FVar11 == FVar2) break;
    local_120 = *(undefined4 *)FVar11;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_e8,
               &local_11c,(bool *)&local_120);
    FVar11 = (ForElementType<unsigned_int>)((longlong)FVar11 + 4);
  }
  pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  local_130 = local_e8;
  local_118 = (code *)0x0;
  local_140 = param_1;
  uStack_128 = param_5;
  local_f0 = FMemory::Malloc(0x28,8);
  *local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`UClusterUnionComponent::VisitAllCurrentChildComponentsForCollision'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_f0[1] = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uStack_13c,local_140);
  local_f0[2] = pTStack_138;
  local_f0[3] = (TBitArray<FDefaultBitArrayAllocator> *)local_130;
  local_f0[4] = (TBitArray<FDefaultBitArrayAllocator> *)uStack_128;
  if (local_f0 + 1 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`UClusterUnionComponent::VisitAllCurrentChildComponentsForCollision'::__l2::<lambda_1>,bool,UPrimitiveComponent_*>
                ::Call;
  }
  VisitAllCurrentChildComponents(this,(TFunction<bool___cdecl(UPrimitiveComponent_*)> *)&local_118);
  if (local_118 != (code *)0x0) {
    ppTVar9 = &local_110.Array;
    if (local_f0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
      ppTVar9 = local_f0;
    }
    (*(code *)((*ppTVar9)->AllocatorInstance).SecondaryData)();
  }
  local_a0 = 0;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// WakeAllRigidBodies @ 1482bfa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UClusterUnionComponent::WakeAllRigidBodies(UClusterUnionComponent *this)

{
  longlong lVar1;
  FClusterUnionPhysicsProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined ***pppuVar6;
  FSimCallbackCommandObject *pFVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined1 auStackY_88 [32];
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  FSimCallbackCommandObject *pFStack_48;
  undefined **ppuStack_38;
  FClusterUnionPhysicsProxy *pFStack_30;
  undefined8 uStack_28;
  undefined ***pppuStack_20;
  ulonglong uStack_18;
  
  pFVar2 = this->PhysicsProxy;
  if (pFVar2 == (FClusterUnionPhysicsProxy *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  lVar1 = pFVar2->_padding_;
  pFVar7 = (FSimCallbackCommandObject *)0x0;
  uStack_54 = 0;
  if (lVar1 != 0) {
    if ((pFVar2->Particle_External).Ptr == (TPBDRigidParticle<double,3> *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784797>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x123,"Particle_External");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (((!Chaos::CVars::bEnableAsyncInitBody) && (bVar4 = IsInGameThread(), !bVar4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar5 = ::operator_new(0xc0);
      pFVar8 = pFVar7;
      if (pFVar5 != (FSimCallbackCommandObject *)0x0) {
        pFStack_30 = pFVar2;
        ppuStack_38 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::`2'::<lambda_1>,1,0>
                       ::_vftable_;
        pppuStack_20 = (undefined ***)0x0;
        *(undefined ***)pFVar5 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar5->field_0x8 = 0;
        *(undefined8 *)&pFVar5->field_0x10 = 0;
        *(undefined8 *)&pFVar5->field_0x18 = 0;
        *(undefined8 *)&pFVar5->field_0x20 = 0;
        *(undefined8 *)&pFVar5->field_0x28 = 0;
        *(undefined2 *)&pFVar5->field_0x40 = 1;
        *(code **)&pFVar5->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::__l2::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar5->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar5->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::`2'::<lambda_1>,1,0>
              ::_vftable_;
        *(FClusterUnionPhysicsProxy **)&(pFVar5->Func).field_0x18 = pFVar2;
        *(undefined8 *)&(pFVar5->Func).field_0x20 = uStack_28;
        pFStack_48 = (FSimCallbackCommandObject *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::__l2::<lambda_1>,void>
                     ::Call;
        if (*(longlong *)&pFVar5->Func != 0) {
          pFStack_48 = pFVar7;
        }
        *(undefined8 *)&pFVar5->Func2 = 0;
        *(undefined8 *)&(pFVar5->Func2).field_0x28 = 0;
        pFVar5->bFuncHasTimeParameters = false;
        pFVar5->ExecuteOnStep = -1;
        if (*(longlong *)&pFVar5->Func == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(auStack_58);
        }
        pFVar7 = pFVar5;
        pFVar8 = (FSimCallbackCommandObject *)&DAT_00000001;
      }
      if ((pFVar8 != (FSimCallbackCommandObject *)0x0) &&
         (pFStack_48 != (FSimCallbackCommandObject *)0x0)) {
        pppuVar6 = &ppuStack_38;
        if (pppuStack_20 != (undefined ***)0x0) {
          pppuVar6 = pppuStack_20;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      Chaos::FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar1 + 0x98),pFVar7);
    }
  }
  return;
}

// execAddComponentToCluster @ 1482c0480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UClusterUnionComponent::execAddComponentToCluster(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  UPrimitiveComponent *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_res20 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  pTVar2 = &local_28;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddComponentToCluster((UClusterUnionComponent *)param_1,local_res20,pTVar2,local_res10[0] != 0);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execForceSetChildToParent @ 1482c07a0

void __cdecl
UClusterUnionComponent::execForceSetChildToParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void **ppvVar8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  uint local_res8 [2];
  longlong local_res10;
  longlong local_res20;
  longlong local_88;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_80;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_70;
  void *local_60;
  undefined8 local_58;
  void **local_50;
  uint *local_48;
  longlong *local_40;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  ppvVar8 = &local_60;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pTVar9 = &local_70;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10;
  if (*(longlong *)(param_1 + 0x31) != 0) {
    if (local_res10 == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3065361942051814031>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                         ,0x571,"InComponent");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      uVar1 = *(uint *)(ppvVar8 + 1);
      if (uVar1 == pTVar9->ArrayNum) {
        local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_80.ArrayNum = 0;
        local_80.ArrayMax = 0;
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
        }
        if (0 < (int)uVar1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar1,&local_80.AllocatorInstance,0,&local_80.ArrayMax);
        }
        iVar7 = *(int *)(ppvVar8 + 1);
        local_res8[0] = 0;
        if (0 < iVar7) {
          do {
            lVar4 = local_res20;
            uVar1 = local_res8[0];
            pcVar3 = *(code **)(*(longlong *)(local_res20 + 0x260) + 0x10);
            uVar6 = 0;
            if ((int)local_res8[0] < iVar7) {
              uVar6 = ~local_res8[0] >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_88 = (*pcVar3)(lVar4 + 0x260,
                                 *(undefined4 *)((longlong)*ppvVar8 + (longlong)(int)uVar1 * 4));
            if (local_88 == 0) {
              local_48 = local_res8;
              local_40 = &local_res20;
              local_50 = ppvVar8;
              bVar5 = `UClusterUnionComponent::ForceSetChildToParent'::__l7::<lambda_1>::operator()
                                (&local_50);
              if (bVar5) goto LAB_1482c0a39;
            }
            else {
LAB_1482c0a39:
              if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
                  ((FScriptContainerElement *)&local_88 <
                   local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = local_80.ArrayNum;
              if (local_80.ArrayNum == local_80.ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
              }
              local_80.ArrayNum = iVar7 + 1;
              *(longlong *)(local_80.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_88;
            }
            iVar7 = *(int *)(ppvVar8 + 1);
            local_res8[0] = local_res8[0] + 1;
          } while ((int)local_res8[0] < iVar7);
        }
        if (local_80.ArrayNum != 0) {
          Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External
                    (*(FClusterUnionPhysicsProxy **)(param_1 + 0x31),&local_80,pTVar9,true);
        }
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3065361942051814031>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ClusterUnionComponent.cpp"
                           ,0x571,"BoneIds.Num() == ChildToParent.Num()");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// execGetActors @ 1482c0b60

void __cdecl UClusterUnionComponent::execGetActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetActors((UClusterUnionComponent *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetPrimitiveComponents @ 1482c3a20

void __cdecl
UClusterUnionComponent::execGetPrimitiveComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetPrimitiveComponents((UClusterUnionComponent *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execHandleComponentPhysicsStateChange @ 1482c3cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UClusterUnionComponent::execHandleComponentPhysicsStateChange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UPrimitiveComponent *pUVar3;
  bool bVar4;
  char *pcVar5;
  TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator> *pTVar6;
  char *pcVar7;
  uint uVar8;
  char local_res10 [16];
  UPrimitiveComponent *local_res20;
  FWeakObjectPtr local_88;
  FName local_80;
  UPrimitiveComponent *local_78 [2];
  FWeakObjectPtr local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  code *local_48;
  longlong lStack_40;
  
  local_res20 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UPrimitiveComponent *)0x0) {
    return;
  }
  if (local_res10[0] != '\0') {
    return;
  }
  pcVar5 = strstr("&UClusterUnionComponent::HandleComponentPhysicsStateChange","::");
  if (pcVar5 == (char *)0x0) {
LAB_1482c3dcb:
    pcVar7 = &DAT_00000002;
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_1482c3dcb;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 != '0') goto LAB_1482c3dfe;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1482c3dfe:
  ::FName::FName(&local_80,pcVar7);
  local_68 = (FWeakObjectPtr)HandleComponentPhysicsStateChange;
  uStack_60 = 0;
  lStack_40 = (ulonglong)uStack_5c << 0x20;
  local_48 = HandleComponentPhysicsStateChange;
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  ::__Internal_RemoveDynamic<UClusterUnionComponent>
            ((TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
              *)&pUVar3->OnComponentPhysicsStateChanged,(UClusterUnionComponent *)param_1,
             (pmf_37216b21 *)&local_48,local_80);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_88.ObjectIndex = 0;
  local_88.ObjectSerialNumber = 0;
  local_78[0] = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_88,(FObjectPtr)local_78);
  local_68 = local_88;
  pTVar6 = &TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
            ::Find((TMapBase<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPrimitiveComponent>,FClusterUnionPendingAddData,0>_>
                    *)&param_1[0x2a].field_0x20,(TObjectKey<UPrimitiveComponent> *)&local_68)->
            BonesData;
  if (pTVar6 != (TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>
                 *)0x0) {
    uVar8 = *(int *)&(pTVar6->Elements).field_0x8 - *(int *)&(pTVar6->Elements).field_0x34;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    Algo::
    Transform<TSet<FClusterUnionBoneData,DefaultKeyFuncs<FClusterUnionBoneData,0>,FDefaultSetAllocator>,TArray<int,TSizedDefaultAllocator<32>_>_&,int_FClusterUnionBoneData::*>
              (pTVar6,&local_58,(pdm_f08077e3)0x0);
    AddComponentToCluster((UClusterUnionComponent *)param_1,pUVar3,&local_58,true);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// execHandleComponentPhysicsStateChangePostAddIntoClusterUnion @ 1482c3f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UClusterUnionComponent::execHandleComponentPhysicsStateChangePostAddIntoClusterUnion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UPrimitiveComponent *pUVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  char local_res10 [16];
  UPrimitiveComponent *local_res20;
  FName local_48 [2];
  code *local_38;
  undefined8 uStack_30;
  
  local_res20 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UPrimitiveComponent *)0x0) {
    return;
  }
  if (local_res10[0] != '\x01') {
    return;
  }
  pcVar5 = strstr("&UClusterUnionComponent::HandleComponentPhysicsStateChangePostAddIntoClusterUnion"
                  ,"::");
  if (pcVar5 == (char *)0x0) {
LAB_1482c405b:
    pcVar6 = &DAT_00000002;
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_1482c405b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 != '0') goto LAB_1482c408e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1482c408e:
  ::FName::FName(local_48,pcVar6);
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  local_38 = HandleComponentPhysicsStateChangePostAddIntoClusterUnion;
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  ::__Internal_RemoveDynamic<UClusterUnionComponent>
            ((TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
              *)&pUVar3->OnComponentPhysicsStateChanged,(UClusterUnionComponent *)param_1,
             (pmf_37216b21 *)&local_38,local_48[0]);
  RemoveComponentFromCluster((UClusterUnionComponent *)param_1,pUVar3);
  return;
}

// execIsAuthority @ 1482c4100

void __cdecl UClusterUnionComponent::execIsAuthority(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsAuthority((UClusterUnionComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsComponentAdded @ 1482c4140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UClusterUnionComponent::execIsComponentAdded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UPrimitiveComponent *local_res10;
  
  local_res10 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsComponentAdded((UClusterUnionComponent *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execOnRep_RigidState @ 1482c4300

void __cdecl
UClusterUnionComponent::execOnRep_RigidState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001482c4318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xaa8))();
  return;
}

// execRemoveComponentBonesFromCluster @ 1482c4330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UClusterUnionComponent::execRemoveComponentBonesFromCluster
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  UPrimitiveComponent *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveComponentBonesFromCluster((UClusterUnionComponent *)param_1,local_res10,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execRemoveComponentFromCluster @ 1482c4430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UClusterUnionComponent::execRemoveComponentFromCluster
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPrimitiveComponent *local_res10;
  
  local_res10 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveComponentFromCluster((UClusterUnionComponent *)param_1,local_res10);
  return;
}

// execSetEnableDamageFromCollision @ 1482c5d90

void __cdecl
UClusterUnionComponent::execSetEnableDamageFromCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FClusterUnionPhysicsProxy *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FClusterUnionPhysicsProxy **)(param_1 + 0x31);
  param_1[0x21].field_0x20 = local_res8[0] != 0;
  if (this != (FClusterUnionPhysicsProxy *)0x0) {
    Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External(this,local_res8[0] != 0);
  }
  return;
}

// execSetIsAnchored @ 1482c5e30

void __cdecl
UClusterUnionComponent::execSetIsAnchored(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xa90))(param_1,local_res8[0] != 0);
  return;
}

// operator() @ 150528f70

bool __thiscall
`UClusterUnionComponent::ForceSetChildToParent'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3065361942051814020>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 0x10),&local_18,
               (UObject *)0x0,None);
    uVar5 = 0;
    if ((int)**(uint **)((longlong)this + 8) < *(int *)(*(longlong *)this + 8)) {
      uVar5 = ~**(uint **)((longlong)this + 8) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3065361942051814020>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150529050;
    }
  }
  bVar2 = false;
LAB_150529050:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

