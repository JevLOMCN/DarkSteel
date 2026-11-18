// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 97

// GetOwningComponent<UPrimitiveComponent> @ 148241150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
          (FPhysScene_Chaos *this,IPhysicsProxyBase *param_1)

{
  TObjectPtr<UPrimitiveComponent> *pTVar1;
  UPrimitiveComponent *SRWLock;
  UPrimitiveComponent *pUVar2;
  
  pUVar2 = (UPrimitiveComponent *)0x0;
  SRWLock = pUVar2;
  if (Chaos::CVars::bEnableAsyncInitBody) {
    SRWLock = (UPrimitiveComponent *)&this->PhysicsProxyComponentMapsLock;
  }
  if (SRWLock != (UPrimitiveComponent *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  pTVar1 = TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
           ::Find((TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
                   *)&this->PhysicsProxyToComponentMap,param_1);
  if (pTVar1 != (TObjectPtr<UPrimitiveComponent> *)0x0) {
    pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  }
  if (SRWLock != (UPrimitiveComponent *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pUVar2;
}

// FPhysScene_Chaos @ 14824f5d0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FPhysScene_Chaos * __thiscall
FPhysScene_Chaos::FPhysScene_Chaos(FPhysScene_Chaos *this,AActor *param_1,FName *param_2)

{
  PSRWLOCK SRWLock;
  TUniquePtr<IPhysicsReplication,TDefaultDelete<IPhysicsReplication>_> *pTVar1;
  TUniquePtr<IPhysicsReplicationLOD,TDefaultDelete<IPhysicsReplicationLOD>_> *pTVar2;
  TMap<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
  *this_00;
  TMap<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  longlong lVar3;
  IPhysicsReplication *pIVar4;
  IPhysicsReplicationLOD *pIVar5;
  code *pcVar6;
  bool bVar7;
  UPhysicsSettings *pUVar8;
  UWorld *pUVar9;
  FPhysScene_Chaos *pFVar10;
  undefined8 *puVar11;
  FPhysicsReplication *this_02;
  FPhysicsReplicationLOD *this_03;
  UWorld *pUVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  UChaosEventRelay *pUVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStackY_158 [32];
  FLLMScope local_120 [2];
  AActor *local_118;
  UWorld *local_110;
  UWorld *local_108;
  UWorld *local_100;
  UWorld *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  FMemScope local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pUVar8 = UPhysicsSettings::Get();
  fVar17 = __real_bf800000;
  if (pUVar8->bTickPhysicsAsync != false) {
    pUVar8 = UPhysicsSettings::Get();
    fVar17 = pUVar8->AsyncFixedTimeStepSize;
  }
  pUVar12 = (UWorld *)0x0;
  pUVar9 = pUVar12;
  if (param_1 != (AActor *)0x0) {
    pUVar9 = AActor::GetWorld(param_1);
  }
  FChaosScene::FChaosScene((FChaosScene *)this,(UObject *)pUVar9,(double)fVar17,param_2);
  this->_padding_ = (longlong)&___7FPhysScene_Chaos__6B_;
  pTVar1 = &this->PhysicsReplication;
  *(undefined8 *)&this->OnPhysScenePreTick = 0;
  pTVar2 = &this->PhysicsReplicationLOD;
  *(undefined8 *)&(this->OnPhysScenePreTick).field_0x8 = 0;
  *(undefined8 *)&(this->OnPhysScenePreTick).field_0x10 = 0;
  *(undefined8 *)&(this->OnPhysScenePreTick).field_0x18 = 2;
  *(undefined8 *)&this->OnPhysSceneStep = 0;
  *(undefined8 *)&(this->OnPhysSceneStep).field_0x8 = 0;
  *(undefined8 *)&(this->OnPhysSceneStep).field_0x10 = 0;
  *(undefined8 *)&(this->OnPhysSceneStep).field_0x18 = 2;
  *(undefined8 *)&this->PendingMigratedPhysicsStateByComponent = 0;
  *(undefined8 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x8 = 0;
  *(undefined8 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x20 = 0;
  *(undefined4 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x28 = 0;
  *(undefined4 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x34 = 0;
  *(undefined8 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x40 = 0;
  *(undefined4 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x48 = 0;
  (this->PhysicsReplicationCache).Ptr = (FPhysicsReplicationCache *)0x0;
  *(undefined8 *)&(this->CollisionEventRegistrations).Elements = 0;
  *(undefined8 *)&(this->CollisionEventRegistrations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionEventRegistrations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CollisionEventRegistrations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionEventRegistrations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollisionEventRegistrations).Elements.field_0x34 = 0;
  (this->CollisionEventRegistrations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CollisionEventRegistrations).HashSize = 0;
  *(undefined8 *)&(this->GlobalCollisionEventRegistrations).Elements = 0;
  *(undefined8 *)&(this->GlobalCollisionEventRegistrations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GlobalCollisionEventRegistrations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GlobalCollisionEventRegistrations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GlobalCollisionEventRegistrations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GlobalCollisionEventRegistrations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlobalCollisionEventRegistrations).Elements.field_0x34 = 0;
  (this->GlobalCollisionEventRegistrations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GlobalCollisionEventRegistrations).HashSize = 0;
  *(undefined8 *)&(this->GlobalRemovalEventRegistrations).Elements = 0;
  *(undefined8 *)&(this->GlobalRemovalEventRegistrations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GlobalRemovalEventRegistrations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GlobalRemovalEventRegistrations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GlobalRemovalEventRegistrations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GlobalRemovalEventRegistrations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlobalRemovalEventRegistrations).Elements.field_0x34 = 0;
  (this->GlobalRemovalEventRegistrations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GlobalRemovalEventRegistrations).HashSize = 0;
  *(undefined8 *)&this->ContactPairToPendingNotifyMap = 0;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x34 = 0;
  *(undefined8 *)&(this->ContactPairToPendingNotifyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x48 = 0;
  (this->PendingCollisionNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCollisionNotifies).ArrayNum = 0;
  (this->PendingCollisionNotifies).ArrayMax = 0;
  pTVar1->Ptr = (IPhysicsReplication *)0x0;
  pTVar2->Ptr = (IPhysicsReplicationLOD *)0x0;
  (this->DeferredKinematicUpdateSkelMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredKinematicUpdateSkelMeshes).ArrayNum = 0;
  (this->DeferredKinematicUpdateSkelMeshes).ArrayMax = 0;
  *(undefined8 *)&(this->DeferredCreatePhysicsStateComponents).Elements = 0;
  *(undefined8 *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x34 = 0;
  (this->DeferredCreatePhysicsStateComponents).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->DeferredCreatePhysicsStateComponents).HashSize = 0;
  (this->AsyncPhysicsStateJobQueue).Ptr = (FPhysScene_AsyncPhysicsStateJobQueue *)0x0;
  (this->PhysicsProxyComponentMapsLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->CollisionEventRegistrationsLock).Mutex.Mutex.Ptr = (void *)0x0;
  this_00 = &this->PhysicsProxyToComponentMap;
  *(undefined8 *)&this_00->field_0x0 = 0;
  this_01 = &this->ComponentToPhysicsProxyMap;
  *(undefined8 *)&(this->PhysicsProxyToComponentMap).field_0x8 = 0;
  *(undefined8 *)&(this->PhysicsProxyToComponentMap).field_0x20 = 0;
  (this->BodyInstances).Ptr = (TArrayCollectionArray<FBodyInstance_*> *)0x0;
  (this->MNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MNotifies).ArrayNum = 0;
  (this->MNotifies).ArrayMax = 0;
  *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x28 = 0;
  *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x34 = 0;
  *(undefined8 *)&(this->PhysicsProxyToComponentMap).field_0x40 = 0;
  *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x48 = 0;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->ComponentToPhysicsProxyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentToPhysicsProxyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentToPhysicsProxyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x48 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SolverActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_118 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->SolverActor).WeakPtr,(FObjectPtr)&local_118);
  this->LastEventDispatchTime = -1.0;
  this->LastBreakEventDispatchTime = -1.0;
  this->LastRemovalEventDispatchTime = -1.0;
  this->LastCrumblingEventDispatchTime = -1.0;
  (this->ChaosEventRelay).field0_0x0.DebugPtr = (UChaosEventRelay *)0x0;
  this->AsyncPhysicsTickCallback = (FAsyncPhysicsTickCallback *)0x0;
  this->bIsWorldPaused = false;
  FLLMScope::FLLMScope(local_120,ChaosScene,false,None,Default,true);
  FMemScope::FMemScope(&local_e0,ChaosScene,true);
  if (*(int *)&(this->PhysicsProxyToComponentMap).field_0x8 !=
      *(int *)&(this->PhysicsProxyToComponentMap).field_0x34) {
    TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
                      *)this_00);
    *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x8 = 0;
    if (*(int *)&(this->PhysicsProxyToComponentMap).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->PhysicsProxyToComponentMap).field_0xc);
    }
    *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x34 = 0;
    *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x28 = 0;
  }
  if (*(int *)&(this->ComponentToPhysicsProxyMap).field_0x8 !=
      *(int *)&(this->ComponentToPhysicsProxyMap).field_0x34) {
    TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_01);
    TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->ComponentToPhysicsProxyMap).field_0x8);
    *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x8 = 0;
    if (*(int *)&(this->ComponentToPhysicsProxyMap).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_01,0,
                 (int *)&(this->ComponentToPhysicsProxyMap).field_0xc);
    }
    *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x34 = 0;
    *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x28 = 0;
  }
  lVar3 = *(longlong *)(this->_padding_ + 0xbd8);
  SRWLock = (PSRWLOCK)(lVar3 + 0x20);
  AcquireSRWLockShared(SRWLock);
  if ((*(int *)(lVar3 + 0x10) < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventID < EventContainers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x202,L"Registering event Handler for an event ID that does not exist"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
    return pFVar10;
  }
  if ((*(int *)(lVar3 + 0x10) < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
    return pFVar10;
  }
  plVar16 = (longlong *)**(undefined8 **)(lVar3 + 8);
  pcVar6 = *(code **)(*plVar16 + 8);
  pUVar9 = ::operator_new(0x20);
  local_110 = pUVar12;
  if (pUVar9 != (UWorld *)0x0) {
    pUVar9->_padding_ = (longlong)this;
    pUVar9->_padding_ =
         (longlong)
         &___7__TRawEventHandler_UFCollisionEventData_Chaos__VFPhysScene_Chaos___Chaos__6B_;
    pUVar9->_padding_ = (longlong)HandleCollisionEvents;
    pUVar9->_padding_ = 0;
    local_110 = pUVar9;
  }
  (*pcVar6)(plVar16,&local_110);
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockShared(SRWLock);
  if ((*(int *)(lVar3 + 0x10) < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventID < EventContainers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x202,L"Registering event Handler for an event ID that does not exist"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
    return pFVar10;
  }
  if ((*(int *)(lVar3 + 0x10) < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
    return pFVar10;
  }
  plVar16 = *(longlong **)(*(longlong *)(lVar3 + 8) + 8);
  pcVar6 = *(code **)(*plVar16 + 8);
  pUVar9 = ::operator_new(0x20);
  local_108 = pUVar12;
  if (pUVar9 != (UWorld *)0x0) {
    pUVar9->_padding_ = (longlong)this;
    pUVar9->_padding_ =
         (longlong)&___7__TRawEventHandler_UFBreakingEventData_Chaos__VFPhysScene_Chaos___Chaos__6B_
    ;
    pUVar9->_padding_ = (longlong)HandleBreakingEvents;
    pUVar9->_padding_ = 0;
    local_108 = pUVar9;
  }
  (*pcVar6)(plVar16,&local_108);
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockShared(SRWLock);
  if ((*(int *)(lVar3 + 0x10) < 5) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventID < EventContainers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x202,L"Registering event Handler for an event ID that does not exist"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
    return pFVar10;
  }
  if ((*(int *)(lVar3 + 0x10) < 5) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
    return pFVar10;
  }
  plVar16 = *(longlong **)(*(longlong *)(lVar3 + 8) + 0x20);
  pcVar6 = *(code **)(*plVar16 + 8);
  pUVar9 = ::operator_new(0x20);
  local_100 = pUVar12;
  if (pUVar9 != (UWorld *)0x0) {
    pUVar9->_padding_ = (longlong)this;
    pUVar9->_padding_ =
         (longlong)&___7__TRawEventHandler_UFRemovalEventData_Chaos__VFPhysScene_Chaos___Chaos__6B_;
    pUVar9->_padding_ = (longlong)HandleRemovalEvents;
    pUVar9->_padding_ = 0;
    local_100 = pUVar9;
  }
  (*pcVar6)(plVar16,&local_100);
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockShared(SRWLock);
  if ((*(int *)(lVar3 + 0x10) < 6) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventID < EventContainers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x202,L"Registering event Handler for an event ID that does not exist"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
    return pFVar10;
  }
  if ((*(int *)(lVar3 + 0x10) < 6) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
    return pFVar10;
  }
  plVar16 = *(longlong **)(*(longlong *)(lVar3 + 8) + 0x28);
  pcVar6 = *(code **)(*plVar16 + 8);
  pUVar9 = ::operator_new(0x20);
  local_f8 = pUVar12;
  if (pUVar9 != (UWorld *)0x0) {
    pUVar9->_padding_ = (longlong)this;
    pUVar9->_padding_ =
         (longlong)
         &___7__TRawEventHandler_UFCrumblingEventData_Chaos__VFPhysScene_Chaos___Chaos__6B_;
    pUVar9->_padding_ = (longlong)HandleCrumblingEvents;
    pUVar9->_padding_ = 0;
    local_f8 = pUVar9;
  }
  (*pcVar6)(plVar16,&local_f8);
  ReleaseSRWLockShared(SRWLock);
  pIVar4 = pTVar1->Ptr;
  pTVar1->Ptr = (IPhysicsReplication *)0x0;
  if (pIVar4 != (IPhysicsReplication *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  if (PhysicsReplicationFactory.Object != (IPhysicsReplicationFactory *)0x0) {
    if ((PhysicsReplicationFactory.Object == (IPhysicsReplicationFactory *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
      return pFVar10;
    }
    puVar11 = (undefined8 *)
              (**(code **)*PhysicsReplicationFactory.Object)
                        (PhysicsReplicationFactory.Object,&local_f0,this);
    if (pTVar1 != (TUniquePtr<IPhysicsReplication,TDefaultDelete<IPhysicsReplication>_> *)puVar11) {
      pIVar4 = pTVar1->Ptr;
      pTVar1->Ptr = (IPhysicsReplication *)*puVar11;
      *puVar11 = 0;
      if (pIVar4 != (IPhysicsReplication *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
    }
    if (local_f0 != (undefined8 *)0x0) {
      (**(code **)*local_f0)(local_f0,1);
    }
  }
  if (pTVar1->Ptr == (IPhysicsReplication *)0x0) {
    this_02 = ::operator_new(0x88);
    pUVar9 = pUVar12;
    if (this_02 != (FPhysicsReplication *)0x0) {
      pUVar9 = (UWorld *)FPhysicsReplication::FPhysicsReplication(this_02,this);
    }
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IPhysicsReplication *)pUVar9;
    if (pIVar4 != (IPhysicsReplication *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
  }
  pIVar5 = pTVar2->Ptr;
  pTVar2->Ptr = (IPhysicsReplicationLOD *)0x0;
  if (pIVar5 != (IPhysicsReplicationLOD *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  if (PhysicsReplicationFactory.Object != (IPhysicsReplicationFactory *)0x0) {
    if ((PhysicsReplicationFactory.Object == (IPhysicsReplicationFactory *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPhysScene_Chaos *)(*pcVar6)();
      return pFVar10;
    }
    puVar11 = (undefined8 *)
              (**(code **)((longlong)*PhysicsReplicationFactory.Object + 8))
                        (PhysicsReplicationFactory.Object,&local_e8,this);
    if (pTVar2 != (TUniquePtr<IPhysicsReplicationLOD,TDefaultDelete<IPhysicsReplicationLOD>_> *)
                  puVar11) {
      pIVar5 = pTVar2->Ptr;
      pTVar2->Ptr = (IPhysicsReplicationLOD *)*puVar11;
      *puVar11 = 0;
      if (pIVar5 != (IPhysicsReplicationLOD *)0x0) {
        (**(code **)*pIVar5)(pIVar5,1);
      }
    }
    if (local_e8 != (undefined8 *)0x0) {
      (**(code **)*local_e8)(local_e8,1);
    }
  }
  if (pTVar2->Ptr == (IPhysicsReplicationLOD *)0x0) {
    this_03 = ::operator_new(0x20);
    if (this_03 != (FPhysicsReplicationLOD *)0x0) {
      pUVar12 = (UWorld *)FPhysicsReplicationLOD::FPhysicsReplicationLOD(this_03,this);
    }
    pIVar5 = pTVar2->Ptr;
    pTVar2->Ptr = (IPhysicsReplicationLOD *)pUVar12;
    if (pIVar5 != (IPhysicsReplicationLOD *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
  }
  TMulticastDelegate<void___cdecl(FPhysScene_Chaos_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FPhysicsDelegates::OnPhysSceneInit,this);
  pUVar13 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar13,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar14 = UChaosEventRelay::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar14);
  local_d8._8_8_ = pUVar13;
  pUVar15 = (UChaosEventRelay *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar16 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UChaosEventRelay *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->ChaosEventRelay).field0_0x0.DebugPtr = pUVar15;
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(local_120);
  return this;
}

// ~FPhysScene_Chaos @ 148252cb0

void __thiscall FPhysScene_Chaos::~FPhysScene_Chaos(FPhysScene_Chaos *this)

{
  FAsyncPhysicsTickCallback *pFVar1;
  longlong lVar2;
  IPhysicsReplication *pIVar3;
  IPhysicsReplicationLOD *pIVar4;
  FPhysicsReplicationCache *pFVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  TArrayCollectionArray<FBodyInstance_*> *pTVar8;
  FPhysScene_AsyncPhysicsStateJobQueue *this_00;
  ForElementType<FSetElementId> FVar9;
  code *pcVar10;
  bool bVar11;
  BOOLEAN BVar12;
  int iVar13;
  PSRWLOCK SRWLock;
  ForAnyElementType *pFVar14;
  FAsyncPhysicsTickCallback *local_18 [2];
  
  this->_padding_ = (longlong)&___7FPhysScene_Chaos__6B_;
  pFVar1 = this->AsyncPhysicsTickCallback;
  if (pFVar1 != (FAsyncPhysicsTickCallback *)0x0) {
    lVar2 = this->_padding_;
    SRWLock = (PSRWLOCK)0x0;
    if (Chaos::CVars::bEnableAsyncInitBody != false) {
      SRWLock = (PSRWLOCK)(lVar2 + 0x1a0);
    }
    local_18[0] = pFVar1;
    if (SRWLock != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive(SRWLock);
    }
    *(undefined1 *)((longlong)&local_18[0]->_padding_ + 1) = 1;
    lVar2 = *(longlong *)(lVar2 + 0xc0);
    pFVar14 = (ForAnyElementType *)(lVar2 + 0x2b0);
    if ((pFVar14->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar14->Data + (longlong)*(int *)(lVar2 + 700) * 8))
    {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar13 = *(int *)(lVar2 + 0x2b8);
    if (iVar13 == *(int *)(lVar2 + 700)) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar14,(int *)(lVar2 + 700));
    }
    *(int *)(lVar2 + 0x2b8) = iVar13 + 1;
    *(FAsyncPhysicsTickCallback **)(pFVar14->Data + (longlong)iVar13 * 8) = local_18[0];
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  ProcessDeferredCreatePhysicsState(this);
  pIVar3 = (this->PhysicsReplication).Ptr;
  if (pIVar3 != (IPhysicsReplication *)0x0) {
    (this->PhysicsReplication).Ptr = (IPhysicsReplication *)0x0;
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->PhysicsReplicationLOD).Ptr;
  if (pIVar4 != (IPhysicsReplicationLOD *)0x0) {
    (this->PhysicsReplicationLOD).Ptr = (IPhysicsReplicationLOD *)0x0;
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pFVar5 = (this->PhysicsReplicationCache).Ptr;
  if (pFVar5 != (FPhysicsReplicationCache *)0x0) {
    (this->PhysicsReplicationCache).Ptr = (FPhysicsReplicationCache *)0x0;
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  TMulticastDelegate<void___cdecl(FPhysScene_Chaos_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FPhysicsDelegates::OnPhysSceneTerm,this);
  if (SyncCaller != (FPhysicsThreadSyncCaller *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&SyncCaller->OnUpdateWorldPause
               ,this);
  }
  *(undefined4 *)&(this->ComponentToPhysicsProxyMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ComponentToPhysicsProxyMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentToPhysicsProxyMap);
  *(undefined4 *)&(this->PhysicsProxyToComponentMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->PhysicsProxyToComponentMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PhysicsProxyToComponentMap);
  DestructItems<FCollisionNotifyInfo,int>
            ((FCollisionNotifyInfo *)(this->MNotifies).AllocatorInstance.Data,
             (this->MNotifies).ArrayNum);
  pFVar7 = (this->MNotifies).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pTVar8 = (this->BodyInstances).Ptr;
  if (pTVar8 != (TArrayCollectionArray<FBodyInstance_*> *)0x0) {
    (**(code **)(*(longlong *)pTVar8 + 0x30))(pTVar8,1);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CollisionEventRegistrationsLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CollisionEventRegistrationsLock);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PhysicsProxyComponentMapsLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PhysicsProxyComponentMapsLock);
  }
  this_00 = (this->AsyncPhysicsStateJobQueue).Ptr;
  if (this_00 != (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
    FPhysScene_AsyncPhysicsStateJobQueue::_scalar_deleting_destructor_(this_00,1);
  }
  (this->DeferredCreatePhysicsStateComponents).HashSize = 0;
  FVar9 = (this->DeferredCreatePhysicsStateComponents).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DeferredCreatePhysicsStateComponents).Elements);
  pFVar7 = (this->DeferredKinematicUpdateSkelMeshes).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pIVar4 = (this->PhysicsReplicationLOD).Ptr;
  if (pIVar4 != (IPhysicsReplicationLOD *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar3 = (this->PhysicsReplication).Ptr;
  if (pIVar3 != (IPhysicsReplication *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  DestructItems<FCollisionNotifyInfo,int>
            ((FCollisionNotifyInfo *)(this->PendingCollisionNotifies).AllocatorInstance.Data,
             (this->PendingCollisionNotifies).ArrayNum);
  pFVar7 = (this->PendingCollisionNotifies).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  *(undefined4 *)&(this->ContactPairToPendingNotifyMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ContactPairToPendingNotifyMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FPhysScene_Chaos::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPhysScene_Chaos::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPhysScene_Chaos::FUniqueContactPairKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContactPairToPendingNotifyMap);
  (this->GlobalRemovalEventRegistrations).HashSize = 0;
  FVar9 = (this->GlobalRemovalEventRegistrations).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GlobalRemovalEventRegistrations).Elements);
  (this->GlobalCollisionEventRegistrations).HashSize = 0;
  FVar9 = (this->GlobalCollisionEventRegistrations).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GlobalCollisionEventRegistrations).Elements);
  (this->CollisionEventRegistrations).HashSize = 0;
  FVar9 = (this->CollisionEventRegistrations).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CollisionEventRegistrations).Elements);
  pFVar5 = (this->PhysicsReplicationCache).Ptr;
  if (pFVar5 != (FPhysicsReplicationCache *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  *(undefined4 *)&(this->PendingMigratedPhysicsStateByComponent).field_0x48 = 0;
  pvVar6 = *(void **)&(this->PendingMigratedPhysicsStateByComponent).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingMigratedPhysicsStateByComponent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPhysSceneStep).field_0x8,*(int *)&(this->OnPhysSceneStep).field_0x10);
  pvVar6 = *(void **)&(this->OnPhysSceneStep).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPhysSceneStep);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPhysScenePreTick).field_0x8,*(int *)&(this->OnPhysScenePreTick).field_0x10);
  pvVar6 = *(void **)&(this->OnPhysScenePreTick).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPhysScenePreTick);
  FChaosScene::~FChaosScene((FChaosScene *)this);
  return;
}

// operator() @ 148257870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FPhysScene_Chaos::UpdateKinematicsOnDeferredSkelMeshes'::__l89::<lambda_1>::operator()
          (void *this,int param_1)

{
  short sVar1;
  FBodyInstance *this_00;
  TGeometryParticle<double,3> *pTVar2;
  FImplicitObject *pFVar3;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  double dVar13;
  UPhysicsAsset *pUVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  USkinnedMeshComponent *pUVar21;
  FSingleParticlePhysicsProxy *this_01;
  undefined8 *puVar22;
  uint uVar23;
  longlong lVar24;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FVar25;
  longlong lVar26;
  uint uVar27;
  TReferenceControllerBase<1> *pTVar28;
  undefined8 *puVar29;
  uint uVar30;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  undefined1 local_2d8 [4];
  uint local_2d4;
  int local_2d0;
  longlong local_2c8;
  TReferenceControllerBase<1> *local_2c0;
  USkinnedMeshComponent *local_2b8;
  void *local_2b0;
  longlong local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FWeakObjectPtr *local_280;
  longlong local_278;
  UPhysicsAsset *local_270;
  longlong local_268;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  double local_220;
  double dStack_218;
  double local_210;
  FBodyInstance *local_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  FBodyInstance *local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  FString local_1c8;
  FString local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  TTransform<double> local_148;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_308;
  lVar24 = *(longlong *)this;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  lVar26 = (longlong)param_1;
  local_2d0 = 0;
  iVar20 = *(int *)(lVar24 + 0x2c0);
  uVar19 = 0;
  if (param_1 < iVar20) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  local_2b0 = this;
  if ((uVar19 == 0) &&
     (local_2e8 = lVar26, local_2e0 = (longlong)iVar20,
     bVar18 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_280 = (FWeakObjectPtr *)(*(longlong *)(lVar24 + 0x2b8) + lVar26 * 0xc);
  pUVar21 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(local_280);
  if ((pUVar21 != (USkinnedMeshComponent *)0x0) &&
     (*(undefined4 *)((longlong)&pUVar21[1]._padding_ + 4) = 0xffffffff,
     -1 < (char)pUVar21[1]._padding_)) {
    local_2b8 = pUVar21;
    local_270 = USkinnedMeshComponent::GetPhysicsAsset(pUVar21);
    iVar20 = (int)pUVar21[1]._padding_;
    local_268 = (longlong)iVar20;
    lVar24 = *(longlong *)((longlong)this + 8);
    local_2a8 = (longlong)pUVar21->CurrentReadComponentTransforms << 4;
    uVar19 = 0;
    if (param_1 < *(int *)(lVar24 + 0x108)) {
      uVar19 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (local_2e8 = lVar26, local_2e0 = (longlong)*(int *)(lVar24 + 0x108),
       bVar18 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar13 = __real_3f1a36e2e0000000;
    uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if (*(longlong *)(lVar24 + 0x100) != 0) {
      lVar24 = *(longlong *)(lVar24 + 0x100);
    }
    local_2d4 = 0;
    local_2d0 = *(int *)(lVar24 + lVar26 * 4);
    local_278 = (longlong)local_2d0;
    if (0 < iVar20) {
      local_2c8 = 0;
      pUVar21 = local_2b8;
      do {
        lVar24 = local_2c8;
        iVar20 = (int)pUVar21[1]._padding_;
        uVar27 = ~local_2d4;
        uVar30 = 0;
        if ((int)local_2d4 < iVar20) {
          uVar30 = uVar27 >> 0x1f;
        }
        if (uVar30 == 0) {
          local_2e8 = (longlong)(int)local_2d4;
          local_2e0 = (longlong)iVar20;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        this_00 = *(FBodyInstance **)(pUVar21[1]._padding_ + lVar24 * 8);
        if ((GKinematicDeferralCheckValidBodies == false) ||
           ((this_00 != (FBodyInstance *)0x0 &&
            (bVar18 = FBodyInstance::IsValidBodyInstance(this_00), bVar18)))) {
          this_01 = FBodyInstance::GetPhysicsActor(this_00);
          pTVar28 = local_2c0;
          if (GKinematicDeferralCheckValidBodies == false) {
LAB_148257c11:
            bVar18 = false;
          }
          else {
            if (this_01 != (FSingleParticlePhysicsProxy *)0x0) {
              pTVar28 = (TReferenceControllerBase<1> *)this_01->_padding_;
              bVar9 = true;
              lVar24 = this_01->_padding_;
              if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar28->SharedReferenceCount =
                     (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_2c0 = pTVar28;
              if (lVar24 != 0) {
                if ((this_01->_padding_ == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar18)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(char *)this_01->_padding_ == '\0') goto LAB_148257c11;
                bVar18 = true;
                goto LAB_148257c13;
              }
            }
            bVar18 = true;
            pTVar28 = local_2c0;
          }
LAB_148257c13:
          if (bVar9) {
            bVar9 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar28);
          }
          if (bVar18) {
            if ((GKinematicDeferralLogInvalidBodies != false) && (2 < (byte)LogChaos._0_1_)) {
              if (pUVar21->_padding_ == 0) {
                bVar10 = true;
                ::FString::FString(&local_1b8,"None");
              }
              else {
                local_290 = *(FName *)(pUVar21->_padding_ + 0x18);
                bVar11 = true;
                ::FName::ToString(&local_290,&local_230);
              }
              local_288 = (FName)pUVar21->_padding_;
              ::FName::ToString(&local_288,&local_250);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
              if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_250.Data.AllocatorInstance.Data);
              }
              if ((bVar10) &&
                 (bVar10 = false,
                 local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              if ((bVar11) &&
                 (bVar11 = false,
                 local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_230.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            bVar18 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics
                               ((FBodyInstanceCore *)this_00);
            if (((!bVar18) || (bVar18 = FBodyInstance::IsValidBodyInstance(this_00), !bVar18)) ||
               ((char)local_280[1].ObjectIndex != '\0')) {
              lVar24 = local_2a8;
              sVar1 = this_00->InstanceBoneIndex;
              if (sVar1 != -1) {
                if ((sVar1 < 0) ||
                   (iVar20 = *(int *)((longlong)&pUVar21->ComponentSpaceTransformsArray[0].ArrayNum
                                     + local_2a8), iVar20 <= sVar1)) {
                  if (4 < (byte)LogChaos._0_1_) {
                    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
                  }
                }
                else {
                  if ((sVar1 < 0) &&
                     (local_2e8 = (longlong)sVar1, local_2e0 = (longlong)iVar20,
                     bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar18)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_148.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  local_148.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_148.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                            );
                  local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  local_148.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                            );
                  local_148.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_148.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_148.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_148.Translation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                  local_148.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_148.Translation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20
                            );
                  local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_148.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  local_148.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply
                            (&local_148,
                             (TTransform<double> *)
                             ((longlong)sVar1 * 0x60 +
                             *(longlong *)
                              ((longlong)
                               &pUVar21->ComponentSpaceTransformsArray[0].AllocatorInstance.Data +
                              lVar24)),(TTransform<double> *)&pUVar21->_padding_);
                  uVar23 = local_2d4 + local_2d0;
                  lVar24 = *(longlong *)((longlong)local_2b0 + 0x10);
                  lVar26 = local_2c8 + local_278;
                  uVar30 = 0;
                  if ((int)uVar23 < *(int *)(lVar24 + 0x208)) {
                    uVar30 = ~uVar23 >> 0x1f;
                  }
                  if (uVar30 == 0) {
                    local_2e8 = (longlong)(int)uVar23;
                    local_2e0 = (longlong)*(int *)(lVar24 + 0x208);
                    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar18) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  if (*(longlong *)(lVar24 + 0x200) != 0) {
                    lVar24 = *(longlong *)(lVar24 + 0x200);
                  }
                  *(FSingleParticlePhysicsProxy **)(lVar24 + lVar26 * 8) = this_01;
                  dVar17 = local_148.Translation.ZW.m128d_f64[0];
                  dVar15 = local_148.Translation.XY.m128d_f64[0];
                  dVar16 = local_148.Translation.XY.m128d_f64[1];
                  local_168 = local_148.Translation.XY.m128d_f64[0];
                  dStack_160 = local_148.Translation.XY.m128d_f64[1];
                  local_158 = local_148.Translation.ZW.m128d_f64[0];
                  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
                  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
                  pTVar2 = (this_01->Particle).Ptr;
                  local_220 = dVar15;
                  dStack_218 = dVar16;
                  local_210 = dVar17;
                  *(double *)&(pTVar2->MXR).Property.MX = dVar15;
                  *(double *)&(pTVar2->MXR).Property.MX.field_0x8 = dVar16;
                  *(double *)&(pTVar2->MXR).Property.MX.field_0x10 = dVar17;
                  pTVar28 = (TReferenceControllerBase<1> *)this_01->_padding_;
                  lVar24 = this_01->_padding_;
                  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar28->SharedReferenceCount =
                         (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  if ((lVar24 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x44d,L""), bVar18)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar28);
                  iVar20 = IPhysicsProxyBase::GetSolverSyncTimestamp_External
                                     ((IPhysicsProxyBase *)this_01);
                  *(int *)(lVar24 + 0x20) = iVar20;
                  *(double *)(lVar24 + 8) = local_220;
                  *(double *)(lVar24 + 0x10) = dStack_218;
                  *(double *)(lVar24 + 0x18) = local_210;
                  local_188 = local_148.Rotation.XY.m128d_f64[0];
                  dStack_180 = local_148.Rotation.XY.m128d_f64[1];
                  local_178 = local_148.Rotation.ZW.m128d_f64[0];
                  dStack_170 = local_148.Rotation.ZW.m128d_f64[1];
                  Chaos::FRigidBodyHandle_External::SetR
                            ((FRigidBodyHandle_External *)this_01,(TRotation<double,3> *)&local_188,
                             true);
                  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                            ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
                  pTVar2 = (this_01->Particle).Ptr;
                  local_e8 = local_148.Rotation.XY.m128d_f64[0];
                  dStack_e0 = local_148.Rotation.XY.m128d_f64[1];
                  local_d8 = local_148.Rotation.ZW.m128d_f64[0];
                  dStack_d0 = local_148.Rotation.ZW.m128d_f64[1];
                  local_c8 = local_148.Translation.XY.m128d_f64[0];
                  dStack_c0 = local_148.Translation.XY.m128d_f64[1];
                  local_b8 = local_148.Translation.ZW.m128d_f64[0];
                  dStack_b0 = local_148.Translation.ZW.m128d_f64[1];
                  local_a8 = local_148.Scale3D.XY.m128d_f64[0];
                  dStack_a0 = local_148.Scale3D.XY.m128d_f64[1];
                  local_98 = local_148.Scale3D.ZW.m128d_f64[0];
                  dStack_90 = local_148.Scale3D.ZW.m128d_f64[1];
                  pFVar3 = (pTVar2->MNonFrequentData).Property.MGeometry.Reference;
                  if ((pFVar3 != (FImplicitObject *)0x0) && (pFVar3->bHasBoundingBox != false)) {
                    iVar20 = (pTVar2->MShapesArray).ArrayNum;
                    FVar25 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                              )&pTVar2->MShapesArray;
                    FVar4 = (pTVar2->MShapesArray).AllocatorInstance.SecondaryData;
                    if (FVar4 != (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                                  )0x0) {
                      FVar25 = FVar4;
                    }
                    FVar4 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                             )((longlong)FVar25 + (longlong)iVar20 * 8);
                    while( true ) {
                      if ((pTVar2->MShapesArray).ArrayNum != iVar20) {
                        local_2d8[0] = 0;
                        `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(local_2d8);
                      }
                      pUVar21 = local_2b8;
                      if (FVar25 == FVar4) break;
                      Chaos::FShapeInstanceProxy::UpdateShapeBounds
                                (*(FShapeInstanceProxy **)FVar25,
                                 (TRigidTransform<double,3> *)&local_e8);
                      FVar25 = (ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
                                )((longlong)FVar25 + 8);
                    }
                  }
                  pUVar14 = local_270;
                  iVar20 = (local_270->SkeletalBodySetups).ArrayNum;
                  uVar30 = 0;
                  if ((int)local_2d4 < iVar20) {
                    uVar30 = uVar27 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (local_2e8 = (longlong)(int)local_2d4, local_2e0 = (longlong)iVar20,
                     bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar18)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (*(char *)(*(longlong *)
                                 ((pUVar14->SkeletalBodySetups).AllocatorInstance.Data +
                                 local_2c8 * 8) + 0x338) == '\0') {
                    local_1a8 = (double)pUVar21->_padding_;
                    dStack_1a0 = (double)pUVar21->_padding_;
                    local_198 = (double)pUVar21->_padding_;
                    uVar30 = SUB84(local_1a8 - dStack_1a0,0) & uVar19;
                    uVar27 = (uint)((ulonglong)(local_1a8 - dStack_1a0) >> 0x20) & uVar12;
                    if (((dVar13 <= (double)CONCAT44(uVar27,uVar30) &&
                          (double)CONCAT44(uVar27,uVar30) != dVar13) ||
                        (uVar30 = SUB84(local_1a8 - local_198,0) & uVar19,
                        uVar27 = (uint)((ulonglong)(local_1a8 - local_198) >> 0x20) & uVar12,
                        dVar13 <= (double)CONCAT44(uVar27,uVar30) &&
                        (double)CONCAT44(uVar27,uVar30) != dVar13)) ||
                       (uVar30 = SUB84(dStack_1a0 - local_198,0) & uVar19,
                       uVar27 = (uint)((ulonglong)(dStack_1a0 - local_198) >> 0x20) & uVar12,
                       dVar13 <= (double)CONCAT44(uVar27,uVar30) &&
                       (double)CONCAT44(uVar27,uVar30) != dVar13)) {
                      bVar18 = false;
                    }
                    else {
                      bVar18 = true;
                    }
                    puVar5 = *(undefined8 **)((longlong)local_2b0 + 0x18);
                    if (bVar18) {
                      dStack_200 = local_148.Scale3D.XY.m128d_f64[0];
                      dStack_1f8 = local_148.Scale3D.XY.m128d_f64[1];
                      dStack_1f0 = local_148.Scale3D.ZW.m128d_f64[0];
                      local_208 = this_00;
                      puVar22 = ::operator_new(0x28);
                      if (puVar22 != (undefined8 *)0x0) {
                        *puVar22 = 0;
                        puVar22[1] = local_208;
                        puVar22[2] = dStack_200;
                        puVar22[3] = dStack_1f8;
                        puVar22[4] = dStack_1f0;
                        if (((ulonglong)puVar5 & 7) != 0) {
                          FWindowsPlatformAtomics::HandleAtomicsFailure
                                    (
                                    L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                                    );
                        }
                        LOCK();
                        puVar29 = (undefined8 *)*puVar5;
                        *puVar5 = puVar22;
                        UNLOCK();
                        if (((ulonglong)puVar29 & 7) == 0) goto LAB_1482581ff;
                        FWindowsPlatformAtomics::HandleAtomicsFailure
                                  (
                                  L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                                  );
                        LOCK();
                        *puVar29 = puVar22;
                        UNLOCK();
                      }
                    }
                    else {
                      local_1e8 = this_00;
                      dStack_1e0 = local_1a8;
                      dStack_1d8 = dStack_1a0;
                      dStack_1d0 = local_198;
                      puVar22 = ::operator_new(0x28);
                      if (puVar22 != (undefined8 *)0x0) {
                        *puVar22 = 0;
                        puVar22[1] = local_1e8;
                        puVar22[2] = dStack_1e0;
                        puVar22[3] = dStack_1d8;
                        puVar22[4] = dStack_1d0;
                        if (((ulonglong)puVar5 & 7) != 0) {
                          FWindowsPlatformAtomics::HandleAtomicsFailure
                                    (
                                    L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                                    );
                        }
                        LOCK();
                        puVar29 = (undefined8 *)*puVar5;
                        *puVar5 = puVar22;
                        UNLOCK();
                        if (((ulonglong)puVar29 & 7) != 0) {
                          FWindowsPlatformAtomics::HandleAtomicsFailure
                                    (
                                    L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                                    );
                        }
LAB_1482581ff:
                        LOCK();
                        *puVar29 = puVar22;
                        UNLOCK();
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ((GKinematicDeferralLogInvalidBodies != false) && (2 < (byte)LogChaos._0_1_)) {
          if (pUVar21->_padding_ == 0) {
            bVar7 = true;
            ::FString::FString(&local_1c8,"None");
          }
          else {
            local_2a0 = *(FName *)(pUVar21->_padding_ + 0x18);
            bVar8 = true;
            ::FName::ToString(&local_2a0,&local_240);
          }
          local_298 = (FName)pUVar21->_padding_;
          ::FName::ToString(&local_298,&local_260);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
          if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
          }
          if ((bVar7) &&
             (bVar7 = false, local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if ((bVar8) &&
             (bVar8 = false, local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
        }
        local_2d4 = local_2d4 + 1;
        local_2c8 = local_2c8 + 1;
      } while (local_2c8 < local_268);
    }
  }
  return;
}

// AddAggregateToScene @ 1482606c0

void __thiscall
FPhysScene_Chaos::AddAggregateToScene
          (FPhysScene_Chaos *this,FPhysicsAggregateReference_Chaos *param_1)

{
  return;
}

// AddCustomPhysics_AssumesLocked @ 1482635a0

void __thiscall
FPhysScene_Chaos::AddCustomPhysics_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,
          TDelegate<void___cdecl(float,FBodyInstance_*),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FReadAccessScope local_38 [2];
  
  lVar2 = this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,local_38);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,(int)lVar2,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// AddForceAtPosition_AssumesLocked @ 148263840

void __thiscall
FPhysScene_Chaos::AddForceAtPosition_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool param_4,bool param_5)

{
  FSingleParticlePhysicsProxy *local_18 [2];
  
  local_18[0] = FBodyInstance::GetPhysicsActor(param_1);
  FChaosEngineInterface::AddForceAtPosition_AssumesLocked
            (local_18,param_2,param_3,param_4,param_5,false);
  return;
}

// AddForce_AssumesLocked @ 1482638a0

void __thiscall
FPhysScene_Chaos::AddForce_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,TVector<double> *param_2,bool param_3,
          bool param_4)

{
  FSingleParticlePhysicsProxy *local_18 [2];
  
  local_18[0] = FBodyInstance::GetPhysicsActor(param_1);
  FChaosEngineInterface::AddForce_AssumesLocked(local_18,param_2,param_3,param_4,false);
  return;
}

// AddObject @ 148264b30

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
FPhysScene_Chaos::AddObject
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1,FClusterUnionPhysicsProxy *param_2)

{
  AddToComponentMaps(this,param_1,(IPhysicsProxyBase *)param_2);
  Chaos::FPBDRigidsSolver::RegisterObject((FPBDRigidsSolver *)this->_padding_,param_2);
  return;
}

// AddObject @ 148264b70

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
FPhysScene_Chaos::AddObject
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1,
          FGeometryCollectionPhysicsProxy *param_2)

{
  AddToComponentMaps(this,param_1,(IPhysicsProxyBase *)param_2);
  Chaos::FPBDRigidsSolver::RegisterObject((FPBDRigidsSolver *)this->_padding_,param_2);
  return;
}

// AddObject @ 148264bb0

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
FPhysScene_Chaos::AddObject
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1,FSingleParticlePhysicsProxy *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  AddToComponentMaps(this,param_1,(IPhysicsProxyBase *)param_2);
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<392592966138462913>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                     ,0x2c1,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddObject @ 148264c00

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
FPhysScene_Chaos::AddObject
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1,FSkeletalMeshPhysicsProxy *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  AddToComponentMaps(this,param_1,(IPhysicsProxyBase *)param_2);
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<392592966138462901>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                     ,0x2b5,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddObject @ 148264c50

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
FPhysScene_Chaos::AddObject
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1,FStaticMeshPhysicsProxy *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  AddToComponentMaps(this,param_1,(IPhysicsProxyBase *)param_2);
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<392592966138462907>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                     ,699,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddPendingOnConstraintBreak @ 148264ca0

void __thiscall
FPhysScene_Chaos::AddPendingOnConstraintBreak
          (FPhysScene_Chaos *this,FConstraintInstance *param_1,int param_2)

{
  return;
}

// AddPendingSleepingEvent @ 148264cb0

void __thiscall
FPhysScene_Chaos::AddPendingSleepingEvent
          (FPhysScene_Chaos *this,FBodyInstance *param_1,ESleepEvent param_2,int param_3)

{
  return;
}

// AddRadialForceToBody_AssumesLocked @ 148264f00

void __thiscall
FPhysScene_Chaos::AddRadialForceToBody_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,TVector<double> *param_2,float param_3,
          float param_4,uchar param_5,bool param_6,bool param_7)

{
  FSingleParticlePhysicsProxy *local_28 [4];
  
  local_28[0] = FBodyInstance::GetPhysicsActor(param_1);
  FChaosEngineInterface::AddRadialForce_AssumesLocked
            (local_28,param_2,param_3,param_4,param_5,param_6,param_7,false);
  return;
}

// AddReferencedObjects @ 148264fc0

void __thiscall
FPhysScene_Chaos::AddReferencedObjects(FPhysScene_Chaos *this,FReferenceCollector *param_1)

{
  FChaosScene::AddReferencedObjects((FChaosScene *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148264ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ChaosEventRelay,0,0);
  return;
}

// AddSpringConstraint @ 1482664c0

FPhysicsConstraintReference_Chaos __thiscall
FPhysScene_Chaos::AddSpringConstraint
          (FPhysScene_Chaos *this,
          TArray<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FSingleParticlePhysicsProxy_*>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  *(undefined8 *)param_1 = 0;
  return (FPhysicsConstraintReference_Chaos)(FConstraintBase *)param_1;
}

// AddToComponentMaps @ 1482665f0

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
FPhysScene_Chaos::AddToComponentMaps
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1,IPhysicsProxyBase *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FPlatformRWLock *SRWLock;
  UPrimitiveComponent *local_res10;
  ForAnyElementType local_res18 [2];
  TPairInitializer<UPrimitiveComponent_*_const_&,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_const_&>
  local_58;
  undefined8 local_48;
  ForAnyElementType *local_40;
  UPrimitiveComponent **local_38;
  UPrimitiveComponent **local_30;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> **local_28;
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && (param_2 != (IPhysicsProxyBase *)0x0)) {
    SRWLock = (FPlatformRWLock *)0x0;
    if (Chaos::CVars::bEnableAsyncInitBody) {
      SRWLock = &this->PhysicsProxyComponentMapsLock;
    }
    local_res10 = param_1;
    local_res18[0].Data = (FScriptContainerElement *)param_2;
    if (SRWLock != (FPlatformRWLock *)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    local_40 = local_res18;
    local_38 = &local_res10;
    TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<IPhysicsProxyBase_*_const_&,TObjectPtr<UPrimitiveComponent>_const_&>_>
              ((TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
                *)&this->PhysicsProxyToComponentMap,
               (TPairInitializer<IPhysicsProxyBase_*_const_&,TObjectPtr<UPrimitiveComponent>_const_&>
                *)(local_res18 + 1),(bool *)&local_40);
    pTVar5 = TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->ComponentToPhysicsProxyMap,local_res10);
    if (pTVar5 == (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
      local_58.Value = pTVar5;
      local_48 = pTVar5;
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&local_58.Value,(int *)((longlong)&local_48 + 4)
                        );
      local_48 = (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)
                 CONCAT44(local_48._4_4_,iVar4 + 1);
      (&(local_58.Value)->AllocatorInstance)[iVar4].Data = local_res18[0].Data;
      local_30 = &local_res10;
      local_28 = &local_58.Value;
      TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UPrimitiveComponent_*_const_&,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_const_&>_>
                ((TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->ComponentToPhysicsProxyMap,&local_58,(bool *)&local_30);
      if (local_58.Value != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_58.Value);
      }
    }
    else {
      pFVar1 = (pTVar5->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_res18) &&
          ((FScriptContainerElement *)local_res18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = pTVar5->ArrayNum;
      if (iVar4 == pTVar5->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
      }
      pTVar5->ArrayNum = iVar4 + 1;
      *(FScriptContainerElement **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_res18[0].Data;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// AddTorque_AssumesLocked @ 148266810

void __thiscall
FPhysScene_Chaos::AddTorque_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,TVector<double> *param_2,bool param_3,
          bool param_4)

{
  FSingleParticlePhysicsProxy *local_18 [2];
  
  local_18[0] = FBodyInstance::GetPhysicsActor(param_1);
  FChaosEngineInterface::AddTorque_AssumesLocked(local_18,param_2,param_3,param_4,false);
  return;
}

// ApplyWorldOffset @ 148268030

void __thiscall FPhysScene_Chaos::ApplyWorldOffset(FPhysScene_Chaos *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  auVar6._0_8_ = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  auVar6._8_8_ = 0;
  auVar6 = sqrtpd(auVar6,auVar6);
  if (auVar6._0_8_ != 0.0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOffset.Size() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                       ,0x86a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// ClearForces_AssumesLocked @ 14826dae0

void __thiscall
FPhysScene_Chaos::ClearForces_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  FSingleParticlePhysicsProxy *this_00;
  TGeometryParticle<double,3> *pTVar4;
  
  this_00 = FBodyInstance::GetPhysicsActor(param_1);
  if (this_00 == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<392592966138463791>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                       ,0x62f,"FPhysicsInterface::IsValid(Handle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
    pTVar4 = (this_00->Particle).Ptr;
    if (pTVar4->Type < Rigid) {
      pTVar4 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
      pIVar1 = pTVar4->Proxy;
      pTVar4[2].Proxy = (IPhysicsProxyBase *)0x0;
      *(undefined4 *)&pTVar4[2]._padding_ = 0;
      (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 4;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
        return;
      }
    }
  }
  return;
}

// ClearPreSimKinematicUpdate @ 14826dcd0

void __thiscall
FPhysScene_Chaos::ClearPreSimKinematicUpdate(FPhysScene_Chaos *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  TArray<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FPhysScene_Chaos::FDeferredKinematicUpdateInfo>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  UObject *pUVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((param_1 != (USkeletalMeshComponent *)0x0) &&
     (iVar9 = param_1->DeferredKinematicUpdateIndex, iVar9 != -1)) {
    pTVar2 = &this->DeferredKinematicUpdateSkelMeshes;
    iVar3 = (this->DeferredKinematicUpdateSkelMeshes).ArrayNum;
    uVar10 = iVar3 - 1;
    uVar8 = 0;
    if ((int)uVar10 < iVar3) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data +
                                 ((longlong)(this->DeferredKinematicUpdateSkelMeshes).ArrayNum * 3 +
                                 -3) * 4));
    if (pUVar7 != (UObject *)0x0) {
      *(int *)&pUVar7[0x45].field_0x4 = iVar9;
    }
    uVar8 = param_1->DeferredKinematicUpdateIndex;
    uVar10 = 0;
    if ((int)uVar8 < (this->DeferredKinematicUpdateSkelMeshes).ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (this->DeferredKinematicUpdateSkelMeshes).ArrayNum;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    iVar9 = iVar3 + ~uVar8;
    if (1 < iVar9) {
      iVar9 = 1;
    }
    if (iVar9 != 0) {
      memmove(pFVar4 + (longlong)(int)uVar8 * 0xc,pFVar4 + (longlong)(iVar3 - iVar9) * 0xc,
              (longlong)iVar9 * 0xc);
    }
    piVar1 = &(this->DeferredKinematicUpdateSkelMeshes).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&pTVar2->AllocatorInstance,(this->DeferredKinematicUpdateSkelMeshes).ArrayNum,
               &(this->DeferredKinematicUpdateSkelMeshes).ArrayMax);
    param_1->DeferredKinematicUpdateIndex = -1;
  }
  return;
}

// ClearTorques_AssumesLocked @ 14826de80

void __thiscall
FPhysScene_Chaos::ClearTorques_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  FSingleParticlePhysicsProxy *this_00;
  TGeometryParticle<double,3> *pTVar4;
  
  this_00 = FBodyInstance::GetPhysicsActor(param_1);
  if (this_00 == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<392592966138463805>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                       ,0x63d,"FPhysicsInterface::IsValid(Handle)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
    pTVar4 = (this_00->Particle).Ptr;
    if (pTVar4->Type < Rigid) {
      pTVar4 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar4 != (TGeometryParticle<double,3> *)0x0) {
      pIVar1 = pTVar4->Proxy;
      *(undefined8 *)((longlong)&pTVar4[2]._padding_ + 4) = 0;
      *(undefined4 *)&pTVar4[2].MXR.Property.MX.field_0x4 = 0;
      (pTVar4->MDirtyFlags).Bits = (pTVar4->MDirtyFlags).Bits | 4;
      if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
        return;
      }
    }
  }
  return;
}

// CreatePhysicsReplication @ 1482772e0

IPhysicsReplication * __thiscall FPhysScene_Chaos::CreatePhysicsReplication(FPhysScene_Chaos *this)

{
  TUniquePtr<IPhysicsReplication,TDefaultDelete<IPhysicsReplication>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  IPhysicsReplication *pIVar4;
  undefined8 *puVar5;
  FPhysicsReplication *this_00;
  FPhysicsReplication *pFVar6;
  undefined8 *local_res8;
  
  pTVar1 = &this->PhysicsReplication;
  pFVar6 = (FPhysicsReplication *)0x0;
  pIVar4 = pTVar1->Ptr;
  pTVar1->Ptr = (IPhysicsReplication *)0x0;
  if (pIVar4 != (IPhysicsReplication *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  if (PhysicsReplicationFactory.Object != (IPhysicsReplicationFactory *)0x0) {
    if ((PhysicsReplicationFactory.Object == (IPhysicsReplicationFactory *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IPhysicsReplication *)(*pcVar2)();
      return pIVar4;
    }
    puVar5 = (undefined8 *)
             (**(code **)*PhysicsReplicationFactory.Object)
                       (PhysicsReplicationFactory.Object,&local_res8,this);
    if (pTVar1 != (TUniquePtr<IPhysicsReplication,TDefaultDelete<IPhysicsReplication>_> *)puVar5) {
      pIVar4 = pTVar1->Ptr;
      pTVar1->Ptr = (IPhysicsReplication *)*puVar5;
      *puVar5 = 0;
      if (pIVar4 != (IPhysicsReplication *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  if (pTVar1->Ptr == (IPhysicsReplication *)0x0) {
    this_00 = ::operator_new(0x88);
    if (this_00 != (FPhysicsReplication *)0x0) {
      pFVar6 = FPhysicsReplication::FPhysicsReplication(this_00,this);
    }
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IPhysicsReplication *)pFVar6;
    if (pIVar4 == (IPhysicsReplication *)0x0) {
      return (IPhysicsReplication *)pFVar6;
    }
    (**(code **)*pIVar4)(pIVar4,1);
  }
  return pTVar1->Ptr;
}

// CreatePhysicsReplicationCache @ 148277400

void __thiscall FPhysScene_Chaos::CreatePhysicsReplicationCache(FPhysScene_Chaos *this)

{
  TUniquePtr<FPhysicsReplicationCache,TDefaultDelete<FPhysicsReplicationCache>_> *pTVar1;
  FPhysicsReplicationCache *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPhysicsReplicationCache *pFVar5;
  undefined8 *puVar6;
  longlong local_18 [2];
  
  pTVar1 = &this->PhysicsReplicationCache;
  if (pTVar1->Ptr != (FPhysicsReplicationCache *)0x0) {
    return;
  }
  pFVar5 = ::operator_new(0x78);
  if (pFVar5 == (FPhysicsReplicationCache *)0x0) {
    pFVar5 = (FPhysicsReplicationCache *)0x0;
  }
  else {
    pFVar5 = FPhysicsReplicationCache::FPhysicsReplicationCache(pFVar5,this);
  }
  if (pTVar1 == (TUniquePtr<FPhysicsReplicationCache,TDefaultDelete<FPhysicsReplicationCache>_> *)
                local_18) {
    if (pFVar5 == (FPhysicsReplicationCache *)0x0) goto LAB_148277467;
    puVar6 = (undefined8 *)pFVar5->_padding_;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar2 == (FPhysicsReplicationCache *)0x0) goto LAB_148277467;
    puVar6 = (undefined8 *)pFVar2->_padding_;
    pFVar5 = pFVar2;
  }
  (*(code *)*puVar6)(pFVar5,1);
LAB_148277467:
  if ((pTVar1->Ptr == (FPhysicsReplicationCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PhysicsReplicationCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                         ,0x596,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// CreatePhysicsReplicationLOD @ 1482774b0

IPhysicsReplicationLOD * __thiscall
FPhysScene_Chaos::CreatePhysicsReplicationLOD(FPhysScene_Chaos *this)

{
  TUniquePtr<IPhysicsReplicationLOD,TDefaultDelete<IPhysicsReplicationLOD>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  IPhysicsReplicationLOD *pIVar4;
  undefined8 *puVar5;
  FPhysicsReplicationLOD *this_00;
  FPhysicsReplicationLOD *pFVar6;
  undefined8 *local_res8;
  
  pTVar1 = &this->PhysicsReplicationLOD;
  pFVar6 = (FPhysicsReplicationLOD *)0x0;
  pIVar4 = pTVar1->Ptr;
  pTVar1->Ptr = (IPhysicsReplicationLOD *)0x0;
  if (pIVar4 != (IPhysicsReplicationLOD *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  if (PhysicsReplicationFactory.Object != (IPhysicsReplicationFactory *)0x0) {
    if ((PhysicsReplicationFactory.Object == (IPhysicsReplicationFactory *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IPhysicsReplicationLOD *)(*pcVar2)();
      return pIVar4;
    }
    puVar5 = (undefined8 *)
             (**(code **)((longlong)*PhysicsReplicationFactory.Object + 8))
                       (PhysicsReplicationFactory.Object,&local_res8,this);
    if (pTVar1 != (TUniquePtr<IPhysicsReplicationLOD,TDefaultDelete<IPhysicsReplicationLOD>_> *)
                  puVar5) {
      pIVar4 = pTVar1->Ptr;
      pTVar1->Ptr = (IPhysicsReplicationLOD *)*puVar5;
      *puVar5 = 0;
      if (pIVar4 != (IPhysicsReplicationLOD *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  if (pTVar1->Ptr == (IPhysicsReplicationLOD *)0x0) {
    this_00 = ::operator_new(0x20);
    if (this_00 != (FPhysicsReplicationLOD *)0x0) {
      pFVar6 = FPhysicsReplicationLOD::FPhysicsReplicationLOD(this_00,this);
    }
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IPhysicsReplicationLOD *)pFVar6;
    if (pIVar4 == (IPhysicsReplicationLOD *)0x0) {
      return (IPhysicsReplicationLOD *)pFVar6;
    }
    (**(code **)*pIVar4)(pIVar4,1);
  }
  return pTVar1->Ptr;
}

// DeferPhysicsStateCreation @ 1482792e0

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
FPhysScene_Chaos::DeferPhysicsStateCreation(FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  longlong lVar1;
  UPrimitiveComponent *local_res10;
  UPrimitiveComponent *local_res18 [2];
  
  if ((param_1 != (UPrimitiveComponent *)0x0) &&
     (local_res10 = param_1, lVar1 = (**(code **)(*(longlong *)param_1 + 0x800))(param_1),
     lVar1 != 0)) {
    TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
    Emplace<UPrimitiveComponent_*_const_&>
              (&this->DeferredCreatePhysicsStateComponents,local_res18,(bool *)&local_res10);
    param_1->DeferredCreatePhysicsStateScene = this;
  }
  return;
}

// DispatchPendingCollisionNotifies @ 14827aad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPhysScene_Chaos::DispatchPendingCollisionNotifies(FPhysScene_Chaos *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  TAtomic<FMinimalName> TVar5;
  FName FVar6;
  FCollisionNotifyInfo *pFVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::DispatchPendingCollisionNotifies(void)_::_15_::FStat_STAT_DispatchPhysicsCollisionHit>
  FVar14;
  FUObjectItem *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar16;
  FUObjectItem *this_00;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  uint uVar19;
  FWeakObjectPtr *pFVar20;
  TStatIdData *pTVar21;
  FNameEntryId FVar22;
  longlong *plVar23;
  FName FVar24;
  ulonglong uVar25;
  FNameEntryId FVar26;
  FWeakObjectPtr *this_01;
  FColor_u_0 local_res10 [2];
  uint local_res18;
  FWeakObjectPtr *local_res20;
  FName local_e8;
  byte local_e0;
  longlong *local_d8;
  FWeakObjectPtr *local_d0;
  FName local_c8;
  FName local_b8;
  uint local_b0;
  uint uStack_ac;
  FName local_a8;
  uint local_a0;
  uint uStack_9c;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pUVar11 = Z_Construct_UClass_UWorld_NoRegister();
    iVar2 = (int)pUVar11->_padding_;
    if (((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         == &pUVar11->_padding_)) &&
       (plVar23 = *(longlong **)(lVar3 + 0x60), plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x2b0))(plVar23,&this->PendingCollisionNotifies);
    }
  }
  local_res18 = (this->PendingCollisionNotifies).ArrayNum;
  uVar25 = (ulonglong)(int)local_res18;
  pFVar4 = (this->PendingCollisionNotifies).AllocatorInstance.Data;
  this_01 = (FWeakObjectPtr *)(pFVar4 + 8);
  pFVar20 = (FWeakObjectPtr *)(pFVar4 + uVar25 * 200);
  plVar23 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res20 = pFVar20;
  local_d8 = plVar23;
  do {
    local_d0 = this_01;
    if ((this->PendingCollisionNotifies).ArrayNum != (int)uVar25) {
      `TCheckedPointerIterator<FCollisionNotifyInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_01 + -1 == pFVar20) {
      piVar1 = &(this->PendingCollisionNotifies).ArrayMax;
      pFVar7 = (FCollisionNotifyInfo *)(this->PendingCollisionNotifies).AllocatorInstance.Data;
      iVar2 = (this->PendingCollisionNotifies).ArrayNum;
      if ((this->PendingCollisionNotifies).ArrayMax < 0) {
        DestructItems<FCollisionNotifyInfo,int>(pFVar7,iVar2);
        (this->PendingCollisionNotifies).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (200,8,0,&(this->PendingCollisionNotifies).AllocatorInstance,0,piVar1);
        }
        return;
      }
      DestructItems<FCollisionNotifyInfo,int>(pFVar7,iVar2);
      (this->PendingCollisionNotifies).ArrayNum = 0;
      return;
    }
    if (((char)this_01[-1].ObjectIndex != '\0') &&
       (pUVar12 = FWeakObjectPtr::Get(this_01), pUVar12 != (UObject *)0x0)) {
      if ((*(int *)(*plVar23 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1))
      {
        if (StatPtr_STAT_DispatchPhysicsCollisionHit ==
            (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::DispatchPendingCollisionNotifies(void)_::_15_::FStat_STAT_DispatchPhysicsCollisionHit>
             )0x0) {
          pFVar13 = ::FName::FName(&local_68,"STAT_DispatchPhysicsCollisionHit");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchPhysicsCollisionHit,*pFVar13
                     ,L"STAT_DispatchPhysicsCollisionHit","STATGROUP_Quick","STATCAT_Advanced",
                     L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS1);
      }
      FVar14 = StatPtr_STAT_DispatchPhysicsCollisionHit;
      if (StatPtr_STAT_DispatchPhysicsCollisionHit ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::DispatchPendingCollisionNotifies(void)_::_15_::FStat_STAT_DispatchPhysicsCollisionHit>
           )0x0) {
        pFVar13 = ::FName::FName(&local_60,"STAT_DispatchPhysicsCollisionHit");
        FVar14 = (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::DispatchPendingCollisionNotifies(void)_::_15_::FStat_STAT_DispatchPhysicsCollisionHit>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DispatchPhysicsCollisionHit
                              ,*pFVar13,L"STAT_DispatchPhysicsCollisionHit","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar24 = *(FName *)FVar14;
      FVar26.Value = 0;
      local_c8.ComparisonIndex.Value = 0;
      local_c8.Number = 0;
      bVar8 = false;
      bVar10 = false;
      FVar22 = FVar24.ComparisonIndex.Value;
      uVar19 = FVar24.Number;
      if ((FVar22.Value == 0) && (uVar19 == 0)) {
LAB_14827ace5:
        bVar9 = false;
        FVar24 = local_c8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res10[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
          bVar8 = false;
          bVar10 = true;
          if (-1 < CpuChannel->Enabled) {
            local_b8.ComparisonIndex.Value = FVar22.Value;
            local_b8.Number = uVar19;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_b8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                       ,0x48f);
            bVar8 = true;
            bVar10 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14827ace5;
        local_c8 = FVar24;
        local_b0 = FVar22.Value;
        uStack_ac = uVar19;
        FThreadStats::AddMessage(FVar24,CycleScopeStart);
        bVar9 = true;
        FVar26.Value = local_c8.ComparisonIndex.Value;
      }
      local_e8.ComparisonIndex.Value = 0;
      local_e8.Number = 0;
      local_e0 = 0;
      pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar12->field_0xc);
      FVar16 = StatPtr_STAT_UObjectsStatGroupTester;
      if (StatPtr_STAT_UObjectsStatGroupTester ==
          (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
        pFVar13 = ::FName::FName(local_58,"STAT_UObjectsStatGroupTester");
        FVar16 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester,
                            *pFVar13,L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                            "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      if ((((int)*(undefined8 *)FVar16 == 0) &&
          ((int)((ulonglong)*(undefined8 *)FVar16 >> 0x20) == 0)) ||
         (FThreadStats::bPrimaryEnable == false)) {
        pTVar21 = &TStatId::TStatId_NAME_None;
      }
      else {
        TVar5 = ((pFVar15->StatID).StatIdPtr)->Name;
        if ((TVar5._0_4_ == 0) && (TVar5._4_4_ == 0)) {
          this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar12->field_0xc);
          FUObjectItem::CreateStatID(this_00);
        }
        pTVar21 = (pFVar15->StatID).StatIdPtr;
      }
      if (((SUB84(pTVar21->Name,0) == 0) && (SUB84(pTVar21->Name,4) == 0)) ||
         (FThreadStats::bPrimaryEnable == false)) {
        if (-1 < CpuChannel->Enabled) {
          FScopeCycleCounterUObject::StartObjectTrace
                    ((FScopeCycleCounterUObject *)&local_e8,(UObjectBaseUtility *)pUVar12);
        }
      }
      else {
        FVar6 = *(FName *)&pTVar21->Name;
        FVar22 = FVar6.ComparisonIndex.Value;
        uVar19 = FVar6.Number;
        if ((FVar22.Value != 0) || (this_01 = local_d0, uVar19 != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res10[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res10[0]._s_0,(pTVar21->StatDescriptionAnsi).Ptr);
            local_e0 = local_e0 | 1;
            if (-1 < CpuChannel->Enabled) {
              local_a8.ComparisonIndex.Value = FVar22.Value;
              local_a8.Number = uVar19;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_a8,(pTVar21->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                         ,0x3d8);
              local_e0 = local_e0 | 2;
            }
          }
          this_01 = local_d0;
          if (FThreadStats::bPrimaryEnable != false) {
            local_e8 = FVar6;
            local_a0 = FVar22.Value;
            uStack_9c = uVar19;
            FThreadStats::AddMessage(FVar6,CycleScopeStart);
            local_e0 = local_e0 | 4;
            this_01 = local_d0;
          }
        }
      }
      (**(code **)(*(longlong *)pUVar12 + 0x550))(pUVar12,this_01,this_01 + 7,this_01 + 0xe);
      if ((local_e0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_e0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar6 = local_e8;
      if (((((local_e0 & 4) != 0) && (local_e8 != (FName)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar17 == (FThreadStats *)0x0) {
          pFVar18 = FThreadStatsPool::Get();
          pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
        }
        if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
          local_88.NameAndInfo.Index = FVar6.ComparisonIndex.Value;
          local_88.NameAndInfo.Number = FVar6.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_98);
          local_88.StatData.Pad[4] = '\0';
          local_88.StatData.Pad[5] = '\0';
          local_88.StatData.Pad[6] = '\0';
          local_88.StatData.Pad[7] = '\0';
          local_88.StatData.Pad[0] = local_98.s.LowPart._0_1_;
          local_88.StatData.Pad[1] = local_98.s.LowPart._1_1_;
          local_88.StatData.Pad[2] = local_98.s.LowPart._2_1_;
          local_88.StatData.Pad[3] = local_98.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar17,&local_88);
          piVar1 = &pFVar17->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar17,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar17,false,false);
          }
        }
      }
      local_e0 = 0;
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pFVar20 = local_res20;
      plVar23 = local_d8;
      if (((bVar9) && (FVar24 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar17 == (FThreadStats *)0x0) {
          pFVar18 = FThreadStatsPool::Get();
          pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
        }
        pFVar20 = local_res20;
        plVar23 = local_d8;
        if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
          local_78.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
          local_78.NameAndInfo.Index.Value = FVar26.Value;
          QueryPerformanceCounter(&local_90);
          local_78.StatData.Pad[4] = '\0';
          local_78.StatData.Pad[5] = '\0';
          local_78.StatData.Pad[6] = '\0';
          local_78.StatData.Pad[7] = '\0';
          local_78.StatData.Pad[0] = local_90.s.LowPart._0_1_;
          local_78.StatData.Pad[1] = local_90.s.LowPart._1_1_;
          local_78.StatData.Pad[2] = local_90.s.LowPart._2_1_;
          local_78.StatData.Pad[3] = local_90.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar17,&local_78);
          piVar1 = &pFVar17->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar17,false,false);
            pFVar20 = local_res20;
            plVar23 = local_d8;
          }
          else {
            pFVar20 = local_res20;
            plVar23 = local_d8;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar17,false,false);
              pFVar20 = local_res20;
              plVar23 = local_d8;
            }
          }
        }
      }
    }
    uVar25 = (ulonglong)local_res18;
    this_01 = this_01 + 0x19;
  } while( true );
}

// EnableAsyncPhysicsTickCallback @ 14827bc50

void __thiscall FPhysScene_Chaos::EnableAsyncPhysicsTickCallback(FPhysScene_Chaos *this)

{
  FAsyncPhysicsTickCallback *pFVar1;
  
  if (this->AsyncPhysicsTickCallback == (FAsyncPhysicsTickCallback *)0x0) {
    pFVar1 = Chaos::FPhysicsSolverBase::
             CreateAndRegisterSimCallbackObject_External<FAsyncPhysicsTickCallback>
                       ((FPhysicsSolverBase *)this->_padding_);
    this->AsyncPhysicsTickCallback = pFVar1;
  }
  return;
}

// EnqueueAsyncPhysicsCommand @ 14827c220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014827c3e1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x00014827c3e5 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FPhysScene_Chaos::EnqueueAsyncPhysicsCommand
          (FPhysScene_Chaos *this,int param_1,UObject *param_2,
          TFunction<void___cdecl(void)> *param_3,bool param_4)

{
  int *piVar1;
  TArray<FPendingAsyncPhysicsCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAsyncPhysicsTickCallback *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_e8 [32];
  int *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  UObject *local_98 [2];
  int local_88;
  FWeakObjectPtr local_84;
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  FScriptContainerElement local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar6 = this->AsyncPhysicsTickCallback;
  if (pFVar6 == (FAsyncPhysicsTickCallback *)0x0) {
    pFVar6 = Chaos::FPhysicsSolverBase::
             CreateAndRegisterSimCallbackObject_External<FAsyncPhysicsTickCallback>
                       ((FPhysicsSolverBase *)this->_padding_);
    this->AsyncPhysicsTickCallback = pFVar6;
  }
  pTVar2 = &pFVar6->PendingCommands;
  local_88 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_84.ObjectIndex = 0;
  local_84.ObjectSerialNumber = 0;
  local_98[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&local_84,(FObjectPtr)local_98);
  local_78 = *(longlong *)param_3;
  local_50 = 0;
  if (local_78 != 0) {
    puVar7 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar7)(puVar7,&local_68);
  }
  local_48 = (FScriptContainerElement)param_4;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(pFVar6->PendingCommands).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar9 + lVar8 * 0x50)) {
    local_b0 = (longlong)(pFVar6->PendingCommands).ArrayNum;
    local_a8 = 0x50;
    local_c8 = &local_88;
    local_c0 = pFVar9;
    local_b8 = lVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pFVar6->PendingCommands).ArrayNum;
  piVar1 = &(pFVar6->PendingCommands).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar6->PendingCommands).ArrayNum = iVar5 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x50;
  *(int *)pFVar9 = local_88;
  *(FWeakObjectPtr *)(pFVar9 + 4) = local_84;
  *(longlong *)(pFVar9 + 0x10) = local_78;
  *(undefined8 *)(pFVar9 + 0x38) = local_50;
  local_50 = 0;
  *(undefined4 *)(pFVar9 + 0x20) = local_68;
  *(undefined4 *)(pFVar9 + 0x24) = uStack_64;
  *(undefined4 *)(pFVar9 + 0x28) = uStack_60;
  *(undefined4 *)(pFVar9 + 0x2c) = uStack_5c;
  *(undefined8 *)(pFVar9 + 0x30) = local_58;
  if (*(longlong *)(pFVar9 + 0x10) != 0) {
    local_78 = 0;
  }
  pFVar9[0x40] = local_48;
  if (local_78 != 0) {
    (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
  }
  return;
}

// EnsureCollisionTreeIsBuilt @ 14827c410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPhysScene_Chaos::EnsureCollisionTreeIsBuilt(FPhysScene_Chaos *this,UWorld *param_1)

{
  return;
}

// GetBodyInstanceFromProxy @ 148284f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBodyInstance * __thiscall
FPhysScene_Chaos::GetBodyInstanceFromProxy(FPhysScene_Chaos *this,IPhysicsProxyBase *param_1)

{
  int *piVar1;
  UPrimitiveComponent *pUVar2;
  FBodyInstance *pFVar3;
  
  if (param_1 == (IPhysicsProxyBase *)0x0) {
    return (FBodyInstance *)0x0;
  }
  if ((param_1->Type == SingleParticleProxy) &&
     (piVar1 = *(int **)(param_1[1]._padding_ + 0x78), piVar1 != (int *)0x0)) {
    if ((*piVar1 == 1) && (*(FBodyInstance **)(piVar1 + 2) != (FBodyInstance *)0x0)) {
      return *(FBodyInstance **)(piVar1 + 2);
    }
    pFVar3 = (FBodyInstance *)0x0;
    if ((*piVar1 == 8) && (*(longlong *)(piVar1 + 2) != 0)) {
      piVar1 = *(int **)(*(longlong *)(piVar1 + 2) + 0x10);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 1)) {
        pFVar3 = (FBodyInstance *)0x0;
      }
      else {
        pFVar3 = *(FBodyInstance **)(piVar1 + 2);
      }
    }
    if (pFVar3 != (FBodyInstance *)0x0) {
      return pFVar3;
    }
  }
  pUVar2 = GetOwningComponent<UPrimitiveComponent>(this,param_1);
  if (pUVar2 == (UPrimitiveComponent *)0x0) {
    return (FBodyInstance *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000148285026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FBodyInstance *)(**(code **)(*(longlong *)pUVar2 + 0x818))(pUVar2,0,1,0xffffffff);
  return pFVar3;
}

// GetBodyInstanceFromProxyAndShape @ 148285040

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

FBodyInstance * __thiscall
FPhysScene_Chaos::GetBodyInstanceFromProxyAndShape
          (FPhysScene_Chaos *this,IPhysicsProxyBase *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  UPrimitiveComponent *pUVar4;
  FBodyInstance *pFVar5;
  ForElementType<FPhysicsShapeReference_Chaos> FVar6;
  uint uVar7;
  FBodyInstance *pFVar8;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  FSingleParticlePhysicsProxy *local_240;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_238;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_278;
  pFVar8 = (FBodyInstance *)0x0;
  pFVar5 = pFVar8;
  if (param_1 != (IPhysicsProxyBase *)0x0) {
    if ((param_1->Type == SingleParticleProxy) &&
       (piVar1 = *(int **)(param_1[1]._padding_ + 0x78), pFVar5 = (FBodyInstance *)0x0,
       piVar1 != (int *)0x0)) {
      pFVar5 = pFVar8;
      if ((*piVar1 == 1) &&
         (pFVar5 = *(FBodyInstance **)(piVar1 + 2), pFVar5 != (FBodyInstance *)0x0))
      goto LAB_1482850f3;
      if ((((*piVar1 == 8) && (*(longlong *)(piVar1 + 2) != 0)) &&
          (piVar1 = *(int **)(*(longlong *)(piVar1 + 2) + 0x10), pFVar5 = pFVar8,
          piVar1 != (int *)0x0)) && (*piVar1 == 1)) {
        pFVar5 = *(FBodyInstance **)(piVar1 + 2);
      }
      if (pFVar5 != (FBodyInstance *)0x0) goto LAB_1482850f3;
    }
    pUVar4 = GetOwningComponent<UPrimitiveComponent>(this,param_1);
    if (pUVar4 != (UPrimitiveComponent *)0x0) {
      local_248 = 0;
      pFVar5 = (FBodyInstance *)(**(code **)(*(longlong *)pUVar4 + 0x818))(pUVar4,0,1,0xffffffff);
    }
  }
  if (pFVar5 == (FBodyInstance *)0x0) {
    return (FBodyInstance *)0x0;
  }
LAB_1482850f3:
  if (param_2 != -1) {
    local_238.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0x20;
    local_240 = FBodyInstance::GetPhysicsActor(pFVar5);
    FChaosEngineInterface::GetAllShapes_AssumedLocked(&local_240,&local_238);
    if ((-1 < param_2) && (param_2 < local_238.ArrayNum)) {
      uVar7 = 0;
      if (param_2 < local_238.ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_258 = (longlong)param_2, local_250 = (longlong)local_238.ArrayNum,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FBodyInstance *)(*pcVar2)();
        return pFVar5;
      }
      FVar6 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_238;
      if (local_238.AllocatorInstance.SecondaryData !=
          (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
        FVar6 = local_238.AllocatorInstance.SecondaryData;
      }
      pFVar5 = FBodyInstance::GetOriginalBodyInstance
                         (pFVar5,(FPhysicsShapeReference_Chaos *)
                                 ((longlong)param_2 * 0x10 + (longlong)FVar6));
    }
    if (local_238.AllocatorInstance.SecondaryData !=
        (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
      FMemory::Free((void *)local_238.AllocatorInstance.SecondaryData);
    }
  }
  return pFVar5;
}

// GetKinematicTarget_AssumesLocked @ 148289400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPhysScene_Chaos::GetKinematicTarget_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,TTransform<double> *param_2)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_a8 [32];
  FSingleParticlePhysicsProxy *local_88 [2];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = FBodyInstance::GetPhysicsActor(param_1);
  pTVar2 = FChaosEngineInterface::GetKinematicTarget_AssumesLocked(&local_78,local_88);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_2->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_2->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_2->Rotation).ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_2->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_2->Translation).XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_2->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_2->Translation).ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_2->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_2->Scale3D).XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_2->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_2->Scale3D).ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_2->Scale3D).ZW.m128d_f64[1] = dVar1;
  return true;
}

// GetNumAwakeBodies @ 14828b390

int __thiscall FPhysScene_Chaos::GetNumAwakeBodies(FPhysScene_Chaos *this)

{
  return 0;
}

// GetOwningWorld @ 14828b4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FPhysScene_Chaos::GetOwningWorld(FPhysScene_Chaos *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// GetOwningWorld @ 14828b500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FPhysScene_Chaos::GetOwningWorld(FPhysScene_Chaos *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// GetPendingCollisionForContactPair @ 14828b5a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

FCollisionNotifyInfo * __thiscall
FPhysScene_Chaos::GetPendingCollisionForContactPair
          (FPhysScene_Chaos *this,void *param_1,void *param_2,double param_3,bool *param_4)

{
  int *piVar1;
  TMultiMap<FPhysScene_Chaos::FUniqueContactPairKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysScene_Chaos::FUniqueContactPairKey,int,1>_>
  *pTVar2;
  TArray<FCollisionNotifyInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  FCollisionNotifyInfo *pFVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint local_res8 [4];
  void *local_b8;
  void *local_b0;
  void **local_a8;
  uint *local_a0;
  TMultiMap<FPhysScene_Chaos::FUniqueContactPairKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysScene_Chaos::FUniqueContactPairKey,int,1>_>
  *local_98;
  void **ppvStack_90;
  int local_88;
  int iStack_84;
  TMultiMap<FPhysScene_Chaos::FUniqueContactPairKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysScene_Chaos::FUniqueContactPairKey,int,1>_>
  *local_80;
  void **ppvStack_78;
  undefined8 local_70;
  
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3e45798ee2308c3a;
  pTVar2 = &this->ContactPairToPendingNotifyMap;
  ppvStack_90 = &local_b8;
  iVar4 = *(int *)&(this->ContactPairToPendingNotifyMap).field_0x48;
  local_88 = -1;
  if (iVar4 == 0) {
    iStack_84 = -1;
  }
  else {
    puVar15 = *(undefined1 **)&(this->ContactPairToPendingNotifyMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->ContactPairToPendingNotifyMap).field_0x38;
    }
    iStack_84 = *(int *)(puVar15 +
                        ((longlong)(int)((uint)((longlong)param_2 << 0x12) ^ (uint)param_1) &
                        (longlong)iVar4 - 1U) * 4);
    local_88 = iStack_84;
    if (iStack_84 != -1) {
      lVar16 = *(longlong *)pTVar2;
      do {
        lVar11 = (longlong)local_88 * 0x20;
        iStack_84 = *(int *)(lVar11 + 0x18 + lVar16);
        if ((*(void **)(lVar11 + lVar16) == param_1) && (*(void **)(lVar11 + 8 + lVar16) == param_2)
           ) break;
        local_88 = iStack_84;
      } while (iStack_84 != -1);
    }
  }
  local_70 = CONCAT44(iStack_84,local_88);
  local_98 = pTVar2;
  local_80 = pTVar2;
  ppvStack_78 = ppvStack_90;
  local_b8 = param_1;
  local_b0 = param_2;
  iVar13 = local_88;
  iVar4 = iStack_84;
  while (iVar13 != -1) {
    uVar5 = *(uint *)((longlong)iVar13 * 0x20 + 0x10 + *(longlong *)pTVar2);
    uVar17 = 0;
    if ((int)uVar5 < (this->PendingCollisionNotifies).ArrayNum) {
      uVar17 = ~uVar5 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FCollisionNotifyInfo *)(*pcVar6)();
      return pFVar12;
    }
    dVar7 = *(double *)
             ((this->PendingCollisionNotifies).AllocatorInstance.Data +
             (longlong)(int)uVar5 * 200 + 0xc0) - param_3;
    uVar17 = SUB84(dVar7,0) & uVar14;
    uVar18 = (uint)((ulonglong)dVar7 >> 0x20) & uVar9;
    if ((double)CONCAT44(uVar18,uVar17) < dVar8 || (double)CONCAT44(uVar18,uVar17) == dVar8) {
      *param_4 = false;
      uVar14 = 0;
      if ((int)uVar5 < (this->PendingCollisionNotifies).ArrayNum) {
        uVar14 = ~uVar5 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FCollisionNotifyInfo *)(*pcVar6)();
        return pFVar12;
      }
      return (FCollisionNotifyInfo *)
             ((this->PendingCollisionNotifies).AllocatorInstance.Data + (longlong)(int)uVar5 * 200);
    }
    local_70 = CONCAT44(local_70._4_4_,iVar4);
    if (iVar4 == -1) break;
    lVar16 = *(longlong *)pTVar2;
    iVar13 = iVar4;
    do {
      iVar4 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + lVar16);
      if ((*(void **)((longlong)iVar13 * 0x20 + lVar16) == local_b8) &&
         (*(void **)((longlong)iVar13 * 0x20 + 8 + lVar16) == local_b0)) break;
      iVar13 = iVar4;
    } while (iVar4 != -1);
    local_70 = CONCAT44(iVar4,iVar13);
  }
  pTVar3 = &this->PendingCollisionNotifies;
  piVar1 = &(this->PendingCollisionNotifies).ArrayMax;
  *param_4 = true;
  local_res8[0] = (this->PendingCollisionNotifies).ArrayNum;
  if (local_res8[0] == *piVar1) {
    local_res8[0] =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8c8,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->PendingCollisionNotifies).ArrayNum = local_res8[0] + 1;
  memset((pTVar3->AllocatorInstance).Data + (longlong)(int)local_res8[0] * 200,0,200);
  local_a8 = &local_b8;
  local_a0 = local_res8;
  TSet<TTuple<FPhysScene_Chaos::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<FPhysScene_Chaos::FUniqueContactPairKey,int,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FPhysScene_Chaos::FUniqueContactPairKey_const_&,int_const_&>_>
            ((TSet<TTuple<FPhysScene_Chaos::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<FPhysScene_Chaos::FUniqueContactPairKey,int,1>,FDefaultSetAllocator>
              *)&this->ContactPairToPendingNotifyMap,
             (TPairInitializer<FPhysScene_Chaos::FUniqueContactPairKey_const_&,int_const_&> *)
             (local_res8 + 2),(bool *)&local_a8);
  lVar16 = (longlong)(int)local_res8[0];
  uVar14 = 0;
  if ((int)local_res8[0] < (this->PendingCollisionNotifies).ArrayNum) {
    uVar14 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FCollisionNotifyInfo *)(*pcVar6)();
    return pFVar12;
  }
  return (FCollisionNotifyInfo *)((pTVar3->AllocatorInstance).Data + lVar16 * 200);
}

// GetPendingCollisionNotifies @ 14828b950

TArray<FCollisionNotifyInfo,TSizedDefaultAllocator<32>_> * __thiscall
FPhysScene_Chaos::GetPendingCollisionNotifies(FPhysScene_Chaos *this,int param_1)

{
  return &this->MNotifies;
}

// GetPhysicsReplication @ 14828b9d0

IPhysicsReplication * __thiscall FPhysScene_Chaos::GetPhysicsReplication(FPhysScene_Chaos *this)

{
  return (this->PhysicsReplication).Ptr;
}

// GetPhysicsReplicationLOD @ 14828b9e0

IPhysicsReplicationLOD * __thiscall
FPhysScene_Chaos::GetPhysicsReplicationLOD(FPhysScene_Chaos *this)

{
  return (this->PhysicsReplicationLOD).Ptr;
}

// GetSolverActor @ 14828e1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall FPhysScene_Chaos::GetSolverActor(FPhysScene_Chaos *this)

{
  AActor *pAVar1;
  
  pAVar1 = (AActor *)FWeakObjectPtr::Get(&(this->SolverActor).WeakPtr);
  return pAVar1;
}

// GetStateFromReplicationCache @ 14828e690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRigidBodyState * __thiscall
FPhysScene_Chaos::GetStateFromReplicationCache
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1,int *param_2)

{
  FRigidBodyState *pFVar1;
  
  CreatePhysicsReplicationCache(this);
  pFVar1 = FPhysicsReplicationCache::GetStateFromReplicationCache
                     ((this->PhysicsReplicationCache).Ptr,param_1,param_2);
  return pFVar1;
}

// HandleBreakingEvents @ 14828fac0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysScene_Chaos::HandleBreakingEvents(FPhysScene_Chaos *this,FBreakingEventData *param_1)

{
  double dVar1;
  int iVar2;
  UChaosEventRelay *pUVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleBreakingEvents(Chaos::FBreakingEventData_const_&)_::_2_::FStat_STAT_HandleGlobalBreakingEvents>
  FVar7;
  UPrimitiveComponent *pUVar8;
  FChaosBreakEvent *pFVar9;
  uint uVar10;
  FColor_u_0 FVar11;
  FName FVar12;
  FBreakingData *pFVar13;
  FBreakingData *pFVar14;
  undefined1 uVar15;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_78;
  undefined8 local_70;
  FReadAccessScope local_68;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_HandleGlobalBreakingEvents ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleBreakingEvents(Chaos::FBreakingEventData_const_&)_::_2_::FStat_STAT_HandleGlobalBreakingEvents>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res10._s_0,"STAT_HandleGlobalBreakingEvents");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleGlobalBreakingEvents,*pFVar6,
                   L"STAT_HandleGlobalBreakingEvents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_HandleGlobalBreakingEvents;
  if (StatPtr_STAT_HandleGlobalBreakingEvents ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleBreakingEvents(Chaos::FBreakingEventData_const_&)_::_2_::FStat_STAT_HandleGlobalBreakingEvents>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_HandleGlobalBreakingEvents");
    FVar7 = (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleBreakingEvents(Chaos::FBreakingEventData_const_&)_::_2_::FStat_STAT_HandleGlobalBreakingEvents>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleGlobalBreakingEvents,
                         *pFVar6,L"STAT_HandleGlobalBreakingEvents","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  uVar15 = 0;
  local_res10.Bits = local_res10.Bits & 0xffffff00;
  FVar11.Bits = (uint)FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      uVar15 = 1;
      local_res10._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar11.Bits;
        uStackX_14 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x4e3);
        uVar15 = 3;
        local_res10._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar11.Bits;
      uStackX_14 = uVar10;
      local_res20 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      local_res10.Bits = CONCAT31(local_res10.Bits._1_3_,uVar15) | 4;
      uVar15 = uVar15 | 4;
      goto LAB_14828fc49;
    }
  }
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_14828fc49:
  if (((param_1->BreakingData).bHasGlobalEvent != false) &&
     (dVar1 = (double)(param_1->BreakingData)._padding_,
     this->LastBreakEventDispatchTime <= dVar1 && dVar1 != this->LastBreakEventDispatchTime)) {
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    this->LastBreakEventDispatchTime = dVar1;
    iVar2 = (param_1->BreakingData).AllBreakingsArray.ArrayNum;
    pFVar13 = (FBreakingData *)(param_1->BreakingData).AllBreakingsArray.AllocatorInstance.Data;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((param_1->BreakingData).AllBreakingsArray.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FBreakingData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      FVar12 = local_res20;
      if (pFVar13 == pFVar14) break;
      if (((pFVar13->_padding_ & 2) != 0) && (pFVar13->Proxy != (IPhysicsProxyBase *)0x0)) {
        pUVar8 = GetOwningComponent<UPrimitiveComponent>(this,pFVar13->Proxy);
        iVar5 = (int)local_70;
        if ((int)local_70 == local_70._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10a0,&local_78,(int *)((longlong)&local_70 + 4));
        }
        local_70 = CONCAT44(local_70._4_4_,iVar5 + 1);
        pFVar9 = FChaosBreakEvent::FChaosBreakEvent
                           ((FChaosBreakEvent *)(local_78.Data + (longlong)iVar5 * 0xa0),pFVar13);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar8 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        (pFVar9->Component).field0_0x0.DebugPtr = pUVar8;
      }
      pFVar13 = pFVar13 + 1;
    }
    uVar15 = local_res10._s_0.B;
    if (0 < (int)local_70) {
      pUVar3 = (this->ChaosEventRelay).field0_0x0.DebugPtr;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnBreakEvent,
                 &local_68);
      iVar2 = *(int *)&(pUVar3->OnBreakEvent).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      FVar4.Data = local_78.Data;
      if (0 < iVar2) {
        iVar2 = (int)local_70;
        local_68.DestructionSentinel._0_8_ = (FScriptContainerElement *)0x0;
        local_68.DestructionSentinel.Accessor._4_4_ = 0;
        local_68.DestructionSentinel.Accessor._0_4_ = (int)local_70;
        if ((int)local_70 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa0,0x10,(int)local_70,0,(ForAnyElementType *)&local_68,(int)local_70,
                     (int *)((longlong)&local_68.DestructionSentinel.Accessor + 4));
          ConstructItems<FChaosBreakEvent,FChaosBreakEvent,int>
                    ((void *)local_68.DestructionSentinel._0_8_,(FChaosBreakEvent *)FVar4.Data,iVar2
                    );
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3->OnBreakEvent,
                   &local_68);
        if ((FScriptContainerElement *)local_68.DestructionSentinel._0_8_ !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_68.DestructionSentinel._0_8_);
        }
      }
    }
    if ((FChaosBreakEvent *)local_78.Data != (FChaosBreakEvent *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  if ((uVar15 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar15 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar15 & 4) != 0) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  return;
}

// HandleCollisionEvents @ 14828fee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysScene_Chaos::HandleCollisionEvents(FPhysScene_Chaos *this,FCollisionEventData *param_1)

{
  TMap<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  FRigidBodyContactInfo *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int *piVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator> *pTVar18
  ;
  bool bVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleCollisionEvents(Chaos::FCollisionEventData_const_&)_::_2_::FStat_STAT_HandleCollisionEvents>
  FVar21;
  UPhysicsSettings *pUVar22;
  FScriptContainerElement *pFVar23;
  TObjectPtr<UPrimitiveComponent> *pTVar24;
  FCollisionNotifyInfo *pFVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  FChaosPhysicsMaterial *pFVar28;
  FBodyInstance *pFVar29;
  FChaosPhysicsMaterial *pFVar30;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar31;
  FScriptContainerElement *pFVar32;
  byte bVar33;
  longlong lVar34;
  ulonglong uVar35;
  int iVar36;
  uint uVar37;
  ForElementType<FSetElementId> FVar38;
  FNameEntryId FVar39;
  int iVar40;
  int iVar41;
  UPrimitiveComponent *pUVar42;
  FScriptContainerElement *pFVar43;
  FPlatformRWLock *pFVar44;
  IPhysicsProxyBase *pIVar45;
  TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *pTVar46;
  FName FVar47;
  undefined1 *puVar48;
  uint *puVar49;
  UPhysicalMaterial *pUVar50;
  TObjectPtr<UPhysicalMaterial>_u_0 TVar51;
  undefined1 *puVar52;
  UPrimitiveComponent *pUVar53;
  uint uVar54;
  IPhysicsProxyBase *pIVar55;
  uint uVar56;
  uint local_res10;
  uint uStackX_14;
  bool local_res18 [8];
  byte local_res20;
  bool local_328;
  bool local_327 [7];
  uint local_320;
  FChaosPhysicsMaterial *local_318;
  FPhysicsSolverBase *local_310;
  FScriptContainerElement *local_308;
  UPrimitiveComponent *local_300;
  FCollisionNotifyInfo *local_2f8;
  UPrimitiveComponent *local_2f0;
  IPhysicsProxyBase *local_2e8;
  TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *local_2e0;
  int local_2d8;
  uint uStack_2d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2d0;
  uint local_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  int local_2b8;
  uint uStack_2b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b0;
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
  *local_298;
  int iStack_290;
  uint uStack_28c;
  undefined1 *local_288;
  undefined4 uStack_280;
  int iStack_27c;
  int local_278;
  int iStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  FColor_u_0 local_268 [2];
  FName local_260;
  IPhysicsProxyBase *local_258;
  UPrimitiveComponent *local_250;
  FPlatformRWLock *local_248;
  UPrimitiveComponent *local_240;
  FName local_238;
  FName local_230;
  FScriptContainerElement *local_220;
  undefined8 uStack_218;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  int local_1f8;
  undefined4 uStack_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  UObject *local_1e0;
  UPrimitiveComponent *local_1d8;
  UObject *local_1d0;
  UPrimitiveComponent *local_1c8;
  UObject *local_1c0;
  UPrimitiveComponent *local_1b8;
  UPrimitiveComponent *local_1b0;
  UObject *local_1a8;
  FScriptContainerElement *local_1a0;
  IPhysicsProxyBase *local_198;
  int local_190;
  FScriptContainerElement *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FName local_128;
  FName local_120;
  FScriptContainerElement *local_118;
  undefined8 uStack_110;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
  *local_e8;
  undefined8 uStack_e0;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_9c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_HandleCollisionEvents ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleCollisionEvents(Chaos::FCollisionEventData_const_&)_::_2_::FStat_STAT_HandleCollisionEvents>
         )0x0) {
      pFVar20 = ::FName::FName(&local_128,"STAT_HandleCollisionEvents");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleCollisionEvents,*pFVar20,
                 L"STAT_HandleCollisionEvents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_HandleCollisionEvents;
  if (StatPtr_STAT_HandleCollisionEvents ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleCollisionEvents(Chaos::FCollisionEventData_const_&)_::_2_::FStat_STAT_HandleCollisionEvents>
       )0x0) {
    pFVar20 = ::FName::FName(&local_120,"STAT_HandleCollisionEvents");
    FVar21 = (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleCollisionEvents(Chaos::FCollisionEventData_const_&)_::_2_::FStat_STAT_HandleCollisionEvents>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleCollisionEvents,*pFVar20,
                          L"STAT_HandleCollisionEvents","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar47 = *(FName *)FVar21;
  bVar33 = 0;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  local_res20 = 0;
  FVar39 = FVar47.ComparisonIndex.Value;
  uVar37 = FVar47.Number;
  if ((FVar39.Value != 0) || (uVar37 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_268[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_268[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar33 = 1;
      local_res20 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_238.ComparisonIndex.Value = FVar39.Value;
        local_238.Number = uVar37;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_238,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x442);
        bVar33 = 3;
        local_res20 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar39.Value;
      uStackX_14 = uVar37;
      local_260 = FVar47;
      FThreadStats::AddMessage(FVar47,CycleScopeStart);
      local_res20 = bVar33 | 4;
      goto LAB_148290093;
    }
  }
  local_260 = local_230;
  FVar47 = local_230;
LAB_148290093:
  TSet<TTuple<FPhysScene_Chaos::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<FPhysScene_Chaos::FUniqueContactPairKey,int,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FPhysScene_Chaos::FUniqueContactPairKey,int>,TDefaultMapHashableKeyFuncs<FPhysScene_Chaos::FUniqueContactPairKey,int,1>,FDefaultSetAllocator>
           *)&this->ContactPairToPendingNotifyMap);
  pTVar1 = &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap;
  pTVar46 = &(param_1->CollisionData).AllCollisionsArray;
  local_308 = (FScriptContainerElement *)pTVar1;
  local_2e0 = pTVar46;
  pUVar22 = UPhysicsSettings::Get();
  dVar13 = (double)pUVar22->MinDeltaVelocityForHitEvents;
  if ((0 < (param_1->CollisionData).AllCollisionsArray.ArrayNum) &&
     (dVar3 = (double)(param_1->CollisionData)._padding_,
     this->LastEventDispatchTime <= dVar3 && dVar3 != this->LastEventDispatchTime)) {
    this->LastEventDispatchTime = dVar3;
    pFVar44 = (FPlatformRWLock *)0x0;
    if (Chaos::CVars::bEnableAsyncInitBody != false) {
      pFVar44 = &this->CollisionEventRegistrationsLock;
    }
    local_248 = pFVar44;
    if (pFVar44 != (FPlatformRWLock *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)pFVar44);
    }
    iStack_290 = 0;
    local_278 = 0;
    iStack_270 = *(int *)&(this->CollisionEventRegistrations).Elements.field_0x8 -
                 *(int *)&(this->CollisionEventRegistrations).Elements.field_0x34;
    iVar40 = *(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x8 -
             *(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x34;
    uStack_28c = 1;
    if (iVar40 <= iStack_270) {
      iVar41 = *(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                        field_0x28;
      puVar52 = &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x10;
      iVar36 = 0;
      iStack_27c = 0;
      if (iVar41 != 0) {
        puVar49 = *(uint **)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                             field_0x20;
        if (puVar49 == (uint *)0x0) {
          puVar49 = (uint *)puVar52;
        }
        uStack_28c = *puVar49;
        while (uStack_28c == 0) {
          lVar34 = (longlong)iStack_290;
          local_278 = local_278 + 0x20;
          iStack_290 = iStack_290 + 1;
          if ((int)(iVar41 + -1 + (iVar41 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_290) {
            iVar36 = *(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                              field_0x28;
            uStack_28c = 1;
            iStack_27c = iVar41;
            goto LAB_1482901dc;
          }
          uStack_28c = puVar49[lVar34 + 1];
        }
        iVar36 = *(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                          field_0x28;
        uStack_28c = -uStack_28c & uStack_28c;
        uVar35 = (ulonglong)uStack_28c * 2 + 1;
        lVar34 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        local_1f0 = (int)lVar34;
        iStack_27c = local_1f0 + -1 + local_278;
        if (iVar36 < iStack_27c) {
          iStack_27c = iVar41;
        }
      }
LAB_1482901dc:
      uVar37 = *(uint *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                         field_0x28;
      iVar41 = (int)uVar37 >> 5;
      bVar33 = (byte)uVar37 & 0x1f;
      TStack_180._padding_ = CONCAT44(uStack_28c,iStack_290);
      uStack_2b4 = 1 << bVar33;
      uVar56 = -1 << bVar33;
      uVar54 = uVar37 & 0xffffffe0;
      uStack_280 = 0xffffffff;
      iStack_274 = local_9c;
      TStack_180.CurrentBitIndex = iStack_27c;
      TStack_180.UnvisitedBitMask = 0xffffffff;
      TStack_180._28_4_ = local_9c;
      TStack_180.BaseBitIndex = local_278;
      uStack_160 = CONCAT44(uStack_26c,iVar40);
      local_2b8 = iVar41;
      pTStack_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
      local_2a8 = uVar56;
      uStack_2a4 = uVar37;
      uStack_2a0 = uVar54;
      local_298 = (TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
                   *)pTVar1;
      local_288 = puVar52;
      iStack_270 = iVar40;
      local_188 = (FScriptContainerElement *)pTVar1;
      TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
      if ((((int)uVar37 < 0) || (iVar36 < (int)uVar37)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar8 = *(uint *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                        field_0x28;
      if (uVar37 != uVar8) {
        puVar48 = *(undefined1 **)
                   &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x20;
        if (puVar48 != (undefined1 *)0x0) {
          puVar52 = puVar48;
        }
        uVar56 = uVar56 & *(uint *)(puVar52 + (longlong)iVar41 * 4);
        while (uVar56 == 0) {
          uStack_2a0 = uVar54 + 0x20;
          local_2b8 = iVar41 + 1;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2b8)
          goto LAB_148290321;
          uVar56 = *(uint *)(puVar52 + (longlong)iVar41 * 4 + 4);
          local_2a8 = 0xffffffff;
          iVar41 = local_2b8;
          uVar54 = uStack_2a0;
        }
        uStack_2b4 = -uVar56 & uVar56;
        uVar35 = (ulonglong)uStack_2b4 * 2 + 1;
        lVar34 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        local_1ec = (int)lVar34;
        uStack_2a4 = local_1ec + -1 + uVar54;
        if ((int)uVar8 < (int)uStack_2a4) {
LAB_148290321:
          uStack_2a4 = uVar8;
        }
      }
      uStack_218 = CONCAT44(uStack_2b4,local_2b8);
      local_220 = local_308;
      uStack_208 = CONCAT44(uStack_2a4,local_2a8);
      uStack_200 = CONCAT44(uStack_29c,uStack_2a0);
      local_1f8 = *(int *)(local_308 + 8) - *(int *)(local_308 + 0x34);
      pTStack_210 = pTStack_2b0;
      local_118 = local_308;
      uStack_f0 = CONCAT44(uStack_1f4,local_1f8);
      local_108 = pTStack_2b0;
      uStack_110 = uStack_218;
      uStack_100 = uStack_208;
      local_f8 = uStack_200;
LAB_148290380:
      pFVar23 = local_188;
      if (*(int *)(local_188 + 8) - *(int *)(local_188 + 0x34) != (int)uStack_160) {
        local_327[1] = false;
        `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_327 + 1);
      }
      if (((TStack_180.CurrentBitIndex != uStack_100._4_4_) || (TStack_180.Array != local_108)) ||
         (pFVar23 != local_118)) {
        pUVar42 = *(UPrimitiveComponent **)&pFVar23->field_0x0;
        local_318 = (FChaosPhysicsMaterial *)((longlong)TStack_180.CurrentBitIndex * 0x20);
        local_310 = *(FPhysicsSolverBase **)(&pUVar42->field_0x0 + (longlong)&local_318->Friction);
        local_250 = pUVar42;
        local_2f0 = GetOwningComponent<UPrimitiveComponent>(this,(IPhysicsProxyBase *)local_310);
        pFVar30 = local_318;
        if ((local_2f0 != (UPrimitiveComponent *)0x0) &&
           (uVar37 = ((uint)((ulonglong)local_2f0 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_2f0 >> 4)) * -0x7a143595,
           uVar37 = (uVar37 >> 0xd ^ uVar37) * -0x3d4d51cb,
           *(int *)&(this->CollisionEventRegistrations).Elements.field_0x8 !=
           *(int *)&(this->CollisionEventRegistrations).Elements.field_0x34)) {
          FVar9 = (this->CollisionEventRegistrations).Hash.SecondaryData;
          FVar38 = (ForElementType<FSetElementId>)&(this->CollisionEventRegistrations).Hash;
          if (FVar9 != (ForElementType<FSetElementId>)0x0) {
            FVar38 = FVar9;
          }
          iVar40 = *(int *)((longlong)FVar38 +
                           (ulonglong)
                           ((this->CollisionEventRegistrations).HashSize - 1U &
                           (uVar37 >> 0x10 ^ uVar37)) * 4);
          if (iVar40 != -1) {
            lVar34 = *(longlong *)&(this->CollisionEventRegistrations).Elements;
            do {
              if (*(UPrimitiveComponent **)(lVar34 + (longlong)iVar40 * 0x10) == local_2f0) {
                local_320 = *(uint *)((longlong)&local_318->Restitution + (longlong)pUVar42);
                uVar35 = (ulonglong)(int)local_320;
                pIVar45 = *(IPhysicsProxyBase **)
                           ((longlong)&local_318->StaticFriction + (longlong)pUVar42);
                local_258 = (IPhysicsProxyBase *)((longlong)&pIVar45->_padding_ + uVar35 * 4);
                goto LAB_1482904c0;
              }
              iVar40 = *(int *)(lVar34 + 8 + (longlong)iVar40 * 0x10);
            } while (iVar40 != -1);
          }
        }
        goto LAB_148290a80;
      }
      goto LAB_148291445;
    }
    local_298 = &this->CollisionEventRegistrations;
    puVar52 = &(this->CollisionEventRegistrations).Elements.field_0x10;
    iVar40 = *(int *)&(this->CollisionEventRegistrations).Elements.field_0x28;
    iVar41 = 0;
    iStack_27c = 0;
    if (iVar40 != 0) {
      puVar49 = *(uint **)&(this->CollisionEventRegistrations).Elements.field_0x20;
      if (puVar49 == (uint *)0x0) {
        puVar49 = (uint *)puVar52;
      }
      uStack_28c = *puVar49;
      while (uStack_28c == 0) {
        lVar34 = (longlong)iStack_290;
        local_278 = local_278 + 0x20;
        iStack_290 = iStack_290 + 1;
        if ((int)(iVar40 + -1 + (iVar40 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_290) {
          iVar41 = *(int *)&(this->CollisionEventRegistrations).Elements.field_0x28;
          uStack_28c = 1;
          iStack_27c = iVar40;
          goto LAB_148290b28;
        }
        uStack_28c = puVar49[lVar34 + 1];
      }
      iVar41 = *(int *)&(this->CollisionEventRegistrations).Elements.field_0x28;
      uStack_28c = -uStack_28c & uStack_28c;
      uVar35 = (ulonglong)uStack_28c * 2 + 1;
      lVar34 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_1e8 = (int)lVar34;
      iStack_27c = local_1e8 + -1 + local_278;
      if (iVar41 < iStack_27c) {
        iStack_27c = iVar40;
      }
    }
LAB_148290b28:
    TStack_150._padding_ = CONCAT44(uStack_28c,iStack_290);
    uVar37 = *(uint *)&(this->CollisionEventRegistrations).Elements.field_0x28;
    iVar40 = (int)uVar37 >> 5;
    bVar33 = (byte)uVar37 & 0x1f;
    uStack_2d4 = 1 << bVar33;
    uVar56 = -1 << bVar33;
    uVar54 = uVar37 & 0xffffffe0;
    uStack_280 = 0xffffffff;
    TStack_150.CurrentBitIndex = iStack_27c;
    TStack_150.UnvisitedBitMask = 0xffffffff;
    TStack_150._28_4_ = iStack_27c;
    TStack_150.BaseBitIndex = local_278;
    uStack_130 = CONCAT44(uStack_26c,iStack_270);
    local_2d8 = iVar40;
    pTStack_2d0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
    local_2c8 = uVar56;
    uStack_2c4 = uVar37;
    uStack_2c0 = uVar54;
    local_288 = puVar52;
    iStack_274 = iStack_27c;
    local_158 = local_298;
    TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
    if ((((int)uVar37 < 0) || (iVar41 < (int)uVar37)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = *(uint *)&(this->CollisionEventRegistrations).Elements.field_0x28;
    if (uVar37 != uVar8) {
      puVar48 = *(undefined1 **)&(this->CollisionEventRegistrations).Elements.field_0x20;
      if (puVar48 == (undefined1 *)0x0) {
        puVar48 = puVar52;
      }
      uVar56 = uVar56 & *(uint *)(puVar48 + (longlong)iVar40 * 4);
      while (uVar56 == 0) {
        uStack_2c0 = uVar54 + 0x20;
        local_2d8 = iVar40 + 1;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2d8)
        goto LAB_148290c71;
        uVar56 = *(uint *)(puVar48 + (longlong)iVar40 * 4 + 4);
        local_2c8 = 0xffffffff;
        iVar40 = local_2d8;
        uVar54 = uStack_2c0;
      }
      uStack_2d4 = -uVar56 & uVar56;
      uVar35 = (ulonglong)uStack_2d4 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_190 = (int)lVar34;
      uStack_2c4 = local_190 + -1 + uVar54;
      if ((int)uVar8 < (int)uStack_2c4) {
LAB_148290c71:
        uStack_2c4 = uVar8;
      }
    }
    uStack_218 = CONCAT44(uStack_2d4,local_2d8);
    uStack_208 = CONCAT44(uStack_2c4,local_2c8);
    uStack_200 = CONCAT44(uStack_2bc,uStack_2c0);
    local_220 = (FScriptContainerElement *)&this->CollisionEventRegistrations;
    local_1f8 = *(int *)&(this->CollisionEventRegistrations).Elements.field_0x8 -
                *(int *)&(this->CollisionEventRegistrations).Elements.field_0x34;
    pTStack_210 = pTStack_2d0;
    uStack_c0 = CONCAT44(uStack_1f4,local_1f8);
    local_d8 = pTStack_2d0;
    local_e8 = (TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
                *)local_220;
    uStack_e0 = uStack_218;
    uStack_d0 = uStack_208;
    local_c8 = uStack_200;
    while( true ) {
      pTVar18 = local_158;
      if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
          (int)uStack_130) {
        local_327[3] = false;
        `TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_327 + 3);
      }
      if (((TStack_150.CurrentBitIndex == uStack_d0._4_4_) && (TStack_150.Array == local_d8)) &&
         (FVar47 = local_260, pFVar44 = local_248, pTVar18 == local_e8)) break;
      pUVar42 = *(UPrimitiveComponent **)
                 (*(longlong *)&pTVar18->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
      pFVar44 = (FPlatformRWLock *)0x0;
      if (Chaos::CVars::bEnableAsyncInitBody != false) {
        pFVar44 = &this->PhysicsProxyComponentMapsLock;
      }
      local_250 = pUVar42;
      if (pFVar44 == (FPlatformRWLock *)0x0) {
        pFVar30 = (FChaosPhysicsMaterial *)
                  TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ComponentToPhysicsProxyMap,pUVar42);
        local_318 = pFVar30;
      }
      else {
        AcquireSRWLockShared((PSRWLOCK)pFVar44);
        pFVar30 = (FChaosPhysicsMaterial *)
                  TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->ComponentToPhysicsProxyMap,pUVar42);
        local_318 = pFVar30;
        ReleaseSRWLockShared((PSRWLOCK)pFVar44);
      }
      if (pFVar30 != (FChaosPhysicsMaterial *)0x0) {
        uVar35 = (ulonglong)*(int *)&pFVar30->StaticFriction;
        pIVar55 = (IPhysicsProxyBase *)pFVar30->Friction;
        local_2f8 = (FCollisionNotifyInfo *)
                    CONCAT44(local_2f8._4_4_,*(int *)&pFVar30->StaticFriction);
        pIVar45 = (IPhysicsProxyBase *)(&pIVar55->_padding_ + uVar35);
        local_198 = pIVar45;
        while( true ) {
          local_2e8 = pIVar55;
          if (*(int *)&pFVar30->StaticFriction != (int)uVar35) {
            local_327[4] = false;
            `TCheckedPointerIterator<IPhysicsProxyBase_*_const,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_327 + 4);
          }
          if (pIVar55 == pIVar45) break;
          local_310 = (FPhysicsSolverBase *)pIVar55->_padding_;
          pTVar31 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                    ::Find((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            *)local_308,(IPhysicsProxyBase *)local_310);
          if (pTVar31 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            pFVar23 = (pTVar31->AllocatorInstance).Data;
            local_320 = pTVar31->ArrayNum;
            uVar35 = (ulonglong)(int)local_320;
            local_1a0 = pFVar23 + uVar35 * 4;
LAB_148290e16:
            pFVar32 = local_1a0;
            if (pTVar31->ArrayNum != (int)uVar35) {
              local_327[5] = false;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_327 + 5);
            }
            pIVar45 = local_198;
            pIVar55 = local_2e8;
            if (pFVar23 == pFVar32) goto LAB_148291404;
            uVar56 = Chaos::FEventManager::DecodeCollisionIndex(*(int *)pFVar23,local_res18);
            pTVar46 = local_2e0;
            uVar37 = 0;
            if ((int)uVar56 < local_2e0->ArrayNum) {
              uVar37 = ~uVar56 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar26 = (pTVar46->AllocatorInstance).Data + (longlong)(int)uVar56 * 0x120;
            pFVar32 = pFVar26 + 0x100;
            if (local_res18[0] == false) {
              pFVar32 = pFVar26 + 0x108;
            }
            pIVar45 = *(IPhysicsProxyBase **)pFVar32;
            local_258 = pIVar45;
            if (pIVar45 != (IPhysicsProxyBase *)0x0) {
              pFVar44 = (FPlatformRWLock *)0x0;
              if (Chaos::CVars::bEnableAsyncInitBody != false) {
                pFVar44 = &this->PhysicsProxyComponentMapsLock;
              }
              if (pFVar44 != (FPlatformRWLock *)0x0) {
                AcquireSRWLockShared((PSRWLOCK)pFVar44);
              }
              pTVar24 = TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
                        ::Find((TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
                                *)&this->PhysicsProxyToComponentMap,pIVar45);
              if (pTVar24 == (TObjectPtr<UPrimitiveComponent> *)0x0) {
                if (pFVar44 == (FPlatformRWLock *)0x0) goto LAB_1482913e5;
                ReleaseSRWLockShared((PSRWLOCK)pFVar44);
                uVar35 = (ulonglong)local_320;
                pFVar23 = pFVar23 + 4;
                goto LAB_148290e16;
              }
              pUVar42 = (pTVar24->field0_0x0).DebugPtr;
              local_1b8 = pUVar42;
              if (pFVar44 != (FPlatformRWLock *)0x0) {
                ReleaseSRWLockShared((PSRWLOCK)pFVar44);
              }
              if (pUVar42 != (UPrimitiveComponent *)0x0) {
                local_327[0] = false;
                pFVar25 = GetPendingCollisionForContactPair
                                    (this,local_310,pIVar45,*(double *)(pFVar26 + 0x118),local_327);
                dVar14 = *(double *)(pFVar26 + 0x18);
                dVar15 = *(double *)(pFVar26 + 0x20);
                pTStack_210 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar26 + 0x28);
                dVar12 = *(double *)(pFVar26 + 0x38) * *(double *)(pFVar26 + 0x20) +
                         *(double *)(pFVar26 + 0x30) * *(double *)(pFVar26 + 0x18) +
                         *(double *)(pFVar26 + 0x40) * *(double *)(pFVar26 + 0x28);
                dVar3 = *(double *)(pFVar26 + 0x30);
                dVar4 = *(double *)(pFVar26 + 0x40);
                dVar5 = *(double *)(pFVar26 + 0x38);
                dVar6 = (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Y;
                (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.X =
                     dVar12 * dVar3 +
                     (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.X;
                dVar7 = (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Z;
                (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Y =
                     dVar12 * dVar5 + dVar6;
                (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Z =
                     dVar12 * dVar4 + dVar7;
                (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Z =
                     ((double)pTStack_210 - dVar12 * dVar4) +
                     (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Z;
                dVar4 = (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Y;
                (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.X =
                     (dVar14 - dVar12 * dVar3) +
                     (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.X;
                (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Y =
                     (dVar15 - dVar12 * dVar5) + dVar4;
                if (local_res18[0] == false) {
                  pUVar53 = (UPrimitiveComponent *)(pFVar26 + 0x78);
                  pUVar42 = (UPrimitiveComponent *)(pFVar26 + 0x90);
                }
                else {
                  pUVar53 = (UPrimitiveComponent *)(pFVar26 + 0x90);
                  pUVar42 = (UPrimitiveComponent *)(pFVar26 + 0x78);
                }
                piVar10 = &(pFVar25->RigidCollisionData).ContactInfos.ArrayMax;
                iVar40 = (pFVar25->RigidCollisionData).ContactInfos.ArrayNum;
                local_300 = pUVar53;
                local_2f0 = pUVar42;
                if (iVar40 == *piVar10) {
                  iVar40 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x848,(ForAnyElementType *)&pFVar25->RigidCollisionData,
                                      piVar10);
                }
                (pFVar25->RigidCollisionData).ContactInfos.ArrayNum = iVar40 + 1;
                lVar34 = (longlong)iVar40;
                pFVar32 = (pFVar25->RigidCollisionData).ContactInfos.AllocatorInstance.Data;
                *(undefined8 *)(pFVar32 + lVar34 * 0x48) = 0;
                *(undefined8 *)(pFVar32 + lVar34 * 0x48 + 8) = 0;
                *(undefined8 *)(pFVar32 + lVar34 * 0x48 + 0x10) = 0;
                *(undefined8 *)(pFVar32 + lVar34 * 0x48 + 0x10 + 8) = 0;
                pFVar2 = (FRigidBodyContactInfo *)(pFVar32 + lVar34 * 0x48);
                (pFVar2->ContactNormal).field0_0x0._s_0.Y = 0.0;
                (pFVar2->ContactNormal).field0_0x0._s_0.Z = 0.0;
                pFVar2->ContactPenetration = 0.0;
                pFVar2->bContactProbe = false;
                pFVar2->field_0x35 = 0;
                pFVar2->_padding_ = 0;
                pFVar2->PhysMaterial[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
                pFVar2->PhysMaterial[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
                dVar3 = *(double *)(pFVar26 + 0x38);
                (pFVar2->ContactNormal).field0_0x0._s_0.X = *(double *)(pFVar26 + 0x30);
                (pFVar2->ContactNormal).field0_0x0._s_0.Y = dVar3;
                (pFVar2->ContactNormal).field0_0x0._s_0.Z = *(double *)(pFVar26 + 0x40);
                dVar3 = *(double *)(pFVar26 + 8);
                (pFVar2->ContactPosition).field0_0x0._s_0.X = *(double *)pFVar26;
                (pFVar2->ContactPosition).field0_0x0._s_0.Y = dVar3;
                (pFVar2->ContactPosition).field0_0x0._s_0.Z = *(double *)(pFVar26 + 0x10);
                pFVar2->ContactPenetration = (float)*(double *)(pFVar26 + 0xe8);
                pFVar2->bContactProbe = (bool)pFVar26[0xf8];
                uVar37 = SUB84(*(double *)pUVar53,0) & uVar16;
                uVar56 = (uint)((ulonglong)*(double *)pUVar53 >> 0x20) & uVar17;
                if (((((dVar13 <= (double)CONCAT44(uVar56,uVar37) &&
                        (double)CONCAT44(uVar56,uVar37) != dVar13) ||
                      (uVar37 = (uint)*(undefined8 *)&pUVar53->field_0x8 & uVar16,
                      uVar56 = (uint)((ulonglong)*(undefined8 *)&pUVar53->field_0x8 >> 0x20) &
                               uVar17,
                      dVar13 <= (double)CONCAT44(uVar56,uVar37) &&
                      (double)CONCAT44(uVar56,uVar37) != dVar13)) ||
                     (uVar37 = (uint)*(undefined8 *)&pUVar53->field_0x10 & uVar16,
                     uVar56 = (uint)((ulonglong)*(undefined8 *)&pUVar53->field_0x10 >> 0x20) &
                              uVar17,
                     dVar13 <= (double)CONCAT44(uVar56,uVar37) &&
                     (double)CONCAT44(uVar56,uVar37) != dVar13)) ||
                    ((uVar37 = SUB84(*(double *)pUVar42,0) & uVar16,
                     uVar56 = (uint)((ulonglong)*(double *)pUVar42 >> 0x20) & uVar17,
                     dVar13 <= (double)CONCAT44(uVar56,uVar37) &&
                     (double)CONCAT44(uVar56,uVar37) != dVar13 ||
                     (uVar37 = (uint)*(undefined8 *)&pUVar42->field_0x8 & uVar16,
                     uVar56 = (uint)((ulonglong)*(undefined8 *)&pUVar42->field_0x8 >> 0x20) & uVar17
                     , dVar13 <= (double)CONCAT44(uVar56,uVar37) &&
                       (double)CONCAT44(uVar56,uVar37) != dVar13)))) ||
                   (uVar37 = (uint)*(undefined8 *)&pUVar42->field_0x10 & uVar16,
                   uVar56 = (uint)((ulonglong)*(undefined8 *)&pUVar42->field_0x10 >> 0x20) & uVar17,
                   dVar13 <= (double)CONCAT44(uVar56,uVar37) &&
                   (double)CONCAT44(uVar56,uVar37) != dVar13)) {
                  bVar19 = false;
                }
                else {
                  bVar19 = true;
                }
                (pFVar25->RigidCollisionData).bIsVelocityDeltaUnderThreshold = bVar19;
                pFVar30 = Chaos::FMaterialHandle::Get((FMaterialHandle *)(pFVar26 + 0xf0));
                pFVar28 = Chaos::FMaterialHandle::Get((FMaterialHandle *)(pFVar26 + 0xf4));
                if (((pFVar30 == (FChaosPhysicsMaterial *)0x0) ||
                    (piVar10 = pFVar30->UserData, piVar10 == (int *)0x0)) || (*piVar10 != 2)) {
                  pUVar50 = (UPhysicalMaterial *)0x0;
                }
                else {
                  pUVar50 = *(UPhysicalMaterial **)(piVar10 + 2);
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar50 != (UPhysicalMaterial *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar50);
                }
                pFVar2->PhysMaterial[0].field0_0x0.DebugPtr = pUVar50;
                if (((pFVar28 == (FChaosPhysicsMaterial *)0x0) ||
                    (piVar10 = pFVar28->UserData, piVar10 == (int *)0x0)) || (*piVar10 != 2)) {
                  TVar51.DebugPtr = (UPhysicalMaterial *)0x0;
                }
                else {
                  TVar51 = (TObjectPtr<UPhysicalMaterial>_u_0)
                           ((TObjectPtr<UPhysicalMaterial>_u_0 *)(piVar10 + 2))->DebugPtr;
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (TVar51.DebugPtr != (UPhysicalMaterial *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)TVar51.DebugPtr);
                }
                pFVar2->PhysMaterial[1].field0_0x0 = TVar51;
                if (local_res18[0] != false) {
                  FRigidBodyContactInfo::SwapOrder(pFVar2);
                }
                if (local_327[0] == false) goto LAB_1482913e5;
                pFVar25->bCallEvent0 = true;
                pFVar25->SolverTime = *(double *)(pFVar26 + 0x118);
                pFVar32 = pFVar26 + 0x114;
                if (local_res18[0] == false) {
                  pFVar32 = pFVar26 + 0x110;
                  pFVar26 = pFVar26 + 0x114;
                }
                else {
                  pFVar26 = pFVar26 + 0x110;
                }
                iVar40 = *(int *)pFVar26;
                pFVar29 = GetBodyInstanceFromProxyAndShape
                                    (this,(IPhysicsProxyBase *)local_310,*(int *)pFVar32);
                FRigidBodyCollisionInfo::SetFrom
                          (&pFVar25->Info0,pFVar29,(TVector<double> *)local_300);
                pFVar29 = GetBodyInstanceFromProxyAndShape(this,local_258,iVar40);
                FRigidBodyCollisionInfo::SetFrom
                          (&pFVar25->Info1,pFVar29,(TVector<double> *)local_2f0);
                bVar19 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals
                                   (&(pFVar25->Info0).Component,(void *)0x0);
                pUVar42 = local_250;
                if (bVar19) {
                  local_240 = local_250;
                  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
                     (local_250 == (UPrimitiveComponent *)0x0)) {
                    FWeakObjectPtr::operator=
                              (&(pFVar25->Info0).Component.WeakPtr,(FObjectPtr)&local_240);
                    if ((pUVar42 == (UPrimitiveComponent *)0x0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Comp0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                                            ,0x433,L""), bVar19)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                  }
                  else {
                    UE::GC::MarkAsReachable((UObject *)local_250);
                    FWeakObjectPtr::operator=
                              (&(pFVar25->Info0).Component.WeakPtr,(FObjectPtr)&local_240);
                  }
                  local_1c0 = *(UObject **)&pUVar42->field_0xa8;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_1c0 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_1c0);
                  }
                  FWeakObjectPtr::operator=
                            ((FWeakObjectPtr *)&pFVar25->Info0,(FObjectPtr)&local_1c0);
                }
                bVar19 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals
                                   (&(pFVar25->Info1).Component,(void *)0x0);
                pUVar42 = local_1b8;
                if (bVar19) {
                  local_1b0 = local_1b8;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)local_1b8);
                  }
                  FWeakObjectPtr::operator=
                            (&(pFVar25->Info1).Component.WeakPtr,(FObjectPtr)&local_1b0);
                  local_1a8 = *(UObject **)&pUVar42->field_0xa8;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_1a8 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_1a8);
                  }
                  FWeakObjectPtr::operator=
                            ((FWeakObjectPtr *)&pFVar25->Info1,(FObjectPtr)&local_1a8);
                  uVar35 = (ulonglong)local_320;
                  pFVar23 = pFVar23 + 4;
                  goto LAB_148290e16;
                }
              }
            }
LAB_1482913e5:
            uVar35 = (ulonglong)local_320;
            pFVar23 = pFVar23 + 4;
            goto LAB_148290e16;
          }
LAB_148291404:
          pIVar55 = (IPhysicsProxyBase *)&pIVar55->Solver;
          uVar35 = (ulonglong)local_2f8 & 0xffffffff;
          pFVar30 = local_318;
        }
      }
      TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
    }
LAB_148291445:
    pTVar46 = local_2e0;
    if (pFVar44 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)pFVar44);
      pTVar46 = local_2e0;
    }
  }
  DispatchPendingCollisionNotifies(this);
  HandleGlobalCollisionEvent(this,pTVar46);
  bVar33 = local_res20;
  if ((local_res20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar33 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar33 & 4) != 0) {
    FThreadStats::AddMessage(FVar47,CycleScopeEnd);
  }
  return;
LAB_1482904c0:
  pIVar55 = local_258;
  if (*(int *)((longlong)&pFVar30->Restitution + (longlong)pUVar42) != (int)uVar35) {
    local_327[2] = false;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_327 + 2);
  }
  FVar47 = local_260;
  pFVar44 = local_248;
  if (pIVar45 != pIVar55) {
    uVar56 = Chaos::FEventManager::DecodeCollisionIndex
                       ((int)pIVar45->_padding_,(bool *)&local_res10);
    pTVar46 = local_2e0;
    uVar37 = 0;
    if ((int)uVar56 < local_2e0->ArrayNum) {
      uVar37 = ~uVar56 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar32 = (pTVar46->AllocatorInstance).Data;
    lVar34 = (longlong)(int)uVar56 * 0x120;
    pFVar23 = pFVar32 + 0x100;
    if (local_res10._0_1_ == false) {
      pFVar23 = pFVar32 + 0x108;
    }
    pIVar55 = *(IPhysicsProxyBase **)(pFVar23 + lVar34);
    local_2e8 = pIVar55;
    if (pIVar55 == (IPhysicsProxyBase *)0x0) {
LAB_148290a63:
      pIVar45 = (IPhysicsProxyBase *)((longlong)&pIVar45->_padding_ + 4);
      uVar35 = (ulonglong)local_320;
      pUVar42 = local_250;
    }
    else {
      pFVar44 = (FPlatformRWLock *)0x0;
      if (Chaos::CVars::bEnableAsyncInitBody != false) {
        pFVar44 = &this->PhysicsProxyComponentMapsLock;
      }
      if (pFVar44 != (FPlatformRWLock *)0x0) {
        AcquireSRWLockShared((PSRWLOCK)pFVar44);
      }
      pTVar24 = TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
                ::Find((TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
                        *)&this->PhysicsProxyToComponentMap,pIVar55);
      if (pTVar24 == (TObjectPtr<UPrimitiveComponent> *)0x0) {
        if (pFVar44 != (FPlatformRWLock *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)pFVar44);
        }
        goto LAB_148290a63;
      }
      pUVar42 = (pTVar24->field0_0x0).DebugPtr;
      local_300 = pUVar42;
      if (pFVar44 != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockShared((PSRWLOCK)pFVar44);
      }
      if (pUVar42 == (UPrimitiveComponent *)0x0) goto LAB_148290a63;
      local_328 = false;
      pFVar25 = GetPendingCollisionForContactPair
                          (this,local_310,pIVar55,*(double *)(pFVar32 + lVar34 + 0x118),&local_328);
      dVar14 = *(double *)(pFVar32 + lVar34 + 0x18);
      dVar15 = *(double *)(pFVar32 + lVar34 + 0x18 + 8);
      pTStack_210 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar32 + lVar34 + 0x28);
      dVar12 = *(double *)(pFVar32 + lVar34 + 0x38) * *(double *)(pFVar32 + lVar34 + 0x20) +
               *(double *)(pFVar32 + lVar34 + 0x30) * *(double *)(pFVar32 + lVar34 + 0x18) +
               *(double *)(pFVar32 + lVar34 + 0x40) * *(double *)(pFVar32 + lVar34 + 0x28);
      dVar3 = *(double *)(pFVar32 + lVar34 + 0x30);
      dVar4 = *(double *)(pFVar32 + lVar34 + 0x40);
      dVar5 = *(double *)(pFVar32 + lVar34 + 0x38);
      dVar6 = (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Y;
      (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.X =
           dVar12 * dVar3 + (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.X;
      dVar7 = (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Z;
      (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Y = dVar12 * dVar5 + dVar6;
      (pFVar25->RigidCollisionData).TotalNormalImpulse.field0_0x0._s_0.Z = dVar12 * dVar4 + dVar7;
      (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Z =
           ((double)pTStack_210 - dVar12 * dVar4) +
           (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Z;
      dVar4 = (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Y;
      (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.X =
           (dVar14 - dVar12 * dVar3) +
           (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.X;
      (pFVar25->RigidCollisionData).TotalFrictionImpulse.field0_0x0._s_0.Y =
           (dVar15 - dVar12 * dVar5) + dVar4;
      pFVar26 = pFVar32 + lVar34 + 0x90;
      pFVar23 = pFVar32 + lVar34 + 0x78;
      if (local_res10._0_1_ != false) {
        pFVar23 = pFVar26;
        pFVar26 = pFVar32 + lVar34 + 0x78;
      }
      iVar40 = (pFVar25->RigidCollisionData).ContactInfos.ArrayNum;
      piVar10 = &(pFVar25->RigidCollisionData).ContactInfos.ArrayMax;
      local_308 = pFVar23;
      local_2f8 = pFVar25;
      if (iVar40 == *piVar10) {
        iVar40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,(ForAnyElementType *)&pFVar25->RigidCollisionData,piVar10);
      }
      (pFVar25->RigidCollisionData).ContactInfos.ArrayNum = iVar40 + 1;
      lVar27 = (longlong)iVar40;
      pFVar43 = (pFVar25->RigidCollisionData).ContactInfos.AllocatorInstance.Data;
      *(undefined8 *)(pFVar43 + lVar27 * 0x48) = 0;
      *(undefined8 *)(pFVar43 + lVar27 * 0x48 + 8) = 0;
      *(undefined8 *)(pFVar43 + lVar27 * 0x48 + 0x10) = 0;
      *(undefined8 *)(pFVar43 + lVar27 * 0x48 + 0x10 + 8) = 0;
      pFVar2 = (FRigidBodyContactInfo *)(pFVar43 + lVar27 * 0x48);
      (pFVar2->ContactNormal).field0_0x0._s_0.Y = 0.0;
      (pFVar2->ContactNormal).field0_0x0._s_0.Z = 0.0;
      pFVar2->ContactPenetration = 0.0;
      pFVar2->bContactProbe = false;
      pFVar2->field_0x35 = 0;
      pFVar2->_padding_ = 0;
      pFVar2->PhysMaterial[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
      pFVar2->PhysMaterial[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
      dVar3 = *(double *)(pFVar32 + lVar34 + 0x30 + 8);
      (pFVar2->ContactNormal).field0_0x0._s_0.X = *(double *)(pFVar32 + lVar34 + 0x30);
      (pFVar2->ContactNormal).field0_0x0._s_0.Y = dVar3;
      (pFVar2->ContactNormal).field0_0x0._s_0.Z = *(double *)(pFVar32 + lVar34 + 0x40);
      dVar3 = *(double *)(pFVar32 + lVar34 + 8);
      (pFVar2->ContactPosition).field0_0x0._s_0.X = *(double *)(pFVar32 + lVar34);
      (pFVar2->ContactPosition).field0_0x0._s_0.Y = dVar3;
      (pFVar2->ContactPosition).field0_0x0._s_0.Z = *(double *)(pFVar32 + lVar34 + 0x10);
      pFVar2->ContactPenetration = (float)*(double *)(pFVar32 + lVar34 + 0xe8);
      pFVar2->bContactProbe = (bool)pFVar32[lVar34 + 0xf8];
      uVar37 = (uint)*(undefined8 *)&pFVar23->field_0x0 & uVar16;
      uVar56 = (uint)((ulonglong)*(undefined8 *)&pFVar23->field_0x0 >> 0x20) & uVar17;
      if (((((dVar13 <= (double)CONCAT44(uVar56,uVar37) && (double)CONCAT44(uVar56,uVar37) != dVar13
             ) || (uVar37 = (uint)*(undefined8 *)(pFVar23 + 8) & uVar16,
                  uVar56 = (uint)((ulonglong)*(undefined8 *)(pFVar23 + 8) >> 0x20) & uVar17,
                  dVar13 <= (double)CONCAT44(uVar56,uVar37) &&
                  (double)CONCAT44(uVar56,uVar37) != dVar13)) ||
           (uVar37 = (uint)*(undefined8 *)(pFVar23 + 0x10) & uVar16,
           uVar56 = (uint)((ulonglong)*(undefined8 *)(pFVar23 + 0x10) >> 0x20) & uVar17,
           dVar13 <= (double)CONCAT44(uVar56,uVar37) && (double)CONCAT44(uVar56,uVar37) != dVar13))
          || ((uVar37 = (uint)*(undefined8 *)&pFVar26->field_0x0 & uVar16,
              uVar56 = (uint)((ulonglong)*(undefined8 *)&pFVar26->field_0x0 >> 0x20) & uVar17,
              dVar13 <= (double)CONCAT44(uVar56,uVar37) && (double)CONCAT44(uVar56,uVar37) != dVar13
              || (uVar37 = (uint)*(undefined8 *)(pFVar26 + 8) & uVar16,
                 uVar56 = (uint)((ulonglong)*(undefined8 *)(pFVar26 + 8) >> 0x20) & uVar17,
                 dVar13 <= (double)CONCAT44(uVar56,uVar37) &&
                 (double)CONCAT44(uVar56,uVar37) != dVar13)))) ||
         (uVar37 = (uint)*(undefined8 *)(pFVar26 + 0x10) & uVar16,
         uVar56 = (uint)((ulonglong)*(undefined8 *)(pFVar26 + 0x10) >> 0x20) & uVar17,
         dVar13 <= (double)CONCAT44(uVar56,uVar37) && (double)CONCAT44(uVar56,uVar37) != dVar13)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      (local_2f8->RigidCollisionData).bIsVelocityDeltaUnderThreshold = bVar19;
      pFVar28 = Chaos::FMaterialHandle::Get((FMaterialHandle *)(pFVar32 + lVar34 + 0xf0));
      local_318 = Chaos::FMaterialHandle::Get((FMaterialHandle *)(pFVar32 + lVar34 + 0xf4));
      if (((pFVar28 == (FChaosPhysicsMaterial *)0x0) ||
          (piVar10 = pFVar28->UserData, piVar10 == (int *)0x0)) || (*piVar10 != 2)) {
        pUVar50 = (UPhysicalMaterial *)0x0;
      }
      else {
        pUVar50 = *(UPhysicalMaterial **)(piVar10 + 2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar50 != (UPhysicalMaterial *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar50);
      }
      pFVar2->PhysMaterial[0].field0_0x0.DebugPtr = pUVar50;
      if (((local_318 == (FChaosPhysicsMaterial *)0x0) ||
          (piVar10 = local_318->UserData, piVar10 == (int *)0x0)) || (*piVar10 != 2)) {
        TVar51.DebugPtr = (UPhysicalMaterial *)0x0;
      }
      else {
        TVar51 = (TObjectPtr<UPhysicalMaterial>_u_0)
                 ((TObjectPtr<UPhysicalMaterial>_u_0 *)(piVar10 + 2))->DebugPtr;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar51.DebugPtr != (UPhysicalMaterial *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar51.DebugPtr);
      }
      pFVar2->PhysMaterial[1].field0_0x0 = TVar51;
      if (local_res10._0_1_ != false) {
        FRigidBodyContactInfo::SwapOrder(pFVar2);
      }
      pFVar25 = local_2f8;
      if (local_328 == false) goto LAB_148290a63;
      local_2f8->bCallEvent0 = true;
      local_2f8->SolverTime = *(double *)(pFVar32 + lVar34 + 0x118);
      pFVar43 = pFVar32 + lVar34 + 0x114;
      pFVar23 = pFVar32 + lVar34 + 0x110;
      if (local_res10._0_1_ != false) {
        pFVar43 = pFVar32 + lVar34 + 0x110;
        pFVar23 = pFVar32 + lVar34 + 0x114;
      }
      iVar40 = *(int *)pFVar43;
      pFVar29 = GetBodyInstanceFromProxyAndShape
                          (this,(IPhysicsProxyBase *)local_310,*(int *)pFVar23);
      FRigidBodyCollisionInfo::SetFrom(&pFVar25->Info0,pFVar29,(TVector<double> *)local_308);
      pFVar29 = GetBodyInstanceFromProxyAndShape(this,local_2e8,iVar40);
      FRigidBodyCollisionInfo::SetFrom(&pFVar25->Info1,pFVar29,(TVector<double> *)pFVar26);
      bVar19 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals
                         (&(pFVar25->Info0).Component,(void *)0x0);
      pUVar42 = local_2f0;
      if (bVar19) {
        local_1c8 = local_2f0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_2f0);
        }
        FWeakObjectPtr::operator=(&(pFVar25->Info0).Component.WeakPtr,(FObjectPtr)&local_1c8);
        local_1e0 = *(UObject **)&pUVar42->field_0xa8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1e0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1e0);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar25->Info0,(FObjectPtr)&local_1e0);
      }
      bVar19 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals
                         (&(pFVar25->Info1).Component,(void *)0x0);
      pUVar42 = local_300;
      if (!bVar19) goto LAB_148290a63;
      local_1d8 = local_300;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_300);
      }
      FWeakObjectPtr::operator=(&(pFVar25->Info1).Component.WeakPtr,(FObjectPtr)&local_1d8);
      local_1d0 = *(UObject **)&pUVar42->field_0xa8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_1d0);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar25->Info1,(FObjectPtr)&local_1d0);
      uVar35 = (ulonglong)local_320;
      pIVar45 = (IPhysicsProxyBase *)((longlong)&pIVar45->_padding_ + 4);
      pUVar42 = local_250;
    }
    goto LAB_1482904c0;
  }
LAB_148290a80:
  TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  goto LAB_148290380;
}

// HandleCrumblingEvents @ 1482918c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysScene_Chaos::HandleCrumblingEvents(FPhysScene_Chaos *this,FCrumblingEventData *param_1)

{
  undefined8 uVar1;
  int iVar2;
  UChaosEventRelay *pUVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleCrumblingEvents(Chaos::FCrumblingEventData_const_&)_::_2_::FStat_STAT_HandleGlobalCrumblingEvents>
  FVar11;
  UPrimitiveComponent *pUVar12;
  uint uVar13;
  FColor_u_0 FVar14;
  FName FVar15;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 uVar18;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FReadAccessScope local_98;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined7 uStack_4f;
  
  iVar9 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_HandleGlobalCrumblingEvents ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleCrumblingEvents(Chaos::FCrumblingEventData_const_&)_::_2_::FStat_STAT_HandleGlobalCrumblingEvents>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"STAT_HandleGlobalCrumblingEvents");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleGlobalCrumblingEvents,*pFVar10,
                 L"STAT_HandleGlobalCrumblingEvents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_HandleGlobalCrumblingEvents;
  if (StatPtr_STAT_HandleGlobalCrumblingEvents ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleCrumblingEvents(Chaos::FCrumblingEventData_const_&)_::_2_::FStat_STAT_HandleGlobalCrumblingEvents>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_HandleGlobalCrumblingEvents");
    FVar11 = (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleCrumblingEvents(Chaos::FCrumblingEventData_const_&)_::_2_::FStat_STAT_HandleGlobalCrumblingEvents>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleGlobalCrumblingEvents,
                          *pFVar10,L"STAT_HandleGlobalCrumblingEvents","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  uVar18 = 0;
  local_res10.Bits = local_res10.Bits & 0xffffff00;
  FVar14.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Bits != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      uVar18 = 1;
      local_res10._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar14.Bits;
        uStackX_14 = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x51b);
        uVar18 = 3;
        local_res10._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar14.Bits;
      uStackX_14 = uVar13;
      local_res20 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      local_res10.Bits = CONCAT31(local_res10.Bits._1_3_,uVar18) | 4;
      uVar18 = uVar18 | 4;
      goto LAB_148291a4b;
    }
  }
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_148291a4b:
  if (((param_1->CrumblingData).bHasGlobalEvent != false) &&
     (dVar4 = (double)(float)(double)(param_1->CrumblingData)._padding_,
     this->LastCrumblingEventDispatchTime <= dVar4 && dVar4 != this->LastCrumblingEventDispatchTime)
     ) {
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    this->LastCrumblingEventDispatchTime = dVar4;
    iVar2 = (param_1->CrumblingData).AllCrumblingsArray.ArrayNum;
    pFVar16 = (param_1->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data;
    local_9c = 0;
    pFVar17 = pFVar16 + (longlong)iVar2 * 0xd0;
    while( true ) {
      if ((param_1->CrumblingData).AllCrumblingsArray.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FCrumblingData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res18);
        iVar9 = local_a0;
      }
      FVar15 = local_res20;
      if (pFVar16 == pFVar17) break;
      if ((((byte)*pFVar16 & 2) != 0) && (*(longlong *)(pFVar16 + 8) != 0)) {
        if (iVar9 == local_9c) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10c0,&local_a8,&local_9c);
        }
        local_a0 = iVar9 + 1;
        _Dst = local_a8.Data + (longlong)iVar9 * 0xc0;
        memset(_Dst,0,0xc0);
        pUVar12 = GetOwningComponent<UPrimitiveComponent>(this,*(IPhysicsProxyBase **)(pFVar16 + 8))
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        *(UPrimitiveComponent **)&_Dst->field_0x0 = pUVar12;
        uVar1 = *(undefined8 *)(pFVar16 + 0x18);
        local_50 = 1;
        *(undefined8 *)(_Dst + 8) = *(undefined8 *)(pFVar16 + 0x10);
        *(undefined8 *)(_Dst + 0x10) = uVar1;
        *(undefined8 *)(_Dst + 0x18) = *(undefined8 *)(pFVar16 + 0x20);
        uVar1 = *(undefined8 *)(pFVar16 + 0x38);
        *(undefined8 *)(_Dst + 0x20) = *(undefined8 *)(pFVar16 + 0x30);
        *(undefined8 *)(_Dst + 0x28) = uVar1;
        uVar1 = *(undefined8 *)(pFVar16 + 0x48);
        *(undefined8 *)(_Dst + 0x30) = *(undefined8 *)(pFVar16 + 0x40);
        *(undefined8 *)(_Dst + 0x38) = uVar1;
        uVar1 = *(undefined8 *)(pFVar16 + 0x58);
        *(undefined8 *)(_Dst + 0x40) = *(undefined8 *)(pFVar16 + 0x50);
        *(undefined8 *)(_Dst + 0x48) = uVar1;
        *(undefined8 *)(_Dst + 0x50) = *(undefined8 *)(pFVar16 + 0x60);
        uVar1 = *(undefined8 *)(pFVar16 + 0x70);
        *(undefined8 *)(_Dst + 0x58) = *(undefined8 *)(pFVar16 + 0x68);
        *(undefined8 *)(_Dst + 0x60) = uVar1;
        *(undefined8 *)(_Dst + 0x68) = *(undefined8 *)(pFVar16 + 0x78);
        *(float *)(_Dst + 0x70) = (float)*(double *)(pFVar16 + 0x80);
        uVar5 = *(undefined8 *)(pFVar16 + 0xa0);
        uVar6 = *(undefined8 *)(pFVar16 + 0xa8);
        uVar7 = *(undefined8 *)(pFVar16 + 0x90);
        uStack_70 = *(undefined4 *)(pFVar16 + 0x98);
        uStack_6c = *(undefined4 *)(pFVar16 + 0x9c);
        uVar1 = *(undefined8 *)(pFVar16 + 0xb0);
        local_68._0_4_ = (undefined4)uVar5;
        local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        *(undefined8 *)(_Dst + 0x78) = *(undefined8 *)(pFVar16 + 0x88);
        *(undefined8 *)(_Dst + 0x80) = uVar7;
        uStack_60._0_4_ = (undefined4)uVar6;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)(_Dst + 0x88) = uStack_70;
        *(undefined4 *)(_Dst + 0x8c) = uStack_6c;
        *(undefined4 *)(_Dst + 0x90) = (undefined4)local_68;
        *(undefined4 *)(_Dst + 0x94) = local_68._4_4_;
        uStack_58 = (undefined4)uVar1;
        uStack_54 = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(_Dst + 0x98) = (undefined4)uStack_60;
        *(undefined4 *)(_Dst + 0x9c) = uStack_60._4_4_;
        *(undefined4 *)(_Dst + 0xa0) = uStack_58;
        *(undefined4 *)(_Dst + 0xa4) = uStack_54;
        *(ulonglong *)(_Dst + 0xa8) = CONCAT71(uStack_4f,1);
        local_68 = uVar5;
        uStack_60 = uVar6;
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)(_Dst + 0xb0),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar16 + 0xb8));
        iVar9 = local_a0;
      }
      pFVar16 = pFVar16 + 0xd0;
    }
    uVar18 = local_res10._s_0.B;
    if (0 < iVar9) {
      pUVar3 = (this->ChaosEventRelay).field0_0x0.DebugPtr;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnCrumblingEvent
                 ,&local_98);
      iVar2 = *(int *)&(pUVar3->OnCrumblingEvent).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      iVar9 = local_a0;
      if (0 < iVar2) {
        local_98.DestructionSentinel._0_8_ = (FChaosCrumblingEvent *)0x0;
        local_98.DestructionSentinel.Accessor._4_4_ = 0;
        DestructItems<FChaosCrumblingEvent,int>((FChaosCrumblingEvent *)0x0,0);
        iVar9 = local_a0;
        FVar8.Data = local_a8.Data;
        local_98.DestructionSentinel.Accessor._0_4_ = local_a0;
        if ((local_a0 != 0) || (local_98.DestructionSentinel.Accessor._4_4_ != 0)) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc0,0x10,local_a0,local_98.DestructionSentinel.Accessor._4_4_,
                     (ForAnyElementType *)&local_98,local_a0,
                     (int *)((longlong)&local_98.DestructionSentinel.Accessor + 4));
          ConstructItems<FChaosCrumblingEvent,FChaosCrumblingEvent,int>
                    ((void *)local_98.DestructionSentinel._0_8_,(FChaosCrumblingEvent *)FVar8.Data,
                     iVar9);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3->OnCrumblingEvent
                   ,&local_98);
        DestructItems<FChaosCrumblingEvent,int>
                  ((FChaosCrumblingEvent *)local_98.DestructionSentinel._0_8_,
                   (int)local_98.DestructionSentinel.Accessor);
        iVar9 = local_a0;
        if ((FChaosCrumblingEvent *)local_98.DestructionSentinel._0_8_ !=
            (FChaosCrumblingEvent *)0x0) {
          FMemory::Free((void *)local_98.DestructionSentinel._0_8_);
          iVar9 = local_a0;
        }
      }
    }
    DestructItems<FChaosCrumblingEvent,int>((FChaosCrumblingEvent *)local_a8.Data,iVar9);
    if ((FChaosCrumblingEvent *)local_a8.Data != (FChaosCrumblingEvent *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  if ((uVar18 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar18 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar18 & 4) != 0) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// HandleExecCommands @ 148291e80

bool __thiscall
FPhysScene_Chaos::HandleExecCommands(FPhysScene_Chaos *this,wchar_t *param_1,FOutputDevice *param_2)

{
  return false;
}

// HandleGlobalCollisionEvent @ 148291e90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysScene_Chaos::HandleGlobalCollisionEvent
          (FPhysScene_Chaos *this,TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FName FVar2;
  IPhysicsProxyBase *pIVar3;
  ForElementType<FSetElementId> FVar4;
  int *piVar5;
  UChaosEventRelay *pUVar6;
  undefined4 uVar7;
  ForAnyElementType FVar8;
  undefined8 uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleGlobalCollisionEvent(TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_HandleGlobalCollisionEvents>
  FVar12;
  TObjectPtr<UPrimitiveComponent> *pTVar13;
  FCollisionChaosEvent *pFVar14;
  FChaosPhysicsMaterial *pFVar15;
  FChaosPhysicsMaterial *pFVar16;
  FBodyInstance *pFVar17;
  UObject *pUVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ForElementType<FSetElementId> FVar22;
  FColor_u_0 FVar23;
  TObjectPtr<UPrimitiveComponent>_u_0 SRWLock;
  FPlatformRWLock *SRWLock_00;
  UPhysicalMaterial *pUVar24;
  UPhysicalMaterial *pUVar25;
  int iVar26;
  ForElementType<FSetElementId> FVar27;
  TObjectPtr<UPrimitiveComponent>_u_0 TVar28;
  FCollidingData *pFVar29;
  undefined1 uVar30;
  UPrimitiveComponent *pUVar31;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  TObjectPtr<UPrimitiveComponent>_u_0 local_res20;
  ForAnyElementType local_a8;
  int local_a0;
  int iStack_9c;
  uint local_98;
  TObjectPtr<UPrimitiveComponent>_u_0 local_90;
  FReadAccessScope local_88;
  undefined8 local_70;
  undefined8 local_68;
  FName local_60;
  FName local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_HandleGlobalCollisionEvents ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleGlobalCollisionEvent(TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_HandleGlobalCollisionEvents>
         )0x0) {
      pFVar11 = ::FName::FName((FName *)&local_res18._s_0,"STAT_HandleGlobalCollisionEvents");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleGlobalCollisionEvents,*pFVar11,
                 L"STAT_HandleGlobalCollisionEvents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_HandleGlobalCollisionEvents;
  if (StatPtr_STAT_HandleGlobalCollisionEvents ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleGlobalCollisionEvent(TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_HandleGlobalCollisionEvents>
       )0x0) {
    pFVar11 = ::FName::FName((FName *)&local_res20.ObjectPtr,"STAT_HandleGlobalCollisionEvents");
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleGlobalCollisionEvent(TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_HandleGlobalCollisionEvents>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleGlobalCollisionEvents,
                          *pFVar11,L"STAT_HandleGlobalCollisionEvents","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar12;
  uVar30 = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_res18.Bits = local_res18.Bits & 0xffffff00;
  FVar23.Bits = (uint)FVar2.ComparisonIndex.Value;
  uVar19 = FVar2.Number;
  if ((FVar23.Bits != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      uVar30 = 1;
      local_res18._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar23.Bits;
        uStackX_1c = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x49a);
        uVar30 = 3;
        local_res18._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar23.Bits;
      uStackX_1c = uVar19;
      local_60 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_res18.Bits = CONCAT31(local_res18.Bits._1_3_,uVar30) | 4;
      goto LAB_14829200e;
    }
  }
  local_60 = local_58;
LAB_14829200e:
  uVar19 = param_1->ArrayNum;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  iStack_9c = 0;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,uVar19,&local_a8,0,&iStack_9c);
  }
  local_98 = param_1->ArrayNum;
  uVar20 = (ulonglong)(int)local_98;
  pFVar29 = (FCollidingData *)(param_1->AllocatorInstance).Data;
  local_88.DestructionSentinel._0_8_ = pFVar29 + uVar20;
LAB_148292070:
  uVar9 = local_88.DestructionSentinel._0_8_;
  TVar28.DebugPtr = (UPrimitiveComponent *)0x0;
  if (param_1->ArrayNum != (int)uVar20) {
    `TCheckedPointerIterator<Chaos::FCollidingData_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_res20);
  }
  FVar2 = local_60;
  if (pFVar29 == (FCollidingData *)uVar9) {
    if (0 < local_a0) {
      pUVar6 = (this->ChaosEventRelay).field0_0x0.DebugPtr;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar6->OnCollisionEvent
                 ,&local_88);
      iVar10 = *(int *)&(pUVar6->OnCollisionEvent).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      iVar1 = local_a0;
      FVar8.Data = local_a8.Data;
      if (0 < iVar10) {
        local_88.DestructionSentinel._0_8_ = (FCollidingData *)0x0;
        local_88.DestructionSentinel.Accessor._4_4_ = 0;
        local_88.DestructionSentinel.Accessor._0_4_ = local_a0;
        if (local_a0 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x130,8,local_a0,0,(ForAnyElementType *)&local_88,local_a0,
                     (int *)((longlong)&local_88.DestructionSentinel.Accessor + 4));
          ConstructItems<FCollisionChaosEvent,FCollisionChaosEvent,int>
                    ((void *)local_88.DestructionSentinel._0_8_,(FCollisionChaosEvent *)FVar8.Data,
                     iVar1);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar6->OnCollisionEvent
                   ,&local_88);
        if ((FCollidingData *)local_88.DestructionSentinel._0_8_ != (FCollidingData *)0x0) {
          FMemory::Free((void *)local_88.DestructionSentinel._0_8_);
        }
      }
    }
    if ((FCollisionChaosEvent *)local_a8.Data != (FCollisionChaosEvent *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    FVar23 = local_res18;
    if ((local_res18.Bits & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((FVar23.Bits & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((FVar23.Bits & 4) != 0) {
      FThreadStats::AddMessage(FVar2,CycleScopeEnd);
    }
    return;
  }
  pIVar3 = pFVar29->Proxy1;
  SRWLock.DebugPtr = TVar28.DebugPtr;
  if (Chaos::CVars::bEnableAsyncInitBody != false) {
    SRWLock = (TObjectPtr<UPrimitiveComponent>_u_0)&this->PhysicsProxyComponentMapsLock;
  }
  if (SRWLock.DebugPtr != (UPrimitiveComponent *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock.DebugPtr);
  }
  pTVar13 = TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
            ::Find((TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
                    *)&this->PhysicsProxyToComponentMap,pIVar3);
  if (pTVar13 == (TObjectPtr<UPrimitiveComponent> *)0x0) {
    if (SRWLock.DebugPtr != (UPrimitiveComponent *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock.DebugPtr);
    }
    local_res20.DebugPtr = (UPrimitiveComponent *)0x0;
  }
  else {
    TVar28.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar13->field0_0x0).DebugPtr;
    local_res20.ObjectPtr.field0_0x0 = TVar28.ObjectPtr.field0_0x0;
    if (SRWLock.DebugPtr != (UPrimitiveComponent *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock.DebugPtr);
    }
  }
  pIVar3 = pFVar29->Proxy2;
  SRWLock_00 = (FPlatformRWLock *)0x0;
  if (Chaos::CVars::bEnableAsyncInitBody != false) {
    SRWLock_00 = &this->PhysicsProxyComponentMapsLock;
  }
  if (SRWLock_00 != (FPlatformRWLock *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock_00);
  }
  pTVar13 = TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
            ::Find((TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
                    *)&this->PhysicsProxyToComponentMap,pIVar3);
  if (pTVar13 == (TObjectPtr<UPrimitiveComponent> *)0x0) {
    if (SRWLock_00 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock_00);
    }
    pUVar31 = (UPrimitiveComponent *)0x0;
  }
  else {
    pUVar31 = (pTVar13->field0_0x0).DebugPtr;
    if (SRWLock_00 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock_00);
    }
  }
  iVar10 = *(int *)&(this->GlobalCollisionEventRegistrations).Elements.field_0x8;
  FVar27 = (ForElementType<FSetElementId>)&(this->GlobalCollisionEventRegistrations).Hash;
  piVar5 = &(this->GlobalCollisionEventRegistrations).HashSize;
  uVar19 = ((uint)((ulonglong)TVar28.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar28.DebugPtr >> 4)) * -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  iVar1 = *(int *)&(this->GlobalCollisionEventRegistrations).Elements.field_0x34;
  if (iVar10 != iVar1) {
    FVar4 = (this->GlobalCollisionEventRegistrations).Hash.SecondaryData;
    FVar22 = FVar27;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FVar22 = FVar4;
    }
    iVar26 = *(int *)((longlong)FVar22 + (ulonglong)(*piVar5 - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
    if (iVar26 != -1) {
      lVar21 = *(longlong *)&(this->GlobalCollisionEventRegistrations).Elements;
      do {
        if (*(UPrimitiveComponent **)(lVar21 + (longlong)iVar26 * 0x10) == TVar28.DebugPtr) {
          if (iVar26 != -1) goto LAB_148292263;
          break;
        }
        iVar26 = *(int *)(lVar21 + 8 + (longlong)iVar26 * 0x10);
      } while (iVar26 != -1);
    }
  }
  uVar19 = ((uint)((ulonglong)pUVar31 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar31 >> 4)) *
           -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  if (iVar10 != iVar1) {
    FVar4 = (this->GlobalCollisionEventRegistrations).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FVar27 = FVar4;
    }
    iVar10 = *(int *)((longlong)FVar27 + (ulonglong)(*piVar5 - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
    if (iVar10 != -1) {
      lVar21 = *(longlong *)&(this->GlobalCollisionEventRegistrations).Elements;
      do {
        if (*(UPrimitiveComponent **)(lVar21 + (longlong)iVar10 * 0x10) == pUVar31)
        goto LAB_148292263;
        iVar10 = *(int *)(lVar21 + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  goto LAB_14829224c;
LAB_148292263:
  if (local_a0 == iStack_9c) {
    local_a0 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x130,8,&local_a8,&iStack_9c);
  }
  lVar21 = (longlong)local_a0;
  local_a0 = local_a0 + 1;
  pFVar14 = FCollisionChaosEvent::FCollisionChaosEvent
                      ((FCollisionChaosEvent *)(local_a8.Data + lVar21 * 0x130),pFVar29);
  local_90 = TVar28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar28.DebugPtr != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar28.DebugPtr);
  }
  FWeakObjectPtr::operator=(&(pFVar14->Body1).Component.WeakPtr,(FObjectPtr)&local_90);
  local_90.DebugPtr = pUVar31;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar31 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar31);
  }
  FWeakObjectPtr::operator=(&(pFVar14->Body2).Component.WeakPtr,(FObjectPtr)&local_90);
  pFVar15 = Chaos::FMaterialHandle::Get(&pFVar29->Mat1);
  pFVar16 = Chaos::FMaterialHandle::Get(&pFVar29->Mat2);
  if (((pFVar15 == (FChaosPhysicsMaterial *)0x0) ||
      (piVar5 = pFVar15->UserData, piVar5 == (int *)0x0)) || (*piVar5 != 2)) {
    pUVar24 = (UPhysicalMaterial *)0x0;
  }
  else {
    pUVar24 = *(UPhysicalMaterial **)(piVar5 + 2);
  }
  pUVar25 = (UPhysicalMaterial *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UPhysicalMaterial *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar24);
  }
  (pFVar14->Body1).PhysMaterial.field0_0x0.DebugPtr = pUVar24;
  if (((pFVar16 != (FChaosPhysicsMaterial *)0x0) &&
      (piVar5 = pFVar16->UserData, piVar5 != (int *)0x0)) && (*piVar5 == 2)) {
    pUVar25 = *(UPhysicalMaterial **)(piVar5 + 2);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar25 != (UPhysicalMaterial *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar25);
  }
  (pFVar14->Body2).PhysMaterial.field0_0x0.DebugPtr = pUVar25;
  if ((local_res20.DebugPtr != (UPrimitiveComponent *)0x0) &&
     (pFVar29->Proxy1 != (IPhysicsProxyBase *)0x0)) {
    pFVar17 = GetBodyInstanceFromProxyAndShape(this,pFVar29->Proxy1,pFVar29->ShapeIndex1);
    if (pFVar17 == (FBodyInstance *)0x0) {
      if (pFVar29->Proxy1->Type == ClusterUnionProxy) {
        (pFVar14->Body1).BodyIndex = pFVar29->ShapeIndex1;
      }
    }
    else {
      (pFVar14->Body1).BodyIndex = pFVar17->InstanceBodyIndex;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar17);
      if (pUVar18 == (UObject *)0x0) {
        local_70 = 0;
        (pFVar14->Body1).BoneName.ComparisonIndex = 0;
        (pFVar14->Body1).BoneName.Number = 0;
      }
      else {
        uVar7 = *(undefined4 *)&pUVar18[1].field_0x4;
        (pFVar14->Body1).BoneName.ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&pUVar18[1].field_0x0;
        (pFVar14->Body1).BoneName.Number = uVar7;
      }
    }
  }
  if ((pUVar31 != (UPrimitiveComponent *)0x0) && (pFVar29->Proxy2 != (IPhysicsProxyBase *)0x0)) {
    pFVar17 = GetBodyInstanceFromProxyAndShape(this,pFVar29->Proxy2,pFVar29->ShapeIndex2);
    if (pFVar17 == (FBodyInstance *)0x0) {
      if (pFVar29->Proxy2->Type == ClusterUnionProxy) {
        (pFVar14->Body2).BodyIndex = pFVar29->ShapeIndex2;
      }
    }
    else {
      (pFVar14->Body2).BodyIndex = pFVar17->InstanceBodyIndex;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar17);
      if (pUVar18 == (UObject *)0x0) {
        local_68 = 0;
        (pFVar14->Body2).BoneName.ComparisonIndex = 0;
        (pFVar14->Body2).BoneName.Number = 0;
      }
      else {
        uVar7 = *(undefined4 *)&pUVar18[1].field_0x4;
        (pFVar14->Body2).BoneName.ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&pUVar18[1].field_0x0;
        (pFVar14->Body2).BoneName.Number = uVar7;
      }
    }
  }
LAB_14829224c:
  pFVar29 = pFVar29 + 1;
  uVar20 = (ulonglong)local_98;
  goto LAB_148292070;
}

// HandleRemovalEvents @ 148292630

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysScene_Chaos::HandleRemovalEvents(FPhysScene_Chaos *this,FRemovalEventData *param_1)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  UChaosEventRelay *pUVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleRemovalEvents(Chaos::FRemovalEventData_const_&)_::_2_::FStat_STAT_HandleGlobalRemovalEvents>
  FVar11;
  UPrimitiveComponent *pUVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<FSetElementId> FVar15;
  FColor_u_0 FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  double dVar20;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FRemovalEventData *local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_78;
  undefined8 local_70;
  FReadAccessScope local_68;
  
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_HandleGlobalRemovalEvents ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleRemovalEvents(Chaos::FRemovalEventData_const_&)_::_2_::FStat_STAT_HandleGlobalRemovalEvents>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"STAT_HandleGlobalRemovalEvents");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleGlobalRemovalEvents,*pFVar10,
                 L"STAT_HandleGlobalRemovalEvents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_HandleGlobalRemovalEvents;
  if (StatPtr_STAT_HandleGlobalRemovalEvents ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleRemovalEvents(Chaos::FRemovalEventData_const_&)_::_2_::FStat_STAT_HandleGlobalRemovalEvents>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_HandleGlobalRemovalEvents");
    FVar11 = (FThreadSafeStaticStat<_private:_void___cdecl_FPhysScene_Chaos::HandleRemovalEvents(Chaos::FRemovalEventData_const_&)_::_2_::FStat_STAT_HandleGlobalRemovalEvents>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HandleGlobalRemovalEvents,
                          *pFVar10,L"STAT_HandleGlobalRemovalEvents","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar16.Bits != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar16.Bits;
        uStackX_c = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x4fc);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar16.Bits;
      uStackX_c = uVar14;
      local_res20 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_14829279e;
    }
  }
  bVar6 = false;
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_14829279e:
  dVar20 = (double)(float)(double)(param_1->RemovalData)._padding_;
  if (this->LastRemovalEventDispatchTime <= dVar20 && dVar20 != this->LastRemovalEventDispatchTime)
  {
    this->LastRemovalEventDispatchTime = dVar20;
    iVar1 = (param_1->RemovalData).AllRemovalArray.ArrayNum;
    FVar18 = (FName)(param_1->RemovalData).AllRemovalArray.AllocatorInstance.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_res18 = (FName)((longlong)iVar1 * 0x58 + (longlong)FVar18);
    local_70 = 0;
    FVar19 = local_res18;
    while( true ) {
      if ((param_1->RemovalData).AllRemovalArray.ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FRemovalData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      FVar17 = local_res20;
      if (FVar18 == FVar19) break;
      if (*(IPhysicsProxyBase **)((longlong)FVar18 + 0x20) == (IPhysicsProxyBase *)0x0) {
LAB_148292929:
        FVar18 = (FName)((longlong)FVar18 + 0x58);
      }
      else {
        pUVar12 = GetOwningComponent<UPrimitiveComponent>
                            (this,*(IPhysicsProxyBase **)((longlong)FVar18 + 0x20));
        uVar14 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar12 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        FVar19 = local_res18;
        if (*(int *)&(this->GlobalRemovalEventRegistrations).Elements.field_0x8 ==
            *(int *)&(this->GlobalRemovalEventRegistrations).Elements.field_0x34)
        goto LAB_148292929;
        FVar2 = (this->GlobalRemovalEventRegistrations).Hash.SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&(this->GlobalRemovalEventRegistrations).Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar2;
        }
        iVar9 = *(int *)((longlong)FVar15 +
                        (ulonglong)
                        ((this->GlobalRemovalEventRegistrations).HashSize - 1U &
                        (uVar14 >> 0x10 ^ uVar14)) * 4);
        if (iVar9 == -1) goto LAB_148292929;
        lVar13 = *(longlong *)&(this->GlobalRemovalEventRegistrations).Elements;
        do {
          if (*(UPrimitiveComponent **)(lVar13 + (longlong)iVar9 * 0x10) == pUVar12) {
            iVar9 = (int)local_70;
            if ((int)local_70 == local_70._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_78,(int *)((longlong)&local_70 + 4));
            }
            FVar8.Data = local_78.Data;
            local_70 = CONCAT44(local_70._4_4_,iVar9 + 1);
            lVar13 = (longlong)iVar9;
            *(undefined8 *)&local_78.Data[lVar13 * 0x28].field_0x0 = 0;
            *(undefined8 *)(local_78.Data + lVar13 * 0x28 + 8) = 0;
            *(undefined8 *)(local_78.Data + lVar13 * 0x28 + 0x10) = 0;
            *(undefined8 *)(local_78.Data + lVar13 * 0x28 + 0x10 + 8) = 0;
            *(undefined8 *)(local_78.Data + lVar13 * 0x28 + 0x20) = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar12 != (UPrimitiveComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar12);
            }
            *(UPrimitiveComponent **)&FVar8.Data[lVar13 * 0x28].field_0x0 = pUVar12;
            uVar4 = *(undefined8 *)((longlong)FVar18 + 8);
            *(undefined8 *)(FVar8.Data + lVar13 * 0x28 + 8) = *(undefined8 *)FVar18;
            *(undefined8 *)(FVar8.Data + lVar13 * 0x28 + 8 + 8) = uVar4;
            *(undefined8 *)(FVar8.Data + lVar13 * 0x28 + 0x18) =
                 *(undefined8 *)((longlong)FVar18 + 0x10);
            *(float *)(FVar8.Data + lVar13 * 0x28 + 0x20) =
                 (float)*(double *)((longlong)FVar18 + 0x18);
            FVar19 = local_res18;
            param_1 = local_res10;
            goto LAB_148292929;
          }
          iVar9 = *(int *)(lVar13 + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
        FVar18 = (FName)((longlong)FVar18 + 0x58);
      }
    }
    if (0 < (int)local_70) {
      pUVar3 = (this->ChaosEventRelay).field0_0x0.DebugPtr;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnRemovalEvent,
                 &local_68);
      iVar1 = *(int *)&(pUVar3->OnRemovalEvent).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      FVar8.Data = local_78.Data;
      if (0 < iVar1) {
        iVar1 = (int)local_70;
        local_68.DestructionSentinel._0_8_ = (FScriptContainerElement *)0x0;
        local_68.DestructionSentinel.Accessor._4_4_ = 0;
        local_68.DestructionSentinel.Accessor._0_4_ = (int)local_70;
        if ((int)local_70 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,(int)local_70,0,(ForAnyElementType *)&local_68,(int)local_70,
                     (int *)((longlong)&local_68.DestructionSentinel.Accessor + 4));
          ConstructItems<FChaosRemovalEvent,FChaosRemovalEvent,int>
                    ((void *)local_68.DestructionSentinel._0_8_,(FChaosRemovalEvent *)FVar8.Data,
                     iVar1);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3->OnRemovalEvent,
                   &local_68);
        if ((FScriptContainerElement *)local_68.DestructionSentinel._0_8_ !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_68.DestructionSentinel._0_8_);
        }
      }
    }
    if ((FChaosRemovalEvent *)local_78.Data != (FChaosRemovalEvent *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// HasAsyncScene @ 148292ff0

bool __thiscall FPhysScene_Chaos::HasAsyncScene(FPhysScene_Chaos *this)

{
  return false;
}

// KillVisualDebugger @ 148295160

void __thiscall FPhysScene_Chaos::KillVisualDebugger(FPhysScene_Chaos *this)

{
  return;
}

// ListAwakeRigidBodies @ 148295d10

void __thiscall FPhysScene_Chaos::ListAwakeRigidBodies(FPhysScene_Chaos *this,bool param_1)

{
  return;
}

// MarkForPreSimKinematicUpdate @ 148296a50

bool __thiscall
FPhysScene_Chaos::MarkForPreSimKinematicUpdate
          (FPhysScene_Chaos *this,USkeletalMeshComponent *param_1,ETeleportType param_2,bool param_3
          )

{
  int *piVar1;
  TArray<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FPhysScene_Chaos::FDeferredKinematicUpdateInfo>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FWeakObjectPtr *this_00;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined2 local_28;
  USkeletalMeshComponent *local_20;
  
  pTVar6 = CVar_ChaosUpdateKinematicsOnDeferredSkelMeshes.Ref;
  bVar7 = IsInParallelGameThread();
  if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (pTVar6->ShadowedValue[0] == 0) {
    bVar7 = false;
  }
  else {
    if ((param_1 != (USkeletalMeshComponent *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0))
    {
      pTVar2 = &this->DeferredKinematicUpdateSkelMeshes;
      uVar3 = param_1->DeferredKinematicUpdateIndex;
      lVar11 = (longlong)(int)uVar3;
      iVar9 = (this->DeferredKinematicUpdateSkelMeshes).ArrayNum;
      if (uVar3 == 0xffffffff) {
        param_1->DeferredKinematicUpdateIndex = iVar9;
        piVar1 = &(this->DeferredKinematicUpdateSkelMeshes).ArrayMax;
        iVar9 = (this->DeferredKinematicUpdateSkelMeshes).ArrayNum;
        local_28 = CONCAT11(param_3,param_2);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->DeferredKinematicUpdateSkelMeshes).ArrayNum = iVar9 + 1;
        this_00 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0xc);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        this_00->ObjectIndex = 0;
        this_00->ObjectSerialNumber = 0;
        local_20 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_20);
        *(undefined2 *)&this_00[1].ObjectIndex = local_28;
      }
      else {
        uVar10 = 0;
        if ((int)uVar3 < iVar9) {
          uVar10 = ~uVar3 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar4[lVar11 * 0xc + 8] == (FScriptContainerElement)0x0) &&
           (param_2 == TeleportPhysics)) {
          pFVar4[lVar11 * 0xc + 8] = (FScriptContainerElement)0x1;
        }
        if (param_3) {
          pFVar4[lVar11 * 0xc + 9] = (FScriptContainerElement)0x1;
        }
      }
    }
    bVar7 = true;
  }
  return bVar7;
}

// OnStartFrame @ 148298ce0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FPhysScene_Chaos::OnStartFrame(FPhysScene_Chaos *this,float param_1)

{
  int *piVar1;
  IPhysicsReplication *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Scene_StartFrame> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  float fVar13;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48 [2];
  
  FVar9 = StatPtr_STAT_Scene_StartFrame;
  if (StatPtr_STAT_Scene_StartFrame == (FThreadSafeStaticStat<FStat_STAT_Scene_StartFrame>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_Scene_StartFrame");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Scene_StartFrame>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Scene_StartFrame,*pFVar8,
                       L"[Scene] - StartFrame","STATGROUP_ChaosEngine","STATCAT_Advanced",
                       L"ChaosEngine",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar11.Value;
        local_res8.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x872);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_148298e33;
    }
  }
  bVar5 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_148298e33:
  if (*(int *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x8 !=
      *(int *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x34) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<392592966138464385>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                       ,0x881,"DeferredCreatePhysicsStateComponents.Num() == 0");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      fVar13 = (float)(*pcVar3)();
      return fVar13;
    }
  }
  if (GEnableKinematicDeferralStartPhysicsCondition == 0) {
    UpdateKinematicsOnDeferredSkelMeshes(this);
  }
  pIVar2 = (this->PhysicsReplication).Ptr;
  if (pIVar2 != (IPhysicsReplication *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,param_1);
  }
  if (GEnableKinematicDeferralStartPhysicsCondition != 0) {
    UpdateKinematicsOnDeferredSkelMeshes(this);
  }
  TMulticastDelegate<void___cdecl(FPhysScene_Chaos_*,float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPhysScenePreTick,this,param_1);
  TMulticastDelegate<void___cdecl(FPhysScene_Chaos_*,float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPhysSceneStep,this,param_1);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48[0].NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_48[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_48);
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
  return param_1;
}

// OnSyncBodies @ 148298fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPhysScene_Chaos::OnSyncBodies(FPhysScene_Chaos *this,FPhysicsSolverBase *param_1)

{
  FPhysicsRwLock *this_00;
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  LPVOID pvVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  UObject *pUVar8;
  UPrimitiveComponent *this_01;
  uint uVar9;
  FWeakObjectPtr *this_02;
  FWeakObjectPtr *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  code *local_88;
  undefined1 *local_80;
  FScopedSceneLock_Chaos local_78;
  FDispatcher local_60;
  
  local_60.PendingTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.PendingTransforms.ArrayNum = 0;
  local_60.PendingTransforms.ArrayMax = 0;
  if (this != (FPhysScene_Chaos *)0x0) {
    local_78.Solver = (FPBDRigidsSolver *)this->_padding_;
    local_78.bHasLock = false;
    local_78.LockType = Write;
    local_78.ThreadContext = External;
    FScopedSceneLock_Chaos::LockScene(&local_78);
    local_60.Outer = this;
    local_60.PhysScene = this;
    local_60.Solver = param_1;
    Chaos::FPhysicsSolverBase::
    PullPhysicsStateForEachDirtyProxy_External<_FPhysScene_Chaos::OnSyncBodies_::__l2::FDispatcher>
              (param_1,&local_60);
    if (((local_78.bHasLock != false) && (local_78.Solver != (FPBDRigidsSolver *)0x0)) &&
       (this_00 = (FPhysicsRwLock *)(local_78.Solver)->_padding_, this_00 != (FPhysicsRwLock *)0x0))
    {
      if (local_78.LockType == Read) {
        Chaos::FPhysicsRwLock::ReadUnlock(this_00);
      }
      else if (local_78.LockType == Write) {
        pvVar5 = TlsGetValue(this_00->TlsSlot);
        uVar9 = (int)((ulonglong)pvVar5 >> 0x20) - 1;
        TlsSetValue(this_00->TlsSlot,
                    (LPVOID)((ulonglong)uVar9 << 0x20 | (ulonglong)pvVar5 & 0xffffffff));
        if (uVar9 + (int)pvVar5 == 0) {
          ReleaseSRWLockExclusive((PSRWLOCK)this_00);
        }
        puVar6 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
        local_80 = local_res8;
        local_88 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar7 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar6);
        if (*(int *)&pFVar7[2].field_0x4 < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        *(int *)&pFVar7[2].field_0x4 = *(int *)&pFVar7[2].field_0x4 + -1;
        Chaos::Insights::EndLockAcquireEvent();
      }
    }
  }
  iVar3 = local_60.PendingTransforms.ArrayNum;
  pFVar10 = (FWeakObjectPtr *)
            (local_60.PendingTransforms.AllocatorInstance.Data +
            (longlong)local_60.PendingTransforms.ArrayNum * 0x50);
  this_02 = (FWeakObjectPtr *)(local_60.PendingTransforms.AllocatorInstance.Data + 0x40);
  while( true ) {
    if (local_60.PendingTransforms.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FPhysScenePendingComponentTransform_Chaos,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_02 + -8 == pFVar10) break;
    bVar4 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)this_02,(void *)0x0);
    if (!bVar4) {
      pUVar8 = FWeakObjectPtr::Get(this_02);
      plVar1 = *(longlong **)&pUVar8[4].field_0x8;
      if ((char)this_02[1].ObjectIndex != '\0') {
        pUVar8 = FWeakObjectPtr::Get(this_02);
        (**(code **)(*(longlong *)pUVar8 + 0x588))(pUVar8,this_02 + -8,this_02 + -4,0,0,2,0);
      }
      if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar1 + 0x508))(plVar1);
      }
    }
    bVar4 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)this_02,(void *)0x0);
    if ((!bVar4) && (*(char *)((longlong)&this_02[1].ObjectIndex + 1) != '\0')) {
      this_01 = (UPrimitiveComponent *)FWeakObjectPtr::Get(this_02);
      local_res18 = 0;
      UPrimitiveComponent::DispatchWakeEvents
                (this_01,*(char *)((longlong)&this_02[1].ObjectIndex + 1) != '\x01',(FName)0x0);
    }
    this_02 = this_02 + 10;
  }
  if (local_60.PendingTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.PendingTransforms.AllocatorInstance.Data);
  }
  return;
}

// OnUpdateWorldPause @ 1482992e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FPhysScene_Chaos::OnUpdateWorldPause(FPhysScene_Chaos *this)

{
  ENetMode EVar1;
  AActor *this_00;
  UWorld *this_01;
  AWorldSettings *pAVar2;
  
  this_00 = (AActor *)FWeakObjectPtr::Get(&(this->SolverActor).WeakPtr);
  if ((((this_00 != (AActor *)0x0) &&
       (this_01 = AActor::GetWorld(this_00), this_01 != (UWorld *)0x0)) &&
      ((pAVar2 = UWorld::GetWorldSettings(this_01,false,false), pAVar2 == (AWorldSettings *)0x0 ||
       (((pAVar2->PauserPlayerState).field0_0x0.DebugPtr == (APlayerState *)0x0 ||
        (this_01->TimeSeconds <= this_01->PauseDelay && this_01->PauseDelay != this_01->TimeSeconds)
        ))))) &&
     ((!(bool)this_01->bRequestedBlockOnAsyncLoading ||
      (EVar1 = UWorld::InternalGetNetMode(this_01), EVar1 != NM_Client)))) {
    UEngine::ShouldCommitPendingMapChange(GEngine,this_01);
    return;
  }
  return;
}

// OnWorldBeginPlay @ 148299380

void __thiscall FPhysScene_Chaos::OnWorldBeginPlay(FPhysScene_Chaos *this)

{
  return;
}

// OnWorldEndPlay @ 148299390

void __thiscall FPhysScene_Chaos::OnWorldEndPlay(FPhysScene_Chaos *this)

{
  FPlatformRWLock *SRWLock;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (Chaos::CVars::bEnableAsyncInitBody) {
    SRWLock = &this->PhysicsProxyComponentMapsLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
             *)&this->PhysicsProxyToComponentMap);
    TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&this->ComponentToPhysicsProxyMap);
                    /* WARNING: Could not recover jumptable at 0x0001482993f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
           *)&this->PhysicsProxyToComponentMap);
  TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->ComponentToPhysicsProxyMap);
  return;
}

// PopPendingSerializedStateForObject @ 14829b680

TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> __thiscall
FPhysScene_Chaos::PopPendingSerializedStateForObject(FPhysScene_Chaos *this,UObject *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulonglong in_R8;
  undefined8 local_18 [2];
  
  iVar6 = *(int *)&(this->PendingMigratedPhysicsStateByComponent).field_0x34;
  iVar2 = *(int *)&(this->PendingMigratedPhysicsStateByComponent).field_0x8;
  if (iVar2 == iVar6) {
    *(undefined8 *)param_1 = 0;
    return (TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>)
           (FSerializedDataBuffer *)param_1;
  }
  uVar8 = 0;
  uVar5 = ((uint)(in_R8 >> 0x14) & 0xffff ^ (uint)(in_R8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (iVar2 != iVar6) {
    puVar7 = *(undefined1 **)&(this->PendingMigratedPhysicsStateByComponent).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->PendingMigratedPhysicsStateByComponent).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->PendingMigratedPhysicsStateByComponent).field_0x48 -
                               1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->PendingMigratedPhysicsStateByComponent).field_0x0;
      while (lVar1 = lVar3 + (longlong)iVar6 * 0x18,
            *(ulonglong *)(lVar3 + (longlong)iVar6 * 0x18) != in_R8) {
        iVar6 = *(int *)(lVar1 + 0x10);
        if (iVar6 == -1) {
          *(undefined8 *)param_1 = 0;
          return (TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
                  )(FSerializedDataBuffer *)param_1;
        }
      }
      puVar4 = (undefined8 *)(lVar1 + 8);
      if (local_18 != puVar4) {
        uVar8 = *puVar4;
        *puVar4 = 0;
      }
      TSet<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FDefaultSetAllocator>
                       *)&this->PendingMigratedPhysicsStateByComponent,iVar6);
    }
  }
  *(undefined8 *)param_1 = uVar8;
  return (TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>)
         (FSerializedDataBuffer *)param_1;
}

// ProcessAsyncPhysicsStateJobs @ 14829c880

void __thiscall FPhysScene_Chaos::ProcessAsyncPhysicsStateJobs(FPhysScene_Chaos *this,bool param_1)

{
  FPhysScene_AsyncPhysicsStateJobQueue *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                       ,0x758,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->AsyncPhysicsStateJobQueue).Ptr;
  if (this_00 != (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
    FPhysScene_AsyncPhysicsStateJobQueue::Tick(this_00,param_1);
  }
  return;
}

// ProcessDeferredCreatePhysicsState @ 14829c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPhysScene_Chaos::ProcessDeferredCreatePhysicsState(FPhysScene_Chaos *this)

{
  ulonglong uVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  FPhysScene_Chaos *pFVar9;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator> *pTVar10
  ;
  bool bVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ProcessDeferredCreatePhysicsState> FVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ForElementType<unsigned_int> FVar21;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
  uint uVar24;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator> *pTVar25
  ;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStackY_298 [32];
  <lambda_1> local_236;
  undefined1 local_235 [5];
  ulonglong local_230;
  FName local_228;
  ForElementType<unsigned_int> local_220;
  FColor_u_0 local_218 [2];
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
  *local_210;
  FName local_208;
  FName local_200;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
  *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  undefined1 *local_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  int local_1b0;
  longlong local_1a8;
  FPhysScene_Chaos *local_1a0;
  TArray<UBodySetup_*,TSizedDefaultAllocator<32>_> local_198;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>
  *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  FPhysScene_Chaos *local_f8;
  TArray<UBodySetup_*,TSizedDefaultAllocator<32>_> *local_f0;
  TArrayView<std::nullptr_t,int> local_e8;
  code *local_d8;
  FPhysScene_Chaos **local_d0;
  FDestructionSentinel local_c8;
  FName local_b0 [4];
  undefined4 local_8c;
  TSet<UBodySetup_*,DefaultKeyFuncs<UBodySetup_*,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  iVar20 = 0;
  FVar16 = StatPtr_STAT_ProcessDeferredCreatePhysicsState;
  local_1a0 = this;
  if (StatPtr_STAT_ProcessDeferredCreatePhysicsState ==
      (FThreadSafeStaticStat<FStat_STAT_ProcessDeferredCreatePhysicsState>)0x0) {
    pFVar15 = ::FName::FName(local_b0,"STAT_ProcessDeferredCreatePhysicsState");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ProcessDeferredCreatePhysicsState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessDeferredCreatePhysicsState
                        ,*pFVar15,L"ProcessDeferredCreatePhysicsState","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar16;
  bVar5 = false;
  bVar6 = false;
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  bVar11 = false;
  bVar28 = false;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_218[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_218[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar11 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_208.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x6f6);
        bVar5 = true;
        bVar6 = true;
        bVar11 = true;
        bVar28 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_228 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar11 = true;
      goto LAB_14829ca6e;
    }
  }
  bVar6 = bVar28;
  bVar5 = bVar11;
  bVar11 = false;
  local_228 = local_200;
LAB_14829ca6e:
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1783,"FPhysScene_Chaos::ProcessDeferredCreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
               ,0x6f7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1783);
  }
  local_220 = (ForElementType<unsigned_int>)
              &(this->DeferredCreatePhysicsStateComponents).Elements.field_0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_210 = &this->DeferredCreatePhysicsStateComponents;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_1d0 = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  iVar19 = *(int *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x28;
  local_230 = 1;
  uStack_1e4 = 1;
  iStack_1d4 = 0;
  if (iVar19 != 0) {
    puVar23 = *(uint **)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)local_220;
    }
    uStack_1e4 = *puVar23;
    iVar20 = 0;
    while (uStack_1e4 == 0) {
      lVar17 = (longlong)iVar20;
      local_1d0 = local_1d0 + 0x20;
      iVar20 = iVar20 + 1;
      uStack_1e4 = 1;
      iStack_1d4 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14829cb9f;
      uStack_1e4 = (puVar23 + 1)[lVar17];
    }
    uStack_1e4 = -uStack_1e4 & uStack_1e4;
    uVar1 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1c0 = (int)lVar17;
    iStack_1d4 = local_1c0 + -1 + local_1d0;
    if (iVar19 < iStack_1d4) {
      iStack_1d4 = iVar19;
    }
  }
LAB_14829cb9f:
  uStack_1cc = local_8c;
  iStack_1c8 = *(int *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x8 -
               *(int *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x34;
  uVar26 = *(uint *)&(this->DeferredCreatePhysicsStateComponents).Elements.field_0x28;
  uVar24 = uVar26 & 0xffffffe0;
  TStack_150._padding_ = CONCAT44(uStack_1e4,iVar20);
  uStack_1d8 = 0xffffffff;
  TStack_150.CurrentBitIndex = iStack_1d4;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar26 >> 5;
  TStack_150._28_4_ = local_8c;
  TStack_150.BaseBitIndex = local_1d0;
  uStack_130 = CONCAT44(uStack_1c4,iStack_1c8);
  local_1f0 = local_210;
  iStack_1e8 = iVar20;
  local_1e0 = (undefined1 *)local_220;
  local_158 = local_210;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_220;
  if ((((int)uVar26 < 0) || (iVar19 < (int)uVar26)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar25 = local_210;
  FVar8 = local_220;
  uVar27 = *(int *)((longlong)local_220 + 0x18);
  if (uVar26 != uVar27) {
    FVar21 = *(ForElementType<unsigned_int> *)((longlong)local_220 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_220 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_220;
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar18 * 4);
    while (uVar26 == 0) {
      lVar17 = (longlong)iVar18;
      uVar24 = uVar24 + 0x20;
      iVar18 = iVar18 + 1;
      uVar26 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14829ccc0;
      uVar26 = *(uint *)((undefined1 *)((longlong)FVar21 + 4) + lVar17 * 4);
    }
    uVar1 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1bc = (int)lVar17;
    uVar26 = (uVar24 - 1) + local_1bc;
    if ((int)uVar27 < (int)uVar26) {
      uVar26 = uVar27;
    }
  }
LAB_14829ccc0:
  while( true ) {
    pTVar10 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_235[0] = 0;
      `TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_235);
    }
    if (((TStack_150.CurrentBitIndex == uVar26) &&
        ((ForElementType<unsigned_int>)TStack_150.Array == FVar8)) && (pTVar10 == pTVar25)) break;
    plVar3 = *(longlong **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    cVar13 = (**(code **)(*plVar3 + 0x3c0))(plVar3);
    if ((cVar13 != '\0') && (local_1a8 = (**(code **)(*plVar3 + 0x800))(plVar3), local_1a8 != 0)) {
      TSet<UBodySetup_*,DefaultKeyFuncs<UBodySetup_*,0>,FDefaultSetAllocator>::
      Emplace<UBodySetup_*_const_&>(&local_88,(UBodySetup **)&local_1b8,(bool *)&local_1a8);
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  TSet<UBodySetup_*,DefaultKeyFuncs<UBodySetup_*,0>,FDefaultSetAllocator>::Array
            (&local_88,&local_198);
  pFVar9 = local_1a0;
  uVar26 = (uint)local_230;
  local_f8 = local_1a0;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPhysScene_Chaos::ProcessDeferredCreatePhysicsState'::__l2::<lambda_1>,void,int>
             ::Call;
  local_d0 = &local_f8;
  local_e8.DataPtr = (void **)0x0;
  local_e8.ArrayNum = 0;
  local_f0 = &local_198;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"CreatePhysicsMeshes.PF",local_198.ArrayNum,uVar26,
             (TFunctionRef<void___cdecl(int)> *)&local_d8,local_236,None,&local_e8);
  iVar20 = *(int *)((longlong)FVar8 + 0x18);
  local_168 = 0;
  iStack_16c = 0;
  iStack_180 = 0;
  if (iVar20 != 0) {
    puVar23 = *(uint **)&(pFVar9->DeferredCreatePhysicsStateComponents).Elements.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)&(pFVar9->DeferredCreatePhysicsStateComponents).Elements.field_0x10;
    }
    uVar24 = *puVar23;
    local_168 = 0;
    while (uVar24 == 0) {
      lVar17 = (longlong)iStack_180;
      local_168 = local_168 + 0x20;
      iStack_180 = iStack_180 + 1;
      iStack_16c = iVar20;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14829ce66;
      uVar24 = puVar23[lVar17 + 1];
    }
    uVar26 = -uVar24 & uVar24;
    local_230 = (ulonglong)uVar26;
    uVar1 = local_230 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1b8._4_4_ = (int)lVar17;
    iStack_16c = local_168 + -1 + local_1b8._4_4_;
    if (iVar20 < iStack_16c) {
      iStack_16c = iVar20;
    }
  }
LAB_14829ce66:
  local_178 = &(pFVar9->DeferredCreatePhysicsStateComponents).Elements.field_0x10;
  pTVar25 = &pFVar9->DeferredCreatePhysicsStateComponents;
  iStack_164 = iStack_1d4;
  iStack_160 = *(int *)&(pFVar9->DeferredCreatePhysicsStateComponents).Elements.field_0x8 -
               *(int *)&(pFVar9->DeferredCreatePhysicsStateComponents).Elements.field_0x34;
  uVar24 = *(uint *)&(pFVar9->DeferredCreatePhysicsStateComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_120.CurrentBitIndex = iStack_16c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  uVar27 = uVar24 & 0xffffffe0;
  TStack_120._padding_ = CONCAT44(uVar26,iStack_180);
  iVar19 = (int)uVar24 >> 5;
  TStack_120._28_4_ = iStack_1d4;
  TStack_120.BaseBitIndex = local_168;
  uStack_100 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar25;
  uStack_17c = uVar26;
  local_128 = pTVar25;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_178;
  local_230._0_4_ = uVar24;
  if ((((int)uVar24 < 0) || (iVar20 < (int)uVar24)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar21 = local_220;
  uVar26 = *(uint *)((longlong)FVar8 + 0x18);
  uVar7 = (uint)local_230;
  if (uVar24 != uVar26) {
    FVar22 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar22 = FVar8;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar19 * 4);
    while (uVar24 == 0) {
      lVar17 = (longlong)iVar19;
      uVar27 = uVar27 + 0x20;
      iVar19 = iVar19 + 1;
      local_230._0_4_ = uVar26;
      uVar7 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14829cf90;
      uVar24 = *(uint *)((undefined1 *)((longlong)FVar22 + 4) + lVar17 * 4);
    }
    uVar1 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1b0 = (int)lVar17;
    local_230._0_4_ = (uVar27 - 1) + local_1b0;
    uVar7 = (uint)local_230;
    if ((int)uVar26 < (int)(uint)local_230) {
      local_230._0_4_ = uVar26;
      uVar7 = uVar26;
    }
  }
LAB_14829cf90:
  do {
    pTVar10 = local_128;
    if (*(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34 !=
        (int)uStack_100) {
      local_236 = (<lambda_1>)0x0;
      `TSparseArray<TSparseSetElement<UPrimitiveComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_236);
    }
    FVar2 = local_228;
    if (((TStack_120.CurrentBitIndex == uVar7) &&
        ((ForElementType<unsigned_int>)TStack_120.Array == FVar21)) && (pTVar10 == pTVar25)) {
      if (*(int *)&(pTVar25->Elements).field_0x8 != *(int *)&(pTVar25->Elements).field_0x34) {
        TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
        UnhashElements(pTVar25);
        *(undefined4 *)&(pTVar25->Elements).field_0x8 = 0;
        if (*(int *)&(pTVar25->Elements).field_0xc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)pTVar25,0,(int *)&(pTVar25->Elements).field_0xc);
        }
        *(undefined4 *)&(pTVar25->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pTVar25->Elements).field_0x34 = 0;
        *(undefined4 *)&(pTVar25->Elements).field_0x28 = 0;
      }
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UBodySetup_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UBodySetup_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      if (bVar28) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar2,CycleScopeEnd);
      }
      return;
    }
    plVar3 = *(longlong **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_120.CurrentBitIndex * 0x10);
    if (((plVar3[0x15] == 0) || ((*(uint *)(plVar3[0x15] + 8) >> 0x1e & 1) == 0)) &&
       ((cVar13 = (**(code **)(*plVar3 + 0x3c0))(plVar3), cVar13 != '\0' &&
        ((*(byte *)(plVar3 + 0x13) & 8) == 0)))) {
      (**(code **)(*plVar3 + 0x3b0))(plVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UActorComponent::GlobalCreatePhysicsDelegate,(FWriteAccessScope *)&local_c8);
      bVar12 = false;
      UActorComponent::GlobalCreatePhysicsDelegate._28_4_ =
           UActorComponent::GlobalCreatePhysicsDelegate._28_4_ + 1;
      uVar26 = UActorComponent::GlobalCreatePhysicsDelegate._16_4_ - 1;
      if (-1 < (int)uVar26) {
        lVar17 = (longlong)(int)uVar26 << 4;
        bVar12 = false;
        do {
          uVar24 = 0;
          if ((int)uVar26 < (int)UActorComponent::GlobalCreatePhysicsDelegate._16_4_) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((*(int *)(lVar17 + 8 + UActorComponent::GlobalCreatePhysicsDelegate._8_8_) == 0) ||
              (*(longlong **)(lVar17 + UActorComponent::GlobalCreatePhysicsDelegate._8_8_) ==
               (longlong *)0x0)) ||
             (cVar13 = (**(code **)(**(longlong **)
                                      (lVar17 + UActorComponent::GlobalCreatePhysicsDelegate._8_8_)
                                   + 0x68))(), cVar13 == '\0')) {
            bVar12 = true;
          }
          lVar17 = lVar17 + -0x10;
          uVar26 = uVar26 - 1;
        } while (-1 < (int)uVar26);
      }
      UActorComponent::GlobalCreatePhysicsDelegate._28_4_ =
           UActorComponent::GlobalCreatePhysicsDelegate._28_4_ + -1;
      if (bVar12) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &UActorComponent::GlobalCreatePhysicsDelegate,false);
      }
      pTVar25 = local_210;
      if (local_c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
        pTVar25 = local_210;
      }
    }
    plVar3[0x5f] = 0;
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  } while( true );
}

// PushAsyncCreatePhysicsStateJob @ 14829e6c0

bool __thiscall
FPhysScene_Chaos::PushAsyncCreatePhysicsStateJob
          (FPhysScene_Chaos *this,IAsyncPhysicsStateProcessor *param_1)

{
  TUniquePtr<FPhysScene_AsyncPhysicsStateJobQueue,TDefaultDelete<FPhysScene_AsyncPhysicsStateJobQueue>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPhysScene_AsyncPhysicsStateJobQueue *pFVar6;
  FPhysScene_AsyncPhysicsStateJobQueue *this_00;
  longlong local_28;
  FJob local_20;
  
  if (!Chaos::CVars::bEnableAsyncInitBody) {
    return false;
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                         ,0x72c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  cVar5 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((cVar5 != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Processor->IsAsyncPhysicsStateCreated()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                         ,0x72d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  cVar5 = (**(code **)*param_1)(param_1);
  if ((cVar5 == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Processor->AllowsAsyncPhysicsStateCreation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                         ,0x72e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar1 = &this->AsyncPhysicsStateJobQueue;
  if (pTVar1->Ptr == (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
    pFVar6 = ::operator_new(0x68);
    this_00 = (FPhysScene_AsyncPhysicsStateJobQueue *)0x0;
    if (pFVar6 != (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
      this_00 = FPhysScene_AsyncPhysicsStateJobQueue::FPhysScene_AsyncPhysicsStateJobQueue
                          (pFVar6,this);
    }
    if (pTVar1 != (TUniquePtr<FPhysScene_AsyncPhysicsStateJobQueue,TDefaultDelete<FPhysScene_AsyncPhysicsStateJobQueue>_>
                   *)&local_28) {
      pFVar6 = pTVar1->Ptr;
      pTVar1->Ptr = this_00;
      this_00 = pFVar6;
    }
    if (this_00 != (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
      FPhysScene_AsyncPhysicsStateJobQueue::_scalar_deleting_destructor_(this_00,1);
    }
  }
  local_20.Type = CreatePhysicsState;
  local_20.Processor = param_1;
  FPhysScene_AsyncPhysicsStateJobQueue::AddJob(pTVar1->Ptr,&local_20);
  return true;
}

// PushAsyncDestroyPhysicsStateJob @ 14829e810

bool __thiscall
FPhysScene_Chaos::PushAsyncDestroyPhysicsStateJob
          (FPhysScene_Chaos *this,IAsyncPhysicsStateProcessor *param_1)

{
  TUniquePtr<FPhysScene_AsyncPhysicsStateJobQueue,TDefaultDelete<FPhysScene_AsyncPhysicsStateJobQueue>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPhysScene_AsyncPhysicsStateJobQueue *pFVar6;
  FPhysScene_AsyncPhysicsStateJobQueue *this_00;
  longlong local_28;
  FJob local_20;
  
  if (Chaos::CVars::bEnableAsyncInitBody) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                           ,0x73f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
    if ((cVar5 == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Processor->IsAsyncPhysicsStateCreated()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                           ,0x740,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
    if ((cVar5 == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Processor->AllowsAsyncPhysicsStateDestruction()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                           ,0x741,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pTVar1 = &this->AsyncPhysicsStateJobQueue;
    if (pTVar1->Ptr == (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
      pFVar6 = ::operator_new(0x68);
      this_00 = (FPhysScene_AsyncPhysicsStateJobQueue *)0x0;
      if (pFVar6 != (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
        this_00 = FPhysScene_AsyncPhysicsStateJobQueue::FPhysScene_AsyncPhysicsStateJobQueue
                            (pFVar6,this);
      }
      if (pTVar1 != (TUniquePtr<FPhysScene_AsyncPhysicsStateJobQueue,TDefaultDelete<FPhysScene_AsyncPhysicsStateJobQueue>_>
                     *)&local_28) {
        pFVar6 = pTVar1->Ptr;
        pTVar1->Ptr = this_00;
        this_00 = pFVar6;
      }
      if (this_00 != (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
        FPhysScene_AsyncPhysicsStateJobQueue::_scalar_deleting_destructor_(this_00,1);
      }
    }
    local_20.Type = DestroyPhysicsState;
    local_20.Processor = param_1;
    FPhysScene_AsyncPhysicsStateJobQueue::AddJob(pTVar1->Ptr,&local_20);
  }
  return true;
}

// PushPendingSerializedStateForObject @ 14829e950

void __thiscall
FPhysScene_Chaos::PushPendingSerializedStateForObject
          (FPhysScene_Chaos *this,UObject *param_1,
          TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *local_res10 [3];
  UObject **local_18;
  TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> *local_10;
  
  if (param_1 != (UObject *)0x0) {
    local_res10[0] = param_1;
    if (param_2->Ptr == (FSerializedDataBuffer *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<392592966138463055>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                         ,0x34f,"InState");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_18 = local_res10;
      local_10 = param_2;
      TSet<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UObject_*_&,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_&&>_>
                ((TSet<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FDefaultSetAllocator>
                  *)&this->PendingMigratedPhysicsStateByComponent,
                 (TPairInitializer<UObject_*_&,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_&&>
                  *)(local_res10 + 2),(bool *)&local_18);
    }
  }
  return;
}

// RegisterAsyncPhysicsTickActor @ 14829f310

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
FPhysScene_Chaos::RegisterAsyncPhysicsTickActor(FPhysScene_Chaos *this,AActor *param_1)

{
  FAsyncPhysicsTickCallback *pFVar1;
  FString *pFVar2;
  FName local_res8;
  AActor *local_res10;
  AActor *local_res18 [2];
  FString local_48;
  FString local_38;
  
  pFVar1 = this->AsyncPhysicsTickCallback;
  local_res10 = param_1;
  if (pFVar1 == (FAsyncPhysicsTickCallback *)0x0) {
    pFVar1 = Chaos::FPhysicsSolverBase::
             CreateAndRegisterSimCallbackObject_External<FAsyncPhysicsTickCallback>
                       ((FPhysicsSolverBase *)this->_padding_);
    this->AsyncPhysicsTickCallback = pFVar1;
  }
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*_const_&>
            (&pFVar1->AsyncPhysicsTickActors,local_res18,(bool *)&local_res10);
  if (((char)local_res8.ComparisonIndex.Value == '\0') && (4 < (byte)LogChaos._0_1_)) {
    if (param_1 == (AActor *)0x0) {
      pFVar2 = ::FString::FString(&local_38,L"NULL");
      local_48.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_48);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RegisterAsyncPhysicsTickComponent @ 14829f430

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
FPhysScene_Chaos::RegisterAsyncPhysicsTickComponent(FPhysScene_Chaos *this,UActorComponent *param_1)

{
  FAsyncPhysicsTickCallback *pFVar1;
  UActorComponent *local_res8;
  UActorComponent *local_res10 [3];
  
  pFVar1 = this->AsyncPhysicsTickCallback;
  local_res10[0] = param_1;
  if (pFVar1 == (FAsyncPhysicsTickCallback *)0x0) {
    pFVar1 = Chaos::FPhysicsSolverBase::
             CreateAndRegisterSimCallbackObject_External<FAsyncPhysicsTickCallback>
                       ((FPhysicsSolverBase *)this->_padding_);
    this->AsyncPhysicsTickCallback = pFVar1;
  }
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
  Emplace<UActorComponent_*_const_&>
            (&pFVar1->AsyncPhysicsTickComponents,&local_res8,(bool *)local_res10);
  return;
}

// RegisterForCollisionEvents @ 14829f480

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
FPhysScene_Chaos::RegisterForCollisionEvents(FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  FPlatformRWLock *SRWLock;
  UPrimitiveComponent *local_res8;
  UPrimitiveComponent *local_res10;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (Chaos::CVars::bEnableAsyncInitBody) {
    SRWLock = &this->CollisionEventRegistrationsLock;
  }
  local_res10 = param_1;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
    Emplace<UPrimitiveComponent_*_const_&>
              (&this->CollisionEventRegistrations,&local_res8,(bool *)&local_res10);
                    /* WARNING: Could not recover jumptable at 0x00014829f4d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
  Emplace<UPrimitiveComponent_*_const_&>
            (&this->CollisionEventRegistrations,&local_res8,(bool *)&local_res10);
  return;
}

// RegisterForGlobalCollisionEvents @ 14829f510

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
FPhysScene_Chaos::RegisterForGlobalCollisionEvents
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  UPrimitiveComponent *local_res8;
  UPrimitiveComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
  Emplace<UPrimitiveComponent_*_const_&>
            (&this->GlobalCollisionEventRegistrations,&local_res8,(bool *)local_res10);
  return;
}

// RegisterForGlobalRemovalEvents @ 14829f540

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
FPhysScene_Chaos::RegisterForGlobalRemovalEvents
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  UPrimitiveComponent *local_res8;
  UPrimitiveComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
  Emplace<UPrimitiveComponent_*_const_&>
            (&this->GlobalRemovalEventRegistrations,&local_res8,(bool *)local_res10);
  return;
}

// RegisterForReplicationCache @ 14829f570

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
FPhysScene_Chaos::RegisterForReplicationCache(FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  CreatePhysicsReplicationCache(this);
  FPhysicsReplicationCache::RegisterForReplicationCache((this->PhysicsReplicationCache).Ptr,param_1)
  ;
  return;
}

// RemoveAsyncPhysicsStateJobs @ 1482a1a60

void __thiscall
FPhysScene_Chaos::RemoveAsyncPhysicsStateJobs
          (FPhysScene_Chaos *this,IAsyncPhysicsStateProcessor *param_1)

{
  FPhysScene_AsyncPhysicsStateJobQueue *this_00;
  code *pcVar1;
  bool bVar2;
  FJob local_28;
  FJob local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                       ,0x74e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->AsyncPhysicsStateJobQueue).Ptr;
  if (this_00 != (FPhysScene_AsyncPhysicsStateJobQueue *)0x0) {
    local_28.Type = CreatePhysicsState;
    local_28.Processor = param_1;
    FPhysScene_AsyncPhysicsStateJobQueue::RemoveJob(this_00,&local_28);
    local_18.Type = DestroyPhysicsState;
    local_18.Processor = param_1;
    FPhysScene_AsyncPhysicsStateJobQueue::RemoveJob((this->AsyncPhysicsStateJobQueue).Ptr,&local_18)
    ;
  }
  return;
}

// RemoveBodyInstanceFromPendingLists_AssumesLocked @ 1482a1cd0

void __thiscall
FPhysScene_Chaos::RemoveBodyInstanceFromPendingLists_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,int param_2)

{
  return;
}

// RemoveDeferredPhysicsStateCreation @ 1482a3040

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
FPhysScene_Chaos::RemoveDeferredPhysicsStateCreation
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::Remove
            (&this->DeferredCreatePhysicsStateComponents,param_1);
  param_1->DeferredCreatePhysicsStateScene = (FPhysScene_Chaos *)0x0;
  return;
}

// RemoveFromComponentMaps @ 1482a4220

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
FPhysScene_Chaos::RemoveFromComponentMaps(FPhysScene_Chaos *this,IPhysicsProxyBase *param_1)

{
  TObjectPtr<UPrimitiveComponent> TVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TObjectPtr<UPrimitiveComponent>_u_0 *pTVar6;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar11;
  undefined1 *puVar12;
  UPrimitiveComponent *local_res8;
  IPhysicsProxyBase *local_res10;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (Chaos::CVars::bEnableAsyncInitBody) {
    SRWLock = &this->PhysicsProxyComponentMapsLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pTVar6 = &TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
            ::Find((TMapBase<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>_>
                    *)&this->PhysicsProxyToComponentMap,param_1)->field0_0x0;
  if (pTVar6 != (TObjectPtr<UPrimitiveComponent>_u_0 *)0x0) {
    TVar1.field0_0x0 = (TObjectPtr<UPrimitiveComponent>_u_0)pTVar6->DebugPtr;
    if (*(int *)&(this->PendingMigratedPhysicsStateByComponent).field_0x8 !=
        *(int *)&(this->PendingMigratedPhysicsStateByComponent).field_0x34) {
      puVar12 = *(undefined1 **)&(this->PendingMigratedPhysicsStateByComponent).field_0x40;
      uVar8 = ((uint)((ulonglong)TVar1.field0_0x0 >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar1.field0_0x0 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->PendingMigratedPhysicsStateByComponent).field_0x38;
      }
      iVar10 = *(int *)(puVar12 +
                       (((ulonglong)(uVar8 >> 0x10) ^ (longlong)(int)uVar8) &
                       (longlong)*(int *)&(this->PendingMigratedPhysicsStateByComponent).field_0x48
                       - 1U) * 4);
      if (iVar10 != -1) {
        lVar2 = *(longlong *)&(this->PendingMigratedPhysicsStateByComponent).field_0x0;
        do {
          if ((TObjectPtr<UPrimitiveComponent>_u_0)
              ((TObjectPtr<UPrimitiveComponent>_u_0 *)(lVar2 + (longlong)iVar10 * 0x18))->DebugPtr
              == TVar1.field0_0x0) {
            TSet<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FDefaultSetAllocator>
                             *)&this->PendingMigratedPhysicsStateByComponent,iVar10);
            break;
          }
          iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
        } while (iVar10 != -1);
      }
    }
    pTVar7 = TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->ComponentToPhysicsProxyMap,pTVar6->DebugPtr);
    if (pTVar7 != (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar3 = (pTVar7->AllocatorInstance).Data;
      iVar10 = pTVar7->ArrayNum;
      for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)iVar10 * 8; pFVar11 = pFVar11 + 8) {
        if (*(IPhysicsProxyBase **)pFVar11 == param_1) {
          uVar8 = (uint)((longlong)pFVar11 - (longlong)pFVar3 >> 3);
          if (uVar8 != 0xffffffff) {
            uVar9 = 0;
            if ((int)(uVar8 + 1) <= iVar10) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (pTVar7->AllocatorInstance).Data;
            iVar10 = pTVar7->ArrayNum + ~uVar8;
            if (1 < iVar10) {
              iVar10 = 1;
            }
            if (iVar10 != 0) {
              memmove(pFVar3 + (longlong)(int)uVar8 * 8,
                      pFVar3 + (longlong)(pTVar7->ArrayNum - iVar10) * 8,(longlong)iVar10 << 3);
            }
            pTVar7->ArrayNum = pTVar7->ArrayNum + -1;
            iVar10 = pTVar7->ArrayNum;
          }
          break;
        }
      }
      if ((iVar10 == 0) &&
         (local_res8 = pTVar6->DebugPtr,
         *(int *)&(this->ComponentToPhysicsProxyMap).field_0x8 !=
         *(int *)&(this->ComponentToPhysicsProxyMap).field_0x34)) {
        uVar8 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)
                ) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<UPrimitiveComponent_const_*>
                  ((TSet<TTuple<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->ComponentToPhysicsProxyMap,uVar8 >> 0x10 ^ uVar8,&local_res8);
      }
    }
  }
  local_res10 = param_1;
  if (*(int *)&(this->PhysicsProxyToComponentMap).field_0x8 !=
      *(int *)&(this->PhysicsProxyToComponentMap).field_0x34) {
    uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
    ::RemoveImpl<IPhysicsProxyBase_const_*>
              ((TSet<TTuple<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TObjectPtr<UPrimitiveComponent>,0>,FDefaultSetAllocator>
                *)&this->PhysicsProxyToComponentMap,uVar8 >> 0x10 ^ uVar8,&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a44de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  return;
}

// RemoveObject @ 1482a5630

void __thiscall
FPhysScene_Chaos::RemoveObject(FPhysScene_Chaos *this,FClusterUnionPhysicsProxy *param_1)

{
  FPBDRigidsSolver *this_00;
  
  this_00 = (FPBDRigidsSolver *)param_1->_padding_;
  FChaosScene::RemoveActorFromAccelerationStructureImp
            ((FChaosScene *)this,(TGeometryParticle<double,3> *)(param_1->Particle_External).Ptr);
  if (this_00 != (FPBDRigidsSolver *)0x0) {
    Chaos::FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
              ((FPhysicsSolverBase *)this_00,
               (TGeometryParticle<double,3> *)(param_1->Particle_External).Ptr,Delete);
    Chaos::FPBDRigidsSolver::UnregisterObject(this_00,param_1);
  }
  RemoveFromComponentMaps(this,(IPhysicsProxyBase *)param_1);
  return;
}

// RemoveObject @ 1482a56a0

void __thiscall
FPhysScene_Chaos::RemoveObject(FPhysScene_Chaos *this,FGeometryCollectionPhysicsProxy *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDRigidsSolver *this_00;
  TGeometryParticle<double,3> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  this_00 = *(FPBDRigidsSolver **)&param_1->field_0x8;
  pFVar4 = (param_1->GTParticles).AllocatorInstance.Data;
  iVar2 = (param_1->GTParticles).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->GTParticles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    pTVar3 = *(TGeometryParticle<double,3> **)pFVar4;
    if (pTVar3 != (TGeometryParticle<double,3> *)0x0) {
      FChaosScene::RemoveActorFromAccelerationStructureImp((FChaosScene *)this,pTVar3);
      if (this_00 != (FPBDRigidsSolver *)0x0) {
        Chaos::FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
                  ((FPhysicsSolverBase *)this_00,pTVar3,Delete);
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  if (this_00 != (FPBDRigidsSolver *)0x0) {
    Chaos::FPBDRigidsSolver::UnregisterObject(this_00,param_1);
  }
  RemoveFromComponentMaps(this,(IPhysicsProxyBase *)param_1);
  return;
}

// RemoveObject @ 1482a5770

void __thiscall
FPhysScene_Chaos::RemoveObject(FPhysScene_Chaos *this,FSingleParticlePhysicsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<392592966138462996>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                     ,0x314,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveObject @ 1482a57b0

void __thiscall
FPhysScene_Chaos::RemoveObject(FPhysScene_Chaos *this,FSkeletalMeshPhysicsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<392592966138462959>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                     ,0x2ef,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveObject @ 1482a57f0

void __thiscall
FPhysScene_Chaos::RemoveObject(FPhysScene_Chaos *this,FStaticMeshPhysicsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<392592966138462977>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                     ,0x301,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveSpringConstraint @ 1482a5860

void __thiscall
FPhysScene_Chaos::RemoveSpringConstraint
          (FPhysScene_Chaos *this,FPhysicsConstraintReference_Chaos *param_1)

{
  return;
}

// ResimNFrames @ 1482a6d30

void __thiscall FPhysScene_Chaos::ResimNFrames(FPhysScene_Chaos *this,int param_1)

{
  return;
}

// SetKinematicTarget_AssumesLocked @ 1482abae0

void __thiscall
FPhysScene_Chaos::SetKinematicTarget_AssumesLocked
          (FPhysScene_Chaos *this,FBodyInstance *param_1,TTransform<double> *param_2,bool param_3)

{
  FSingleParticlePhysicsProxy *local_18 [2];
  
  local_18[0] = FBodyInstance::GetPhysicsActor(param_1);
  FChaosEngineInterface::SetKinematicTarget_AssumesLocked(local_18,param_2);
  return;
}

// SetOwningWorld @ 1482adb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPhysScene_Chaos::SetOwningWorld(FPhysScene_Chaos *this,UWorld *param_1)

{
  this->_padding_ = (longlong)param_1;
  return;
}

// SetPhysXTreeRebuildRate @ 1482ae230

void __thiscall FPhysScene_Chaos::SetPhysXTreeRebuildRate(FPhysScene_Chaos *this,int param_1)

{
  return;
}

// StartAsync @ 1482b1c60

void __thiscall FPhysScene_Chaos::StartAsync(FPhysScene_Chaos *this)

{
  return;
}

// SupportsAsyncPhysicsStateCreation @ 1482b1df0

bool __cdecl FPhysScene_Chaos::SupportsAsyncPhysicsStateCreation(void)

{
  return Chaos::CVars::bEnableAsyncInitBody;
}

// SupportsAsyncPhysicsStateDestruction @ 1482b1e00

bool __cdecl FPhysScene_Chaos::SupportsAsyncPhysicsStateDestruction(void)

{
  return Chaos::CVars::bEnableAsyncInitBody;
}

// SupportsOriginShifting @ 1482b1e10

bool __cdecl FPhysScene_Chaos::SupportsOriginShifting(void)

{
  return false;
}

// UnRegisterForCollisionEvents @ 1482b4970

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
FPhysScene_Chaos::UnRegisterForCollisionEvents(FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  FPlatformRWLock *SRWLock;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (Chaos::CVars::bEnableAsyncInitBody) {
    SRWLock = &this->CollisionEventRegistrationsLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::
    Remove(&this->CollisionEventRegistrations,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001482b49c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::Remove
            (&this->CollisionEventRegistrations,param_1);
  return;
}

// UnRegisterForGlobalCollisionEvents @ 1482b49f0

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
FPhysScene_Chaos::UnRegisterForGlobalCollisionEvents
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::Remove
            (&this->GlobalCollisionEventRegistrations,param_1);
  return;
}

// UnRegisterForGlobalRemovalEvents @ 1482b4a10

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
FPhysScene_Chaos::UnRegisterForGlobalRemovalEvents
          (FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  TSet<UPrimitiveComponent_*,DefaultKeyFuncs<UPrimitiveComponent_*,0>,FDefaultSetAllocator>::Remove
            (&this->GlobalRemovalEventRegistrations,param_1);
  return;
}

// UnregisterAsyncPhysicsTickActor @ 1482b5ac0

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
FPhysScene_Chaos::UnregisterAsyncPhysicsTickActor(FPhysScene_Chaos *this,AActor *param_1)

{
  FAsyncPhysicsTickCallback *pFVar1;
  longlong lVar2;
  int iVar3;
  FString *pFVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  pFVar1 = this->AsyncPhysicsTickCallback;
  if (pFVar1 != (FAsyncPhysicsTickCallback *)0x0) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (*(int *)&(pFVar1->AsyncPhysicsTickActors).Elements.field_0x8 !=
        *(int *)&(pFVar1->AsyncPhysicsTickActors).Elements.field_0x34) {
      FVar6 = (pFVar1->AsyncPhysicsTickActors).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(pFVar1->AsyncPhysicsTickActors).Hash;
      }
      iVar3 = *(int *)((longlong)FVar6 +
                      (ulonglong)
                      ((pFVar1->AsyncPhysicsTickActors).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4
                      );
      if (iVar3 != -1) {
        lVar2 = *(longlong *)&(pFVar1->AsyncPhysicsTickActors).Elements;
        do {
          if (*(AActor **)(lVar2 + (longlong)iVar3 * 0x10) == param_1) {
            if (4 < (byte)LogChaos._0_1_) {
              if (param_1 == (AActor *)0x0) {
                pFVar4 = ::FString::FString(&local_28,L"NULL");
                local_38.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
                (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar4->Data).ArrayNum = 0;
                (pFVar4->Data).ArrayMax = 0;
                if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_28.Data.AllocatorInstance.Data);
                }
              }
              else {
                local_res8 = (FName)param_1->_padding_;
                ::FName::ToString(&local_res8,&local_38);
              }
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
            }
            break;
          }
          iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
        } while (iVar3 != -1);
      }
    }
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Remove
              (&this->AsyncPhysicsTickCallback->AsyncPhysicsTickActors,param_1);
  }
  return;
}

// UnregisterAsyncPhysicsTickComponent @ 1482b5c60

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
FPhysScene_Chaos::UnregisterAsyncPhysicsTickComponent
          (FPhysScene_Chaos *this,UActorComponent *param_1)

{
  if (this->AsyncPhysicsTickCallback != (FAsyncPhysicsTickCallback *)0x0) {
    TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::Remove
              (&this->AsyncPhysicsTickCallback->AsyncPhysicsTickComponents,param_1);
    return;
  }
  return;
}

// UpdateKinematicsOnDeferredSkelMeshes @ 1482bbde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPhysScene_Chaos::UpdateKinematicsOnDeferredSkelMeshes(FPhysScene_Chaos *this)

{
  FBodyInstance *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FName FVar5;
  FPhysScene_Chaos *pFVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos> FVar11;
  undefined8 *puVar12;
  ForElementType<int> FVar13;
  UObject *pUVar14;
  USkeletalMeshComponent *this_01;
  FSingleParticlePhysicsProxy *pFVar15;
  ForElementType<IPhysicsProxyBase_*> FVar16;
  longlong lVar17;
  ForElementType<Chaos::FSingleParticlePhysicsProxy_*> FVar18;
  ulonglong uVar19;
  FWeakObjectPtr *this_02;
  FName FVar20;
  PSRWLOCK SRWLock;
  uint uVar21;
  FWeakObjectPtr *pFVar23;
  uint uVar24;
  TArray<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FPhysScene_Chaos::FDeferredKinematicUpdateInfo>,TSizedDefaultAllocator<32>_>
  *pTVar25;
  undefined1 auStackY_768 [32];
  uint local_704;
  undefined1 local_700;
  undefined1 local_6ff [7];
  FName local_6f8;
  uint local_6f0;
  FSingleParticlePhysicsProxy *local_6e8 [2];
  undefined8 *local_6d8;
  undefined8 *local_6d0;
  FColor_u_0 local_6c8 [2];
  FName local_6c0;
  TArray<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FPhysScene_Chaos::FDeferredKinematicUpdateInfo>,TSizedDefaultAllocator<32>_>
  *local_6b8;
  FWeakObjectPtr *local_6b0;
  FName local_6a8;
  FPhysScene_Chaos *local_6a0;
  FName local_698;
  TReferenceControllerBase<1> *local_688;
  FName local_680;
  FName local_678;
  longlong local_670;
  FName local_668;
  FName local_660;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  code *local_618;
  FPhysScene_Chaos **local_610;
  TArrayView<Chaos::FSingleParticlePhysicsProxy_*,int> local_608;
  FPhysScene_Chaos *local_5f8;
  ForElementType<int> *local_5f0;
  ForElementType<Chaos::FSingleParticlePhysicsProxy_*> *local_5e8;
  undefined8 **local_5e0;
  FName local_5d8;
  FString local_5d0;
  FString local_5c0;
  FBodyInstance *local_5b0;
  TVector<double>_u_0 TStack_5a8;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  ForElementType<int> local_568;
  int local_460;
  int local_45c;
  TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> local_458;
  ForElementType<Chaos::FSingleParticlePhysicsProxy_*> local_248;
  int local_40;
  int local_3c;
  ulonglong local_38;
  undefined8 *puVar22;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_768;
  puVar22 = (undefined8 *)0x0;
  local_6f0 = 0;
  FVar11 = StatPtr_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos;
  local_6a0 = this;
  if (StatPtr_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos>)0x0) {
    pFVar10 = ::FName::FName(&local_5d8,"STAT_UpdateKinematicsOnDeferredSkelMeshesChaos");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UpdateKinematicsOnDeferredSkelMeshesChaos,*pFVar10,
                        L"Update Kinematics On Deferred SkelMeshes","STATGROUP_Physics",
                        "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar11;
  bVar3 = false;
  bVar4 = false;
  local_698.ComparisonIndex.Value = 0;
  local_698.Number = 0;
  bVar7 = false;
  bVar8 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6c8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_6c0.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_6c0.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_6c0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_Chaos.cpp"
                   ,0x763);
        bVar3 = true;
        bVar4 = true;
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_6f8 = FVar20;
      local_6a8 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar7 = true;
      goto LAB_1482bbf54;
    }
  }
  bVar4 = bVar8;
  bVar3 = bVar7;
  bVar7 = false;
  local_6a8 = local_698;
LAB_1482bbf54:
  local_568.SecondaryData = (ForElementType<int>)0x0;
  local_460 = 0;
  local_45c = 0x40;
  local_248.SecondaryData = (ForElementType<Chaos::FSingleParticlePhysicsProxy_*>)0x0;
  local_40 = 0;
  local_3c = 0x40;
  local_458.AllocatorInstance.SecondaryData = (ForElementType<IPhysicsProxyBase_*>)0x0;
  local_458.ArrayNum = 0;
  local_458.ArrayMax = 0x40;
  puVar12 = ::operator_new(0x28);
  pFVar6 = local_6a0;
  local_6d8 = puVar22;
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    *puVar12 = 0;
    local_6d8 = puVar12;
  }
  uVar24 = (local_6a0->DeferredKinematicUpdateSkelMeshes).ArrayNum;
  local_6d0 = local_6d8;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if (local_45c < (int)uVar24) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar24,&local_568,local_460,&local_45c);
  }
  pTVar25 = &pFVar6->DeferredKinematicUpdateSkelMeshes;
  local_704 = 0;
  iVar9 = (pFVar6->DeferredKinematicUpdateSkelMeshes).ArrayNum;
  this_02 = (FWeakObjectPtr *)(pTVar25->AllocatorInstance).Data;
  pFVar23 = (FWeakObjectPtr *)((longlong)this_02 + (longlong)iVar9 * 0xc);
  local_6b8 = pTVar25;
  while( true ) {
    if ((pFVar6->DeferredKinematicUpdateSkelMeshes).ArrayNum != iVar9) {
      local_700 = 0;
      `TCheckedPointerIterator<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FPhysScene_Chaos::FDeferredKinematicUpdateInfo>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_700);
    }
    if (this_02 == pFVar23) break;
    FVar13 = (ForElementType<int>)&local_568;
    if (local_568.SecondaryData != (ForElementType<int>)0x0) {
      FVar13 = local_568.SecondaryData;
    }
    if ((ulonglong)FVar13 <= &local_704) {
      FVar13 = (ForElementType<int>)&local_568;
      if (local_568.SecondaryData != (ForElementType<int>)0x0) {
        FVar13 = local_568.SecondaryData;
      }
      if ((&local_704 < (uint *)((longlong)FVar13 + (longlong)local_45c * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_460 == local_45c) {
      local_460 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&local_568,&local_45c);
    }
    lVar17 = (longlong)local_460;
    FVar13 = (ForElementType<int>)&local_568;
    if (local_568.SecondaryData != (ForElementType<int>)0x0) {
      FVar13 = local_568.SecondaryData;
    }
    local_460 = local_460 + 1;
    *(uint *)((longlong)FVar13 + lVar17 * 4) = local_704;
    pUVar14 = FWeakObjectPtr::Get(this_02);
    if ((pUVar14 != (UObject *)0x0) && (-1 < (char)pUVar14[0x45].field_0x10)) {
      local_704 = local_704 + *(int *)&pUVar14[0x4c].field_0x18;
    }
    this_02 = (FWeakObjectPtr *)&this_02[1].ObjectSerialNumber;
  }
  lVar17 = (longlong)(int)local_704;
  iVar9 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSingleParticlePhysicsProxy_*>_>
                    (8,8,local_704,&local_248,&local_40,&local_3c);
  FVar18 = (ForElementType<Chaos::FSingleParticlePhysicsProxy_*>)&local_248;
  if (local_248.SecondaryData != (ForElementType<Chaos::FSingleParticlePhysicsProxy_*>)0x0) {
    FVar18 = local_248.SecondaryData;
  }
  memset((void *)((longlong)FVar18 + (longlong)iVar9 * 8),0,lVar17 << 3);
  if ((int)local_704 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_704);
  }
  if (local_458.ArrayMax < (int)local_704) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<IPhysicsProxyBase_*>_>
              (8,8,local_704,&local_458.AllocatorInstance,local_458.ArrayNum,&local_458.ArrayMax);
  }
  local_6f0 = (pFVar6->DeferredKinematicUpdateSkelMeshes).ArrayNum;
  uVar19 = (ulonglong)(int)local_6f0;
  FVar20 = (FName)(pTVar25->AllocatorInstance).Data;
  pFVar23 = (FWeakObjectPtr *)((longlong)FVar20 + uVar19 * 0xc);
  local_6b0 = pFVar23;
  do {
    while( true ) {
      local_6f8 = FVar20;
      if (pTVar25->ArrayNum != (int)uVar19) {
        local_6ff[0] = 0;
        `TCheckedPointerIterator<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,FPhysScene_Chaos::FDeferredKinematicUpdateInfo>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_6ff);
      }
      FVar5 = local_6a8;
      if (FVar20 == (FName)pFVar23) {
        if (0 < local_458.ArrayNum) {
          FVar16 = (ForElementType<IPhysicsProxyBase_*>)&local_458;
          if (local_458.AllocatorInstance.SecondaryData != (ForElementType<IPhysicsProxyBase_*>)0x0)
          {
            FVar16 = local_458.AllocatorInstance.SecondaryData;
          }
          lVar17 = *(longlong *)(*(longlong *)FVar16 + 8);
          SRWLock = (PSRWLOCK)0x0;
          if (Chaos::CVars::bEnableAsyncInitBody != false) {
            SRWLock = (PSRWLOCK)(lVar17 + 0x1a0);
          }
          if (SRWLock == (PSRWLOCK)0x0) {
            Chaos::FDirtySet::
            AddMultipleUnsafe<TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_>
                      ((FDirtySet *)(*(longlong *)(lVar17 + 0xc0) + 0x160),&local_458);
          }
          else {
            AcquireSRWLockExclusive(SRWLock);
            Chaos::FDirtySet::
            AddMultipleUnsafe<TArray<IPhysicsProxyBase_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_>
                      ((FDirtySet *)(*(longlong *)(lVar17 + 0xc0) + 0x160),&local_458);
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
        pFVar6 = local_6a0;
        local_5f0 = &local_568;
        local_5e8 = &local_248;
        local_5f8 = local_6a0;
        local_5e0 = &local_6d8;
        local_610 = &local_5f8;
        local_618 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPhysScene_Chaos::UpdateKinematicsOnDeferredSkelMeshes'::__l89::<lambda_1>,void,int>
                    ::Call;
        Chaos::PhysicsParallelFor
                  ((local_6a0->DeferredKinematicUpdateSkelMeshes).ArrayNum,
                   (TFunctionRef<void___cdecl(int)> *)&local_618,false);
        while (puVar12 = local_6d0, puVar22 = (undefined8 *)*local_6d0, puVar22 != (undefined8 *)0x0
              ) {
          local_5b0 = (FBodyInstance *)puVar22[1];
          TStack_5a8._s_0.X = (double)puVar22[2];
          TStack_5a8._s_0.Y = (double)puVar22[3];
          TStack_5a8._s_0.Z = (double)puVar22[4];
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          puVar22[4] = 0;
          local_590 = 0;
          uStack_588 = 0;
          local_580 = 0;
          uStack_578 = 0;
          local_6d0 = puVar22;
          ::operator_delete(puVar12,0x28);
          FBodyInstance::UpdateBodyScale(local_5b0,(TVector<double> *)&TStack_5a8._s_0,false);
        }
        if (GKinematicDeferralUpdateExternalAccelerationStructure != false) {
          FChaosScene::CopySolverAccelerationStructure((FChaosScene *)pFVar6);
        }
        iVar9 = local_40;
        local_608.DataPtr = (FSingleParticlePhysicsProxy **)&local_248;
        if (local_248.SecondaryData != (ForElementType<Chaos::FSingleParticlePhysicsProxy_*>)0x0) {
          local_608.DataPtr = (FSingleParticlePhysicsProxy **)local_248.SecondaryData;
        }
        if ((local_40 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_608.ArrayNum = iVar9;
        FChaosScene::UpdateActorsInAccelerationStructure((FChaosScene *)pFVar6,&local_608);
        pTVar25->ArrayNum = 0;
        puVar22 = local_6d0;
        if (pTVar25->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&pTVar25->AllocatorInstance,0,&pTVar25->ArrayMax);
          puVar22 = local_6d0;
        }
        while (puVar22 != (undefined8 *)0x0) {
          local_6d0 = (undefined8 *)*puVar22;
          ::operator_delete(puVar22,0x28);
          puVar22 = local_6d0;
        }
        local_6d0 = puVar22;
        if (local_458.AllocatorInstance.SecondaryData != (ForElementType<IPhysicsProxyBase_*>)0x0) {
          FMemory::Free((void *)local_458.AllocatorInstance.SecondaryData);
        }
        if (local_248.SecondaryData != (ForElementType<Chaos::FSingleParticlePhysicsProxy_*>)0x0) {
          FMemory::Free((void *)local_248.SecondaryData);
        }
        if (local_568.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_568.SecondaryData);
        }
        if (bVar4) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar3) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar7) {
          FThreadStats::AddMessage(FVar5,CycleScopeEnd);
        }
        return;
      }
      this_01 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)FVar20);
      if (this_01 != (USkeletalMeshComponent *)0x0) break;
LAB_1482bc6ed:
      uVar19 = (ulonglong)local_6f0;
      FVar20 = (FName)&((FWeakObjectPtr *)((longlong)FVar20 + 8))->ObjectSerialNumber;
    }
    if (!(bool)this_01->bEnablePerPolyCollision) {
      local_670 = (longlong)(this_01->Bodies).ArrayNum;
      uVar24 = 0;
      lVar17 = 0;
      pFVar23 = local_6b0;
      pTVar25 = local_6b8;
      if (0 < local_670) {
        do {
          uVar21 = 0;
          if ((int)uVar24 < (this_01->Bodies).ArrayNum) {
            uVar21 = ~uVar24 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_00 = *(FBodyInstance **)((this_01->Bodies).AllocatorInstance.Data + lVar17 * 8);
          uVar21 = (uint)puVar22;
          if ((GKinematicDeferralCheckValidBodies == false) ||
             ((this_00 != (FBodyInstance *)0x0 &&
              (bVar8 = FBodyInstance::IsValidBodyInstance(this_00), bVar8)))) {
            pFVar15 = FBodyInstance::GetPhysicsActor(this_00);
            if (GKinematicDeferralCheckValidBodies == false) {
LAB_1482bc47f:
              bVar8 = false;
            }
            else {
              if (pFVar15 != (FSingleParticlePhysicsProxy *)0x0) {
                local_688 = (TReferenceControllerBase<1> *)pFVar15->_padding_;
                puVar22 = (undefined8 *)(ulonglong)(uVar21 | 4);
                lVar1 = pFVar15->_padding_;
                if (local_688 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_688->SharedReferenceCount =
                       (atomic<int>)((int)local_688->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if (lVar1 != 0) {
                  if ((pFVar15->_padding_ == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(char *)pFVar15->_padding_ == '\0') goto LAB_1482bc47f;
                }
              }
              bVar8 = true;
            }
            if (((ulonglong)puVar22 & 4) != 0) {
              puVar22 = (undefined8 *)(ulonglong)((uint)puVar22 & 0xfffffffb);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_688);
            }
            if (bVar8) {
              if ((GKinematicDeferralLogInvalidBodies != false) && (2 < (byte)LogChaos._0_1_)) {
                if (this_01->_padding_ == 0) {
                  uVar21 = (uint)puVar22 | 0x10;
                  ::FString::FString(&local_5c0,"None");
                }
                else {
                  local_680 = *(FName *)(this_01->_padding_ + 0x18);
                  uVar21 = (uint)puVar22 | 8;
                  ::FName::ToString(&local_680,&local_628);
                }
                puVar22 = (undefined8 *)(ulonglong)uVar21;
                local_678 = (FName)this_01->_padding_;
                ::FName::ToString(&local_678,&local_648);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
                if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_648.Data.AllocatorInstance.Data);
                }
                if (((uVar21 & 0x10) != 0) &&
                   (puVar22 = (undefined8 *)(ulonglong)(uVar21 & 0xffffffef),
                   local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
                }
                if ((((ulonglong)puVar22 & 8) != 0) &&
                   (puVar22 = (undefined8 *)(ulonglong)((uint)puVar22 & 0xfffffff7),
                   local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_628.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              bVar8 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics
                                ((FBodyInstanceCore *)this_00);
              if (((((!bVar8) || (bVar8 = FBodyInstance::IsValidBodyInstance(this_00), !bVar8)) ||
                   ((char)((FWeakObjectPtr *)((longlong)local_6f8 + 8))->ObjectIndex != '\0')) &&
                  ((this_00->InstanceBoneIndex != -1 &&
                   (local_6e8[0] = pFVar15, pFVar15 != (FSingleParticlePhysicsProxy *)0x0)))) &&
                 ((int)pFVar15->_padding_ == -1)) {
                FVar16 = (ForElementType<IPhysicsProxyBase_*>)&local_458;
                if (local_458.AllocatorInstance.SecondaryData !=
                    (ForElementType<IPhysicsProxyBase_*>)0x0) {
                  FVar16 = local_458.AllocatorInstance.SecondaryData;
                }
                if ((ulonglong)FVar16 <= local_6e8) {
                  FVar16 = (ForElementType<IPhysicsProxyBase_*>)&local_458;
                  if (local_458.AllocatorInstance.SecondaryData !=
                      (ForElementType<IPhysicsProxyBase_*>)0x0) {
                    FVar16 = local_458.AllocatorInstance.SecondaryData;
                  }
                  if ((local_6e8 <
                       (FSingleParticlePhysicsProxy **)
                       ((longlong)FVar16 + (longlong)local_458.ArrayMax * 8)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                iVar9 = local_458.ArrayNum;
                if (local_458.ArrayNum == local_458.ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<IPhysicsProxyBase_*>_>
                                    (0x808,&local_458.AllocatorInstance,&local_458.ArrayMax);
                }
                local_458.ArrayNum = iVar9 + 1;
                FVar16 = (ForElementType<IPhysicsProxyBase_*>)&local_458;
                if (local_458.AllocatorInstance.SecondaryData !=
                    (ForElementType<IPhysicsProxyBase_*>)0x0) {
                  FVar16 = local_458.AllocatorInstance.SecondaryData;
                }
                *(FSingleParticlePhysicsProxy **)((longlong)FVar16 + (longlong)iVar9 * 8) =
                     local_6e8[0];
              }
            }
          }
          else if ((GKinematicDeferralLogInvalidBodies != false) && (2 < (byte)LogChaos._0_1_)) {
            if (this_01->_padding_ == 0) {
              uVar21 = uVar21 | 2;
              ::FString::FString(&local_5d0,"None");
            }
            else {
              local_668 = *(FName *)(this_01->_padding_ + 0x18);
              uVar21 = uVar21 | 1;
              ::FName::ToString(&local_668,&local_638);
            }
            puVar22 = (undefined8 *)(ulonglong)uVar21;
            local_660 = (FName)this_01->_padding_;
            ::FName::ToString(&local_660,&local_658);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
            if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_658.Data.AllocatorInstance.Data);
            }
            if (((uVar21 & 2) != 0) &&
               (puVar22 = (undefined8 *)(ulonglong)(uVar21 & 0xfffffffd),
               local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
            }
            if ((((ulonglong)puVar22 & 1) != 0) &&
               (puVar22 = (undefined8 *)(ulonglong)((uint)puVar22 & 0xfffffffe),
               local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_638.Data.AllocatorInstance.Data);
            }
          }
          uVar24 = uVar24 + 1;
          lVar17 = lVar17 + 1;
          FVar20 = local_6f8;
          pFVar23 = local_6b0;
          pTVar25 = local_6b8;
        } while (lVar17 < local_670);
      }
      goto LAB_1482bc6ed;
    }
    USkeletalMeshComponent::UpdateKinematicBonesToAnim
              (this_01,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                       (&this_01->_padding_ + (longlong)(int)this_01->_padding_ * 2),
               (ETeleportType)((FWeakObjectPtr *)((longlong)FVar20 + 8))->ObjectIndex,
               *(bool *)((longlong)&((FWeakObjectPtr *)((longlong)FVar20 + 8))->ObjectIndex + 1),
               DisallowDeferral);
    uVar19 = (ulonglong)local_6f0;
    FVar20 = (FName)&((FWeakObjectPtr *)((longlong)FVar20 + 8))->ObjectSerialNumber;
  } while( true );
}

// ExecApexVis @ 148300640

bool __thiscall
FPhysScene_Chaos::ExecApexVis
          (FPhysScene_Chaos *this,uint param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// ExecPxVis @ 1483006f0

bool __thiscall
FPhysScene_Chaos::ExecPxVis
          (FPhysScene_Chaos *this,uint param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

