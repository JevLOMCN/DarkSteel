// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 81

// StaticClass @ 1482cb010

UClass * __cdecl UNetworkPhysicsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsComponent",
               &Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton,
               StaticRegisterNativesUNetworkPhysicsComponent,600,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkPhysicsComponent>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton;
}

// UNetworkPhysicsComponent @ 1482dae60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetworkPhysicsComponent * __thiscall
UNetworkPhysicsComponent::UNetworkPhysicsComponent
          (UNetworkPhysicsComponent *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->InputsToNetwork_Owner = 3;
  this->InputsToNetwork_OwnerDefault = 3;
  this->ImplementationInterface_Internal = (INetworkPhysicsInputState_Internal *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->ReplicatedDeltaSourceInput = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->ReplicatedDeltaSourceInput).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ReplicatedDeltaSourceInput).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedDeltaSourceState = 0;
  *(undefined8 *)&(this->ReplicatedDeltaSourceState).field_0x8 = 0;
  (this->ReplicatedDeltaSourceState).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedImportantInput = 0;
  *(undefined8 *)&(this->ReplicatedImportantInput).field_0x8 = 0;
  (this->ReplicatedImportantInput).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedImportantState = 0;
  *(undefined8 *)&(this->ReplicatedImportantState).field_0x8 = 0;
  (this->ReplicatedImportantState).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedInputs = 0;
  *(undefined8 *)&(this->ReplicatedInputs).field_0x8 = 0;
  (this->ReplicatedInputs).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedRemoteInputs = 0;
  *(undefined8 *)&(this->ReplicatedRemoteInputs).field_0x8 = 0;
  (this->ReplicatedRemoteInputs).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedStates = 0;
  *(undefined8 *)&(this->ReplicatedStates).field_0x8 = 0;
  (this->ReplicatedStates).field_0x10 = 0;
  (this->ReplicatedInputCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedInputCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedInputCollection).DataArray.ArrayMax = 0;
  (this->ReplicatedRemoteInputCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedRemoteInputCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedRemoteInputCollection).DataArray.ArrayMax = 0;
  (this->ReplicatedStateCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedStateCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedStateCollection).DataArray.ArrayMax = 0;
  this->ImplementationInterface_External = (INetworkPhysicsInputState_External *)0x0;
  this->bIsUsingLegacyData = false;
  (this->StateHistory).Object = (FBaseRewindHistory *)0x0;
  (this->StateHistory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->InputHistory).Object = (FBaseRewindHistory *)0x0;
  (this->InputHistory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->InputHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
  (this->StateHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
  (this->InputDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
  (this->StateDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
  this->InputsToNetwork_Simulated = 2;
  this->StatesToNetwork = 1;
  (this->DeltaSourceInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaSourceInputs).ArrayNum = 0;
  (this->DeltaSourceInputs).ArrayMax = 0;
  this->LatestAcknowledgedDeltaSourceInputIndex = 0;
  this->LatestCachedDeltaSourceInputIndex = 0;
  this->TimeToSyncDeltaSourceInput = 0.0;
  (this->DeltaSourceStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaSourceStates).ArrayNum = 0;
  (this->DeltaSourceStates).ArrayMax = 0;
  this->LatestAcknowledgedDeltaSourceStateIndex = 0;
  this->LatestCachedDeltaSourceStateIndex = 0;
  this->TimeToSyncDeltaSourceState = 0.0;
  (this->ActorComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ActorComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->PhysicsObject = (FPhysicsObject *)0x0;
  this->bIsRelayingLocalInputs = false;
  this->bStopRelayingLocalInputsDeferred = false;
  this->bCompareStateToTriggerRewind = false;
  this->bCompareStateToTriggerRewindIncludeSimProxies = false;
  this->bCompareInputToTriggerRewind = false;
  this->bEnableUnreliableFlow = true;
  this->bEnableReliableFlow = false;
  this->bValidateDataOnGameThread = false;
  return this;
}

// UNetworkPhysicsComponent @ 1482db030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetworkPhysicsComponent * __thiscall
UNetworkPhysicsComponent::UNetworkPhysicsComponent
          (UNetworkPhysicsComponent *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->InputsToNetwork_Owner = 3;
  this->InputsToNetwork_OwnerDefault = 3;
  this->ImplementationInterface_Internal = (INetworkPhysicsInputState_Internal *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->ReplicatedDeltaSourceInput = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->ReplicatedDeltaSourceInput).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ReplicatedDeltaSourceInput).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedDeltaSourceState = 0;
  *(undefined8 *)&(this->ReplicatedDeltaSourceState).field_0x8 = 0;
  (this->ReplicatedDeltaSourceState).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedImportantInput = 0;
  *(undefined8 *)&(this->ReplicatedImportantInput).field_0x8 = 0;
  (this->ReplicatedImportantInput).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedImportantState = 0;
  *(undefined8 *)&(this->ReplicatedImportantState).field_0x8 = 0;
  (this->ReplicatedImportantState).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedInputs = 0;
  *(undefined8 *)&(this->ReplicatedInputs).field_0x8 = 0;
  (this->ReplicatedInputs).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedRemoteInputs = 0;
  *(undefined8 *)&(this->ReplicatedRemoteInputs).field_0x8 = 0;
  (this->ReplicatedRemoteInputs).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedStates = 0;
  *(undefined8 *)&(this->ReplicatedStates).field_0x8 = 0;
  (this->ReplicatedStates).field_0x10 = 0;
  (this->ReplicatedInputCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedInputCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedInputCollection).DataArray.ArrayMax = 0;
  (this->ReplicatedRemoteInputCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedRemoteInputCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedRemoteInputCollection).DataArray.ArrayMax = 0;
  (this->ReplicatedStateCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedStateCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedStateCollection).DataArray.ArrayMax = 0;
  this->ImplementationInterface_External = (INetworkPhysicsInputState_External *)0x0;
  this->bIsUsingLegacyData = false;
  (this->StateHistory).Object = (FBaseRewindHistory *)0x0;
  (this->StateHistory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->InputHistory).Object = (FBaseRewindHistory *)0x0;
  (this->InputHistory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->InputHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
  (this->StateHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
  (this->InputDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
  (this->StateDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
  this->InputsToNetwork_Simulated = 2;
  this->StatesToNetwork = 1;
  (this->DeltaSourceInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaSourceInputs).ArrayNum = 0;
  (this->DeltaSourceInputs).ArrayMax = 0;
  this->LatestAcknowledgedDeltaSourceInputIndex = 0;
  this->LatestCachedDeltaSourceInputIndex = 0;
  this->TimeToSyncDeltaSourceInput = 0.0;
  (this->DeltaSourceStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaSourceStates).ArrayNum = 0;
  (this->DeltaSourceStates).ArrayMax = 0;
  this->LatestAcknowledgedDeltaSourceStateIndex = 0;
  this->LatestCachedDeltaSourceStateIndex = 0;
  this->TimeToSyncDeltaSourceState = 0.0;
  (this->ActorComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ActorComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->PhysicsObject = (FPhysicsObject *)0x0;
  this->bIsRelayingLocalInputs = false;
  this->bStopRelayingLocalInputsDeferred = false;
  this->bCompareStateToTriggerRewind = false;
  this->bCompareStateToTriggerRewindIncludeSimProxies = false;
  this->bCompareInputToTriggerRewind = false;
  this->bEnableUnreliableFlow = true;
  this->bEnableReliableFlow = false;
  this->bValidateDataOnGameThread = false;
  InitPhysics(this);
  return this;
}

// UNetworkPhysicsComponent @ 1482db210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetworkPhysicsComponent * __thiscall
UNetworkPhysicsComponent::UNetworkPhysicsComponent(UNetworkPhysicsComponent *this)

{
  FObjectInitializer *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar1);
  this->InputsToNetwork_Owner = 3;
  this->InputsToNetwork_OwnerDefault = 3;
  this->ImplementationInterface_Internal = (INetworkPhysicsInputState_Internal *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->ReplicatedDeltaSourceInput = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->ReplicatedDeltaSourceInput).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ReplicatedDeltaSourceInput).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedDeltaSourceState = 0;
  *(undefined8 *)&(this->ReplicatedDeltaSourceState).field_0x8 = 0;
  (this->ReplicatedDeltaSourceState).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedImportantInput = 0;
  *(undefined8 *)&(this->ReplicatedImportantInput).field_0x8 = 0;
  (this->ReplicatedImportantInput).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedImportantState = 0;
  *(undefined8 *)&(this->ReplicatedImportantState).field_0x8 = 0;
  (this->ReplicatedImportantState).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedInputs = 0;
  *(undefined8 *)&(this->ReplicatedInputs).field_0x8 = 0;
  (this->ReplicatedInputs).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedRemoteInputs = 0;
  *(undefined8 *)&(this->ReplicatedRemoteInputs).field_0x8 = 0;
  (this->ReplicatedRemoteInputs).field_0x10 = 0;
  *(undefined8 *)&this->ReplicatedStates = 0;
  *(undefined8 *)&(this->ReplicatedStates).field_0x8 = 0;
  (this->ReplicatedStates).field_0x10 = 0;
  (this->ReplicatedInputCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedInputCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedInputCollection).DataArray.ArrayMax = 0;
  (this->ReplicatedRemoteInputCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedRemoteInputCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedRemoteInputCollection).DataArray.ArrayMax = 0;
  (this->ReplicatedStateCollection).DataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReplicatedStateCollection).DataArray.ArrayNum = 0;
  (this->ReplicatedStateCollection).DataArray.ArrayMax = 0;
  this->ImplementationInterface_External = (INetworkPhysicsInputState_External *)0x0;
  this->bIsUsingLegacyData = false;
  (this->StateHistory).Object = (FBaseRewindHistory *)0x0;
  (this->StateHistory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->InputHistory).Object = (FBaseRewindHistory *)0x0;
  (this->InputHistory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->InputHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
  (this->StateHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
  (this->InputDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
  (this->StateDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
  this->InputsToNetwork_Simulated = 2;
  this->StatesToNetwork = 1;
  (this->DeltaSourceInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaSourceInputs).ArrayNum = 0;
  (this->DeltaSourceInputs).ArrayMax = 0;
  this->LatestAcknowledgedDeltaSourceInputIndex = 0;
  this->LatestCachedDeltaSourceInputIndex = 0;
  this->TimeToSyncDeltaSourceInput = 0.0;
  (this->DeltaSourceStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaSourceStates).ArrayNum = 0;
  (this->DeltaSourceStates).ArrayMax = 0;
  this->LatestAcknowledgedDeltaSourceStateIndex = 0;
  this->LatestCachedDeltaSourceStateIndex = 0;
  this->TimeToSyncDeltaSourceState = 0.0;
  (this->ActorComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ActorComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->PhysicsObject = (FPhysicsObject *)0x0;
  this->bIsRelayingLocalInputs = false;
  this->bStopRelayingLocalInputsDeferred = false;
  this->bCompareStateToTriggerRewind = false;
  this->bCompareStateToTriggerRewindIncludeSimProxies = false;
  this->bCompareInputToTriggerRewind = false;
  this->bEnableUnreliableFlow = true;
  this->bEnableReliableFlow = false;
  this->bValidateDataOnGameThread = false;
  InitPhysics(this);
  return this;
}

// ~UNetworkPhysicsComponent @ 1482ddd20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetworkPhysicsComponent::~UNetworkPhysicsComponent(UNetworkPhysicsComponent *this)

{
  FScriptContainerElement *pFVar1;
  FNetworkPhysicsData *pFVar2;
  FNetworkPhysicsDataHelper *pFVar3;
  undefined8 *puVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TUniquePtr<FNetworkPhysicsData,TDefaultDelete<FNetworkPhysicsData>_>,int>
            ((TUniquePtr<FNetworkPhysicsData,TDefaultDelete<FNetworkPhysicsData>_> *)
             (this->DeltaSourceStates).AllocatorInstance.Data,(this->DeltaSourceStates).ArrayNum);
  pFVar1 = (this->DeltaSourceStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FNetworkPhysicsData,TDefaultDelete<FNetworkPhysicsData>_>,int>
            ((TUniquePtr<FNetworkPhysicsData,TDefaultDelete<FNetworkPhysicsData>_> *)
             (this->DeltaSourceInputs).AllocatorInstance.Data,(this->DeltaSourceInputs).ArrayNum);
  pFVar1 = (this->DeltaSourceInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->StateDataDefault_Legacy).Ptr;
  if (pFVar2 != (FNetworkPhysicsData *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pFVar2 = (this->InputDataDefault_Legacy).Ptr;
  if (pFVar2 != (FNetworkPhysicsData *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pFVar3 = (this->StateHelper).Ptr;
  if (pFVar3 != (FNetworkPhysicsDataHelper *)0x0) {
    (**(code **)*pFVar3)(pFVar3,1);
  }
  pFVar3 = (this->InputHelper).Ptr;
  if (pFVar3 != (FNetworkPhysicsDataHelper *)0x0) {
    (**(code **)*pFVar3)(pFVar3,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputHistory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StateHistory).SharedReferenceCount.ReferenceController);
  DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>
            ((TInstancedStruct<FNetworkPhysicsPayload> *)
             (this->ReplicatedStateCollection).DataArray.AllocatorInstance.Data,
             (this->ReplicatedStateCollection).DataArray.ArrayNum);
  pFVar1 = (this->ReplicatedStateCollection).DataArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>
            ((TInstancedStruct<FNetworkPhysicsPayload> *)
             (this->ReplicatedRemoteInputCollection).DataArray.AllocatorInstance.Data,
             (this->ReplicatedRemoteInputCollection).DataArray.ArrayNum);
  pFVar1 = (this->ReplicatedRemoteInputCollection).DataArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>
            ((TInstancedStruct<FNetworkPhysicsPayload> *)
             (this->ReplicatedInputCollection).DataArray.AllocatorInstance.Data,
             (this->ReplicatedInputCollection).DataArray.ArrayNum);
  pFVar1 = (this->ReplicatedInputCollection).DataArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  puVar4 = *(undefined8 **)&this->ReplicatedStates;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)&this->ReplicatedRemoteInputs;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)&this->ReplicatedInputs;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)&this->ReplicatedImportantState;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)&this->ReplicatedImportantInput;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)&this->ReplicatedDeltaSourceState;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)&this->ReplicatedDeltaSourceInput;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// operator() @ 1482defa0

void __thiscall
`UNetworkPhysicsComponent::NetworkMarshaledData'::__l2::<lambda_1>::operator()
          (void *this,
          TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((**(char **)this != '\0') && (**(char **)((longlong)this + 8) == '\0')) {
    lVar1 = *(longlong *)((longlong)this + 0x10);
    iVar4 = (**(code **)((longlong)*param_1->Ptr + 0xe8))();
    iVar6 = (*(int *)(lVar1 + 0x214) + 1) % 10;
    iVar5 = -iVar6;
    if (iVar5 < 0) {
      iVar5 = iVar6;
    }
    iVar6 = -(iVar4 % 10);
    if (iVar6 < 0) {
      iVar6 = iVar4 % 10;
    }
    if (iVar6 == iVar5) {
      plVar2 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0xc0);
      (**(code **)(*plVar2 + 0x70))(plVar2,CONCAT71((uint7)(uint3)((uint)(iVar4 / 10) >> 8),1));
      cVar3 = (**(code **)((longlong)*param_1->Ptr + 0x78))
                        (param_1->Ptr,*(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0xc0),1
                        );
      if (cVar3 != '\0') {
        **(undefined1 **)((longlong)this + 8) = 1;
        *(double *)(*(longlong *)((longlong)this + 0x10) + 0x218) =
             (double)PhysicsReplicationCVars::ResimulationCVars::TimeToSyncStatefulDeltaSource +
             *(double *)(**(longlong **)((longlong)this + 0x18) + 0x908);
        UNetworkPhysicsComponent::AddDeltaSourceInput
                  (*(UNetworkPhysicsComponent **)((longlong)this + 0x10));
      }
    }
  }
  return;
}

// operator() @ 1482e1a90

void __thiscall
`UNetworkPhysicsComponent::UninitializeComponent'::__l17::<lambda_1>::operator()(void *this)

{
  FAsyncNetworkPhysicsComponent *this_00;
  longlong lVar1;
  FDelegateHandle FVar2;
  
  this_00 = *(FAsyncNetworkPhysicsComponent **)this;
  if (this_00 == (FAsyncNetworkPhysicsComponent *)0x0) {
    return;
  }
  if ((this_00->_padding_ != 0) && (lVar1 = *(longlong *)(this_00->_padding_ + 0x240), lVar1 != 0))
  {
    FVar2.ID = (this_00->DelegateOnPreProcessInputs_Internal).ID;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x10),FVar2);
    }
    FVar2.ID = (this_00->DelegateOnPostProcessInputs_Internal).ID;
    (this_00->DelegateOnPreProcessInputs_Internal).ID = 0;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x30),FVar2);
    }
    (this_00->DelegateOnPostProcessInputs_Internal).ID = 0;
  }
  FAsyncNetworkPhysicsComponent::UnregisterDataHistoryFromRewindData(this_00);
  return;
}

// operator() @ 1482e1b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UNetworkPhysicsComponent::InitializeComponent'::__l32::<lambda_1>::operator()(void *this)

{
  pmf_75c59a28 pVar1;
  longlong lVar2;
  char cVar3;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar4;
  FDelegateHandle FVar5;
  
  pVar1 = *(pmf_75c59a28 *)this;
  if ((pVar1 != (pmf_75c59a28)0x0) && (lVar2 = *(longlong *)((longlong)pVar1 + 0x18), lVar2 != 0)) {
    this_00 = FChaosSolversModule::GetModule();
    pIVar4 = FChaosSolversModule::GetSettingsProvider(this_00);
    cVar3 = (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    if (cVar3 == '\0') {
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x240);
      if (lVar2 != 0) {
        FVar5 = TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
                AddRaw<FAsyncNetworkPhysicsComponent>
                          ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>
                            *)(lVar2 + 0x10),(FAsyncNetworkPhysicsComponent *)&stack0x00000008,pVar1
                          );
        *(undefined8 *)((longlong)pVar1 + 0x1b0) = *(undefined8 *)FVar5.ID;
        FVar5 = TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
                AddRaw<FAsyncNetworkPhysicsComponent>
                          ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>
                            *)(lVar2 + 0x30),(FAsyncNetworkPhysicsComponent *)&stack0x00000008,pVar1
                          );
        *(undefined8 *)((longlong)pVar1 + 0x1b8) = *(undefined8 *)FVar5.ID;
        return;
      }
    }
  }
  return;
}

// operator() @ 1482e1ef0

void __thiscall
`UNetworkPhysicsComponent::NetworkMarshaledData'::__l2::<lambda_2>::operator()
          (void *this,
          TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((**(char **)this != '\0') && (**(char **)((longlong)this + 8) == '\0')) {
    lVar1 = *(longlong *)((longlong)this + 0x10);
    iVar4 = (**(code **)((longlong)*param_1->Ptr + 0xe8))();
    iVar6 = (*(int *)(lVar1 + 0x234) + 1) % 10;
    iVar5 = -iVar6;
    if (iVar5 < 0) {
      iVar5 = iVar6;
    }
    iVar6 = -(iVar4 % 10);
    if (iVar6 < 0) {
      iVar6 = iVar4 % 10;
    }
    if (iVar6 == iVar5) {
      plVar2 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0xd8);
      (**(code **)(*plVar2 + 0x70))(plVar2,CONCAT71((uint7)(uint3)((uint)(iVar4 / 10) >> 8),1));
      cVar3 = (**(code **)((longlong)*param_1->Ptr + 0x78))
                        (param_1->Ptr,*(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0xd8),1
                        );
      if (cVar3 != '\0') {
        **(undefined1 **)((longlong)this + 8) = 1;
        *(double *)(*(longlong *)((longlong)this + 0x10) + 0x238) =
             (double)PhysicsReplicationCVars::ResimulationCVars::TimeToSyncStatefulDeltaSource +
             *(double *)(**(longlong **)((longlong)this + 0x18) + 0x908);
        UNetworkPhysicsComponent::AddDeltaSourceState
                  (*(UNetworkPhysicsComponent **)((longlong)this + 0x10));
      }
    }
  }
  return;
}

// AddDataHistory @ 1482e6400

void __thiscall UNetworkPhysicsComponent::AddDataHistory(UNetworkPhysicsComponent *this)

{
  FSimCallbackInput *pFVar1;
  FSimCallbackInput local_18;
  
  if (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) {
    pFVar1 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if ((pFVar1 != (FSimCallbackInput *)0x0) && (&local_18 != pFVar1 + 9)) {
      *(undefined2 *)&pFVar1[9]._padding_ = 0x101;
    }
  }
  return;
}

// AddDeltaSourceInput @ 1482e6440

void __thiscall UNetworkPhysicsComponent::AddDeltaSourceInput(UNetworkPhysicsComponent *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  UFunction *pUVar10;
  uint uVar11;
  undefined4 local_res8 [2];
  
  iVar7 = (**(code **)(**(longlong **)&this->ReplicatedDeltaSourceInput + 0xe8))();
  uVar11 = -(iVar7 % 10);
  if ((int)uVar11 < 0) {
    uVar11 = iVar7 % 10;
  }
  if ((this->DeltaSourceInputs).ArrayNum < (int)uVar11) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index <= DeltaSourceInputs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                       ,0x3bc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->DeltaSourceInputs).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  plVar1 = *(longlong **)&this->ReplicatedDeltaSourceInput;
  lVar2 = *plVar1;
  lVar3 = *(longlong *)
           ((this->DeltaSourceInputs).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
  uVar9 = (**(code **)(lVar2 + 0xe8))(plVar1);
  cVar6 = (**(code **)(lVar2 + 0x48))(plVar1,uVar9,0,lVar3,1);
  if (cVar6 != '\0') {
    bVar5 = HasServerWorld(this);
    if (bVar5) {
      bVar5 = IsLocallyControlled(this);
      if (bVar5) {
        this->LatestAcknowledgedDeltaSourceInputIndex = uVar11;
      }
    }
    else {
      this->LatestAcknowledgedDeltaSourceInputIndex = uVar11;
      bVar5 = IsLocallyControlled(this);
      if (bVar5) {
        local_res8[0] = *(undefined4 *)(lVar3 + 8);
        pUVar10 = UObject::FindFunctionChecked
                            ((UObject *)this,
                             NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceInputFrame);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar10,local_res8);
      }
    }
    this->LatestCachedDeltaSourceInputIndex = uVar11;
  }
  return;
}

// AddDeltaSourceState @ 1482e65c0

void __thiscall UNetworkPhysicsComponent::AddDeltaSourceState(UNetworkPhysicsComponent *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  UFunction *pUVar10;
  uint uVar11;
  undefined4 local_res8 [2];
  
  iVar7 = (**(code **)(**(longlong **)&this->ReplicatedDeltaSourceState + 0xe8))();
  uVar11 = -(iVar7 % 10);
  if ((int)uVar11 < 0) {
    uVar11 = iVar7 % 10;
  }
  if ((this->DeltaSourceStates).ArrayNum < (int)uVar11) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index <= DeltaSourceStates.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                       ,0x40c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->DeltaSourceStates).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  plVar1 = *(longlong **)&this->ReplicatedDeltaSourceState;
  lVar2 = *plVar1;
  lVar3 = *(longlong *)
           ((this->DeltaSourceStates).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
  uVar9 = (**(code **)(lVar2 + 0xe8))(plVar1);
  cVar6 = (**(code **)(lVar2 + 0x48))(plVar1,uVar9,0,lVar3,1);
  if (cVar6 != '\0') {
    bVar5 = HasServerWorld(this);
    if (bVar5) {
      bVar5 = IsLocallyControlled(this);
      if (bVar5) {
        this->LatestAcknowledgedDeltaSourceStateIndex = uVar11;
      }
    }
    else {
      this->LatestAcknowledgedDeltaSourceStateIndex = uVar11;
      bVar5 = IsLocallyControlled(this);
      if (bVar5) {
        local_res8[0] = *(undefined4 *)(lVar3 + 8);
        pUVar10 = UObject::FindFunctionChecked
                            ((UObject *)this,
                             NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceStateFrame);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar10,local_res8);
      }
    }
    this->LatestCachedDeltaSourceStateIndex = uVar11;
  }
  return;
}

// BeginPlay @ 1482e9e60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetworkPhysicsComponent::BeginPlay(UNetworkPhysicsComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  UpdateAsyncComponent(this,true);
  return;
}

// CreateAsyncDataHistory @ 1482f0ae0

void __thiscall UNetworkPhysicsComponent::CreateAsyncDataHistory(UNetworkPhysicsComponent *this)

{
  FWeakObjectPtr *pFVar1;
  TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *this_00;
  INetworkPhysicsInputState_Internal *pIVar2;
  FNetworkPhysicsDataHelper *pFVar3;
  bool bVar4;
  FSimCallbackInput *pFVar5;
  TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_> *pTVar6;
  undefined8 *local_res8;
  
  if ((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
     (pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal),
     pFVar5 != (FSimCallbackInput *)0x0)) {
    this_00 = &this->ActorComponent;
    bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if ((bVar4) &&
       (pFVar1 = (FWeakObjectPtr *)((longlong)&pFVar5[3]._padding_ + 4), &this_00->WeakPtr != pFVar1
       )) {
      *pFVar1 = this_00->WeakPtr;
      pFVar5[3].field_0xc = 1;
    }
    pIVar2 = this->ImplementationInterface_Internal;
    if ((pIVar2 != (INetworkPhysicsInputState_Internal *)0x0) &&
       ((FSimCallbackInput *)&this->ImplementationInterface_Internal != pFVar5 + 4)) {
      pFVar5[4]._padding_ = (longlong)pIVar2;
      *(undefined1 *)&pFVar5[4].NumSteps = 1;
    }
    pFVar3 = (this->InputHelper).Ptr;
    if (pFVar3 != (FNetworkPhysicsDataHelper *)0x0) {
      pTVar6 = (TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_> *)
               (**(code **)((longlong)*pFVar3 + 8))(pFVar3,&local_res8);
      TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>::
      operator=((TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>
                 *)(pFVar5 + 7),pTVar6);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    pFVar3 = (this->StateHelper).Ptr;
    if (pFVar3 != (FNetworkPhysicsDataHelper *)0x0) {
      pTVar6 = (TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_> *)
               (**(code **)((longlong)*pFVar3 + 8))(pFVar3,&local_res8);
      TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>::
      operator=((TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>
                 *)(pFVar5 + 8),pTVar6);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  return;
}

// GetController @ 148308580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AController * __thiscall UNetworkPhysicsComponent::GetController(UNetworkPhysicsComponent *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  AController *pAVar7;
  UClass *pUVar8;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  bVar4 = IsInGameThread();
  if ((((!bVar4) && (*(int *)&pFVar6[2].field_0x4 < 1)) || (*(char *)(pFVar6 + 3) != '\0')) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3522308889972310313>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x129,"IsInGameThreadContext()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pAVar7 = (AController *)(*pcVar3)();
    return pAVar7;
  }
  pAVar7 = (AController *)this->_padding_;
  if (pAVar7 != (AController *)0x0) {
    pUVar8 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      return pAVar7;
    }
  }
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar8 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      if (*(AController **)(lVar2 + 0x2f0) != (AController *)0x0) {
        return *(AController **)(lVar2 + 0x2f0);
      }
      pAVar7 = *(AController **)(lVar2 + 0x158);
      if (pAVar7 != (AController *)0x0) {
        pUVar8 = Z_Construct_UClass_AController_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if ((iVar1 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar8->_padding_)) {
          return pAVar7;
        }
      }
    }
  }
  return (AController *)0x0;
}

// GetDeltaSourceInput @ 148308930

FNetworkPhysicsData * __thiscall
UNetworkPhysicsComponent::GetDeltaSourceInput
          (UNetworkPhysicsComponent *this,int param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNetworkPhysicsData *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  if (param_1 == -1) {
    uVar7 = this->LatestAcknowledgedDeltaSourceInputIndex;
    lVar8 = (longlong)(int)uVar7;
    uVar4 = 0;
    if ((int)uVar7 < (this->DeltaSourceInputs).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
LAB_1483089b2:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNetworkPhysicsData *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  else {
    if (param_1 == -2) {
      pFVar6 = (FScriptContainerElement *)&this->InputDataDefault_Legacy;
      goto LAB_148308ab5;
    }
    iVar1 = (this->DeltaSourceInputs).ArrayNum;
    if (!param_2) {
      uVar7 = -(param_1 % 10);
      if ((int)uVar7 < 0) {
        uVar7 = param_1 % 10;
      }
      if (iVar1 <= (int)uVar7) {
        return (FNetworkPhysicsData *)0x0;
      }
      if (((int)uVar7 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNetworkPhysicsData *)(*pcVar2)();
        return pFVar5;
      }
      if (*(int *)(*(longlong *)
                    ((this->DeltaSourceInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) +
                  8) != param_1) {
        return (FNetworkPhysicsData *)0x0;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->DeltaSourceInputs).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNetworkPhysicsData *)(*pcVar2)();
        return pFVar5;
      }
      pFVar6 = (this->DeltaSourceInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
      goto LAB_148308ab5;
    }
    if (iVar1 <= param_1) {
      return (FNetworkPhysicsData *)0x0;
    }
    if (param_1 < 0) goto LAB_1483089b2;
  }
  pFVar6 = (this->DeltaSourceInputs).AllocatorInstance.Data + lVar8 * 8;
LAB_148308ab5:
  if (pFVar6 == (FScriptContainerElement *)0x0) {
    return (FNetworkPhysicsData *)0x0;
  }
  return *(FNetworkPhysicsData **)&pFVar6->field_0x0;
}

// GetDeltaSourceState @ 148308af0

FNetworkPhysicsData * __thiscall
UNetworkPhysicsComponent::GetDeltaSourceState
          (UNetworkPhysicsComponent *this,int param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNetworkPhysicsData *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  if (param_1 == -1) {
    uVar7 = this->LatestAcknowledgedDeltaSourceStateIndex;
    lVar8 = (longlong)(int)uVar7;
    uVar4 = 0;
    if ((int)uVar7 < (this->DeltaSourceStates).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
LAB_148308b72:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNetworkPhysicsData *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  else {
    if (param_1 == -2) {
      pFVar6 = (FScriptContainerElement *)&this->StateDataDefault_Legacy;
      goto LAB_148308c75;
    }
    iVar1 = (this->DeltaSourceStates).ArrayNum;
    if (!param_2) {
      uVar7 = -(param_1 % 10);
      if ((int)uVar7 < 0) {
        uVar7 = param_1 % 10;
      }
      if (iVar1 <= (int)uVar7) {
        return (FNetworkPhysicsData *)0x0;
      }
      if (((int)uVar7 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNetworkPhysicsData *)(*pcVar2)();
        return pFVar5;
      }
      if (*(int *)(*(longlong *)
                    ((this->DeltaSourceStates).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) +
                  8) != param_1) {
        return (FNetworkPhysicsData *)0x0;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->DeltaSourceStates).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNetworkPhysicsData *)(*pcVar2)();
        return pFVar5;
      }
      pFVar6 = (this->DeltaSourceStates).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
      goto LAB_148308c75;
    }
    if (iVar1 <= param_1) {
      return (FNetworkPhysicsData *)0x0;
    }
    if (param_1 < 0) goto LAB_148308b72;
  }
  pFVar6 = (this->DeltaSourceStates).AllocatorInstance.Data + lVar8 * 8;
LAB_148308c75:
  if (pFVar6 == (FScriptContainerElement *)0x0) {
    return (FNetworkPhysicsData *)0x0;
  }
  return *(FNetworkPhysicsData **)&pFVar6->field_0x0;
}

// GetInputHistory_Internal @ 14830a9a0

TSharedPtr<Chaos::FBaseRewindHistory,1> * __thiscall
UNetworkPhysicsComponent::GetInputHistory_Internal(UNetworkPhysicsComponent *this)

{
  TSharedPtr<Chaos::FBaseRewindHistory,1> *pTVar1;
  
  pTVar1 = &this->InputHistory;
  if (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) {
    pTVar1 = &this->NetworkPhysicsComponent_Internal->InputHistory;
  }
  return pTVar1;
}

// GetLifetimeReplicatedProps @ 14830ab90

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
UNetworkPhysicsComponent::GetLifetimeReplicatedProps
          (UNetworkPhysicsComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18;
  FRepPropertyDescriptor local_78;
  FDoRepLifetimeParams local_68;
  FDoRepLifetimeParams local_50;
  FDoRepLifetimeParams local_38;
  FDoRepLifetimeParams local_20;
  
  UActorComponent::GetLifetimeReplicatedProps((UActorComponent *)this,param_1);
  local_50.Condition = COND_OwnerOnly;
  local_50.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_68.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_68.Condition = COND_None;
  local_20.bIsPushBased = false;
  local_20.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_50.RepNotifyCondition = REPNOTIFY_Always;
  local_50.bIsPushBased = true;
  local_38.Condition = COND_SkipOwner;
  local_38.RepNotifyCondition = REPNOTIFY_Always;
  local_38.bIsPushBased = true;
  local_68.RepNotifyCondition = REPNOTIFY_Always;
  local_68.bIsPushBased = true;
  local_20.Condition = COND_OwnerOnly;
  local_20.RepNotifyCondition = REPNOTIFY_OnChanged;
  pFVar2 = ::FName::FName(&local_res18,0x15,L"InputsToNetwork_Owner",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_78);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_78.PropertyName != (wchar_t *)0x0) {
      FMemory::Free(local_78.PropertyName);
    }
  }
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_20);
  local_78.RepIndex = 2;
  local_78.PropertyName = L"ReplicatedDeltaSourceInput";
  local_78.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_78,param_1,&local_68);
  local_78.RepIndex = 3;
  local_78.PropertyName = L"ReplicatedDeltaSourceState";
  local_78.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_78,param_1,&local_68);
  local_78.RepIndex = 4;
  local_78.PropertyName = L"ReplicatedInputs";
  local_78.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_78,param_1,&local_50);
  local_78.RepIndex = 5;
  local_78.PropertyName = L"ReplicatedRemoteInputs";
  local_78.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_78,param_1,&local_38);
  local_78.RepIndex = 6;
  local_78.PropertyName = L"ReplicatedStates";
  local_78.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_78,param_1,&local_68);
  local_78.RepIndex = 7;
  local_78.PropertyName = L"ReplicatedInputCollection";
  local_78.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_78,param_1,&local_50);
  local_78.RepIndex = 8;
  local_78.PropertyName = L"ReplicatedRemoteInputCollection";
  local_78.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_78,param_1,&local_38);
  local_78.RepIndex = 9;
  local_78.PropertyName = L"ReplicatedStateCollection";
  local_78.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_78,param_1,&local_68);
  return;
}

// GetPlayerController @ 14830bac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
UNetworkPhysicsComponent::GetPlayerController(UNetworkPhysicsComponent *this)

{
  int iVar1;
  APlayerController *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (APlayerController *)(**(code **)(this->_padding_ + 0x538))();
  if (pAVar2 != (APlayerController *)0x0) {
    pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (APlayerController *)0x0;
}

// GetPrivateStaticClass @ 14830bf00

UClass * __cdecl UNetworkPhysicsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsComponent",
               &Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton,
               StaticRegisterNativesUNetworkPhysicsComponent,600,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkPhysicsComponent>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsComponent.InnerSingleton;
}

// GetStateHistory_Internal @ 14830dad0

TSharedPtr<Chaos::FBaseRewindHistory,1> * __thiscall
UNetworkPhysicsComponent::GetStateHistory_Internal(UNetworkPhysicsComponent *this)

{
  TSharedPtr<Chaos::FBaseRewindHistory,1> *pTVar1;
  
  pTVar1 = &this->StateHistory;
  if (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) {
    pTVar1 = &this->NetworkPhysicsComponent_Internal->StateHistory;
  }
  return pTVar1;
}

// HasServerWorld @ 14830ecd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetworkPhysicsComponent::HasServerWorld(UNetworkPhysicsComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ENetMode EVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  UWorld *this_00;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  bVar2 = IsInGameThread();
  if (((!bVar2) && (*(int *)&pFVar6[2].field_0x4 < 1)) || (*(char *)(pFVar6 + 3) != '\0')) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->_padding_ == 0) {
    UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  EVar4 = UWorld::InternalGetNetMode(this_00);
  return EVar4 == NM_ListenServer;
}

// InitPhysics @ 14830f3c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetworkPhysicsComponent::InitPhysics(UNetworkPhysicsComponent *this)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  longlong *plVar5;
  ushort uVar6;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"np2.Resim.RedundantInputs",1);
  if (plVar5 != (longlong *)0x0) {
    sVar4 = (**(code **)(*plVar5 + 200))(plVar5);
    uVar6 = 1;
    if (1 < (ushort)(sVar4 + 1U)) {
      uVar6 = sVar4 + 1U;
    }
    this->InputsToNetwork_OwnerDefault = uVar6;
    this->InputsToNetwork_Owner = uVar6;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"np2.Resim.RedundantRemoteInputs",1);
  if (plVar5 != (longlong *)0x0) {
    sVar4 = (**(code **)(*plVar5 + 200))(plVar5);
    uVar6 = 1;
    if (1 < (ushort)(sVar4 + 1U)) {
      uVar6 = sVar4 + 1U;
    }
    this->InputsToNetwork_Simulated = uVar6;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"np2.Resim.RedundantStates",1);
  if (plVar5 != (longlong *)0x0) {
    sVar4 = (**(code **)(*plVar5 + 200))(plVar5);
    uVar6 = 1;
    if (1 < (ushort)(sVar4 + 1U)) {
      uVar6 = sVar4 + 1U;
    }
    this->StatesToNetwork = uVar6;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"np2.Resim.CompareStateToTriggerRewind",1);
  if (plVar5 != (longlong *)0x0) {
    bVar3 = (bool)(**(code **)(*plVar5 + 0xc0))(plVar5);
    this->bCompareStateToTriggerRewind = bVar3;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,
                      L"np2.Resim.CompareStateToTriggerRewind.IncludeSimProxies",1);
  if (plVar5 != (longlong *)0x0) {
    bVar3 = (bool)(**(code **)(*plVar5 + 0xc0))(plVar5);
    this->bCompareStateToTriggerRewindIncludeSimProxies = bVar3;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"np2.Resim.CompareInputToTriggerRewind",1);
  if (plVar5 != (longlong *)0x0) {
    bVar3 = (bool)(**(code **)(*plVar5 + 0xc0))(plVar5);
    this->bCompareInputToTriggerRewind = bVar3;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  *(undefined1 *)&this->_padding_ = 4;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  return;
}

// InitializeComponent @ 14830f770

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

void __thiscall UNetworkPhysicsComponent::InitializeComponent(UNetworkPhysicsComponent *this)

{
  FWeakObjectPtr *pFVar1;
  TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *this_00;
  int iVar2;
  AActor *this_01;
  code *pcVar3;
  longlong *plVar4;
  USceneComponent *pUVar5;
  FPhysicsSolverBase *this_02;
  INetworkPhysicsInputState_Internal *pIVar6;
  FNetworkPhysicsDataHelper *pFVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  longlong lVar11;
  UClass *pUVar12;
  FPhysicsObject *pFVar13;
  FSimCallbackInput *pFVar14;
  UWorld *pUVar15;
  FAsyncNetworkPhysicsComponent *pFVar16;
  FAsyncNetworkPhysicsComponent *pFVar17;
  TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_> *pTVar18;
  FNetworkPhysicsSettingsData *pFVar19;
  undefined ***pppuVar20;
  FAsyncNetworkPhysicsComponent *pFVar21;
  ushort uVar22;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  ulonglong local_84;
  undefined8 *local_78;
  UClass *local_70;
  undefined8 *local_68;
  undefined1 local_60 [24];
  undefined **local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar21 = (FAsyncNetworkPhysicsComponent *)0x0;
  local_84 = local_84 & 0xffffffff00000000;
  UActorComponent::InitializeComponent((UActorComponent *)this);
  this_01 = (AActor *)this->_padding_;
  this->bEnableUnreliableFlow = PhysicsReplicationCVars::ResimulationCVars::bEnableUnreliableFlow;
  this->bEnableReliableFlow = PhysicsReplicationCVars::ResimulationCVars::bEnableReliableFlow;
  this->bValidateDataOnGameThread =
       PhysicsReplicationCVars::ResimulationCVars::bValidateDataOnGameThread;
  if (this_01 != (AActor *)0x0) {
    AActor::SetCallPreReplication(this_01,true);
    pcVar3 = *(code **)(this_01->_padding_ + 0x738);
    local_70 = UNetworkPhysicsSettingsComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_70);
    }
    lVar11 = (*pcVar3)(this_01,&local_70);
    if (lVar11 != 0) {
      if (*(longlong *)(lVar11 + 0xc0) == 0) {
        pFVar19 = &UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default;
      }
      else {
        pFVar19 = (FNetworkPhysicsSettingsData *)(*(longlong *)(lVar11 + 0xc0) + 0x38);
      }
      uVar9 = (ushort)PhysicsReplicationCVars::ResimulationCVars::RedundantInputs;
      if ((pFVar19->NetworkPhysicsComponentSettings).bOverrideRedundantInputs != 0) {
        uVar9 = (pFVar19->NetworkPhysicsComponentSettings).RedundantInputs;
      }
      uVar22 = 1;
      if (1 < (ushort)(uVar9 + 1)) {
        uVar22 = uVar9 + 1;
      }
      this->InputsToNetwork_OwnerDefault = uVar22;
      this->InputsToNetwork_Owner = uVar22;
      uVar9 = (ushort)PhysicsReplicationCVars::ResimulationCVars::RedundantRemoteInputs;
      if ((pFVar19->NetworkPhysicsComponentSettings).bOverrideRedundantRemoteInputs != 0) {
        uVar9 = (pFVar19->NetworkPhysicsComponentSettings).RedundantRemoteInputs;
      }
      uVar10 = 1;
      if (1 < (ushort)(uVar9 + 1)) {
        uVar10 = uVar9 + 1;
      }
      this->InputsToNetwork_Simulated = uVar10;
      uVar9 = (ushort)PhysicsReplicationCVars::ResimulationCVars::RedundantStates;
      if ((pFVar19->NetworkPhysicsComponentSettings).bOverrideRedundantStates != 0) {
        uVar9 = (pFVar19->NetworkPhysicsComponentSettings).RedundantStates;
      }
      uVar10 = 1;
      if (1 < (ushort)(uVar9 + 1)) {
        uVar10 = uVar9 + 1;
      }
      this->StatesToNetwork = uVar10;
      bVar8 = PhysicsReplicationCVars::ResimulationCVars::bEnableUnreliableFlow;
      if ((pFVar19->NetworkPhysicsComponentSettings).bOverrideEnableUnreliableFlow != 0) {
        bVar8 = (pFVar19->NetworkPhysicsComponentSettings).bEnableUnreliableFlow;
      }
      this->bEnableUnreliableFlow = bVar8;
      bVar8 = PhysicsReplicationCVars::ResimulationCVars::bEnableReliableFlow;
      if ((pFVar19->NetworkPhysicsComponentSettings).bOverrideEnableReliableFlow != 0) {
        bVar8 = (pFVar19->NetworkPhysicsComponentSettings).bEnableReliableFlow;
      }
      this->bEnableReliableFlow = bVar8;
      bVar8 = PhysicsReplicationCVars::ResimulationCVars::bValidateDataOnGameThread;
      if ((&pFVar19->NetworkPhysicsComponentSettings)->bOverrideValidateDataOnGameThread != 0) {
        bVar8 = (pFVar19->NetworkPhysicsComponentSettings).bValidateDataOnGameThread;
      }
      plVar4 = *(longlong **)&this->ReplicatedInputs;
      this->bValidateDataOnGameThread = bVar8;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x108))(plVar4,uVar22,1);
      }
      plVar4 = *(longlong **)&this->ReplicatedRemoteInputs;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x108))(plVar4,this->InputsToNetwork_Simulated,1);
      }
      plVar4 = *(longlong **)&this->ReplicatedStates;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x108))(plVar4,this->StatesToNetwork,1);
      }
    }
    if ((this->PhysicsObject == (FPhysicsObject *)0x0) &&
       (pUVar5 = (this_01->RootComponent).field0_0x0.DebugPtr, pUVar5 != (USceneComponent *)0x0)) {
      pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar12->_padding_;
      if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar12->_padding_)) {
        local_84 = 0;
        pFVar13 = (FPhysicsObject *)
                  (**(code **)(pUVar5[1]._padding_ + 0x18))(&pUVar5[1]._padding_,&local_84);
        if (this->PhysicsObject != pFVar13) {
          this->PhysicsObject = pFVar13;
          if (((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
              (pFVar14 = Chaos::ISimCallbackObject::GetProducerInputData_External
                                   ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal),
              pFVar14 != (FSimCallbackInput *)0x0)) &&
             ((FSimCallbackInput *)local_60 != pFVar14 + 5)) {
            pFVar14[5]._padding_ = (longlong)pFVar13;
            *(undefined1 *)&pFVar14[5].NumSteps = 1;
          }
        }
      }
    }
  }
  pUVar15 = (UWorld *)this->_padding_;
  if (((pUVar15 != (UWorld *)0x0) ||
      (pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar15 != (UWorld *)0x0)) &&
     ((pUVar15->PhysicsScene != (FPhysScene_Chaos *)0x0 &&
      (this_02 = (FPhysicsSolverBase *)pUVar15->PhysicsScene->_padding_,
      this_02 != (FPhysicsSolverBase *)0x0)))) {
    pFVar16 = ::operator_new(0x1c0);
    pFVar17 = pFVar21;
    if (pFVar16 != (FAsyncNetworkPhysicsComponent *)0x0) {
      pFVar17 = FAsyncNetworkPhysicsComponent::FAsyncNetworkPhysicsComponent(pFVar16);
    }
    if ((pFVar17->_padding_ & 0x100) != 0) {
      this_02->bSolverHasFrozenGameThreadCallbacks = true;
    }
    Chaos::FPhysicsSolverBase::RegisterSimCallbackObject_External
              (this_02,(ISimCallbackObject *)pFVar17);
    this->NetworkPhysicsComponent_Internal = pFVar17;
    pFVar17->PhysicsObject = this->PhysicsObject;
    this->NetworkPhysicsComponent_Internal->InputsToNetwork_OwnerDefault =
         this->InputsToNetwork_OwnerDefault;
    this->NetworkPhysicsComponent_Internal->InputsToNetwork_Simulated =
         this->InputsToNetwork_Simulated;
    this->NetworkPhysicsComponent_Internal->StatesToNetwork = this->StatesToNetwork;
    this->NetworkPhysicsComponent_Internal->bCompareStateToTriggerRewind =
         this->bCompareStateToTriggerRewind;
    this->NetworkPhysicsComponent_Internal->bCompareStateToTriggerRewindIncludeSimProxies =
         this->bCompareStateToTriggerRewindIncludeSimProxies;
    this->NetworkPhysicsComponent_Internal->bCompareInputToTriggerRewind =
         this->bCompareInputToTriggerRewind;
    if ((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
       (pFVar14 = Chaos::ISimCallbackObject::GetProducerInputData_External
                            ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal),
       pFVar14 != (FSimCallbackInput *)0x0)) {
      this_00 = &this->ActorComponent;
      bVar8 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if ((bVar8) &&
         (pFVar1 = (FWeakObjectPtr *)((longlong)&pFVar14[3]._padding_ + 4),
         &this_00->WeakPtr != pFVar1)) {
        *pFVar1 = this_00->WeakPtr;
        pFVar14[3].field_0xc = 1;
      }
      pIVar6 = this->ImplementationInterface_Internal;
      if ((pIVar6 != (INetworkPhysicsInputState_Internal *)0x0) &&
         ((FSimCallbackInput *)&this->ImplementationInterface_Internal != pFVar14 + 4)) {
        pFVar14[4]._padding_ = (longlong)pIVar6;
        *(undefined1 *)&pFVar14[4].NumSteps = 1;
      }
      pFVar7 = (this->InputHelper).Ptr;
      if (pFVar7 != (FNetworkPhysicsDataHelper *)0x0) {
        pTVar18 = (TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>
                   *)(**(code **)((longlong)*pFVar7 + 8))(pFVar7,&local_68);
        TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>
        ::operator=((TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>
                     *)(pFVar14 + 7),pTVar18);
        if (local_68 != (undefined8 *)0x0) {
          (**(code **)*local_68)(local_68,1);
        }
      }
      pFVar7 = (this->StateHelper).Ptr;
      if (pFVar7 != (FNetworkPhysicsDataHelper *)0x0) {
        pTVar18 = (TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>
                   *)(**(code **)((longlong)*pFVar7 + 8))(pFVar7,&local_78);
        TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>
        ::operator=((TOptional<TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>_>
                     *)(pFVar14 + 8),pTVar18);
        if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)(local_78,1);
        }
      }
    }
    UpdateAsyncComponent(this,true);
    pFVar17 = this->NetworkPhysicsComponent_Internal;
    if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar8 = IsInGameThread(), !bVar8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x1b3,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = ::operator_new(0xc0);
    if (pFVar16 != (FAsyncNetworkPhysicsComponent *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UNetworkPhysicsComponent::InitializeComponent'::`32'::<lambda_1>,1,0>
                  ::_vftable_;
      uStack_40 = pFVar17;
      pFVar17 = uStack_40;
      pFVar16->_padding_ = (longlong)&___7FSimCallbackCommandObject_Chaos__6B_;
      *(undefined2 *)&pFVar16->_padding_ = 0;
      pFVar16->_padding_ = 0;
      pFVar16->_padding_ = 0;
      pFVar16->_padding_ = 0;
      pFVar16->_padding_ = 0;
      *(undefined2 *)&pFVar16->_padding_ = 1;
      pFVar16->_padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<`UNetworkPhysicsComponent::InitializeComponent'::__l32::<lambda_1>,void>
           ::Call;
      pFVar16->_padding_ = 0;
      uStack_40._0_4_ = SUB84(pFVar17,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)pFVar17 >> 0x20);
      *(undefined4 *)&pFVar16->_padding_ = 0x51a80100;
      *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 1;
      *(undefined4 *)&pFVar16->_padding_ = (undefined4)uStack_40;
      *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = uStack_40._4_4_;
      pFVar16->_padding_ = local_38;
      local_60._8_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UNetworkPhysicsComponent::InitializeComponent'::__l32::<lambda_1>,void>
           ::Call;
      if (pFVar16->_padding_ != 0) {
        local_60._8_8_ = pFVar21;
      }
      pFVar16->_padding_ = 0;
      pFVar16->_padding_ = 0;
      *(undefined1 *)&pFVar16->_padding_ = 0;
      *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 0xffffffff;
      uStack_40 = pFVar17;
      if (pFVar16->_padding_ == 0) {
        `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                  (local_88);
      }
      pFVar21 = pFVar16;
      if ((FAsyncNetworkPhysicsComponent *)local_60._8_8_ != (FAsyncNetworkPhysicsComponent *)0x0) {
        pppuVar20 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar20 = local_30;
        }
        (*(code *)(*pppuVar20)[2])();
      }
    }
    Chaos::FChaosMarshallingManager::RegisterSimCommand_External
              (&this_02->MarshallingManager,(FSimCallbackCommandObject *)pFVar21);
  }
  return;
}

// IsLocallyControlled @ 148310b20

bool __thiscall UNetworkPhysicsComponent::IsLocallyControlled(UNetworkPhysicsComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
  bVar2 = IsInGameThread();
  if (((!bVar2) && (*(int *)&pFVar5[2].field_0x4 < 1)) || (*(char *)(pFVar5 + 3) != '\0')) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->bIsRelayingLocalInputs != false) {
    return true;
  }
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x538))(this);
  if (plVar6 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148310bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar6 + 0x7f0))(plVar6,*(code **)(*plVar6 + 0x7f0));
    return (bool)uVar3;
  }
  return false;
}

// IsNetworkPhysicsTickOffsetAssigned @ 148310bf0

bool __thiscall
UNetworkPhysicsComponent::IsNetworkPhysicsTickOffsetAssigned(UNetworkPhysicsComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
  bVar2 = IsInGameThread();
  if (((!bVar2) && (*(int *)&pFVar5[2].field_0x4 < 1)) || (*(char *)(pFVar5 + 3) != '\0')) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lVar6 = (**(code **)(this->_padding_ + 0x530))(this);
  if (lVar6 != 0) {
    return (bool)*(undefined1 *)(lVar6 + 0x744);
  }
  return false;
}

// MulticastReceiveImportantInputData @ 1483116f0

void __thiscall
UNetworkPhysicsComponent::MulticastReceiveImportantInputData
          (UNetworkPhysicsComponent *this,FNetworkPhysicsRewindDataImportantInputProxy *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  UFunction *pUVar8;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  if (param_1 == (FNetworkPhysicsRewindDataImportantInputProxy *)&local_28) goto LAB_1483117d9;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)&param_1->field_0x8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1->field_0x8);
  }
  plVar1 = *(longlong **)param_1;
  uStack_20 = *(undefined8 *)&param_1->field_0x8;
  if (plVar1 == (longlong *)0x0) {
    local_res8 = (undefined8 *)0x0;
    ppuVar7 = &local_res8;
    bVar5 = false;
    bVar4 = true;
LAB_14831177e:
    puVar6 = local_28;
    puVar2 = *ppuVar7;
    *ppuVar7 = (undefined8 *)0x0;
    if (local_28 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*local_28;
      local_28 = puVar2;
      (*(code *)*puVar3)(puVar6,1);
      puVar2 = local_28;
    }
    local_28 = puVar2;
    if ((bVar4) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (!bVar5) goto LAB_1483117d9;
  }
  else {
    ppuVar7 = (undefined8 **)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res10);
    bVar5 = true;
    bVar4 = false;
    if (&local_28 != ppuVar7) goto LAB_14831177e;
  }
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
LAB_1483117d9:
  pUVar8 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UNetworkPhysicsComponent_MulticastReceiveImportantInputData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// MulticastReceiveImportantInputData_Implementation @ 148311830

void __thiscall
UNetworkPhysicsComponent::MulticastReceiveImportantInputData_Implementation
          (UNetworkPhysicsComponent *this,FNetworkPhysicsRewindDataImportantInputProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSimCallbackInput *pFVar4;
  undefined8 *puVar5;
  FSimCallbackInput *pFVar6;
  undefined8 *local_res18 [2];
  
  bVar2 = HasServerWorld(this);
  if ((((!bVar2) && (param_1->field_0x10 == '\0')) &&
      (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0)) &&
     (*(longlong *)param_1 != 0)) {
    if (this->bIsUsingLegacyData == false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100637>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x51d,"bIsUsingLegacyData");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if (pFVar4 != (FSimCallbackInput *)0x0) {
      (**(code **)(**(longlong **)param_1 + 0x18))();
      pFVar6 = pFVar4 + 0xc;
      puVar5 = (undefined8 *)
               (**(code **)(**(longlong **)param_1 + 0x10))(*(longlong **)param_1,local_res18);
      if (((undefined8 *)pFVar6->_padding_ <= puVar5) &&
         (puVar5 < (undefined8 *)pFVar6->_padding_ + *(int *)&pFVar4[0xc].field_0xc)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = pFVar4[0xc].NumSteps;
      if (iVar3 == *(int *)&pFVar4[0xc].field_0xc) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pFVar6,(int *)&pFVar4[0xc].field_0xc);
      }
      pFVar4[0xc].NumSteps = iVar3 + 1;
      *(undefined8 *)(pFVar6->_padding_ + (longlong)iVar3 * 8) = *puVar5;
      *puVar5 = 0;
      if (local_res18[0] != (undefined8 *)0x0) {
        (**(code **)*local_res18[0])(local_res18[0],1);
      }
    }
  }
  return;
}

// MulticastReceiveImportantStateData @ 148311990

void __thiscall
UNetworkPhysicsComponent::MulticastReceiveImportantStateData
          (UNetworkPhysicsComponent *this,FNetworkPhysicsRewindDataImportantStateProxy *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  UFunction *pUVar8;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  if (param_1 == (FNetworkPhysicsRewindDataImportantStateProxy *)&local_28) goto LAB_148311a79;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)&param_1->field_0x8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1->field_0x8);
  }
  plVar1 = *(longlong **)param_1;
  uStack_20 = *(undefined8 *)&param_1->field_0x8;
  if (plVar1 == (longlong *)0x0) {
    local_res8 = (undefined8 *)0x0;
    ppuVar7 = &local_res8;
    bVar5 = false;
    bVar4 = true;
LAB_148311a1e:
    puVar6 = local_28;
    puVar2 = *ppuVar7;
    *ppuVar7 = (undefined8 *)0x0;
    if (local_28 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*local_28;
      local_28 = puVar2;
      (*(code *)*puVar3)(puVar6,1);
      puVar2 = local_28;
    }
    local_28 = puVar2;
    if ((bVar4) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (!bVar5) goto LAB_148311a79;
  }
  else {
    ppuVar7 = (undefined8 **)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res10);
    bVar5 = true;
    bVar4 = false;
    if (&local_28 != ppuVar7) goto LAB_148311a1e;
  }
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
LAB_148311a79:
  pUVar8 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UNetworkPhysicsComponent_MulticastReceiveImportantStateData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// MulticastReceiveImportantStateData_Implementation @ 148311ad0

void __thiscall
UNetworkPhysicsComponent::MulticastReceiveImportantStateData_Implementation
          (UNetworkPhysicsComponent *this,FNetworkPhysicsRewindDataImportantStateProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSimCallbackInput *pFVar4;
  undefined8 *puVar5;
  FSimCallbackInput *pFVar6;
  undefined8 *local_res18 [2];
  
  bVar2 = HasServerWorld(this);
  if ((((!bVar2) && (param_1->field_0x10 == '\0')) &&
      (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0)) &&
     (*(longlong *)param_1 != 0)) {
    if (this->bIsUsingLegacyData == false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100669>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x53d,"bIsUsingLegacyData");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if (pFVar4 != (FSimCallbackInput *)0x0) {
      (**(code **)(**(longlong **)param_1 + 0x18))();
      pFVar6 = pFVar4 + 0xd;
      puVar5 = (undefined8 *)
               (**(code **)(**(longlong **)param_1 + 0x10))(*(longlong **)param_1,local_res18);
      if (((undefined8 *)pFVar6->_padding_ <= puVar5) &&
         (puVar5 < (undefined8 *)pFVar6->_padding_ + *(int *)&pFVar4[0xd].field_0xc)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = pFVar4[0xd].NumSteps;
      if (iVar3 == *(int *)&pFVar4[0xd].field_0xc) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pFVar6,(int *)&pFVar4[0xd].field_0xc);
      }
      pFVar4[0xd].NumSteps = iVar3 + 1;
      *(undefined8 *)(pFVar6->_padding_ + (longlong)iVar3 * 8) = *puVar5;
      *puVar5 = 0;
      if (local_res18[0] != (undefined8 *)0x0) {
        (**(code **)*local_res18[0])(local_res18[0],1);
      }
    }
  }
  return;
}

// NetworkMarshaledData @ 148312190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetworkPhysicsComponent::NetworkMarshaledData(UNetworkPhysicsComponent *this)

{
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar1;
  FNetworkPhysicsRewindDataImportantInputProxy *pFVar2;
  FNetworkPhysicsRewindDataImportantStateProxy *pFVar3;
  FNetworkPhysicsRewindDataInputProxy *pFVar4;
  longlong *plVar5;
  UObject *pUVar6;
  FBaseRewindHistory *pFVar7;
  FNetworkPhysicsDataHelper *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  longlong lVar17;
  FNetworkPhysicsDataCollection *pFVar18;
  UFunction *pUVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  undefined1 auVar22 [8];
  ForAnyElementType FVar23;
  undefined1 auVar24 [8];
  FScriptContainerElement *pFVar25;
  byte bVar26;
  undefined1 auVar27 [8];
  FScriptContainerElement *pFVar28;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_170;
  undefined1 local_16f [7];
  FScriptContainerElement *local_168;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e [6];
  undefined1 local_158 [8];
  FNetworkPhysicsDataCollection local_150;
  UWorld *local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  FNetworkPhysicsDataCollection local_128;
  FNetworkPhysicsDataCollection local_118;
  undefined1 local_108;
  FNetworkPhysicsDataCollection local_100;
  undefined1 local_f0;
  FNetworkPhysicsDataCollection local_e8;
  undefined1 local_d8;
  FNetworkPhysicsDataCollection local_d0;
  undefined1 local_c0;
  FAsyncNetworkPhysicsComponent *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  UNetworkPhysicsComponent *local_78;
  UWorld **local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  UNetworkPhysicsComponent *local_58;
  UWorld **local_50;
  
  bVar26 = 0;
  if (this->NetworkPhysicsComponent_Internal == (FAsyncNetworkPhysicsComponent *)0x0) {
    return;
  }
  local_140 = (UWorld *)this->_padding_;
  if ((local_140 == (UWorld *)0x0) &&
     (local_140 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     local_140 == (UWorld *)0x0)) {
    return;
  }
  bVar10 = HasServerWorld(this);
  if (bVar10) {
    if ((PhysicsReplicationCVars::ResimulationCVars::bEnableStatefulDeltaSerialization == false) ||
       (local_140->RealTimeSeconds <= this->TimeToSyncDeltaSourceInput)) goto LAB_1483122a6;
    local_res18[0] = 1;
LAB_1483122b2:
    if ((PhysicsReplicationCVars::ResimulationCVars::bEnableStatefulDeltaSerialization != false) &&
       (this->TimeToSyncDeltaSourceState < local_140->RealTimeSeconds)) {
      local_170 = 1;
      goto LAB_148312302;
    }
  }
  else {
    puVar15 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
    local_b0 = &local_160;
    local_b8 = (FAsyncNetworkPhysicsComponent *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar16 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,puVar15);
    bVar11 = IsInGameThread();
    if ((((!bVar11) && (*(int *)&pFVar16[2].field_0x4 < 1)) || (*(char *)(pFVar16 + 3) != '\0')) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3522308889972310313>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                            ,0x129,"IsInGameThreadContext()"), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar17 = (**(code **)(this->_padding_ + 0x530))(this);
    if (lVar17 == 0) {
      return;
    }
    if (*(char *)(lVar17 + 0x744) == '\0') {
      return;
    }
LAB_1483122a6:
    local_res18[0] = 0;
    if (bVar10) goto LAB_1483122b2;
  }
  local_170 = 0;
LAB_148312302:
  local_88 = local_res18;
  local_80 = local_res20;
  local_70 = &local_140;
  local_68 = &local_170;
  local_60 = local_16f;
  local_50 = &local_140;
  local_res20[0] = 0;
  local_16f[0] = 0;
  auVar22 = local_138;
  FVar23.Data = local_128.DataArray.AllocatorInstance.Data;
  auVar24 = local_130;
  auVar27 = local_158;
  local_78 = this;
  local_58 = this;
  do {
    local_b8 = this->NetworkPhysicsComponent_Internal;
    plVar5 = &local_b8->_padding_;
    if (*plVar5 == 0) {
      TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>::Dequeue
                ((TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *)
                 &local_b8->_padding_,(FAsyncNetworkPhysicsComponentOutput **)plVar5);
    }
    lVar17 = *plVar5;
    *plVar5 = 0;
    if (lVar17 == 0) {
      return;
    }
    if (*(char *)(lVar17 + 10) != '\0') {
      this->InputsToNetwork_Owner = *(ushort *)(lVar17 + 8);
    }
    if (this->bEnableUnreliableFlow != false) {
      pTVar1 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               (lVar17 + 0x10);
      if ((*(longlong **)(lVar17 + 0x10) != (longlong *)0x0) &&
         (cVar12 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x100))(), cVar12 != '\0')) {
        if (bVar10) {
          if (this->bIsUsingLegacyData != false) {
            `UNetworkPhysicsComponent::NetworkMarshaledData'::__l2::<lambda_1>::operator()
                      (&local_88,pTVar1);
          }
          bVar11 = IsLocallyControlled(this);
          if (bVar11) {
            if (this->bIsUsingLegacyData == false) {
              TArray<TInstancedStruct<FNetworkPhysicsPayload>,TSizedDefaultAllocator<32>_>::SetNum
                        (&(this->ReplicatedRemoteInputCollection).DataArray,
                         (uint)this->InputsToNetwork_Simulated,Default);
              pFVar8 = (this->InputHelper).Ptr;
              (**(code **)((longlong)*pFVar8 + 0x38))
                        (pFVar8,*(undefined8 *)(lVar17 + 0x10),
                         &this->ReplicatedRemoteInputCollection);
            }
            else {
              (**(code **)(**(longlong **)&this->ReplicatedRemoteInputs + 0x70))
                        (*(longlong **)&this->ReplicatedRemoteInputs,1);
              (**(code **)((longlong)*pTVar1->Ptr + 0x78))
                        (pTVar1->Ptr,*(undefined8 *)&this->ReplicatedRemoteInputs,1);
            }
          }
          if (this->bIsUsingLegacyData == false) {
            plVar5 = *(longlong **)(lVar17 + 0x10);
            iVar14 = (**(code **)(*plVar5 + 0x38))(plVar5,1,this->bEnableReliableFlow == false);
            TArray<TInstancedStruct<FNetworkPhysicsPayload>,TSizedDefaultAllocator<32>_>::SetNum
                      (&(this->ReplicatedInputCollection).DataArray,iVar14,Default);
            if (0 < (this->ReplicatedInputCollection).DataArray.ArrayNum) {
              pFVar8 = (this->InputHelper).Ptr;
              (**(code **)((longlong)*pFVar8 + 0x40))
                        (pFVar8,*(undefined8 *)(lVar17 + 0x10),&this->ReplicatedInputCollection);
            }
          }
          else {
            plVar5 = *(longlong **)&this->ReplicatedInputs;
            pcVar9 = *(code **)(*plVar5 + 0x108);
            uVar13 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x38))
                               (*(longlong **)(lVar17 + 0x10),1,this->bEnableReliableFlow == false);
            (*pcVar9)(plVar5,uVar13,1);
            (**(code **)(**(longlong **)&this->ReplicatedInputs + 0x70))
                      (*(longlong **)&this->ReplicatedInputs,1);
            (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x80))
                      (*(longlong **)(lVar17 + 0x10),*(undefined8 *)&this->ReplicatedInputs,1,
                       this->bEnableReliableFlow == false);
          }
        }
        else {
          bVar11 = IsLocallyControlled(this);
          if (bVar11) {
            if (this->bIsUsingLegacyData == false) {
              iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 0xf8))();
              TArray<TInstancedStruct<FNetworkPhysicsPayload>,TSizedDefaultAllocator<32>_>::SetNum
                        (&(this->ReplicatedInputCollection).DataArray,iVar14,Default);
              pFVar8 = (this->InputHelper).Ptr;
              (**(code **)((longlong)*pFVar8 + 0x28))
                        (pFVar8,pTVar1->Ptr,&this->ReplicatedInputCollection);
              local_150.DataArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_150.DataArray.ArrayNum = 0;
              local_150.DataArray.ArrayMax = 0;
              if (&local_150 != &this->ReplicatedInputCollection) {
                DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>
                          ((TInstancedStruct<FNetworkPhysicsPayload> *)0x0,0);
                iVar14 = (this->ReplicatedInputCollection).DataArray.ArrayNum;
                local_168 = (this->ReplicatedInputCollection).DataArray.AllocatorInstance.Data;
                local_150.DataArray.ArrayNum = iVar14;
                if ((iVar14 == 0) && (local_150.DataArray.ArrayMax == 0)) {
                  local_150.DataArray.ArrayNum = 0;
                  local_150.DataArray.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,iVar14,local_150.DataArray.ArrayMax,
                             (ForAnyElementType *)&local_150,iVar14,&local_150.DataArray.ArrayMax);
                  ConstructItems<TInstancedStruct<FNetworkPhysicsPayload>,TInstancedStruct<FNetworkPhysicsPayload>,int>
                            (local_150.DataArray.AllocatorInstance.Data,
                             (TInstancedStruct<FNetworkPhysicsPayload> *)local_168,iVar14);
                }
              }
              pUVar19 = UObject::FindFunctionChecked
                                  ((UObject *)this,
                                   NAME_UNetworkPhysicsComponent_ServerReceiveInputCollection);
              (**(code **)(this->_padding_ + 0x260))(this,pUVar19,&local_150);
              DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>
                        ((TInstancedStruct<FNetworkPhysicsPayload> *)
                         local_150.DataArray.AllocatorInstance.Data,local_150.DataArray.ArrayNum);
              if (local_150.DataArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.DataArray.AllocatorInstance.Data);
              }
            }
            else {
              plVar5 = *(longlong **)&this->ReplicatedInputs;
              pcVar9 = *(code **)(*plVar5 + 0x108);
              uVar13 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0xf8))();
              (*pcVar9)(plVar5,uVar13,1);
              pFVar4 = &this->ReplicatedInputs;
              cVar12 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x78))
                                 (*(longlong **)(lVar17 + 0x10),*(undefined8 *)pFVar4,1,
                                  this->bEnableReliableFlow == false);
              if (cVar12 != '\0') {
                local_108 = 0;
                local_118.DataArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_118.DataArray.ArrayNum = 0;
                local_118.DataArray.ArrayMax = 0;
                if (pFVar4 != (FNetworkPhysicsRewindDataInputProxy *)&local_118) {
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar6 = *(UObject **)&(this->ReplicatedInputs).field_0x8,
                     pUVar6 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar6);
                  }
                  plVar5 = *(longlong **)pFVar4;
                  local_118.DataArray.ArrayNum = *(int *)&(this->ReplicatedInputs).field_0x8;
                  local_118.DataArray.ArrayMax = *(int *)&(this->ReplicatedInputs).field_0xc;
                  if (plVar5 == (longlong *)0x0) {
                    bVar26 = bVar26 | 0x80;
                    local_158 = (undefined1  [8])0x0;
                    pFVar18 = (FNetworkPhysicsDataCollection *)local_158;
LAB_14831268e:
                    FVar21.Data = local_118.DataArray.AllocatorInstance.Data;
                    local_118.DataArray.AllocatorInstance.Data =
                         (pFVar18->DataArray).AllocatorInstance.Data;
                    (pFVar18->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    auVar27 = local_158;
                    if (FVar21.Data != (FScriptContainerElement *)0x0) {
                      (*(code *)**(undefined8 **)FVar21.Data)(FVar21.Data,1);
                      auVar27 = local_158;
                    }
                  }
                  else {
                    bVar26 = bVar26 | 0x40;
                    pFVar18 = (FNetworkPhysicsDataCollection *)
                              (**(code **)(*plVar5 + 0x10))(plVar5,&local_a8);
                    if (&local_118 != pFVar18) goto LAB_14831268e;
                  }
                  if (((char)bVar26 < '\0') &&
                     (bVar26 = bVar26 & 0x7f, auVar27 != (undefined1  [8])0x0)) {
                    (*(code *)**(undefined8 **)auVar27)(auVar27,1);
                  }
                  if (((bVar26 & 0x40) != 0) &&
                     (bVar26 = bVar26 & 0xbf, local_a8 != (undefined8 *)0x0)) {
                    (**(code **)*local_a8)(local_a8,1);
                  }
                }
                pUVar19 = UObject::FindFunctionChecked
                                    ((UObject *)this,
                                     NAME_UNetworkPhysicsComponent_ServerReceiveInputData);
                (**(code **)(this->_padding_ + 0x260))(this,pUVar19,&local_118);
                if (local_118.DataArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  (*(code *)**(undefined8 **)local_118.DataArray.AllocatorInstance.Data)
                            (local_118.DataArray.AllocatorInstance.Data,1);
                }
              }
            }
          }
        }
      }
    }
    if (this->bEnableReliableFlow != false) {
      local_128.DataArray.ArrayNum = *(int *)(lVar17 + 0x28);
      uVar20 = (ulonglong)local_128.DataArray.ArrayNum;
      pFVar25 = *(FScriptContainerElement **)(lVar17 + 0x20);
      pFVar28 = pFVar25 + uVar20 * 8;
      local_168 = pFVar28;
      while( true ) {
        if (*(int *)(lVar17 + 0x28) != (int)uVar20) {
          `TCheckedPointerIterator<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_15f);
        }
        auVar22 = local_138;
        auVar27 = local_158;
        if (pFVar25 == pFVar28) break;
        if (((*(longlong **)pFVar25 != (longlong *)0x0) &&
            (cVar12 = (**(code **)(**(longlong **)pFVar25 + 0x100))(), cVar12 != '\0')) &&
           (this->bIsUsingLegacyData != false)) {
          `UNetworkPhysicsComponent::NetworkMarshaledData'::__l2::<lambda_1>::operator()
                    (&local_88,
                     (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                      *)pFVar25);
          plVar5 = *(longlong **)&this->ReplicatedImportantInput;
          pcVar9 = *(code **)(*plVar5 + 0x108);
          uVar13 = (**(code **)(**(longlong **)pFVar25 + 0xf8))();
          (*pcVar9)(plVar5,uVar13,1);
          pFVar2 = &this->ReplicatedImportantInput;
          cVar12 = (**(code **)(**(longlong **)pFVar25 + 0x78))
                             (*(longlong **)pFVar25,*(undefined8 *)pFVar2,0,1);
          pFVar28 = local_168;
          if (cVar12 != '\0') {
            if (bVar10) {
              local_f0 = 0;
              local_100.DataArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_100.DataArray.ArrayNum = 0;
              local_100.DataArray.ArrayMax = 0;
              if (pFVar2 != (FNetworkPhysicsRewindDataImportantInputProxy *)&local_100) {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar6 = *(UObject **)&(this->ReplicatedImportantInput).field_0x8,
                   pUVar6 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
                plVar5 = *(longlong **)pFVar2;
                local_100.DataArray.ArrayNum = *(int *)&(this->ReplicatedImportantInput).field_0x8;
                local_100.DataArray.ArrayMax = *(int *)&(this->ReplicatedImportantInput).field_0xc;
                if (plVar5 == (longlong *)0x0) {
                  bVar26 = bVar26 | 8;
                  local_130 = (undefined1  [8])0x0;
                  pFVar18 = (FNetworkPhysicsDataCollection *)local_130;
LAB_14831298e:
                  FVar21.Data = local_100.DataArray.AllocatorInstance.Data;
                  local_100.DataArray.AllocatorInstance.Data =
                       (pFVar18->DataArray).AllocatorInstance.Data;
                  (pFVar18->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  auVar24 = local_130;
                  if (FVar21.Data != (FScriptContainerElement *)0x0) {
                    (*(code *)**(undefined8 **)FVar21.Data)(FVar21.Data,1);
                    auVar24 = local_130;
                  }
                }
                else {
                  bVar26 = bVar26 | 4;
                  pFVar18 = (FNetworkPhysicsDataCollection *)
                            (**(code **)(*plVar5 + 0x10))(plVar5,&local_a0);
                  if (&local_100 != pFVar18) goto LAB_14831298e;
                }
                if (((bVar26 & 8) != 0) && (bVar26 = bVar26 & 0xf7, auVar24 != (undefined1  [8])0x0)
                   ) {
                  (*(code *)**(undefined8 **)auVar24)(auVar24,1);
                }
                if (((bVar26 & 4) != 0) && (bVar26 = bVar26 & 0xfb, local_a0 != (undefined8 *)0x0))
                {
                  (**(code **)*local_a0)(local_a0,1);
                }
              }
              pUVar19 = UObject::FindFunctionChecked
                                  ((UObject *)this,
                                   NAME_UNetworkPhysicsComponent_MulticastReceiveImportantInputData)
              ;
              (**(code **)(this->_padding_ + 0x260))(this,pUVar19,&local_100);
              FVar21.Data = local_100.DataArray.AllocatorInstance.Data;
            }
            else {
              bVar11 = IsLocallyControlled(this);
              pFVar28 = local_168;
              if (!bVar11) goto LAB_148312b3f;
              local_d8 = 0;
              local_e8.DataArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_e8.DataArray.ArrayNum = 0;
              local_e8.DataArray.ArrayMax = 0;
              if (pFVar2 != (FNetworkPhysicsRewindDataImportantInputProxy *)&local_e8) {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar6 = *(UObject **)&(this->ReplicatedImportantInput).field_0x8,
                   pUVar6 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
                plVar5 = *(longlong **)pFVar2;
                local_e8.DataArray.ArrayNum = *(int *)&(this->ReplicatedImportantInput).field_0x8;
                local_e8.DataArray.ArrayMax = *(int *)&(this->ReplicatedImportantInput).field_0xc;
                if (plVar5 == (longlong *)0x0) {
                  bVar26 = bVar26 | 0x20;
                  local_128.DataArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  pFVar18 = &local_128;
LAB_148312aa0:
                  FVar21.Data = local_e8.DataArray.AllocatorInstance.Data;
                  local_e8.DataArray.AllocatorInstance.Data =
                       (pFVar18->DataArray).AllocatorInstance.Data;
                  (pFVar18->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  FVar23.Data = local_128.DataArray.AllocatorInstance.Data;
                  if (FVar21.Data != (FScriptContainerElement *)0x0) {
                    (*(code *)**(undefined8 **)FVar21.Data)(FVar21.Data,1);
                    FVar23.Data = local_128.DataArray.AllocatorInstance.Data;
                  }
                }
                else {
                  bVar26 = bVar26 | 0x10;
                  pFVar18 = (FNetworkPhysicsDataCollection *)
                            (**(code **)(*plVar5 + 0x10))(plVar5,&local_98);
                  if (&local_e8 != pFVar18) goto LAB_148312aa0;
                }
                if (((bVar26 & 0x20) != 0) &&
                   (bVar26 = bVar26 & 0xdf, FVar23.Data != (FScriptContainerElement *)0x0)) {
                  (*(code *)**(undefined8 **)FVar23.Data)(FVar23.Data,1);
                }
                if (((bVar26 & 0x10) != 0) &&
                   (bVar26 = bVar26 & 0xef, local_98 != (undefined8 *)0x0)) {
                  (**(code **)*local_98)(local_98,1);
                }
              }
              pUVar19 = UObject::FindFunctionChecked
                                  ((UObject *)this,
                                   NAME_UNetworkPhysicsComponent_ServerReceiveImportantInputData);
              (**(code **)(this->_padding_ + 0x260))(this,pUVar19,&local_e8);
              FVar21.Data = local_e8.DataArray.AllocatorInstance.Data;
            }
            pFVar28 = local_168;
            if (FVar21.Data != (FScriptContainerElement *)0x0) {
              (*(code *)**(undefined8 **)FVar21.Data)(FVar21.Data,1);
              pFVar28 = local_168;
            }
          }
        }
LAB_148312b3f:
        uVar20 = (ulonglong)(uint)local_128.DataArray.ArrayNum;
        pFVar25 = pFVar25 + 8;
      }
    }
    if (bVar10) {
      if (this->bEnableUnreliableFlow != false) {
        if ((*(longlong **)(lVar17 + 0x18) != (longlong *)0x0) &&
           (cVar12 = (**(code **)(**(longlong **)(lVar17 + 0x18) + 0x100))(), cVar12 != '\0')) {
          if (this->bIsUsingLegacyData == false) {
            TArray<TInstancedStruct<FNetworkPhysicsPayload>,TSizedDefaultAllocator<32>_>::SetNum
                      (&(this->ReplicatedStateCollection).DataArray,(uint)this->StatesToNetwork,
                       Default);
            pFVar8 = (this->StateHelper).Ptr;
            (**(code **)((longlong)*pFVar8 + 0x28))
                      (pFVar8,*(undefined8 *)(lVar17 + 0x18),&this->ReplicatedStateCollection);
          }
          else {
            `UNetworkPhysicsComponent::NetworkMarshaledData'::__l2::<lambda_2>::operator()
                      (&local_68,
                       (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                        *)(lVar17 + 0x18));
            pFVar7 = ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                       *)(lVar17 + 0x18))->Ptr;
            (**(code **)((longlong)*pFVar7 + 0x78))
                      (pFVar7,*(undefined8 *)&this->ReplicatedStates,1,
                       this->bEnableReliableFlow == false);
          }
        }
      }
      if (this->bEnableReliableFlow != false) {
        pFVar25 = *(FScriptContainerElement **)(lVar17 + 0x30);
        iVar14 = *(int *)(lVar17 + 0x38);
        pFVar28 = pFVar25 + (longlong)iVar14 * 8;
        local_168 = pFVar28;
        while( true ) {
          if (*(int *)(lVar17 + 0x38) != iVar14) {
            `TCheckedPointerIterator<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_15e);
          }
          FVar23.Data = local_128.DataArray.AllocatorInstance.Data;
          auVar24 = local_130;
          auVar27 = local_158;
          if (pFVar25 == pFVar28) break;
          if (((*(longlong **)pFVar25 != (longlong *)0x0) &&
              (cVar12 = (**(code **)(**(longlong **)pFVar25 + 0x100))(), cVar12 != '\0')) &&
             (this->bIsUsingLegacyData != false)) {
            `UNetworkPhysicsComponent::NetworkMarshaledData'::__l2::<lambda_2>::operator()
                      (&local_68,
                       (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                        *)pFVar25);
            plVar5 = *(longlong **)&this->ReplicatedImportantState;
            pcVar9 = *(code **)(*plVar5 + 0x108);
            uVar13 = (**(code **)(**(longlong **)pFVar25 + 0xf8))();
            (*pcVar9)(plVar5,uVar13,1);
            pFVar3 = &this->ReplicatedImportantState;
            cVar12 = (**(code **)(**(longlong **)pFVar25 + 0x78))
                               (*(longlong **)pFVar25,*(undefined8 *)pFVar3,0,1);
            pFVar28 = local_168;
            if (cVar12 != '\0') {
              local_c0 = 0;
              local_d0.DataArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_d0.DataArray.ArrayNum = 0;
              local_d0.DataArray.ArrayMax = 0;
              if (pFVar3 != (FNetworkPhysicsRewindDataImportantStateProxy *)&local_d0) {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar6 = *(UObject **)&(this->ReplicatedImportantState).field_0x8,
                   pUVar6 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
                plVar5 = *(longlong **)pFVar3;
                local_d0.DataArray.ArrayNum = *(int *)&(this->ReplicatedImportantState).field_0x8;
                local_d0.DataArray.ArrayMax = *(int *)&(this->ReplicatedImportantState).field_0xc;
                if (plVar5 == (longlong *)0x0) {
                  bVar26 = bVar26 | 2;
                  local_138 = (undefined1  [8])0x0;
                  pFVar18 = (FNetworkPhysicsDataCollection *)local_138;
LAB_148312d3f:
                  FVar23.Data = local_d0.DataArray.AllocatorInstance.Data;
                  local_d0.DataArray.AllocatorInstance.Data =
                       (pFVar18->DataArray).AllocatorInstance.Data;
                  (pFVar18->DataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  auVar22 = local_138;
                  if (FVar23.Data != (FScriptContainerElement *)0x0) {
                    (*(code *)**(undefined8 **)FVar23.Data)(FVar23.Data,1);
                    auVar22 = local_138;
                  }
                }
                else {
                  bVar26 = bVar26 | 1;
                  pFVar18 = (FNetworkPhysicsDataCollection *)
                            (**(code **)(*plVar5 + 0x10))(plVar5,&local_90);
                  if (&local_d0 != pFVar18) goto LAB_148312d3f;
                }
                if (((bVar26 & 2) != 0) && (bVar26 = bVar26 & 0xfd, auVar22 != (undefined1  [8])0x0)
                   ) {
                  (*(code *)**(undefined8 **)auVar22)(auVar22,1);
                }
                if (((bVar26 & 1) != 0) && (bVar26 = bVar26 & 0xfe, local_90 != (undefined8 *)0x0))
                {
                  (**(code **)*local_90)(local_90,1);
                }
              }
              pUVar19 = UObject::FindFunctionChecked
                                  ((UObject *)this,
                                   NAME_UNetworkPhysicsComponent_MulticastReceiveImportantStateData)
              ;
              (**(code **)(this->_padding_ + 0x260))(this,pUVar19,&local_d0);
              pFVar28 = local_168;
              if (local_d0.DataArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                (*(code *)**(undefined8 **)local_d0.DataArray.AllocatorInstance.Data)
                          (local_d0.DataArray.AllocatorInstance.Data,1);
                pFVar28 = local_168;
              }
            }
          }
          pFVar25 = pFVar25 + 8;
        }
      }
    }
    if (this->bStopRelayingLocalInputsDeferred != false) {
      this->bIsRelayingLocalInputs = false;
      this->bStopRelayingLocalInputsDeferred = false;
    }
    (**(code **)(local_b8->_padding_ + 0x10))(local_b8,lVar17);
  } while( true );
}

// OnRep_SetReplicatedDeltaSourceInput @ 148314ec0

void __thiscall
UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceInput(UNetworkPhysicsComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [32];
  
  if ((this->ReplicatedDeltaSourceInput).field_0x10 != '\0') {
    `UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceInput'::__l5::<lambda_1>::operator()
              (local_res8);
    return;
  }
  if (*(longlong *)&this->ReplicatedDeltaSourceInput != 0) {
    if (this->bIsUsingLegacyData == false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100255>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x39f,"bIsUsingLegacyData");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    AddDeltaSourceInput(this);
    return;
  }
  return;
}

// OnRep_SetReplicatedDeltaSourceState @ 148314f40

void __thiscall
UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceState(UNetworkPhysicsComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [32];
  
  if ((this->ReplicatedDeltaSourceState).field_0x10 != '\0') {
    `UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceState'::__l5::<lambda_1>::operator()
              (local_res8);
    return;
  }
  if (*(longlong *)&this->ReplicatedDeltaSourceState != 0) {
    if (this->bIsUsingLegacyData == false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100335>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x3ef,"bIsUsingLegacyData");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    AddDeltaSourceState(this);
    return;
  }
  return;
}

// OnRep_SetReplicatedInputCollection @ 148314fc0

void __thiscall
UNetworkPhysicsComponent::OnRep_SetReplicatedInputCollection(UNetworkPhysicsComponent *this)

{
  FNetworkPhysicsDataHelper *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackInput *pFVar4;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar5;
  undefined8 *local_res8;
  
  if ((this->bIsUsingLegacyData != false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100719>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x56f,"bIsUsingLegacyData == false"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
       ((this->InputHelper).Ptr != (FNetworkPhysicsDataHelper *)0x0)) &&
      ((this->ReplicatedInputCollection).DataArray.ArrayNum != 0)) &&
     (pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal),
     pFVar4 != (FSimCallbackInput *)0x0)) {
    FNetworkPhysicsDataCollection::UpdateLocalFrameFromServerFrame
              (&this->ReplicatedInputCollection,0);
    if (pFVar4[0xb]._padding_ == 0) {
      pFVar1 = (this->InputHelper).Ptr;
      pTVar5 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               (**(code **)((longlong)*pFVar1 + 0x18))
                         (pFVar1,&local_res8,(this->ReplicatedInputCollection).DataArray.ArrayNum);
      TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(pFVar4 + 0xb),pTVar5);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    pFVar1 = (this->InputHelper).Ptr;
    (**(code **)((longlong)*pFVar1 + 0x48))
              (pFVar1,&this->ReplicatedInputCollection,pFVar4[0xb]._padding_);
  }
  return;
}

// OnRep_SetReplicatedInputs @ 1483150d0

void __thiscall UNetworkPhysicsComponent::OnRep_SetReplicatedInputs(UNetworkPhysicsComponent *this)

{
  FNetworkPhysicsDataHelper *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  FSimCallbackInput *pFVar5;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar6;
  undefined8 *local_res8;
  
  if (((((this->ReplicatedInputs).field_0x10 == '\0') &&
       (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0)) &&
      ((this->InputHelper).Ptr != (FNetworkPhysicsDataHelper *)0x0)) &&
     (*(longlong *)&this->ReplicatedInputs != 0)) {
    if (this->bIsUsingLegacyData == false) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100511>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x49f,"bIsUsingLegacyData");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if (pFVar5 != (FSimCallbackInput *)0x0) {
      pFVar5 = pFVar5 + 0xb;
      if ((FBaseRewindHistory *)pFVar5->_padding_ == (FBaseRewindHistory *)0x0) {
        pFVar1 = (this->InputHelper).Ptr;
        pcVar2 = *(code **)((longlong)*pFVar1 + 0x18);
        uVar4 = (**(code **)(**(longlong **)&this->ReplicatedInputs + 0xf8))();
        pTVar6 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(*pcVar2)(pFVar1,&local_res8,uVar4);
        TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                  ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                    *)pFVar5,pTVar6);
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      (**(code **)(**(longlong **)&this->ReplicatedInputs + 0x90))
                (*(longlong **)&this->ReplicatedInputs,(FBaseRewindHistory *)pFVar5->_padding_);
    }
  }
  return;
}

// OnRep_SetReplicatedRemoteInputCollection @ 1483151f0

void __thiscall
UNetworkPhysicsComponent::OnRep_SetReplicatedRemoteInputCollection(UNetworkPhysicsComponent *this)

{
  FNetworkPhysicsDataHelper *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackInput *pFVar4;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar5;
  undefined8 *local_res8;
  
  if ((this->bIsUsingLegacyData != false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100742>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x586,"bIsUsingLegacyData == false"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
       ((this->InputHelper).Ptr != (FNetworkPhysicsDataHelper *)0x0)) &&
      ((this->ReplicatedRemoteInputCollection).DataArray.ArrayNum != 0)) &&
     (pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal),
     pFVar4 != (FSimCallbackInput *)0x0)) {
    FNetworkPhysicsDataCollection::UpdateLocalFrameFromServerFrame
              (&this->ReplicatedRemoteInputCollection,0);
    if (pFVar4[0xb]._padding_ == 0) {
      pFVar1 = (this->InputHelper).Ptr;
      pTVar5 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               (**(code **)((longlong)*pFVar1 + 0x18))
                         (pFVar1,&local_res8,
                          (this->ReplicatedRemoteInputCollection).DataArray.ArrayNum);
      TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(pFVar4 + 0xb),pTVar5);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    pFVar1 = (this->InputHelper).Ptr;
    (**(code **)((longlong)*pFVar1 + 0x48))
              (pFVar1,&this->ReplicatedRemoteInputCollection,pFVar4[0xb]._padding_);
  }
  return;
}

// OnRep_SetReplicatedRemoteInputs @ 148315300

void __thiscall
UNetworkPhysicsComponent::OnRep_SetReplicatedRemoteInputs(UNetworkPhysicsComponent *this)

{
  FNetworkPhysicsDataHelper *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  FSimCallbackInput *pFVar5;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar6;
  undefined8 *local_res8;
  
  if (((((this->ReplicatedRemoteInputs).field_0x10 == '\0') &&
       (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0)) &&
      ((this->InputHelper).Ptr != (FNetworkPhysicsDataHelper *)0x0)) &&
     (*(longlong *)&this->ReplicatedRemoteInputs != 0)) {
    if (this->bIsUsingLegacyData == false) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100538>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x4ba,"bIsUsingLegacyData");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if (pFVar5 != (FSimCallbackInput *)0x0) {
      pFVar5 = pFVar5 + 0xb;
      if ((FBaseRewindHistory *)pFVar5->_padding_ == (FBaseRewindHistory *)0x0) {
        pFVar1 = (this->InputHelper).Ptr;
        pcVar2 = *(code **)((longlong)*pFVar1 + 0x18);
        uVar4 = (**(code **)(**(longlong **)&this->ReplicatedRemoteInputs + 0xf8))();
        pTVar6 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(*pcVar2)(pFVar1,&local_res8,uVar4);
        TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                  ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                    *)pFVar5,pTVar6);
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      (**(code **)(**(longlong **)&this->ReplicatedRemoteInputs + 0x90))
                (*(longlong **)&this->ReplicatedRemoteInputs,(FBaseRewindHistory *)pFVar5->_padding_
                );
    }
  }
  return;
}

// OnRep_SetReplicatedStateCollection @ 148315420

void __thiscall
UNetworkPhysicsComponent::OnRep_SetReplicatedStateCollection(UNetworkPhysicsComponent *this)

{
  FNetworkPhysicsDataHelper *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackInput *pFVar4;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar5;
  undefined8 *local_res8;
  
  if ((this->bIsUsingLegacyData != false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100765>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x59d,"bIsUsingLegacyData == false"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
       ((this->StateHelper).Ptr != (FNetworkPhysicsDataHelper *)0x0)) &&
      ((this->ReplicatedStateCollection).DataArray.ArrayNum != 0)) &&
     (pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal),
     pFVar4 != (FSimCallbackInput *)0x0)) {
    FNetworkPhysicsDataCollection::UpdateLocalFrameFromServerFrame
              (&this->ReplicatedStateCollection,0);
    if (*(longlong *)&pFVar4[0xb].NumSteps == 0) {
      pFVar1 = (this->StateHelper).Ptr;
      pTVar5 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               (**(code **)((longlong)*pFVar1 + 0x18))
                         (pFVar1,&local_res8,(this->ReplicatedStateCollection).DataArray.ArrayNum);
      TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )&pFVar4[0xb].NumSteps,pTVar5);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    pFVar1 = (this->StateHelper).Ptr;
    (**(code **)((longlong)*pFVar1 + 0x48))
              (pFVar1,&this->ReplicatedStateCollection,*(undefined8 *)&pFVar4[0xb].NumSteps);
  }
  return;
}

// OnRep_SetReplicatedStates @ 148315530

void __thiscall UNetworkPhysicsComponent::OnRep_SetReplicatedStates(UNetworkPhysicsComponent *this)

{
  int *this_00;
  FNetworkPhysicsDataHelper *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  FSimCallbackInput *pFVar5;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar6;
  undefined8 *local_res8;
  
  if (((((this->ReplicatedStates).field_0x10 == '\0') &&
       (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0)) &&
      ((this->StateHelper).Ptr != (FNetworkPhysicsDataHelper *)0x0)) &&
     (*(longlong *)&this->ReplicatedStates != 0)) {
    if (this->bIsUsingLegacyData == false) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100484>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x484,"bIsUsingLegacyData");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if (pFVar5 != (FSimCallbackInput *)0x0) {
      this_00 = &pFVar5[0xb].NumSteps;
      if (*(longlong *)this_00 == 0) {
        pFVar1 = (this->StateHelper).Ptr;
        pcVar2 = *(code **)((longlong)*pFVar1 + 0x18);
        uVar4 = (**(code **)(**(longlong **)&this->ReplicatedStates + 0xf8))();
        pTVar6 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(*pcVar2)(pFVar1,&local_res8,uVar4);
        TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                  ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                    *)this_00,pTVar6);
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      (**(code **)(**(longlong **)&this->ReplicatedStates + 0x90))
                (*(longlong **)&this->ReplicatedStates,*(undefined8 *)this_00);
    }
  }
  return;
}

// PreReplication @ 1483185f0

void __thiscall
UNetworkPhysicsComponent::PreReplication
          (UNetworkPhysicsComponent *this,IRepChangedPropertyTracker *param_1)

{
  FNetPropertyConditionManager *pFVar1;
  
  pFVar1 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar1,(UObject *)this,2,this->bIsUsingLegacyData);
  pFVar1 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar1,(UObject *)this,3,this->bIsUsingLegacyData);
  pFVar1 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar1,(UObject *)this,4,this->bIsUsingLegacyData);
  pFVar1 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar1,(UObject *)this,5,this->bIsUsingLegacyData);
  pFVar1 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar1,(UObject *)this,6,this->bIsUsingLegacyData);
  pFVar1 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar1,(UObject *)this,7,this->bIsUsingLegacyData == false);
  pFVar1 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar1,(UObject *)this,8,this->bIsUsingLegacyData == false);
  pFVar1 = UE::Net::Private::FNetPropertyConditionManager::Get();
  UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
            (pFVar1,(UObject *)this,9,this->bIsUsingLegacyData == false);
  return;
}

// RemoveDataHistory @ 14831d690

void __thiscall UNetworkPhysicsComponent::RemoveDataHistory(UNetworkPhysicsComponent *this)

{
  FSimCallbackInput *pFVar1;
  undefined2 *puVar2;
  undefined2 local_18 [12];
  
  if (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) {
    pFVar1 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if ((pFVar1 != (FSimCallbackInput *)0x0) &&
       (puVar2 = (undefined2 *)((longlong)&pFVar1[9]._padding_ + 2), local_18 != puVar2)) {
      *puVar2 = 0x101;
    }
  }
  return;
}

// ServerReceiveDeltaSourceInputFrame @ 148320700

void __thiscall
UNetworkPhysicsComponent::ServerReceiveDeltaSourceInputFrame
          (UNetworkPhysicsComponent *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceInputFrame);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ServerReceiveDeltaSourceInputFrame_Implementation @ 148320740

void __thiscall
UNetworkPhysicsComponent::ServerReceiveDeltaSourceInputFrame_Implementation
          (UNetworkPhysicsComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((this->bIsUsingLegacyData == false) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100262>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x3a6,"bIsUsingLegacyData"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = 0;
  if (0 < (this->DeltaSourceInputs).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->DeltaSourceInputs).ArrayNum) {
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
      if (*(int *)(*(longlong *)((this->DeltaSourceInputs).AllocatorInstance.Data + lVar5) + 8) ==
          param_1) {
        this->LatestAcknowledgedDeltaSourceInputIndex = uVar4;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->DeltaSourceInputs).ArrayNum);
  }
  return;
}

// ServerReceiveDeltaSourceStateFrame @ 148320830

void __thiscall
UNetworkPhysicsComponent::ServerReceiveDeltaSourceStateFrame
          (UNetworkPhysicsComponent *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UNetworkPhysicsComponent_ServerReceiveDeltaSourceStateFrame);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ServerReceiveDeltaSourceStateFrame_Implementation @ 148320870

void __thiscall
UNetworkPhysicsComponent::ServerReceiveDeltaSourceStateFrame_Implementation
          (UNetworkPhysicsComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((this->bIsUsingLegacyData == false) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100342>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x3f6,"bIsUsingLegacyData"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = 0;
  if (0 < (this->DeltaSourceStates).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->DeltaSourceStates).ArrayNum) {
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
      if (*(int *)(*(longlong *)((this->DeltaSourceStates).AllocatorInstance.Data + lVar5) + 8) ==
          param_1) {
        this->LatestAcknowledgedDeltaSourceStateIndex = uVar4;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->DeltaSourceStates).ArrayNum);
  }
  return;
}

// ServerReceiveImportantInputData @ 148320960

void __thiscall
UNetworkPhysicsComponent::ServerReceiveImportantInputData
          (UNetworkPhysicsComponent *this,FNetworkPhysicsRewindDataImportantInputProxy *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  UFunction *pUVar8;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  if (param_1 == (FNetworkPhysicsRewindDataImportantInputProxy *)&local_28) goto LAB_148320a49;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)&param_1->field_0x8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1->field_0x8);
  }
  plVar1 = *(longlong **)param_1;
  uStack_20 = *(undefined8 *)&param_1->field_0x8;
  if (plVar1 == (longlong *)0x0) {
    local_res8 = (undefined8 *)0x0;
    ppuVar7 = &local_res8;
    bVar5 = false;
    bVar4 = true;
LAB_1483209ee:
    puVar6 = local_28;
    puVar2 = *ppuVar7;
    *ppuVar7 = (undefined8 *)0x0;
    if (local_28 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*local_28;
      local_28 = puVar2;
      (*(code *)*puVar3)(puVar6,1);
      puVar2 = local_28;
    }
    local_28 = puVar2;
    if ((bVar4) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (!bVar5) goto LAB_148320a49;
  }
  else {
    ppuVar7 = (undefined8 **)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res10);
    bVar5 = true;
    bVar4 = false;
    if (&local_28 != ppuVar7) goto LAB_1483209ee;
  }
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
LAB_148320a49:
  pUVar8 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UNetworkPhysicsComponent_ServerReceiveImportantInputData)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// ServerReceiveImportantInputData_Implementation @ 148320aa0

void __thiscall
UNetworkPhysicsComponent::ServerReceiveImportantInputData_Implementation
          (UNetworkPhysicsComponent *this,FNetworkPhysicsRewindDataImportantInputProxy *param_1)

{
  FSimCallbackInput *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSimCallbackInput *pFVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  
  if (param_1->field_0x10 != '\0') {
    `UNetworkPhysicsComponent::ServerReceiveImportantInputData_Implementation'::__l5::<lambda_1>::
    operator()(local_res10);
    return;
  }
  if ((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
     (*(longlong *)param_1 != 0)) {
    if ((this->bIsUsingLegacyData == false) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7117391173232100599>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                           ,0x4f7,"bIsUsingLegacyData"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if (pFVar6 != (FSimCallbackInput *)0x0) {
      (**(code **)(**(longlong **)param_1 + 0x18))();
      if (this->bValidateDataOnGameThread != false) {
        bVar4 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr);
        if (bVar4) {
          plVar2 = *(longlong **)param_1;
          pcVar3 = *(code **)(*plVar2 + 0xc0);
          pUVar7 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
          (*pcVar3)(plVar2,pUVar7);
        }
      }
      pFVar1 = pFVar6 + 0xc;
      pFVar8 = (FScriptContainerElement *)
               (**(code **)(**(longlong **)param_1 + 0x10))(*(longlong **)param_1,&local_res18);
      if ((((FScriptContainerElement *)pFVar1->_padding_ <= pFVar8) &&
          (pFVar8 < (FScriptContainerElement *)pFVar1->_padding_ +
                    (longlong)*(int *)&pFVar6[0xc].field_0xc * 8)) &&
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
      iVar5 = pFVar6[0xc].NumSteps;
      if (iVar5 == *(int *)&pFVar6[0xc].field_0xc) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pFVar1,(int *)&pFVar6[0xc].field_0xc);
      }
      pFVar6[0xc].NumSteps = iVar5 + 1;
      *(undefined8 *)((FScriptContainerElement *)pFVar1->_padding_ + (longlong)iVar5 * 8) =
           *(undefined8 *)pFVar8;
      *(undefined8 *)pFVar8 = 0;
      if (local_res18 != (undefined8 *)0x0) {
        (**(code **)*local_res18)(local_res18,1);
      }
    }
  }
  return;
}

// ServerReceiveInputCollection @ 148320c60

void __thiscall
UNetworkPhysicsComponent::ServerReceiveInputCollection
          (UNetworkPhysicsComponent *this,FNetworkPhysicsDataCollection *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UFunction *pUVar3;
  FNetworkPhysicsDataCollection local_18;
  
  local_18.DataArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.DataArray.ArrayNum = 0;
  local_18.DataArray.ArrayMax = 0;
  if (&local_18 != param_1) {
    DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>
              ((TInstancedStruct<FNetworkPhysicsPayload> *)0x0,0);
    iVar1 = (param_1->DataArray).ArrayNum;
    pFVar2 = (param_1->DataArray).AllocatorInstance.Data;
    local_18.DataArray.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.DataArray.ArrayMax == 0)) {
      local_18.DataArray.ArrayNum = 0;
      local_18.DataArray.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,local_18.DataArray.ArrayMax,(ForAnyElementType *)&local_18,iVar1,
                 &local_18.DataArray.ArrayMax);
      ConstructItems<TInstancedStruct<FNetworkPhysicsPayload>,TInstancedStruct<FNetworkPhysicsPayload>,int>
                (local_18.DataArray.AllocatorInstance.Data,
                 (TInstancedStruct<FNetworkPhysicsPayload> *)pFVar2,iVar1);
    }
  }
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UNetworkPhysicsComponent_ServerReceiveInputCollection);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_18);
  DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>
            ((TInstancedStruct<FNetworkPhysicsPayload> *)local_18.DataArray.AllocatorInstance.Data,
             local_18.DataArray.ArrayNum);
  if (local_18.DataArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.DataArray.AllocatorInstance.Data);
  }
  return;
}

// ServerReceiveInputCollection_Implementation @ 148320d60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNetworkPhysicsComponent::ServerReceiveInputCollection_Implementation
          (UNetworkPhysicsComponent *this,FNetworkPhysicsDataCollection *param_1)

{
  FNetworkPhysicsDataHelper *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackInput *pFVar4;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar5;
  undefined8 *local_res8;
  
  if ((this->bIsUsingLegacyData != false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100684>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x54c,"bIsUsingLegacyData == false"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
       ((this->InputHelper).Ptr != (FNetworkPhysicsDataHelper *)0x0)) &&
      ((param_1->DataArray).ArrayNum != 0)) &&
     (pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal),
     pFVar4 != (FSimCallbackInput *)0x0)) {
    FNetworkPhysicsDataCollection::UpdateLocalFrameFromServerFrame(param_1,0);
    if (pFVar4[0xb]._padding_ == 0) {
      pFVar1 = (this->InputHelper).Ptr;
      pTVar5 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               (**(code **)((longlong)*pFVar1 + 0x18))
                         (pFVar1,&local_res8,(param_1->DataArray).ArrayNum);
      TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(pFVar4 + 0xb),pTVar5);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    pFVar1 = (this->InputHelper).Ptr;
    (**(code **)((longlong)*pFVar1 + 0x48))(pFVar1,param_1,pFVar4[0xb]._padding_);
    if (this->ImplementationInterface_External != (INetworkPhysicsInputState_External *)0x0) {
      pFVar1 = (this->InputHelper).Ptr;
      (**(code **)((longlong)*pFVar1 + 0x58))(pFVar1,pFVar4[0xb]._padding_);
    }
    TArray<TInstancedStruct<FNetworkPhysicsPayload>,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->ReplicatedRemoteInputCollection).DataArray,
               (uint)this->InputsToNetwork_Simulated,Default);
    pFVar1 = (this->InputHelper).Ptr;
    (**(code **)((longlong)*pFVar1 + 0x38))
              (pFVar1,pFVar4[0xb]._padding_,&this->ReplicatedRemoteInputCollection);
  }
  return;
}

// ServerReceiveInputData @ 148320eb0

void __thiscall
UNetworkPhysicsComponent::ServerReceiveInputData
          (UNetworkPhysicsComponent *this,FNetworkPhysicsRewindDataInputProxy *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  UFunction *pUVar8;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  if (param_1 == (FNetworkPhysicsRewindDataInputProxy *)&local_28) goto LAB_148320f99;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)&param_1->field_0x8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1->field_0x8);
  }
  plVar1 = *(longlong **)param_1;
  uStack_20 = *(undefined8 *)&param_1->field_0x8;
  if (plVar1 == (longlong *)0x0) {
    local_res8 = (undefined8 *)0x0;
    ppuVar7 = &local_res8;
    bVar5 = false;
    bVar4 = true;
LAB_148320f3e:
    puVar6 = local_28;
    puVar2 = *ppuVar7;
    *ppuVar7 = (undefined8 *)0x0;
    if (local_28 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*local_28;
      local_28 = puVar2;
      (*(code *)*puVar3)(puVar6,1);
      puVar2 = local_28;
    }
    local_28 = puVar2;
    if ((bVar4) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (!bVar5) goto LAB_148320f99;
  }
  else {
    ppuVar7 = (undefined8 **)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res10);
    bVar5 = true;
    bVar4 = false;
    if (&local_28 != ppuVar7) goto LAB_148320f3e;
  }
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
LAB_148320f99:
  pUVar8 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UNetworkPhysicsComponent_ServerReceiveInputData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// ServerReceiveInputData_Implementation @ 148320ff0

void __thiscall
UNetworkPhysicsComponent::ServerReceiveInputData_Implementation
          (UNetworkPhysicsComponent *this,FNetworkPhysicsRewindDataInputProxy *param_1)

{
  FNetworkPhysicsDataHelper *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  FSimCallbackInput *pFVar6;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar7;
  UObject *pUVar8;
  undefined1 local_res10 [8];
  undefined8 *local_res18 [2];
  
  if (param_1->field_0x10 != '\0') {
    `UNetworkPhysicsComponent::ServerReceiveInputData_Implementation'::__l5::<lambda_1>::operator()
              (local_res10);
    return;
  }
  if (((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
      ((this->InputHelper).Ptr != (FNetworkPhysicsDataHelper *)0x0)) && (*(longlong *)param_1 != 0))
  {
    if ((this->bIsUsingLegacyData == false) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7117391173232100563>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                           ,0x4d3,"bIsUsingLegacyData"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if (pFVar6 != (FSimCallbackInput *)0x0) {
      pFVar6 = pFVar6 + 0xb;
      if ((FBaseRewindHistory *)pFVar6->_padding_ == (FBaseRewindHistory *)0x0) {
        pFVar1 = (this->InputHelper).Ptr;
        pcVar3 = *(code **)((longlong)*pFVar1 + 0x18);
        uVar5 = (**(code **)(**(longlong **)param_1 + 0xf8))();
        pTVar7 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(*pcVar3)(pFVar1,local_res18,uVar5);
        TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                  ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                    *)pFVar6,pTVar7);
        if (local_res18[0] != (undefined8 *)0x0) {
          (**(code **)*local_res18[0])(local_res18[0],1);
        }
      }
      if ((this->bValidateDataOnGameThread != false) &&
         (bVar4 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr), bVar4)) {
        plVar2 = *(longlong **)param_1;
        pcVar3 = *(code **)(*plVar2 + 0xc0);
        pUVar8 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
        (*pcVar3)(plVar2,pUVar8);
      }
      (**(code **)(**(longlong **)param_1 + 0x90))
                (*(longlong **)param_1,(FBaseRewindHistory *)pFVar6->_padding_);
      (**(code **)(**(longlong **)&this->ReplicatedRemoteInputs + 0x70))
                (*(longlong **)&this->ReplicatedRemoteInputs,1);
      (**(code **)(**(longlong **)param_1 + 0x78))
                (*(longlong **)param_1,*(undefined8 *)&this->ReplicatedRemoteInputs,1);
    }
  }
  return;
}

// SetCompareInputToTriggerRewind @ 148321550

void __thiscall
UNetworkPhysicsComponent::SetCompareInputToTriggerRewind
          (UNetworkPhysicsComponent *this,bool param_1)

{
  bool *pbVar1;
  FSimCallbackInput *pFVar2;
  
  pbVar1 = &this->bCompareInputToTriggerRewind;
  *pbVar1 = param_1;
  if (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) {
    pFVar2 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if ((pFVar2 != (FSimCallbackInput *)0x0) && (pbVar1 != (bool *)&pFVar2[9].NumSteps)) {
      *(bool *)&pFVar2[9].NumSteps = *pbVar1;
      *(undefined1 *)((longlong)&pFVar2[9].NumSteps + 1) = 1;
    }
  }
  return;
}

// SetCompareStateToTriggerRewind @ 1483215a0

void __thiscall
UNetworkPhysicsComponent::SetCompareStateToTriggerRewind
          (UNetworkPhysicsComponent *this,bool param_1,bool param_2)

{
  bool *pbVar1;
  FSimCallbackInput *pFVar2;
  undefined1 *puVar3;
  undefined1 local_res18 [16];
  
  pbVar1 = &this->bCompareStateToTriggerRewind;
  this->bCompareStateToTriggerRewindIncludeSimProxies = param_2;
  *pbVar1 = param_1;
  if (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) {
    pFVar2 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    if (pFVar2 != (FSimCallbackInput *)0x0) {
      puVar3 = (undefined1 *)((longlong)&pFVar2[9]._padding_ + 4);
      if (pbVar1 != (bool *)puVar3) {
        *puVar3 = *pbVar1;
        *(undefined1 *)((longlong)&pFVar2[9]._padding_ + 5) = 1;
      }
      puVar3 = (undefined1 *)((longlong)&pFVar2[9]._padding_ + 6);
      if (local_res18 != puVar3) {
        *puVar3 = param_2;
        *(undefined1 *)((longlong)&pFVar2[9]._padding_ + 7) = 1;
      }
    }
  }
  return;
}

// SetPhysicsObject @ 148322060

void __thiscall
UNetworkPhysicsComponent::SetPhysicsObject(UNetworkPhysicsComponent *this,FPhysicsObject *param_1)

{
  FSimCallbackInput *pFVar1;
  FSimCallbackInput local_res10;
  
  if (this->PhysicsObject != param_1) {
    this->PhysicsObject = param_1;
    if (this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) {
      pFVar1 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
      if ((pFVar1 != (FSimCallbackInput *)0x0) && (&local_res10 != pFVar1 + 5)) {
        pFVar1[5]._padding_ = (longlong)param_1;
        *(undefined1 *)&pFVar1[5].NumSteps = 1;
      }
    }
  }
  return;
}

// StaticRegisterNativesUNetworkPhysicsComponent @ 148323a00

void __cdecl UNetworkPhysicsComponent::StaticRegisterNativesUNetworkPhysicsComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UNetworkPhysicsComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 148324370

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
UNetworkPhysicsComponent::TickComponent
          (UNetworkPhysicsComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  UpdateAsyncComponent(this,false);
  NetworkMarshaledData(this);
  return;
}

// UninitializeComponent @ 148325bb0

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

void __thiscall UNetworkPhysicsComponent::UninitializeComponent(UNetworkPhysicsComponent *this)

{
  FWeakObjectPtr *pFVar1;
  FPhysicsSolverBase *this_00;
  FAsyncNetworkPhysicsComponent *pFVar2;
  bool bVar3;
  FSimCallbackInput *pFVar4;
  UWorld *pUVar5;
  FSimCallbackCommandObject *pFVar6;
  undefined ***pppuVar7;
  code *pcVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  FWeakObjectPtr local_84;
  ulonglong local_78;
  undefined1 local_70 [24];
  code *local_58;
  undefined **local_48;
  FAsyncNetworkPhysicsComponent *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pcVar8 = (code *)0x0;
  local_78 = local_78 & 0xffffffff00000000;
  UActorComponent::UninitializeComponent((UActorComponent *)this);
  if ((this->NetworkPhysicsComponent_Internal != (FAsyncNetworkPhysicsComponent *)0x0) &&
     (pFVar4 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal),
     pFVar4 != (FSimCallbackInput *)0x0)) {
    local_84.ObjectIndex = 0;
    local_84.ObjectSerialNumber = 0;
    local_78 = 0;
    FWeakObjectPtr::operator=(&local_84,(FObjectPtr)&local_78);
    pFVar1 = (FWeakObjectPtr *)((longlong)&pFVar4[3]._padding_ + 4);
    if (&local_84 != pFVar1) {
      *pFVar1 = local_84;
      pFVar4[3].field_0xc = 1;
    }
    if ((FSimCallbackInput *)local_70 != pFVar4 + 5) {
      pFVar4[5]._padding_ = 0;
      *(undefined1 *)&pFVar4[5].NumSteps = 1;
    }
    if ((FSimCallbackInput *)(local_70 + 8) != pFVar4 + 4) {
      pFVar4[4]._padding_ = 0;
      *(undefined1 *)&pFVar4[4].NumSteps = 1;
    }
  }
  pUVar5 = (UWorld *)this->_padding_;
  if ((pUVar5 == (UWorld *)0x0) &&
     (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 == (UWorld *)0x0)
     ) {
    this->NetworkPhysicsComponent_Internal = (FAsyncNetworkPhysicsComponent *)0x0;
  }
  else if ((pUVar5->PhysicsScene == (FPhysScene_Chaos *)0x0) ||
          (this_00 = (FPhysicsSolverBase *)pUVar5->PhysicsScene->_padding_,
          this_00 == (FPhysicsSolverBase *)0x0)) {
    this->NetworkPhysicsComponent_Internal = (FAsyncNetworkPhysicsComponent *)0x0;
  }
  else {
    pFVar2 = this->NetworkPhysicsComponent_Internal;
    if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x1b3,L""), bVar3)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = ::operator_new(0xc0);
    if (pFVar6 == (FSimCallbackCommandObject *)0x0) {
      pFVar6 = (FSimCallbackCommandObject *)0x0;
    }
    else {
      local_30 = (undefined ***)0x0;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UNetworkPhysicsComponent::UninitializeComponent'::`17'::<lambda_1>,1,0>
                  ::_vftable_;
      pFStack_40 = pFVar2;
      *(undefined2 *)&pFVar6->field_0x8 = 0;
      *(undefined ***)pFVar6 = &___7FSimCallbackCommandObject_Chaos__6B_;
      *(undefined2 *)&pFVar6->field_0x40 = 1;
      *(undefined8 *)&pFVar6->field_0x10 = 0;
      *(undefined8 *)&pFVar6->field_0x18 = 0;
      *(undefined8 *)&pFVar6->field_0x20 = 0;
      *(undefined8 *)&pFVar6->field_0x28 = 0;
      *(code **)&pFVar6->Func =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UNetworkPhysicsComponent::UninitializeComponent'::__l17::<lambda_1>,void>
           ::Call;
      *(undefined8 *)&(pFVar6->Func).field_0x28 = 0;
      *(undefined ***)&(pFVar6->Func).field_0x10 =
           &UE::Core::Private::Function::
            TFunction_OwnedObject<`UNetworkPhysicsComponent::UninitializeComponent'::`17'::<lambda_1>,1,0>
            ::_vftable_;
      *(FAsyncNetworkPhysicsComponent **)&(pFVar6->Func).field_0x18 = pFVar2;
      *(undefined8 *)&(pFVar6->Func).field_0x20 = local_38;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UNetworkPhysicsComponent::UninitializeComponent'::__l17::<lambda_1>,void>
                 ::Call;
      if (*(longlong *)&pFVar6->Func != 0) {
        local_58 = pcVar8;
      }
      *(undefined8 *)&pFVar6->Func2 = 0;
      *(undefined8 *)&(pFVar6->Func2).field_0x28 = 0;
      pFVar6->bFuncHasTimeParameters = false;
      pFVar6->ExecuteOnStep = -1;
      pcVar8 = (code *)0x1;
      if (*(longlong *)&pFVar6->Func == 0) {
        `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                  (local_88);
      }
    }
    if ((pcVar8 != (code *)0x0) && (local_58 != (code *)0x0)) {
      pppuVar7 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar7 = local_30;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    Chaos::FChaosMarshallingManager::RegisterSimCommand_External
              (&this_00->MarshallingManager,pFVar6);
    Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
              (this_00,(ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
    this->NetworkPhysicsComponent_Internal = (FAsyncNetworkPhysicsComponent *)0x0;
  }
  return;
}

// UpdateAsyncComponent @ 148326820

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
UNetworkPhysicsComponent::UpdateAsyncComponent(UNetworkPhysicsComponent *this,bool param_1)

{
  ENetMode *pEVar1;
  FSimCallbackInput *pFVar2;
  atomic<int> *paVar3;
  int *piVar4;
  FWeakObjectPtr *pFVar5;
  TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *this_00;
  atomic<int> aVar6;
  int iVar7;
  AActor *this_01;
  UNetworkPhysicsSettingsDataAsset *pUVar8;
  INetworkPhysicsInputState_Internal *pIVar9;
  code *pcVar10;
  int iVar11;
  bool bVar12;
  EPhysicsReplicationMode EVar13;
  bool bVar14;
  ENetMode EVar15;
  FSimCallbackInput *pFVar16;
  UWorld *pUVar17;
  APlayerController *pAVar18;
  UNetworkPhysicsSettingsComponent *pUVar19;
  FName FVar20;
  undefined8 *puVar21;
  FNetworkPhysicsSettingsData *pFVar22;
  ForAnyElementType FVar23;
  FName local_res8;
  undefined1 local_98 [8];
  FString local_90;
  int local_80;
  ENetMode local_7c;
  uint local_78 [2];
  TWeakPtr<FNetworkPhysicsSettingsData_const_,1> local_70;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *local_48;
  FSimCallbackInput local_40;
  
  bVar14 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (this->NetworkPhysicsComponent_Internal == (FAsyncNetworkPhysicsComponent *)0x0) {
    return;
  }
  pFVar16 = Chaos::ISimCallbackObject::GetProducerInputData_External
                      ((ISimCallbackObject *)this->NetworkPhysicsComponent_Internal);
  if (pFVar16 == (FSimCallbackInput *)0x0) {
    return;
  }
  bVar12 = HasServerWorld(this);
  if (!bVar12) {
    pUVar17 = (UWorld *)this->_padding_;
    if (((pUVar17 != (UWorld *)0x0) ||
        (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar17 != (UWorld *)0x0)) &&
       (pAVar18 = UWorld::GetFirstPlayerController(pUVar17), pAVar18 != (APlayerController *)0x0)) {
      piVar4 = (int *)((longlong)&pFVar16[2]._padding_ + 4);
      if (&local_80 != piVar4) {
        *piVar4 = pAVar18->NetworkPhysicsTickOffset;
        *(undefined1 *)&pFVar16[2].NumSteps = 1;
      }
    }
    if (&this->InputsToNetwork_Owner != (ushort *)&pFVar16[2].field_0xc) {
      *(ushort *)&pFVar16[2].field_0xc = this->InputsToNetwork_Owner;
      pFVar16[2].field_0xe = 1;
    }
  }
  bVar12 = IsLocallyControlled(this);
  if ((FSimCallbackInput *)local_98 != pFVar16 + 1) {
    *(bool *)&pFVar16[1]._padding_ = bVar12;
    *(undefined1 *)((longlong)&pFVar16[1]._padding_ + 1) = 1;
  }
  if (!param_1) {
    return;
  }
  pUVar17 = (UWorld *)this->_padding_;
  if ((pUVar17 != (UWorld *)0x0) ||
     (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar17 != (UWorld *)0x0)) {
    EVar15 = UWorld::InternalGetNetMode(pUVar17);
    pEVar1 = (ENetMode *)((longlong)&pFVar16[1]._padding_ + 4);
    if (&local_7c != pEVar1) {
      *pEVar1 = EVar15;
      *(undefined1 *)&pFVar16[1].NumSteps = 1;
    }
  }
  this_01 = (AActor *)this->_padding_;
  if (this_01 == (AActor *)0x0) goto LAB_148326bce;
  if (local_78 != (uint *)&pFVar16[1].field_0xc) {
    *(uint *)&pFVar16[1].field_0xc = (uint)(this_01->Role).Value;
    *(undefined1 *)&pFVar16[2]._padding_ = 1;
  }
  EVar13 = AActor::GetPhysicsReplicationMode(this_01);
  if ((FSimCallbackInput *)(local_98 + 1) != pFVar16 + 3) {
    *(EPhysicsReplicationMode *)&pFVar16[3]._padding_ = EVar13;
    *(undefined1 *)((longlong)&pFVar16[3]._padding_ + 1) = 1;
  }
  local_res8 = (FName)this_01->_padding_;
  ::FName::ToString(&local_res8,&local_90);
  FVar23.Data = local_90.Data.AllocatorInstance.Data;
  iVar7 = local_90.Data.ArrayNum;
  iVar11 = local_90.Data.ArrayMax;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  pFVar2 = pFVar16 + 6;
  if (&local_40 != pFVar2) {
    if ((void *)pFVar2->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar2->_padding_);
    }
    pFVar2->_padding_ = (longlong)FVar23.Data;
    FVar23.Data = (FScriptContainerElement *)0x0;
    pFVar16[6].NumSteps = iVar7;
    *(int *)&pFVar16[6].field_0xc = iVar11;
    if ((iVar11 == -1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (FVar23.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar23.Data);
  }
  pUVar19 = AActor::FindComponentByClass<UNetworkPhysicsSettingsComponent>(this_01);
  FVar20 = local_res8;
  if ((pUVar19 == (UNetworkPhysicsSettingsComponent *)0x0) ||
     (pUVar19->NetworkPhysicsSettings_Internal == (FNetworkPhysicsSettingsComponentAsync *)0x0)) {
LAB_148326aa4:
    bVar12 = false;
  }
  else {
    pUVar8 = (pUVar19->SettingsDataAsset).field0_0x0.DebugPtr;
    if (pUVar8 == (UNetworkPhysicsSettingsDataAsset *)0x0) {
      FVar20.ComparisonIndex.Value = 0;
      FVar20.Number = 0;
      bVar14 = true;
      goto LAB_148326aa4;
    }
    pFVar22 = (pUVar8->Settings_Internal).Object;
    FVar20 = (FName)(pUVar8->Settings_Internal).SharedReferenceCount.ReferenceController;
    if (FVar20 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar20 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar20 + 0xc) + 1);
      UNLOCK();
    }
    bVar14 = true;
    if (((pFVar22 == (FNetworkPhysicsSettingsData *)0x0) || (FVar20 == (FName)0x0)) ||
       ((int)*(atomic<int> *)((longlong)FVar20 + 8) < 1)) goto LAB_148326aa4;
    bVar12 = true;
  }
  pFVar22 = (FNetworkPhysicsSettingsData *)0x0;
  if ((bVar14) && (FVar20 != (FName)0x0)) {
    LOCK();
    paVar3 = (atomic<int> *)((longlong)FVar20 + 0xc);
    aVar6 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)FVar20 + 8))(FVar20,1);
    }
  }
  if (bVar12) {
    pUVar8 = (pUVar19->SettingsDataAsset).field0_0x0.DebugPtr;
    if (pUVar8 == (UNetworkPhysicsSettingsDataAsset *)0x0) {
      local_58 = (longlong *)0x0;
      puVar21 = &local_60;
      bVar12 = false;
      bVar14 = true;
    }
    else {
      pFVar22 = (pUVar8->Settings_Internal).Object;
      local_48 = (pUVar8->Settings_Internal).SharedReferenceCount.ReferenceController;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar21 = &local_50;
      bVar12 = true;
      bVar14 = false;
    }
    local_70.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1];
    puVar21[1] = 0;
    *puVar21 = 0;
    local_70.Object = pFVar22;
    if ((bVar14) && (local_58 != (longlong *)0x0)) {
      LOCK();
      piVar4 = (int *)((longlong)local_58 + 0xc);
      iVar7 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
    if ((bVar12) && (local_48 != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar3 = &local_48->WeakReferenceCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)(local_48->_padding_ + 8))(local_48,1);
      }
    }
    TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>::operator=
              ((TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_> *)(pFVar16 + 10),
               &local_70);
    if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_70.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
LAB_148326bce:
  this_00 = &this->ActorComponent;
  bVar14 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((bVar14) &&
     (pFVar5 = (FWeakObjectPtr *)((longlong)&pFVar16[3]._padding_ + 4), &this_00->WeakPtr != pFVar5)
     ) {
    *pFVar5 = this_00->WeakPtr;
    pFVar16[3].field_0xc = 1;
  }
  pIVar9 = this->ImplementationInterface_Internal;
  if ((pIVar9 != (INetworkPhysicsInputState_Internal *)0x0) &&
     ((FSimCallbackInput *)&this->ImplementationInterface_Internal != pFVar16 + 4)) {
    pFVar16[4]._padding_ = (longlong)pIVar9;
    *(undefined1 *)&pFVar16[4].NumSteps = 1;
  }
  return;
}

// ValidateGeneratedRepEnums @ 14832aa10

void __thiscall
UNetworkPhysicsComponent::ValidateGeneratedRepEnums
          (UNetworkPhysicsComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
    ::FName::FName(&Name_ReplicatedDeltaSourceInput,L"ReplicatedDeltaSourceInput");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_ReplicatedDeltaSourceState,L"ReplicatedDeltaSourceState");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_ReplicatedInputs,L"ReplicatedInputs");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_ReplicatedRemoteInputs,L"ReplicatedRemoteInputs");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_ReplicatedStates,L"ReplicatedStates");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar5 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&Name_ReplicatedInputCollection,L"ReplicatedInputCollection");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar5 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&Name_ReplicatedRemoteInputCollection,L"ReplicatedRemoteInputCollection");
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar5 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FName::FName(&Name_ReplicatedStateCollection,L"ReplicatedStateCollection");
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar5 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FName::FName(&Name_InputsToNetwork_Owner,L"InputsToNetwork_Owner");
    _Init_thread_footer(&::_TSS8);
  }
  if ((param_1->ArrayNum < 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_ReplicatedDeltaSourceInput == FVar4) {
    if ((param_1->ArrayNum < 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x30);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_ReplicatedDeltaSourceState == FVar4) {
      if ((param_1->ArrayNum < 5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x40);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_ReplicatedInputs == FVar4) {
        if ((param_1->ArrayNum < 6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x50);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar6;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_ReplicatedRemoteInputs == FVar4) {
          if ((param_1->ArrayNum < 7) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x60);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          FVar4 = FVar6;
          if (bVar3) {
            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_ReplicatedStates == FVar4) {
            if ((param_1->ArrayNum < 8) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x70);
            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
            FVar4 = FVar6;
            if (bVar3) {
              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
            }
            if (Name_ReplicatedInputCollection == FVar4) {
              if ((param_1->ArrayNum < 9) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x80);
              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
              FVar4 = FVar6;
              if (bVar3) {
                FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
              }
              if (Name_ReplicatedRemoteInputCollection == FVar4) {
                if ((param_1->ArrayNum < 10) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x90);
                bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                FVar4 = FVar6;
                if (bVar3) {
                  FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                }
                if (Name_ReplicatedStateCollection == FVar4) {
                  if ((param_1->ArrayNum < 0xb) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                  if (bVar3) {
                    FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
                  }
                  if (Name_InputsToNetwork_Owner == FVar6) {
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\NetworkPhysicsComponent.gen.cpp"
                     ,0x6de,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNetworkPhysicsComponent"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// __DefaultConstructor @ 14832bb60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UNetworkPhysicsComponent::__DefaultConstructor(FObjectInitializer *param_1)

{
  UNetworkPhysicsComponent *this;
  undefined8 local_res8;
  
  this = (UNetworkPhysicsComponent *)param_1->Obj;
  if (this != (UNetworkPhysicsComponent *)0x0) {
    UActorComponent::UActorComponent((UActorComponent *)this,param_1);
    this->InputsToNetwork_Owner = 3;
    this->InputsToNetwork_OwnerDefault = 3;
    this->ImplementationInterface_Internal = (INetworkPhysicsInputState_Internal *)0x0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined8 *)&this->ReplicatedDeltaSourceInput = 0;
    this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    *(undefined8 *)&(this->ReplicatedDeltaSourceInput).field_0x8 = 0;
    this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
    (this->ReplicatedDeltaSourceInput).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedDeltaSourceState = 0;
    *(undefined8 *)&(this->ReplicatedDeltaSourceState).field_0x8 = 0;
    (this->ReplicatedDeltaSourceState).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedImportantInput = 0;
    *(undefined8 *)&(this->ReplicatedImportantInput).field_0x8 = 0;
    (this->ReplicatedImportantInput).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedImportantState = 0;
    *(undefined8 *)&(this->ReplicatedImportantState).field_0x8 = 0;
    (this->ReplicatedImportantState).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedInputs = 0;
    *(undefined8 *)&(this->ReplicatedInputs).field_0x8 = 0;
    (this->ReplicatedInputs).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedRemoteInputs = 0;
    *(undefined8 *)&(this->ReplicatedRemoteInputs).field_0x8 = 0;
    (this->ReplicatedRemoteInputs).field_0x10 = 0;
    *(undefined8 *)&this->ReplicatedStates = 0;
    *(undefined8 *)&(this->ReplicatedStates).field_0x8 = 0;
    (this->ReplicatedStates).field_0x10 = 0;
    (this->ReplicatedInputCollection).DataArray.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->ReplicatedInputCollection).DataArray.ArrayNum = 0;
    (this->ReplicatedInputCollection).DataArray.ArrayMax = 0;
    (this->ReplicatedRemoteInputCollection).DataArray.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->ReplicatedRemoteInputCollection).DataArray.ArrayNum = 0;
    (this->ReplicatedRemoteInputCollection).DataArray.ArrayMax = 0;
    (this->ReplicatedStateCollection).DataArray.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->ReplicatedStateCollection).DataArray.ArrayNum = 0;
    (this->ReplicatedStateCollection).DataArray.ArrayMax = 0;
    this->ImplementationInterface_External = (INetworkPhysicsInputState_External *)0x0;
    this->bIsUsingLegacyData = false;
    (this->StateHistory).Object = (FBaseRewindHistory *)0x0;
    (this->StateHistory).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->InputHistory).Object = (FBaseRewindHistory *)0x0;
    (this->InputHistory).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->InputHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
    (this->StateHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
    (this->InputDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
    (this->StateDataDefault_Legacy).Ptr = (FNetworkPhysicsData *)0x0;
    this->InputsToNetwork_Simulated = 2;
    this->StatesToNetwork = 1;
    (this->DeltaSourceInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeltaSourceInputs).ArrayNum = 0;
    (this->DeltaSourceInputs).ArrayMax = 0;
    this->LatestAcknowledgedDeltaSourceInputIndex = 0;
    this->LatestCachedDeltaSourceInputIndex = 0;
    this->TimeToSyncDeltaSourceInput = 0.0;
    (this->DeltaSourceStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeltaSourceStates).ArrayNum = 0;
    (this->DeltaSourceStates).ArrayMax = 0;
    this->LatestAcknowledgedDeltaSourceStateIndex = 0;
    this->LatestCachedDeltaSourceStateIndex = 0;
    this->TimeToSyncDeltaSourceState = 0.0;
    (this->ActorComponent).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = 0;
    FWeakObjectPtr::operator=(&(this->ActorComponent).WeakPtr,(FObjectPtr)&local_res8);
    this->PhysicsObject = (FPhysicsObject *)0x0;
    this->bIsRelayingLocalInputs = false;
    this->bStopRelayingLocalInputsDeferred = false;
    this->bCompareStateToTriggerRewind = false;
    this->bCompareStateToTriggerRewindIncludeSimProxies = false;
    this->bCompareInputToTriggerRewind = false;
    this->bEnableUnreliableFlow = true;
    this->bEnableReliableFlow = false;
    this->bValidateDataOnGameThread = false;
    InitPhysics(this);
  }
  return;
}

// __VTableCtorCaller @ 14832bfe0

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

UObject * __cdecl UNetworkPhysicsComponent::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined1 *)&this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined1 *)&this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[1].ComponentTags.ArrayNum = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    *(undefined8 *)&this[1].field_0x98 = 0;
    *(undefined1 *)&this[1].PhysicsStateAsyncCreationScene = 0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[2].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].ComponentTags.ArrayNum = 0;
    this[2].ComponentTags.ArrayMax = 0;
    *(undefined4 *)&this[2].AssetUserData.AllocatorInstance.Data = 0x30003;
    *(undefined4 *)((longlong)&this[2].AssetUserData.AllocatorInstance.Data + 4) = 0x10002;
    this[2].AssetUserData.ArrayNum = 0;
    this[2].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[2].field_0x88 = 0;
    this[2].UCSSerializationIndex = 0;
    this[2].RegistrationState = None;
    *(undefined8 *)&this[2].field_0x98 = 0;
    this[2].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[2].OwnerPrivate = (AActor *)0x0;
    this[2].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[2].field_0xb8 = 0;
    this[3]._padding_ = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 3),(FObjectPtr)&local_res10);
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x100;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execMulticastReceiveImportantInputData @ 14832e2a0

void __cdecl
UNetworkPhysicsComponent::execMulticastReceiveImportantInputData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x508))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// execMulticastReceiveImportantStateData @ 14832e350

void __cdecl
UNetworkPhysicsComponent::execMulticastReceiveImportantStateData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x500))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// execOnRep_SetReplicatedDeltaSourceInput @ 14832e4d0

void __cdecl
UNetworkPhysicsComponent::execOnRep_SetReplicatedDeltaSourceInput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[5].field_0x8 != '\0') {
    `UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceInput'::__l5::<lambda_1>::operator()
              (local_res8);
    return;
  }
  if (*(longlong *)&param_1[4].field_0x20 != 0) {
    if (param_1[10].field_0x18 == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100255>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x39f,"bIsUsingLegacyData");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    AddDeltaSourceInput((UNetworkPhysicsComponent *)param_1);
    return;
  }
  return;
}

// execOnRep_SetReplicatedDeltaSourceState @ 14832e560

void __cdecl
UNetworkPhysicsComponent::execOnRep_SetReplicatedDeltaSourceState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[5].field_0x20 != '\0') {
    `UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceState'::__l5::<lambda_1>::operator()
              (local_res8);
    return;
  }
  if (*(longlong *)&param_1[5].field_0x10 != 0) {
    if (param_1[10].field_0x18 == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100335>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x3ef,"bIsUsingLegacyData");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    AddDeltaSourceState((UNetworkPhysicsComponent *)param_1);
    return;
  }
  return;
}

// execOnRep_SetReplicatedInputCollection @ 14832e5f0

void __cdecl
UNetworkPhysicsComponent::execOnRep_SetReplicatedInputCollection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSimCallbackInput *pFVar3;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar4;
  undefined8 *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[10].field_0x18 != '\0') &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100719>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x56f,"bIsUsingLegacyData == false"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((*(ISimCallbackObject **)&param_1[10].field_0x20 != (ISimCallbackObject *)0x0) &&
       (*(longlong *)&param_1[0xb].field_0x20 != 0)) && (*(int *)&param_1[9].field_0x8 != 0)) &&
     (pFVar3 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         (*(ISimCallbackObject **)&param_1[10].field_0x20),
     pFVar3 != (FSimCallbackInput *)0x0)) {
    FNetworkPhysicsDataCollection::UpdateLocalFrameFromServerFrame
              ((FNetworkPhysicsDataCollection *)(param_1 + 9),0);
    if (pFVar3[0xb]._padding_ == 0) {
      pTVar4 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               (**(code **)(**(longlong **)&param_1[0xb].field_0x20 + 0x18))
                         (*(longlong **)&param_1[0xb].field_0x20,&local_res8,
                          *(undefined4 *)&param_1[9].field_0x8);
      TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(pFVar3 + 0xb),pTVar4);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    (**(code **)(**(longlong **)&param_1[0xb].field_0x20 + 0x48))
              (*(longlong **)&param_1[0xb].field_0x20,param_1 + 9,pFVar3[0xb]._padding_);
  }
  return;
}

// execOnRep_SetReplicatedInputs @ 14832e710

void __cdecl
UNetworkPhysicsComponent::execOnRep_SetReplicatedInputs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  FSimCallbackInput *pFVar5;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar6;
  undefined8 *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((param_1[7].field_0x18 == '\0') && (*(longlong *)&param_1[10].field_0x20 != 0)) &&
      (*(longlong *)&param_1[0xb].field_0x20 != 0)) && (*(longlong *)&param_1[7].field_0x8 != 0)) {
    if (param_1[10].field_0x18 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100511>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x49f,"bIsUsingLegacyData");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       (*(ISimCallbackObject **)&param_1[10].field_0x20);
    if (pFVar5 != (FSimCallbackInput *)0x0) {
      pFVar5 = pFVar5 + 0xb;
      if ((FBaseRewindHistory *)pFVar5->_padding_ == (FBaseRewindHistory *)0x0) {
        plVar1 = *(longlong **)&param_1[0xb].field_0x20;
        pcVar2 = *(code **)(*plVar1 + 0x18);
        uVar4 = (**(code **)(**(longlong **)&param_1[7].field_0x8 + 0xf8))();
        pTVar6 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(*pcVar2)(plVar1,&local_res8,uVar4);
        TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                  ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                    *)pFVar5,pTVar6);
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      (**(code **)(**(longlong **)&param_1[7].field_0x8 + 0x90))
                (*(longlong **)&param_1[7].field_0x8,(FBaseRewindHistory *)pFVar5->_padding_);
    }
  }
  return;
}

// execOnRep_SetReplicatedRemoteInputCollection @ 14832e850

void __cdecl
UNetworkPhysicsComponent::execOnRep_SetReplicatedRemoteInputCollection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSimCallbackInput *pFVar3;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar4;
  undefined8 *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[10].field_0x18 != '\0') &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100742>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x586,"bIsUsingLegacyData == false"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((*(ISimCallbackObject **)&param_1[10].field_0x20 != (ISimCallbackObject *)0x0) &&
       (*(longlong *)&param_1[0xb].field_0x20 != 0)) && (*(int *)&param_1[9].field_0x18 != 0)) &&
     (pFVar3 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         (*(ISimCallbackObject **)&param_1[10].field_0x20),
     pFVar3 != (FSimCallbackInput *)0x0)) {
    FNetworkPhysicsDataCollection::UpdateLocalFrameFromServerFrame
              ((FNetworkPhysicsDataCollection *)&param_1[9].field_0x10,0);
    if (pFVar3[0xb]._padding_ == 0) {
      pTVar4 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               (**(code **)(**(longlong **)&param_1[0xb].field_0x20 + 0x18))
                         (*(longlong **)&param_1[0xb].field_0x20,&local_res8,
                          *(undefined4 *)&param_1[9].field_0x18);
      TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(pFVar3 + 0xb),pTVar4);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    (**(code **)(**(longlong **)&param_1[0xb].field_0x20 + 0x48))
              (*(longlong **)&param_1[0xb].field_0x20,&param_1[9].field_0x10,pFVar3[0xb]._padding_);
  }
  return;
}

// execOnRep_SetReplicatedRemoteInputs @ 14832e970

void __cdecl
UNetworkPhysicsComponent::execOnRep_SetReplicatedRemoteInputs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  FSimCallbackInput *pFVar5;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar6;
  undefined8 *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((param_1[8].field_0x8 == '\0') && (*(longlong *)&param_1[10].field_0x20 != 0)) &&
      (*(longlong *)&param_1[0xb].field_0x20 != 0)) && (*(longlong *)&param_1[7].field_0x20 != 0)) {
    if (param_1[10].field_0x18 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100538>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x4ba,"bIsUsingLegacyData");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       (*(ISimCallbackObject **)&param_1[10].field_0x20);
    if (pFVar5 != (FSimCallbackInput *)0x0) {
      pFVar5 = pFVar5 + 0xb;
      if ((FBaseRewindHistory *)pFVar5->_padding_ == (FBaseRewindHistory *)0x0) {
        plVar1 = *(longlong **)&param_1[0xb].field_0x20;
        pcVar2 = *(code **)(*plVar1 + 0x18);
        uVar4 = (**(code **)(**(longlong **)&param_1[7].field_0x20 + 0xf8))();
        pTVar6 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(*pcVar2)(plVar1,&local_res8,uVar4);
        TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                  ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                    *)pFVar5,pTVar6);
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      (**(code **)(**(longlong **)&param_1[7].field_0x20 + 0x90))
                (*(longlong **)&param_1[7].field_0x20,(FBaseRewindHistory *)pFVar5->_padding_);
    }
  }
  return;
}

// execOnRep_SetReplicatedStateCollection @ 14832eab0

void __cdecl
UNetworkPhysicsComponent::execOnRep_SetReplicatedStateCollection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSimCallbackInput *pFVar3;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar4;
  undefined8 *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[10].field_0x18 != '\0') &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100765>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x59d,"bIsUsingLegacyData == false"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((*(ISimCallbackObject **)&param_1[10].field_0x20 != (ISimCallbackObject *)0x0) &&
       (*(longlong *)(param_1 + 0xc) != 0)) && (*(int *)(param_1 + 10) != 0)) &&
     (pFVar3 = Chaos::ISimCallbackObject::GetProducerInputData_External
                         (*(ISimCallbackObject **)&param_1[10].field_0x20),
     pFVar3 != (FSimCallbackInput *)0x0)) {
    FNetworkPhysicsDataCollection::UpdateLocalFrameFromServerFrame
              ((FNetworkPhysicsDataCollection *)&param_1[9].field_0x20,0);
    if (*(longlong *)&pFVar3[0xb].NumSteps == 0) {
      pTVar4 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               (**(code **)(**(longlong **)(param_1 + 0xc) + 0x18))
                         (*(longlong **)(param_1 + 0xc),&local_res8,*(undefined4 *)(param_1 + 10));
      TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )&pFVar3[0xb].NumSteps,pTVar4);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xc) + 0x48))
              (*(longlong **)(param_1 + 0xc),&param_1[9].field_0x20,
               *(undefined8 *)&pFVar3[0xb].NumSteps);
  }
  return;
}

// execOnRep_SetReplicatedStates @ 14832ebd0

void __cdecl
UNetworkPhysicsComponent::execOnRep_SetReplicatedStates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *this;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  FSimCallbackInput *pFVar5;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar6;
  undefined8 *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((param_1[8].field_0x20 == '\0') && (*(longlong *)&param_1[10].field_0x20 != 0)) &&
      (*(longlong *)(param_1 + 0xc) != 0)) && (*(longlong *)&param_1[8].field_0x10 != 0)) {
    if (param_1[10].field_0x18 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7117391173232100484>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                         ,0x484,"bIsUsingLegacyData");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       (*(ISimCallbackObject **)&param_1[10].field_0x20);
    if (pFVar5 != (FSimCallbackInput *)0x0) {
      this = &pFVar5[0xb].NumSteps;
      if (*(longlong *)this == 0) {
        plVar1 = *(longlong **)(param_1 + 0xc);
        pcVar2 = *(code **)(*plVar1 + 0x18);
        uVar4 = (**(code **)(**(longlong **)&param_1[8].field_0x10 + 0xf8))();
        pTVar6 = (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *
                 )(*pcVar2)(plVar1,&local_res8,uVar4);
        TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>::operator=
                  ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                    *)this,pTVar6);
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      (**(code **)(**(longlong **)&param_1[8].field_0x10 + 0x90))
                (*(longlong **)&param_1[8].field_0x10,*(undefined8 *)this);
    }
  }
  return;
}

// execServerReceiveDeltaSourceInputFrame @ 14832ee80

void __cdecl
UNetworkPhysicsComponent::execServerReceiveDeltaSourceInputFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x528))(param_1,local_res8[0]);
  return;
}

// execServerReceiveDeltaSourceStateFrame @ 14832ef10

void __cdecl
UNetworkPhysicsComponent::execServerReceiveDeltaSourceStateFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x520))(param_1,local_res8[0]);
  return;
}

// execServerReceiveImportantInputData @ 14832efa0

void __cdecl
UNetworkPhysicsComponent::execServerReceiveImportantInputData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x510))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// execServerReceiveInputCollection @ 14832f050

void __cdecl
UNetworkPhysicsComponent::execServerReceiveInputCollection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TInstancedStruct<FNetworkPhysicsPayload> *local_18;
  undefined8 local_10;
  
  local_18 = (TInstancedStruct<FNetworkPhysicsPayload> *)0x0;
  local_10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,&local_18);
  DestructItems<TInstancedStruct<FNetworkPhysicsPayload>,int>(local_18,(int)local_10);
  if (local_18 != (TInstancedStruct<FNetworkPhysicsPayload> *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execServerReceiveInputData @ 14832f110

void __cdecl
UNetworkPhysicsComponent::execServerReceiveInputData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x518))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// operator() @ 150529830

bool __thiscall
`UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceInput'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7117391173232100247>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7117391173232100247>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150529870

bool __thiscall
`UNetworkPhysicsComponent::OnRep_SetReplicatedDeltaSourceState'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7117391173232100327>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7117391173232100327>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505298b0

bool __thiscall
`UNetworkPhysicsComponent::ServerReceiveImportantInputData_Implementation'::__l5::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7117391173232100591>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7117391173232100591>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505298f0

bool __thiscall
`UNetworkPhysicsComponent::ServerReceiveInputData_Implementation'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7117391173232100555>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7117391173232100555>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

