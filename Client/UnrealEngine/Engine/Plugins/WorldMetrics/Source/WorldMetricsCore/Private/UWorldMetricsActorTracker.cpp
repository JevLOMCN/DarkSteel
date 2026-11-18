// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 18

// StaticClass @ 14f130700

UClass * __cdecl UWorldMetricsActorTracker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsActorTracker",
               &Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton,
               StaticRegisterNativesUWorldMetricsActorTracker,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWorldMetricsActorTracker>,
               InternalVTableHelperCtorCaller<UWorldMetricsActorTracker>,local_res8,
               UWorldMetricsExtension::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton;
}

// UWorldMetricsActorTracker @ 14f133230

UWorldMetricsActorTracker * __thiscall
UWorldMetricsActorTracker::UWorldMetricsActorTracker
          (UWorldMetricsActorTracker *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldMetricsActorTracker__6B_;
  (this->ActorAddedToWorldHandle).ID = 0;
  (this->ActorRemovedFromWorldHandle).ID = 0;
  (this->Subscribers).AllocatorInstance.SecondaryData =
       (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0;
  (this->Subscribers).ArrayNum = 0;
  (this->Subscribers).ArrayMax = 0x10;
  this->bIsEnabled = false;
  return this;
}

// UWorldMetricsActorTracker @ 14f133280

UWorldMetricsActorTracker * __thiscall
UWorldMetricsActorTracker::UWorldMetricsActorTracker
          (UWorldMetricsActorTracker *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldMetricsActorTracker__6B_;
  (this->ActorAddedToWorldHandle).ID = 0;
  (this->ActorRemovedFromWorldHandle).ID = 0;
  (this->Subscribers).AllocatorInstance.SecondaryData =
       (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0;
  (this->Subscribers).ArrayNum = 0;
  (this->Subscribers).ArrayMax = 0x10;
  this->bIsEnabled = false;
  return this;
}

// ~UWorldMetricsActorTracker @ 14f133690

void __thiscall
UWorldMetricsActorTracker::~UWorldMetricsActorTracker(UWorldMetricsActorTracker *this)

{
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar1;
  
  this->_padding_ = (longlong)&___7UWorldMetricsActorTracker__6B_;
  FVar1 = (this->Subscribers).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7UWorldMetricsExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14f1337a0

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
`UWorldMetricsActorTracker::BindWorldCallbacks'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId102,"UWorldMetricsActorTracker::NotifyOnActorAdded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId102);
  }
  iVar2 = *(int *)(lVar3 + 0xc0);
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  if (*(undefined8 **)(lVar3 + 0xb8) == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(lVar3 + 0x38);
  }
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0xc0) != iVar2) {
      `TCheckedPointerIterator<IWorldMetricsActorTrackerSubscriber_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    (**(code **)(*(longlong *)*puVar4 + 0x10))((longlong *)*puVar4,param_1);
    puVar4 = puVar4 + 1;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14f1339b0

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
`UWorldMetricsActorTracker::BindWorldCallbacks'::__l2::<lambda_2>::operator()
          (void *this,AActor *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId112,"UWorldMetricsActorTracker::NotifyOnActorRemoved",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
               ,0x70);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId112);
  }
  iVar2 = *(int *)(lVar3 + 0xc0);
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  if (*(undefined8 **)(lVar3 + 0xb8) == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(lVar3 + 0x38);
  }
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0xc0) != iVar2) {
      `TCheckedPointerIterator<IWorldMetricsActorTrackerSubscriber_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    (**(code **)(*(longlong *)*puVar4 + 0x18))((longlong *)*puVar4,param_1);
    puVar4 = puVar4 + 1;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BindWorldCallbacks @ 14f134f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldMetricsActorTracker::BindWorldCallbacks(UWorldMetricsActorTracker *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FDelegateHandle FVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  FDelegateAllocation local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pUVar3 = UObject::GetWorld((UObject *)this);
  if (pUVar3 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = UObject::GetWorld((UObject *)this);
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_68);
  local_50 = &local_c0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_*),FDefaultDelegateUserPolicy,`UWorldMetricsActorTracker::BindWorldCallbacks'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  FVar6 = UWorld::AddOnPostRegisterAllActorComponentsHandler
                    (pUVar3,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                            &stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->ActorAddedToWorldHandle).ID = *FVar6.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_98);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  pUVar3 = UObject::GetWorld((UObject *)this);
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_48);
  local_30 = &local_a8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_*),FDefaultDelegateUserPolicy,`UWorldMetricsActorTracker::BindWorldCallbacks'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  FVar6 = UWorld::AddOnPreUnregisterAllActorComponentsHandler
                    (pUVar3,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                            &stack0x00000010);
                    /* WARNING: Load size is inaccurate */
  (this->ActorRemovedFromWorldHandle).ID = *FVar6.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_80);
  if ((local_a8.DelegateSize != 0) &&
     (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a8,0,0,0x10);
    local_a8.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  return;
}

// Deinitialize @ 14f135b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldMetricsActorTracker::Deinitialize(UWorldMetricsActorTracker *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  if (4 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
  }
  pUVar4 = UObject::GetWorld((UObject *)this);
  if (pUVar4 == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
                       ,0x2f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = UObject::GetWorld((UObject *)this);
  UWorld::RemoveOnPostRegisterAllActorComponentsHandler
            (pUVar4,(FDelegateHandle)(this->ActorAddedToWorldHandle).ID);
  (this->ActorAddedToWorldHandle).ID = 0;
  pUVar4 = UObject::GetWorld((UObject *)this);
  UWorld::RemoveOnPreUnregisterAllActorComponentsHandler
            (pUVar4,(FDelegateHandle)(this->ActorRemovedFromWorldHandle).ID);
  (this->ActorRemovedFromWorldHandle).ID = 0;
  piVar1 = &(this->Subscribers).ArrayMax;
  (this->Subscribers).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<IWorldMetricsActorTrackerSubscriber_*>_>
              (8,8,0,&(this->Subscribers).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetAllocatedSize @ 14f1368e0

ulong64 __thiscall UWorldMetricsActorTracker::GetAllocatedSize(UWorldMetricsActorTracker *this)

{
  uint uVar1;
  
  uVar1 = (this->Subscribers).ArrayMax;
  if (0x10 < uVar1) {
    return (longlong)(int)uVar1 << 3;
  }
  return 0;
}

// GetPrivateStaticClass @ 14f136d60

UClass * __cdecl UWorldMetricsActorTracker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsActorTracker",
               &Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton,
               StaticRegisterNativesUWorldMetricsActorTracker,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWorldMetricsActorTracker>,
               InternalVTableHelperCtorCaller<UWorldMetricsActorTracker>,local_res8,
               UWorldMetricsExtension::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton;
}

// Initialize @ 14f1372d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWorldMetricsActorTracker::Initialize(UWorldMetricsActorTracker *this)

{
  if (4 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
  }
  BindWorldCallbacks(this);
  return;
}

// NotifyExistingActors @ 14f1374d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldMetricsActorTracker::NotifyExistingActors
          (UWorldMetricsActorTracker *this,IWorldMetricsActorTrackerSubscriber *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  UWorld *this_00;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId81,"UWorldMetricsActorTracker::NotifyExistingActors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
               ,0x51);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId81);
  }
  if ((param_1 == (IWorldMetricsActorTrackerSubscriber *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Subscriber",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
                         ,0x53,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = UObject::GetWorld((UObject *)this);
  if ((this_00 == (UWorld *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
                         ,0x56,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = UWorld::GetLevels(this_00);
  pFVar10 = (pTVar8->AllocatorInstance).Data;
  iVar3 = pTVar8->ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if (pTVar8->ArrayNum != iVar3) {
      `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar10 == pFVar1) break;
    lVar5 = *(longlong *)pFVar10;
    plVar9 = *(longlong **)(lVar5 + 0xa0);
    iVar4 = *(int *)(lVar5 + 0xa8);
    plVar2 = plVar9 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0xa8) != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (plVar9 == plVar2) break;
      if ((*plVar9 != 0) && (*(char *)(*plVar9 + 0x5c) < '\0')) {
        (**(code **)((longlong)*param_1 + 0x10))(param_1);
      }
      plVar9 = plVar9 + 1;
    }
    pFVar10 = pFVar10 + 8;
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// NotifyOnActorAdded @ 14f137650

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
UWorldMetricsActorTracker::NotifyOnActorAdded(UWorldMetricsActorTracker *this,AActor *param_1)

{
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar1;
  int iVar2;
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId102,"UWorldMetricsActorTracker::NotifyOnActorAdded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId102);
  }
  FVar3 = (this->Subscribers).AllocatorInstance.SecondaryData;
  iVar2 = (this->Subscribers).ArrayNum;
  if (FVar3 == (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
    FVar3 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)&this->Subscribers;
  }
  FVar1 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)
          ((longlong)FVar3 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->Subscribers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IWorldMetricsActorTrackerSubscriber_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar3 == FVar1) break;
    (**(code **)(**(longlong **)FVar3 + 0x10))(*(longlong **)FVar3,param_1);
    FVar3 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)((longlong)FVar3 + 8);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// NotifyOnActorRemoved @ 14f137730

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
UWorldMetricsActorTracker::NotifyOnActorRemoved(UWorldMetricsActorTracker *this,AActor *param_1)

{
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar1;
  int iVar2;
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId112,"UWorldMetricsActorTracker::NotifyOnActorRemoved",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
               ,0x70);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId112);
  }
  FVar3 = (this->Subscribers).AllocatorInstance.SecondaryData;
  iVar2 = (this->Subscribers).ArrayNum;
  if (FVar3 == (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
    FVar3 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)&this->Subscribers;
  }
  FVar1 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)
          ((longlong)FVar3 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->Subscribers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IWorldMetricsActorTrackerSubscriber_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar3 == FVar1) break;
    (**(code **)(**(longlong **)FVar3 + 0x18))(*(longlong **)FVar3,param_1);
    FVar3 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)((longlong)FVar3 + 8);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnAcquire @ 14f137850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldMetricsActorTracker::OnAcquire(UWorldMetricsActorTracker *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  longlong *plVar10;
  UWorld *this_00;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar11;
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if (param_1 != (UObject *)0x0) {
    pUVar9 = UWorldMetricsActorTrackerSubscriber::StaticClass();
    plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar9);
    if (plVar10 != (longlong *)0x0) {
      iVar8 = (this->Subscribers).ArrayNum;
      piVar1 = &(this->Subscribers).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<IWorldMetricsActorTrackerSubscriber_*>_>
                          (0x808,&(this->Subscribers).AllocatorInstance,piVar1);
      }
      (this->Subscribers).ArrayNum = iVar8 + 1;
      FVar12 = (this->Subscribers).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
        FVar12 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)&this->Subscribers;
      }
      *(longlong **)((longlong)FVar12 + (longlong)iVar8 * 8) = plVar10;
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId81,"UWorldMetricsActorTracker::NotifyExistingActors",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
                   ,0x51);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId81);
      }
      this_00 = UObject::GetWorld((UObject *)this);
      if ((this_00 == (UWorld *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
                             ,0x56,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar11 = UWorld::GetLevels(this_00);
      pFVar14 = (pTVar11->AllocatorInstance).Data;
      iVar8 = pTVar11->ArrayNum;
      pFVar2 = pFVar14 + (longlong)iVar8 * 8;
      while( true ) {
        if (pTVar11->ArrayNum != iVar8) {
          `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar14 == pFVar2) break;
        lVar5 = *(longlong *)pFVar14;
        plVar13 = *(longlong **)(lVar5 + 0xa0);
        iVar4 = *(int *)(lVar5 + 0xa8);
        plVar3 = plVar13 + iVar4;
        while( true ) {
          if (*(int *)(lVar5 + 0xa8) != iVar4) {
            `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (plVar13 == plVar3) break;
          if ((*plVar13 != 0) && (*(char *)(*plVar13 + 0x5c) < '\0')) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          plVar13 = plVar13 + 1;
        }
        pFVar14 = pFVar14 + 8;
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  return;
}

// OnRelease @ 14f137a40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UWorldMetricsActorTracker::OnRelease(UWorldMetricsActorTracker *this,UObject *param_1)

{
  UClass *pUVar1;
  IWorldMetricsActorTrackerSubscriber *local_res10 [3];
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UWorldMetricsActorTrackerSubscriber::StaticClass();
    local_res10[0] = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (local_res10[0] != (IWorldMetricsActorTrackerSubscriber *)0x0) {
      TArray<IWorldMetricsActorTrackerSubscriber_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveSwap(&this->Subscribers,local_res10,Default);
      return;
    }
  }
  return;
}

// StaticRegisterNativesUWorldMetricsActorTracker @ 14f139520

void __cdecl UWorldMetricsActorTracker::StaticRegisterNativesUWorldMetricsActorTracker(void)

{
  return;
}

// UnbindWorldCallbacks @ 14f1396b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldMetricsActorTracker::UnbindWorldCallbacks(UWorldMetricsActorTracker *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  pUVar3 = UObject::GetWorld((UObject *)this);
  if (pUVar3 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricsActorTracker.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = UObject::GetWorld((UObject *)this);
  UWorld::RemoveOnPostRegisterAllActorComponentsHandler
            (pUVar3,(FDelegateHandle)(this->ActorAddedToWorldHandle).ID);
  (this->ActorAddedToWorldHandle).ID = 0;
  pUVar3 = UObject::GetWorld((UObject *)this);
  UWorld::RemoveOnPreUnregisterAllActorComponentsHandler
            (pUVar3,(FDelegateHandle)(this->ActorRemovedFromWorldHandle).ID);
  (this->ActorRemovedFromWorldHandle).ID = 0;
  return;
}

