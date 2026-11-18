// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 87

// DestroyObject @ 14734a180

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
::DestroyObject(TIntrusiveReferenceController<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(this->ObjectStorage).Pad != 0) {
    LOCK();
    puVar1 = *(undefined8 **)(this->ObjectStorage).Pad;
    *(undefined8 *)(this->ObjectStorage).Pad = 0;
    UNLOCK();
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      puVar3 = (undefined8 *)puVar1[1];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      FMemory::Free(puVar1);
      puVar1 = puVar2;
    }
  }
  return;
}

// DestroyObject @ 1473f94d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>,1>
::DestroyObject(TIntrusiveReferenceController<TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int>
            (*(TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
               **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 147446bf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBoneContainer,1>::DestroyObject
          (TIntrusiveReferenceController<FBoneContainer,1> *this)

{
  FBoneContainer::~FBoneContainer((FBoneContainer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1474cb730

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnimationUpdateSharedContext,1>::
DestroyObject(TIntrusiveReferenceController<FAnimationUpdateSharedContext,1> *this)

{
  void *pvVar1;
  
  UE::Anim::FMessageStack::~FMessageStack((FMessageStack *)((this->ObjectStorage).Pad + 0x148));
  (this->ObjectStorage).Pad[0x140] = '\0';
  (this->ObjectStorage).Pad[0x141] = '\0';
  (this->ObjectStorage).Pad[0x142] = '\0';
  (this->ObjectStorage).Pad[0x143] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x138);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1474cb780

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnimExecutionContext::FData,1>::DestroyObject
          (TIntrusiveReferenceController<FAnimExecutionContext::FData,1> *this)

{
  return;
}

// DestroyObject @ 1474cb790

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FActiveStateMachineScope,1>::
DestroyObject(TIntrusiveReferenceController<UE::Anim::FActiveStateMachineScope,1> *this)

{
  return;
}

// DestroyObject @ 1474cb7a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FCachedPoseSkippedUpdateHandler,1>::
DestroyObject(TIntrusiveReferenceController<UE::Anim::FCachedPoseSkippedUpdateHandler,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x10) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x38);
    puVar2 = (this->ObjectStorage).Pad + 0x20;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001474cb7b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)puVar2 + 0x10))();
    return;
  }
  return;
}

// DestroyObject @ 1474cb7d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FDeadBlendingRequester,1>::
DestroyObject(TIntrusiveReferenceController<UE::Anim::FDeadBlendingRequester,1> *this)

{
  return;
}

// DestroyObject @ 1474cb7e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FInertializationRequester,1>::
DestroyObject(TIntrusiveReferenceController<UE::Anim::FInertializationRequester,1> *this)

{
  return;
}

// DestroyObject @ 1475bf8b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSoundSource::FDebugInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FSoundSource::FDebugInfo,1> *this)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x28));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1475bf8f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkeletonRemapping,1>::DestroyObject
          (TIntrusiveReferenceController<FSkeletonRemapping,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 147634310

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActivatedReverb,1>::DestroyObject
          (TIntrusiveReferenceController<FActivatedReverb,1> *this)

{
  return;
}

// DestroyObject @ 147634320

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActiveSound,1>::DestroyObject
          (TIntrusiveReferenceController<FActiveSound,1> *this)

{
  FActiveSound::~FActiveSound((FActiveSound *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147634330

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioBusProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FAudioBusProxy,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FAudioBusProxy__6B_;
  return;
}

// DestroyObject @ 14781c010

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCharacterMovementComponentAsyncOutput,1>::
DestroyObject(TIntrusiveReferenceController<FCharacterMovementComponentAsyncOutput,1> *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FCharacterMovementComponentAsyncOutput__6B_;
  puVar1 = *(undefined8 **)((this->ObjectStorage).Pad + 0x358);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x348);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// DestroyObject @ 1478c3120

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActorInstanceData,1>::DestroyObject
          (TIntrusiveReferenceController<FActorInstanceData,1> *this)

{
  FInstanceCacheDataBase::~FInstanceCacheDataBase((FInstanceCacheDataBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1478c3130

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInputActionBinding,1>::DestroyObject
          (TIntrusiveReferenceController<FInputActionBinding,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x38));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 1478c3160

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FComponentInstanceDataCache,1>::DestroyObject
          (TIntrusiveReferenceController<FComponentInstanceDataCache,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  DestructItems<TStructOnScope<FActorComponentInstanceData>,int>
            (*(TStructOnScope<FActorComponentInstanceData> **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// DestroyObject @ 1478c31c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInstanceDataSceneProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FInstanceDataSceneProxy,1> *this)

{
  FInstanceDataSceneProxy::~FInstanceDataSceneProxy((FInstanceDataSceneProxy *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14793f3a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkelMeshRefPoseOverride,1>::DestroyObject
          (TIntrusiveReferenceController<FSkelMeshRefPoseOverride,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 147a3f6f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLegacySpline,1>::DestroyObject
          (TIntrusiveReferenceController<FLegacySpline,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 147a3f750

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNewSpline,1>::DestroyObject
          (TIntrusiveReferenceController<FNewSpline,1> *this)

{
  FNewSpline::~FNewSpline((FNewSpline *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147ad02a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,1>::
DestroyObject(TIntrusiveReferenceController<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,1>
              *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ObjectStorage);
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147ad02e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDelegate<void___cdecl(enum_ETouchIndex::Type,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>,1>
::DestroyObject(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 147ad0320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FObjectReplicator,1>::DestroyObject
          (TIntrusiveReferenceController<FObjectReplicator,1> *this)

{
  FObjectReplicator::~FObjectReplicator((FObjectReplicator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147b513a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSMInstanceElementIdMapEntry,1>::DestroyObject
          (TIntrusiveReferenceController<FSMInstanceElementIdMapEntry,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0xa8] = '\0';
  (this->ObjectStorage).Pad[0xa9] = '\0';
  (this->ObjectStorage).Pad[0xaa] = '\0';
  (this->ObjectStorage).Pad[0xab] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xa0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x60));
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 147bd74d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UViewportStatsSubsystem::FUniqueDisplayData,1>
::DestroyObject(TIntrusiveReferenceController<UViewportStatsSubsystem::FUniqueDisplayData,1> *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(this->ObjectStorage).Pad;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bd74dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// DestroyObject @ 147bd74f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInputDeviceSubsystemProcessor,1>::
DestroyObject(TIntrusiveReferenceController<FInputDeviceSubsystemProcessor,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInputProcessor__6B_;
  return;
}

// DestroyObject @ 147bd7510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGameLayerManager,1>::DestroyObject
          (TIntrusiveReferenceController<SGameLayerManager,1> *this)

{
  SGameLayerManager::~SGameLayerManager((SGameLayerManager *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147c425f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UGameViewportClient::FPngFileData,1>::
DestroyObject(TIntrusiveReferenceController<UGameViewportClient::FPngFileData,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 147cedd60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPrecomputedInstanceSpatialHashData_const_,1>
::DestroyObject(TIntrusiveReferenceController<FPrecomputedInstanceSpatialHashData_const_,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 147cedda0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInputActionHandlerDynamicSignature,1>::
DestroyObject(TIntrusiveReferenceController<FInputActionHandlerDynamicSignature,1> *this)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147ceddb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInputAxisHandlerDynamicSignature,1>::
DestroyObject(TIntrusiveReferenceController<FInputAxisHandlerDynamicSignature,1> *this)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147ceddc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInputTouchHandlerDynamicSignature,1>::
DestroyObject(TIntrusiveReferenceController<FInputTouchHandlerDynamicSignature,1> *this)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147ceddd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInputVectorAxisHandlerDynamicSignature,1>::
DestroyObject(TIntrusiveReferenceController<FInputVectorAxisHandlerDynamicSignature,1> *this)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147cedde0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInstanceSceneDataImmutable,1>::DestroyObject
          (TIntrusiveReferenceController<FInstanceSceneDataImmutable,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 147cede00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStaticMeshInstanceData,1>::DestroyObject
          (TIntrusiveReferenceController<FStaticMeshInstanceData,1> *this)

{
  FStaticMeshInstanceData::~FStaticMeshInstanceData((FStaticMeshInstanceData *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 147cede10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FUpdatableInstanceDataSceneProxy,1>::
DestroyObject(TIntrusiveReferenceController<FUpdatableInstanceDataSceneProxy,1> *this)

{
  FUpdatableInstanceDataSceneProxy::~FUpdatableInstanceDataSceneProxy
            ((FUpdatableInstanceDataSceneProxy *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147d95090

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FISMPrecomputedSpatialHashData_const_,1>::
DestroyObject(TIntrusiveReferenceController<FISMPrecomputedSpatialHashData_const_,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 147d950d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FISMCInstanceDataSceneProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FISMCInstanceDataSceneProxy,1> *this)

{
  FISMCInstanceDataSceneProxy::~FISMCInstanceDataSceneProxy
            ((FISMCInstanceDataSceneProxy *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147d950e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FISMCInstanceDataSceneProxyLegacyReordered,1>
::DestroyObject(TIntrusiveReferenceController<FISMCInstanceDataSceneProxyLegacyReordered,1> *this)

{
  FStaticMeshInstanceData *this_00;
  void *pvVar1;
  
  this_00 = *(FStaticMeshInstanceData **)((this->ObjectStorage).Pad + 0x1c0);
  if (this_00 != (FStaticMeshInstanceData *)0x0) {
    FStaticMeshInstanceData::~FStaticMeshInstanceData(this_00);
    ::operator_delete(this_00,0x50);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x1a8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FISMCInstanceDataSceneProxy::~FISMCInstanceDataSceneProxy
            ((FISMCInstanceDataSceneProxy *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 147d95140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FISMCInstanceDataSceneProxyNoGPUScene,1>::
DestroyObject(TIntrusiveReferenceController<FISMCInstanceDataSceneProxyNoGPUScene,1> *this)

{
  FISMCInstanceDataSceneProxyNoGPUScene::~FISMCInstanceDataSceneProxyNoGPUScene
            ((FISMCInstanceDataSceneProxyNoGPUScene *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14809f010

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRPCAnalytics,1>::DestroyObject
          (TIntrusiveReferenceController<FRPCAnalytics,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14809f050

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRPCTrackingInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FRPCTrackingInfo,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x110));
  return;
}

// DestroyObject @ 14809f070

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNetFieldExportGroup,1>::DestroyObject
          (TIntrusiveReferenceController<FNetFieldExportGroup,1> *this)

{
  void *pvVar1;
  
  DestructItems<FNetFieldExport,int>
            (*(FNetFieldExport **)((this->ObjectStorage).Pad + 0x18),
             *(int *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14809f0c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Net::Private::FNetPingICMP,1>::
DestroyObject(TIntrusiveReferenceController<UE::Net::Private::FNetPingICMP,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014809f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14809f0f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Net::Private::FNetPingUDPQoS,1>::
DestroyObject(TIntrusiveReferenceController<UE::Net::Private::FNetPingUDPQoS,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014809f110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 1481071f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_FXBudget,1>::
DestroyObject(TIntrusiveReferenceController<FParticlePerfStatsListener_FXBudget,1> *this)

{
  FParticlePerfStatsListener_FXBudget::~FParticlePerfStatsListener_FXBudget
            ((FParticlePerfStatsListener_FXBudget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14814eaf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_TimedTest,1>::
DestroyObject(TIntrusiveReferenceController<FParticlePerfStatsListener_TimedTest,1> *this)

{
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14816f960

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_CSVProfiler,1>::
DestroyObject(TIntrusiveReferenceController<FParticlePerfStatsListener_CSVProfiler,1> *this)

{
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14816f970

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_DebugRender,1>::
DestroyObject(TIntrusiveReferenceController<FParticlePerfStatsListener_DebugRender,1> *this)

{
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1482f4850

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNetworkPhysicsSettingsData,1>::DestroyObject
          (TIntrusiveReferenceController<FNetworkPhysicsSettingsData,1> *this)

{
  FNetworkPhysicsSettingsData::~FNetworkPhysicsSettingsData
            ((FNetworkPhysicsSettingsData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14836ada0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVirtualJoystick,1>::DestroyObject
          (TIntrusiveReferenceController<SVirtualJoystick,1> *this)

{
  void *pvVar1;
  FControlData *pFVar2;
  
  pFVar2 = *(FControlData **)((this->ObjectStorage).Pad + 0x488);
  if (pFVar2 == (FControlData *)0x0) {
    pFVar2 = (FControlData *)((this->ObjectStorage).Pad + 0x218);
  }
  DestructItems<SVirtualJoystick::FControlData,int>
            (pFVar2,*(int *)((this->ObjectStorage).Pad + 0x490));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x488);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1484d4610

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,1>::
DestroyObject(TIntrusiveReferenceController<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,1>
              *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 1484d4630

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 1484d4650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<FString,TSizedDefaultAllocator<32>_>,1>
::DestroyObject(TIntrusiveReferenceController<TArray<FString,TSizedDefaultAllocator<32>_>,1> *this)

{
  void *pvVar1;
  
  DestructItems<FString,int>
            (*(FString **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1484d4690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<enum_ISaveGameSystem::ESaveExistsResult,1>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 1484d46a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<bool,1>::DestroyObject
          (TIntrusiveReferenceController<bool,1> *this)

{
  return;
}

// DestroyObject @ 148521ca0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FConvexVolume,1>::DestroyObject
          (TIntrusiveReferenceController<FConvexVolume,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x1e0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xc0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1486b05e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Audio::AttenuationInterface::GetInterface'::__l2::FInterface,1>::
DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 1486b05f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Audio::ListenerOrientationInterface::GetInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 1486b0600

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Audio::SourceOrientationInterface::GetInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 1486b0610

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Audio::SpatializationInterface::GetInterface'::__l2::FInterface,1>::
DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 1486b0620

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCanvas,1>::DestroyObject
          (TIntrusiveReferenceController<FCanvas,1> *this)

{
  FCanvas::~FCanvas((FCanvas *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1486b0630

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInvisibleToWidgetReflectorMetaData,1>::
DestroyObject(TIntrusiveReferenceController<FInvisibleToWidgetReflectorMetaData,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1486b0650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSoundCueParameterTransmitter,1>::
DestroyObject(TIntrusiveReferenceController<FSoundCueParameterTransmitter,1> *this)

{
  FSoundCueParameterTransmitter::~FSoundCueParameterTransmitter
            ((FSoundCueParameterTransmitter *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1486b0660

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSoundWaveData,1>::DestroyObject
          (TIntrusiveReferenceController<FSoundWaveData,1> *this)

{
  FSoundWaveData::~FSoundWaveData((FSoundWaveData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1486b0670

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSoundWaveProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FSoundWaveProxy,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FSoundWaveProxy__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 1486b0690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCanvas,1>::DestroyObject
          (TIntrusiveReferenceController<SCanvas,1> *this)

{
  SCanvas::~SCanvas((SCanvas *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1486b06a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDebugCanvas,1>::DestroyObject
          (TIntrusiveReferenceController<SDebugCanvas,1> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x228));
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1486b06d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPlayerLayer,1>::DestroyObject
          (TIntrusiveReferenceController<SPlayerLayer,1> *this)

{
  SOverlay::~SOverlay((SOverlay *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148792720

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStreamableHandle,1>::DestroyObject
          (TIntrusiveReferenceController<FStreamableHandle,1> *this)

{
  FStreamableHandle::~FStreamableHandle((FStreamableHandle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148792730

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStereoLayerAdditionalFlagsManager,1>::
DestroyObject(TIntrusiveReferenceController<FStereoLayerAdditionalFlagsManager,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x98] = '\0';
  (this->ObjectStorage).Pad[0x99] = '\0';
  (this->ObjectStorage).Pad[0x9a] = '\0';
  (this->ObjectStorage).Pad[0x9b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x90);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x50));
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14882f720

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Math::TVector<double>,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Math::TVector<double>,1> *this)

{
  return;
}

// DestroyObject @ 14882f730

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Tick::FActiveSyncPoint,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Tick::FActiveSyncPoint,1> *this)

{
  UE::Tick::FActiveSyncPoint::~FActiveSyncPoint((FActiveSyncPoint *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14882f740

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActiveSubtitle,1>::DestroyObject
          (TIntrusiveReferenceController<FActiveSubtitle,1> *this)

{
  void *pvVar1;
  
  DestructItems<FSubtitleCue,int>
            (*(FSubtitleCue **)((this->ObjectStorage).Pad + 0x10),
             *(int *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14882f780

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMemoryReader,1>::DestroyObject
          (TIntrusiveReferenceController<FMemoryReader,1> *this)

{
  FArchive::~FArchive((FArchive *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148889120

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLoadPackageAsyncProgressDelegate,1>::
DestroyObject(TIntrusiveReferenceController<FLoadPackageAsyncProgressDelegate,1> *this)

{
  TTypeCompatibleBytes<FLoadPackageAsyncProgressDelegate> *lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  lpCriticalSection = &this->ObjectStorage;
  if (lpCriticalSection == (TTypeCompatibleBytes<FLoadPackageAsyncProgressDelegate> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(int *)((this->ObjectStorage).Pad + 0x30) != 0) &&
     (puVar1 = *(undefined8 **)((this->ObjectStorage).Pad + 0x28), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((this->ObjectStorage).Pad + 0x28),0,0,0x10);
    (this->ObjectStorage).Pad[0x30] = '\0';
    (this->ObjectStorage).Pad[0x31] = '\0';
    (this->ObjectStorage).Pad[0x32] = '\0';
    (this->ObjectStorage).Pad[0x33] = '\0';
  }
  if (lpCriticalSection != (TTypeCompatibleBytes<FLoadPackageAsyncProgressDelegate> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001488891bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// DestroyObject @ 148925a50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVisualizeRTWidget::FRow,1>::DestroyObject
          (TIntrusiveReferenceController<SVisualizeRTWidget::FRow,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x460));
  (this->ObjectStorage).Pad[0x450] = '\0';
  (this->ObjectStorage).Pad[0x451] = '\0';
  (this->ObjectStorage).Pad[0x452] = '\0';
  (this->ObjectStorage).Pad[0x453] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x448);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x408));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<FRTInfo,1>_>::~STableRow<TSharedPtr<FRTInfo,1>_>
            ((STableRow<TSharedPtr<FRTInfo,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148925ac0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<FRTInfo,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FRTInfo,1>_>,1> *this)

{
  SListView<TSharedPtr<FRTInfo,1>_>::~SListView<TSharedPtr<FRTInfo,1>_>
            ((SListView<TSharedPtr<FRTInfo,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148925ad0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<FRTInfo,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<FRTInfo,1>_>,1> *this)

{
  STableRow<TSharedPtr<FRTInfo,1>_>::~STableRow<TSharedPtr<FRTInfo,1>_>
            ((STableRow<TSharedPtr<FRTInfo,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148925ae0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FRTInfo,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FRTInfo,1>_>,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 148925b30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCanvasTileRendererItem::FRenderData,1>::
DestroyObject(TIntrusiveReferenceController<FCanvasTileRendererItem::FRenderData,1> *this)

{
  FCanvasTileRendererItem::FRenderData::~FRenderData((FRenderData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148925b40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCanvasTriangleRendererItem::FRenderData,1>::
DestroyObject(TIntrusiveReferenceController<FCanvasTriangleRendererItem::FRenderData,1> *this)

{
  FCanvasTriangleRendererItem::FRenderData::~FRenderData((FRenderData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148925b50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_SceneTexturesCaptureInfo,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_SceneTexturesCaptureInfo,1> *this)

{
  FWN_SceneTexturesCaptureInfo::~FWN_SceneTexturesCaptureInfo
            ((FWN_SceneTexturesCaptureInfo *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148925b60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVisualizeRTWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SVisualizeRTWidget,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FRTInfo,1>,int>
            (*(TSharedPtr<FRTInfo,1> **)((this->ObjectStorage).Pad + 0x2b0),
             *(int *)((this->ObjectStorage).Pad + 0x2b8));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2b0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148a501a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FContentBundleClient,1>::DestroyObject
          (TIntrusiveReferenceController<FContentBundleClient,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((this->ObjectStorage).Pad + 0x10);
  return;
}

