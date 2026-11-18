// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 35

// StaticClass @ 1463016a0

UClass * __cdecl UChaosGameplayEventDispatcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosGameplayEventDispatcher",
               &Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.InnerSingleton,
               StaticRegisterNativesUChaosGameplayEventDispatcher,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosGameplayEventDispatcher>,
               InternalVTableHelperCtorCaller<UChaosGameplayEventDispatcher>,local_res8,
               UChaosEventListenerComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.InnerSingleton;
}

// FillPhysicsProxy<TMapBase<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>_>::TIterator> @ 1463066e0

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
UChaosGameplayEventDispatcher::
FillPhysicsProxy<TMapBase<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>_>::TIterator>
          (UChaosGameplayEventDispatcher *this,FPhysScene_Chaos *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,TIterator *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPrimitiveComponent *pUVar3;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UPrimitiveComponent *pUVar5;
  FScriptContainerElement *pFVar6;
  UObject *local_res20;
  
  pUVar3 = *(UPrimitiveComponent **)
            (*(longlong *)param_3->_padding_ +
            (longlong)*(int *)((longlong)&param_3->_padding_ + 4) * 0x50);
  pUVar5 = (UPrimitiveComponent *)0x0;
  if (pUVar3 != (UPrimitiveComponent *)0x0) {
    pUVar5 = pUVar3;
  }
  pTVar4 = FPhysScene_Chaos::GetOwnedPhysicsProxies(param_1,pUVar5);
  if (pTVar4 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if (pFVar6 == pFVar1) break;
      local_res20 = *(UObject **)(*(longlong *)pFVar6 + 0x10);
      TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>(param_2,&local_res20);
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// FillPhysicsProxy<TMapBase<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>_>::TIterator> @ 146306790

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
UChaosGameplayEventDispatcher::
FillPhysicsProxy<TMapBase<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>_>::TIterator>
          (UChaosGameplayEventDispatcher *this,FPhysScene_Chaos *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,TIterator *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPrimitiveComponent *pUVar3;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UPrimitiveComponent *pUVar5;
  FScriptContainerElement *pFVar6;
  UObject *local_res20;
  
  pUVar3 = *(UPrimitiveComponent **)
            ((longlong)*(int *)((longlong)&param_3->_padding_ + 4) * 0x68 +
            *(longlong *)param_3->_padding_);
  pUVar5 = (UPrimitiveComponent *)0x0;
  if (pUVar3 != (UPrimitiveComponent *)0x0) {
    pUVar5 = pUVar3;
  }
  pTVar4 = FPhysScene_Chaos::GetOwnedPhysicsProxies(param_1,pUVar5);
  if (pTVar4 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if (pFVar6 == pFVar1) break;
      local_res20 = *(UObject **)(*(longlong *)pFVar6 + 0x10);
      TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>(param_2,&local_res20);
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// FillPhysicsProxy<TMapBase<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>_>::TIterator> @ 146306840

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
UChaosGameplayEventDispatcher::
FillPhysicsProxy<TMapBase<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>_>::TIterator>
          (UChaosGameplayEventDispatcher *this,FPhysScene_Chaos *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,TIterator *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPrimitiveComponent *pUVar3;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UPrimitiveComponent *pUVar5;
  FScriptContainerElement *pFVar6;
  UObject *local_res20;
  
  pUVar3 = *(UPrimitiveComponent **)
            (*(longlong *)param_3->_padding_ +
            (longlong)*(int *)((longlong)&param_3->_padding_ + 4) * 0x50);
  pUVar5 = (UPrimitiveComponent *)0x0;
  if (pUVar3 != (UPrimitiveComponent *)0x0) {
    pUVar5 = pUVar3;
  }
  pTVar4 = FPhysScene_Chaos::GetOwnedPhysicsProxies(param_1,pUVar5);
  if (pTVar4 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if (pFVar6 == pFVar1) break;
      local_res20 = *(UObject **)(*(longlong *)pFVar6 + 0x10);
      TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>(param_2,&local_res20);
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// FillPhysicsProxy<TMapBase<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>_>::TIterator> @ 1463068f0

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
UChaosGameplayEventDispatcher::
FillPhysicsProxy<TMapBase<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>_>::TIterator>
          (UChaosGameplayEventDispatcher *this,FPhysScene_Chaos *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,TIterator *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPrimitiveComponent *pUVar3;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UPrimitiveComponent *pUVar5;
  FScriptContainerElement *pFVar6;
  UObject *local_res20;
  
  pUVar3 = *(UPrimitiveComponent **)
            (*(longlong *)param_3->_padding_ +
            (longlong)*(int *)((longlong)&param_3->_padding_ + 4) * 0x50);
  pUVar5 = (UPrimitiveComponent *)0x0;
  if (pUVar3 != (UPrimitiveComponent *)0x0) {
    pUVar5 = pUVar3;
  }
  pTVar4 = FPhysScene_Chaos::GetOwnedPhysicsProxies(param_1,pUVar5);
  if (pTVar4 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if (pFVar6 == pFVar1) break;
      local_res20 = *(UObject **)(*(longlong *)pFVar6 + 0x10);
      TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>(param_2,&local_res20);
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// UChaosGameplayEventDispatcher @ 146309fd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChaosGameplayEventDispatcher * __thiscall
UChaosGameplayEventDispatcher::UChaosGameplayEventDispatcher
          (UChaosGameplayEventDispatcher *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->ContactPairToPendingNotifyMap = 0;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x48 = 0;
  *(undefined8 *)&this->ContactPairToPendingChaosNotifyMap = 0;
  *(undefined8 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x48 = 0;
  (this->PendingChaosCollisionNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChaosCollisionNotifies).ArrayNum = 0;
  (this->PendingChaosCollisionNotifies).ArrayMax = 0;
  (this->PendingCollisionNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCollisionNotifies).ArrayNum = 0;
  (this->PendingCollisionNotifies).ArrayMax = 0;
  *(undefined8 *)&this->CollisionEventRegistrations = 0;
  *(undefined8 *)&(this->CollisionEventRegistrations).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionEventRegistrations).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x34 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CollisionEventRegistrations).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x48 = 0;
  *(undefined8 *)&this->BreakEventRegistrations = 0;
  *(undefined8 *)&(this->BreakEventRegistrations).field_0x8 = 0;
  *(undefined8 *)&(this->BreakEventRegistrations).field_0x20 = 0;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x28 = 0;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x2c = 0x80;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x34 = 0;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BreakEventRegistrations).field_0x40 = 0;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x48 = 0;
  *(undefined8 *)&this->RemovalEventRegistrations = 0;
  *(undefined8 *)&(this->RemovalEventRegistrations).field_0x8 = 0;
  *(undefined8 *)&(this->RemovalEventRegistrations).field_0x20 = 0;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x28 = 0;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x2c = 0x80;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x34 = 0;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RemovalEventRegistrations).field_0x40 = 0;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x48 = 0;
  *(undefined8 *)&this->CrumblingEventRegistrations = 0;
  *(undefined8 *)&(this->CrumblingEventRegistrations).field_0x8 = 0;
  *(undefined8 *)&(this->CrumblingEventRegistrations).field_0x20 = 0;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x28 = 0;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x2c = 0x80;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x34 = 0;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CrumblingEventRegistrations).field_0x40 = 0;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x48 = 0;
  this->LastCollisionDataTime = -1.0;
  this->LastBreakingDataTime = -1.0;
  this->LastRemovalDataTime = -1.0;
  this->LastCrumblingDataTime = -1.0;
  return this;
}

// UChaosGameplayEventDispatcher @ 14630a1e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChaosGameplayEventDispatcher * __thiscall
UChaosGameplayEventDispatcher::UChaosGameplayEventDispatcher(UChaosGameplayEventDispatcher *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&UChaosEventListenerComponent::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UChaosEventListenerComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ =
       (longlong)&UChaosEventListenerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,true);
  *(undefined1 *)&this->_padding_ = 4;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->ContactPairToPendingNotifyMap = 0;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x34 = 0;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x48 = 0;
  *(undefined8 *)&this->ContactPairToPendingChaosNotifyMap = 0;
  *(undefined8 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x34 = 0;
  *(undefined8 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x48 = 0;
  (this->PendingChaosCollisionNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChaosCollisionNotifies).ArrayNum = 0;
  (this->PendingChaosCollisionNotifies).ArrayMax = 0;
  (this->PendingCollisionNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCollisionNotifies).ArrayNum = 0;
  (this->PendingCollisionNotifies).ArrayMax = 0;
  *(undefined8 *)&this->CollisionEventRegistrations = 0;
  *(undefined8 *)&(this->CollisionEventRegistrations).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionEventRegistrations).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x34 = 0;
  *(undefined8 *)&(this->CollisionEventRegistrations).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x48 = 0;
  *(undefined8 *)&this->BreakEventRegistrations = 0;
  *(undefined8 *)&(this->BreakEventRegistrations).field_0x8 = 0;
  *(undefined8 *)&(this->BreakEventRegistrations).field_0x20 = 0;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x28 = 0;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x2c = 0x80;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x34 = 0;
  *(undefined8 *)&(this->BreakEventRegistrations).field_0x40 = 0;
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x48 = 0;
  *(undefined8 *)&this->RemovalEventRegistrations = 0;
  *(undefined8 *)&(this->RemovalEventRegistrations).field_0x8 = 0;
  *(undefined8 *)&(this->RemovalEventRegistrations).field_0x20 = 0;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x28 = 0;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x2c = 0x80;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x34 = 0;
  *(undefined8 *)&(this->RemovalEventRegistrations).field_0x40 = 0;
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x48 = 0;
  *(undefined8 *)&this->CrumblingEventRegistrations = 0;
  *(undefined8 *)&(this->CrumblingEventRegistrations).field_0x8 = 0;
  *(undefined8 *)&(this->CrumblingEventRegistrations).field_0x20 = 0;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x28 = 0;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x2c = 0x80;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x34 = 0;
  *(undefined8 *)&(this->CrumblingEventRegistrations).field_0x40 = 0;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf1;
  this->LastCollisionDataTime = -1.0;
  this->LastBreakingDataTime = -1.0;
  this->LastRemovalDataTime = -1.0;
  this->LastCrumblingDataTime = -1.0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  return this;
}

// ~UChaosGameplayEventDispatcher @ 14630b2d0

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
UChaosGameplayEventDispatcher::~UChaosGameplayEventDispatcher(UChaosGameplayEventDispatcher *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&(this->CrumblingEventRegistrations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CrumblingEventRegistrations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CrumblingEventRegistrations);
  *(undefined4 *)&(this->RemovalEventRegistrations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RemovalEventRegistrations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RemovalEventRegistrations);
  *(undefined4 *)&(this->BreakEventRegistrations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BreakEventRegistrations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BreakEventRegistrations);
  *(undefined4 *)&(this->CollisionEventRegistrations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CollisionEventRegistrations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionEventRegistrations);
  DestructItems<FCollisionNotifyInfo,int>
            ((FCollisionNotifyInfo *)(this->PendingCollisionNotifies).AllocatorInstance.Data,
             (this->PendingCollisionNotifies).ArrayNum);
  pFVar2 = (this->PendingCollisionNotifies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FChaosPendingCollisionNotify,int>
            ((FChaosPendingCollisionNotify *)
             (this->PendingChaosCollisionNotifies).AllocatorInstance.Data,
             (this->PendingChaosCollisionNotifies).ArrayNum);
  pFVar2 = (this->PendingChaosCollisionNotifies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ContactPairToPendingChaosNotifyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContactPairToPendingChaosNotifyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContactPairToPendingChaosNotifyMap);
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContactPairToPendingNotifyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContactPairToPendingNotifyMap);
  this->_padding_ = (longlong)&UChaosEventListenerComponent::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UChaosEventListenerComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ =
       (longlong)&UChaosEventListenerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// DispatchPendingCollisionNotifies @ 146310c70

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
UChaosGameplayEventDispatcher::DispatchPendingCollisionNotifies(UChaosGameplayEventDispatcher *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  uint uVar3;
  UPhysicsCollisionHandler *pUVar4;
  UObjectBaseUtility *this_00;
  FCollisionNotifyInfo *pFVar5;
  FChaosPendingCollisionNotify *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  UWorld *pUVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  FWeakObjectPtr *this_01;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  pUVar11 = (UWorld *)this->_padding_;
  if (((pUVar11 != (UWorld *)0x0) ||
      (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar11 != (UWorld *)0x0)) &&
     (pUVar4 = (pUVar11->PhysicsCollisionHandler).field0_0x0.DebugPtr,
     pUVar4 != (UPhysicsCollisionHandler *)0x0)) {
    (**(code **)(pUVar4->_padding_ + 0x2b0))();
  }
  pFVar21 = (this->PendingCollisionNotifies).AllocatorInstance.Data;
  iVar22 = (this->PendingCollisionNotifies).ArrayNum;
  this_01 = (FWeakObjectPtr *)(pFVar21 + 8);
  pFVar19 = pFVar21 + (longlong)iVar22 * 200;
  while( true ) {
    if ((this->PendingCollisionNotifies).ArrayNum != iVar22) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FCollisionNotifyInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar21 == pFVar19) break;
    if ((*pFVar21 != (FScriptContainerElement)0x0) &&
       (bVar8 = FWeakObjectPtr::IsValid(this_01), bVar8)) {
      pUVar12 = FWeakObjectPtr::Get(this_01);
      (**(code **)(*(longlong *)pUVar12 + 0x550))(pUVar12,this_01,this_01 + 7,this_01 + 0xe);
    }
    pFVar21 = pFVar21 + 200;
    this_01 = this_01 + 0x19;
  }
  uVar3 = (this->PendingChaosCollisionNotifies).ArrayNum;
  uVar15 = (ulonglong)(int)uVar3;
  pFVar19 = (this->PendingChaosCollisionNotifies).AllocatorInstance.Data;
  pFVar21 = pFVar19 + 0xe0;
  pFVar17 = pFVar19 + uVar15 * 0x110;
LAB_146310d69:
  iVar22 = 0;
  if ((this->PendingChaosCollisionNotifies).ArrayNum != (int)uVar15) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FChaosPendingCollisionNotify,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res18);
  }
  uVar24 = 0;
  if (pFVar19 == pFVar17) {
    piVar2 = &(this->PendingCollisionNotifies).ArrayMax;
    pFVar5 = (FCollisionNotifyInfo *)(this->PendingCollisionNotifies).AllocatorInstance.Data;
    iVar22 = (this->PendingCollisionNotifies).ArrayNum;
    if ((this->PendingCollisionNotifies).ArrayMax < 0) {
      DestructItems<FCollisionNotifyInfo,int>(pFVar5,iVar22);
      (this->PendingCollisionNotifies).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&(this->PendingCollisionNotifies).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FCollisionNotifyInfo,int>(pFVar5,iVar22);
      (this->PendingCollisionNotifies).ArrayNum = 0;
    }
    piVar2 = &(this->PendingChaosCollisionNotifies).ArrayMax;
    pFVar6 = (FChaosPendingCollisionNotify *)
             (this->PendingChaosCollisionNotifies).AllocatorInstance.Data;
    iVar22 = (this->PendingChaosCollisionNotifies).ArrayNum;
    if ((this->PendingChaosCollisionNotifies).ArrayMax < 0) {
      DestructItems<FChaosPendingCollisionNotify,int>(pFVar6,iVar22);
      (this->PendingChaosCollisionNotifies).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x110,8,0,&(this->PendingChaosCollisionNotifies).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FChaosPendingCollisionNotify,int>(pFVar6,iVar22);
      (this->PendingChaosCollisionNotifies).ArrayNum = 0;
    }
    return;
  }
  uVar20 = *(uint *)(pFVar21 + 8);
  uVar9 = 1;
  uVar10 = uVar24;
  if (uVar20 != 0) {
    pFVar25 = *(FScriptContainerElement **)pFVar21;
    if (pFVar25 == (FScriptContainerElement *)0x0) {
      pFVar25 = pFVar21 + -0x10;
    }
    uVar10 = *(uint *)pFVar25;
    uVar24 = 0;
    while (uVar10 == 0) {
      lVar16 = (longlong)iVar22;
      uVar24 = uVar24 + 0x20;
      iVar22 = iVar22 + 1;
      uVar10 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_146310e10;
      uVar10 = *(uint *)(pFVar25 + (lVar16 + 1) * 4);
    }
    uVar9 = -uVar10 & uVar10;
    uVar15 = (ulonglong)uVar9 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar10 = (uVar24 - 1) + (int)lVar16;
    if ((int)uVar20 < (int)uVar10) {
      uVar10 = uVar20;
    }
  }
LAB_146310e10:
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar21 + -0x10);
  uVar18 = uVar20 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar9,iVar22);
  TStack_98.CurrentBitIndex = uVar10;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar20 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = uVar24;
  uStack_78 = CONCAT44(uStack_a4,*(int *)(pFVar21 + -0x18) - *(int *)(pFVar21 + 0x14));
  TStack_98.Array = pTVar1;
  if (((int)uVar20 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar24 = *(uint *)(pFVar21 + 8);
  if (uVar20 != uVar24) {
    pTVar23 = pTVar1;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar21 !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar21;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) &
             *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar22;
      uVar18 = uVar18 + 0x20;
      iVar22 = iVar22 + 1;
      uVar20 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_146310f20;
      uVar20 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar20 = (int)lVar16 + -1 + uVar18;
    if ((int)uVar24 < (int)uVar20) {
      uVar20 = uVar24;
    }
  }
LAB_146310f20:
  do {
    if (*(int *)(pFVar21 + -0x18) - *(int *)(pFVar21 + 0x14) != (int)uStack_78) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_98.CurrentBitIndex == uVar20) && (TStack_98.Array == pTVar1)) break;
    this_00 = *(UObjectBaseUtility **)
               (*(longlong *)(pFVar21 + -0x20) + (longlong)TStack_98.CurrentBitIndex * 0x10);
    if (this_00 == (UObjectBaseUtility *)0x0) {
LAB_146310f98:
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8693315206433996971>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosGameplayEventDispatcher.cpp"
                         ,0xab,"Handler");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      pUVar13 = UChaosNotifyHandlerInterface::StaticClass();
      plVar14 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar13);
      if (plVar14 == (longlong *)0x0) goto LAB_146310f98;
      (**(code **)(*plVar14 + 0x10))(plVar14,pFVar19);
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
  pFVar19 = pFVar19 + 0x110;
  pFVar21 = pFVar21 + 0x110;
  uVar15 = (ulonglong)uVar3;
  goto LAB_146310d69;
}

// GetInterestedProxyOwnersForBreakingEvents @ 146312670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UChaosGameplayEventDispatcher::GetInterestedProxyOwnersForBreakingEvents
          (UChaosGameplayEventDispatcher *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FPhysScene_Chaos *this_00;
  UPrimitiveComponent *pUVar2;
  longlong lVar3;
  int iVar4;
  UWorld *pUVar5;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  UPrimitiveComponent *pUVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  UObject *local_res8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  if ((this->_padding_ != 0) ||
     (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 != (UWorld *)0x0)
     ) {
    pUVar5 = (UWorld *)this->_padding_;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar5->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      pUVar5 = (UWorld *)this->_padding_;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      if (pUVar5 == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_00 = pUVar5->PhysicsScene;
      TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_98,
                 (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->BreakEventRegistrations);
      local_30 = 0;
      stack0xffffffffffffffa8 = local_98._16_16_;
      local_68 = (longlong *)local_98._0_8_;
      auStack_60._0_8_ = local_98._8_8_;
      local_48 = local_78;
      pTStack_40 = pTStack_70;
      uVar7 = local_98._24_8_ >> 0x20;
      local_38 = (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->BreakEventRegistrations;
      if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
        do {
          pUVar2 = *(UPrimitiveComponent **)(*local_68 + (longlong)(int)uVar7 * 0x50);
          pUVar8 = (UPrimitiveComponent *)0x0;
          if (pUVar2 != (UPrimitiveComponent *)0x0) {
            pUVar8 = pUVar2;
          }
          pTVar6 = FPhysScene_Chaos::GetOwnedPhysicsProxies(this_00,pUVar8);
          if (pTVar6 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
            pFVar9 = (pTVar6->AllocatorInstance).Data;
            iVar4 = pTVar6->ArrayNum;
            pFVar1 = pFVar9 + (longlong)iVar4 * 8;
            while( true ) {
              if (pTVar6->ArrayNum != iVar4) {
                `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_res8);
              }
              if (pFVar9 == pFVar1) break;
              local_res8 = *(UObject **)(*(longlong *)pFVar9 + 0x10);
              TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>
                        (&local_a8,&local_res8);
              pFVar9 = pFVar9 + 8;
            }
          }
          uStack_50 = uStack_50 & ~auStack_60._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
          uVar7 = (ulonglong)uStack_4c;
        } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
        if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
          uVar10 = *(int *)&(local_38->Elements).field_0x8 -
                   *(int *)&(local_38->Elements).field_0x34;
          if (uVar10 < 4) {
            iVar4 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar10) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
            local_38->HashSize = iVar4;
            TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
            ::Rehash(local_38);
          }
        }
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_a8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_a8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInterestedProxyOwnersForCollisionEvents @ 1463128c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UChaosGameplayEventDispatcher::GetInterestedProxyOwnersForCollisionEvents
          (UChaosGameplayEventDispatcher *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FPhysScene_Chaos *this_00;
  UPrimitiveComponent *pUVar2;
  longlong lVar3;
  int iVar4;
  UWorld *pUVar5;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  UPrimitiveComponent *pUVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  UObject *local_res8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  if ((this->_padding_ != 0) ||
     (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 != (UWorld *)0x0)
     ) {
    pUVar5 = (UWorld *)this->_padding_;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar5->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      pUVar5 = (UWorld *)this->_padding_;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      if (pUVar5 == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_00 = pUVar5->PhysicsScene;
      TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_98,
                 (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
                  *)&this->CollisionEventRegistrations);
      local_30 = 0;
      stack0xffffffffffffffa8 = local_98._16_16_;
      local_68 = (longlong *)local_98._0_8_;
      auStack_60._0_8_ = local_98._8_8_;
      local_48 = local_78;
      pTStack_40 = pTStack_70;
      uVar7 = local_98._24_8_ >> 0x20;
      local_38 = (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
                  *)&this->CollisionEventRegistrations;
      if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
        do {
          pUVar2 = *(UPrimitiveComponent **)((longlong)(int)uVar7 * 0x68 + *local_68);
          pUVar8 = (UPrimitiveComponent *)0x0;
          if (pUVar2 != (UPrimitiveComponent *)0x0) {
            pUVar8 = pUVar2;
          }
          pTVar6 = FPhysScene_Chaos::GetOwnedPhysicsProxies(this_00,pUVar8);
          if (pTVar6 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
            pFVar9 = (pTVar6->AllocatorInstance).Data;
            iVar4 = pTVar6->ArrayNum;
            pFVar1 = pFVar9 + (longlong)iVar4 * 8;
            while( true ) {
              if (pTVar6->ArrayNum != iVar4) {
                `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_res8);
              }
              if (pFVar9 == pFVar1) break;
              local_res8 = *(UObject **)(*(longlong *)pFVar9 + 0x10);
              TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>
                        (&local_a8,&local_res8);
              pFVar9 = pFVar9 + 8;
            }
          }
          uStack_50 = uStack_50 & ~auStack_60._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
          uVar7 = (ulonglong)uStack_4c;
        } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
        if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
          uVar10 = *(int *)&(local_38->Elements).field_0x8 -
                   *(int *)&(local_38->Elements).field_0x34;
          if (uVar10 < 4) {
            iVar4 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar10) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
            local_38->HashSize = iVar4;
            TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
            ::Rehash(local_38);
          }
        }
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_a8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_a8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInterestedProxyOwnersForCrumblingEvents @ 146312b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UChaosGameplayEventDispatcher::GetInterestedProxyOwnersForCrumblingEvents
          (UChaosGameplayEventDispatcher *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FPhysScene_Chaos *this_00;
  UPrimitiveComponent *pUVar2;
  longlong lVar3;
  int iVar4;
  UWorld *pUVar5;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  UPrimitiveComponent *pUVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  UObject *local_res8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  if ((this->_padding_ != 0) ||
     (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 != (UWorld *)0x0)
     ) {
    pUVar5 = (UWorld *)this->_padding_;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar5->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      pUVar5 = (UWorld *)this->_padding_;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      if (pUVar5 == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_00 = pUVar5->PhysicsScene;
      TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_98,
                 (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->CrumblingEventRegistrations);
      local_30 = 0;
      stack0xffffffffffffffa8 = local_98._16_16_;
      local_68 = (longlong *)local_98._0_8_;
      auStack_60._0_8_ = local_98._8_8_;
      local_48 = local_78;
      pTStack_40 = pTStack_70;
      uVar7 = local_98._24_8_ >> 0x20;
      local_38 = (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->CrumblingEventRegistrations;
      if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
        do {
          pUVar2 = *(UPrimitiveComponent **)(*local_68 + (longlong)(int)uVar7 * 0x50);
          pUVar8 = (UPrimitiveComponent *)0x0;
          if (pUVar2 != (UPrimitiveComponent *)0x0) {
            pUVar8 = pUVar2;
          }
          pTVar6 = FPhysScene_Chaos::GetOwnedPhysicsProxies(this_00,pUVar8);
          if (pTVar6 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
            pFVar9 = (pTVar6->AllocatorInstance).Data;
            iVar4 = pTVar6->ArrayNum;
            pFVar1 = pFVar9 + (longlong)iVar4 * 8;
            while( true ) {
              if (pTVar6->ArrayNum != iVar4) {
                `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_res8);
              }
              if (pFVar9 == pFVar1) break;
              local_res8 = *(UObject **)(*(longlong *)pFVar9 + 0x10);
              TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>
                        (&local_a8,&local_res8);
              pFVar9 = pFVar9 + 8;
            }
          }
          uStack_50 = uStack_50 & ~auStack_60._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
          uVar7 = (ulonglong)uStack_4c;
        } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
        if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
          uVar10 = *(int *)&(local_38->Elements).field_0x8 -
                   *(int *)&(local_38->Elements).field_0x34;
          if (uVar10 < 4) {
            iVar4 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar10) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
            local_38->HashSize = iVar4;
            TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
            ::Rehash(local_38);
          }
        }
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_a8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_a8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInterestedProxyOwnersForRemovalEvents @ 146312d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UChaosGameplayEventDispatcher::GetInterestedProxyOwnersForRemovalEvents
          (UChaosGameplayEventDispatcher *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FPhysScene_Chaos *this_00;
  UPrimitiveComponent *pUVar2;
  longlong lVar3;
  int iVar4;
  UWorld *pUVar5;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  UPrimitiveComponent *pUVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  UObject *local_res8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  if ((this->_padding_ != 0) ||
     (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 != (UWorld *)0x0)
     ) {
    pUVar5 = (UWorld *)this->_padding_;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar5->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      pUVar5 = (UWorld *)this->_padding_;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      if (pUVar5 == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_00 = pUVar5->PhysicsScene;
      TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_98,
                 (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->RemovalEventRegistrations);
      local_30 = 0;
      stack0xffffffffffffffa8 = local_98._16_16_;
      local_68 = (longlong *)local_98._0_8_;
      auStack_60._0_8_ = local_98._8_8_;
      local_48 = local_78;
      pTStack_40 = pTStack_70;
      uVar7 = local_98._24_8_ >> 0x20;
      local_38 = (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->RemovalEventRegistrations;
      if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
        do {
          pUVar2 = *(UPrimitiveComponent **)(*local_68 + (longlong)(int)uVar7 * 0x50);
          pUVar8 = (UPrimitiveComponent *)0x0;
          if (pUVar2 != (UPrimitiveComponent *)0x0) {
            pUVar8 = pUVar2;
          }
          pTVar6 = FPhysScene_Chaos::GetOwnedPhysicsProxies(this_00,pUVar8);
          if (pTVar6 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
            pFVar9 = (pTVar6->AllocatorInstance).Data;
            iVar4 = pTVar6->ArrayNum;
            pFVar1 = pFVar9 + (longlong)iVar4 * 8;
            while( true ) {
              if (pTVar6->ArrayNum != iVar4) {
                `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_res8);
              }
              if (pFVar9 == pFVar1) break;
              local_res8 = *(UObject **)(*(longlong *)pFVar9 + 0x10);
              TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>
                        (&local_a8,&local_res8);
              pFVar9 = pFVar9 + 8;
            }
          }
          uStack_50 = uStack_50 & ~auStack_60._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
          uVar7 = (ulonglong)uStack_4c;
        } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
        if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
          uVar10 = *(int *)&(local_38->Elements).field_0x8 -
                   *(int *)&(local_38->Elements).field_0x34;
          if (uVar10 < 4) {
            iVar4 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar10) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
            local_38->HashSize = iVar4;
            TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
            ::Rehash(local_38);
          }
        }
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_a8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_a8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPendingChaosCollisionForContactPair @ 1463130d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FChaosPendingCollisionNotify * __thiscall
UChaosGameplayEventDispatcher::GetPendingChaosCollisionForContactPair
          (UChaosGameplayEventDispatcher *this,void *param_1,void *param_2,bool *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  FChaosPendingCollisionNotify *pFVar6;
  longlong *plVar7;
  uint *puVar8;
  TArray<FChaosPendingCollisionNotify,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  
  if (*(int *)&(this->ContactPairToPendingChaosNotifyMap).field_0x8 !=
      *(int *)&(this->ContactPairToPendingChaosNotifyMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ContactPairToPendingChaosNotifyMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ContactPairToPendingChaosNotifyMap).field_0x38;
    }
    iVar11 = *(int *)(puVar12 +
                     ((((ulonglong)param_2 & 0x3fff) << 0x12 ^ (ulonglong)param_1 & 0xffffffff) &
                     (ulonglong)(*(int *)&(this->ContactPairToPendingChaosNotifyMap).field_0x48 - 1)
                     ) * 4);
    if (iVar11 != -1) {
      do {
        plVar7 = (longlong *)
                 ((longlong)iVar11 * 0x20 + *(longlong *)&this->ContactPairToPendingChaosNotifyMap);
        if (((void *)*plVar7 == param_1) && ((void *)plVar7[1] == param_2)) {
          if (iVar11 != -1) {
            puVar8 = (uint *)(plVar7 + 2);
            if (plVar7 == (longlong *)0x0) {
              puVar8 = (uint *)0x0;
            }
            if (puVar8 != (uint *)0x0) {
              *param_3 = false;
              uVar4 = *puVar8;
              uVar10 = 0;
              if ((int)uVar4 < (this->PendingChaosCollisionNotifies).ArrayNum) {
                uVar10 = ~uVar4 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar6 = (FChaosPendingCollisionNotify *)(*pcVar2)();
                return pFVar6;
              }
              return (FChaosPendingCollisionNotify *)
                     ((this->PendingChaosCollisionNotifies).AllocatorInstance.Data +
                     (longlong)(int)uVar4 * 0x110);
            }
          }
          break;
        }
        iVar11 = (int)plVar7[3];
      } while (iVar11 != -1);
    }
  }
  piVar5 = &(this->PendingChaosCollisionNotifies).ArrayNum;
  pTVar9 = &this->PendingChaosCollisionNotifies;
  *param_3 = true;
  piVar1 = &(this->PendingChaosCollisionNotifies).ArrayMax;
  uVar4 = *piVar5;
  if (uVar4 == *piVar1) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,8,&pTVar9->AllocatorInstance,piVar1);
    *piVar5 = uVar4;
  }
  *piVar5 = uVar4 + 1;
  memset((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x110,0,0x110);
  uVar10 = 0;
  if ((int)uVar4 < *piVar5) {
    uVar10 = ~uVar4 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FChaosPendingCollisionNotify *)(*pcVar2)();
    return pFVar6;
  }
  return (FChaosPendingCollisionNotify *)
         ((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x110);
}

// GetPendingCollisionForContactPair @ 1463132c0

FCollisionNotifyInfo * __thiscall
UChaosGameplayEventDispatcher::GetPendingCollisionForContactPair
          (UChaosGameplayEventDispatcher *this,void *param_1,void *param_2,bool *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  FCollisionNotifyInfo *pFVar6;
  longlong *plVar7;
  uint *puVar8;
  TArray<FCollisionNotifyInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  
  if (*(int *)&(this->ContactPairToPendingNotifyMap).field_0x8 !=
      *(int *)&(this->ContactPairToPendingNotifyMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ContactPairToPendingNotifyMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ContactPairToPendingNotifyMap).field_0x38;
    }
    iVar11 = *(int *)(puVar12 +
                     ((((ulonglong)param_2 & 0x3fff) << 0x12 ^ (ulonglong)param_1 & 0xffffffff) &
                     (ulonglong)(*(int *)&(this->ContactPairToPendingNotifyMap).field_0x48 - 1)) * 4
                     );
    if (iVar11 != -1) {
      do {
        plVar7 = (longlong *)
                 ((longlong)iVar11 * 0x20 + *(longlong *)&this->ContactPairToPendingNotifyMap);
        if (((void *)*plVar7 == param_1) && ((void *)plVar7[1] == param_2)) {
          if (iVar11 != -1) {
            puVar8 = (uint *)(plVar7 + 2);
            if (plVar7 == (longlong *)0x0) {
              puVar8 = (uint *)0x0;
            }
            if (puVar8 != (uint *)0x0) {
              *param_3 = false;
              uVar4 = *puVar8;
              uVar10 = 0;
              if ((int)uVar4 < (this->PendingCollisionNotifies).ArrayNum) {
                uVar10 = ~uVar4 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar6 = (FCollisionNotifyInfo *)(*pcVar2)();
                return pFVar6;
              }
              return (FCollisionNotifyInfo *)
                     ((this->PendingCollisionNotifies).AllocatorInstance.Data +
                     (longlong)(int)uVar4 * 200);
            }
          }
          break;
        }
        iVar11 = (int)plVar7[3];
      } while (iVar11 != -1);
    }
  }
  piVar5 = &(this->PendingCollisionNotifies).ArrayNum;
  pTVar9 = &this->PendingCollisionNotifies;
  *param_3 = true;
  piVar1 = &(this->PendingCollisionNotifies).ArrayMax;
  uVar4 = *piVar5;
  if (uVar4 == *piVar1) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,&pTVar9->AllocatorInstance,piVar1);
    *piVar5 = uVar4;
  }
  *piVar5 = uVar4 + 1;
  memset((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar4 * 200,0,200);
  uVar10 = 0;
  if ((int)uVar4 < *piVar5) {
    uVar10 = ~uVar4 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FCollisionNotifyInfo *)(*pcVar2)();
    return pFVar6;
  }
  return (FCollisionNotifyInfo *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar4 * 200);
}

// GetPrivateStaticClass @ 1463137b0

UClass * __cdecl UChaosGameplayEventDispatcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosGameplayEventDispatcher",
               &Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.InnerSingleton,
               StaticRegisterNativesUChaosGameplayEventDispatcher,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosGameplayEventDispatcher>,
               InternalVTableHelperCtorCaller<UChaosGameplayEventDispatcher>,local_res8,
               UChaosEventListenerComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.InnerSingleton;
}

// HandleBreakingEvents @ 146313ec0

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
UChaosGameplayEventDispatcher::HandleBreakingEvents
          (UChaosGameplayEventDispatcher *this,FBreakingEventData *param_1)

{
  int iVar1;
  FPhysScene_Chaos *this_00;
  UChaosGameplayEventDispatcher *pUVar2;
  code *pcVar3;
  UChaosGameplayEventDispatcher *pUVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_DispatchBreakEvents> FVar7;
  UWorld *pUVar8;
  UPrimitiveComponent *pUVar9;
  FChaosBreakEvent *pFVar10;
  FBreakEventCallbackWrapper *pFVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  ForAnyElementType FVar17;
  FBreakingData *pFVar18;
  FBreakingData *pFVar19;
  undefined1 uVar20;
  FScriptContainerElement *pFVar21;
  float fVar22;
  UChaosGameplayEventDispatcher *local_res8;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  FVar7 = StatPtr_STAT_DispatchBreakEvents;
  local_res8 = this;
  if (StatPtr_STAT_DispatchBreakEvents == (FThreadSafeStaticStat<FStat_STAT_DispatchBreakEvents>)0x0
     ) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_DispatchBreakEvents");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_DispatchBreakEvents>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchBreakEvents,*pFVar6,
                       L"Dispatch Break Events","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar7;
  uVar20 = 0;
  local_res10.Bits = local_res10.Bits & 0xffffff00;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      uVar20 = 1;
      local_res10._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar15.Bits;
        uStackX_14 = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosGameplayEventDispatcher.cpp"
                   ,0x239);
        uVar20 = 3;
        local_res10._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar15.Bits;
      uStackX_14 = uVar13;
      local_res20 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      local_res10.Bits = CONCAT31(local_res10.Bits._1_3_,uVar20) | 4;
      uVar20 = uVar20 | 4;
      goto LAB_14631401d;
    }
  }
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_14631401d:
  fVar22 = (float)(double)(param_1->BreakingData)._padding_;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if ((this->LastBreakingDataTime <= fVar22 && fVar22 != this->LastBreakingDataTime) &&
     (this->LastBreakingDataTime = fVar22, 0 < (param_1->BreakingData).AllBreakingsArray.ArrayNum))
  {
    pUVar8 = (UWorld *)this->_padding_;
    if (pUVar8 == (UWorld *)0x0) {
      pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    iVar1 = (param_1->BreakingData).AllBreakingsArray.ArrayNum;
    pFVar18 = (FBreakingData *)(param_1->BreakingData).AllBreakingsArray.AllocatorInstance.Data;
    this_00 = pUVar8->PhysicsScene;
    pFVar19 = pFVar18 + iVar1;
    while( true ) {
      if ((param_1->BreakingData).AllBreakingsArray.ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FBreakingData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      FVar16 = local_res20;
      pUVar4 = local_res8;
      if (pFVar18 == pFVar19) break;
      if (((pFVar18->_padding_ & 1) != 0) && (pFVar18->Proxy != (IPhysicsProxyBase *)0x0)) {
        pUVar9 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>(this_00,pFVar18->Proxy);
        if (pUVar9 != (UPrimitiveComponent *)0x0) {
          iVar5 = (int)local_50;
          if ((int)local_50 == local_50._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10a0,&local_58,(int *)((longlong)&local_50 + 4));
          }
          local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
          pFVar10 = FChaosBreakEvent::FChaosBreakEvent
                              ((FChaosBreakEvent *)(local_58.Data + (longlong)iVar5 * 0xa0),pFVar18)
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          (pFVar10->Component).field0_0x0.DebugPtr = pUVar9;
        }
      }
      pFVar18 = pFVar18 + 1;
    }
    iVar1 = (int)local_50;
    pFVar21 = local_58.Data + (longlong)(int)local_50 * 0xa0;
    FVar17.Data = local_58.Data;
    while( true ) {
      if ((int)local_50 != iVar1) {
        `TCheckedPointerIterator<FChaosBreakEvent_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (FVar17.Data == pFVar21) break;
      pUVar2 = *(UChaosGameplayEventDispatcher **)FVar17.Data;
      if (pUVar2 != (UChaosGameplayEventDispatcher *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        local_res8 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        pFVar11 = TMapBase<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>_>
                  ::Find((TMapBase<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>_>
                          *)&pUVar4->BreakEventRegistrations,
                         (TObjectPtr<UPrimitiveComponent_const_>)&local_res8);
        if (pFVar11 != (FBreakEventCallbackWrapper *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar11->BreakEventCallback);
          plVar14 = *(longlong **)&(pFVar11->BreakEventCallback).field_0x28;
          pcVar3 = *(code **)&pFVar11->BreakEventCallback;
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)&(pFVar11->BreakEventCallback).field_0x10;
          }
          uVar12 = (**(code **)(*plVar14 + 8))();
          (*pcVar3)(uVar12,FVar17.Data);
        }
      }
      FVar17.Data = FVar17.Data + 0xa0;
    }
    uVar20 = local_res10._s_0.B;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if ((uVar20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar20 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar20 & 4) != 0) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// HandleCollisionEvents @ 146314970

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
UChaosGameplayEventDispatcher::HandleCollisionEvents
          (UChaosGameplayEventDispatcher *this,FCollisionEventData *param_1)

{
  int *piVar1;
  FCollisionImpactData *this_00;
  TMap<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>_>
  *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  FPhysScene_Chaos *this_01;
  IPhysicsProxyBase *pIVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_DispatchCollisionEvents> FVar25;
  UWorld *pUVar26;
  UPrimitiveComponent *pUVar27;
  FCollisionNotifyInfo *pFVar28;
  UPrimitiveComponent *pUVar29;
  longlong lVar30;
  FChaosPendingCollisionNotify *pFVar31;
  ulonglong uVar32;
  FNameEntryId FVar33;
  FName FVar34;
  byte bVar35;
  FScriptContainerElement *pFVar36;
  longlong lVar37;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  ulonglong uVar40;
  IPhysicsProxyBase *pIVar41;
  IPhysicsProxyBase *pIVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint local_res18;
  uint uStackX_1c;
  byte local_res20;
  bool local_1a8;
  bool local_1a7 [7];
  UPrimitiveComponent *local_1a0;
  uint local_198;
  FColor_u_0 local_194;
  uint local_190;
  FName local_188;
  FCollisionNotifyInfo *local_180;
  longlong local_178;
  longlong local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FName local_158;
  FName local_150;
  longlong *local_138;
  undefined1 auStack_130 [16];
  uint uStack_120;
  uint uStack_11c;
  longlong local_118;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
  *pTStack_110;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
  *local_108;
  undefined2 local_100;
  UPrimitiveComponent *local_f8;
  longlong local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e8;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *local_e0;
  FName local_d8;
  undefined1 local_d0 [32];
  longlong local_b0;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
  *pTStack_a8;
  double local_90;
  
  FVar25 = StatPtr_STAT_DispatchCollisionEvents;
  if (StatPtr_STAT_DispatchCollisionEvents ==
      (FThreadSafeStaticStat<FStat_STAT_DispatchCollisionEvents>)0x0) {
    pFVar24 = ::FName::FName(&local_d8,"STAT_DispatchCollisionEvents");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_DispatchCollisionEvents>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchCollisionEvents,*pFVar24,
                        L"Dispatch Collision Events","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar25;
  bVar35 = 0;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  local_res20 = 0;
  FVar33 = FVar34.ComparisonIndex.Value;
  uVar39 = FVar34.Number;
  if ((FVar33.Value != 0) || (uVar39 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_194.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_194._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar35 = 1;
      local_res20 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_188.ComparisonIndex.Value = FVar33.Value;
        local_188.Number = uVar39;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_188,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosGameplayEventDispatcher.cpp"
                   ,0x192);
        bVar35 = 3;
        local_res20 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar33.Value;
      uStackX_1c = uVar39;
      local_158 = FVar34;
      FThreadStats::AddMessage(FVar34,CycleScopeStart);
      local_res20 = bVar35 | 4;
      goto LAB_146314aef;
    }
  }
  local_158 = local_150;
  FVar34 = local_150;
LAB_146314aef:
  if ((this->_padding_ != 0) ||
     (pUVar26 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar26 != (UWorld *)0x0)) {
    pUVar26 = (UWorld *)this->_padding_;
    if (pUVar26 == (UWorld *)0x0) {
      pUVar26 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar26->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      pUVar26 = (UWorld *)this->_padding_;
      if (pUVar26 == (UWorld *)0x0) {
        pUVar26 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_01 = pUVar26->PhysicsScene;
      piVar1 = &(this->PendingChaosCollisionNotifies).ArrayMax;
      pFVar31 = (FChaosPendingCollisionNotify *)
                (this->PendingChaosCollisionNotifies).AllocatorInstance.Data;
      iVar23 = (this->PendingChaosCollisionNotifies).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FChaosPendingCollisionNotify,int>(pFVar31,iVar23);
        (this->PendingChaosCollisionNotifies).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x110,8,0,&(this->PendingChaosCollisionNotifies).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FChaosPendingCollisionNotify,int>(pFVar31,iVar23);
        (this->PendingChaosCollisionNotifies).ArrayNum = 0;
      }
      TSet<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<UChaosGameplayEventDispatcher::FUniqueContactPairKey,int,0>,FDefaultSetAllocator>
               *)&this->ContactPairToPendingNotifyMap);
      if (0 < (param_1->CollisionData).AllCollisionsArray.ArrayNum) {
        pTVar2 = &this->CollisionEventRegistrations;
        TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_d0,
                   (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
                    *)pTVar2);
        uVar18 = _UNK_15066df7c;
        uVar17 = _UNK_15066df78;
        uVar16 = __xmm_80000000000000008000000000000000._4_4_;
        uVar39 = (uint)__xmm_80000000000000008000000000000000;
        local_100 = 0;
        stack0xfffffffffffffed8 = local_d0._16_16_;
        local_138 = (longlong *)local_d0._0_8_;
        auStack_130._0_8_ = local_d0._8_8_;
        local_118 = local_b0;
        pTStack_110 = pTStack_a8;
        uVar32 = local_d0._24_8_ >> 0x20;
        local_108 = (TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
                     *)pTVar2;
        if ((int)local_d0._28_4_ < *(int *)(local_d0._16_8_ + 0x18)) {
          uVar40 = (ulonglong)local_d0._28_4_;
          do {
            local_178 = (longlong)(int)uVar32 * 0x68 + *local_138;
            pUVar27 = *(UPrimitiveComponent **)((longlong)(int)uVar40 * 0x68 + *local_138);
            pUVar29 = (UPrimitiveComponent *)0x0;
            if (pUVar27 != (UPrimitiveComponent *)0x0) {
              pUVar29 = pUVar27;
            }
            local_1a0 = pUVar29;
            local_e0 = FPhysScene_Chaos::GetOwnedPhysicsProxies(this_01,pUVar29);
            if (local_e0 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
              local_190 = local_e0->ArrayNum;
              uVar32 = (ulonglong)(int)local_190;
              pFVar36 = (local_e0->AllocatorInstance).Data;
              pFVar38 = pFVar36 + uVar32 * 8;
              local_168 = pFVar38;
              while( true ) {
                local_160 = pFVar36;
                if (local_e0->ArrayNum != (int)uVar32) {
                  local_1a7[1] = false;
                  `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_1a7 + 1);
                }
                if (pFVar36 == pFVar38) break;
                pIVar41 = *(IPhysicsProxyBase **)pFVar36;
                local_e8 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                           ::Find((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&(param_1->PhysicsProxyToCollisionIndices).
                                      PhysicsProxyToIndicesMap,pIVar41);
                if (local_e8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                  iVar23 = local_e8->ArrayNum;
                  if (iVar23 != 0) {
                    local_198 = 0;
                    local_170 = 0;
                    pFVar38 = local_168;
                    local_f0 = (longlong)iVar23;
                    if (0 < iVar23) {
                      do {
                        pTVar19 = local_e8;
                        lVar37 = local_170;
                        uVar21 = 0;
                        if ((int)local_198 < local_e8->ArrayNum) {
                          uVar21 = ~local_198 >> 0x1f;
                        }
                        if ((uVar21 == 0) &&
                           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar20)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        uVar22 = Chaos::FEventManager::DecodeCollisionIndex
                                           (*(int *)((pTVar19->AllocatorInstance).Data + lVar37 * 4)
                                            ,(bool *)&local_res18);
                        uVar21 = 0;
                        if ((int)uVar22 < (param_1->CollisionData).AllCollisionsArray.ArrayNum) {
                          uVar21 = ~uVar22 >> 0x1f;
                        }
                        if ((uVar21 == 0) &&
                           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar20)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        pFVar38 = (param_1->CollisionData).AllCollisionsArray.AllocatorInstance.Data
                        ;
                        lVar37 = (longlong)(int)uVar22 * 0x120;
                        pIVar9 = *(IPhysicsProxyBase **)(pFVar38 + lVar37 + 0x108);
                        pIVar42 = pIVar41;
                        if (pIVar9 != (IPhysicsProxyBase *)0x0) {
                          pIVar42 = pIVar9;
                        }
                        if (local_res18._0_1_ != false) {
                          pIVar42 = *(IPhysicsProxyBase **)(pFVar38 + lVar37 + 0x100);
                          pIVar41 = pIVar9;
                        }
                        pUVar27 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                                            (this_01,pIVar41);
                        if ((pUVar27 != (UPrimitiveComponent *)0x0) &&
                           (pUVar27 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                                                (this_01,pIVar42),
                           pUVar27 != (UPrimitiveComponent *)0x0)) {
                          local_1a8 = false;
                          pFVar28 = GetPendingCollisionForContactPair
                                              (this,pIVar41,pIVar42,&local_1a8);
                          this_00 = &pFVar28->RigidCollisionData;
                          dVar12 = *(double *)(pFVar38 + lVar37 + 0x18);
                          dVar13 = *(double *)(pFVar38 + lVar37 + 0x18 + 8);
                          local_90 = *(double *)(pFVar38 + lVar37 + 0x28);
                          dVar11 = *(double *)(pFVar38 + lVar37 + 0x38) *
                                   *(double *)(pFVar38 + lVar37 + 0x20) +
                                   *(double *)(pFVar38 + lVar37 + 0x30) *
                                   *(double *)(pFVar38 + lVar37 + 0x18) +
                                   *(double *)(pFVar38 + lVar37 + 0x40) *
                                   *(double *)(pFVar38 + lVar37 + 0x28);
                          dVar3 = *(double *)(pFVar38 + lVar37 + 0x30);
                          dVar4 = *(double *)(pFVar38 + lVar37 + 0x40);
                          dVar5 = *(double *)(pFVar38 + lVar37 + 0x38);
                          dVar6 = (pFVar28->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Y
                          ;
                          (pFVar28->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.X =
                               dVar11 * dVar3 +
                               (pFVar28->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.X;
                          dVar7 = (pFVar28->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Z
                          ;
                          (pFVar28->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Y =
                               dVar11 * dVar5 + dVar6;
                          (pFVar28->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Z =
                               dVar11 * dVar4 + dVar7;
                          (pFVar28->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Z =
                               (local_90 - dVar11 * dVar4) +
                               (pFVar28->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Z;
                          dVar4 = (pFVar28->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0
                                  .Y;
                          (pFVar28->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.X =
                               (dVar12 - dVar11 * dVar3) +
                               (pFVar28->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.X;
                          (pFVar28->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Y =
                               (dVar13 - dVar11 * dVar5) + dVar4;
                          local_180 = pFVar28;
                          if (local_1a8 != false) {
                            local_f8 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                                                 (this_01,pIVar42);
                            if (local_res18._0_1_ != false) {
                              pUVar29 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                                                  (this_01,pIVar41);
                              local_1a0 = pUVar29;
                            }
                            local_180->bCallEvent0 = true;
                            SetCollisionInfoFromComp(&local_180->Info0,pUVar29);
                            SetCollisionInfoFromComp(&local_180->Info1,local_f8);
                            iVar23 = (pFVar28->RigidCollisionData).ContactInfos.ArrayNum;
                            piVar1 = &(pFVar28->RigidCollisionData).ContactInfos.ArrayMax;
                            if (iVar23 == *piVar1) {
                              iVar23 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x848,(ForAnyElementType *)this_00,piVar1);
                            }
                            (pFVar28->RigidCollisionData).ContactInfos.ArrayNum = iVar23 + 1;
                            lVar30 = (longlong)iVar23;
                            pFVar36 = (this_00->ContactInfos).AllocatorInstance.Data;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48) = 0;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 8) = 0;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x10) = 0;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x10 + 8) = 0;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x20) = 0;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x20 + 8) = 0;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x30) = 0;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x30 + 8) = 0;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x40) = 0;
                            uVar8 = *(undefined8 *)(pFVar38 + lVar37 + 0x30 + 8);
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x18) =
                                 *(undefined8 *)(pFVar38 + lVar37 + 0x30);
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x18 + 8) = uVar8;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x28) =
                                 *(undefined8 *)(pFVar38 + lVar37 + 0x40);
                            uVar8 = *(undefined8 *)(pFVar38 + lVar37 + 8);
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48) =
                                 *(undefined8 *)(pFVar38 + lVar37);
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 8) = uVar8;
                            *(undefined8 *)(pFVar36 + lVar30 * 0x48 + 0x10) =
                                 *(undefined8 *)(pFVar38 + lVar37 + 0x10);
                            *(float *)(pFVar36 + lVar30 * 0x48 + 0x30) =
                                 (float)*(double *)(pFVar38 + lVar37 + 0xe8);
                            if (local_res18._0_1_ != false) {
                              FCollisionImpactData::SwapContactOrders(this_00);
                            }
                          }
                          if (0 < *(int *)(local_178 + 0x18) - *(int *)(local_178 + 0x44)) {
                            local_1a7[0] = false;
                            pFVar31 = GetPendingChaosCollisionForContactPair
                                                (this,pIVar41,pIVar42,local_1a7);
                            (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.X =
                                 (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.X +
                                 *(double *)(pFVar38 + lVar37 + 0x18);
                            (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.Y =
                                 (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.Y +
                                 *(double *)(pFVar38 + lVar37 + 0x20);
                            (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.Z =
                                 *(double *)(pFVar38 + lVar37 + 0x28) +
                                 (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.Z;
                            if (local_1a7[0] != false) {
                              pUVar27 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                                                  (this_01,pIVar42);
                              if (local_res18._0_1_ != false) {
                                local_1a0 = FPhysScene_Chaos::
                                            GetOwningComponent<UPrimitiveComponent>(this_01,pIVar41)
                                ;
                              }
                              pUVar29 = local_1a0;
                              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                 (local_1a0 != (UPrimitiveComponent *)0x0)) {
                                UE::GC::MarkAsReachable((UObject *)local_1a0);
                              }
                              (pFVar31->CollisionInfo).Component.field0_0x0.DebugPtr = pUVar29;
                              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                 (pUVar27 != (UPrimitiveComponent *)0x0)) {
                                UE::GC::MarkAsReachable((UObject *)pUVar27);
                              }
                              (pFVar31->CollisionInfo).OtherComponent.field0_0x0.DebugPtr = pUVar27;
                              dVar3 = *(double *)(pFVar38 + lVar37 + 8);
                              (pFVar31->CollisionInfo).Location.field0_0x0._s_0.X =
                                   *(double *)(pFVar38 + lVar37);
                              (pFVar31->CollisionInfo).Location.field0_0x0._s_0.Y = dVar3;
                              (pFVar31->CollisionInfo).Location.field0_0x0._s_0.Z =
                                   *(double *)(pFVar38 + lVar37 + 0x10);
                              TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                              ::operator=(&pFVar31->NotifyRecipients,
                                          (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                                           *)(local_178 + 0x10));
                              if (local_res18._0_1_ == false) {
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0x18 + 8);
                                (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0x18);
                                (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.Y =
                                     dVar3;
                                (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0x28);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0x30 + 8);
                                (pFVar31->CollisionInfo).Normal.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0x30);
                                (pFVar31->CollisionInfo).Normal.field0_0x0._s_0.Y = dVar3;
                                (pFVar31->CollisionInfo).Normal.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0x40);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0x48 + 8);
                                (pFVar31->CollisionInfo).Velocity.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0x48);
                                (pFVar31->CollisionInfo).Velocity.field0_0x0._s_0.Y = dVar3;
                                (pFVar31->CollisionInfo).Velocity.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0x58);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0x60 + 8);
                                (pFVar31->CollisionInfo).OtherVelocity.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0x60);
                                (pFVar31->CollisionInfo).OtherVelocity.field0_0x0._s_0.Y = dVar3;
                                (pFVar31->CollisionInfo).OtherVelocity.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0x70);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0xa8 + 8);
                                (pFVar31->CollisionInfo).AngularVelocity.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0xa8);
                                (pFVar31->CollisionInfo).AngularVelocity.field0_0x0._s_0.Y = dVar3;
                                (pFVar31->CollisionInfo).AngularVelocity.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0xb8);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0xc0 + 8);
                                (pFVar31->CollisionInfo).OtherAngularVelocity.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0xc0);
                                (pFVar31->CollisionInfo).OtherAngularVelocity.field0_0x0._s_0.Y =
                                     dVar3;
                                (pFVar31->CollisionInfo).OtherAngularVelocity.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0xd0);
                                (pFVar31->CollisionInfo).Mass =
                                     (float)*(double *)(pFVar38 + lVar37 + 0xd8);
                                uVar43 = (undefined4)*(undefined8 *)(pFVar38 + lVar37 + 0xe0);
                                uVar44 = (undefined4)
                                         ((ulonglong)*(undefined8 *)(pFVar38 + lVar37 + 0xe0) >>
                                         0x20);
                              }
                              else {
                                pFVar36 = pFVar38 + lVar37 + 0x20;
                                uVar21 = *(uint *)pFVar36;
                                uVar22 = *(uint *)(pFVar36 + 4);
                                uVar14 = *(uint *)(pFVar36 + 8);
                                uVar15 = *(uint *)(pFVar36 + 0xc);
                                (pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0._s_0.X =
                                     (double)CONCAT44((uint)((ulonglong)
                                                             *(undefined8 *)
                                                              (pFVar38 + lVar37 + 0x18) >> 0x20) ^
                                                      uVar16,(uint)*(undefined8 *)
                                                                    (pFVar38 + lVar37 + 0x18) ^
                                                             uVar39);
                                *(uint *)((longlong)
                                          &(pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0 +
                                         8) = uVar21 ^ uVar39;
                                *(uint *)((longlong)
                                          &(pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0 +
                                         0xc) = uVar22 ^ uVar16;
                                *(uint *)((longlong)
                                          &(pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0 +
                                         0x10) = uVar14 ^ uVar17;
                                *(uint *)((longlong)
                                          &(pFVar31->CollisionInfo).AccumulatedImpulse.field0_0x0 +
                                         0x14) = uVar15 ^ uVar18;
                                pFVar36 = pFVar38 + lVar37 + 0x30;
                                uVar21 = *(uint *)(pFVar36 + 4);
                                uVar22 = *(uint *)(pFVar36 + 8);
                                uVar14 = *(uint *)(pFVar36 + 0xc);
                                uVar8 = *(undefined8 *)(pFVar38 + lVar37 + 0x40);
                                *(uint *)&(pFVar31->CollisionInfo).Normal.field0_0x0 =
                                     *(uint *)pFVar36 ^ uVar39;
                                *(uint *)((longlong)&(pFVar31->CollisionInfo).Normal.field0_0x0 + 4)
                                     = uVar21 ^ uVar16;
                                *(uint *)((longlong)&(pFVar31->CollisionInfo).Normal.field0_0x0 + 8)
                                     = uVar22 ^ uVar17;
                                *(uint *)((longlong)&(pFVar31->CollisionInfo).Normal.field0_0x0 +
                                         0xc) = uVar14 ^ uVar18;
                                (pFVar31->CollisionInfo).Normal.field0_0x0._s_0.Z =
                                     (double)CONCAT44((uint)((ulonglong)uVar8 >> 0x20) ^ uVar16,
                                                      (uint)uVar8 ^ uVar39);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0x60 + 8);
                                (pFVar31->CollisionInfo).Velocity.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0x60);
                                (pFVar31->CollisionInfo).Velocity.field0_0x0._s_0.Y = dVar3;
                                (pFVar31->CollisionInfo).Velocity.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0x70);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0x48 + 8);
                                (pFVar31->CollisionInfo).OtherVelocity.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0x48);
                                (pFVar31->CollisionInfo).OtherVelocity.field0_0x0._s_0.Y = dVar3;
                                (pFVar31->CollisionInfo).OtherVelocity.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0x58);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0xc0 + 8);
                                (pFVar31->CollisionInfo).AngularVelocity.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0xc0);
                                (pFVar31->CollisionInfo).AngularVelocity.field0_0x0._s_0.Y = dVar3;
                                (pFVar31->CollisionInfo).AngularVelocity.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0xd0);
                                dVar3 = *(double *)(pFVar38 + lVar37 + 0xa8 + 8);
                                (pFVar31->CollisionInfo).OtherAngularVelocity.field0_0x0._s_0.X =
                                     *(double *)(pFVar38 + lVar37 + 0xa8);
                                (pFVar31->CollisionInfo).OtherAngularVelocity.field0_0x0._s_0.Y =
                                     dVar3;
                                (pFVar31->CollisionInfo).OtherAngularVelocity.field0_0x0._s_0.Z =
                                     *(double *)(pFVar38 + lVar37 + 0xb8);
                                (pFVar31->CollisionInfo).Mass =
                                     (float)*(double *)(pFVar38 + lVar37 + 0xe0);
                                uVar43 = (undefined4)*(undefined8 *)(pFVar38 + lVar37 + 0xd8);
                                uVar44 = (undefined4)
                                         ((ulonglong)*(undefined8 *)(pFVar38 + lVar37 + 0xd8) >>
                                         0x20);
                              }
                              (pFVar31->CollisionInfo).OtherMass =
                                   (float)(double)CONCAT44(uVar44,uVar43);
                              pUVar29 = local_1a0;
                            }
                          }
                        }
                        local_198 = local_198 + 1;
                        local_170 = local_170 + 1;
                        pFVar38 = local_168;
                      } while (local_170 < local_f0);
                    }
                  }
                }
                pFVar36 = local_160 + 8;
                uVar32 = (ulonglong)local_190;
              }
            }
            uStack_120 = uStack_120 & ~auStack_130._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_130);
            FVar34 = local_158;
            uVar32 = (ulonglong)uStack_11c;
            uVar40 = uVar32;
          } while ((int)uStack_11c < *(int *)(auStack_130._8_8_ + 0x18));
          if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
            uVar39 = *(int *)&(local_108->Elements).field_0x8 -
                     *(int *)&(local_108->Elements).field_0x34;
            if (uVar39 < 4) {
              iVar23 = 1;
            }
            else {
              uVar32 = (ulonglong)((uVar39 >> 1) + 7) * 2 + 1;
              lVar37 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                }
              }
              iVar23 = 1 << ((byte)lVar37 & 0x1f);
            }
            if (((0 < (int)uVar39) && (local_108->HashSize < iVar23)) ||
               (iVar23 < local_108->HashSize)) {
              local_108->HashSize = iVar23;
              TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
              ::Rehash(local_108);
            }
          }
        }
      }
      DispatchPendingCollisionNotifies(this);
    }
  }
  bVar35 = local_res20;
  if ((local_res20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar35 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar35 & 4) != 0) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

// HandleCrumblingEvents @ 146315500

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
UChaosGameplayEventDispatcher::HandleCrumblingEvents
          (UChaosGameplayEventDispatcher *this,FCrumblingEventData *param_1)

{
  int iVar1;
  FPhysScene_Chaos *this_00;
  TObjectPtr<UPrimitiveComponent>_u_0 TVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TObjectPtr<UPrimitiveComponent>_u_0 TVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_DispatchCrumblingEvents> FVar10;
  UWorld *pUVar11;
  UPrimitiveComponent *pUVar12;
  FCrumblingEventCallbackWrapper *pFVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  undefined1 uVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *_Dst;
  FChaosCrumblingEvent *pFVar24;
  float fVar25;
  TObjectPtr<UPrimitiveComponent>_u_0 local_res8;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined7 uStack_4f;
  
  FVar10 = StatPtr_STAT_DispatchCrumblingEvents;
  local_res8 = (TObjectPtr<UPrimitiveComponent>_u_0)this;
  if (StatPtr_STAT_DispatchCrumblingEvents ==
      (FThreadSafeStaticStat<FStat_STAT_DispatchCrumblingEvents>)0x0) {
    pFVar9 = ::FName::FName(&local_res18,"STAT_DispatchCrumblingEvents");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_DispatchCrumblingEvents>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchCrumblingEvents,*pFVar9,
                        L"Dispatch Crumbling Events","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar10;
  uVar22 = 0;
  local_res10.Bits = local_res10.Bits & 0xffffff00;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar15 = FVar18.Number;
  if ((FVar17.Bits != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      uVar22 = 1;
      local_res10._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar17.Bits;
        uStackX_14 = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosGameplayEventDispatcher.cpp"
                   ,0x2a3);
        uVar22 = 3;
        local_res10._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar17.Bits;
      uStackX_14 = uVar15;
      local_res20 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      local_res10.Bits = CONCAT31(local_res10.Bits._1_3_,uVar22) | 4;
      uVar22 = uVar22 | 4;
      goto LAB_14631565d;
    }
  }
  FVar18.ComparisonIndex.Value = 0;
  FVar18.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_14631565d:
  fVar25 = (float)(double)(param_1->CrumblingData)._padding_;
  if (this->LastCrumblingDataTime <= fVar25 && fVar25 != this->LastCrumblingDataTime) {
    pUVar11 = (UWorld *)this->_padding_;
    this->LastCrumblingDataTime = fVar25;
    if (pUVar11 == (UWorld *)0x0) {
      pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = pUVar11->PhysicsScene;
    iVar1 = (param_1->CrumblingData).AllCrumblingsArray.ArrayNum;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    pFVar19 = (param_1->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data;
    pFVar23 = pFVar19 + (longlong)iVar1 * 0xd0;
    pFVar21 = pFVar19 + 0x10;
    while( true ) {
      if ((param_1->CrumblingData).AllCrumblingsArray.ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FCrumblingData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res18);
      }
      FVar18 = local_res20;
      TVar7 = local_res8;
      if (pFVar19 == pFVar23) break;
      if ((((byte)*pFVar19 & 1) != 0) &&
         (*(IPhysicsProxyBase **)(pFVar21 + -8) != (IPhysicsProxyBase *)0x0)) {
        pUVar12 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                            (this_00,*(IPhysicsProxyBase **)(pFVar21 + -8));
        if (pUVar12 != (UPrimitiveComponent *)0x0) {
          iVar8 = (int)local_88;
          if ((int)local_88 == local_88._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10c0,&local_90,(int *)((longlong)&local_88 + 4));
          }
          local_88 = CONCAT44(local_88._4_4_,iVar8 + 1);
          _Dst = local_90.Data + (longlong)iVar8 * 0xc0;
          memset(_Dst,0,0xc0);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          *(UPrimitiveComponent **)&_Dst->field_0x0 = pUVar12;
          uVar14 = *(undefined8 *)(pFVar21 + 8);
          local_50 = 1;
          *(undefined8 *)(_Dst + 8) = *(undefined8 *)pFVar21;
          *(undefined8 *)(_Dst + 0x10) = uVar14;
          *(undefined8 *)(_Dst + 0x18) = *(undefined8 *)(pFVar21 + 0x10);
          uVar14 = *(undefined8 *)(pFVar21 + 0x28);
          *(undefined8 *)(_Dst + 0x20) = *(undefined8 *)(pFVar21 + 0x20);
          *(undefined8 *)(_Dst + 0x28) = uVar14;
          uVar14 = *(undefined8 *)(pFVar21 + 0x38);
          *(undefined8 *)(_Dst + 0x30) = *(undefined8 *)(pFVar21 + 0x30);
          *(undefined8 *)(_Dst + 0x38) = uVar14;
          uVar14 = *(undefined8 *)(pFVar21 + 0x48);
          *(undefined8 *)(_Dst + 0x40) = *(undefined8 *)(pFVar21 + 0x40);
          *(undefined8 *)(_Dst + 0x48) = uVar14;
          *(undefined8 *)(_Dst + 0x50) = *(undefined8 *)(pFVar21 + 0x50);
          uVar14 = *(undefined8 *)(pFVar21 + 0x60);
          *(undefined8 *)(_Dst + 0x58) = *(undefined8 *)(pFVar21 + 0x58);
          *(undefined8 *)(_Dst + 0x60) = uVar14;
          *(undefined8 *)(_Dst + 0x68) = *(undefined8 *)(pFVar21 + 0x68);
          *(float *)(_Dst + 0x70) = (float)*(double *)(pFVar21 + 0x70);
          uVar4 = *(undefined8 *)(pFVar21 + 0x90);
          uVar5 = *(undefined8 *)(pFVar21 + 0x98);
          uVar6 = *(undefined8 *)(pFVar21 + 0x80);
          uStack_70 = *(undefined4 *)(pFVar21 + 0x88);
          uStack_6c = *(undefined4 *)(pFVar21 + 0x8c);
          uVar14 = *(undefined8 *)(pFVar21 + 0xa0);
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined8 *)(_Dst + 0x78) = *(undefined8 *)(pFVar21 + 0x78);
          *(undefined8 *)(_Dst + 0x80) = uVar6;
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(_Dst + 0x88) = uStack_70;
          *(undefined4 *)(_Dst + 0x8c) = uStack_6c;
          *(undefined4 *)(_Dst + 0x90) = (undefined4)local_68;
          *(undefined4 *)(_Dst + 0x94) = local_68._4_4_;
          uStack_58 = (undefined4)uVar14;
          uStack_54 = (undefined4)((ulonglong)uVar14 >> 0x20);
          *(undefined4 *)(_Dst + 0x98) = (undefined4)uStack_60;
          *(undefined4 *)(_Dst + 0x9c) = uStack_60._4_4_;
          *(undefined4 *)(_Dst + 0xa0) = uStack_58;
          *(undefined4 *)(_Dst + 0xa4) = uStack_54;
          *(ulonglong *)(_Dst + 0xa8) = CONCAT71(uStack_4f,1);
          local_68 = uVar4;
          uStack_60 = uVar5;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(_Dst + 0xb0),
                     (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar21 + 0xa8));
        }
      }
      pFVar19 = pFVar19 + 0xd0;
      pFVar21 = pFVar21 + 0xd0;
    }
    iVar1 = (int)local_88;
    if (0 < (int)local_88) {
      pFVar24 = (FChaosCrumblingEvent *)(local_90.Data + (longlong)(int)local_88 * 0xc0);
      FVar20.Data = local_90.Data;
      while( true ) {
        if ((int)local_88 != iVar1) {
          `TCheckedPointerIterator<FChaosCrumblingEvent_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if ((FChaosCrumblingEvent *)FVar20.Data == pFVar24) break;
        TVar2 = (TObjectPtr<UPrimitiveComponent>_u_0)
                (((FChaosCrumblingEvent *)FVar20.Data)->Component).field0_0x0.DebugPtr;
        if (TVar2.DebugPtr != (UPrimitiveComponent *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
          local_res8 = TVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
          pFVar13 = TMapBase<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>_>
                    ::Find((TMapBase<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>_>
                            *)&(TVar7.DebugPtr)->HLODBatchingPolicy,
                           (TObjectPtr<UPrimitiveComponent_const_>)&local_res8);
          if (pFVar13 != (FCrumblingEventCallbackWrapper *)0x0) {
            UE::Core::Private::Function::CheckCallable(*(void **)&pFVar13->CrumblingEventCallback);
            plVar16 = *(longlong **)&(pFVar13->CrumblingEventCallback).field_0x28;
            pcVar3 = *(code **)&pFVar13->CrumblingEventCallback;
            if (plVar16 == (longlong *)0x0) {
              plVar16 = (longlong *)&(pFVar13->CrumblingEventCallback).field_0x10;
            }
            uVar14 = (**(code **)(*plVar16 + 8))();
            (*pcVar3)(uVar14,FVar20.Data);
          }
        }
        FVar20.Data = FVar20.Data + 0xc0;
      }
    }
    DestructItems<FChaosCrumblingEvent,int>((FChaosCrumblingEvent *)local_90.Data,(int)local_88);
    if ((FChaosCrumblingEvent *)local_90.Data != (FChaosCrumblingEvent *)0x0) {
      FMemory::Free(local_90.Data);
    }
    uVar22 = local_res10._s_0.B;
  }
  if ((uVar22 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar22 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar22 & 4) != 0) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// HandleRemovalEvents @ 146316dc0

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
UChaosGameplayEventDispatcher::HandleRemovalEvents
          (UChaosGameplayEventDispatcher *this,FRemovalEventData *param_1)

{
  TObjectPtr<UPrimitiveComponent_const_>_u_0 *pTVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  UWorld *pUVar5;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 TVar6;
  longlong lVar7;
  FRemovalEventCallbackWrapper *pFVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res8;
  FPhysScene_Chaos *local_res10;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  fVar15 = (float)(double)(param_1->RemovalData)._padding_;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if ((this->LastRemovalDataTime <= fVar15 && fVar15 != this->LastRemovalDataTime) &&
     (this->LastRemovalDataTime = fVar15, 0 < (param_1->RemovalData).AllRemovalArray.ArrayNum)) {
    pUVar5 = (UWorld *)this->_padding_;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    iVar2 = (param_1->RemovalData).AllRemovalArray.ArrayNum;
    local_res10 = pUVar5->PhysicsScene;
    pFVar12 = (param_1->RemovalData).AllRemovalArray.AllocatorInstance.Data;
    pFVar14 = pFVar12 + (longlong)iVar2 * 0x58;
    while( true ) {
      if ((param_1->RemovalData).AllRemovalArray.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FRemovalData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar12 == pFVar14) break;
      if ((*(IPhysicsProxyBase **)(pFVar12 + 0x20) != (IPhysicsProxyBase *)0x0) &&
         (TVar6.DebugPtr =
               FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                         (local_res10,*(IPhysicsProxyBase **)(pFVar12 + 0x20)),
         TVar6.DebugPtr != (UPrimitiveComponent *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        local_res8.DebugPtr = TVar6.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        uVar11 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        iVar4 = TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                          ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
                            *)&this->RemovalEventRegistrations,uVar11 >> 0x10 ^ uVar11,
                           (TObjectPtr<UPrimitiveComponent_const_> *)&local_res8.ObjectPtr);
        if (iVar4 != -1) {
          iVar4 = (int)local_40;
          if ((int)local_40 == local_40._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_48,(int *)((longlong)&local_40 + 4));
          }
          FVar13.Data = local_48.Data;
          local_40 = CONCAT44(local_40._4_4_,iVar4 + 1);
          lVar7 = (longlong)iVar4;
          *(undefined8 *)(local_48.Data + lVar7 * 0x28) = 0;
          *(undefined8 *)(local_48.Data + lVar7 * 0x28 + 8) = 0;
          *(undefined8 *)(local_48.Data + lVar7 * 0x28 + 0x10) = 0;
          *(undefined8 *)(local_48.Data + lVar7 * 0x28 + 0x10 + 8) = 0;
          *(undefined8 *)(local_48.Data + lVar7 * 0x28 + 0x20) = 0;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
          }
          ((TObjectPtr<UPrimitiveComponent_const_>_u_0 *)(FVar13.Data + lVar7 * 0x28))->DebugPtr =
               (UPrimitiveComponent *)TVar6;
          uVar9 = *(undefined8 *)(pFVar12 + 8);
          *(undefined8 *)(FVar13.Data + lVar7 * 0x28 + 8) = *(undefined8 *)pFVar12;
          *(undefined8 *)(FVar13.Data + lVar7 * 0x28 + 8 + 8) = uVar9;
          *(undefined8 *)(FVar13.Data + lVar7 * 0x28 + 0x18) = *(undefined8 *)(pFVar12 + 0x10);
          *(float *)(FVar13.Data + lVar7 * 0x28 + 0x20) = (float)*(double *)(pFVar12 + 0x18);
        }
      }
      pFVar12 = pFVar12 + 0x58;
    }
    iVar2 = (int)local_40;
    pTVar1 = (TObjectPtr<UPrimitiveComponent_const_>_u_0 *)
             (local_48.Data + (longlong)(int)local_40 * 0x28);
    FVar13.Data = local_48.Data;
    while( true ) {
      if ((int)local_40 != iVar2) {
        `TCheckedPointerIterator<FChaosRemovalEvent_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if ((TObjectPtr<UPrimitiveComponent_const_>_u_0 *)FVar13.Data == pTVar1) break;
      TVar6 = (TObjectPtr<UPrimitiveComponent_const_>_u_0)
              *(TObjectPtr<UPrimitiveComponent_const_>_u_0 *)FVar13.Data;
      if (TVar6.DebugPtr != (UPrimitiveComponent *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        local_res8 = TVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        pFVar8 = TMapBase<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>_>
                 ::Find((TMapBase<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>_>
                         *)&this->RemovalEventRegistrations,
                        (TObjectPtr<UPrimitiveComponent_const_>)&local_res8);
        if (pFVar8 != (FRemovalEventCallbackWrapper *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar8->RemovalEventCallback);
          plVar10 = *(longlong **)&(pFVar8->RemovalEventCallback).field_0x28;
          pcVar3 = *(code **)&pFVar8->RemovalEventCallback;
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)&(pFVar8->RemovalEventCallback).field_0x10;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(uVar9,FVar13.Data);
        }
      }
      FVar13.Data = FVar13.Data + 0x28;
    }
  }
  if ((TObjectPtr<UPrimitiveComponent_const_>_u_0 *)local_48.Data !=
      (TObjectPtr<UPrimitiveComponent_const_>_u_0 *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// HandleSleepingEvents @ 146317630

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
UChaosGameplayEventDispatcher::HandleSleepingEvents
          (UChaosGameplayEventDispatcher *this,FSleepingEventData *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FPhysScene_Chaos *this_00;
  FName FVar3;
  char cVar4;
  UWorld *pUVar5;
  UPrimitiveComponent *this_01;
  FBodyInstance *this_02;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FName local_res10;
  
  pUVar5 = (UWorld *)this->_padding_;
  if (pUVar5 == (UWorld *)0x0) {
    pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  iVar2 = (param_1->SleepingData).ArrayNum;
  pFVar8 = (param_1->SleepingData).AllocatorInstance.Data;
  this_00 = pUVar5->PhysicsScene;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->SleepingData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FSleepingData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    FVar1 = pFVar8[8];
    this_01 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                        (this_00,*(IPhysicsProxyBase **)pFVar8);
    if (this_01 != (UPrimitiveComponent *)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      this_02 = FPhysScene_Chaos::GetBodyInstanceFromProxy(this_00,*(IPhysicsProxyBase **)pFVar8);
      if (this_02 != (FBodyInstance *)0x0) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02);
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar6[1].field_0x0;
        local_res10.Number = *(uint *)&pUVar6[1].field_0x4;
      }
      FVar3 = local_res10;
      cVar4 = (**(code **)(*(longlong *)this_01 + 0x8a8))(this_01,local_res10);
      if (cVar4 != '\0') {
        UPrimitiveComponent::DispatchWakeEvents(this_01,FVar1 != (FScriptContainerElement)0x0,FVar3)
        ;
      }
    }
    pFVar8 = pFVar8 + 0x10;
  }
  return;
}

// OnRegister @ 1463190c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosGameplayEventDispatcher::OnRegister(UChaosGameplayEventDispatcher *this)

{
  UActorComponent::OnRegister((UActorComponent *)this);
  RegisterChaosEvents(this);
  return;
}

// OnUnregister @ 1463190f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosGameplayEventDispatcher::OnUnregister(UChaosGameplayEventDispatcher *this)

{
  longlong lVar1;
  FEventManager *this_00;
  UWorld *pUVar2;
  EEventType local_res8 [2];
  
  if ((this->_padding_ != 0) ||
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 != (UWorld *)0x0)
     ) {
    pUVar2 = (UWorld *)this->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if ((pUVar2->PhysicsScene != (FPhysScene_Chaos *)0x0) &&
       (lVar1 = pUVar2->PhysicsScene->_padding_, lVar1 != 0)) {
      this_00 = *(FEventManager **)(lVar1 + 0xbd8);
      local_res8[0] = Collision;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
      local_res8[0] = Breaking;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
      local_res8[0] = Sleeping;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
      local_res8[0] = Removal;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
      local_res8[0] = Crumbling;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
    }
  }
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// RegisterChaosEvents @ 14631a380

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
UChaosGameplayEventDispatcher::RegisterChaosEvents(UChaosGameplayEventDispatcher *this)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  uint uStack_4c;
  
  pUVar5 = (UWorld *)this->_padding_;
  if (pUVar5 == (UWorld *)0x0) {
    pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((pUVar5->PhysicsScene != (FPhysScene_Chaos *)0x0) &&
     (lVar1 = pUVar5->PhysicsScene->_padding_, lVar1 != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0xbd8);
    SRWLock = (PSRWLOCK)(lVar1 + 0x20);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(lVar1 + 0x10) < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventID < EventContainers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x202,L"Registering event Handler for an event ID that does not exist");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x10) < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
    pcVar3 = *(code **)(*plVar2 + 8);
    local_res8 = ::operator_new(0x30);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[2] = HandleCollisionEvents;
      local_res8[3] = (ulonglong)uStack_4c << 0x20;
      *local_res8 = &
                    ___7__TRawEventHandler_UFCollisionEventData_Chaos__VUChaosGameplayEventDispatcher___Chaos__6B_
      ;
      local_res8[1] = this;
      local_res8[4] = GetInterestedProxyOwnersForCollisionEvents;
      local_res8[5] = (ulonglong)uStack_4c << 0x20;
      if (local_res8[2] == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HandlerFunction",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                           ,0x47,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    (*pcVar3)(plVar2,&local_res8);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(lVar1 + 0x10) < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventID < EventContainers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x202,L"Registering event Handler for an event ID that does not exist");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x10) < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 8);
    pcVar3 = *(code **)(*plVar2 + 8);
    local_res10 = ::operator_new(0x30);
    if (local_res10 == (undefined8 *)0x0) {
      local_res10 = (undefined8 *)0x0;
    }
    else {
      local_res10[2] = HandleBreakingEvents;
      local_res10[3] = (ulonglong)uStack_4c << 0x20;
      *local_res10 = &
                     ___7__TRawEventHandler_UFBreakingEventData_Chaos__VUChaosGameplayEventDispatcher___Chaos__6B_
      ;
      local_res10[1] = this;
      local_res10[4] = GetInterestedProxyOwnersForBreakingEvents;
      local_res10[5] = (ulonglong)uStack_4c << 0x20;
      if (local_res10[2] == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HandlerFunction",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                           ,0x47,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    (*pcVar3)(plVar2,&local_res10);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(lVar1 + 0x10) < 5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventID < EventContainers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x202,L"Registering event Handler for an event ID that does not exist");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x10) < 5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 0x20);
    pcVar3 = *(code **)(*plVar2 + 8);
    local_res18 = ::operator_new(0x30);
    if (local_res18 == (undefined8 *)0x0) {
      local_res18 = (undefined8 *)0x0;
    }
    else {
      local_res18[2] = HandleRemovalEvents;
      local_res18[3] = (ulonglong)uStack_4c << 0x20;
      *local_res18 = &
                     ___7__TRawEventHandler_UFRemovalEventData_Chaos__VUChaosGameplayEventDispatcher___Chaos__6B_
      ;
      local_res18[1] = this;
      local_res18[4] = GetInterestedProxyOwnersForRemovalEvents;
      local_res18[5] = (ulonglong)uStack_4c << 0x20;
      if (local_res18[2] == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HandlerFunction",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                           ,0x47,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    (*pcVar3)(plVar2,&local_res18);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(lVar1 + 0x10) < 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventID < EventContainers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x202,L"Registering event Handler for an event ID that does not exist");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(lVar1 + 0x10) < 6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 0x28);
    pcVar3 = *(code **)(*plVar2 + 8);
    local_res20 = ::operator_new(0x30);
    if (local_res20 == (undefined8 *)0x0) {
      local_res20 = (undefined8 *)0x0;
    }
    else {
      local_res20[2] = HandleCrumblingEvents;
      local_res20[3] = (ulonglong)uStack_4c << 0x20;
      *local_res20 = &
                     ___7__TRawEventHandler_UFCrumblingEventData_Chaos__VUChaosGameplayEventDispatcher___Chaos__6B_
      ;
      local_res20[1] = this;
      local_res20[4] = GetInterestedProxyOwnersForCrumblingEvents;
      local_res20[5] = (ulonglong)uStack_4c << 0x20;
      if (local_res20[2] == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HandlerFunction",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                           ,0x47,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    (*pcVar3)(plVar2,&local_res20);
    ReleaseSRWLockShared(SRWLock);
  }
  return;
}

// RegisterForBreakEvents @ 14631a940

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
UChaosGameplayEventDispatcher::RegisterForBreakEvents
          (UChaosGameplayEventDispatcher *this,UPrimitiveComponent *param_1,
          TFunction<void___cdecl(FChaosBreakEvent_const_&)> *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FBreakEventCallbackWrapper_const_&> local_78;
  FBreakEventCallbackWrapper **local_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_58[0] = *(longlong *)param_2;
    local_30 = (longlong *)0x0;
    if (local_58[0] != 0) {
      puVar1 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,local_48);
    }
    local_78.Value = (FBreakEventCallbackWrapper *)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_68 = &local_78.Value;
    local_60 = local_58;
    TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FBreakEventCallbackWrapper_const_&>_>
              ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
                *)&this->BreakEventRegistrations,&local_78,(bool *)&local_68);
    if (local_58[0] != 0) {
      plVar2 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar2 = local_30;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// RegisterForCollisionEvents @ 14631aa40

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
UChaosGameplayEventDispatcher::RegisterForCollisionEvents
          (UChaosGameplayEventDispatcher *this,UPrimitiveComponent *param_1,UObject *param_2)

{
  FChaosHandlerSet *pFVar1;
  UClass *pUVar2;
  void *pvVar3;
  uint uVar4;
  TObjectPtr<UPrimitiveComponent>_u_0 TVar5;
  TObjectPtr<UObject> local_res8;
  TObjectPtr<UPrimitiveComponent>_u_0 local_res10;
  UObject *local_res18;
  
  TVar5.DebugPtr = param_1;
  local_res10.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UPrimitiveComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TVar5 = local_res10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  pFVar1 = TMapBase<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>_>
           ::FindOrAddImpl<TObjectPtr<UPrimitiveComponent>_>
                     ((TMapBase<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>_>
                       *)&this->CollisionEventRegistrations,uVar4 >> 0x10 ^ uVar4,
                      (TObjectPtr<UPrimitiveComponent> *)&local_res10.ObjectPtr);
  if (param_2 != (UObject *)0x0) {
    pUVar2 = UChaosNotifyHandlerInterface::StaticClass();
    pvVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar2);
    if (pvVar3 != (void *)0x0) {
      local_res18 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&pFVar1->ChaosHandlers,&local_res8,(bool *)&local_res18);
    }
  }
  if ((UPrimitiveComponent *)param_2 == param_1) {
    pFVar1->bLegacyComponentNotify = true;
  }
  return;
}

// RegisterForCrumblingEvents @ 14631ab30

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
UChaosGameplayEventDispatcher::RegisterForCrumblingEvents
          (UChaosGameplayEventDispatcher *this,UPrimitiveComponent *param_1,
          TFunction<void___cdecl(FChaosCrumblingEvent_const_&)> *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FCrumblingEventCallbackWrapper_const_&>
  local_78;
  FCrumblingEventCallbackWrapper **local_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_58[0] = *(longlong *)param_2;
    local_30 = (longlong *)0x0;
    if (local_58[0] != 0) {
      puVar1 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,local_48);
    }
    local_78.Value = (FCrumblingEventCallbackWrapper *)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_68 = &local_78.Value;
    local_60 = local_58;
    TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FCrumblingEventCallbackWrapper_const_&>_>
              ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
                *)&this->CrumblingEventRegistrations,&local_78,(bool *)&local_68);
    if (local_58[0] != 0) {
      plVar2 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar2 = local_30;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// RegisterForRemovalEvents @ 14631ac30

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
UChaosGameplayEventDispatcher::RegisterForRemovalEvents
          (UChaosGameplayEventDispatcher *this,UPrimitiveComponent *param_1,
          TFunction<void___cdecl(FChaosRemovalEvent_const_&)> *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FRemovalEventCallbackWrapper_const_&> local_78
  ;
  FRemovalEventCallbackWrapper **local_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_58[0] = *(longlong *)param_2;
    local_30 = (longlong *)0x0;
    if (local_58[0] != 0) {
      puVar1 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,local_48);
    }
    local_78.Value = (FRemovalEventCallbackWrapper *)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_68 = &local_78.Value;
    local_60 = local_58;
    TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TObjectPtr<UPrimitiveComponent>_&&,FRemovalEventCallbackWrapper_const_&>_>
              ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
                *)&this->RemovalEventRegistrations,&local_78,(bool *)&local_68);
    if (local_58[0] != 0) {
      plVar2 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar2 = local_30;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// StaticRegisterNativesUChaosGameplayEventDispatcher @ 146320300

void __cdecl UChaosGameplayEventDispatcher::StaticRegisterNativesUChaosGameplayEventDispatcher(void)

{
  return;
}

// UnRegisterForBreakEvents @ 146321250

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
UChaosGameplayEventDispatcher::UnRegisterForBreakEvents
          (UChaosGameplayEventDispatcher *this,UPrimitiveComponent *param_1)

{
  uint uVar1;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res10 [3];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->BreakEventRegistrations).field_0x8 !=
        *(int *)&(this->BreakEventRegistrations).field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_>
                ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->BreakEventRegistrations,uVar1 >> 0x10 ^ uVar1,
                 (TObjectPtr<UPrimitiveComponent_const_> *)&local_res10[0].ObjectPtr);
    }
  }
  return;
}

// UnRegisterForCollisionEvents @ 146321300

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
UChaosGameplayEventDispatcher::UnRegisterForCollisionEvents
          (UChaosGameplayEventDispatcher *this,UPrimitiveComponent *param_1,UObject *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UPrimitiveComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar1 = TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                    ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
                      *)&this->CollisionEventRegistrations,uVar2 >> 0x10 ^ uVar2,
                     (TObjectPtr<UPrimitiveComponent_const_> *)&local_res8.ObjectPtr);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x68 + *(longlong *)&this->CollisionEventRegistrations;
    pcVar4 = (char *)(lVar3 + 8);
    if (lVar3 == 0) {
      pcVar4 = (char *)0x0;
    }
    if (pcVar4 != (char *)0x0) {
      local_res8 = (TObjectPtr<UPrimitiveComponent_const_>_u_0)param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      if (*(int *)(pcVar4 + 0x10) != *(int *)(pcVar4 + 0x3c)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(param_2);
        }
        uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
                -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        RemoveImpl<TObjectPtr<UObject_const_>_>
                  ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)(pcVar4 + 8),uVar2 >> 0x10 ^ uVar2,
                   (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
      }
      if ((UPrimitiveComponent *)param_2 == param_1) {
        *pcVar4 = '\0';
      }
      if ((*(int *)(pcVar4 + 0x10) == *(int *)(pcVar4 + 0x3c)) && (*pcVar4 == '\0')) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_res8.DebugPtr = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        if (*(int *)&(this->CollisionEventRegistrations).field_0x8 !=
            *(int *)&(this->CollisionEventRegistrations).field_0x34) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_1 != (UPrimitiveComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                  -0x7a143595;
          uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
          TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
          ::RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_>
                    ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
                      *)&this->CollisionEventRegistrations,uVar2 >> 0x10 ^ uVar2,
                     (TObjectPtr<UPrimitiveComponent_const_> *)&local_res8.ObjectPtr);
        }
      }
    }
  }
  return;
}

// UnRegisterForCrumblingEvents @ 146321510

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
UChaosGameplayEventDispatcher::UnRegisterForCrumblingEvents
          (UChaosGameplayEventDispatcher *this,UPrimitiveComponent *param_1)

{
  uint uVar1;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res10 [3];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->CrumblingEventRegistrations).field_0x8 !=
        *(int *)&(this->CrumblingEventRegistrations).field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_>
                ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->CrumblingEventRegistrations,uVar1 >> 0x10 ^ uVar1,
                 (TObjectPtr<UPrimitiveComponent_const_> *)&local_res10[0].ObjectPtr);
    }
  }
  return;
}

// UnRegisterForRemovalEvents @ 1463215c0

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
UChaosGameplayEventDispatcher::UnRegisterForRemovalEvents
          (UChaosGameplayEventDispatcher *this,UPrimitiveComponent *param_1)

{
  uint uVar1;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res10 [3];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->RemovalEventRegistrations).field_0x8 !=
        *(int *)&(this->RemovalEventRegistrations).field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UPrimitiveComponent_const_>_>
                ((TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
                  *)&this->RemovalEventRegistrations,uVar1 >> 0x10 ^ uVar1,
                 (TObjectPtr<UPrimitiveComponent_const_> *)&local_res10[0].ObjectPtr);
    }
  }
  return;
}

// UnregisterChaosEvents @ 146321900

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
UChaosGameplayEventDispatcher::UnregisterChaosEvents(UChaosGameplayEventDispatcher *this)

{
  longlong lVar1;
  FEventManager *this_00;
  UWorld *pUVar2;
  EEventType local_res8 [2];
  
  if ((this->_padding_ != 0) ||
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 != (UWorld *)0x0)
     ) {
    pUVar2 = (UWorld *)this->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if ((pUVar2->PhysicsScene != (FPhysScene_Chaos *)0x0) &&
       (lVar1 = pUVar2->PhysicsScene->_padding_, lVar1 != 0)) {
      this_00 = *(FEventManager **)(lVar1 + 0xbd8);
      local_res8[0] = Collision;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
      local_res8[0] = Breaking;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
      local_res8[0] = Sleeping;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
      local_res8[0] = Removal;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
      local_res8[0] = Crumbling;
      Chaos::FEventManager::UnregisterHandler(this_00,local_res8,this);
    }
  }
  return;
}

// __VTableCtorCaller @ 146323940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl UChaosGameplayEventDispatcher::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryComponentTick._padding_ + 4) = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0x80;
    *(undefined4 *)&this[1].field_0x88 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x8c = 0;
    *(undefined8 *)&this[1].field_0x98 = 0;
    *(undefined4 *)&this[1].PhysicsStateAsyncCreationScene = 0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2].PrimaryComponentTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].PrimaryComponentTick._padding_ + 4) = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)&this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[2].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].AssetUserData.ArrayNum = 0;
    this[2].AssetUserData.ArrayMax = 0x80;
    *(undefined4 *)&this[2].field_0x88 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x8c = 0;
    *(undefined8 *)&this[2].field_0x98 = 0;
    *(undefined4 *)&this[2].PhysicsStateAsyncCreationScene = 0;
    this[2].OwnerPrivate = (AActor *)0x0;
    this[2].WorldPrivate = (UWorld *)0x0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3].PrimaryComponentTick._padding_ = 0;
    this[3].PrimaryComponentTick._padding_ = 0;
    this[3].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)&this[3].PrimaryComponentTick.Target = 0;
    *(undefined4 *)((longlong)&this[3].PrimaryComponentTick.Target + 4) = 0x80;
    *(undefined4 *)&this[3].ComponentTags.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[3].ComponentTags.AllocatorInstance.Data + 4) = 0;
    this[3].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].AssetUserData.ArrayNum = 0;
    *(undefined4 *)&this[3].field_0x88 = 0xbf800000;
    *(undefined4 *)&this[3].field_0x8c = 0xbf800000;
    this[3].UCSSerializationIndex = -0x40800000;
    this[3].RegistrationState = 0xbf800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

