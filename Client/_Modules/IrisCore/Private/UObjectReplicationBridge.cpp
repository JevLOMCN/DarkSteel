// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 157

// StaticClass @ 14425e3d0

UClass * __cdecl UObjectReplicationBridge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ObjectReplicationBridge",
               &Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton,
               StaticRegisterNativesUObjectReplicationBridge,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReplicationBridge>,
               InternalVTableHelperCtorCaller<UObjectReplicationBridge>,local_res8,
               UReplicationBridge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14425e630

bool __cdecl
`UObjectReplicationBridge::UObjectReplicationBridge'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UClass *param_1)

{
  return false;
}

// <lambda_invoker_cdecl> @ 14425e640

bool __cdecl
`UObjectReplicationBridge::UObjectReplicationBridge'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UClass *param_1,UClass *param_2)

{
  return true;
}

// UObjectReplicationBridge @ 144267c80

UObjectReplicationBridge * __thiscall
UObjectReplicationBridge::UObjectReplicationBridge
          (UObjectReplicationBridge *this,FVTableHelper *param_1)

{
  UReplicationBridge::UReplicationBridge((UReplicationBridge *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectReplicationBridge__6B_;
  *(undefined8 *)&this->PreUpdateInstanceFunction = 0;
  *(undefined8 *)&(this->PreUpdateInstanceFunction).field_0x28 = 0;
  *(undefined8 *)&this->ConfigClassPathNameCache = 0;
  *(undefined8 *)&(this->ConfigClassPathNameCache).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigClassPathNameCache).field_0x20 = 0;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x34 = 0;
  *(undefined8 *)&(this->ConfigClassPathNameCache).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x48 = 0;
  this->MaxTickRate = 30.0;
  *(undefined8 *)&this->ClassHierarchyPollPeriodOverrides = 0;
  *(undefined8 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x48 = 0;
  *(undefined8 *)&this->ClassesWithPollPeriodOverride = 0;
  *(undefined8 *)&(this->ClassesWithPollPeriodOverride).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithPollPeriodOverride).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithPollPeriodOverride).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x48 = 0;
  *(undefined8 *)&(this->ClassesWithoutPollPeriodOverride).Elements = 0;
  *(undefined8 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x34 = 0;
  (this->ClassesWithoutPollPeriodOverride).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClassesWithoutPollPeriodOverride).HashSize = 0;
  *(undefined8 *)&this->ClassesWithDynamicFilter = 0;
  *(undefined8 *)&(this->ClassesWithDynamicFilter).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithDynamicFilter).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithDynamicFilter).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x48 = 0;
  *(undefined8 *)&this->ShouldUseDefaultSpatialFilterFunction = 0;
  *(undefined8 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28 = 0;
  *(undefined8 *)&this->ShouldSubclassUseSameFilterFunction = 0;
  *(undefined8 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x28 = 0;
  *(undefined8 *)&this->ClassesWithPrioritizer = 0;
  *(undefined8 *)&(this->ClassesWithPrioritizer).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithPrioritizer).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithPrioritizer).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x48 = 0;
  *(undefined8 *)&this->ClassesWithDeltaCompression = 0;
  *(undefined8 *)&(this->ClassesWithDeltaCompression).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithDeltaCompression).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithDeltaCompression).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x48 = 0;
  *(undefined8 *)&this->ClassesFlaggedCritical = 0;
  *(undefined8 *)&(this->ClassesFlaggedCritical).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesFlaggedCritical).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesFlaggedCritical).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x48 = 0;
  *(undefined8 *)&this->ClassesIrisAsyncLoadingPriority = 0;
  *(undefined8 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x34 = 0;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x48 = 0;
  *(undefined8 *)&this->ClassesWithTypeStats = 0;
  *(undefined8 *)&(this->ClassesWithTypeStats).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithTypeStats).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x34 = 0;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClassesWithTypeStats).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x48 = 0;
  *(undefined8 *)&this->CachedCreationHeaders = 0;
  *(undefined8 *)&(this->CachedCreationHeaders).field_0x8 = 0;
  *(undefined8 *)&(this->CachedCreationHeaders).field_0x20 = 0;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x28 = 0;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x34 = 0;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedCreationHeaders).field_0x40 = 0;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x48 = 0;
  *(undefined8 *)&this->StaticObjectsPendingDestroy = 0;
  *(undefined8 *)&(this->StaticObjectsPendingDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->StaticObjectsPendingDestroy).field_0x20 = 0;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x28 = 0;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x34 = 0;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StaticObjectsPendingDestroy).field_0x40 = 0;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x48 = 0;
  (this->ObjectsWithObjectReferences).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithObjectReferences).Storage.ArrayNum = 0;
  (this->ObjectsWithObjectReferences).Storage.ArrayMax = 0;
  (this->ObjectsWithObjectReferences).BitCount = 0;
  (this->GarbageCollectionAffectedObjects).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GarbageCollectionAffectedObjects).Storage.ArrayNum = 0;
  (this->GarbageCollectionAffectedObjects).Storage.ArrayMax = 0;
  (this->GarbageCollectionAffectedObjects).BitCount = 0;
  (this->DefaultSpatialFilterName).ComparisonIndex = 0;
  (this->DefaultSpatialFilterName).Number = 0;
  (this->OnCustomConditionChangedHandle).ID = 0;
  (this->OnDynamicConditionChangedHandle).ID = 0;
  this->DestructionInfoProtocol = (FReplicationProtocol *)0x0;
  (this->NetObjectFactories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetObjectFactories).ArrayNum = 0;
  (this->NetObjectFactories).ArrayMax = 0;
  this->bHasPollOverrides = false;
  this->bHasDirtyClassesInPollPeriodOverrides = false;
  this->bBlockStartRootObjectReplication = false;
  this->bSuppressCreateInstanceFailedEnsure = false;
  (this->DebugObjectsForcedToStall).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugObjectsForcedToStall).ArrayNum = 0;
  (this->DebugObjectsForcedToStall).ArrayMax = 0;
  *(undefined8 *)&this->ArchetypesAlreadyPrinted = 0;
  *(undefined8 *)&(this->ArchetypesAlreadyPrinted).field_0x8 = 0;
  *(undefined8 *)&(this->ArchetypesAlreadyPrinted).field_0x20 = 0;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x28 = 0;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x2c = 0x80;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x34 = 0;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ArchetypesAlreadyPrinted).field_0x40 = 0;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x48 = 0;
  *(undefined8 *)&(this->WorldLocationOOBWarnings).Elements = 0;
  *(undefined8 *)&(this->WorldLocationOOBWarnings).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WorldLocationOOBWarnings).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->WorldLocationOOBWarnings).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WorldLocationOOBWarnings).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldLocationOOBWarnings).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->WorldLocationOOBWarnings).Elements.field_0x30 = 0xffffffff;
  (this->WorldLocationOOBWarnings).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WorldLocationOOBWarnings).HashSize = 0;
  (this->ClassNamesToIgnoreProtocolMismatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ClassNamesToIgnoreProtocolMismatch).ArrayNum = 0;
  (this->ClassNamesToIgnoreProtocolMismatch).ArrayMax = 0;
  return this;
}

// UObjectReplicationBridge @ 1442680f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObjectReplicationBridge * __thiscall
UObjectReplicationBridge::UObjectReplicationBridge(UObjectReplicationBridge *this)

{
  FFunctionStorage *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  FObjectPollFrequencyLimiter *pFVar4;
  FFunctionStorage *pFVar5;
  TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *pTVar6;
  FObjectPollFrequencyLimiter *pFVar7;
  undefined1 auStack_98 [32];
  code *local_78;
  TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> local_68;
  TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *local_50;
  code *local_48;
  undefined8 uStack_40;
  FFunctionStorage local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UReplicationBridge::UReplicationBridge((UReplicationBridge *)this);
  pFVar7 = (FObjectPollFrequencyLimiter *)0x0;
  this->_padding_ = (longlong)&___7UObjectReplicationBridge__6B_;
  *(undefined8 *)&this->PreUpdateInstanceFunction = 0;
  *(undefined8 *)&(this->PreUpdateInstanceFunction).field_0x28 = 0;
  *(undefined8 *)&this->ConfigClassPathNameCache = 0;
  *(undefined8 *)&(this->ConfigClassPathNameCache).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigClassPathNameCache).field_0x20 = 0;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x34 = 0;
  *(undefined8 *)&(this->ConfigClassPathNameCache).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x48 = 0;
  this->MaxTickRate = 30.0;
  pFVar4 = ::operator_new(0x128);
  if (pFVar4 != (FObjectPollFrequencyLimiter *)0x0) {
    pFVar4->MaxInternalHandle = 0;
    pFVar4->FrameIndex = 0;
    memset(pFVar4->FrameIndexOffsets,0,0x100);
    (pFVar4->FramesBetweenUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->FramesBetweenUpdates).ArrayNum = 0;
    (pFVar4->FramesBetweenUpdates).ArrayMax = 0;
    (pFVar4->FrameCounters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->FrameCounters).ArrayNum = 0;
    (pFVar4->FrameCounters).ArrayMax = 0;
    pFVar7 = pFVar4;
  }
  this->PollFrequencyLimiter = pFVar7;
  *(undefined8 *)&this->ClassHierarchyPollPeriodOverrides = 0;
  *(undefined8 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x48 = 0;
  *(undefined8 *)&this->ClassesWithPollPeriodOverride = 0;
  *(undefined8 *)&(this->ClassesWithPollPeriodOverride).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithPollPeriodOverride).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithPollPeriodOverride).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x48 = 0;
  *(undefined8 *)&(this->ClassesWithoutPollPeriodOverride).Elements = 0;
  *(undefined8 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x34 = 0;
  (this->ClassesWithoutPollPeriodOverride).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClassesWithoutPollPeriodOverride).HashSize = 0;
  *(undefined8 *)&this->ClassesWithDynamicFilter = 0;
  *(undefined8 *)&(this->ClassesWithDynamicFilter).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithDynamicFilter).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithDynamicFilter).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x48 = 0;
  *(undefined8 *)&this->ShouldUseDefaultSpatialFilterFunction = 0;
  *(undefined8 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28 = 0;
  *(undefined8 *)&this->ShouldSubclassUseSameFilterFunction = 0;
  *(undefined8 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x28 = 0;
  *(undefined8 *)&this->ClassesWithPrioritizer = 0;
  *(undefined8 *)&(this->ClassesWithPrioritizer).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithPrioritizer).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithPrioritizer).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x48 = 0;
  *(undefined8 *)&this->ClassesWithDeltaCompression = 0;
  *(undefined8 *)&(this->ClassesWithDeltaCompression).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithDeltaCompression).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithDeltaCompression).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x48 = 0;
  *(undefined8 *)&this->ClassesFlaggedCritical = 0;
  *(undefined8 *)&(this->ClassesFlaggedCritical).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesFlaggedCritical).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesFlaggedCritical).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x48 = 0;
  *(undefined8 *)&this->ClassesIrisAsyncLoadingPriority = 0;
  *(undefined8 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x48 = 0;
  *(undefined8 *)&this->ClassesWithTypeStats = 0;
  *(undefined8 *)&(this->ClassesWithTypeStats).field_0x8 = 0;
  *(undefined8 *)&(this->ClassesWithTypeStats).field_0x20 = 0;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x28 = 0;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x34 = 0;
  *(undefined8 *)&(this->ClassesWithTypeStats).field_0x40 = 0;
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x48 = 0;
  *(undefined8 *)&this->CachedCreationHeaders = 0;
  *(undefined8 *)&(this->CachedCreationHeaders).field_0x8 = 0;
  *(undefined8 *)&(this->CachedCreationHeaders).field_0x20 = 0;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x28 = 0;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x34 = 0;
  *(undefined8 *)&(this->CachedCreationHeaders).field_0x40 = 0;
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x48 = 0;
  *(undefined8 *)&this->StaticObjectsPendingDestroy = 0;
  *(undefined8 *)&(this->StaticObjectsPendingDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->StaticObjectsPendingDestroy).field_0x20 = 0;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x28 = 0;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x34 = 0;
  *(undefined8 *)&(this->StaticObjectsPendingDestroy).field_0x40 = 0;
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x48 = 0;
  (this->ObjectsWithObjectReferences).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectsWithObjectReferences).Storage.ArrayNum = 0;
  (this->ObjectsWithObjectReferences).Storage.ArrayMax = 0;
  (this->ObjectsWithObjectReferences).BitCount = 0;
  (this->GarbageCollectionAffectedObjects).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GarbageCollectionAffectedObjects).Storage.ArrayNum = 0;
  (this->GarbageCollectionAffectedObjects).Storage.ArrayMax = 0;
  (this->GarbageCollectionAffectedObjects).BitCount = 0;
  (this->DefaultSpatialFilterName).ComparisonIndex = 0;
  (this->DefaultSpatialFilterName).Number = 0;
  this->DefaultSpatialFilterHandle = 0;
  (this->OnCustomConditionChangedHandle).ID = 0;
  (this->OnDynamicConditionChangedHandle).ID = 0;
  this->DestructionInfoProtocol = (FReplicationProtocol *)0x0;
  (this->NetObjectFactories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetObjectFactories).ArrayNum = 0;
  (this->NetObjectFactories).ArrayMax = 0;
  this->bHasPollOverrides = false;
  this->bHasDirtyClassesInPollPeriodOverrides = false;
  this->bBlockStartRootObjectReplication = false;
  this->bSuppressCreateInstanceFailedEnsure = false;
  (this->DebugObjectsForcedToStall).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugObjectsForcedToStall).ArrayNum = 0;
  (this->DebugObjectsForcedToStall).ArrayMax = 0;
  *(undefined8 *)&this->ArchetypesAlreadyPrinted = 0;
  *(undefined8 *)&(this->ArchetypesAlreadyPrinted).field_0x8 = 0;
  *(undefined8 *)&(this->ArchetypesAlreadyPrinted).field_0x20 = 0;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x28 = 0;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x2c = 0x80;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x34 = 0;
  *(undefined8 *)&(this->ArchetypesAlreadyPrinted).field_0x40 = 0;
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x48 = 0;
  *(undefined8 *)&(this->WorldLocationOOBWarnings).Elements = 0;
  *(undefined8 *)&(this->WorldLocationOOBWarnings).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WorldLocationOOBWarnings).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->WorldLocationOOBWarnings).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WorldLocationOOBWarnings).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldLocationOOBWarnings).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldLocationOOBWarnings).Elements.field_0x34 = 0;
  (this->WorldLocationOOBWarnings).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_68._padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUClass___Z_0A__0A__Function_Private_Core_UE__6B_;
  (this->WorldLocationOOBWarnings).HashSize = 0;
  local_68.Obj = `UObjectReplicationBridge::UObjectReplicationBridge'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>;
  (this->ClassNamesToIgnoreProtocolMismatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ClassNamesToIgnoreProtocolMismatch).ArrayNum = 0;
  (this->ClassNamesToIgnoreProtocolMismatch).ArrayMax = 0;
  local_50 = (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *)0x0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*),bool,UClass_const_*>::Call;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*),bool,UClass_const_*>::Call;
  local_38.HeapAllocation = (void *)0x0;
  UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0>::
  CloneToEmptyStorage((TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0> *)&local_68,
                      &local_38);
  lVar2 = *(longlong *)&this->ShouldUseDefaultSpatialFilterFunction;
  uVar3 = *(undefined8 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x8;
  pFVar1 = *(FFunctionStorage **)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28;
  *(code **)&this->ShouldUseDefaultSpatialFilterFunction = local_48;
  *(undefined8 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x8 = uStack_40;
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x10 = local_38.InlineAllocation[0];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x11 = local_38.InlineAllocation[1];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x12 = local_38.InlineAllocation[2];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x13 = local_38.InlineAllocation[3];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x14 = local_38.InlineAllocation[4];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x15 = local_38.InlineAllocation[5];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x16 = local_38.InlineAllocation[6];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x17 = local_38.InlineAllocation[7];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x18 = local_38.InlineAllocation[8];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x19 = local_38.InlineAllocation[9];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x1a = local_38.InlineAllocation[10];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x1b = local_38.InlineAllocation[0xb];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x1c = local_38.InlineAllocation[0xc];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x1d = local_38.InlineAllocation[0xd];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x1e = local_38.InlineAllocation[0xe];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x1f = local_38.InlineAllocation[0xf];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x20 = local_38.InlineAllocation[0x10];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x21 = local_38.InlineAllocation[0x11];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x22 = local_38.InlineAllocation[0x12];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x23 = local_38.InlineAllocation[0x13];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x24 = local_38.InlineAllocation[0x14];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x25 = local_38.InlineAllocation[0x15];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x26 = local_38.InlineAllocation[0x16];
  (this->ShouldUseDefaultSpatialFilterFunction).field_0x27 = local_38.InlineAllocation[0x17];
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28 =
       local_38.HeapAllocation._0_4_;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x2c =
       local_38.HeapAllocation._4_4_;
  local_48 = (code *)lVar2;
  uStack_40 = uVar3;
  local_38.InlineAllocation[0] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x10;
  local_38.InlineAllocation[1] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x11;
  local_38.InlineAllocation[2] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x12;
  local_38.InlineAllocation[3] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x13;
  local_38.InlineAllocation[4] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x14;
  local_38.InlineAllocation[5] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x15;
  local_38.InlineAllocation[6] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x16;
  local_38.InlineAllocation[7] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x17;
  local_38.InlineAllocation[8] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x18;
  local_38.InlineAllocation[9] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x19;
  local_38.InlineAllocation[10] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x1a;
  local_38.InlineAllocation[0xb] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x1b;
  local_38.InlineAllocation[0xc] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x1c;
  local_38.InlineAllocation[0xd] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x1d;
  local_38.InlineAllocation[0xe] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x1e;
  local_38.InlineAllocation[0xf] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x1f;
  local_38.InlineAllocation[0x10] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x20;
  local_38.InlineAllocation[0x11] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x21;
  local_38.InlineAllocation[0x12] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x22;
  local_38.InlineAllocation[0x13] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x23;
  local_38.InlineAllocation[0x14] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x24;
  local_38.InlineAllocation[0x15] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x25;
  local_38.InlineAllocation[0x16] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x26;
  local_38.InlineAllocation[0x17] = (this->ShouldUseDefaultSpatialFilterFunction).field_0x27;
  local_38.HeapAllocation = pFVar1;
  if (lVar2 != 0) {
    pFVar5 = &local_38;
    if (pFVar1 != (FFunctionStorage *)0x0) {
      pFVar5 = pFVar1;
    }
    (**(code **)(*(longlong *)pFVar5->InlineAllocation + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    pTVar6 = &local_68;
    if (local_50 != (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *)0x0
       ) {
      pTVar6 = local_50;
    }
    (**(code **)(pTVar6->_padding_ + 0x10))();
  }
  local_50 = (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *)0x0;
  local_68._padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUClass__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_38.HeapAllocation = (void *)0x0;
  local_68.Obj = `UObjectReplicationBridge::UObjectReplicationBridge'::__l2::<lambda_2>::
                 <lambda_invoker_cdecl>;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*,UClass_const_*),bool,UClass_const_*,UClass_const_*>
             ::Call;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*,UClass_const_*),bool,UClass_const_*,UClass_const_*>
             ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0>::CloneToEmptyStorage
            (&local_68,&local_38);
  lVar2 = *(longlong *)&this->ShouldSubclassUseSameFilterFunction;
  uVar3 = *(undefined8 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x8;
  pFVar1 = *(FFunctionStorage **)&(this->ShouldSubclassUseSameFilterFunction).field_0x28;
  *(code **)&this->ShouldSubclassUseSameFilterFunction = local_48;
  *(undefined8 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x8 = uStack_40;
  (this->ShouldSubclassUseSameFilterFunction).field_0x10 = local_38.InlineAllocation[0];
  (this->ShouldSubclassUseSameFilterFunction).field_0x11 = local_38.InlineAllocation[1];
  (this->ShouldSubclassUseSameFilterFunction).field_0x12 = local_38.InlineAllocation[2];
  (this->ShouldSubclassUseSameFilterFunction).field_0x13 = local_38.InlineAllocation[3];
  (this->ShouldSubclassUseSameFilterFunction).field_0x14 = local_38.InlineAllocation[4];
  (this->ShouldSubclassUseSameFilterFunction).field_0x15 = local_38.InlineAllocation[5];
  (this->ShouldSubclassUseSameFilterFunction).field_0x16 = local_38.InlineAllocation[6];
  (this->ShouldSubclassUseSameFilterFunction).field_0x17 = local_38.InlineAllocation[7];
  (this->ShouldSubclassUseSameFilterFunction).field_0x18 = local_38.InlineAllocation[8];
  (this->ShouldSubclassUseSameFilterFunction).field_0x19 = local_38.InlineAllocation[9];
  (this->ShouldSubclassUseSameFilterFunction).field_0x1a = local_38.InlineAllocation[10];
  (this->ShouldSubclassUseSameFilterFunction).field_0x1b = local_38.InlineAllocation[0xb];
  (this->ShouldSubclassUseSameFilterFunction).field_0x1c = local_38.InlineAllocation[0xc];
  (this->ShouldSubclassUseSameFilterFunction).field_0x1d = local_38.InlineAllocation[0xd];
  (this->ShouldSubclassUseSameFilterFunction).field_0x1e = local_38.InlineAllocation[0xe];
  (this->ShouldSubclassUseSameFilterFunction).field_0x1f = local_38.InlineAllocation[0xf];
  (this->ShouldSubclassUseSameFilterFunction).field_0x20 = local_38.InlineAllocation[0x10];
  (this->ShouldSubclassUseSameFilterFunction).field_0x21 = local_38.InlineAllocation[0x11];
  (this->ShouldSubclassUseSameFilterFunction).field_0x22 = local_38.InlineAllocation[0x12];
  (this->ShouldSubclassUseSameFilterFunction).field_0x23 = local_38.InlineAllocation[0x13];
  (this->ShouldSubclassUseSameFilterFunction).field_0x24 = local_38.InlineAllocation[0x14];
  (this->ShouldSubclassUseSameFilterFunction).field_0x25 = local_38.InlineAllocation[0x15];
  (this->ShouldSubclassUseSameFilterFunction).field_0x26 = local_38.InlineAllocation[0x16];
  (this->ShouldSubclassUseSameFilterFunction).field_0x27 = local_38.InlineAllocation[0x17];
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x28 =
       local_38.HeapAllocation._0_4_;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x2c =
       local_38.HeapAllocation._4_4_;
  local_48 = (code *)lVar2;
  uStack_40 = uVar3;
  local_38.InlineAllocation[0] = (this->ShouldSubclassUseSameFilterFunction).field_0x10;
  local_38.InlineAllocation[1] = (this->ShouldSubclassUseSameFilterFunction).field_0x11;
  local_38.InlineAllocation[2] = (this->ShouldSubclassUseSameFilterFunction).field_0x12;
  local_38.InlineAllocation[3] = (this->ShouldSubclassUseSameFilterFunction).field_0x13;
  local_38.InlineAllocation[4] = (this->ShouldSubclassUseSameFilterFunction).field_0x14;
  local_38.InlineAllocation[5] = (this->ShouldSubclassUseSameFilterFunction).field_0x15;
  local_38.InlineAllocation[6] = (this->ShouldSubclassUseSameFilterFunction).field_0x16;
  local_38.InlineAllocation[7] = (this->ShouldSubclassUseSameFilterFunction).field_0x17;
  local_38.InlineAllocation[8] = (this->ShouldSubclassUseSameFilterFunction).field_0x18;
  local_38.InlineAllocation[9] = (this->ShouldSubclassUseSameFilterFunction).field_0x19;
  local_38.InlineAllocation[10] = (this->ShouldSubclassUseSameFilterFunction).field_0x1a;
  local_38.InlineAllocation[0xb] = (this->ShouldSubclassUseSameFilterFunction).field_0x1b;
  local_38.InlineAllocation[0xc] = (this->ShouldSubclassUseSameFilterFunction).field_0x1c;
  local_38.InlineAllocation[0xd] = (this->ShouldSubclassUseSameFilterFunction).field_0x1d;
  local_38.InlineAllocation[0xe] = (this->ShouldSubclassUseSameFilterFunction).field_0x1e;
  local_38.InlineAllocation[0xf] = (this->ShouldSubclassUseSameFilterFunction).field_0x1f;
  local_38.InlineAllocation[0x10] = (this->ShouldSubclassUseSameFilterFunction).field_0x20;
  local_38.InlineAllocation[0x11] = (this->ShouldSubclassUseSameFilterFunction).field_0x21;
  local_38.InlineAllocation[0x12] = (this->ShouldSubclassUseSameFilterFunction).field_0x22;
  local_38.InlineAllocation[0x13] = (this->ShouldSubclassUseSameFilterFunction).field_0x23;
  local_38.InlineAllocation[0x14] = (this->ShouldSubclassUseSameFilterFunction).field_0x24;
  local_38.InlineAllocation[0x15] = (this->ShouldSubclassUseSameFilterFunction).field_0x25;
  local_38.InlineAllocation[0x16] = (this->ShouldSubclassUseSameFilterFunction).field_0x26;
  local_38.InlineAllocation[0x17] = (this->ShouldSubclassUseSameFilterFunction).field_0x27;
  local_38.HeapAllocation = pFVar1;
  if (lVar2 != 0) {
    pFVar5 = &local_38;
    if (pFVar1 != (FFunctionStorage *)0x0) {
      pFVar5 = pFVar1;
    }
    (**(code **)(*(longlong *)pFVar5->InlineAllocation + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    pTVar6 = &local_68;
    if (local_50 != (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *)0x0
       ) {
      pTVar6 = local_50;
    }
    (**(code **)(pTVar6->_padding_ + 0x10))();
  }
  return this;
}

// ~UObjectReplicationBridge @ 1442694c0

void __thiscall UObjectReplicationBridge::~UObjectReplicationBridge(UObjectReplicationBridge *this)

{
  FObjectPollFrequencyLimiter *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  pFVar1 = this->PollFrequencyLimiter;
  this->_padding_ = (longlong)&___7UObjectReplicationBridge__6B_;
  if (pFVar1 != (FObjectPollFrequencyLimiter *)0x0) {
    pFVar2 = (pFVar1->FrameCounters).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->FramesBetweenUpdates).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x128);
  }
  DestructItems<FString,int>
            ((FString *)(this->ClassNamesToIgnoreProtocolMismatch).AllocatorInstance.Data,
             (this->ClassNamesToIgnoreProtocolMismatch).ArrayNum);
  pFVar2 = (this->ClassNamesToIgnoreProtocolMismatch).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->WorldLocationOOBWarnings).HashSize = 0;
  FVar3 = (this->WorldLocationOOBWarnings).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->WorldLocationOOBWarnings).Elements);
  *(undefined4 *)&(this->ArchetypesAlreadyPrinted).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ArchetypesAlreadyPrinted).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ArchetypesAlreadyPrinted);
  pFVar2 = (this->DebugObjectsForcedToStall).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NetObjectFactories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GarbageCollectionAffectedObjects).Storage.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjectsWithObjectReferences).Storage.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x48 = 0;
  pvVar4 = *(void **)&(this->StaticObjectsPendingDestroy).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaticObjectsPendingDestroy);
  *(undefined4 *)&(this->CachedCreationHeaders).field_0x48 = 0;
  pvVar4 = *(void **)&(this->CachedCreationHeaders).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedCreationHeaders);
  *(undefined4 *)&(this->ClassesWithTypeStats).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClassesWithTypeStats).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassesWithTypeStats);
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClassesIrisAsyncLoadingPriority).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_EIrisAsyncLoadingPriority>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EIrisAsyncLoadingPriority>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ClassesIrisAsyncLoadingPriority);
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClassesFlaggedCritical).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassesFlaggedCritical);
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClassesWithDeltaCompression).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassesWithDeltaCompression);
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClassesWithPrioritizer).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassesWithPrioritizer);
  if (*(longlong *)&this->ShouldSubclassUseSameFilterFunction != 0) {
    plVar5 = *(longlong **)&(this->ShouldSubclassUseSameFilterFunction).field_0x28;
    plVar6 = (longlong *)&(this->ShouldSubclassUseSameFilterFunction).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar6 = plVar5;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&this->ShouldUseDefaultSpatialFilterFunction != 0) {
    plVar5 = *(longlong **)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28;
    plVar6 = (longlong *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar6 = plVar5;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClassesWithDynamicFilter).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassesWithDynamicFilter);
  (this->ClassesWithoutPollPeriodOverride).HashSize = 0;
  FVar3 = (this->ClassesWithoutPollPeriodOverride).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ClassesWithoutPollPeriodOverride).Elements);
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClassesWithPollPeriodOverride).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassesWithPollPeriodOverride);
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ClassHierarchyPollPeriodOverrides).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassHierarchyPollPeriodOverrides);
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ConfigClassPathNameCache).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConfigClassPathNameCache);
  if (*(longlong *)&this->PreUpdateInstanceFunction != 0) {
    plVar5 = *(longlong **)&(this->PreUpdateInstanceFunction).field_0x28;
    plVar6 = (longlong *)&(this->PreUpdateInstanceFunction).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar6 = plVar5;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  UReplicationBridge::~UReplicationBridge((UReplicationBridge *)this);
  return;
}

// operator() @ 144269f70

void __thiscall
`UObjectReplicationBridge::InitConditionalPropertyDelegates'::__l2::<lambda_1>::operator()
          (void *this,UObject *param_1,ushort param_2,bool param_3)

{
  UReplicationBridge *this_00;
  bool bVar1;
  uint uVar2;
  FReplicationSystemInternal *pFVar3;
  FNetRefHandle_u_0 local_res8;
  
  this_00 = *(UReplicationBridge **)this;
  UE::Net::Private::FObjectReferenceCache::GetObjectReferenceHandleFromObject
            (this_00->ObjectReferenceCache,(UObject *)&local_res8._s_0,(EGetRefHandleFlags)param_1);
  bVar1 = UReplicationBridge::IsReplicatedHandle(this_00,(FNetRefHandle)local_res8._s_0);
  if ((bVar1) && (local_res8.Value != 0)) {
    pFVar3 = UReplicationSystem::GetReplicationSystemInternal
                       (*(UReplicationSystem **)(*(longlong *)this + 0x28));
    uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (&pFVar3->NetRefHandleManager,(FNetRefHandle)local_res8._s_0);
    UE::Net::Private::FReplicationConditionals::SetPropertyCustomCondition
              (&pFVar3->Conditionals,uVar2,param_1,param_2,param_3);
  }
  return;
}

// operator() @ 14426a020

void __thiscall
`UObjectReplicationBridge::InitConditionalPropertyDelegates'::__l2::<lambda_2>::operator()
          (void *this,UObject *param_1,ushort param_2,ELifetimeCondition param_3)

{
  UReplicationBridge *this_00;
  bool bVar1;
  uint uVar2;
  FReplicationSystemInternal *pFVar3;
  FNetRefHandle_u_0 local_res8;
  
  this_00 = *(UReplicationBridge **)this;
  UE::Net::Private::FObjectReferenceCache::GetObjectReferenceHandleFromObject
            (this_00->ObjectReferenceCache,(UObject *)&local_res8._s_0,(EGetRefHandleFlags)param_1);
  bVar1 = UReplicationBridge::IsReplicatedHandle(this_00,(FNetRefHandle)local_res8._s_0);
  if ((bVar1) && (local_res8.Value != 0)) {
    pFVar3 = UReplicationSystem::GetReplicationSystemInternal
                       (*(UReplicationSystem **)(*(longlong *)this + 0x28));
    uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (&pFVar3->NetRefHandleManager,(FNetRefHandle)local_res8._s_0);
    UE::Net::Private::FReplicationConditionals::SetPropertyDynamicCondition
              (&pFVar3->Conditionals,uVar2,param_1,param_2,param_3);
  }
  return;
}

// AddCreationDependencyLink @ 14426b030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::AddCreationDependencyLink
          (UObjectReplicationBridge *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  bool bVar1;
  FReplicationSystemInternal *pFVar2;
  ForAnyElementType FVar3;
  FString local_28;
  FString local_18;
  
  pFVar2 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  bVar1 = UE::Net::Private::FNetRefHandleManager::AddCreationDependency
                    (&pFVar2->NetRefHandleManager,param_1,param_2);
  if (bVar1) {
    if ((byte)LogIris._0_1_ < 6) {
      return;
    }
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_18,param_1);
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_28,param_2);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogIris._0_1_ < 3) {
      return;
    }
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_28,param_1);
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_18,param_2);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// AddDependentObject @ 14426ba20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::AddDependentObject
          (UObjectReplicationBridge *this,FNetRefHandle param_1,FNetRefHandle param_2,
          EDependentObjectSchedulingHint param_3)

{
  bool bVar1;
  uint uVar2;
  FReplicationSystemInternal *pFVar3;
  ForAnyElementType FVar4;
  FString local_38;
  FString local_28;
  
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  bVar1 = UE::Net::Private::FNetRefHandleManager::AddDependentObject
                    (&pFVar3->NetRefHandleManager,param_1,param_2,param_3);
  if (bVar1) {
    uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (&pFVar3->NetRefHandleManager,param_2);
    UE::Net::Private::FReplicationFiltering::NotifyAddedDependentObject(&pFVar3->Filtering,uVar2);
    if ((byte)LogIris._0_1_ < 6) {
      return;
    }
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_28,param_1);
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_38,param_2);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogIris._0_1_ < 3) {
      return;
    }
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_38,param_1);
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_28,param_2);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return;
}

// AddStaticDestructionInfo @ 14426c5b0

void __thiscall
UObjectReplicationBridge::AddStaticDestructionInfo
          (UObjectReplicationBridge *this,FString *param_1,UObject *param_2,
          FDestructionParameters *param_3)

{
  undefined1 local_res8 [8];
  FNetRefHandle_u_0 local_18;
  uint local_10;
  
  UE::Net::Private::FObjectReferenceCache::GetOrCreateObjectReference
            ((FObjectReferenceCache *)this->_padding_,(FNetObjectReference *)&local_18._s_0,param_1,
             param_2);
  if (((FDestructionParameters *)local_18.Value != (FDestructionParameters *)0x0) ||
     ((local_10 & 0xfffff) != 0)) {
    StoreDestructionInfo(this,(FNetRefHandle)local_res8,(FDestructionParameters *)local_18);
  }
  return;
}

// AssignDynamicFilter @ 14426d830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::AssignDynamicFilter
          (UObjectReplicationBridge *this,UObject *param_1,FRootObjectReplicationParams *param_2,
          FNetRefHandle param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName this_00;
  FName local_78;
  undefined1 local_70 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (!bEnableFilterMappings) {
    return;
  }
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if (param_2->bUseExplicitDynamicFilter != false) {
    if (param_2->ExplicitDynamicFilterName == (FName)0x0) {
      return;
    }
    uVar3 = UReplicationSystem::GetFilterHandle
                      ((UReplicationSystem *)this->_padding_,param_2->ExplicitDynamicFilterName);
    if ((byte)LogIris._0_1_ < 2) {
      if (uVar3 != 0) goto LAB_14426d992;
    }
    else {
      if (uVar3 != 0) goto LAB_14426d992;
      ::FName::ToString(&param_2->ExplicitDynamicFilterName,&local_58);
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_68,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3515033580445106996>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                       ,0x334,"FilterHandle != InvalidNetObjectFilterHandle");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2->bUseClassConfigDynamicFilter == false) {
    return;
  }
  uVar3 = GetDynamicFilter(this,*(UClass **)&param_1->field_0x10,false,&local_78);
  if (uVar3 == 0) {
    return;
  }
LAB_14426d992:
  if (5 < (byte)LogIris._0_1_) {
    ::FName::ToString(&local_78,&local_28);
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              ((FNetRefHandleManager *)this->_padding_,&local_38,param_3);
    this_00 = UReplicationSystem::GetFilterName
                        ((UReplicationSystem *)this->_padding_,(uint)local_70);
    ::FName::ToString((FName *)this_00,&local_48);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  UReplicationSystem::SetFilter((UReplicationSystem *)this->_padding_,param_3,uVar3,local_78);
  return;
}

// BuildPollList @ 14426ead0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::BuildPollList(UObjectReplicationBridge *this,FNetBitArrayView *param_1)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FReplicationSystemInternal *pFVar9;
  uint *puVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  FNetRefHandleManager *pFVar16;
  FNetBitArrayView *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint local_res18;
  uint local_res20;
  uint local_1d0;
  FNetBitArrayView local_1c8;
  FScriptContainerElement *local_1b8;
  undefined1 local_1b0 [12];
  uint local_1a4;
  uint local_1a0;
  FScriptContainerElement *local_198;
  ForAnyElementType local_190;
  uint local_188;
  int local_184;
  uint local_180;
  uint *local_178;
  FNetBitArrayView local_170;
  undefined1 local_160 [12];
  uint local_154;
  ForAnyElementType local_150;
  int local_148;
  int local_144;
  uint local_140;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  uint local_128;
  FNetRefHandleManager *local_120;
  FReplicationSystemInternal *local_118;
  FNetBitArrayView local_110;
  ulonglong local_100;
  FNetBitArrayView local_f8;
  FNetBitArrayView local_e8;
  FNetBitArrayView local_d8;
  FNetBitArrayView local_c8;
  <lambda_2> local_b8;
  FNetBitArrayView local_a8;
  FNetBitArrayView local_98;
  FNetBitArrayView *local_88;
  uint local_80;
  TArrayView<unsigned_int_const_,int> local_78;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1682,"UObjectReplicationBridge_BuildPollList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x692);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1682);
  }
  pFVar9 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  local_118 = pFVar9;
  if (((pFVar9->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar16 = &pFVar9->NetRefHandleManager;
  local_120 = pFVar16;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_1c8,
             (uint *)(pFVar9->NetRefHandleManager).RelevantObjectsInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar9->NetRefHandleManager).RelevantObjectsInternalIndices.BitCount);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_d8,
             (uint *)(pFVar9->NetRefHandleManager).WantToBeDormantInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar9->NetRefHandleManager).WantToBeDormantInternalIndices.BitCount);
  if (bUseFrequencyBasedPolling == false) {
    if ((((FScriptContainerElement *)param_1->Storage ==
          (FScriptContainerElement *)local_1c8.Storage) || (param_1->BitCount != local_1c8.BitCount)
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x5d8,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_1->WordCount != 0) && (local_1c8.WordCount != 0)) {
      memcpy(param_1->Storage,local_1c8.Storage,(ulonglong)param_1->WordCount << 2);
    }
  }
  else {
    if (bEnableForceNetUpdate == false) {
      UE::Net::FNetBitArrayView::FNetBitArrayView
                (&local_58,
                 (uint *)(pFVar9->DirtyNetObjectTracker).AccumulatedDirtyNetObjects.Storage.
                         AllocatorInstance.Data,
                 (pFVar9->DirtyNetObjectTracker).AccumulatedDirtyNetObjects.BitCount);
      pFVar17 = &local_58;
    }
    else {
      UE::Net::FNetBitArrayView::FNetBitArrayView
                (&local_68,
                 (uint *)(pFVar9->DirtyNetObjectTracker).ForceNetUpdateObjects.Storage.
                         AllocatorInstance.Data,
                 (pFVar9->DirtyNetObjectTracker).ForceNetUpdateObjects.BitCount);
      pFVar17 = &local_68;
    }
    UE::Net::Private::FObjectPollFrequencyLimiter::Update
              (this->PollFrequencyLimiter,&local_1c8,pFVar17,param_1);
  }
  uVar19 = 0;
  local_100 = 0;
  if (bUseDormancyToFilterPolling != false) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1715,"BuildPollList_Dormancy",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                 ,0x6b3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1715);
    }
    if (((param_1->Storage == local_d8.Storage) || (param_1->BitCount != local_d8.BitCount)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x64b,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar10 = param_1->Storage;
    if (param_1->WordCount != 0) {
      uVar18 = (ulonglong)param_1->WordCount;
      do {
        uVar8 = *local_d8.Storage;
        local_d8.Storage = local_d8.Storage + 1;
        *puVar10 = *puVar10 & ~uVar8;
        puVar10 = puVar10 + 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_170,
               (uint *)(pFVar9->NetRefHandleManager).DormantObjectsPendingFlushNet.Storage.
                       AllocatorInstance.Data,
               (pFVar9->NetRefHandleManager).DormantObjectsPendingFlushNet.BitCount);
    if (((pFVar9->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyNetObjectTracker.IsInit()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                           ,0x41,
                           L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_a8,
               (uint *)(pFVar9->DirtyNetObjectTracker).ForceNetUpdateObjects.Storage.
                       AllocatorInstance.Data,
               (pFVar9->DirtyNetObjectTracker).ForceNetUpdateObjects.BitCount);
    local_res18 = 0;
    if ((local_170.BitCount != local_1c8.BitCount) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("A.GetNumBits() == B.GetNumBits()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x668,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar13 = local_170.WordCount;
    cVar3 = (char)local_170.BitCount;
    uVar8 = local_170.WordCount - 1;
    local_1d0 = 0;
    local_1a0 = 0;
    pFVar11 = (FScriptContainerElement *)local_1c8.Storage;
    pFVar4 = (FScriptContainerElement *)local_170.Storage;
    uVar20 = 0;
    if (local_170.WordCount != 0) {
      do {
        uVar19 = uVar20;
        local_198 = pFVar4;
        local_1b8 = pFVar11;
        uVar20 = 0xffffffff;
        if (local_1a0 == uVar8) {
          uVar20 = 0xffffffff >> (-cVar3 & 0x1fU);
        }
        uVar20 = uVar20 & *(uint *)local_198 & *(uint *)local_1b8;
        if (uVar20 != 0) {
          uVar15 = 1;
          uVar21 = local_1d0;
          do {
            if ((uVar20 & 1) != 0) {
              local_178 = param_1->Storage;
              if ((param_1->BitCount <= uVar21) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2a2,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_178[uVar21 >> 5] = local_178[uVar21 >> 5] | uVar15;
              local_178 = local_a8.Storage;
              if ((local_a8.BitCount <= uVar21) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2a2,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_178[uVar21 >> 5] = local_178[uVar21 >> 5] | uVar15;
              uVar19 = local_res18 + 1;
              local_res18 = uVar19;
            }
            uVar21 = uVar21 + 1;
            uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
            uVar20 = uVar20 >> 1;
          } while (uVar20 != 0);
        }
        local_1a0 = local_1a0 + 1;
        local_198 = local_198 + 4;
        local_1b8 = local_1b8 + 4;
        local_1d0 = local_1d0 + 0x20;
        pFVar11 = local_1b8;
        pFVar16 = local_120;
        pFVar4 = local_198;
        pFVar9 = local_118;
        uVar20 = uVar19;
      } while (local_1a0 < uVar13);
    }
    if (((local_170.Storage == local_1c8.Storage) || (local_170.BitCount != local_1c8.BitCount)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x64b,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_170.WordCount != 0) {
      uVar18 = (ulonglong)local_170.WordCount;
      pFVar11 = (FScriptContainerElement *)local_1c8.Storage;
      do {
        uVar8 = *(uint *)pFVar11;
        pFVar11 = pFVar11 + 4;
        *local_170.Storage = *local_170.Storage & ~uVar8;
        local_170.Storage = (uint *)((longlong)local_170.Storage + 4);
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NetTraceNameId_1738 = UE::Net::CreatePersistentNetDebugName(L"FlushDormancyObjectCount",0x18);
      _Init_thread_footer(&::_TSS0);
    }
    uVar8 = FNetTrace::TraceName(NetTraceNameId_1738);
    FNetTrace::TraceFrameStatsCounter(*(uint *)(this->_padding_ + 0x48),uVar8,uVar19);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  uVar19 = 0;
  bVar5 = -1 < CpuChannel->Enabled;
  local_b8.LocalNetRefHandleManager = pFVar16;
  local_b8.ObjectsConsideredForPolling = param_1;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1763,"BuildPollList_PropagatePolling",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x6e3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1763);
  }
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_e8,
             (uint *)(pFVar9->NetRefHandleManager).SubObjectInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar9->NetRefHandleManager).SubObjectInternalIndices.BitCount);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_110,
             (uint *)(pFVar9->DirtyNetObjectTracker).ForceNetUpdateObjects.Storage.AllocatorInstance
                     .Data,(pFVar9->DirtyNetObjectTracker).ForceNetUpdateObjects.BitCount);
  uVar8 = local_1c8.BitCount + 0x1f;
  uVar13 = uVar8 >> 5;
  if (bEnableForceNetUpdate == false) {
    local_138.Data = (FScriptContainerElement *)0x0;
    local_12c = 0;
    local_128 = local_1c8.BitCount;
    local_130 = 0;
    if (uVar8 >> 5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar13,&local_138,0,&local_12c);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&local_138,&local_130,&local_12c);
    local_1a4 = local_128;
    local_1b0._8_4_ = local_128 + 0x1f >> 5;
    local_1b0._0_8_ = (FScriptContainerElement *)&local_1a4;
    if (local_128 != 0) {
      local_1b0._0_8_ = local_138.Data;
    }
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_c8,
               (uint *)(pFVar9->DirtyNetObjectTracker).AccumulatedDirtyNetObjects.Storage.
                       AllocatorInstance.Data,
               (pFVar9->DirtyNetObjectTracker).AccumulatedDirtyNetObjects.BitCount);
    if ((((uint *)local_1b0._0_8_ == local_c8.Storage) || (local_1a4 != local_c8.BitCount)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (First).GetData() && (*this).GetNumBits() == (First).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x644,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((((uint *)local_1b0._0_8_ == local_110.Storage) || (local_1a4 != local_110.BitCount)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Second).GetData() && (*this).GetNumBits() == (Second).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x645,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_1b0._8_4_ != 0) {
      uVar18 = (ulonglong)(uint)local_1b0._8_4_;
      pFVar11 = (FScriptContainerElement *)local_1b0._0_8_;
      do {
        uVar8 = *local_110.Storage;
        local_110.Storage = (uint *)((longlong)local_110.Storage + 4);
        *(uint *)pFVar11 = uVar8 | *local_c8.Storage;
        local_c8.Storage = (uint *)((longlong)local_c8.Storage + 4);
        uVar18 = uVar18 - 1;
        pFVar11 = pFVar11 + 4;
      } while (uVar18 != 0);
    }
    if ((((uint *)local_1b0._0_8_ == local_1c8.Storage) || (local_1a4 != local_1c8.BitCount)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x64b,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_1b0._8_4_ != 0) {
      uVar18 = (ulonglong)(uint)local_1b0._8_4_;
      pFVar11 = (FScriptContainerElement *)local_1b0._0_8_;
      do {
        uVar8 = *local_1c8.Storage;
        local_1c8.Storage = (uint *)((longlong)local_1c8.Storage + 4);
        *(uint *)pFVar11 = *(uint *)pFVar11 & uVar8;
        pFVar11 = pFVar11 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    UE::Net::FNetBitArrayView::
    ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::BuildPollList_::__l21::<lambda_2>_&>
              ((FNetBitArrayView *)local_1b0,&local_e8,UE::Net::FNetBitArrayBase::AndOp,&local_b8);
    FVar12.Data = local_138.Data;
  }
  else {
    local_150.Data = (FScriptContainerElement *)0x0;
    local_144 = 0;
    local_140 = local_1c8.BitCount;
    local_148 = 0;
    if (uVar8 >> 5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar13,&local_150,0,&local_144);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&local_150,&local_148,&local_144);
    local_154 = local_140;
    local_160._8_4_ = local_140 + 0x1f >> 5;
    local_160._0_8_ = (FScriptContainerElement *)&local_154;
    if (local_140 != 0) {
      local_160._0_8_ = local_150.Data;
    }
    if ((((uint *)local_160._0_8_ == local_1c8.Storage) || (local_140 != local_1c8.BitCount)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (First).GetData() && (*this).GetNumBits() == (First).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x644,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((((uint *)local_160._0_8_ == local_110.Storage) || (local_154 != local_110.BitCount)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Second).GetData() && (*this).GetNumBits() == (Second).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x645,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_160._8_4_ != 0) {
      uVar18 = (ulonglong)(uint)local_160._8_4_;
      pFVar11 = (FScriptContainerElement *)local_160._0_8_;
      do {
        uVar8 = *local_110.Storage;
        local_110.Storage = (uint *)((longlong)local_110.Storage + 4);
        *(uint *)pFVar11 = *local_1c8.Storage & uVar8;
        local_1c8.Storage = (uint *)((longlong)local_1c8.Storage + 4);
        uVar18 = uVar18 - 1;
        pFVar11 = pFVar11 + 4;
      } while (uVar18 != 0);
    }
    UE::Net::FNetBitArrayView::
    ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::BuildPollList_::__l21::<lambda_2>_&>
              ((FNetBitArrayView *)local_160,&local_e8,UE::Net::FNetBitArrayBase::AndOp,&local_b8);
    FVar12.Data = local_150.Data;
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1797,"BuildPollList_PatchDependentObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x705);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1797);
  }
  local_180 = param_1->BitCount;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_184 = 0;
  local_188 = 0;
  uVar8 = local_180 + 0x1f >> 5;
  if (local_180 + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&local_190,0,&local_184);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar8,&local_190,(int *)&local_188,&local_184);
  if (((local_190.Data == (FScriptContainerElement *)param_1->Storage) ||
      (local_180 != param_1->BitCount)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x528,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_188 != 0) && (param_1->WordCount != 0)) {
    memcpy(local_190.Data,param_1->Storage,(ulonglong)local_188 << 2);
  }
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_98,*(uint **)(this->_padding_ + 0x1b0),*(uint *)(this->_padding_ + 0x1c0));
  UE::Net::FNetBitArrayView::FNetBitArrayView(&local_f8,(uint *)local_190.Data,local_180);
  if ((local_f8.BitCount != local_98.BitCount) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar16 = local_120;
  local_res20 = 0;
  if (local_f8.WordCount != 0) {
    do {
      uVar8 = 0xffffffff;
      if (uVar19 == local_f8.WordCount - 1) {
        uVar8 = 0xffffffff >> (-(char)local_f8.BitCount & 0x1fU);
      }
      local_198 = (FScriptContainerElement *)local_f8.Storage;
      local_1b8 = (FScriptContainerElement *)local_98.Storage;
      uVar13 = local_res20;
      for (uVar8 = uVar8 & *local_98.Storage & *local_f8.Storage; uVar8 != 0; uVar8 = uVar8 >> 1) {
        if ((uVar8 & 1) != 0) {
          local_88 = param_1;
          local_80 = uVar13;
          UE::Net::Private::FNetRefHandleManager::
          ForAllDependentObjectsRecursive<__UObjectReplicationBridge::BuildPollList_::__l28::<lambda_4>::operator()_::__l2::<lambda_1>_>
                    (pFVar16,uVar13,(<lambda_1> *)&local_88);
        }
        uVar13 = uVar13 + 1;
      }
      local_98.Storage = (uint *)(local_1b8 + 4);
      local_f8.Storage = (uint *)(local_198 + 4);
      local_res20 = local_res20 + 0x20;
      uVar19 = uVar19 + 1;
      local_1b8 = (FScriptContainerElement *)local_98.Storage;
      local_198 = (FScriptContainerElement *)local_f8.Storage;
    } while (uVar19 < local_f8.WordCount);
  }
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((param_1->BitCount != local_e8.BitCount) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar19 = param_1->WordCount;
  uVar14 = 0;
  uVar8 = param_1->BitCount;
  local_1b8 = (FScriptContainerElement *)param_1->Storage;
  local_res18 = 0;
  puVar10 = local_e8.Storage;
  uVar18 = uVar14;
  if (uVar19 != 0) {
    do {
      pFVar16 = local_120;
      local_res20 = (uint)uVar18;
      uVar13 = 0xffffffff;
      if ((uint)uVar14 == uVar19 - 1) {
        uVar13 = 0xffffffff >> (-(char)uVar8 & 0x1fU);
      }
      uVar20 = uVar13 & ~*puVar10 & *(uint *)local_1b8;
      uVar13 = (uint)uVar14;
      if (uVar20 != 0) {
        do {
          uVar13 = (uint)uVar18;
          if ((uVar20 & 1) != 0) {
            TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
            ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                          *)&pFVar16->ReplicatedObjectData,uVar13);
            UE::Net::Private::FNetRefHandleManager::GetSubObjects(pFVar16,&local_78,uVar13);
            local_118 = (FReplicationSystemInternal *)
                        (&(((FReplicationProtocolManager *)local_78.DataPtr)->RegisteredProtocols).
                          field_0x0 + (longlong)local_78.ArrayNum * 4);
            pFVar9 = (FReplicationSystemInternal *)local_78.DataPtr;
            if ((FReplicationSystemInternal *)local_78.DataPtr != local_118) {
              do {
                uVar13 = *(uint *)&(pFVar9->ReplicationProtocolManager).RegisteredProtocols;
                puVar1 = param_1->Storage;
                if ((param_1->BitCount <= uVar13) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index < BitCount",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                       ,0x2a2,L""), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar9 = (FReplicationSystemInternal *)
                         &(pFVar9->ReplicationProtocolManager).RegisteredProtocols.field_0x4;
                puVar1[uVar13 >> 5] = puVar1[uVar13 >> 5] | 1 << (uVar13 & 0x1f);
                uVar13 = local_res20;
              } while (pFVar9 != local_118);
            }
          }
          local_res20 = uVar13 + 1;
          uVar18 = (ulonglong)local_res20;
          uVar20 = uVar20 >> 1;
        } while (uVar20 != 0);
        local_res20 = (uint)local_100;
        uVar13 = local_res18;
      }
      local_res18 = uVar13 + 1;
      uVar14 = (ulonglong)local_res18;
      local_1b8 = (FScriptContainerElement *)((longlong)local_1b8 + 4);
      local_100 = (ulonglong)(local_res20 + 0x20);
      puVar10 = puVar10 + 1;
      uVar18 = local_100;
    } while (local_res18 < uVar19);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CacheNetRefHandleCreationInfo @ 14426f880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UObjectReplicationBridge::CacheNetRefHandleCreationInfo
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  FNetRefHandleManager *this_00;
  code *pcVar1;
  TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>
  *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FReplicationProtocol *pFVar6;
  FReplicatedObjectData *pFVar7;
  UNetObjectFactory *this_01;
  TPairInitializer<UE::Net::FNetRefHandle_const_&,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_&&>
  local_res8;
  undefined8 *local_res18;
  TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>
  **local_res20;
  undefined8 *local_58;
  FString local_50;
  TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>
  **local_40;
  undefined8 **local_38;
  
  local_res8.Value =
       (TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>
        *)param_1.field0_0x0;
  pFVar6 = UReplicationSystem::GetReplicationProtocol((UReplicationSystem *)this->_padding_,param_1)
  ;
  pTVar2 = local_res8.Value;
  if (pFVar6 == (FReplicationProtocol *)0x0) {
    return false;
  }
  this_00 = (FNetRefHandleManager *)this->_padding_;
  uVar5 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (this_00,(FNetRefHandle)local_res8.Value);
  if (uVar5 == 0) {
    if (1 < (byte)LogIris._0_1_) {
      if ((pTVar2 == (TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>
                      *)0x0) || (((ulonglong)pTVar2 & 0xffc0000000000000) == 0)) {
        ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    local_res20 = &local_res8.Value;
    `UObjectReplicationBridge::CacheNetRefHandleCreationInfo'::__l8::<lambda_1>::operator()
              (&local_res20);
  }
  else {
    pFVar7 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&this_00->ReplicatedObjectData,uVar5);
    this_01 = GetNetFactory(this,pFVar7->NetFactoryId);
    if ((this_01 == (UNetObjectFactory *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Factory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                           ,0x47a,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UNetObjectFactory::CreateHeader(this_01,(FNetRefHandle)&local_58,(uint)local_res8.Value);
    if (local_58 != (undefined8 *)0x0) {
      local_res18 = local_58;
      local_40 = &local_res8.Value;
      local_38 = &local_res18;
      TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_&&>_>
                ((TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>,0>,FDefaultSetAllocator>
                  *)&this->CachedCreationHeaders,&local_res8,(bool *)&local_40);
      if (local_res18 != (undefined8 *)0x0) {
        (**(code **)*local_res18)(local_res18,1);
      }
      return true;
    }
  }
  return false;
}

// ConvertPollFrequencyIntoFrames @ 1442713b0

uchar __thiscall
UObjectReplicationBridge::ConvertPollFrequencyIntoFrames
          (UObjectReplicationBridge *this,float param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 <= 0.0) {
    return '\0';
  }
  if (param_1 <= __real_3a83126f) {
    param_1 = __real_3a83126f;
  }
  iVar2 = (int)(longlong)(this->MaxTickRate / param_1);
  uVar3 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  uVar4 = 0xff;
  if (uVar3 < 0xff) {
    uVar4 = uVar3;
  }
  uVar1 = '\0';
  if (uVar4 != 0) {
    uVar1 = (uchar)uVar4;
  }
  return uVar1;
}

// CreateDestructionProtocol @ 1442721a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UObjectReplicationBridge::CreateDestructionProtocol(UObjectReplicationBridge *this)

{
  uint uVar1;
  FReplicationSystemInternal *pFVar2;
  FName *pFVar3;
  FReplicationProtocol *this_00;
  undefined1 auStackY_368 [32];
  FCreateReplicationProtocolParameters local_338;
  FName local_328;
  TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_320;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_320.ArrayMax = 0x20;
  local_320.AllocatorInstance.SecondaryData = (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0
  ;
  local_320.ArrayNum = 0;
  uVar1 = UE::Net::Private::FReplicationProtocolManager::CalculateProtocolIdentifier(&local_320);
  local_338.TemplateKey = (UObject *)0x0;
  local_338.bValidateProtocolId = false;
  local_338.bHasTemplateKey = false;
  pFVar2 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  pFVar3 = ::FName::FName(&local_328,"DestructionInfo");
  local_338.TypeStatsIndex =
       UE::Net::Private::FNetTypeStats::GetOrCreateTypeStats(&pFVar2->TypeStats,*pFVar3);
  this_00 = UE::Net::Private::FReplicationProtocolManager::CreateReplicationProtocol
                      ((FReplicationProtocolManager *)this->_padding_,uVar1,&local_320,
                       L"InternalDestructionInfo",&local_338);
  this->DestructionInfoProtocol = this_00;
  UE::Net::FReplicationProtocol::AddRef(this_00);
  if (local_320.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    FMemory::Free((void *)local_320.AllocatorInstance.SecondaryData);
  }
  return;
}

// CreateNetRefHandleFromRemote @ 144272b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FReplicationBridgeCreateNetRefHandleResult * __thiscall
UObjectReplicationBridge::CreateNetRefHandleFromRemote
          (UObjectReplicationBridge *this,
          FReplicationBridgeCreateNetRefHandleResult *__return_storage_ptr__,FNetRefHandle param_1,
          FNetRefHandle param_2,FReplicationBridgeSerializationContext *param_3)

{
  FNetSerializationContext *this_00;
  FNetBitStreamReader *this_01;
  FNetRefHandleManager *this_02;
  code *pcVar1;
  FName FVar2;
  FNetRefHandle_u_0 FVar3;
  UObject *pUVar4;
  UNetObjectFactory *pUVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FReplicationBridgeCreateNetRefHandleResult *pFVar12;
  undefined8 *puVar13;
  FReplicationInstanceProtocol *pFVar14;
  FObjectKey *pFVar15;
  size_t sVar16;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_03;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  UObjectReplicationBridge *pUVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  longlong lVar22;
  FNetRefHandle_u_0 local_res20;
  undefined1 auStackY_618 [32];
  bool local_5e8;
  FLLMScope local_5e4;
  undefined1 local_5e0 [4];
  uint local_5dc;
  uint local_5d8;
  FReplicationProtocol *local_5d0;
  UObjectReplicationBridge *local_5c8;
  uint local_5c0;
  UObject *local_5b8;
  UObject *local_5b0;
  FMemScope local_5a8;
  FScriptContainerElement *local_5a0;
  longlong *local_598;
  FReplicationBridgeSerializationContext *local_590;
  UNetObjectFactory *local_588;
  FReplicationProtocolManager *local_580;
  undefined8 local_578;
  FNetRefHandle_u_0 local_570;
  uint uStack_568;
  undefined4 uStack_564;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FCreateReplicationProtocolParameters local_4f0;
  FString local_4e0;
  FName local_4d0;
  FNetRefHandle_u_0 *local_4c8;
  FName local_4c0;
  FName local_4b8;
  longlong *local_4b0;
  FNetRefHandle_u_0 local_4a8;
  FName local_4a0;
  FString local_498;
  undefined1 local_488;
  undefined1 local_487;
  FReplicationProtocol *local_480;
  FString local_478;
  UObject *local_468;
  UObject *local_460;
  uint local_458;
  FNetRefHandle_u_0 local_450;
  FNetObjectResolveContext *local_448;
  FNetRefHandle_u_0 local_440;
  FDestructionSentinel local_438;
  UObject *local_420;
  longlong *local_418;
  uint local_410;
  FNetRefHandle_u_0 local_408;
  UObjectReplicationBridge *local_400;
  UNetObjectFactory *local_3f8;
  FNetSerializationContext *local_3f0;
  FObjectKey local_3e8;
  void *local_3e0 [2];
  void *local_3d0 [2];
  FString local_3c0;
  void *local_3b0 [2];
  void *local_3a0 [2];
  FString local_390;
  FFragmentRegistrationContext local_380;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_618;
  local_590 = param_3;
  local_res20 = param_2.field0_0x0;
  local_5c8 = this;
  local_570 = (FNetRefHandle_u_0)__return_storage_ptr__;
  FLLMScope::FLLMScope(&local_5e4,LLMTagDeclaration_IrisState.UniqueName,false,None,Default,true);
  local_4d0 = LLMTagDeclaration_IrisState.UniqueName;
  FMemScope::FMemScope(&local_5a8,&local_4d0,true);
  if ((param_3->bIsDestructionInfo != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Context.bIsDestructionInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                         ,0x510,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pFVar12 = (FReplicationBridgeCreateNetRefHandleResult *)(*pcVar1)();
    return pFVar12;
  }
  uVar9 = UE::Net::FNetObjectFactoryRegistry::GetNumBits(7);
  local_5d8 = UE::Net::FNetBitStreamReader::ReadBits
                        (param_3->SerializationContext->BitStreamReader,uVar9 + 1);
  local_588 = GetNetFactory(this,(uchar)local_5d8);
  FVar3 = local_res20;
  FVar2 = UE::Net::GNetError_InvalidValue;
  this_00 = param_3->SerializationContext;
  if (local_588 == (UNetObjectFactory *)0x0) {
    UE::Net::FNetSerializationContext::SetBitStreamOverflow(this_00);
    UE::Net::FNetErrorContext::SetError(&this_00->ErrorContext,FVar2);
    *(undefined8 *)&__return_storage_ptr__->Flags = 0;
    (__return_storage_ptr__->NetRefHandle).field0_0x0.Value = 0;
    FMemScope::~FMemScope(&local_5a8);
    FLLMScope::~FLLMScope(&local_5e4);
    return __return_storage_ptr__;
  }
  this_01 = this_00->BitStreamReader;
  if ((this_01 == (FNetBitStreamReader *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Reader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactory.cpp"
                         ,0x6f,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pFVar12 = (FReplicationBridgeCreateNetRefHandleResult *)(*pcVar1)();
    return pFVar12;
  }
  uVar9 = UE::Net::FNetBitStreamReader::ReadBits(this_01,0x20);
  pUVar5 = local_588;
  local_408 = FVar3;
  local_3f8 = local_588;
  local_400 = local_588->Bridge;
  local_3f0 = this_00;
  (**(code **)(local_588->_padding_ + 800))(local_588,&local_598,&local_408);
  plVar20 = local_598;
  if ((local_598 == (longlong *)0x0) || (this_01->OverflowBitCount != 0)) {
    plVar20 = (longlong *)0x0;
    if (local_598 != (longlong *)0x0) {
      (**(code **)*local_598)(local_598,1);
      *(undefined8 *)&__return_storage_ptr__->Flags = 0;
      (__return_storage_ptr__->NetRefHandle).field0_0x0.Value = 0;
      goto LAB_144273a44;
    }
  }
  else {
    *(uchar *)((longlong)local_598 + 0xc) = pUVar5->FactoryId;
    *(uint *)(local_598 + 1) = uVar9;
    local_4b0 = local_598;
    local_598 = (longlong *)0x0;
    if ((plVar20 != (longlong *)0x0) &&
       (((local_590->SerializationContext->ErrorContext).Error == (FName)0x0 &&
        (bVar6 = UE::Net::FNetSerializationContext::IsBitStreamOverflown
                           (local_590->SerializationContext), !bVar6)))) {
      local_5dc = *(uint *)(plVar20 + 1);
      pUVar19 = local_5c8;
      if (5 < (byte)LogIris._0_1_) {
        if (param_1.field0_0x0 == 0) {
          (**(code **)(*plVar20 + 8))(plVar20,local_3d0);
          if ((local_res20.Value == 0) || ((local_res20.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_550,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_550,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          pUVar19 = local_5c8;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_550.Data.AllocatorInstance.Data);
          }
          if (local_3d0[0] != (void *)0x0) {
            FMemory::Free(local_3d0[0]);
          }
        }
        else {
          puVar13 = (undefined8 *)(**(code **)(*plVar20 + 8))(plVar20,local_3e0);
          if (*(int *)(puVar13 + 1) == 0) {
            local_5d0 = (FReplicationProtocol *)0x15060d16c;
          }
          else {
            local_5d0 = (FReplicationProtocol *)*puVar13;
          }
          if ((ulonglong)param_1.field0_0x0 >> 0x36 == 0) {
            ::FString::PrintfImpl(&local_560,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_560,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          if ((local_res20.Value == 0) || ((local_res20.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_4e0,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_4e0,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          pUVar19 = local_5c8;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
          }
          if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_560.Data.AllocatorInstance.Data);
          }
          if (local_3e0[0] != (void *)0x0) {
            FMemory::Free(local_3e0[0]);
          }
        }
      }
      local_448 = &local_590->SerializationContext->InternalContext->ResolveContext;
      local_450._s_0 = local_res20._s_0;
      local_440 = param_1.field0_0x0;
      (**(code **)(local_588->_padding_ + 0x2b0))(local_588,&local_468);
      local_5b0 = local_468;
      if (local_468 != (UObject *)0x0) {
        local_380.ReplicationStateRegistry =
             (FReplicationStateDescriptorRegistry *)pUVar19->_padding_;
        local_380.ReplicationSystem = (UReplicationSystem *)pUVar19->_padding_;
        local_380.Template = local_460;
        local_380.Fragments.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0;
        local_380.Fragments.ArrayNum = 0;
        local_380.Fragments.ArrayMax = 0x20;
        local_380.MainObjectInstance = local_468;
        local_380.MainObjectDefaultStateSource = (UObject *)0x0;
        local_380.FragmentTraits = CanReceive;
        local_380.bIsAFragmentlessNetObject = false;
        (**(code **)(*(longlong *)local_468 + 0x1f8))(local_468,&local_380);
        if ((((local_380.Fragments.ArrayNum < 1) && (local_380.bIsAFragmentlessNetObject == false))
            && (UE::Net::FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject
                          (local_468,&local_380,None,
                           (TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *)
                           0x0), local_380.Fragments.ArrayNum < 1)) &&
           ((local_380.bIsAFragmentlessNetObject == false &&
            (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3515033580445106346>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                                ,0xaa,"Context.WasRegistered()"), bVar6)))) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FReplicationBridgeCreateNetRefHandleResult *)(*pcVar1)();
          return pFVar12;
        }
        local_5b8 = local_380.MainObjectDefaultStateSource;
        if ((local_380.MainObjectDefaultStateSource == (UObject *)0x0) &&
           (local_5b8 = local_460, local_460 == (UObject *)0x0)) {
          local_5b8 = UObject::GetArchetype(local_468);
        }
        local_580 = (FReplicationProtocolManager *)pUVar19->_padding_;
        pFVar14 = UE::Net::Private::FReplicationProtocolManager::CreateInstanceProtocol
                            (&local_380.Fragments,local_380.FragmentTraits);
        pFVar15 = FObjectKey::FObjectKey(&local_3e8,local_5b8);
        local_5d0 = UE::Net::Private::FReplicationProtocolManager::GetReplicationProtocol
                              (local_580,local_5dc,*pFVar15);
        if (local_5d0 == (FReplicationProtocol *)0x0) {
          local_5e8 = true;
          local_4c0 = *(FName *)(*(longlong *)&local_5b0->field_0x10 + 0x18);
          ::FName::ToString(&local_4c0,&local_520);
          local_5c0 = (pUVar19->ClassNamesToIgnoreProtocolMismatch).ArrayNum;
          uVar17 = (ulonglong)(int)local_5c0;
          if (local_5c0 != 0) {
            pFVar18 = (pUVar19->ClassNamesToIgnoreProtocolMismatch).AllocatorInstance.Data;
            local_5a0 = pFVar18 + uVar17 * 0x10;
            do {
              if ((local_5c8->ClassNamesToIgnoreProtocolMismatch).ArrayNum != (int)uVar17) {
                local_5e0[0] = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_5e0);
              }
              pUVar19 = local_5c8;
              if (pFVar18 == local_5a0) break;
              if (*(int *)(pFVar18 + 8) == 0) {
                local_5d0 = (FReplicationProtocol *)0x15060d16c;
LAB_1442733a0:
                sVar16 = wcslen((wchar_t *)local_5d0);
                iVar10 = ::FString::Find(&local_520,(wchar_t *)local_5d0,(int)sVar16,IgnoreCase,
                                         FromStart,-1);
                if (iVar10 != -1) goto LAB_1442733db;
              }
              else {
                local_5d0 = *(FReplicationProtocol **)pFVar18;
                if (local_5d0 != (FReplicationProtocol *)0x0) goto LAB_1442733a0;
              }
              uVar17 = (ulonglong)local_5c0;
              pFVar18 = pFVar18 + 0x10;
            } while( true );
          }
          goto LAB_1442733e5;
        }
        bVar6 = UE::Net::Private::FReplicationProtocolManager::ValidateReplicationProtocol
                          (local_5d0,&local_380.Fragments,false);
        if (bVar6) goto LAB_144273733;
        goto LAB_144273467;
      }
      if ((byte)LogIris._0_1_ < 3) {
LAB_14427318c:
        if (pUVar19->bSuppressCreateInstanceFailedEnsure == false) {
          local_4c8 = &local_res20;
          `UObjectReplicationBridge::CreateNetRefHandleFromRemote'::__l62::<lambda_1>::operator()
                    (&local_4c8);
        }
      }
      else if (pUVar19->bSuppressCreateInstanceFailedEnsure == false) {
        if (param_1.field0_0x0 == 0) {
          (**(code **)(*plVar20 + 8))(plVar20,local_3a0);
          if ((local_res20.Value == 0) || ((local_res20.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_530,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_530,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_530.Data.AllocatorInstance.Data);
          }
        }
        else {
          (**(code **)(*plVar20 + 8))(plVar20,local_3b0);
          UReplicationBridge::PrintObjectFromNetRefHandle
                    ((UReplicationBridge *)pUVar19,&local_3c0,param_1);
          if ((local_res20.Value == 0) || ((local_res20.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_540,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_540,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_540.Data.AllocatorInstance.Data);
          }
          local_3a0[0] = local_3b0[0];
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
            local_3a0[0] = local_3b0[0];
          }
        }
        if (local_3a0[0] != (void *)0x0) {
          FMemory::Free(local_3a0[0]);
        }
        goto LAB_14427318c;
      }
      *(undefined8 *)&__return_storage_ptr__->Flags = 0;
      (__return_storage_ptr__->NetRefHandle).field0_0x0.Value = 0;
      goto LAB_144273a37;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->Flags = 0;
  (__return_storage_ptr__->NetRefHandle).field0_0x0.Value = 0;
  if (plVar20 == (longlong *)0x0) goto LAB_144273a44;
LAB_144273a37:
  (**(code **)*plVar20)(plVar20,1);
LAB_144273a44:
  FMemScope::~FMemScope(&local_5a8);
  FLLMScope::~FLLMScope(&local_5e4);
  return (FReplicationBridgeCreateNetRefHandleResult *)
         ((FNetRefHandle_u_0)__return_storage_ptr__).Value;
LAB_1442733db:
  local_5e8 = false;
  pUVar19 = local_5c8;
LAB_1442733e5:
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_520.Data.ArrayNum != 0) {
    FVar21.Data = local_520.Data.AllocatorInstance.Data;
  }
  local_4f0.TemplateKey = local_5b8;
  local_4f0.bValidateProtocolId = local_5e8;
  local_4f0.bHasTemplateKey = true;
  local_4f0.TypeStatsIndex = -1;
  local_5d0 = UE::Net::Private::FReplicationProtocolManager::CreateReplicationProtocol
                        (local_580,local_5dc,&local_380.Fragments,(wchar_t *)FVar21.Data,&local_4f0)
  ;
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  if (local_5d0 == (FReplicationProtocol *)0x0) {
LAB_144273467:
    if (1 < (byte)LogIris._0_1_) {
      if (local_5b8 == (UObject *)0x0) {
        ::FString::FString(&local_500,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_5b8,&local_500,(UObject *)0x0);
      }
      local_4b8.ComparisonIndex.Value = *(uint *)&local_5b0->field_0x18;
      local_4b8.Number = *(uint *)&local_5b0->field_0x1c;
      ::FName::ToString(&local_4b8,&local_498);
      local_5a0 = (FScriptContainerElement *)L"";
      if (local_498.Data.ArrayNum != 0) {
        local_5a0 = local_498.Data.AllocatorInstance.Data;
      }
      if ((local_res20.Value == 0) || ((local_res20.Value & 0xffc0000000000000) == 0)) {
        ::FString::PrintfImpl(&local_510,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_510,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_RepBridge__u____150b97a20,
                 (FLogCategoryBase *)&LogIris);
      if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data.AllocatorInstance.Data);
      }
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.Data.AllocatorInstance.Data);
      }
      if (1 < (byte)LogIris._0_1_) {
        UE::Net::Private::ObjectBridgeDebugging::RemoteProtocolMismatchDetected
                  (&pUVar19->ArchetypesAlreadyPrinted,(UReplicationSystem *)pUVar19->_padding_,
                   local_590->ConnectionId,&local_380.Fragments,local_5b8,local_5b0);
      }
    }
    this_03 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              UE::Net::FIrisDelegates::GetCriticalErrorDetectedDelegate();
    local_5a0 = (FScriptContainerElement *)pUVar19->_padding_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_03,
               (FWriteAccessScope *)&local_438);
    this_03->InvocationListLockCount = this_03->InvocationListLockCount + 1;
    bVar6 = false;
    uVar9 = (this_03->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar9) {
      lVar22 = (longlong)(int)uVar9 << 4;
      bVar6 = false;
      do {
        uVar11 = 0;
        if ((int)uVar9 < (this_03->InvocationList).ArrayNum) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FReplicationBridgeCreateNetRefHandleResult *)(*pcVar1)();
          return pFVar12;
        }
        pFVar18 = (this_03->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar18 + lVar22 + 8) == 0) ||
            (plVar20 = *(longlong **)(pFVar18 + lVar22), plVar20 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar20 + 0x68))(), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar22 = lVar22 + -0x10;
        uVar9 = uVar9 - 1;
        plVar20 = local_4b0;
        __return_storage_ptr__ = (FReplicationBridgeCreateNetRefHandleResult *)local_570;
      } while (-1 < (int)uVar9);
    }
    this_03->InvocationListLockCount = this_03->InvocationListLockCount + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_03,false);
    }
    if (local_438.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_438.Accessor,&local_438);
    }
    (**(code **)(local_5c8->_padding_ + 0x360))(local_5c8,local_res20.Value);
LAB_1442736ff:
    *(undefined8 *)((longlong)__return_storage_ptr__ + 8) = 0;
    __return_storage_ptr__->NetRefHandle = 0;
    if (pFVar14 != (FReplicationInstanceProtocol *)0x0) {
      UE::Net::Private::FReplicationProtocolManager::DestroyInstanceProtocol(pFVar14);
    }
  }
  else {
LAB_144273733:
    local_488 = (undefined1)local_5d8;
    local_487 = 0;
    local_480 = local_5d0;
    UReplicationBridge::InternalCreateNetObjectFromRemote
              ((UReplicationBridge *)pUVar19,(FNetRefHandle)&local_4a8,
               (FCreateNetObjectParams *)local_res20);
    pUVar4 = local_5b0;
    pUVar19 = local_5c8;
    if (local_4a8 == 0) goto LAB_1442736ff;
    local_5c0 = local_458;
    uStack_568 = local_458;
    local_578 = 0;
    local_570._s_0 = local_4a8._s_0;
    UReplicationBridge::InternalAttachInstanceToNetRefHandle
              ((UReplicationBridge *)local_5c8,(FNetRefHandle)local_4a8,false,pFVar14,local_5b0,
               (FNetHandle)&local_578);
    local_420 = pUVar4;
    if (5 < (byte)LogIris._0_1_) {
      local_5d8 = local_5d0->ProtocolIdentifier;
      local_4a0.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_4a0.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_4a0,&local_478);
      UReplicationBridge::PrintObjectFromNetRefHandle
                ((UReplicationBridge *)pUVar19,&local_390,(FNetRefHandle)local_4a8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      local_420 = local_5b0;
      if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.Data.AllocatorInstance.Data);
        local_420 = local_5b0;
      }
    }
    if (((local_4a8 != 0) && ((local_570.Value & 1) == 0)) || ((local_5c0 & 4) != 0)) {
      UE::Net::Private::FObjectReferenceCache::BindRemoteReference
                ((FObjectReferenceCache *)pUVar19->_padding_,(FNetRefHandle)local_4a8,local_420);
    }
    local_418 = plVar20;
    local_410 = local_590->ConnectionId;
    (**(code **)(local_588->_padding_ + 0x2b8))(local_588,&local_420);
    if (param_1.field0_0x0 != 0) {
      this_02 = (FNetRefHandleManager *)pUVar19->_padding_;
      if (((((ulonglong)local_4a8 ^ (ulonglong)param_1.field0_0x0) & 0x3fffffffffffff) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RootObjectHandle != SubObjectHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                             ,0x25f,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        pFVar12 = (FReplicationBridgeCreateNetRefHandleResult *)(*pcVar1)();
        return pFVar12;
      }
      uVar9 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_02,param_1);
      local_5d8 = uVar9;
      local_5dc = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                            (this_02,(FNetRefHandle)local_4a8);
      if (uVar9 == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4467568253371153819>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                           ,0x265,"RootObjectInternalIndex != InvalidInternalIndex");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FReplicationBridgeCreateNetRefHandleResult *)(*pcVar1)();
          return pFVar12;
        }
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (local_5dc == 0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4467568253371153818>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                           ,0x266,"SubObjectInternalIndex != InvalidInternalIndex");
        if (bVar7) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FReplicationBridgeCreateNetRefHandleResult *)(*pcVar1)();
          return pFVar12;
        }
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar6) && (bVar7)) {
        if (((ulonglong)param_1.field0_0x0 >> 0x36 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReplicationSystemId != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                               ,0x2b,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FReplicationBridgeCreateNetRefHandleResult *)(*pcVar1)();
          return pFVar12;
        }
        FNetTrace::TraceSubObject
                  ((param_1.field0_0x0._4_4_ >> 0x16) - 1,
                   (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff,
                   (ulonglong)local_4a8 & 0x3fffffffffffff);
        UE::Net::Private::FNetRefHandleManager::InternalAddSubObject
                  (this_02,local_5d8,local_5dc,0,Default);
      }
    }
    (__return_storage_ptr__->NetRefHandle).field0_0x0.Value = (ulong64)local_570;
    *(ulonglong *)&__return_storage_ptr__->Flags = CONCAT44(uStack_564,uStack_568);
  }
  if (local_380.Fragments.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    FMemory::Free((void *)local_380.Fragments.AllocatorInstance.SecondaryData);
  }
  goto LAB_144273a37;
}

// DeinitNetObjectFactories @ 144274ae0

void __thiscall UObjectReplicationBridge::DeinitNetObjectFactories(UObjectReplicationBridge *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->NetObjectFactories).AllocatorInstance.Data;
  iVar3 = (this->NetObjectFactories).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->NetObjectFactories).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UNetObjectFactory>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    plVar4 = *(longlong **)pFVar5;
    (**(code **)(*plVar4 + 0x300))(plVar4);
    pFVar5 = pFVar5 + 8;
    plVar4[5] = 0;
  }
  piVar1 = &(this->NetObjectFactories).ArrayMax;
  (this->NetObjectFactories).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NetObjectFactories).AllocatorInstance,0,piVar1);
  }
  return;
}

// Deinitialize @ 144274b90

void __thiscall UObjectReplicationBridge::Deinitialize(UObjectReplicationBridge *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  FDelegateHandle FVar5;
  FObjectPollFrequencyLimiter *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x468),this);
  pFVar7 = (this->NetObjectFactories).AllocatorInstance.Data;
  iVar3 = (this->NetObjectFactories).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->NetObjectFactories).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UNetObjectFactory>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    plVar4 = *(longlong **)pFVar7;
    (**(code **)(*plVar4 + 0x300))(plVar4);
    pFVar7 = pFVar7 + 8;
    plVar4[5] = 0;
  }
  piVar1 = &(this->NetObjectFactories).ArrayMax;
  (this->NetObjectFactories).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NetObjectFactories).AllocatorInstance,0,piVar1);
  }
  FVar5.ID = (this->OnCustomConditionChangedHandle).ID;
  if (FVar5.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UE::Net::Private::FPropertyConditionDelegates::
                OnPropertyCustomConditionChangedDelegate,FVar5);
  }
  FVar5.ID = (this->OnDynamicConditionChangedHandle).ID;
  if (FVar5.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UE::Net::Private::FPropertyConditionDelegates::
                OnPropertyDynamicConditionChangedDelegate,FVar5);
  }
  pFVar6 = this->PollFrequencyLimiter;
  (this->OnCustomConditionChangedHandle).ID = 0;
  (this->OnDynamicConditionChangedHandle).ID = 0;
  piVar1 = &(pFVar6->FramesBetweenUpdates).ArrayMax;
  (pFVar6->FramesBetweenUpdates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(pFVar6->FramesBetweenUpdates).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(pFVar6->FrameCounters).ArrayMax;
  (pFVar6->FrameCounters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(pFVar6->FrameCounters).AllocatorInstance,0,piVar1);
  }
  if (this->DestructionInfoProtocol != (FReplicationProtocol *)0x0) {
    UE::Net::FReplicationProtocol::Release(this->DestructionInfoProtocol);
    this->DestructionInfoProtocol = (FReplicationProtocol *)0x0;
  }
  UReplicationBridge::Deinitialize((UReplicationBridge *)this);
  return;
}

// DescribeObjectReference @ 144274f70

FString * __thiscall
UObjectReplicationBridge::DescribeObjectReference
          (UObjectReplicationBridge *this,FString *__return_storage_ptr__,
          FNetObjectReference *param_1,FNetObjectResolveContext *param_2)

{
  uint uVar1;
  FObjectReferenceCache *this_00;
  int iVar2;
  wchar_t *pwVar3;
  FNetRefHandle_u_0 local_28;
  ulonglong uStack_20;
  FString local_18;
  
  local_28._s_0 = (param_1->RefHandle).field0_0x0._s_0;
  uStack_20._0_4_ = (param_1->PathToken).field0_0x0;
  uStack_20._4_4_ = param_1->Traits;
  this_00 = (FObjectReferenceCache *)this->_padding_;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  UE::Net::Private::FObjectReferenceCache::GenerateFullPath_r
            (this_00,(FNetRefHandle)local_28,param_2,__return_storage_ptr__);
  if (((uStack_20 & 0xfffff) != 0) &&
     (pwVar3 = UE::Net::FStringTokenStore::ResolveToken
                         (this_00->StringTokenStore,uStack_20._0_4_,
                          param_2->RemoteNetTokenStoreState), pwVar3 != (wchar_t *)0x0)) {
    if (1 < (__return_storage_ptr__->Data).ArrayNum) {
      ::FString::AppendChars(__return_storage_ptr__,L".",1);
    }
    ::FString::FString(&local_18,pwVar3);
    uVar1 = param_2->ConnectionId;
    iVar2 = UE::GetPlayInEditorID();
    if (iVar2 != -1) {
      (**(code **)(this_00->ReplicationBridge->_padding_ + 0x348))
                (this_00->ReplicationBridge,uVar1,&local_18,1);
    }
    ::FString::PrintfImpl((FString *)&local_28._s_0,L"%s");
    iVar2 = (int)uStack_20 + -1;
    if ((int)uStack_20 == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)local_28,iVar2);
    if (local_28.Value != 0) {
      FMemory::Free((void *)local_28);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// DestroyNetObjectFromRemote @ 1442768e0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::DestroyNetObjectFromRemote
          (UObjectReplicationBridge *this,uint param_1,
          EReplicationBridgeDestroyInstanceReason param_2)

{
  FNetRefHandle_u_0_s_0 FVar1;
  FNetRefHandle_u_0 *pFVar2;
  ushort uVar3;
  EReplicationBridgeDestroyInstanceFlags EVar4;
  uint local_res10 [2];
  undefined1 local_28 [16];
  
  if (param_1 != 0) {
    local_res10[0] = param_1;
    pFVar2 = (FNetRefHandle_u_0 *)
             TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)(this->_padding_ + 0x2a0),param_1);
    uVar3 = 0;
    *(ushort *)((longlong)pFVar2 + 0x32) = *(ushort *)((longlong)pFVar2 + 0x32) & 0xfffd;
    if (param_2 == TearOff) {
      uVar3 = 2;
    }
    *(ushort *)((longlong)pFVar2 + 0x32) = *(ushort *)((longlong)pFVar2 + 0x32) | uVar3 | 0x100;
    EVar4 = *(ushort *)((longlong)pFVar2 + 0x32) >> 5 & AllowDestroyInstanceFromRemote;
    if (5 < (byte)LogIris._0_1_) {
      ::LexToString(EVar4);
      ::LexToString(param_2);
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                ((FNetRefHandleManager *)this->_padding_,(FString *)local_28,local_res10[0]);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_28._0_8_);
      }
    }
    FVar1 = pFVar2->_s_0;
    if ((pFVar2->_s_0).Id == 0 && pFVar2->ReplicationSystemId == 0) {
      local_28._8_8_ = local_res10;
      local_28._0_8_ = this;
      `UObjectReplicationBridge::DestroyNetObjectFromRemote'::__l2::<lambda_1>::operator()(local_28)
      ;
    }
    else {
      DetachSubObjectInstancesFromRemote(this,local_res10[0],param_2,EVar4);
      DetachInstanceFromRemote(this,(FNetRefHandle)FVar1,param_2,EVar4,*(uchar *)(pFVar2 + 6));
      UReplicationBridge::InternalDetachInstanceFromNetRefHandle
                ((UReplicationBridge *)this,local_res10[0]);
      UReplicationBridge::InternalDestroyNetObject((UReplicationBridge *)this,(FNetRefHandle)FVar1);
    }
  }
  return;
}

// DetachInstance @ 144277000

void __thiscall
UObjectReplicationBridge::DetachInstance(UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  FNetRefHandle_u_0 local_res10 [3];
  
  local_res10[0] = param_1.field0_0x0;
  UnregisterInstance(this,param_1);
  if (*(int *)&(this->CachedCreationHeaders).field_0x8 !=
      *(int *)&(this->CachedCreationHeaders).field_0x34) {
    TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Net::FNetRefHandle>
              ((TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::FNetObjectCreationHeader_const_,TDefaultDelete<UE::Net::FNetObjectCreationHeader_const_>_>,0>,FDefaultSetAllocator>
                *)&this->CachedCreationHeaders,
               (int)(((ulonglong)param_1.field0_0x0 & 0x3fffffffffffff) >> 0x20) * 0x17 +
               (int)((ulonglong)param_1.field0_0x0 & 0x3fffffffffffff),
               (FNetRefHandle *)&local_res10[0]._s_0);
  }
  UReplicationBridge::DetachInstance((UReplicationBridge *)this,param_1);
  return;
}

// DetachInstanceFromRemote @ 144277070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::DetachInstanceFromRemote
          (UObjectReplicationBridge *this,FNetRefHandle param_1,
          EReplicationBridgeDestroyInstanceReason param_2,
          EReplicationBridgeDestroyInstanceFlags param_3,uchar param_4)

{
  bool bVar1;
  uint uVar2;
  FReplicatedObjectData *pFVar3;
  TObjectPtr<UObject> *pTVar4;
  UNetObjectFactory *pUVar5;
  FNetRefHandle_u_0 local_res10;
  undefined1 local_38 [16];
  UObject *local_28;
  TObjectPtr<UObject>_u_0 local_20;
  EReplicationBridgeDestroyInstanceReason local_18;
  EReplicationBridgeDestroyInstanceFlags local_14;
  
  local_res10 = param_1.field0_0x0;
  if (5 < (byte)LogIris._0_1_) {
    ::LexToString(param_2);
    UReplicationBridge::PrintObjectFromNetRefHandle
              ((UReplicationBridge *)this,(FString *)local_38,(FNetRefHandle)local_res10._s_0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if ((FNetRefHandle_u_0 *)local_38._0_8_ != (FNetRefHandle_u_0 *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_28 = GetObjectFromReferenceHandle(this,(FNetRefHandle)local_res10._s_0);
  local_20.DebugPtr = (UObject *)0x0;
  local_18 = param_2;
  local_14 = param_3;
  if (local_28 != (UObject *)0x0) {
    uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      ((FNetRefHandleManager *)this->_padding_,(FNetRefHandle)local_res10._s_0);
    pFVar3 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectData
                       ((FNetRefHandleManager *)this->_padding_,uVar2);
    uVar2 = pFVar3->SubObjectRootIndex;
    if (uVar2 != 0) {
      pTVar4 = TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                         ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                          (this->_padding_ + 0x300),uVar2);
      local_20.ObjectPtr.field0_0x0 = *(FObjectPtr *)&pTVar4->field0_0x0;
      pFVar3 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectData
                         ((FNetRefHandleManager *)this->_padding_,uVar2);
      pUVar5 = GetNetFactory(this,pFVar3->NetFactoryId);
      if (pUVar5 != (UNetObjectFactory *)0x0) {
        (**(code **)(pUVar5->_padding_ + 0x2e0))(pUVar5,&local_28);
      }
    }
    if (param_4 == 0xff) {
      local_38._0_8_ = &local_res10;
      local_38._8_8_ = &local_28;
      bVar1 = `UObjectReplicationBridge::DetachInstanceFromRemote'::__l31::<lambda_1>::operator()
                        (local_38);
      if (!bVar1) goto LAB_1442771f4;
    }
    pUVar5 = GetNetFactory(this,param_4);
    if (pUVar5 != (UNetObjectFactory *)0x0) {
      (**(code **)(pUVar5->_padding_ + 0x2c8))(pUVar5,&local_28);
    }
  }
LAB_1442771f4:
  UnregisterInstance(this,(FNetRefHandle)local_res10._s_0);
  return;
}

// DetachSubObjectInstancesFromRemote @ 144277360

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::DetachSubObjectInstancesFromRemote
          (UObjectReplicationBridge *this,uint param_1,
          EReplicationBridgeDestroyInstanceReason param_2,
          EReplicationBridgeDestroyInstanceFlags param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNetRefHandle_u_0 *pFVar5;
  ushort uVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  EReplicationBridgeDestroyInstanceReason EVar11;
  EReplicationBridgeDestroyInstanceFlags EVar12;
  
  if (param_1 != 0) {
    lVar1 = this->_padding_;
    piVar10 = (int *)0x0;
    if (*(int *)(lVar1 + 0x338) != *(int *)(lVar1 + 0x364)) {
      lVar8 = *(longlong *)(lVar1 + 0x370);
      if (*(longlong *)(lVar1 + 0x370) == 0) {
        lVar8 = lVar1 + 0x368;
      }
      iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x378) - 1U & param_1) * 4);
      if (iVar4 != -1) {
        do {
          lVar8 = *(longlong *)(lVar1 + 0x330) + (longlong)iVar4 * 0x28;
          if (*(uint *)(*(longlong *)(lVar1 + 0x330) + (longlong)iVar4 * 0x28) == param_1) {
            piVar7 = (int *)(lVar8 + 4);
            if (lVar8 == 0) {
              piVar7 = piVar10;
            }
            if ((piVar7 != (int *)0x0) && (piVar7[1] != -1)) {
              piVar9 = (int *)((longlong)piVar7[1] * 0x30 + *(longlong *)(lVar1 + 0x380));
              iVar4 = piVar9[10];
              piVar7 = *(int **)(piVar9 + 8);
              if (*(int **)(piVar9 + 8) == (int *)0x0) {
                piVar7 = piVar9;
              }
              if ((iVar4 < 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              goto LAB_1442773f3;
            }
            break;
          }
          iVar4 = *(int *)(lVar8 + 0x20);
        } while (iVar4 != -1);
      }
    }
    iVar4 = 0;
    piVar7 = piVar10;
LAB_1442773f3:
    piVar9 = piVar7 + iVar4;
    if (piVar7 != piVar9) {
      if (param_2 == TearOff) {
        piVar10 = (int *)&DAT_00000002;
      }
      do {
        pFVar5 = (FNetRefHandle_u_0 *)
                 TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                 ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                               *)(this->_padding_ + 0x2a0),*piVar7);
        *(ushort *)((longlong)pFVar5 + 0x32) = *(ushort *)((longlong)pFVar5 + 0x32) & 0xfffd;
        *(ushort *)((longlong)pFVar5 + 0x32) =
             *(ushort *)((longlong)pFVar5 + 0x32) | (ushort)piVar10 | 0x100;
        uVar6 = *(ushort *)((longlong)pFVar5 + 0x32) & 0x20;
        EVar12 = param_3 & ~AllowDestroyInstanceFromRemote;
        if (uVar6 != 0) {
          EVar12 = param_3;
        }
        EVar11 = param_2;
        if ((param_2 == DoNotDestroy) && (uVar6 != 0)) {
          EVar12 = EVar12 | AllowDestroyInstanceFromRemote;
          EVar11 = Destroy;
        }
        DetachInstanceFromRemote
                  (this,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar5->_s_0,EVar11,EVar12,
                   *(uchar *)(pFVar5 + 6));
        piVar7 = piVar7 + 1;
      } while (piVar7 != piVar9);
    }
  }
  return;
}

// FinalizeDirtyObjects @ 144277b40

void __thiscall UObjectReplicationBridge::FinalizeDirtyObjects(UObjectReplicationBridge *this)

{
  code *pcVar1;
  bool bVar2;
  FReplicationSystemInternal *pFVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1895,"UObjectReplicationBridge_FinalizeDirtyObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x767);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1895);
  }
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  if (((pFVar3->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Net::Private::FDirtyNetObjectTracker::UpdateAndLockDirtyNetObjects
            (&pFVar3->DirtyNetObjectTracker);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindClassesInPollPeriodOverrides @ 144278310

void __thiscall
UObjectReplicationBridge::FindClassesInPollPeriodOverrides(UObjectReplicationBridge *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *pTVar6;
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  size_t sVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  FName *this_00;
  uint uVar16;
  uint uVar17;
  wchar_t *pwVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  bool bVar23;
  wchar_t *pwVar24;
  undefined1 local_res10 [8];
  int local_res18;
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *local_res20;
  undefined4 uStack_ec;
  UObject *local_e8 [2];
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res20 = &this->ClassHierarchyPollPeriodOverrides;
  bVar23 = false;
  iVar11 = *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
  puVar1 = &(this->ClassHierarchyPollPeriodOverrides).field_0x10;
  iVar19 = 0;
  iVar21 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar11 != 0) {
    puVar22 = *(uint **)&(this->ClassHierarchyPollPeriodOverrides).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar17 = *puVar22;
    while (uVar17 == 0) {
      iVar19 = iVar19 + 1;
      iVar21 = iVar21 + 0x20;
      iVar10 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1442783bc;
      uVar17 = puVar22[iVar19];
    }
    uVar9 = ~(uVar17 - 1) & uVar17;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_res18 = (int)lVar4;
    iVar10 = local_res18 + -1 + iVar21;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_1442783bc:
  uVar17 = *(uint *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
  pwVar24 = L"";
  uVar16 = uVar17 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar9,iVar19);
  TStack_c0.CurrentBitIndex = iVar10;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar17 >> 5;
  TStack_c0._28_4_ = iVar10;
  TStack_c0.BaseBitIndex = iVar21;
  uStack_a0 = CONCAT44(uStack_ec,
                       *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 -
                       *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34);
  local_c8 = local_res20;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_res20;
  uVar9 = *(uint *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
  if (uVar17 != uVar9) {
    puVar3 = *(undefined1 **)&(this->ClassHierarchyPollPeriodOverrides).field_0x20;
    puVar20 = puVar1;
    if (puVar3 != (undefined1 *)0x0) {
      puVar20 = puVar3;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      iVar19 = iVar19 + 1;
      uVar16 = uVar16 + 0x20;
      uVar17 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar19) goto LAB_1442784c1;
      uVar17 = *(uint *)(puVar20 + (longlong)iVar19 * 4);
    }
    uVar2 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar17 = (int)lVar4 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar17) {
      uVar17 = uVar9;
    }
  }
LAB_1442784c1:
  do {
    pTVar7 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar17) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    {
      this->bHasDirtyClassesInPollPeriodOverrides = bVar23;
      return;
    }
    this_00 = (FName *)(*(longlong *)pTVar7 + (longlong)TStack_c0.CurrentBitIndex * 0x1c);
    puVar22 = &this_00[1].Number;
    bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)puVar22);
    if (!bVar8) {
      pFVar12 = ::FName::ToString(this_00,&local_88);
      if ((pFVar12->Data).ArrayNum == 0) {
        local_d8 = (FScriptContainerElement *)0x15060d16c;
LAB_144278538:
        sVar13 = wcslen((wchar_t *)local_d8);
        iVar11 = (int)sVar13;
      }
      else {
        local_d8 = (pFVar12->Data).AllocatorInstance.Data;
        iVar11 = 0;
        if (local_d8 != (FScriptContainerElement *)0x0) goto LAB_144278538;
      }
      iStack_d0 = iVar11;
      pUVar14 = Z_Construct_UClass_UClass_NoRegister();
      local_98._12_4_ = uStack_cc;
      local_98.Size = iStack_d0;
      local_98.DataPtr = (wchar_t *)local_d8;
      pUVar15 = StaticFindObject(pUVar14,(UObject *)0x0,&local_98,ExactClass);
      if (pUVar15 == (UObject *)0x0) {
        pFVar12 = GetTypeName<UClass>(&local_58);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar24 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar24);
      }
      pUVar14 = Z_Construct_UClass_UClass_NoRegister();
      iVar11 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar14->_padding_)) {
        pFVar12 = GetTypeName<UClass>(&local_78);
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<UObject>(&local_68,pUVar15);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar24 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar24,pwVar18);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      bVar23 = (bool)(bVar23 | pUVar15 == (UObject *)0x0);
      local_e8[0] = pUVar15;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)puVar22,(FObjectPtr)local_e8);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// FindConnectionsFromArgs @ 144278660

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
UObjectReplicationBridge::FindConnectionsFromArgs
          (UObjectReplicationBridge *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  uint local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UObjectReplicationBridge::FindConnectionsFromArgs_::__l3::<lambda_1>_>
                     (param_1,local_res10[0]._0_1_);
  if (pFVar4 != (FString *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    bVar2 = FParse::Value(pwVar5,L"ConnectionId=",&local_18,false,(wchar_t **)0x0);
    if (bVar2) {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      ::FString::ParseIntoArray(&local_18,&local_28,L",",true);
      iVar1 = local_28.ArrayNum;
      pFVar7 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10;
      FVar6.Data = local_28.AllocatorInstance.Data;
      while( true ) {
        if (local_28.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar6.Data == pFVar7) break;
        if (*(int *)(FVar6.Data + 8) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)FVar6.Data;
        }
        uVar3 = _wtoi(pwVar5);
        if (-1 < (int)uVar3) {
          local_res10[0] = uVar3;
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int>
                    (__return_storage_ptr__,local_res10);
        }
        FVar6.Data = FVar6.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindOrCachePollFrequency @ 1442787b0

bool __thiscall
UObjectReplicationBridge::FindOrCachePollFrequency
          (UObjectReplicationBridge *this,UClass *param_1,float *param_2)

{
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *pTVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FPollInfo *pFVar8;
  FName *pFVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  UObject *pUVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  uint local_res20;
  FPollInfo local_c8;
  FName local_b8;
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined1 local_7c [12];
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if ((bAllowPollPeriodOverrides & this->bHasPollOverrides) != 0) {
    FVar4 = (FName)param_1->_padding_;
    pFVar8 = TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
             ::Find((TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
                     *)&this->ClassesWithPollPeriodOverride,FVar4);
    if (pFVar8 != (FPollInfo *)0x0) {
      *param_2 = pFVar8->PollFrequency;
      return true;
    }
    pFVar9 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                       (&this->ClassesWithoutPollPeriodOverride,FVar4);
    if ((pFVar9 == (FName *)0x0) &&
       (*(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 !=
        *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34)) {
      if (this->bHasDirtyClassesInPollPeriodOverrides != false) {
        FindClassesInPollPeriodOverrides(this);
      }
      pUVar10 = (UObject *)0x0;
      local_a0 = &(this->ClassHierarchyPollPeriodOverrides).field_0x10;
      local_c8.PollFrequency = 0.0;
      local_c8.Class.WeakPtr.ObjectIndex = 0;
      local_b0 = &this->ClassHierarchyPollPeriodOverrides;
      uStack_a8 = 0;
      local_c8.Class.WeakPtr.ObjectSerialNumber = 0;
      uVar21 = *(uint *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
      uStack_a4 = 1;
      local_90 = 0;
      iVar16 = 0;
      uStack_94 = local_90;
      if (uVar21 != 0) {
        puVar20 = *(uint **)&(this->ClassHierarchyPollPeriodOverrides).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)local_a0;
        }
        uVar17 = *puVar20;
        pUVar11 = pUVar10;
        pUVar19 = pUVar10;
        local_90 = 0;
        uStack_a8 = 0;
        while (uVar17 == 0) {
          iVar16 = (int)pUVar11;
          local_90 = (int)pUVar19 + 0x20;
          pUVar19 = (UObject *)(ulonglong)local_90;
          uStack_a8 = iVar16 + 1;
          pUVar11 = (UObject *)(ulonglong)uStack_a8;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_a8) {
            iVar16 = *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
            uStack_94 = uVar21;
            goto LAB_1442788f7;
          }
          uVar17 = puVar20[(longlong)iVar16 + 1];
        }
        iVar16 = *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
        uStack_a4 = -uVar17 & uVar17;
        uVar2 = (ulonglong)uStack_a4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_80 = (int)lVar12;
        uStack_94 = (local_90 - 1) + local_80;
        if (iVar16 < (int)uStack_94) {
          uStack_94 = uVar21;
        }
      }
LAB_1442788f7:
      iStack_88 = *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 -
                  *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34;
      local_res20 = *(uint *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
      uStack_98 = 0xffffffff;
      TStack_68._padding_ = CONCAT44(uStack_a4,uStack_a8);
      uVar21 = local_res20 & 0xffffffe0;
      TStack_68.CurrentBitIndex = uStack_94;
      TStack_68.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)local_res20 >> 5;
      TStack_68._28_4_ = uStack_94;
      TStack_68.BaseBitIndex = local_90;
      uStack_48 = CONCAT44(uStack_84,iStack_88);
      uStack_8c = uStack_94;
      local_70 = local_b0;
      TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
      if ((((int)local_res20 < 0) || (iVar16 < (int)local_res20)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar17 = *(uint *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
      if (local_res20 != uVar17) {
        puVar18 = *(undefined1 **)&(this->ClassHierarchyPollPeriodOverrides).field_0x20;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = &(this->ClassHierarchyPollPeriodOverrides).field_0x10;
        }
        uVar22 = -1 << ((byte)local_res20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
        while (uVar22 == 0) {
          lVar12 = (longlong)iVar14;
          uVar21 = uVar21 + 0x20;
          iVar14 = iVar14 + 1;
          local_res20 = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_144278a0e;
          uVar22 = *(uint *)(puVar18 + lVar12 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res20 = (int)lVar12 + -1 + uVar21;
        if ((int)uVar17 < (int)local_res20) {
          local_res20 = uVar17;
        }
      }
LAB_144278a0e:
      while( true ) {
        pTVar1 = local_70;
        if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
          `TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_68.CurrentBitIndex == local_res20) &&
            (TStack_68.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)
             &(this->ClassHierarchyPollPeriodOverrides).field_0x10)) &&
           (pTVar1 == &this->ClassHierarchyPollPeriodOverrides)) break;
        lVar12 = *(longlong *)pTVar1;
        lVar15 = (longlong)TStack_68.CurrentBitIndex * 0x1c;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar12 + 0xc + lVar15));
        if (pUVar11 != (UObject *)0x0) {
          iVar16 = *(int *)&pUVar11[1].field_0x10;
          if ((iVar16 <= (int)param_1->_padding_) &&
             (*(undefined1 **)(param_1->_padding_ + (longlong)iVar16 * 8) == &pUVar11[1].field_0x8))
          {
            if (pUVar10 != (UObject *)0x0) {
              if ((iVar16 < *(int *)&pUVar10[1].field_0x10) ||
                 (*(undefined1 **)
                   (*(longlong *)&pUVar11[1].field_0x8 +
                   (longlong)*(int *)&pUVar10[1].field_0x10 * 8) != &pUVar10[1].field_0x8))
              goto LAB_144278ac1;
            }
            uVar3 = *(undefined8 *)(lVar15 + 8 + lVar12);
            local_c8.PollFrequency = (float)uVar3;
            local_c8.Class.WeakPtr.ObjectIndex = (int)((ulonglong)uVar3 >> 0x20);
            local_c8.Class.WeakPtr.ObjectSerialNumber = *(int *)(lVar15 + 0x10 + lVar12);
            pUVar10 = pUVar11;
          }
        }
LAB_144278ac1:
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      }
      pTVar1 = &this->ClassesWithPollPeriodOverride;
      if (pUVar10 != (UObject *)0x0) {
        local_c8.Class.WeakPtr.ObjectIndex = 0;
        local_c8.Class.WeakPtr.ObjectSerialNumber = 0;
        do {
          FVar4 = (FName)param_1->_padding_;
          local_b8 = FVar4;
          uVar21 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
          uVar21 = uVar21 + FVar4.Number;
          if (*(int *)&(this->ClassesWithPollPeriodOverride).field_0x8 !=
              *(int *)&(this->ClassesWithPollPeriodOverride).field_0x34) {
            puVar18 = *(undefined1 **)&(this->ClassesWithPollPeriodOverride).field_0x40;
            puVar13 = &(this->ClassesWithPollPeriodOverride).field_0x38;
            if (puVar18 != (undefined1 *)0x0) {
              puVar13 = puVar18;
            }
            uVar17 = *(uint *)(puVar13 +
                              (ulonglong)
                              (*(int *)&(this->ClassesWithPollPeriodOverride).field_0x48 - 1U &
                              uVar21) * 4);
            if (uVar17 != 0xffffffff) {
              do {
                pFVar9 = (FName *)((longlong)(int)uVar17 * 0x1c + *(longlong *)pTVar1);
                if (*pFVar9 == local_b8) {
                  if (pFVar9 != (FName *)0x0) goto LAB_144278b93;
                  break;
                }
                uVar17 = pFVar9[2].Number;
              } while (uVar17 != 0xffffffff);
            }
          }
          TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
          ::EmplaceByHash<FName_const_&,UObjectReplicationBridge::FPollInfo_const_&>
                    ((TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
                      *)pTVar1,uVar21,&local_b8,&local_c8);
LAB_144278b93:
          param_1 = (UClass *)param_1->_padding_;
          if (param_1 == (UClass *)0x0) {
            *param_2 = local_c8.PollFrequency;
            return true;
          }
        } while( true );
      }
      do {
        lVar12 = param_1->_padding_;
        local_7c._4_8_ = lVar12;
        uVar21 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
        if (*(int *)&(this->ClassesWithPollPeriodOverride).field_0x8 !=
            *(int *)&(this->ClassesWithPollPeriodOverride).field_0x34) {
          puVar18 = *(undefined1 **)&(this->ClassesWithPollPeriodOverride).field_0x40;
          puVar13 = &(this->ClassesWithPollPeriodOverride).field_0x38;
          if (puVar18 != (undefined1 *)0x0) {
            puVar13 = puVar18;
          }
          iVar16 = *(int *)(puVar13 +
                           (ulonglong)
                           (*(int *)&(this->ClassesWithPollPeriodOverride).field_0x48 - 1U &
                           (int)((ulonglong)lVar12 >> 0x20) + uVar21) * 4);
          if (iVar16 != -1) {
            do {
              if (*(longlong *)((longlong)iVar16 * 0x1c + *(longlong *)pTVar1) == lVar12)
              goto LAB_144278c3c;
              iVar16 = *(int *)((longlong)iVar16 * 0x1c + 0x14 + *(longlong *)pTVar1);
            } while (iVar16 != -1);
          }
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&this->ClassesWithoutPollPeriodOverride,(FName *)local_7c,(bool *)(local_7c + 4))
        ;
LAB_144278c3c:
        param_1 = (UClass *)param_1->_padding_;
      } while (param_1 != (UClass *)0x0);
    }
  }
  return false;
}

// ForcePollObject @ 144278c70

void __thiscall
UObjectReplicationBridge::ForcePollObject(UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FReplicationSystemInternal *pFVar5;
  TObjectPtr<UObject> *pTVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  TObjectPtr<UObject>_u_0 local_res10;
  UObjectReplicationBridge *local_res18;
  FNetBitArrayView local_b8;
  FInitParams local_a8;
  FObjectPoller local_98;
  
  if (param_1.field0_0x0 != 0) {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1650,"UObjectReplicationBridge_ForcePollAndCopyObject",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                 ,0x672);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1650);
    }
    pFVar5 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_)
    ;
    uVar4 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (&pFVar5->NetRefHandleManager,param_1);
    if (uVar4 != 0) {
      if (*(longlong *)&this->PreUpdateInstanceFunction != 0) {
        pTVar6 = TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                           ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                            &(pFVar5->NetRefHandleManager).ReplicatedInstances,uVar4);
        local_res10.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar6->field0_0x0).DebugPtr;
        if (local_res10.DebugPtr != (UObject *)0x0) {
          UE::Net::FNetBitArrayView::FNetBitArrayView
                    (&local_b8,
                     (uint *)(pFVar5->NetRefHandleManager).ObjectsWithPreUpdate.Storage.
                             AllocatorInstance.Data,
                     (pFVar5->NetRefHandleManager).ObjectsWithPreUpdate.BitCount);
          bVar3 = UE::Net::FNetBitArrayView::GetBit(&local_b8,uVar4);
          if (bVar3) {
            local_b8.Storage = (uint *)&local_res10;
            local_b8.WordCount = 1;
            local_res18 = this;
            UE::Core::Private::Function::CheckCallable(*(void **)&this->PreUpdateInstanceFunction);
            pcVar1 = *(code **)&this->PreUpdateInstanceFunction;
            plVar2 = *(longlong **)&(this->PreUpdateInstanceFunction).field_0x28;
            plVar8 = (longlong *)&(this->PreUpdateInstanceFunction).field_0x10;
            if (plVar2 != (longlong *)0x0) {
              plVar8 = plVar2;
            }
            uVar7 = (**(code **)(*plVar8 + 8))();
            (*pcVar1)(uVar7,&local_b8,&local_res18);
          }
        }
      }
      local_a8.ObjectReplicationBridge = this;
      local_a8.ReplicationSystemInternal =
           UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
      UE::Net::Private::FObjectPoller::FObjectPoller(&local_98,&local_a8);
      UE::Net::Private::FObjectPoller::PollAndCopySingleObject(&local_98,uVar4);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ForceUpdateWorldLocation @ 144278e20

void __thiscall
UObjectReplicationBridge::ForceUpdateWorldLocation
          (UObjectReplicationBridge *this,FNetRefHandle param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReplicationSystemInternal *pFVar4;
  FNetRefHandle_u_0 local_res10;
  UObjectReplicationBridge *local_38;
  FNetRefHandle_u_0 *local_30;
  FUpdateWorldInfoContext local_28;
  
  local_res10 = param_1.field0_0x0;
  pFVar4 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  local_28.WorldLocations = &pFVar4->WorldLocations;
  pFVar1 = ((local_28.WorldLocations)->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if ((pFVar4->WorldLocations).ValidInfoIndexes.BitCount <= param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    local_30 = &local_res10;
    local_38 = this;
    `UObjectReplicationBridge::ForceUpdateWorldLocation'::__l5::<lambda_1>::operator()(&local_38);
  }
  else {
    local_28.NetRefHandle.field0_0x0._s_0 = local_res10;
    local_28.ObjectIndex = param_2;
    UpdateRootObjectWorldInfo(this,&local_28);
  }
  return;
}

// GetClassIrisAsyncLoadingPriority @ 144279850

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

EIrisAsyncLoadingPriority __thiscall
UObjectReplicationBridge::GetClassIrisAsyncLoadingPriority
          (UObjectReplicationBridge *this,UClass *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  EIrisAsyncLoadingPriority *pEVar6;
  undefined1 *puVar7;
  longlong local_res10;
  
  GetConfigClassPathName(this,(UClass *)&local_res10);
  if (param_1 != (UClass *)0x0) {
    do {
      GetConfigClassPathName(this,(UClass *)&local_res10);
      lVar3 = local_res10;
      uVar4 = ::GetTypeHash((FNameEntryId)(uint)local_res10);
      if (*(int *)&(this->ClassesIrisAsyncLoadingPriority).field_0x8 !=
          *(int *)&(this->ClassesIrisAsyncLoadingPriority).field_0x34) {
        puVar2 = *(undefined1 **)&(this->ClassesIrisAsyncLoadingPriority).field_0x40;
        puVar7 = &(this->ClassesIrisAsyncLoadingPriority).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar7 = puVar2;
        }
        iVar5 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(this->ClassesIrisAsyncLoadingPriority).field_0x48 - 1U
                                  & (int)((ulonglong)lVar3 >> 0x20) + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            lVar1 = *(longlong *)&this->ClassesIrisAsyncLoadingPriority + (longlong)iVar5 * 0x14;
            if (*(longlong *)
                 (*(longlong *)&this->ClassesIrisAsyncLoadingPriority + (longlong)iVar5 * 0x14) ==
                lVar3) {
              pEVar6 = (EIrisAsyncLoadingPriority *)(lVar1 + 8);
              if (lVar1 == 0) {
                pEVar6 = (EIrisAsyncLoadingPriority *)0x0;
              }
              if (pEVar6 != (EIrisAsyncLoadingPriority *)0x0) {
                return *pEVar6;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0xc);
          } while (iVar5 != -1);
        }
      }
      param_1 = (UClass *)param_1->_padding_;
    } while (param_1 != (UClass *)0x0);
  }
  return Default;
}

// GetClassPollFrequency @ 144279960

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UObjectReplicationBridge::GetClassPollFrequency
          (UObjectReplicationBridge *this,UClass *param_1,float *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  FPollInfo *pFVar11;
  FName *pFVar12;
  UObject *pUVar13;
  longlong lVar14;
  int iVar15;
  UObject *pUVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint *puVar23;
  undefined1 local_res8 [8];
  undefined8 local_b0;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  UObject *pUVar22;
  
  if ((bAllowPollPeriodOverrides & this->bHasPollOverrides) != 0) {
    FVar3 = (FName)param_1->_padding_;
    pFVar11 = TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
              ::Find((TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
                      *)&this->ClassesWithPollPeriodOverride,FVar3);
    if (pFVar11 != (FPollInfo *)0x0) {
      *param_2 = pFVar11->PollFrequency;
      return true;
    }
    pFVar12 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                        (&this->ClassesWithoutPollPeriodOverride,FVar3);
    if (pFVar12 == (FName *)0x0) {
      puVar1 = &(this->ClassHierarchyPollPeriodOverrides).field_0x10;
      uVar17 = *(uint *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
      pUVar16 = (UObject *)0x0;
      uVar19 = 0;
      bVar6 = false;
      local_b0 = 0;
      uVar9 = 1;
      uVar21 = 0;
      iVar18 = 0;
      uVar10 = uVar21;
      if (uVar17 != 0) {
        puVar23 = *(uint **)&(this->ClassHierarchyPollPeriodOverrides).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)puVar1;
        }
        uVar10 = *puVar23;
        pUVar13 = pUVar16;
        pUVar22 = pUVar16;
        uVar21 = 0;
        uVar19 = 0;
        while (uVar10 == 0) {
          iVar18 = (int)pUVar13;
          uVar21 = (int)pUVar22 + 0x20;
          pUVar22 = (UObject *)(ulonglong)uVar21;
          uVar19 = iVar18 + 1;
          pUVar13 = (UObject *)(ulonglong)uVar19;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19) {
            iVar18 = *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
            uVar10 = uVar17;
            goto LAB_144279a94;
          }
          uVar10 = puVar23[(longlong)iVar18 + 1];
        }
        iVar18 = *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
        uVar9 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar10 = (uVar21 - 1) + (int)lVar14;
        if (iVar18 < (int)uVar10) {
          uVar10 = uVar17;
        }
      }
LAB_144279a94:
      uVar17 = *(uint *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
      TStack_60._padding_ = CONCAT44(uVar9,uVar19);
      uVar19 = uVar17 & 0xffffffe0;
      TStack_60.CurrentBitIndex = uVar10;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar17 >> 5;
      TStack_60._28_4_ = uVar10;
      TStack_60.BaseBitIndex = uVar21;
      uStack_40 = CONCAT44(uStack_74,
                           *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 -
                           *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar17 < 0) || (iVar18 < (int)uVar17)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar21 = *(uint *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28;
      if (uVar17 != uVar21) {
        puVar20 = *(undefined1 **)&(this->ClassHierarchyPollPeriodOverrides).field_0x20;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = puVar1;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
        while (uVar17 == 0) {
          lVar14 = (longlong)iVar15;
          uVar19 = uVar19 + 0x20;
          iVar15 = iVar15 + 1;
          uVar17 = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_144279ba0;
          uVar17 = *(uint *)(puVar20 + lVar14 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar17 = (int)lVar14 + -1 + uVar19;
        if ((int)uVar21 < (int)uVar17) {
          uVar17 = uVar21;
        }
      }
LAB_144279ba0:
      do {
        if (*(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 -
            *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34 != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        lVar14 = (longlong)TStack_60.CurrentBitIndex;
        if ((TStack_60.CurrentBitIndex == uVar17) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
          if (!bVar6) {
            return false;
          }
          *param_2 = (float)local_b0;
          return true;
        }
        lVar4 = *(longlong *)&this->ClassHierarchyPollPeriodOverrides;
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0xc + lVar14 * 0x1c));
        if (pUVar13 != (UObject *)0x0) {
          iVar18 = *(int *)&pUVar13[1].field_0x10;
          if ((iVar18 <= (int)param_1->_padding_) &&
             (*(undefined1 **)(param_1->_padding_ + (longlong)iVar18 * 8) == &pUVar13[1].field_0x8))
          {
            if (pUVar16 != (UObject *)0x0) {
              if ((iVar18 < *(int *)&pUVar16[1].field_0x10) ||
                 (*(undefined1 **)
                   (*(longlong *)&pUVar13[1].field_0x8 +
                   (longlong)*(int *)&pUVar16[1].field_0x10 * 8) != &pUVar16[1].field_0x8))
              goto LAB_144279c36;
            }
            local_b0 = *(undefined8 *)(lVar14 * 0x1c + 8 + lVar4);
            bVar6 = true;
            pUVar16 = pUVar13;
          }
        }
LAB_144279c36:
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while( true );
    }
  }
  return false;
}

// GetConfigClassPathName @ 144279d50

FName __thiscall
UObjectReplicationBridge::GetConfigClassPathName(UObjectReplicationBridge *this,UClass *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FString *pFVar5;
  FName *pFVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  UObjectBaseUtility *in_R8;
  TPairInitializer<UClass_const_*_const_&,FName_const_&> local_res8;
  FScriptContainerElement local_res18 [8];
  FName local_res20;
  undefined1 local_28 [16];
  
  uVar7 = ((uint)((ulonglong)in_R8 >> 0x14) & 0xffff ^ (uint)((ulonglong)in_R8 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->ConfigClassPathNameCache).field_0x8 !=
      *(int *)&(this->ConfigClassPathNameCache).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ConfigClassPathNameCache).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ConfigClassPathNameCache).field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ConfigClassPathNameCache).field_0x48 - 1U &
                              (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&(this->ConfigClassPathNameCache).field_0x0;
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x18;
        if (*(UObjectBaseUtility **)(lVar3 + (longlong)iVar4 * 0x18) == in_R8) {
          plVar8 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar8 = (longlong *)0x0;
          }
          if (plVar8 != (longlong *)0x0) {
            param_1->_padding_ = *plVar8;
            return (FName)param_1;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  pFVar5 = UObjectBaseUtility::GetPathName(in_R8,(FString *)local_28,(UObject *)0x0);
  iVar2 = (pFVar5->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  pFVar6 = ::FName::FName((FName *)&local_res8,iVar4,
                          (wchar_t *)(pFVar5->Data).AllocatorInstance.Data,FNAME_Add);
  local_res20 = *pFVar6;
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  local_28._0_8_ = local_res18;
  local_28._8_8_ = &local_res20;
  TSet<TTuple<UClass_const_*,FName>,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UClass_const_*_const_&,FName_const_&>_>
            ((TSet<TTuple<UClass_const_*,FName>,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>,FDefaultSetAllocator>
              *)&this->ConfigClassPathNameCache,&local_res8,(bool *)local_28);
  param_1->_padding_ = (longlong)local_res20;
  return (FName)param_1;
}

// GetDynamicFilter @ 14427a270

uint __thiscall
UObjectReplicationBridge::GetDynamicFilter
          (UObjectReplicationBridge *this,UClass *param_1,bool param_2,FName *param_3)

{
  TMap<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
  *this_00;
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  FName FVar4;
  UClass *pUVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  FClassFilterInfo *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  UClass *local_res8;
  undefined1 local_78 [16];
  uint uStack_68;
  undefined4 uStack_64;
  uint local_60 [3];
  undefined1 local_54;
  undefined8 *local_50;
  uint *local_48;
  
  this_00 = &this->ClassesWithDynamicFilter;
  if (*(int *)&(this->ClassesWithDynamicFilter).field_0x8 ==
      *(int *)&(this->ClassesWithDynamicFilter).field_0x34) {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable
              (*(void **)&this->ShouldUseDefaultSpatialFilterFunction);
    pcVar1 = *(code **)&this->ShouldUseDefaultSpatialFilterFunction;
    plVar11 = *(longlong **)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28;
    plVar12 = (longlong *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = plVar11;
    }
    uVar9 = (**(code **)(*plVar12 + 8))();
    cVar6 = (*pcVar1)(uVar9,&local_res8);
    if (cVar6 == '\0') {
      return 0;
    }
    return this->DefaultSpatialFilterHandle;
  }
  GetConfigClassPathName(this,(UClass *)local_78);
  pFVar10 = TMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
            ::Find((TMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
                    *)this_00,(FName)local_78._0_8_);
  if (pFVar10 == (FClassFilterInfo *)0x0) {
    for (lVar2 = param_1->_padding_; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x40)) {
      GetConfigClassPathName(this,(UClass *)&local_res8);
      pUVar5 = local_res8;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)local_res8);
      if (*(int *)&(this->ClassesWithDynamicFilter).field_0x8 !=
          *(int *)&(this->ClassesWithDynamicFilter).field_0x34) {
        puVar3 = *(undefined1 **)&(this->ClassesWithDynamicFilter).field_0x40;
        puVar14 = &(this->ClassesWithDynamicFilter).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar14 = puVar3;
        }
        iVar8 = *(int *)(puVar14 +
                        (ulonglong)
                        (*(int *)&(this->ClassesWithDynamicFilter).field_0x48 - 1U &
                        (int)((ulonglong)pUVar5 >> 0x20) + uVar7) * 4);
        if (iVar8 != -1) {
          do {
            plVar11 = (longlong *)((longlong)iVar8 * 0x20 + *(longlong *)&this_00->field_0x0);
            if ((UClass *)*plVar11 == pUVar5) {
              plVar12 = plVar11 + 1;
              if (plVar11 == (longlong *)0x0) {
                plVar12 = (longlong *)0x0;
              }
              if (plVar12 != (longlong *)0x0) {
                local_78._8_4_ = (undefined4)lVar2;
                local_78._12_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
                local_res8 = param_1;
                UE::Core::Private::Function::CheckCallable
                          (*(void **)&this->ShouldSubclassUseSameFilterFunction);
                pcVar1 = *(code **)&this->ShouldSubclassUseSameFilterFunction;
                plVar11 = *(longlong **)&(this->ShouldSubclassUseSameFilterFunction).field_0x28;
                plVar13 = (longlong *)&(this->ShouldSubclassUseSameFilterFunction).field_0x10;
                if (plVar11 != (longlong *)0x0) {
                  plVar13 = plVar11;
                }
                uVar9 = (**(code **)(*plVar13 + 8))();
                cVar6 = (*pcVar1)(uVar9,local_78 + 8,&local_res8);
                if (cVar6 == '\0') goto LAB_14427a405;
                local_50 = (undefined8 *)local_78;
                local_48 = (uint *)(local_78 + 8);
                local_78._8_4_ = (undefined4)*plVar12;
                local_78._12_4_ = (undefined4)((ulonglong)*plVar12 >> 0x20);
                uStack_68 = (uint)plVar12[1];
                uStack_64 = (undefined4)((ulonglong)plVar12[1] >> 0x20);
                TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&>_>
                          ((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                            *)this_00,
                           (TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&>
                            *)&local_res8,(bool *)&local_50);
                if ((!param_2) || ((char)uStack_64 != '\0')) {
                  FVar4.Number = uStack_68;
                  FVar4.ComparisonIndex.Value = local_78._12_4_;
                  *param_3 = FVar4;
                  return local_78._8_4_;
                }
                goto LAB_14427a4d6;
              }
              break;
            }
            iVar8 = (int)plVar11[3];
          } while (iVar8 != -1);
        }
      }
    }
LAB_14427a405:
    local_60._4_8_ = 0;
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable
              (*(void **)&this->ShouldUseDefaultSpatialFilterFunction);
    pcVar1 = *(code **)&this->ShouldUseDefaultSpatialFilterFunction;
    plVar11 = *(longlong **)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28;
    plVar12 = (longlong *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = plVar11;
    }
    uVar9 = (**(code **)(*plVar12 + 8))();
    cVar6 = (*pcVar1)(uVar9,&local_res8);
    if (cVar6 == '\0') {
      local_60[0] = 0;
    }
    else {
      local_60[0] = this->DefaultSpatialFilterHandle;
    }
    local_50 = (undefined8 *)local_78;
    local_54 = 0;
    local_48 = local_60;
    TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&>_>
              ((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&> *
               )&local_res8,(bool *)&local_50);
  }
  else if ((param_2) && (pFVar10->bForceEnable == false)) {
LAB_14427a4d6:
    local_60[0] = 0;
  }
  else {
    *param_3 = pFVar10->FilterProfile;
    local_60[0] = pFVar10->FilterHandle;
  }
  return local_60[0];
}

// GetInstancePreUpdateFunction @ 14427a6f0

TFunction<void___cdecl(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*)> * __thiscall
UObjectReplicationBridge::GetInstancePreUpdateFunction
          (UObjectReplicationBridge *this,
          TFunction<void___cdecl(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*)>
          *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)&this->PreUpdateInstanceFunction;
  *(longlong *)__return_storage_ptr__ = lVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(this->PreUpdateInstanceFunction).field_0x28;
    puVar3 = (undefined8 *)&(this->PreUpdateInstanceFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  return __return_storage_ptr__;
}

// GetNetFactory @ 14427a800

UNetObjectFactory * __thiscall
UObjectReplicationBridge::GetNetFactory(UObjectReplicationBridge *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  UNetObjectFactory *pUVar3;
  ulonglong uVar4;
  byte local_res10 [24];
  byte *local_18;
  UObjectReplicationBridge *local_10;
  
  local_res10[0] = param_1;
  if (((this->NetObjectFactories).ArrayNum <= (int)(uint)param_1) || (param_1 == 0xff)) {
    local_18 = local_res10;
    local_10 = this;
    bVar2 = `UObjectReplicationBridge::GetNetFactory'::__l3::<lambda_1>::operator()(&local_18);
    if (!bVar2) {
      return (UNetObjectFactory *)0x0;
    }
  }
  uVar4 = (ulonglong)local_res10[0];
  if (((this->NetObjectFactories).ArrayNum <= (int)(uint)local_res10[0]) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UNetObjectFactory *)(*pcVar1)();
    return pUVar3;
  }
  return *(UNetObjectFactory **)((this->NetObjectFactories).AllocatorInstance.Data + uVar4 * 8);
}

// GetObjectFromReferenceHandle @ 14427aea0

UObject * __thiscall
UObjectReplicationBridge::GetObjectFromReferenceHandle
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  longlong lVar1;
  int iVar2;
  FWeakObjectPtr *this_00;
  UObject *pUVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar1 = this->_padding_;
  uVar5 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)(lVar1 + 0x58) != *(int *)(lVar1 + 0x84)) {
    lVar6 = *(longlong *)(lVar1 + 0x90);
    if (*(longlong *)(lVar1 + 0x90) == 0) {
      lVar6 = lVar1 + 0x88;
    }
    iVar2 = *(int *)(lVar6 + ((uVar5 >> 0x20) * 0x17 + uVar5 &
                             (ulonglong)(*(int *)(lVar1 + 0x98) - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar4 = (ulonglong *)((longlong)iVar2 * 0x40 + *(longlong *)(lVar1 + 0x50));
        if ((*puVar4 & 0x3fffffffffffff) == uVar5) {
          this_00 = (FWeakObjectPtr *)(puVar4 + 1);
          if (puVar4 == (ulonglong *)0x0) {
            this_00 = (FWeakObjectPtr *)0x0;
          }
          if (this_00 == (FWeakObjectPtr *)0x0) {
            return (UObject *)0x0;
          }
          pUVar3 = FWeakObjectPtr::Get(this_00);
          return pUVar3;
        }
        iVar2 = (int)puVar4[7];
      } while (iVar2 != -1);
    }
  }
  return (UObject *)0x0;
}

// GetObjectWantsToBeDormant @ 14427b2b0

bool __thiscall
UObjectReplicationBridge::GetObjectWantsToBeDormant
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FReplicationSystemInternal *pFVar5;
  FNetBitArrayView local_18;
  
  pFVar5 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar4 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar5->NetRefHandleManager,param_1);
  if (uVar4 == 0) {
    return false;
  }
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_18,
             (uint *)(pFVar5->NetRefHandleManager).WantToBeDormantInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar5->NetRefHandleManager).WantToBeDormantInternalIndices.BitCount);
  if (local_18.BitCount <= uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (local_18.Storage[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) != 0;
}

// GetOrCreateObjectReference @ 14427ba00

FNetObjectReference * __thiscall
UObjectReplicationBridge::GetOrCreateObjectReference
          (UObjectReplicationBridge *this,FNetObjectReference *__return_storage_ptr__,
          FString *param_1,UObject *param_2)

{
  UE::Net::Private::FObjectReferenceCache::GetOrCreateObjectReference
            ((FObjectReferenceCache *)this->_padding_,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetOrCreateObjectReference @ 14427ba30

FNetObjectReference * __thiscall
UObjectReplicationBridge::GetOrCreateObjectReference
          (UObjectReplicationBridge *this,FNetObjectReference *__return_storage_ptr__,
          UObject *param_1)

{
  FObjectReferenceCache *this_00;
  
  this_00 = (FObjectReferenceCache *)this->_padding_;
  (__return_storage_ptr__->RefHandle).field0_0x0.Value = 0;
  __return_storage_ptr__->PathToken = (FNetToken_u_0)0x0;
  __return_storage_ptr__->Traits = None;
  UE::Net::Private::FObjectReferenceCache::CreateObjectReferenceInternal
            (this_00,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPollFrequencyOfRootObject @ 14427bbd0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

float __thiscall
UObjectReplicationBridge::GetPollFrequencyOfRootObject(UObjectReplicationBridge *this,uint param_1)

{
  TObjectPtr<UObject> TVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  FReplicatedObjectData *pFVar3;
  UNetObjectFactory *pUVar4;
  float local_res8;
  undefined4 uStackX_c;
  
  pTVar2 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                      ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                       (this->_padding_ + 0x300),param_1)->field0_0x0;
  TVar1.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar2->DebugPtr;
  UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
            ((FNetRefHandleManager *)this->_padding_,(uint)&local_res8);
  pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
           ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                         *)(this->_padding_ + 0x2a0),param_1);
  if (pFVar3->NetFactoryId == 0xff) {
    return __real_42c80000;
  }
  pUVar4 = GetNetFactory(this,pFVar3->NetFactoryId);
  local_res8 = (float)(**(code **)(pUVar4->_padding_ + 0x2f0))
                                (pUVar4,CONCAT44(uStackX_c,local_res8),TVar1.field0_0x0);
  if (TVar1.field0_0x0 != (UObject *)0x0) {
    GetClassPollFrequency(this,*(UClass **)((longlong)TVar1.field0_0x0 + 0x10),&local_res8);
  }
  return local_res8;
}

// GetPreRegisteredObject @ 14427bca0

UObject * __thiscall
UObjectReplicationBridge::GetPreRegisteredObject
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  longlong lVar1;
  int iVar2;
  FWeakObjectPtr *this_00;
  UObject *pUVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar1 = this->_padding_;
  uVar5 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)(lVar1 + 0x58) != *(int *)(lVar1 + 0x84)) {
    lVar6 = *(longlong *)(lVar1 + 0x90);
    if (*(longlong *)(lVar1 + 0x90) == 0) {
      lVar6 = lVar1 + 0x88;
    }
    iVar2 = *(int *)(lVar6 + ((uVar5 >> 0x20) * 0x17 + uVar5 &
                             (ulonglong)(*(int *)(lVar1 + 0x98) - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar4 = (ulonglong *)((longlong)iVar2 * 0x40 + *(longlong *)(lVar1 + 0x50));
        if ((*puVar4 & 0x3fffffffffffff) == uVar5) {
          this_00 = (FWeakObjectPtr *)(puVar4 + 1);
          if (puVar4 == (ulonglong *)0x0) {
            this_00 = (FWeakObjectPtr *)0x0;
          }
          if (this_00 == (FWeakObjectPtr *)0x0) {
            return (UObject *)0x0;
          }
          if ((this_00[5].ObjectIndex & 0x20) == 0) {
            return (UObject *)0x0;
          }
          pUVar3 = FWeakObjectPtr::Get(this_00);
          return pUVar3;
        }
        iVar2 = (int)puVar4[7];
      } while (iVar2 != -1);
    }
  }
  return (UObject *)0x0;
}

// GetPrioritizer @ 14427be00

uint __thiscall
UObjectReplicationBridge::GetPrioritizer
          (UObjectReplicationBridge *this,UClass *param_1,bool param_2)

{
  TMap<FName,UObjectReplicationBridge::FClassPrioritizerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>_>
  *this_00;
  longlong lVar1;
  undefined1 *puVar2;
  bool bVar3;
  FName *pFVar4;
  uint uVar5;
  int iVar6;
  FClassPrioritizerInfo *pFVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong lVar10;
  FName *local_res8;
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined1 *local_38;
  
  this_00 = &this->ClassesWithPrioritizer;
  if (0 < *(int *)&(this->ClassesWithPrioritizer).field_0x8 -
          *(int *)&(this->ClassesWithPrioritizer).field_0x34) {
    GetConfigClassPathName(this,(UClass *)local_48);
    pFVar7 = TMapBase<FName,UObjectReplicationBridge::FClassPrioritizerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>_>
             ::Find((TMapBase<FName,UObjectReplicationBridge::FClassPrioritizerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>_>
                     *)this_00,(FName)local_48);
    if (pFVar7 == (FClassPrioritizerInfo *)0x0) {
      lVar10 = param_1->_padding_;
      if (lVar10 != 0) {
        bVar3 = false;
        do {
          GetConfigClassPathName(this,(UClass *)&local_res8);
          pFVar4 = local_res8;
          uVar5 = ::GetTypeHash((FNameEntryId)(uint)local_res8);
          if (*(int *)&(this->ClassesWithPrioritizer).field_0x8 !=
              *(int *)&(this->ClassesWithPrioritizer).field_0x34) {
            puVar2 = *(undefined1 **)&(this->ClassesWithPrioritizer).field_0x40;
            puVar9 = &(this->ClassesWithPrioritizer).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar9 = puVar2;
            }
            iVar6 = *(int *)(puVar9 + (ulonglong)
                                      (*(int *)&(this->ClassesWithPrioritizer).field_0x48 - 1U &
                                      (int)((ulonglong)pFVar4 >> 0x20) + uVar5) * 4);
            if (iVar6 != -1) {
              do {
                lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18;
                if (*(FName **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18) == pFVar4
                   ) {
                  plVar8 = (longlong *)(lVar1 + 8);
                  if (lVar1 == 0) {
                    plVar8 = (longlong *)0x0;
                  }
                  if (plVar8 != (longlong *)0x0) {
                    local_res20 = *plVar8;
                    local_40 = local_48;
                    local_38 = (undefined1 *)&local_res20;
                    TSet<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>,FDefaultSetAllocator>
                    ::
                    Emplace<TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassPrioritizerInfo_const_&>_>
                              ((TSet<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>,FDefaultSetAllocator>
                                *)this_00,
                               (TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassPrioritizerInfo_const_&>
                                *)&local_res8,(bool *)&local_40);
                    if ((!param_2) || (local_res20._4_1_ != '\0')) {
                      bVar3 = true;
                    }
                    uVar5 = 0xffffffff;
                    if (bVar3) {
                      uVar5 = (uint)local_res20;
                    }
                    return uVar5;
                  }
                  break;
                }
                iVar6 = *(int *)(lVar1 + 0x10);
              } while (iVar6 != -1);
            }
          }
          lVar10 = *(longlong *)(lVar10 + 0x40);
        } while (lVar10 != 0);
      }
    }
    else if ((!param_2) || (pFVar7->bForceEnable != false)) {
      return pFVar7->PrioritizerHandle;
    }
  }
  return 0xffffffff;
}

// GetPrivateStaticClass @ 14427c340

UClass * __cdecl UObjectReplicationBridge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ObjectReplicationBridge",
               &Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton,
               StaticRegisterNativesUObjectReplicationBridge,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReplicationBridge>,
               InternalVTableHelperCtorCaller<UObjectReplicationBridge>,local_res8,
               UReplicationBridge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReplicationBridge.InnerSingleton;
}

// GetReplicatedObject @ 14427c850

UObject * __thiscall
UObjectReplicationBridge::GetReplicatedObject(UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = UReplicationBridge::IsReplicatedHandle((UReplicationBridge *)this,param_1);
  if (bVar1) {
    pUVar2 = GetObjectFromReferenceHandle(this,param_1);
    return pUVar2;
  }
  return (UObject *)0x0;
}

// GetReplicatedRefHandle @ 14427cad0

FNetRefHandle __thiscall
UObjectReplicationBridge::GetReplicatedRefHandle
          (UObjectReplicationBridge *this,UObject *param_1,EGetRefHandleFlags param_2)

{
  bool bVar1;
  FNetRefHandle_u_0 FVar2;
  FNetRefHandle_u_0 local_res8;
  
  UE::Net::Private::FObjectReferenceCache::GetObjectReferenceHandleFromObject
            ((FObjectReferenceCache *)this->_padding_,(UObject *)&local_res8._s_0,param_2);
  bVar1 = UReplicationBridge::IsReplicatedHandle
                    ((UReplicationBridge *)this,(FNetRefHandle)local_res8._s_0);
  FVar2.Value = 0;
  if (bVar1) {
    FVar2 = local_res8;
  }
  *(FNetRefHandle_u_0 *)param_1 = FVar2;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// GetReplicatedRefHandle @ 14427cb20

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UObjectReplicationBridge::GetReplicatedRefHandle(UObjectReplicationBridge *this,FNetHandle param_1)

{
  uint *puVar1;
  FReplicatedObjectData *pFVar2;
  FNetHandle_u_0 *in_R8;
  FNetHandle_u_0 local_res8;
  
  local_res8 = *in_R8;
  puVar1 = TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
           ::Find((TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
                   *)(this->_padding_ + 0x68),(FNetHandle *)&local_res8.Value);
  if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
    pFVar2 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)(this->_padding_ + 0x2a0),*puVar1);
    *(FNetRefHandle_u_0 *)param_1.field0_0x0 = (pFVar2->RefHandle).field0_0x0;
    return (FNetRefHandle)param_1.field0_0x0;
  }
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (FNetRefHandle)param_1.field0_0x0;
}

// GetRootObjectOfAnyObject @ 14427ccb0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UObjectReplicationBridge::GetRootObjectOfAnyObject
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  uint uVar1;
  FReplicationSystemInternal *pFVar2;
  FReplicatedObjectData *pFVar3;
  FNetRefHandle_u_0 FVar4;
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
  *this_00;
  FNetRefHandle in_R8;
  
  pFVar2 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar2->NetRefHandleManager,in_R8);
  if (uVar1 == 0) {
LAB_14427cd0e:
    FVar4.Value = 0;
  }
  else {
    this_00 = &(pFVar2->NetRefHandleManager).ReplicatedObjectData;
    pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)this_00,uVar1);
    if (pFVar3->SubObjectRootIndex != 0) {
      pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
               ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                             *)this_00,uVar1);
      uVar1 = pFVar3->SubObjectRootIndex;
      if (uVar1 == 0) goto LAB_14427cd0e;
    }
    pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)this_00,uVar1);
    FVar4 = (pFVar3->RefHandle).field0_0x0;
  }
  *(FNetRefHandle_u_0 *)param_1.field0_0x0 = FVar4;
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// GetRootObjectOfSubObject @ 14427cdb0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UObjectReplicationBridge::GetRootObjectOfSubObject
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  uint uVar1;
  FReplicationSystemInternal *pFVar2;
  FReplicatedObjectData *pFVar3;
  FNetRefHandle in_R8;
  
  pFVar2 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar2->NetRefHandleManager,in_R8);
  if (uVar1 != 0) {
    pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                           *)&(pFVar2->NetRefHandleManager).ReplicatedObjectData,uVar1);
    if (pFVar3->SubObjectRootIndex != 0) {
      pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
               ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                             *)&(pFVar2->NetRefHandleManager).ReplicatedObjectData,
                            pFVar3->SubObjectRootIndex);
      *(FNetRefHandle_u_0 *)param_1.field0_0x0 = (pFVar3->RefHandle).field0_0x0;
      return (FNetRefHandle)param_1.field0_0x0.Value;
    }
  }
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// GetTypeStatsIndex @ 14427d020

int __thiscall
UObjectReplicationBridge::GetTypeStatsIndex(UObjectReplicationBridge *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  FReplicationSystemInternal *pFVar6;
  FName FVar7;
  undefined1 *puVar8;
  FName *pFVar9;
  UClass *pUVar10;
  
  if ((0 < *(int *)&(this->ClassesWithTypeStats).field_0x8 -
           *(int *)&(this->ClassesWithTypeStats).field_0x34) &&
     (pFVar6 = UReplicationSystem::GetReplicationSystemInternal
                         ((UReplicationSystem *)this->_padding_), param_1 != (UClass *)0x0)) {
    pUVar10 = param_1;
    do {
      FVar7 = GetConfigClassPathName(this,(UClass *)&stack0x00000008);
      lVar2 = *(longlong *)FVar7;
      uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(this->ClassesWithTypeStats).field_0x8 !=
          *(int *)&(this->ClassesWithTypeStats).field_0x34) {
        puVar3 = *(undefined1 **)&(this->ClassesWithTypeStats).field_0x40;
        puVar8 = &(this->ClassesWithTypeStats).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar8 = puVar3;
        }
        iVar5 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(this->ClassesWithTypeStats).field_0x48 - 1U &
                                  (int)((ulonglong)lVar2 >> 0x20) + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            lVar1 = *(longlong *)&this->ClassesWithTypeStats + (longlong)iVar5 * 0x18;
            if (*(longlong *)(*(longlong *)&this->ClassesWithTypeStats + (longlong)iVar5 * 0x18) ==
                lVar2) {
              pFVar9 = (FName *)(lVar1 + 8);
              if (lVar1 == 0) {
                pFVar9 = (FName *)0x0;
              }
              if (pFVar9 != (FName *)0x0) {
                iVar5 = UE::Net::Private::FNetTypeStats::GetOrCreateTypeStats
                                  (&pFVar6->TypeStats,*pFVar9);
                return iVar5;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x10);
          } while (iVar5 != -1);
        }
      }
      pUVar10 = (UClass *)pUVar10->_padding_;
    } while (pUVar10 != (UClass *)0x0);
  }
  if ((bUseVeryVerboseIrisCsvStats == false) ||
     (pFVar6 = UReplicationSystem::GetReplicationSystemInternal
                         ((UReplicationSystem *)this->_padding_), param_1 == (UClass *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = UE::Net::Private::FNetTypeStats::GetOrCreateTypeStats
                      (&pFVar6->TypeStats,(FName)param_1->_padding_);
  }
  return iVar5;
}

// InitConditionalPropertyDelegates @ 14427e3a0

void __thiscall
UObjectReplicationBridge::InitConditionalPropertyDelegates(UObjectReplicationBridge *this)

{
  FDelegateHandle FVar1;
  <lambda_1> local_res10 [3];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
          ::
          AddLambda<_UObjectReplicationBridge::InitConditionalPropertyDelegates_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
                      *)&UE::Net::Private::FPropertyConditionDelegates::
                         OnPropertyCustomConditionChangedDelegate,local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->OnCustomConditionChangedHandle).ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,enum_ELifetimeCondition),FDefaultDelegateUserPolicy>
          ::
          AddLambda<_UObjectReplicationBridge::InitConditionalPropertyDelegates_::__l2::<lambda_2>_>
                    (&UE::Net::Private::FPropertyConditionDelegates::
                      OnPropertyDynamicConditionChangedDelegate,(<lambda_2> *)local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->OnDynamicConditionChangedHandle).ID = *FVar1.ID;
  return;
}

// InitNetObjectFactories @ 14427e4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UObjectReplicationBridge::InitNetObjectFactories(UObjectReplicationBridge *this)

{
  int *piVar1;
  TArray<TObjectPtr<UNetObjectFactory>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  UObject **ppUVar15;
  uchar *puVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_118 [32];
  UObject **local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  UObject *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  UObject **ppUVar14;
  
  iVar5 = UE::Net::FNetObjectFactoryRegistry::NetFactories.ArrayNum;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar17 = (FScriptContainerElement *)
            (longlong)UE::Net::FNetObjectFactoryRegistry::NetFactories.ArrayNum;
  if ((UE::Net::FNetObjectFactoryRegistry::NetFactories.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->NetObjectFactories).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetObjectFactories.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                         ,0x112,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppUVar14 = (UObject **)0x0;
  if (0 < iVar5) {
    puVar16 = UE::Net::FNetObjectFactoryRegistry::NetFactories.AllocatorInstance.InlineData[0].Pad +
              8;
    ppUVar15 = ppUVar14;
    do {
      if (((int)ppUVar14 < 0) &&
         (local_f8 = ppUVar15, local_f0 = pFVar17,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*puVar16 != 0xff) {
        if ((*puVar16 != (uchar)ppUVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data.Id == (FNetObjectFactoryId)Index",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                               ,0x119,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar16 + 4));
        if ((pUVar8 == (UObject *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data.NetFactoryClass.Get()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                               ,0x11a,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_c0 = 0;
        pUVar9 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar16 + 4));
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar10 = UNetObjectFactory::StaticClass();
        CheckIsClassChildOf_Internal(pUVar10,pUVar9);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar9);
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._16_4_ = 0;
        local_b8._20_4_ = 0;
        local_b8._24_4_ = RF_NoFlags;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._8_8_ = this;
        pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar11 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        pTVar2 = &this->NetObjectFactories;
        local_c8 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
           (lVar12 = (longlong)(this->NetObjectFactories).ArrayMax,
           (FScriptContainerElement *)&local_c8 < pFVar3 + lVar12 * 8)) {
          local_e0 = (longlong)(this->NetObjectFactories).ArrayNum;
          local_d8 = 8;
          local_f8 = &local_c8;
          local_f0 = pFVar3;
          local_e8 = lVar12;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = (this->NetObjectFactories).ArrayNum;
        piVar1 = &(this->NetObjectFactories).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->NetObjectFactories).ArrayNum = iVar7 + 1;
        *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_c8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_c8);
        }
        pUVar8[1].field_0x8 = *puVar16;
        *(UObjectReplicationBridge **)(pUVar8 + 1) = this;
        (**(code **)(*(longlong *)pUVar8 + 0x2f8))(pUVar8);
      }
      uVar13 = (int)ppUVar14 + 1;
      ppUVar14 = (UObject **)(ulonglong)uVar13;
      ppUVar15 = (UObject **)((longlong)ppUVar15 + 1);
      puVar16 = puVar16 + 0x14;
    } while ((int)uVar13 < iVar5);
  }
  return;
}

// Initialize @ 14427ea40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::Initialize(UObjectReplicationBridge *this,UReplicationSystem *param_1)

{
  FObjectPollFrequencyLimiter *pFVar1;
  uint uVar2;
  FReplicationSystemInternal *pFVar3;
  FName *pFVar4;
  FReplicationProtocol *this_00;
  FDelegateHandle FVar5;
  uint uVar6;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [16];
  undefined2 local_338;
  int local_334;
  TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_330;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_378;
  UReplicationBridge::Initialize((UReplicationBridge *)this,param_1);
  local_330.ArrayMax = 0x20;
  local_330.AllocatorInstance.SecondaryData = (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0
  ;
  local_330.ArrayNum = 0;
  uVar2 = UE::Net::Private::FReplicationProtocolManager::CalculateProtocolIdentifier(&local_330);
  local_348._8_8_ = 0;
  local_338 = 0;
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  pFVar4 = ::FName::FName((FName *)local_348,"DestructionInfo");
  local_334 = UE::Net::Private::FNetTypeStats::GetOrCreateTypeStats(&pFVar3->TypeStats,*pFVar4);
  this_00 = UE::Net::Private::FReplicationProtocolManager::CreateReplicationProtocol
                      ((FReplicationProtocolManager *)this->_padding_,uVar2,&local_330,
                       L"InternalDestructionInfo",
                       (FCreateReplicationProtocolParameters *)(local_348 + 8));
  this->DestructionInfoProtocol = this_00;
  UE::Net::FReplicationProtocol::AddRef(this_00);
  if (local_330.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    FMemory::Free((void *)local_330.AllocatorInstance.SecondaryData);
  }
  pFVar1 = this->PollFrequencyLimiter;
  uVar2 = *(uint *)(this->_padding_ + 0xc);
  uVar6 = uVar2 + 0x1f & 0xffffffe0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar1->FramesBetweenUpdates,uVar6,Default);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar1->FrameCounters,uVar6,Default);
  UE::Net::FNetBitArray::Init(&this->ObjectsWithObjectReferences,uVar2);
  UE::Net::FNetBitArray::Init(&this->GarbageCollectionAffectedObjects,uVar2);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
  AddUObject<UObjectReplicationBridge>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
              *)(this->_padding_ + 0x468),(UObjectReplicationBridge *)local_348,(pmf_6f2373ad)this);
  LoadConfig(this);
  ::FString::RemoveSpacesInline(&IgnoreProtocolMismatchForClasses);
  ::FString::ParseIntoArray
            (&IgnoreProtocolMismatchForClasses,&this->ClassNamesToIgnoreProtocolMismatch,L",",true);
  local_348._0_8_ = this;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
          ::
          AddLambda<_UObjectReplicationBridge::InitConditionalPropertyDelegates_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
                      *)&UE::Net::Private::FPropertyConditionDelegates::
                         OnPropertyCustomConditionChangedDelegate,(<lambda_1> *)(local_348 + 8));
                    /* WARNING: Load size is inaccurate */
  (this->OnCustomConditionChangedHandle).ID = *FVar5.ID;
  local_348._0_8_ = this;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(UObject_const_*,unsigned_short,enum_ELifetimeCondition),FDefaultDelegateUserPolicy>
          ::
          AddLambda<_UObjectReplicationBridge::InitConditionalPropertyDelegates_::__l2::<lambda_2>_>
                    (&UE::Net::Private::FPropertyConditionDelegates::
                      OnPropertyDynamicConditionChangedDelegate,(<lambda_2> *)(local_348 + 8));
                    /* WARNING: Load size is inaccurate */
  (this->OnDynamicConditionChangedHandle).ID = *FVar5.ID;
  InitNetObjectFactories(this);
  return;
}

// IsClassCritical @ 144282840

bool __thiscall
UObjectReplicationBridge::IsClassCritical(UObjectReplicationBridge *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  UObjectReplicationBridgeConfig *pUVar5;
  FName FVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  pUVar5 = UObjectReplicationBridgeConfig::GetConfig();
  if (pUVar5->bAllClassesCritical != false) {
    return true;
  }
  if ((0 < *(int *)&(this->ClassesFlaggedCritical).field_0x8 -
           *(int *)&(this->ClassesFlaggedCritical).field_0x34) && (param_1 != (UClass *)0x0)) {
    do {
      FVar6 = GetConfigClassPathName(this,(UClass *)&stack0x00000018);
      lVar2 = *(longlong *)FVar6;
      uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(this->ClassesFlaggedCritical).field_0x8 !=
          *(int *)&(this->ClassesFlaggedCritical).field_0x34) {
        puVar7 = *(undefined1 **)&(this->ClassesFlaggedCritical).field_0x40;
        puVar8 = &(this->ClassesFlaggedCritical).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar8 = puVar7;
        }
        iVar4 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(this->ClassesFlaggedCritical).field_0x48 - 1U &
                                  (int)((ulonglong)lVar2 >> 0x20) + uVar3) * 4);
        if (iVar4 != -1) {
          do {
            lVar1 = *(longlong *)&this->ClassesFlaggedCritical + (longlong)iVar4 * 0x14;
            if (*(longlong *)(*(longlong *)&this->ClassesFlaggedCritical + (longlong)iVar4 * 0x14)
                == lVar2) {
              puVar7 = (undefined1 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar7 = (undefined1 *)0x0;
              }
              if (puVar7 != (undefined1 *)0x0) {
                return (bool)*puVar7;
              }
              break;
            }
            iVar4 = *(int *)(lVar1 + 0xc);
          } while (iVar4 != -1);
        }
      }
      param_1 = (UClass *)param_1->_padding_;
    } while (param_1 != (UClass *)0x0);
  }
  return false;
}

// IsClassReplicatedByDefault @ 144282970

bool __thiscall
UObjectReplicationBridge::IsClassReplicatedByDefault(UObjectReplicationBridge *this,UClass *param_1)

{
  return param_1 != (UClass *)0x0;
}

// IsNetRefHandlePreRegistered @ 144282e60

bool __thiscall
UObjectReplicationBridge::IsNetRefHandlePreRegistered
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar1 = this->_padding_;
  uVar5 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)(lVar1 + 0x58) != *(int *)(lVar1 + 0x84)) {
    lVar6 = *(longlong *)(lVar1 + 0x90);
    if (*(longlong *)(lVar1 + 0x90) == 0) {
      lVar6 = lVar1 + 0x88;
    }
    iVar2 = *(int *)(lVar6 + ((uVar5 >> 0x20) * 0x17 + uVar5 &
                             (ulonglong)(*(int *)(lVar1 + 0x98) - 1)) * 4);
    if (iVar2 != -1) {
      do {
        puVar4 = (ulonglong *)((longlong)iVar2 * 0x40 + *(longlong *)(lVar1 + 0x50));
        if ((*puVar4 & 0x3fffffffffffff) == uVar5) {
          puVar3 = puVar4 + 1;
          if (puVar4 == (ulonglong *)0x0) {
            puVar3 = (ulonglong *)0x0;
          }
          if (puVar3 == (ulonglong *)0x0) {
            return false;
          }
          return (bool)((byte)puVar3[5] >> 5 & 1);
        }
        iVar2 = (int)puVar4[7];
      } while (iVar2 != -1);
    }
  }
  return false;
}

// LoadConfig @ 144283180

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall UObjectReplicationBridge::LoadConfig(UObjectReplicationBridge *this)

{
  undefined1 *puVar1;
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *this_00;
  TMap<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
  *this_01;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_02;
  TMap<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
  *this_03;
  TMap<FName,UObjectReplicationBridge::FClassPrioritizerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>_>
  *this_04;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *pTVar2;
  TMap<FName,EIrisAsyncLoadingPriority,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EIrisAsyncLoadingPriority,0>_>
  *pTVar3;
  TMap<UClass_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>_>
  *this_05;
  int iVar4;
  FName FVar5;
  code *pcVar6;
  FName *pFVar7;
  bool bVar8;
  FNameEntryId FVar9;
  uint uVar10;
  UObjectReplicationBridgeConfig *pUVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName *pFVar12;
  FObjectReplicationBridgePollConfig *pFVar13;
  FObjectReplicationBridgePrioritizerConfig *pFVar14;
  FObjectReplicationBridgeDeltaCompressionConfig *pFVar15;
  FObjectReplicatedBridgeCriticalClassConfig *pFVar16;
  FObjectReplicationBridgeTypeStatsConfig *pFVar17;
  FObjectReplicationBridgeAsyncLoadingClassConfig *pFVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&> local_res18;
  FName local_188;
  undefined4 local_180;
  undefined4 local_17c;
  FName local_178;
  uint local_170;
  FName local_16c;
  undefined1 local_164;
  FPollInfo local_160;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  UObjectReplicationBridgeConfig *local_140;
  TMap<FName,EIrisAsyncLoadingPriority,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EIrisAsyncLoadingPriority,0>_>
  *local_138;
  TArrayView<FObjectReplicationBridgePollConfig_const_,int> local_130;
  TArrayView<FObjectReplicationBridgeFilterConfig_const_,int> local_120;
  FName *local_110;
  uint *local_108;
  TArrayView<FObjectReplicationBridgePrioritizerConfig_const_,int> local_100;
  FObjectReplicationBridgePrioritizerConfig *local_f0;
  FName *local_e8;
  TArrayView<FObjectReplicationBridgeDeltaCompressionConfig_const_,int> local_e0;
  FObjectReplicationBridgeDeltaCompressionConfig *local_d0;
  bool *local_c8;
  TArrayView<FObjectReplicatedBridgeCriticalClassConfig_const_,int> local_c0;
  FObjectReplicatedBridgeCriticalClassConfig *local_b0;
  bool *local_a8;
  TArrayView<FObjectReplicationBridgeTypeStatsConfig_const_,int> local_a0;
  FObjectReplicationBridgeTypeStatsConfig *local_90;
  FName *local_88;
  TArrayView<FObjectReplicationBridgeAsyncLoadingClassConfig_const_,int> local_80;
  FObjectReplicationBridgeAsyncLoadingClassConfig *local_70;
  EIrisAsyncLoadingPriority *local_68;
  
  this_00 = &this->ClassHierarchyPollPeriodOverrides;
  this->bHasPollOverrides = false;
  this->bHasDirtyClassesInPollPeriodOverrides = false;
  bVar8 = 1 < *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ClassHierarchyPollPeriodOverrides).field_0xc;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x2c;
  *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ClassHierarchyPollPeriodOverrides).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->ClassHierarchyPollPeriodOverrides).field_0x48 = 1;
    TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->ClassesWithPollPeriodOverride;
  bVar8 = 1 < *(int *)&(this->ClassesWithPollPeriodOverride).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->ClassesWithPollPeriodOverride).field_0xc;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClassesWithPollPeriodOverride).field_0x2c;
  *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ClassesWithPollPeriodOverride).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->ClassesWithPollPeriodOverride).field_0x48 = 1;
    TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->ClassesWithoutPollPeriodOverride;
  bVar8 = 1 < (this->ClassesWithoutPollPeriodOverride).HashSize;
  if (!bVar8) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_02);
  }
  puVar1 = &(this->ClassesWithoutPollPeriodOverride).Elements.field_0xc;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x34 = 0;
  iVar4 = *(int *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x2c;
  *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClassesWithoutPollPeriodOverride).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ClassesWithoutPollPeriodOverride).Elements.field_0x10,0);
  }
  if (bVar8) {
    (this->ClassesWithoutPollPeriodOverride).HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(this_02);
  }
  this_03 = &this->ClassesWithDynamicFilter;
  bVar8 = 1 < *(int *)&(this->ClassesWithDynamicFilter).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  puVar1 = &(this->ClassesWithDynamicFilter).field_0xc;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClassesWithDynamicFilter).field_0x2c;
  *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ClassesWithDynamicFilter).field_0x10,
               0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->ClassesWithDynamicFilter).field_0x48 = 1;
    TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
              *)this_03);
  }
  this_04 = &this->ClassesWithPrioritizer;
  bVar8 = 1 < *(int *)&(this->ClassesWithPrioritizer).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>,FDefaultSetAllocator>
                      *)this_04);
  }
  puVar1 = &(this->ClassesWithPrioritizer).field_0xc;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this_04,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClassesWithPrioritizer).field_0x2c;
  *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ClassesWithPrioritizer).field_0x10,0)
    ;
  }
  if (bVar8) {
    *(undefined4 *)&(this->ClassesWithPrioritizer).field_0x48 = 1;
    TSet<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>,FDefaultSetAllocator>
              *)this_04);
  }
  pTVar2 = &this->ClassesWithDeltaCompression;
  bVar8 = 1 < *(int *)&(this->ClassesWithDeltaCompression).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                    *)pTVar2);
  }
  puVar1 = &(this->ClassesWithDeltaCompression).field_0xc;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClassesWithDeltaCompression).field_0x2c;
  *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ClassesWithDeltaCompression).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->ClassesWithDeltaCompression).field_0x48 = 1;
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)pTVar2);
  }
  pTVar2 = &this->ClassesFlaggedCritical;
  bVar8 = 1 < *(int *)&(this->ClassesFlaggedCritical).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                    *)pTVar2);
  }
  puVar1 = &(this->ClassesFlaggedCritical).field_0xc;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClassesFlaggedCritical).field_0x2c;
  *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ClassesFlaggedCritical).field_0x10,0)
    ;
  }
  if (bVar8) {
    *(undefined4 *)&(this->ClassesFlaggedCritical).field_0x48 = 1;
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)pTVar2);
  }
  pTVar3 = &this->ClassesIrisAsyncLoadingPriority;
  bVar8 = 1 < *(int *)&(this->ClassesIrisAsyncLoadingPriority).field_0x48;
  local_138 = pTVar3;
  if (!bVar8) {
    TSet<TTuple<FName,enum_EIrisAsyncLoadingPriority>,TDefaultMapHashableKeyFuncs<FName,enum_EIrisAsyncLoadingPriority,0>,FDefaultSetAllocator>
    ::UnhashElements(pTVar3);
  }
  puVar1 = &(this->ClassesIrisAsyncLoadingPriority).field_0xc;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClassesIrisAsyncLoadingPriority).field_0x2c;
  *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ClassesIrisAsyncLoadingPriority).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->ClassesIrisAsyncLoadingPriority).field_0x48 = 1;
    TSet<TTuple<FName,enum_EIrisAsyncLoadingPriority>,TDefaultMapHashableKeyFuncs<FName,enum_EIrisAsyncLoadingPriority,0>,FDefaultSetAllocator>
    ::Rehash(pTVar3);
  }
  this_05 = &this->ConfigClassPathNameCache;
  bVar8 = 1 < *(int *)&(this->ConfigClassPathNameCache).field_0x48;
  if (!bVar8) {
    TSet<TTuple<UClass_const_*,FName>,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UClass_const_*,FName>,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>,FDefaultSetAllocator>
                      *)this_05);
  }
  puVar1 = &(this->ConfigClassPathNameCache).field_0xc;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_05,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x34 = 0;
  iVar4 = *(int *)&(this->ConfigClassPathNameCache).field_0x2c;
  *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ConfigClassPathNameCache).field_0x10,
               0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->ConfigClassPathNameCache).field_0x48 = 1;
    TSet<TTuple<UClass_const_*,FName>,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UClass_const_*,FName>,TDefaultMapHashableKeyFuncs<UClass_const_*,FName,0>,FDefaultSetAllocator>
              *)this_05);
  }
  pUVar11 = UObjectReplicationBridgeConfig::GetConfig();
  local_140 = pUVar11;
  FVar9 = FNameEntryId::FromValidEName((EName)local_res8);
  local_188.Number = 0;
  local_188.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar9.Value);
  FVar9 = FNameEntryId::FromValidEName((EName)local_res10);
  local_17c = 0;
  local_180 = *(undefined4 *)CONCAT44(extraout_var_00,FVar9.Value);
  UObjectReplicationBridgeConfig::GetPollConfigs(pUVar11,&local_130);
  for (pFVar13 = local_130.DataPtr; pFVar13 != local_130.DataPtr + local_130.ArrayNum;
      pFVar13 = pFVar13 + 1) {
    pFVar12 = &local_188;
    do {
      if (*pFVar12 == pFVar13->ClassName) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3515033580445108852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                           ,0xa74,"!ForbiddenNamesArray.Contains(PollOverride.ClassName)");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_1442837a6;
      }
      pFVar12 = pFVar12 + 1;
    } while (pFVar12 != &local_178);
    this->bHasPollOverrides = true;
    local_160.PollFrequency = pFVar13->PollFrequency;
    if (local_160.PollFrequency <= 0.0) {
      local_160.PollFrequency = 0.0;
    }
    local_160.Class.WeakPtr.ObjectIndex = 0;
    local_160.Class.WeakPtr.ObjectSerialNumber = 0;
    if (pFVar13->bIncludeSubclasses == false) {
      TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
      ::Emplace<FName_const_&,UObjectReplicationBridge::FPollInfo_const_&>
                ((TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
                  *)this_01,&pFVar13->ClassName,&local_160);
    }
    else {
      this->bHasDirtyClassesInPollPeriodOverrides = true;
      TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
      ::Emplace<FName_const_&,UObjectReplicationBridge::FPollInfo_const_&>
                ((TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
                  *)this_00,&pFVar13->ClassName,&local_160);
    }
LAB_1442837a6:
  }
  if (this->bHasDirtyClassesInPollPeriodOverrides != false) {
    FindClassesInPollPeriodOverrides(this);
  }
  pUVar11 = local_140;
  FVar5 = local_140->DefaultSpatialFilterName;
  this->DefaultSpatialFilterName = FVar5;
  uVar10 = UReplicationSystem::GetFilterHandle((UReplicationSystem *)this->_padding_,FVar5);
  this->DefaultSpatialFilterHandle = uVar10;
  UObjectReplicationBridgeConfig::GetFilterConfigs(pUVar11,&local_120);
  if (local_120.DataPtr != local_120.DataPtr + local_120.ArrayNum) {
    local_108 = &local_170;
    pFVar12 = &(local_120.DataPtr)->FilterProfile;
    do {
      local_16c.ComparisonIndex.Value = 0;
      local_16c.Number = 0;
      local_164 = 0;
      local_170 = UReplicationSystem::GetFilterHandle
                            ((UReplicationSystem *)this->_padding_,pFVar12[-1]);
      local_16c = *pFVar12;
      local_164 = (undefined1)pFVar12[1].ComparisonIndex.Value;
      local_110 = pFVar12 + -2;
      TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&>_>
                ((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                  *)&this->ClassesWithDynamicFilter,&local_res18,(bool *)&local_110);
      pFVar7 = pFVar12 + 1;
      pFVar12 = (FName *)&pFVar12[3].Number;
    } while ((FObjectReplicationBridgeFilterConfig *)&pFVar7->Number !=
             local_120.DataPtr + local_120.ArrayNum);
  }
  UObjectReplicationBridgeConfig::GetPrioritizerConfigs(pUVar11,&local_100);
  if (local_100.DataPtr != local_100.DataPtr + local_100.ArrayNum) {
    local_e8 = &local_178;
    pFVar14 = local_100.DataPtr;
    do {
      local_178.Number._0_1_ = 0;
      local_178.ComparisonIndex.Value =
           UReplicationSystem::GetPrioritizerHandle
                     ((UReplicationSystem *)this->_padding_,pFVar14->PrioritizerName);
      local_178.Number._0_1_ = pFVar14->bForceEnableOnAllInstances;
      local_f0 = pFVar14;
      TSet<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassPrioritizerInfo_const_&>_>
                ((TSet<TTuple<FName,UObjectReplicationBridge::FClassPrioritizerInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>,FDefaultSetAllocator>
                  *)this_04,
                 (TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassPrioritizerInfo_const_&>
                  *)&local_res18.Value,(bool *)&local_f0);
      pFVar14 = pFVar14 + 1;
    } while (pFVar14 != local_100.DataPtr + local_100.ArrayNum);
  }
  UObjectReplicationBridgeConfig::GetDeltaCompressionConfigs(pUVar11,&local_e0);
  for (pFVar15 = local_e0.DataPtr; pFVar15 != local_e0.DataPtr + local_e0.ArrayNum;
      pFVar15 = pFVar15 + 1) {
    pFVar12 = &local_188;
    do {
      if (*pFVar12 == pFVar15->ClassName) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3515033580445108907>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                           ,0xaab,"!ForbiddenNamesArray.Contains(DCConfig.ClassName)");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_144283997;
      }
      pFVar12 = pFVar12 + 1;
    } while (pFVar12 != &local_178);
    local_c8 = &pFVar15->bEnableDeltaCompression;
    local_d0 = pFVar15;
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,bool_const_&>_>
              ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)&this->ClassesWithDeltaCompression,
               (TPairInitializer<FName_const_&,bool_const_&> *)local_150,(bool *)&local_d0);
LAB_144283997:
  }
  if (pUVar11->bAllClassesCritical == false) {
    UObjectReplicationBridgeConfig::GetCriticalClassConfigs(pUVar11,&local_c0);
    for (pFVar16 = local_c0.DataPtr; pFVar16 != local_c0.DataPtr + local_c0.ArrayNum;
        pFVar16 = pFVar16 + 1) {
      pFVar12 = &local_188;
      do {
        if (*pFVar12 == pFVar16->ClassName) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3515033580445108921>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                             ,0xab9,"!ForbiddenNamesArray.Contains(CriticalClassConfig.ClassName)");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_144283a3f;
        }
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != &local_178);
      local_a8 = &pFVar16->bDisconnectOnProtocolMismatch;
      local_b0 = pFVar16;
      TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,bool_const_&>_>
                ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                  *)&this->ClassesFlaggedCritical,
                 (TPairInitializer<FName_const_&,bool_const_&> *)(local_150 + 4),(bool *)&local_b0);
LAB_144283a3f:
    }
  }
  UObjectReplicationBridgeConfig::GetTypeStatsConfigs(pUVar11,&local_a0);
  for (pFVar17 = local_a0.DataPtr; pFVar17 != local_a0.DataPtr + local_a0.ArrayNum;
      pFVar17 = pFVar17 + 1) {
    if ((bUseVerboseIrisCsvStats != false) || (pFVar17->bIncludeInMinimalCSVStats != false)) {
      local_88 = &pFVar17->TypeStatsName;
      local_90 = pFVar17;
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                  *)&this->ClassesWithTypeStats,
                 (TPairInitializer<FName_const_&,FName_const_&> *)local_148,(bool *)&local_90);
    }
  }
  UObjectReplicationBridgeConfig::GetAsyncLoadingClassConfigs(pUVar11,&local_80);
  pTVar3 = local_138;
  for (pFVar18 = local_80.DataPtr; pFVar18 != local_80.DataPtr + local_80.ArrayNum;
      pFVar18 = pFVar18 + 1) {
    local_68 = &pFVar18->IrisAsyncLoadingPriority;
    local_70 = pFVar18;
    TSet<TTuple<FName,enum_EIrisAsyncLoadingPriority>,TDefaultMapHashableKeyFuncs<FName,enum_EIrisAsyncLoadingPriority,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,enum_EIrisAsyncLoadingPriority_const_&>_>
              (pTVar3,(TPairInitializer<FName_const_&,EIrisAsyncLoadingPriority_const_&> *)
                      (local_148 + 4),(bool *)&local_70);
  }
  return;
}

// NetFlushDormantObject @ 144284190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::NetFlushDormantObject
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReplicationSystemInternal *pFVar4;
  FNetBitArrayView local_28;
  FString local_18;
  
  pFVar4 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar4->NetRefHandleManager,param_1);
  if (uVar3 != 0) {
    if (5 < (byte)LogIris._0_1_) {
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                (&pFVar4->NetRefHandleManager,&local_18,uVar3);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_28,
               (uint *)(pFVar4->NetRefHandleManager).DormantObjectsPendingFlushNet.Storage.
                       AllocatorInstance.Data,
               (pFVar4->NetRefHandleManager).DormantObjectsPendingFlushNet.BitCount);
    if ((local_28.BitCount <= uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.Storage[uVar3 >> 5] = local_28.Storage[uVar3 >> 5] | 1 << (uVar3 & 0x1f);
    UReplicationSystem::MarkDirty((UReplicationSystem *)this->_padding_,param_1);
  }
  return;
}

// ObjectLevelHasFinishedLoading @ 1442846d0

bool __thiscall
UObjectReplicationBridge::ObjectLevelHasFinishedLoading
          (UObjectReplicationBridge *this,UObject *param_1)

{
  return true;
}

// OnErrorBitstreamCorrupted @ 1442846f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::OnErrorBitstreamCorrupted
          (UObjectReplicationBridge *this,FNetRefHandle param_1,uint param_2)

{
  uint uVar1;
  ForAnyElementType FVar2;
  FNetRefHandle_u_0 local_res10;
  undefined1 local_28 [16];
  FString local_18;
  
  local_res10 = param_1.field0_0x0;
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    ((FNetRefHandleManager *)this->_padding_,param_1);
  if (uVar1 == 0) {
    if ((byte)LogIris._0_1_ < 2) goto LAB_144284890;
    (**(code **)(this->_padding_ + 0x370))(this,&local_18,param_2);
    if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl((FString *)local_28,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl((FString *)local_28,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogIris._0_1_ < 2) goto LAB_144284890;
    (**(code **)(this->_padding_ + 0x370))(this,local_28,param_2);
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              ((FNetRefHandleManager *)this->_padding_,&local_18,uVar1);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar2.Data = (FScriptContainerElement *)local_28._0_8_;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar2.Data = (FScriptContainerElement *)local_28._0_8_;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
LAB_144284890:
  local_28._8_8_ = &local_res10;
  local_28._0_8_ = this;
  `UObjectReplicationBridge::OnErrorBitstreamCorrupted'::__l2::<lambda_1>::operator()(local_28);
  return;
}

// OnErrorBlockedByAsyncLoading @ 1442848d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::OnErrorBlockedByAsyncLoading
          (UObjectReplicationBridge *this,FNetRefHandle param_1,uint param_2,
          TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  FNetRefHandle FVar1;
  longlong lVar2;
  FNetRefHandleManager *this_00;
  uint uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  FNetRefHandle_u_0 *pFVar10;
  FNetRefHandle_u_0 local_res10;
  undefined1 local_68 [4];
  uint local_64;
  FString local_60;
  FString local_50;
  undefined1 local_40 [16];
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *local_30;
  
  if (!bLogBlockedByAsyncLoadingError) {
    return;
  }
  local_res10 = param_1.field0_0x0;
  uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    ((FNetRefHandleManager *)this->_padding_,param_1);
  if (uVar3 == 0) {
    if ((byte)LogIris._0_1_ < 2) goto LAB_144284a7a;
    (**(code **)(this->_padding_ + 0x370))(this,local_40,param_2);
    if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl(&local_60,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_60,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar5.Data = (FScriptContainerElement *)local_40._0_8_;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
      FVar5.Data = (FScriptContainerElement *)local_40._0_8_;
    }
  }
  else {
    if ((byte)LogIris._0_1_ < 2) goto LAB_144284a7a;
    (**(code **)(this->_padding_ + 0x370))(this,&local_50,param_2);
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              ((FNetRefHandleManager *)this->_padding_,(FString *)local_40,uVar3);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar5.Data = local_50.Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
      FVar5.Data = local_50.Data.AllocatorInstance.Data;
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
LAB_144284a7a:
  local_64 = param_3->ArrayNum;
  uVar6 = (ulonglong)(int)local_64;
  pFVar10 = (FNetRefHandle_u_0 *)(param_3->AllocatorInstance).Data;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)(pFVar10 + uVar6);
  do {
    FVar5.Data = local_60.Data.AllocatorInstance.Data;
    if (param_3->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_68);
    }
    if (pFVar10 == (FNetRefHandle_u_0 *)FVar5.Data) {
      local_40._8_8_ = &local_res10;
      local_40._0_8_ = this;
      local_30 = param_3;
      `UObjectReplicationBridge::OnErrorBlockedByAsyncLoading'::__l2::<lambda_1>::operator()
                (local_40);
      return;
    }
    FVar1.field0_0x0 = (FNetRefHandle_u_0)pFVar10->Value;
    if (1 < (byte)LogIris._0_1_) {
      lVar2 = this->_padding_;
      uVar6 = (ulonglong)FVar1.field0_0x0 & 0x3fffffffffffff;
      if (*(int *)(lVar2 + 0x58) != *(int *)(lVar2 + 0x84)) {
        lVar8 = lVar2 + 0x88;
        if (*(longlong *)(lVar2 + 0x90) != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x90);
        }
        iVar4 = *(int *)(lVar8 + ((ulonglong)(*(int *)(lVar2 + 0x98) - 1) &
                                 (uVar6 >> 0x20) * 0x17 + uVar6) * 4);
        if (iVar4 != -1) {
          do {
            puVar7 = (ulonglong *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar2 + 0x50));
            if ((*puVar7 & 0x3fffffffffffff) == uVar6) {
              puVar9 = puVar7 + 1;
              if (puVar7 == (ulonglong *)0x0) {
                puVar9 = (ulonglong *)0x0;
              }
              if (puVar9 != (ulonglong *)0x0) {
                UE::Net::FStringTokenStore::ResolveToken
                          (*(FStringTokenStore **)(lVar2 + 0x108),
                           (FNetToken)*(FNetToken_u_0 *)&((FNetToken_u_0 *)(puVar9 + 3))->_s_0,
                           (FNetTokenStoreState *)0x0);
              }
              break;
            }
            iVar4 = (int)puVar7[7];
          } while (iVar4 != -1);
        }
      }
      this_00 = (FNetRefHandleManager *)this->_padding_;
      uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,FVar1);
      if (uVar3 == 0) {
        if ((FVar1.field0_0x0 == 0) || ((ulonglong)FVar1.field0_0x0 >> 0x36 == 0)) {
          ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        ::FString::PrintfImpl((FString *)local_40,L"NetObject None (InternalIndex: None) (%s)");
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      else {
        UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                  (this_00,(FString *)local_40,uVar3);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_40._0_8_);
      }
    }
    uVar6 = (ulonglong)local_64;
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// OnErrorBlockedByParents @ 144284ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::OnErrorBlockedByParents
          (UObjectReplicationBridge *this,FNetRefHandle param_1,uint param_2,
          TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  FNetRefHandle_u_0 *pFVar1;
  int iVar2;
  FNetRefHandleManager *this_00;
  FNetRefHandle_u_0_s_0 FVar3;
  FNetRefHandle_u_0_s_0 FVar4;
  FNetRefHandle_u_0_s_0 FVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  FNetRefHandle_u_0 *pFVar8;
  FNetRefHandle_u_0 local_res10;
  undefined1 local_58 [8];
  FString local_50;
  undefined1 local_40 [16];
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *local_30;
  
  if (!bLogMissingParentsError) {
    return;
  }
  local_res10 = param_1.field0_0x0;
  uVar6 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    ((FNetRefHandleManager *)this->_padding_,param_1);
  if (uVar6 == 0) {
    if ((byte)LogIris._0_1_ < 2) goto LAB_144284e49;
    (**(code **)(this->_padding_ + 0x370))(this,local_40,param_2);
    if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar7.Data = (FScriptContainerElement *)local_40._0_8_;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
      FVar7.Data = (FScriptContainerElement *)local_40._0_8_;
    }
  }
  else {
    if ((byte)LogIris._0_1_ < 2) goto LAB_144284e49;
    (**(code **)(this->_padding_ + 0x370))(this,&local_50,param_2);
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              ((FNetRefHandleManager *)this->_padding_,(FString *)local_40,uVar6);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar7.Data = local_50.Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
      FVar7.Data = local_50.Data.AllocatorInstance.Data;
    }
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
LAB_144284e49:
  pFVar8 = (FNetRefHandle_u_0 *)(param_3->AllocatorInstance).Data;
  iVar2 = param_3->ArrayNum;
  pFVar1 = pFVar8 + iVar2;
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_58);
    }
    if (pFVar8 == pFVar1) break;
    if (1 < (byte)LogIris._0_1_) {
      this_00 = (FNetRefHandleManager *)this->_padding_;
      FVar3 = pFVar8->_s_0;
      uVar6 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,(FNetRefHandle)FVar3)
      ;
      if (uVar6 == 0) {
        if ((pFVar8->Id == 0 && pFVar8->ReplicationSystemId == 0) ||
           ((&pFVar8->_s_0)->ReplicationSystemId == 0)) {
          ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        ::FString::PrintfImpl((FString *)local_40,L"NetObject None (InternalIndex: None) (%s)");
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      else {
        UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                  (this_00,(FString *)local_40,uVar6);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_40._0_8_);
      }
    }
    pFVar8 = pFVar8 + 1;
  }
  local_40._8_8_ = &local_res10;
  local_40._0_8_ = this;
  local_30 = param_3;
  `UObjectReplicationBridge::OnErrorBlockedByParents'::__l2::<lambda_1>::operator()(local_40);
  return;
}

// OnErrorCannotReplicateObject @ 144284fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::OnErrorCannotReplicateObject
          (UObjectReplicationBridge *this,FNetRefHandle param_1,uint param_2)

{
  uint uVar1;
  ForAnyElementType FVar2;
  FNetRefHandle_u_0 local_res10;
  undefined1 local_28 [16];
  FString local_18;
  
  local_res10 = param_1.field0_0x0;
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    ((FNetRefHandleManager *)this->_padding_,param_1);
  if (uVar1 == 0) {
    if ((byte)LogIris._0_1_ < 2) goto LAB_144285150;
    (**(code **)(this->_padding_ + 0x370))(this,&local_18,param_2);
    if ((local_res10.Value == 0) || ((local_res10.Value & 0xffc0000000000000) == 0)) {
      ::FString::PrintfImpl((FString *)local_28,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl((FString *)local_28,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogIris._0_1_ < 2) goto LAB_144285150;
    (**(code **)(this->_padding_ + 0x370))(this,local_28,param_2);
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              ((FNetRefHandleManager *)this->_padding_,&local_18,uVar1);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    FVar2.Data = (FScriptContainerElement *)local_28._0_8_;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar2.Data = (FScriptContainerElement *)local_28._0_8_;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
LAB_144285150:
  local_28._8_8_ = &local_res10;
  local_28._0_8_ = this;
  `UObjectReplicationBridge::OnErrorCannotReplicateObject'::__l2::<lambda_1>::operator()(local_28);
  return;
}

// OnErrorWithNetRefHandleReported @ 144285190

void __thiscall
UObjectReplicationBridge::OnErrorWithNetRefHandleReported
          (UObjectReplicationBridge *this,ENetRefHandleError param_1,FNetRefHandle param_2,
          uint param_3,TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 local_res10 [24];
  
  if (param_1 == BitstreamCorrupted) {
    OnErrorBitstreamCorrupted(this,param_2,param_3);
    return;
  }
  if (param_1 == ReplicationDisabled) {
    OnErrorCannotReplicateObject(this,param_2,param_3);
    return;
  }
  if (param_1 == BlockedByMustBeMapped) {
    OnErrorBlockedByAsyncLoading(this,param_2,param_3,param_4);
    return;
  }
  if (param_1 != BlockedByCreationParents) {
    `UObjectReplicationBridge::OnErrorWithNetRefHandleReported'::__l9::<lambda_1>::operator()
              (local_res10);
    return;
  }
  OnErrorBlockedByParents(this,param_2,param_3,param_4);
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144285250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::OnMaxInternalNetRefIndexIncreased
          (UObjectReplicationBridge *this,uint param_1)

{
  FObjectPollFrequencyLimiter *pFVar1;
  uint uVar2;
  
  pFVar1 = this->PollFrequencyLimiter;
  uVar2 = param_1 + 0x1f & 0xffffffe0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar1->FramesBetweenUpdates,uVar2,Default);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar1->FrameCounters,uVar2,Default);
  UE::Net::FNetBitArray::SetNumBits(&this->ObjectsWithObjectReferences,param_1);
  UE::Net::FNetBitArray::SetNumBits(&this->GarbageCollectionAffectedObjects,param_1);
  return;
}

// OnPostReceiveUpdate @ 144285560

void __thiscall UObjectReplicationBridge::OnPostReceiveUpdate(UObjectReplicationBridge *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->NetObjectFactories).AllocatorInstance.Data;
  iVar2 = (this->NetObjectFactories).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->NetObjectFactories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNetObjectFactory>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x308))();
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnPostSendUpdate @ 144285650

void __thiscall UObjectReplicationBridge::OnPostSendUpdate(UObjectReplicationBridge *this)

{
  this->bBlockStartRootObjectReplication = false;
  return;
}

// OnProtocolMismatchDetected @ 144285690

void __thiscall
UObjectReplicationBridge::OnProtocolMismatchDetected
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  return;
}

// OnProtocolMismatchReported @ 1442856a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::OnProtocolMismatchReported
          (UObjectReplicationBridge *this,FNetRefHandle param_1,uint param_2)

{
  uchar *puVar1;
  FNetRefHandleManager *this_00;
  TObjectPtr<UObject> this_01;
  FReplicationInstanceProtocol *pFVar2;
  FReplicationProtocol *pFVar3;
  FReplicationFragment *pFVar4;
  FReplicationStateDescriptor *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TObjectPtr<UObject>_u_0 *pTVar9;
  UObjectBaseUtility *this_02;
  FName *pFVar10;
  FReplicatedObjectData *pFVar11;
  longlong lVar12;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar13;
  ushort uVar14;
  undefined1 auStackY_4a8 [32];
  uint local_468 [2];
  uint local_460;
  FName local_458;
  FName local_450;
  UObjectBaseUtility *local_448;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FName local_3c0;
  UObjectReplicationBridge *local_3b8;
  uint *local_3b0;
  void *local_3a8 [2];
  void *local_398 [2];
  FString local_388;
  void *local_378 [2];
  void *local_368 [2];
  TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_358;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  this_00 = (FNetRefHandleManager *)this->_padding_;
  local_468[0] = param_2;
  uVar8 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  local_460 = uVar8;
  if (uVar8 == 0) {
    if (2 < (byte)LogIris._0_1_) {
      if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
        ::FString::PrintfImpl(&local_440,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_440,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      (**(code **)(this->_padding_ + 0x370))(this,local_3a8,local_468[0]);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_3a8[0] != (void *)0x0) {
        FMemory::Free(local_3a8[0]);
      }
      if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pTVar9 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                         &this_00->ReplicatedInstances,uVar8)->field0_0x0;
    this_01.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar9->DebugPtr;
    this_02 = (UObjectBaseUtility *)0x0;
    if (this_01.field0_0x0 != (UObject *)0x0) {
      this_02 = (UObjectBaseUtility *)UObject::GetArchetype((UObject *)this_01.field0_0x0);
    }
    local_448 = this_02;
    if (1 < (byte)LogIris._0_1_) {
      pFVar10 = (FName *)UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                                   ((FNetRefHandleManager *)this->_padding_,&local_388,uVar8);
      if (pFVar10[1].ComparisonIndex.Value == 0) {
        local_458 = (FName)0x15060d16c;
      }
      else {
        local_458 = *pFVar10;
      }
      if (this_01.field0_0x0 == (UObject *)0x0) {
        ::FString::FString(&local_410,L"None");
      }
      else {
        local_3c0 = *(FName *)((longlong)this_01.field0_0x0 + 0x18);
        ::FName::ToString(&local_3c0,&local_410);
      }
      if (this_02 == (UObjectBaseUtility *)0x0) {
        ::FString::FString(&local_420,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName(this_02,&local_420,(UObject *)0x0);
      }
      if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
        ::FString::PrintfImpl(&local_430,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_430,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      local_450 = (FName)L"";
      if (local_430.Data.ArrayNum != 0) {
        local_450 = (FName)local_430.Data.AllocatorInstance.Data;
      }
      (**(code **)(this->_padding_ + 0x370))(this,local_398,local_468[0]);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_398[0] != (void *)0x0) {
        FMemory::Free(local_398[0]);
      }
      if ((FName)local_430.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (1 < (byte)LogIris._0_1_) {
        pFVar11 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                  ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                *)(this->_padding_ + 0x2a0),local_460);
        pFVar2 = pFVar11->InstanceProtocol;
        if (pFVar2 == (FReplicationInstanceProtocol *)0x0) {
          if ((byte)LogIris._0_1_ < 3) goto LAB_144285d29;
          if (this_01.field0_0x0 == (UObject *)0x0) {
            ::FString::FString(&local_3f0,L"None");
          }
          else {
            local_450 = *(FName *)((longlong)this_01.field0_0x0 + 0x18);
            ::FName::ToString(&local_450,&local_3f0);
          }
          if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
            ::FString::PrintfImpl(&local_400,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_400,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          (**(code **)(this->_padding_ + 0x370))(this,local_378,local_468[0]);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_378[0] != (void *)0x0) {
            FMemory::Free(local_378[0]);
          }
          local_3d0.Data.AllocatorInstance.Data = local_3f0.Data.AllocatorInstance.Data;
          if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_400.Data.AllocatorInstance.Data);
            local_3d0.Data.AllocatorInstance.Data = local_3f0.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar3 = pFVar11->Protocol;
          if (pFVar3 == (FReplicationProtocol *)0x0) {
            if ((byte)LogIris._0_1_ < 3) goto LAB_144285d29;
            if (this_01.field0_0x0 == (UObject *)0x0) {
              ::FString::FString(&local_3d0,L"None");
            }
            else {
              local_458 = *(FName *)((longlong)this_01.field0_0x0 + 0x18);
              ::FName::ToString(&local_458,&local_3d0);
            }
            if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
              ::FString::PrintfImpl(&local_3e0,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
            }
            else {
              ::FString::PrintfImpl(&local_3e0,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
            }
            (**(code **)(this->_padding_ + 0x370))(this,local_368,local_468[0]);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_368[0] != (void *)0x0) {
              FMemory::Free(local_368[0]);
            }
            if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
            }
          }
          else {
            if ((pFVar3->ReplicationStateCount != (uint)pFVar2->FragmentCount) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Protocol->ReplicationStateCount == InstanceProtocol->FragmentCount"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                                   ,0xba9,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_358.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0;
            local_358.ArrayNum = 0;
            local_358.ArrayMax = 0x20;
            uVar14 = 0;
            if (pFVar2->FragmentCount != 0) {
              do {
                pFVar4 = pFVar2->Fragments[uVar14];
                pFVar5 = pFVar3->ReplicationStateDescriptors[uVar14];
                if (local_358.ArrayNum == local_358.ArrayMax) {
                  local_358.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationFragmentInfo>_>
                                 (0x818,&local_358.AllocatorInstance,&local_358.ArrayMax);
                }
                lVar12 = (longlong)local_358.ArrayNum;
                local_358.ArrayNum = local_358.ArrayNum + 1;
                FVar13 = (ForElementType<UE::Net::FReplicationFragmentInfo>)&local_358;
                if (local_358.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
                  FVar13 = local_358.AllocatorInstance.SecondaryData;
                }
                uVar14 = uVar14 + 1;
                *(FReplicationStateDescriptor **)((longlong)FVar13 + lVar12 * 0x18) = pFVar5;
                puVar1 = (uchar *)((longlong)FVar13 + 8) + lVar12 * 0x18;
                puVar1[0] = '\0';
                puVar1[1] = '\0';
                puVar1[2] = '\0';
                puVar1[3] = '\0';
                puVar1[4] = '\0';
                puVar1[5] = '\0';
                puVar1[6] = '\0';
                puVar1[7] = '\0';
                *(FReplicationFragment **)((uchar *)((longlong)FVar13 + 0x10) + lVar12 * 0x18) =
                     pFVar4;
              } while (uVar14 < pFVar2->FragmentCount);
            }
            UE::Net::Private::ObjectBridgeDebugging::RemoteProtocolMismatchDetected
                      (&this->ArchetypesAlreadyPrinted,(UReplicationSystem *)this->_padding_,
                       local_468[0],&local_358,(UObject *)local_448,(UObject *)this_01.field0_0x0);
            local_3d0.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_358.AllocatorInstance.SecondaryData;
          }
        }
        if ((ForElementType<UE::Net::FReplicationFragmentInfo>)local_3d0.Data.AllocatorInstance.Data
            != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_144285d29:
  local_3b0 = local_468;
  local_3b8 = this;
  ``UObjectReplicationBridge::OnProtocolMismatchReported'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()(&local_3b8);
  return;
}

// OnStartPreSendUpdate @ 144285d70

void __thiscall UObjectReplicationBridge::OnStartPreSendUpdate(UObjectReplicationBridge *this)

{
  this->bBlockStartRootObjectReplication = true;
  return;
}

// OptionallySetObjectRequiresFrequentWorldLocationUpdate @ 144285d80

void __thiscall
UObjectReplicationBridge::OptionallySetObjectRequiresFrequentWorldLocationUpdate
          (UObjectReplicationBridge *this,FNetRefHandle param_1,bool param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FReplicationSystemInternal *pFVar7;
  uint uVar8;
  
  pFVar7 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar6 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar7->NetRefHandleManager,param_1);
  pFVar2 = (pFVar7->WorldLocations).ValidInfoIndexes.Storage.AllocatorInstance.Data;
  if (((pFVar7->WorldLocations).ValidInfoIndexes.BitCount <= uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = 1 << ((byte)uVar6 & 0x1f);
  lVar1 = (ulonglong)(uVar6 >> 5) * 4;
  if ((*(uint *)(pFVar2 + lVar1) & uVar8) == 0) {
    return;
  }
  if ((param_2) &&
     (bVar4 = UE::Net::Private::FReplicationFiltering::IsUsingSpatialFilter
                        (&pFVar7->Filtering,uVar6), bVar4)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  pFVar2 = (pFVar7->WorldLocations).ValidInfoIndexes.Storage.AllocatorInstance.Data;
  if (((pFVar7->WorldLocations).ValidInfoIndexes.BitCount <= uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((*(uint *)(pFVar2 + lVar1) & uVar8) == 0) || (!bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  UE::Net::FNetBitArrayHelper::SetBitValue
            ((uint *)(pFVar7->WorldLocations).ObjectsRequiringFrequentWorldLocationUpdate.Storage.
                     AllocatorInstance.Data,
             (pFVar7->WorldLocations).ObjectsRequiringFrequentWorldLocationUpdate.BitCount,uVar6,
             bVar4);
  return;
}

// PollAndCopy @ 144285f80

void __thiscall
UObjectReplicationBridge::PollAndCopy(UObjectReplicationBridge *this,FNetBitArrayView *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  FInitParams local_a8;
  FPreUpdateAndPollStats local_98;
  FObjectPoller local_88;
  
  if (!__CsvProfilerStat1875) {
    FCsvProfilerTrace::OutputInlineStat("ReplicationBridge_PollAndCopy",_GCsvCategory_Iris.Index);
    __CsvProfilerStat1875 = true;
  }
  uVar1 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationBridge_PollAndCopy",_GCsvCategory_Iris.Index,
             "CSV_ReplicationBridge_PollAndCopy");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1875,"ReplicationBridge_PollAndCopy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x753);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1875);
  }
  local_a8.ObjectReplicationBridge = this;
  local_a8.ReplicationSystemInternal =
       UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  UE::Net::Private::FObjectPoller::FObjectPoller(&local_88,&local_a8);
  UE::Net::Private::FObjectPoller::PollAndCopyObjects(&local_88,param_1);
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  local_98.PreUpdatedObjectCount = local_88.PollStats.PreUpdatedObjectCount;
  local_98.PolledObjectCount = local_88.PollStats.PolledObjectCount;
  local_98.SkippedObjectCount = local_88.PollStats.SkippedObjectCount;
  local_98.PolledReferencesObjectCount = local_88.PollStats.PolledReferencesObjectCount;
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    NetTraceNameId_1887 =
         UE::Net::CreatePersistentNetDebugName(L"ReplicationSystem.PolledObjectCount",0x23);
    _Init_thread_footer(&::_TSS0);
  }
  uVar2 = FNetTrace::TraceName(NetTraceNameId_1887);
  FNetTrace::TraceFrameStatsCounter
            (*(uint *)(this->_padding_ + 0x48),uVar2,local_98.PolledObjectCount);
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    NetTraceNameId_1888 =
         UE::Net::CreatePersistentNetDebugName
                   (L"ReplicationSystem.PolledReferencesObjectCount",0x2d);
    _Init_thread_footer(&::_TSS1);
  }
  uVar2 = FNetTrace::TraceName(NetTraceNameId_1888);
  FNetTrace::TraceFrameStatsCounter
            (*(uint *)(this->_padding_ + 0x48),uVar2,local_98.PolledReferencesObjectCount);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationBridge_PollAndCopy",uVar1);
  return;
}

// PostApplyInitialState @ 1442863e0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::PostApplyInitialState(UObjectReplicationBridge *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FReplicatedObjectData *pFVar3;
  UNetObjectFactory *pUVar4;
  TObjectPtr<UObject> *pTVar5;
  TObjectPtr<UObject>_u_0 local_18;
  undefined1 local_10 [8];
  
  pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
           ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                         *)(this->_padding_ + 0x2a0),param_1);
  pUVar4 = GetNetFactory(this,pFVar3->NetFactoryId);
  if (pUVar4 == (UNetObjectFactory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Factory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                       ,0x5eb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar5 = TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                      (this->_padding_ + 0x300),param_1);
  local_18.ObjectPtr.field0_0x0 = *(FObjectPtr *)&pTVar5->field0_0x0;
  UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
            ((FNetRefHandleManager *)this->_padding_,(uint)local_10);
  (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&local_18);
  return;
}

// PreRegisterNewObjectReferenceHandle @ 1442864c0

/* WARNING: Enum "Type": Some values do not have unique names */

FNetRefHandle __thiscall
UObjectReplicationBridge::PreRegisterNewObjectReferenceHandle
          (UObjectReplicationBridge *this,UObject *param_1)

{
  FObjectReferenceCache *this_00;
  int iVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  UObjectBaseUtility *in_R8;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  FNetRefHandle_u_0 local_18;
  undefined8 local_10;
  
  this_00 = (FObjectReferenceCache *)this->_padding_;
  if (this_00->bIsAuthority == 0) {
    if (1 < (byte)LogIrisReferences._0_1_) {
      if ((in_R8 == (UObjectBaseUtility *)0x0) || (*(longlong *)&in_R8->field_0x10 == 0)) {
        ::FString::FString((FString *)&local_18._s_0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(in_R8,(FString *)&local_18._s_0,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisReferences);
      if ((void *)local_18.Value != (void *)0x0) {
        FMemory::Free((void *)local_18);
      }
    }
    `UE::Net::Private::FObjectReferenceCache::PreRegisterObjectReferenceHandle'::__l10::<lambda_1>::
    operator()(local_res8);
    *(undefined8 *)param_1 = 0;
    return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
  }
  local_18.Value = 0;
  local_10 = 0;
  UE::Net::Private::FObjectReferenceCache::CreateObjectReferenceInternal
            (this_00,(UObject *)in_R8,(FNetObjectReference *)&local_18._s_0);
  uVar5 = local_18.Value & 0x3fffffffffffff;
  if (*(int *)&(this_00->ReferenceHandleToCachedReference).field_0x8 !=
      *(int *)&(this_00->ReferenceHandleToCachedReference).field_0x34) {
    puVar4 = *(undefined1 **)&(this_00->ReferenceHandleToCachedReference).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this_00->ReferenceHandleToCachedReference).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + ((uVar5 >> 0x20) * 0x17 + uVar5 &
                              (ulonglong)
                              (*(int *)&(this_00->ReferenceHandleToCachedReference).field_0x48 - 1))
                              * 4);
    if (iVar1 != -1) {
      while (puVar3 = (ulonglong *)
                      ((longlong)iVar1 * 0x40 +
                      *(longlong *)&this_00->ReferenceHandleToCachedReference),
            (*puVar3 & 0x3fffffffffffff) != uVar5) {
        iVar1 = (int)puVar3[7];
        if (iVar1 == -1) {
          *(FNetRefHandle_u_0 *)param_1 = local_18;
          return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
        }
      }
      puVar2 = puVar3 + 1;
      if (puVar3 == (ulonglong *)0x0) {
        puVar2 = (ulonglong *)0x0;
      }
      if (puVar2 != (ulonglong *)0x0) {
        *(byte *)(puVar2 + 5) = (byte)puVar2[5] | 0x20;
      }
    }
  }
  *(FNetRefHandle_u_0 *)param_1 = local_18;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// PreRegisterObjectWithReferenceHandle @ 144286810

void __thiscall
UObjectReplicationBridge::PreRegisterObjectWithReferenceHandle
          (UObjectReplicationBridge *this,UObject *param_1,FNetRefHandle param_2)

{
  UE::Net::Private::FObjectReferenceCache::AddPreRegisteredReference
            ((FObjectReferenceCache *)this->_padding_,param_2,param_1);
  return;
}

// PreSendUpdate @ 144286830

void __thiscall UObjectReplicationBridge::PreSendUpdate(UObjectReplicationBridge *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FReplicationSystemInternal *pFVar6;
  FReplicationSystemInternal *pFVar7;
  uint uVar8;
  int *piVar9;
  ForAnyElementType local_1b8;
  int local_1b0 [4];
  FNetBitArrayView local_1a0;
  FNetBitArrayView local_190;
  FNetBitArrayView local_178;
  FNetBitArrayView local_168;
  FNetBitArrayView local_158;
  FInitParams local_148;
  <lambda_1> local_138;
  FNetBitArrayView local_110;
  FNetBitArrayView local_f8;
  FNetBitArrayView local_e8;
  FNetBitArrayView local_d8;
  FNetBitArrayView local_c8;
  FNetBitArrayView local_b8;
  FNetBitArrayView local_a8;
  FObjectPoller local_98;
  
  pFVar6 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_110,
             (uint *)(pFVar6->NetRefHandleManager).PolledObjectsInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar6->NetRefHandleManager).PolledObjectsInternalIndices.BitCount);
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0[1] = 0;
  local_1b0[2] = local_110.BitCount;
  local_1b0[0] = 0;
  uVar8 = local_110.BitCount + 0x1f >> 5;
  if (local_110.BitCount + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&local_1b8,0,local_1b0 + 1);
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar8,&local_1b8,local_1b0,local_1b0 + 1);
  memset(local_1b8.Data + (longlong)iVar4 * 4,0,(ulonglong)uVar8 << 2);
  UE::Net::FNetBitArrayView::FNetBitArrayView(&local_178,(uint *)local_1b8.Data,local_1b0[2]);
  local_f8.Storage = local_178.Storage;
  local_f8.WordCount = local_178.WordCount;
  local_f8.BitCount = local_178.BitCount;
  BuildPollList(this,&local_f8);
  local_e8.Storage = local_178.Storage;
  local_e8.WordCount = local_178.WordCount;
  local_e8.BitCount = local_178.BitCount;
  PreUpdate(this,&local_e8);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_d8,
             (uint *)(pFVar6->NetRefHandleManager).PolledObjectsInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar6->NetRefHandleManager).PolledObjectsInternalIndices.BitCount);
  UE::Net::FNetBitArrayView::FNetBitArrayView(&local_1a0,local_d8.Storage,local_110.BitCount);
  if ((((FScriptContainerElement *)local_1a0.Storage == local_1b8.Data) ||
      (local_1a0.BitCount != local_1b0[2])) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x5e1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((local_1a0.WordCount != 0) && (local_1b0[0] != 0)) {
    memcpy(local_1a0.Storage,local_1b8.Data,(ulonglong)local_1a0.WordCount << 2);
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1895,"UObjectReplicationBridge_FinalizeDirtyObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x767);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1895);
  }
  pFVar7 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  if (((pFVar7->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Net::Private::FDirtyNetObjectTracker::UpdateAndLockDirtyNetObjects
            (&pFVar7->DirtyNetObjectTracker);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_158,
             (uint *)(pFVar6->NetRefHandleManager).PolledObjectsInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar6->NetRefHandleManager).PolledObjectsInternalIndices.BitCount);
  local_b8.Storage = local_158.Storage;
  local_b8.WordCount = local_158.WordCount;
  local_b8.BitCount = local_158.BitCount;
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1906,"UObjectReplicationBridge_ReconcileNewSubObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x772);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1906);
  }
  pFVar6 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_c8,
             (uint *)(pFVar6->NetRefHandleManager).SubObjectInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar6->NetRefHandleManager).SubObjectInternalIndices.BitCount);
  local_138.SubObjectList = &local_c8;
  local_138.Filtering = &pFVar6->Filtering;
  local_138.ObjectsConsideredForPolling = &local_b8;
  local_138.Connections = &pFVar6->Connections;
  local_138.LocalNetRefHandleManager = &pFVar6->NetRefHandleManager;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_190,
             (uint *)(pFVar6->NetRefHandleManager).GlobalScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar6->NetRefHandleManager).GlobalScopableInternalIndices.BitCount);
  if (((pFVar6->NetRefHandleManager).ScopeFrameData.bIsValid == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScopeFrameData.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                         ,0xef,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_168,
             (uint *)(pFVar6->NetRefHandleManager).ScopeFrameData.
                     CurrentFrameScopableInternalIndices.Storage.AllocatorInstance.Data,
             (pFVar6->NetRefHandleManager).ScopeFrameData.CurrentFrameScopableInternalIndices.
             BitCount);
  if ((local_190.BitCount != local_168.BitCount) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Net::FNetBitArrayHelper::
  ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::ReconcileNewSubObjects_::__l2::<lambda_1>_&>
            (local_190.Storage,local_168.Storage,local_190.WordCount,local_190.BitCount,
             UE::Net::FNetBitArrayBase::AndNotOp,&local_138);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_a8.Storage = local_158.Storage;
  local_a8.WordCount = local_158.WordCount;
  local_a8.BitCount = local_158.BitCount;
  if (__CsvProfilerStat1875 == false) {
    FCsvProfilerTrace::OutputInlineStat("ReplicationBridge_PollAndCopy",_GCsvCategory_Iris.Index);
    __CsvProfilerStat1875 = true;
  }
  uVar8 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationBridge_PollAndCopy",_GCsvCategory_Iris.Index,
             "CSV_ReplicationBridge_PollAndCopy");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1875,"ReplicationBridge_PollAndCopy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x753);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1875);
  }
  local_148.ObjectReplicationBridge = this;
  local_148.ReplicationSystemInternal =
       UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  UE::Net::Private::FObjectPoller::FObjectPoller(&local_98,&local_148);
  UE::Net::Private::FObjectPoller::PollAndCopyObjects(&local_98,&local_a8);
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    NetTraceNameId_1887 =
         UE::Net::CreatePersistentNetDebugName(L"ReplicationSystem.PolledObjectCount",0x23);
    _Init_thread_footer(&::_TSS0);
  }
  uVar5 = FNetTrace::TraceName(NetTraceNameId_1887);
  FNetTrace::TraceFrameStatsCounter
            (*(uint *)(this->_padding_ + 0x48),uVar5,local_98.PollStats.PolledObjectCount);
  if ((*piVar9 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    NetTraceNameId_1888 =
         UE::Net::CreatePersistentNetDebugName
                   (L"ReplicationSystem.PolledReferencesObjectCount",0x2d);
    _Init_thread_footer(&::_TSS1);
  }
  uVar5 = FNetTrace::TraceName(NetTraceNameId_1888);
  FNetTrace::TraceFrameStatsCounter
            (*(uint *)(this->_padding_ + 0x48),uVar5,local_98.PollStats.PolledReferencesObjectCount)
  ;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationBridge_PollAndCopy",uVar8);
  return;
}

// PreSendUpdateSingleHandle @ 144286de0

void __thiscall
UObjectReplicationBridge::PreSendUpdateSingleHandle
          (UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FReplicationSystemInternal *pFVar5;
  TObjectPtr<UObject> *pTVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  TObjectPtr<UObject>_u_0 local_res10;
  UObjectReplicationBridge *local_res18;
  FNetBitArrayView local_b8;
  FInitParams local_a8;
  FObjectPoller local_98;
  
  if (param_1.field0_0x0 != 0) {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1650,"UObjectReplicationBridge_ForcePollAndCopyObject",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                 ,0x672);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1650);
    }
    pFVar5 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_)
    ;
    uVar4 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (&pFVar5->NetRefHandleManager,param_1);
    if (uVar4 != 0) {
      if (*(longlong *)&this->PreUpdateInstanceFunction != 0) {
        pTVar6 = TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                           ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                            &(pFVar5->NetRefHandleManager).ReplicatedInstances,uVar4);
        local_res10.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar6->field0_0x0).DebugPtr;
        if (local_res10.DebugPtr != (UObject *)0x0) {
          UE::Net::FNetBitArrayView::FNetBitArrayView
                    (&local_b8,
                     (uint *)(pFVar5->NetRefHandleManager).ObjectsWithPreUpdate.Storage.
                             AllocatorInstance.Data,
                     (pFVar5->NetRefHandleManager).ObjectsWithPreUpdate.BitCount);
          bVar3 = UE::Net::FNetBitArrayView::GetBit(&local_b8,uVar4);
          if (bVar3) {
            local_b8.Storage = (uint *)&local_res10;
            local_b8.WordCount = 1;
            local_res18 = this;
            UE::Core::Private::Function::CheckCallable(*(void **)&this->PreUpdateInstanceFunction);
            pcVar1 = *(code **)&this->PreUpdateInstanceFunction;
            plVar2 = *(longlong **)&(this->PreUpdateInstanceFunction).field_0x28;
            plVar8 = (longlong *)&(this->PreUpdateInstanceFunction).field_0x10;
            if (plVar2 != (longlong *)0x0) {
              plVar8 = plVar2;
            }
            uVar7 = (**(code **)(*plVar8 + 8))();
            (*pcVar1)(uVar7,&local_b8,&local_res18);
          }
        }
      }
      local_a8.ObjectReplicationBridge = this;
      local_a8.ReplicationSystemInternal =
           UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
      UE::Net::Private::FObjectPoller::FObjectPoller(&local_98,&local_a8);
      UE::Net::Private::FObjectPoller::PollAndCopySingleObject(&local_98,uVar4);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// PreUpdate @ 144287460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UObjectReplicationBridge::PreUpdate(UObjectReplicationBridge *this,FNetBitArrayView *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FReplicationSystemInternal *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStackY_518 [32];
  uint local_4e8;
  uint local_4e4;
  ForAnyElementType local_4e0;
  uint local_4d8;
  int local_4d4;
  uint local_4d0;
  undefined1 local_4c8 [12];
  uint local_4bc;
  FNetBitArrayView local_4b8;
  UObjectReplicationBridge *local_4a8 [2];
  UObject **local_498;
  uint uStack_490;
  undefined4 uStack_48c;
  <lambda_1> local_488;
  UObject **local_458;
  undefined8 uStack_450;
  UObject *local_448 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_518;
  if (!__CsvProfilerStat1822) {
    FCsvProfilerTrace::OutputInlineStat("ReplicationBridge_PreUpdate",_GCsvCategory_Iris.Index);
    __CsvProfilerStat1822 = true;
  }
  uVar3 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationBridge_PreUpdate",_GCsvCategory_Iris.Index,
             "CSV_ReplicationBridge_PreUpdate");
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1822,"ReplicationBridge_PreUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x71e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1822);
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1823,"PreUpdatePass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x71f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1823);
  }
  if (*(longlong *)&this->PreUpdateInstanceFunction != 0) {
    pFVar6 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_)
    ;
    local_4e8 = 0;
    local_488.BatchedObjectCount = &local_4e4;
    local_488.BatchedObjects = &local_448;
    local_488.PreUpdatedObjectCount = &local_4e8;
    local_488.ReplicatedInstances = &(pFVar6->NetRefHandleManager).ReplicatedInstances;
    local_4e4 = 0;
    local_4e0.Data = (FScriptContainerElement *)0x0;
    local_4d4 = 0;
    local_488.__this = this;
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_4b8,
               (uint *)(pFVar6->NetRefHandleManager).ObjectsWithPreUpdate.Storage.AllocatorInstance.
                       Data,(pFVar6->NetRefHandleManager).ObjectsWithPreUpdate.BitCount);
    local_4d0 = local_4b8.BitCount;
    local_4d8 = 0;
    uVar9 = local_4b8.BitCount + 0x1f >> 5;
    if (local_4d4 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar9,&local_4e0,0,&local_4d4);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,&local_4e0,(int *)&local_4d8,&local_4d4);
    if (((local_4e0.Data == (FScriptContainerElement *)local_4b8.Storage) ||
        (local_4d0 != local_4b8.BitCount)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x528,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_4d8 != 0) && (local_4b8.WordCount != 0)) {
      memcpy(local_4e0.Data,local_4b8.Storage,(ulonglong)local_4d8 << 2);
    }
    local_4c8._8_4_ = local_4d0 + 0x1f >> 5;
    local_4bc = local_4d0;
    if (local_4d0 == 0) {
      local_4c8._0_8_ = &local_4bc;
    }
    else {
      local_4c8._0_8_ = local_4e0.Data;
      if ((local_4e0.Data == (FScriptContainerElement *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Storage != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x5a6,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((local_4bc != 0) &&
        ((*(uint *)(local_4c8._0_8_ + (ulonglong)(local_4c8._8_4_ - 1) * 4) &
         ~(0xffffffffU >> (-(char)local_4bc & 0x1fU))) != 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x5a7,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Net::FNetBitArrayView::
    ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::PreUpdate_::__l2::<lambda_1>_&>
              (param_1,(FNetBitArrayView *)local_4c8,UE::Net::FNetBitArrayBase::AndOp,&local_488);
    if (local_4e4 != 0) {
      local_498 = local_448;
      uStack_490 = local_4e4;
      if (((int)local_4e4 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_450 = CONCAT44(uStack_48c,uStack_490);
      local_458 = local_498;
      local_4a8[0] = this;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->PreUpdateInstanceFunction);
      pcVar2 = *(code **)&this->PreUpdateInstanceFunction;
      plVar1 = *(longlong **)&(this->PreUpdateInstanceFunction).field_0x28;
      plVar8 = (longlong *)&(this->PreUpdateInstanceFunction).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar8 = plVar1;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar2)(uVar7,&local_458,local_4a8);
      local_4e8 = local_4e8 + local_4e4;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NetTraceNameId_1868 =
           UE::Net::CreatePersistentNetDebugName(L"ReplicationSystem.PreUpdatedObjectCount",0x27);
      _Init_thread_footer(&::_TSS0);
    }
    uVar9 = local_4e8;
    uVar5 = FNetTrace::TraceName(NetTraceNameId_1868);
    FNetTrace::TraceFrameStatsCounter(*(uint *)(this->_padding_ + 0x48),uVar5,uVar9);
    if (local_4e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data);
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationBridge_PreUpdate",uVar3);
  return;
}

// PrintConnectionInfo @ 144287900

FString * __thiscall
UObjectReplicationBridge::PrintConnectionInfo
          (UObjectReplicationBridge *this,FString *__return_storage_ptr__,uint param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"ConnectionId:%u");
  return __return_storage_ptr__;
}

// PruneStaleObjects @ 1442881a0

void __thiscall UObjectReplicationBridge::PruneStaleObjects(UObjectReplicationBridge *this)

{
  int *piVar1;
  FNetBitArray *pFVar2;
  FNetRefHandle_u_0 *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  code *pcVar6;
  bool bVar7;
  FReplicationSystemInternal *pFVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> local_68;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  <lambda_1> local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1587,"UObjectReplicationBridge_PruneStaleObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x633);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1587);
  }
  pFVar2 = &this->GarbageCollectionAffectedObjects;
  if (pFVar2 != &this->ObjectsWithObjectReferences) {
    iVar4 = (this->ObjectsWithObjectReferences).Storage.ArrayNum;
    piVar1 = &(this->GarbageCollectionAffectedObjects).Storage.ArrayMax;
    iVar5 = *piVar1;
    _Src = (this->ObjectsWithObjectReferences).Storage.AllocatorInstance.Data;
    (this->GarbageCollectionAffectedObjects).Storage.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,iVar5,(ForAnyElementType *)pFVar2,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pFVar2->Storage).AllocatorInstance.Data,_Src,(longlong)iVar4 << 2);
      }
    }
  }
  (this->GarbageCollectionAffectedObjects).BitCount = (this->ObjectsWithObjectReferences).BitCount;
  pFVar8 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_38.LocalNetRefHandleManager = &pFVar8->NetRefHandleManager;
  local_38.StaleObjects = &local_68;
  local_38.ReplicatedInstances = &(pFVar8->NetRefHandleManager).ReplicatedInstances;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_48,
             (uint *)(pFVar8->NetRefHandleManager).DestroyedStartupObjectInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar8->NetRefHandleManager).DestroyedStartupObjectInternalIndices.BitCount);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_58,
             (uint *)(pFVar8->NetRefHandleManager).AssignedInternalIndices.Storage.AllocatorInstance
                     .Data,(pFVar8->NetRefHandleManager).AssignedInternalIndices.BitCount);
  if ((local_58.BitCount != local_48.BitCount) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Net::FNetBitArrayHelper::
  ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::PruneStaleObjects_::__l2::<lambda_1>_&>
            (local_58.Storage,local_48.Storage,local_58.WordCount,local_58.BitCount,
             UE::Net::FNetBitArrayBase::AndNotOp,&local_38);
  FVar10.Data = local_68.AllocatorInstance.Data;
  lVar9 = (longlong)local_68.ArrayNum;
  if ((local_68.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (FNetRefHandle_u_0 *)(FVar10.Data + lVar9 * 8);
  for (; (FNetRefHandle_u_0 *)FVar10.Data != pFVar3; FVar10.Data = FVar10.Data + 8) {
    UReplicationBridge::StopReplicatingNetRefHandle
              ((UReplicationBridge *)this,(FNetRefHandle)*(FNetRefHandle_u_0 *)FVar10.Data,Destroy);
  }
  this->bHasDirtyClassesInPollPeriodOverrides =
       0 < *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x8 -
           *(int *)&(this->ClassHierarchyPollPeriodOverrides).field_0x34;
  if ((FNetRefHandle_u_0 *)local_68.AllocatorInstance.Data != (FNetRefHandle_u_0 *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReconcileNewSubObjects @ 14428ac30

void __thiscall
UObjectReplicationBridge::ReconcileNewSubObjects
          (UObjectReplicationBridge *this,FNetBitArrayView *param_1)

{
  code *pcVar1;
  bool bVar2;
  FReplicationSystemInternal *pFVar3;
  bool bVar4;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  <lambda_1> local_38;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1906,"UObjectReplicationBridge_ReconcileNewSubObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x772);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1906);
  }
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_48,
             (uint *)(pFVar3->NetRefHandleManager).SubObjectInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar3->NetRefHandleManager).SubObjectInternalIndices.BitCount);
  local_38.SubObjectList = &local_48;
  local_38.Filtering = &pFVar3->Filtering;
  local_38.Connections = &pFVar3->Connections;
  local_38.LocalNetRefHandleManager = &pFVar3->NetRefHandleManager;
  local_38.ObjectsConsideredForPolling = param_1;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_68,
             (uint *)(pFVar3->NetRefHandleManager).GlobalScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar3->NetRefHandleManager).GlobalScopableInternalIndices.BitCount);
  if (((pFVar3->NetRefHandleManager).ScopeFrameData.bIsValid == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScopeFrameData.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                         ,0xef,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_58,
             (uint *)(pFVar3->NetRefHandleManager).ScopeFrameData.
                     CurrentFrameScopableInternalIndices.Storage.AllocatorInstance.Data,
             (pFVar3->NetRefHandleManager).ScopeFrameData.CurrentFrameScopableInternalIndices.
             BitCount);
  if ((local_68.BitCount != local_58.BitCount) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Net::FNetBitArrayHelper::
  ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::ReconcileNewSubObjects_::__l2::<lambda_1>_&>
            (local_68.Storage,local_58.Storage,local_68.WordCount,local_68.BitCount,
             UE::Net::FNetBitArrayBase::AndNotOp,&local_38);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RegisterRemoteInstance @ 14428bcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::RegisterRemoteInstance
          (UObjectReplicationBridge *this,FNetRefHandle param_1,UObject *param_2,
          FReplicationProtocol *param_3,FReplicationInstanceProtocol *param_4,uint param_5)

{
  FName local_38;
  FString local_30;
  FString local_20;
  
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  UReplicationBridge::InternalAttachInstanceToNetRefHandle
            ((UReplicationBridge *)this,param_1,false,param_4,param_2,(FNetHandle)&local_38);
  if (5 < (byte)LogIris._0_1_) {
    local_38.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_38.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_38,&local_30);
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_20,param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ReinitPollFrequency @ 14428dbc0

void __thiscall UObjectReplicationBridge::ReinitPollFrequency(UObjectReplicationBridge *this)

{
  code *pcVar1;
  bool bVar2;
  FReplicationSystemInternal *pFVar3;
  FNetBitArrayView local_38;
  <lambda_1> local_28;
  FNetBitArrayView local_18;
  
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  local_28.LocalNetRefHandleManager = &pFVar3->NetRefHandleManager;
  local_28.__this = this;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_38,
             (uint *)(pFVar3->NetRefHandleManager).GlobalScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar3->NetRefHandleManager).GlobalScopableInternalIndices.BitCount);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_18,
             (uint *)(pFVar3->NetRefHandleManager).SubObjectInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar3->NetRefHandleManager).SubObjectInternalIndices.BitCount);
  if (local_38.BitCount != local_18.BitCount) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.GetNumBits() == B.GetNumBits()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x668,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Net::FNetBitArrayHelper::
  ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UObjectReplicationBridge::ReinitPollFrequency_::__l2::<lambda_1>_&>
            (local_38.Storage,local_18.Storage,local_38.WordCount,local_38.BitCount,
             UE::Net::FNetBitArrayBase::AndNotOp,&local_28);
  return;
}

// RemapPathForPIE @ 14428dc90

bool __thiscall
UObjectReplicationBridge::RemapPathForPIE
          (UObjectReplicationBridge *this,uint param_1,FString *param_2,bool param_3)

{
  return false;
}

// RemoveCreationDependencyLink @ 14428e880

void __thiscall
UObjectReplicationBridge::RemoveCreationDependencyLink
          (UObjectReplicationBridge *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  FNetRefHandleManager *this_00;
  uint uVar1;
  uint uVar2;
  FReplicationSystemInternal *pFVar3;
  TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_01;
  uint local_res8 [2];
  FNetRefHandle_u_0 local_res10;
  FNetRefHandle_u_0 local_res18 [2];
  FNetRefHandleManager *local_38;
  FNetRefHandle_u_0 *local_30;
  FNetRefHandle_u_0 *local_28;
  
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  this_00 = &pFVar3->NetRefHandleManager;
  local_res10 = param_1.field0_0x0;
  local_res18[0] = param_2.field0_0x0;
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  local_res8[0] = uVar1;
  uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_2);
  if ((uVar1 == 0) || (uVar2 == 0)) {
    local_30 = &local_res10;
    local_28 = local_res18;
    local_38 = this_00;
    `UE::Net::Private::FNetRefHandleManager::RemoveCreationDependency'::__l5::<lambda_1>::operator()
              (&local_38);
  }
  else {
    this_01 = UE::Net::Private::FNetDependencyData::GetCreationDependencyInfoArray
                        (&(pFVar3->NetRefHandleManager).SubObjects,uVar2);
    if (this_01 !=
        (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Remove
                (this_01,local_res8);
      if (this_01->ArrayNum == 0) {
        UE::Net::FNetBitArray::ClearBit
                  (&(pFVar3->NetRefHandleManager).ObjectsWithCreationDependencies,uVar2);
        return;
      }
    }
  }
  return;
}

// RemoveDependentObject @ 14428eb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::RemoveDependentObject
          (UObjectReplicationBridge *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  uint uVar1;
  uint uVar2;
  FReplicationSystemInternal *pFVar3;
  FString local_38;
  FString local_28;
  
  if (5 < (byte)LogIris._0_1_) {
    if ((param_1.field0_0x0 == 0) || ((ulonglong)param_1.field0_0x0 >> 0x36 == 0)) {
      ::FString::PrintfImpl(&local_28,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_28,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    if ((param_2.field0_0x0 == 0) || ((ulonglong)param_2.field0_0x0 >> 0x36 == 0)) {
      ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar3->NetRefHandleManager,param_1);
  uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar3->NetRefHandleManager,param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    UE::Net::Private::FNetRefHandleManager::InternalRemoveDependentObject
              (&pFVar3->NetRefHandleManager,uVar1,uVar2,All);
  }
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar3->NetRefHandleManager,param_2);
  if (uVar1 != 0) {
    UE::Net::Private::FReplicationFiltering::NotifyRemovedDependentObject(&pFVar3->Filtering,uVar1);
    return;
  }
  return;
}

// RemoveDestructionInfosForGroup @ 14428ecd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::RemoveDestructionInfosForGroup
          (UObjectReplicationBridge *this,FNetObjectGroupHandle param_1)

{
  FWorldLocations *pFVar1;
  undefined1 *puVar2;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  ulonglong uVar5;
  code *pcVar6;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  FReplicationSystemInternal *pFVar10;
  FNetObjectGroup *pFVar11;
  ForElementType<UE::Net::FNetRefHandle> FVar12;
  ForElementType<UE::Net::FNetRefHandle> FVar13;
  byte bVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_13b8 [32];
  undefined1 local_1368 [4];
  uint local_1364;
  uint local_1360;
  undefined1 local_135c [4];
  uint local_1358;
  FWorldLocations *local_1350;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>_>
  *local_1348;
  int iStack_1340;
  uint uStack_133c;
  undefined1 *local_1338;
  undefined4 uStack_1330;
  int iStack_132c;
  int local_1328;
  undefined4 uStack_1324;
  int iStack_1320;
  undefined4 uStack_131c;
  int local_1318;
  int local_1314;
  int local_1310;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>_>
  *local_1308;
  int iStack_1300;
  uint uStack_12fc;
  undefined1 *local_12f8;
  undefined4 uStack_12f0;
  int iStack_12ec;
  int local_12e8;
  int iStack_12e4;
  int iStack_12e0;
  undefined4 uStack_12dc;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>_>
  *local_12d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_12d0;
  undefined8 uStack_12b0;
  TMap<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>_>
  *local_12a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_12a0;
  undefined8 uStack_1280;
  undefined4 local_125c;
  ForElementType<unsigned_int> local_1258;
  int local_c50;
  int local_c4c;
  ForElementType<UE::Net::FNetRefHandle> local_c48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14428ecf4;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_13b8;
  pFVar10 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  pFVar1 = &pFVar10->WorldLocations;
  local_1350 = pFVar1;
  if (param_1.field0_0x0 == 0) {
    puVar2 = &(this->StaticObjectsPendingDestroy).field_0x10;
    iStack_1340 = 0;
    iVar9 = *(int *)&(this->StaticObjectsPendingDestroy).field_0x28;
    this_00 = &this->StaticObjectsPendingDestroy;
    uStack_133c = 1;
    local_1328 = 0;
    iStack_132c = 0;
    if (iVar9 != 0) {
      puVar21 = *(uint **)&(this->StaticObjectsPendingDestroy).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar2;
      }
      uVar22 = *puVar21;
      local_1328 = 0;
      while (uVar22 == 0) {
        lVar18 = (longlong)iStack_1340;
        local_1328 = local_1328 + 0x20;
        iStack_1340 = iStack_1340 + 1;
        iStack_132c = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1340) goto LAB_14428f22e;
        uVar22 = puVar21[lVar18 + 1];
      }
      uStack_133c = -uVar22 & uVar22;
      uVar5 = (ulonglong)uStack_133c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1318 = (int)lVar18;
      iStack_132c = local_1328 + -1 + local_1318;
      if (iVar9 < iStack_132c) {
        iStack_132c = iVar9;
      }
    }
LAB_14428f22e:
    local_1360 = *(uint *)&(this->StaticObjectsPendingDestroy).field_0x28;
    uStack_1324 = local_125c;
    iStack_1320 = *(int *)&(this->StaticObjectsPendingDestroy).field_0x8 -
                  *(int *)&(this->StaticObjectsPendingDestroy).field_0x34;
    local_1358 = local_1360 & 0xffffffe0;
    TStack_12d0._padding_ = CONCAT44(uStack_133c,iStack_1340);
    uStack_1330 = 0xffffffff;
    TStack_12d0.CurrentBitIndex = iStack_132c;
    TStack_12d0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)local_1360 >> 5;
    TStack_12d0._28_4_ = local_125c;
    TStack_12d0.BaseBitIndex = local_1328;
    uStack_12b0 = CONCAT44(uStack_131c,iStack_1320);
    bVar14 = (byte)local_1360;
    local_1348 = this_00;
    local_1338 = puVar2;
    local_12d8 = this_00;
    TStack_12d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)local_1360 < 0) || (iVar9 < (int)local_1360)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar22 = *(uint *)&(this->StaticObjectsPendingDestroy).field_0x28;
    uVar23 = local_1360;
    if (local_1360 != uVar22) {
      puVar20 = *(undefined1 **)&(this->StaticObjectsPendingDestroy).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar2;
      }
      uVar23 = -1 << (bVar14 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
      uVar19 = local_1358;
      while (uVar23 == 0) {
        lVar18 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        local_1360 = uVar22;
        uVar23 = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14428f360;
        uVar23 = *(uint *)(puVar20 + lVar18 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1314 = (int)lVar18;
      local_1360 = (uVar19 - 1) + local_1314;
      uVar23 = local_1360;
      if ((int)uVar22 < (int)local_1360) {
        local_1360 = uVar22;
        uVar23 = uVar22;
      }
    }
LAB_14428f360:
    while( true ) {
      pTVar7 = local_12d8;
      if (*(int *)(&local_12d8->field_0x0 + 8) - *(int *)(&local_12d8->field_0x0 + 0x34) !=
          (int)uStack_12b0) {
        local_1368[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1368);
      }
      if (((TStack_12d0.CurrentBitIndex == uVar23) &&
          (TStack_12d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar7 == this_00)) break;
      UE::Net::Private::FNetRefHandleManager::DestroyNetObject
                ((FNetRefHandleManager *)this->_padding_,
                 (FNetRefHandle)
                 *(FNetRefHandle_u_0 *)
                  &((FNetRefHandle_u_0 *)
                   (*(longlong *)&pTVar7->field_0x0 + (longlong)TStack_12d0.CurrentBitIndex * 0x30))
                   ->_s_0);
      TStack_12d0.UnvisitedBitMask = TStack_12d0.UnvisitedBitMask & ~TStack_12d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_12d0);
    }
    iVar9 = *(int *)&(this->StaticObjectsPendingDestroy).field_0x28;
    iStack_1300 = 0;
    uStack_12fc = 1;
    local_12e8 = 0;
    iStack_12ec = 0;
    if (iVar9 != 0) {
      puVar21 = *(uint **)&(this->StaticObjectsPendingDestroy).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar2;
      }
      uVar22 = *puVar21;
      while (uVar22 == 0) {
        lVar18 = (longlong)iStack_1300;
        local_12e8 = local_12e8 + 0x20;
        iStack_1300 = iStack_1300 + 1;
        iStack_12ec = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1300) goto LAB_14428f43e;
        uVar22 = puVar21[lVar18 + 1];
      }
      uStack_12fc = -uVar22 & uVar22;
      uVar5 = (ulonglong)uStack_12fc * 2 + 1;
      lVar18 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1310 = (int)lVar18;
      iStack_12ec = local_12e8 + -1 + local_1310;
      if (iVar9 < iStack_12ec) {
        iStack_12ec = iVar9;
      }
    }
LAB_14428f43e:
    iStack_12e4 = iStack_132c;
    iStack_12e0 = *(int *)&(this->StaticObjectsPendingDestroy).field_0x8 -
                  *(int *)&(this->StaticObjectsPendingDestroy).field_0x34;
    uVar22 = *(uint *)&(this->StaticObjectsPendingDestroy).field_0x28;
    uStack_12f0 = 0xffffffff;
    uVar23 = uVar22 & 0xffffffe0;
    TStack_12a0._padding_ = CONCAT44(uStack_12fc,iStack_1300);
    TStack_12a0.CurrentBitIndex = iStack_12ec;
    TStack_12a0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar22 >> 5;
    TStack_12a0._28_4_ = iStack_132c;
    TStack_12a0.BaseBitIndex = local_12e8;
    uStack_1280 = CONCAT44(uStack_12dc,iStack_12e0);
    local_1308 = this_00;
    local_12f8 = puVar2;
    local_12a8 = this_00;
    TStack_12a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar22 < 0) || (iVar9 < (int)uVar22)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar1 = local_1350;
    uVar19 = *(uint *)&(this->StaticObjectsPendingDestroy).field_0x28;
    if (uVar22 != uVar19) {
      puVar20 = *(undefined1 **)&(this->StaticObjectsPendingDestroy).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar2;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
      while (uVar22 == 0) {
        lVar18 = (longlong)iVar15;
        uVar23 = uVar23 + 0x20;
        iVar15 = iVar15 + 1;
        uVar22 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14428f550;
        uVar22 = *(uint *)(puVar20 + lVar18 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar22 = (uVar23 - 1) + (int)lVar18;
      if ((int)uVar19 < (int)uVar22) {
        uVar22 = uVar19;
      }
    }
LAB_14428f550:
    while( true ) {
      pTVar7 = local_12a8;
      if (*(int *)(&local_12a8->field_0x0 + 8) - *(int *)(&local_12a8->field_0x0 + 0x34) !=
          (int)uStack_1280) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_135c);
      }
      if (((TStack_12a0.CurrentBitIndex == uVar22) &&
          (TStack_12a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar7 == this_00)) break;
      UE::Net::FWorldLocations::RemoveObjectInfoCache
                (pFVar1,*(uint *)(*(longlong *)&pTVar7->field_0x0 + 0x24 +
                                 (longlong)TStack_12a0.CurrentBitIndex * 0x30));
      TStack_12a0.UnvisitedBitMask = TStack_12a0.UnvisitedBitMask & ~TStack_12a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_12a0);
    }
    bVar8 = 1 < *(int *)&(this->StaticObjectsPendingDestroy).field_0x48;
    if (!bVar8) {
      TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar2 = &(this->StaticObjectsPendingDestroy).field_0xc;
    *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x34 = 0;
    iVar9 = *(int *)&(this->StaticObjectsPendingDestroy).field_0x2c;
    *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x28 = 0;
    if ((iVar9 < 0) || (0x80 < iVar9)) {
      *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->StaticObjectsPendingDestroy).field_0x10,0);
    }
    if (bVar8) {
      *(undefined4 *)&(this->StaticObjectsPendingDestroy).field_0x48 = 1;
      TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  else {
    if (5 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    pFVar11 = UE::Net::Private::FNetObjectGroups::GetGroup
                        ((FNetObjectGroups *)this->_padding_,param_1);
    if ((pFVar11 == (FNetObjectGroup *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Group",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                           ,0x1b4,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_3c = 0x180;
    local_c48.SecondaryData = (ForElementType<UE::Net::FNetRefHandle>)0x0;
    local_40 = 0;
    local_1258.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c50 = 0;
    local_c4c = 0x180;
    pFVar17 = (pFVar11->Members).AllocatorInstance.Data;
    iVar9 = (pFVar11->Members).ArrayNum;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = pFVar17 + (longlong)iVar9 * 4;
    for (; pFVar17 != pFVar3; pFVar17 = pFVar17 + 4) {
      uVar22 = *(uint *)pFVar17;
      lVar18 = *(longlong *)(this->_padding_ + 0x1c8);
      local_1364 = uVar22;
      if ((*(uint *)(this->_padding_ + 0x1d8) <= uVar22) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((*(uint *)(lVar18 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1) != 0) &&
          (FVar12 = (ForElementType<UE::Net::FNetRefHandle>)
                    TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                    ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                  *)(this->_padding_ + 0x2a0),local_1364),
          *(int *)&(this->StaticObjectsPendingDestroy).field_0x8 !=
          *(int *)&(this->StaticObjectsPendingDestroy).field_0x34)) &&
         (iVar9 = TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>,FDefaultSetAllocator>
                  ::RemoveImpl<UE::Net::FNetRefHandle>
                            ((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>,FDefaultSetAllocator>
                              *)&this->StaticObjectsPendingDestroy,
                             (int)((*(ulonglong *)FVar12 & 0x3fffffffffffff) >> 0x20) * 0x17 +
                             (int)(*(ulonglong *)FVar12 & 0x3fffffffffffff),(FNetRefHandle *)FVar12)
         , iVar9 != 0)) {
        FVar13 = (ForElementType<UE::Net::FNetRefHandle>)&local_c48;
        if (local_c48.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
          FVar13 = local_c48.SecondaryData;
        }
        if ((ulonglong)FVar13 <= (ulonglong)FVar12) {
          FVar13 = (ForElementType<UE::Net::FNetRefHandle>)&local_c48;
          if (local_c48.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
            FVar13 = local_c48.SecondaryData;
          }
          if (((ulonglong)FVar12 < (ulonglong)((longlong)FVar13 + (longlong)local_3c * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar9 = local_40;
        if (local_40 == local_3c) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<384,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                            (0x808,&local_c48,&local_3c);
        }
        local_40 = iVar9 + 1;
        FVar13 = (ForElementType<UE::Net::FNetRefHandle>)&local_c48;
        if (local_c48.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
          FVar13 = local_c48.SecondaryData;
        }
        ((FNetRefHandle_u_0 *)((longlong)FVar13 + (longlong)iVar9 * 8))->_s_0 =
             *(FNetRefHandle_u_0_s_0 *)FVar12;
        FVar16 = (ForElementType<unsigned_int>)&local_1258;
        if (local_1258.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_1258.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1364) {
          FVar16 = (ForElementType<unsigned_int>)&local_1258;
          if (local_1258.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_1258.SecondaryData;
          }
          if ((&local_1364 < (uint *)((longlong)FVar16 + (longlong)local_c4c * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar9 = local_c50;
        if (local_c50 == local_c4c) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<384,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                            (0x404,&local_1258,&local_c4c);
        }
        local_c50 = iVar9 + 1;
        FVar16 = (ForElementType<unsigned_int>)&local_1258;
        if (local_1258.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_1258.SecondaryData;
        }
        *(uint *)((longlong)FVar16 + (longlong)iVar9 * 4) = local_1364;
      }
      pFVar1 = local_1350;
    }
    lVar18 = (longlong)local_40;
    FVar12 = (ForElementType<UE::Net::FNetRefHandle>)&local_c48;
    if (local_c48.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar12 = local_c48.SecondaryData;
    }
    if ((local_40 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar13 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar12 + lVar18 * 8);
    for (; FVar12 != FVar13; FVar12 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar12 + 8)
        ) {
      UE::Net::Private::FNetRefHandleManager::DestroyNetObject
                ((FNetRefHandleManager *)this->_padding_,(FNetRefHandle)*(FNetRefHandle_u_0 *)FVar12
                );
    }
    lVar18 = (longlong)local_c50;
    FVar16 = (ForElementType<unsigned_int>)&local_1258;
    if (local_1258.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_1258.SecondaryData;
    }
    if ((local_c50 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar4 = (ForElementType<unsigned_int>)((longlong)FVar16 + lVar18 * 4);
    for (; FVar16 != FVar4; FVar16 = (ForElementType<unsigned_int>)((longlong)FVar16 + 4)) {
      UE::Net::FWorldLocations::RemoveObjectInfoCache(pFVar1,*(uint *)FVar16);
    }
    if (local_1258.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1258.SecondaryData);
    }
    if (local_c48.SecondaryData != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)local_c48.SecondaryData);
    }
  }
  return;
}

// ResolveObjectReference @ 144291050

UObject * __thiscall
UObjectReplicationBridge::ResolveObjectReference
          (UObjectReplicationBridge *this,FNetObjectReference *param_1,
          FNetObjectResolveContext *param_2)

{
  UObject *local_res8 [4];
  
  local_res8[0] = (UObject *)0x0;
  UE::Net::Private::FObjectReferenceCache::ResolveObjectReference
            ((FObjectReferenceCache *)this->_padding_,param_1,param_2,local_res8);
  return local_res8[0];
}

// SendErrorWithNetRefHandle @ 1442924e0

void __thiscall
UObjectReplicationBridge::SendErrorWithNetRefHandle
          (UObjectReplicationBridge *this,ENetRefHandleError param_1,FNetRefHandle param_2,
          uint param_3,TArrayView<UE::Net::FNetRefHandle_const_,int> *param_4)

{
  return;
}

// SetClassDynamicFilterConfig @ 144293520

void __thiscall
UObjectReplicationBridge::SetClassDynamicFilterConfig
          (UObjectReplicationBridge *this,FName param_1,FName param_2,FName param_3)

{
  bool bVar1;
  uint uVar2;
  FName local_res10;
  FName local_res18;
  FName *local_18;
  FName *local_10;
  
  if (param_1 != (FName)0x0) {
    local_res10 = param_1;
    local_res18 = param_2;
    if (param_2 == (FName)0x0) {
      SetClassDynamicFilterConfig(this,param_1,0,param_3);
      return;
    }
    uVar2 = UReplicationSystem::GetFilterHandle((UReplicationSystem *)this->_padding_,param_2);
    if (uVar2 == 0) {
      local_18 = &local_res10;
      local_10 = &local_res18;
      bVar1 = `UObjectReplicationBridge::SetClassDynamicFilterConfig'::__l9::<lambda_1>::operator()
                        (&local_18);
      if (!bVar1) {
        return;
      }
    }
    SetClassDynamicFilterConfig(this,local_res10,uVar2,param_3);
  }
  return;
}

// SetClassDynamicFilterConfig @ 1442935c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::SetClassDynamicFilterConfig
          (UObjectReplicationBridge *this,FName param_1,uint param_2,FName param_3)

{
  FClassFilterInfo *pFVar1;
  FName FVar2;
  FName local_res10;
  FName local_res20;
  FName *local_98;
  undefined1 *local_90;
  FString local_88;
  FString local_78;
  undefined1 local_68 [20];
  undefined1 local_54;
  FString local_50;
  FString local_40;
  
  if (param_1 == (FName)0x0) {
    return;
  }
  local_res10 = param_1;
  local_res20 = param_3;
  if (4 < (byte)LogIrisFilterConfig._0_1_) {
    pFVar1 = TMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
             ::Find((TMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
                     *)&this->ClassesWithDynamicFilter,param_1);
    if (pFVar1 == (FClassFilterInfo *)0x0) {
      if ((byte)LogIrisFilterConfig._0_1_ < 5) goto LAB_144293890;
      ::FName::ToString(&local_res20,&local_50);
      FVar2 = UReplicationSystem::GetFilterName
                        ((UReplicationSystem *)this->_padding_,(uint)&local_98);
      ::FName::ToString((FName *)FVar2,&local_88);
      ::FName::ToString(&local_res10,&local_78);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    else if (pFVar1->FilterHandle == param_2) {
      if ((byte)LogIrisFilterConfig._0_1_ < 5) goto LAB_144293890;
      FVar2 = UReplicationSystem::GetFilterName
                        ((UReplicationSystem *)this->_padding_,(uint)&local_98);
      ::FName::ToString((FName *)FVar2,&local_88);
      ::FName::ToString(&local_res10,&local_78);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
      local_50.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        local_50.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((byte)LogIrisFilterConfig._0_1_ < 5) goto LAB_144293890;
      FVar2 = UReplicationSystem::GetFilterName
                        ((UReplicationSystem *)this->_padding_,(uint)local_68);
      ::FName::ToString((FName *)FVar2,&local_78);
      ::FName::ToString(&local_res20,&local_88);
      FVar2 = UReplicationSystem::GetFilterName
                        ((UReplicationSystem *)this->_padding_,(uint)&local_98);
      ::FName::ToString((FName *)FVar2,&local_50);
      ::FName::ToString(&local_res10,&local_40);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      local_50.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        local_50.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      }
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
LAB_144293890:
  local_68._12_4_ = local_res20.ComparisonIndex.Value;
  local_68._16_4_ = local_res20.Number;
  local_98 = &local_res10;
  local_90 = local_68 + 8;
  local_54 = 0;
  local_68._8_4_ = param_2;
  TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&>_>
            ((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
              *)&this->ClassesWithDynamicFilter,
             (TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&> *)
             local_68,(bool *)&local_98);
  return;
}

// SetClassTypeStatsConfig @ 1442938e0

void __thiscall
UObjectReplicationBridge::SetClassTypeStatsConfig
          (UObjectReplicationBridge *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  TPairInitializer<FName_const_&,FName_const_&> local_res10;
  FName local_res20;
  FName **local_28;
  FName *local_20;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName((FName *)&local_res10,iVar3,
                          (wchar_t *)(param_2->Data).AllocatorInstance.Data,FNAME_Add);
  local_res20 = *pFVar2;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName((FName *)&local_res10,iVar3,
                          (wchar_t *)(param_1->Data).AllocatorInstance.Data,FNAME_Add);
  local_res10.Value = *(FName **)pFVar2;
  if ((FName)local_res10.Value != (FName)0x0) {
    local_28 = &local_res10.Value;
    local_20 = &local_res20;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)&this->ClassesWithTypeStats,&local_res10,(bool *)&local_28);
  }
  return;
}

// SetClassTypeStatsConfig @ 144293990

void __thiscall
UObjectReplicationBridge::SetClassTypeStatsConfig
          (UObjectReplicationBridge *this,FName param_1,FName param_2)

{
  FName local_res10;
  FName local_res18 [2];
  FName *local_18;
  FName *local_10;
  
  if (param_1 != (FName)0x0) {
    local_18 = &local_res10;
    local_10 = local_res18;
    local_res10 = param_1;
    local_res18[0] = param_2;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)&this->ClassesWithTypeStats,
               (TPairInitializer<FName_const_&,FName_const_&> *)(local_res18 + 1),(bool *)&local_18)
    ;
  }
  return;
}

// SetInstancePreUpdateFunction @ 144293a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UObjectReplicationBridge::SetInstancePreUpdateFunction
          (UObjectReplicationBridge *this,
          TFunction<void___cdecl(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->PreUpdateInstanceFunction;
  uVar7 = *(undefined8 *)&(this->PreUpdateInstanceFunction).field_0x8;
  uVar1 = *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x10;
  uVar2 = *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x14;
  uVar3 = *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x18;
  uVar4 = *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x1c;
  uVar5 = *(undefined8 *)&(this->PreUpdateInstanceFunction).field_0x20;
  plVar10 = *(longlong **)&(this->PreUpdateInstanceFunction).field_0x28;
  *(longlong *)&this->PreUpdateInstanceFunction = local_58;
  *(undefined8 *)&(this->PreUpdateInstanceFunction).field_0x8 = uStack_50;
  *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->PreUpdateInstanceFunction).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// SetNetPushIdOnInstance @ 144293b70

void __thiscall
UObjectReplicationBridge::SetNetPushIdOnInstance
          (UObjectReplicationBridge *this,FReplicationInstanceProtocol *param_1,FNetHandle param_2)

{
  return;
}

// SetObjectWantsToBeDormant @ 144293b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::SetObjectWantsToBeDormant
          (UObjectReplicationBridge *this,FNetRefHandle param_1,bool param_2)

{
  FNetRefHandleManager *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FReplicationSystemInternal *pFVar5;
  uint *puVar6;
  uint local_res8 [2];
  FNetBitArrayView local_68;
  FNetRefHandleManager *local_58;
  uint *local_50;
  FNetBitArrayView local_48;
  TArrayView<unsigned_int_const_,int> local_38;
  FString local_28;
  
  pFVar5 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  this_00 = &pFVar5->NetRefHandleManager;
  local_res8[0] = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  if (local_res8[0] != 0) {
    if (5 < (byte)LogIris._0_1_) {
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex(this_00,&local_28,local_res8[0]);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    uVar3 = local_res8[0];
    pFVar1 = (pFVar5->NetRefHandleManager).SubObjectInternalIndices.Storage.AllocatorInstance.Data;
    if (((pFVar5->NetRefHandleManager).SubObjectInternalIndices.BitCount <= local_res8[0]) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(uint *)(pFVar1 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
      local_50 = local_res8;
      local_58 = this_00;
      `UObjectReplicationBridge::SetObjectWantsToBeDormant'::__l2::<lambda_1>::operator()(&local_58)
      ;
    }
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_68,
               (uint *)(pFVar5->NetRefHandleManager).WantToBeDormantInternalIndices.Storage.
                       AllocatorInstance.Data,
               (pFVar5->NetRefHandleManager).WantToBeDormantInternalIndices.BitCount);
    UE::Net::FNetBitArrayHelper::SetBitValue
              (local_68.Storage,local_68.BitCount,local_res8[0],param_2);
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_48,
               (uint *)(pFVar5->NetRefHandleManager).DormantObjectsPendingFlushNet.Storage.
                       AllocatorInstance.Data,
               (pFVar5->NetRefHandleManager).DormantObjectsPendingFlushNet.BitCount);
    UE::Net::FNetBitArrayHelper::SetBitValue
              (local_48.Storage,local_48.BitCount,local_res8[0],param_2);
    UE::Net::Private::FNetRefHandleManager::GetSubObjects(this_00,&local_38,local_res8[0]);
    for (puVar6 = local_38.DataPtr; puVar6 != local_38.DataPtr + local_38.ArrayNum;
        puVar6 = puVar6 + 1) {
      UE::Net::FNetBitArrayHelper::SetBitValue(local_68.Storage,local_68.BitCount,*puVar6,param_2);
    }
    OptionallySetObjectRequiresFrequentWorldLocationUpdate(this,param_1,!param_2);
  }
  return;
}

// SetPollFrequency @ 144293eb0

void __thiscall
UObjectReplicationBridge::SetPollFrequency
          (UObjectReplicationBridge *this,FNetRefHandle param_1,float param_2)

{
  FScriptContainerElement FVar1;
  FObjectPollFrequencyLimiter *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FReplicationSystemInternal *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uchar uVar13;
  TArrayView<unsigned_int_const_,int> local_60 [2];
  
  pFVar7 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar5 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar7->NetRefHandleManager,param_1);
  uVar10 = (ulonglong)(int)uVar5;
  if (uVar5 != 0) {
    if (0.0 < param_2) {
      if (param_2 <= __real_3a83126f) {
        param_2 = __real_3a83126f;
      }
      iVar6 = (int)(longlong)(this->MaxTickRate / param_2);
      uVar8 = iVar6 - 1;
      if (iVar6 == 0) {
        uVar8 = 0;
      }
      uVar9 = 0xff;
      if (uVar8 < 0xff) {
        uVar9 = uVar8;
      }
      uVar13 = '\0';
      if (uVar9 != 0) {
        uVar13 = (uchar)uVar9;
      }
    }
    else {
      uVar13 = '\0';
    }
    UE::Net::Private::FObjectPollFrequencyLimiter::SetPollFramePeriod
              (this->PollFrequencyLimiter,uVar5,uVar13);
    UE::Net::Private::FNetRefHandleManager::GetSubObjects
              (&pFVar7->NetRefHandleManager,local_60,uVar5);
    if (local_60[0].DataPtr != local_60[0].DataPtr + local_60[0].ArrayNum) {
      uVar11 = uVar10;
      puVar12 = local_60[0].DataPtr;
      do {
        pFVar2 = this->PollFrequencyLimiter;
        uVar8 = *puVar12;
        uVar9 = uVar8;
        if (uVar8 < pFVar2->MaxInternalHandle) {
          uVar9 = pFVar2->MaxInternalHandle;
        }
        pFVar2->MaxInternalHandle = uVar9;
        uVar9 = 0;
        if ((int)uVar11 < (pFVar2->FramesBetweenUpdates).ArrayNum) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (pFVar2->FramesBetweenUpdates).AllocatorInstance.Data[uVar10];
        uVar9 = 0;
        if ((int)uVar8 < (pFVar2->FramesBetweenUpdates).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pFVar2->FramesBetweenUpdates).AllocatorInstance.Data[(int)uVar8] = FVar1;
        uVar9 = 0;
        if ((int)uVar5 < (pFVar2->FrameCounters).ArrayNum) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (pFVar2->FrameCounters).AllocatorInstance.Data[uVar10];
        uVar9 = 0;
        if ((int)uVar8 < (pFVar2->FrameCounters).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar12 = puVar12 + 1;
        uVar11 = (ulonglong)uVar5;
        (pFVar2->FrameCounters).AllocatorInstance.Data[(int)uVar8] = FVar1;
      } while (puVar12 != local_60[0].DataPtr + local_60[0].ArrayNum);
    }
  }
  return;
}

// SetPollWithObject @ 1442942f0

void __thiscall
UObjectReplicationBridge::SetPollWithObject
          (UObjectReplicationBridge *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    ((FNetRefHandleManager *)this->_padding_,param_1);
  uVar2 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    ((FNetRefHandleManager *)this->_padding_,param_2);
  UE::Net::Private::FObjectPollFrequencyLimiter::SetPollWithObject
            (this->PollFrequencyLimiter,uVar1,uVar2);
  return;
}

// SetShouldSubclassUseSameFilterFunction @ 144294550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UObjectReplicationBridge::SetShouldSubclassUseSameFilterFunction
          (UObjectReplicationBridge *this,
          TFunction<bool___cdecl(UClass_const_*,UClass_const_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (*(longlong *)param_1 == 0) {
    bVar8 = `UObjectReplicationBridge::SetShouldSubclassUseSameFilterFunction'::__l3::<lambda_1>::
            operator()(local_58);
    if (!bVar8) goto LAB_144294624;
  }
  local_48 = *(longlong *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_38);
  }
  lVar6 = *(longlong *)&this->ShouldSubclassUseSameFilterFunction;
  uVar7 = *(undefined8 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x8;
  uVar1 = *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x10;
  uVar2 = *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x14;
  uVar3 = *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x18;
  uVar4 = *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x1c;
  uVar5 = *(undefined8 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x20;
  plVar11 = *(longlong **)&(this->ShouldSubclassUseSameFilterFunction).field_0x28;
  *(longlong *)&this->ShouldSubclassUseSameFilterFunction = local_48;
  *(undefined8 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x8 = uStack_40;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ShouldSubclassUseSameFilterFunction).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar1;
  local_38._4_4_ = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_20 = plVar11;
  local_48 = lVar6;
  uStack_40 = uVar7;
  if (lVar6 != 0) {
    plVar10 = &local_38;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = plVar11;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_144294624:
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// SetShouldUseDefaultSpatialFilterFunction @ 144294660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UObjectReplicationBridge::SetShouldUseDefaultSpatialFilterFunction
          (UObjectReplicationBridge *this,TFunction<bool___cdecl(UClass_const_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (*(longlong *)param_1 == 0) {
    bVar8 = `UObjectReplicationBridge::SetShouldUseDefaultSpatialFilterFunction'::__l3::<lambda_1>::
            operator()(local_58);
    if (!bVar8) goto LAB_144294734;
  }
  local_48 = *(longlong *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_38);
  }
  lVar6 = *(longlong *)&this->ShouldUseDefaultSpatialFilterFunction;
  uVar7 = *(undefined8 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x8;
  uVar1 = *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x10;
  uVar2 = *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x14;
  uVar3 = *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x18;
  uVar4 = *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x1c;
  uVar5 = *(undefined8 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x20;
  plVar11 = *(longlong **)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28;
  *(longlong *)&this->ShouldUseDefaultSpatialFilterFunction = local_48;
  *(undefined8 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x8 = uStack_40;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ShouldUseDefaultSpatialFilterFunction).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar1;
  local_38._4_4_ = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_20 = plVar11;
  local_48 = lVar6;
  uStack_40 = uVar7;
  if (lVar6 != 0) {
    plVar10 = &local_38;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = plVar11;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_144294734:
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// SetSubObjectDormancyStatus @ 144294770

void __thiscall
UObjectReplicationBridge::SetSubObjectDormancyStatus
          (UObjectReplicationBridge *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  FNetRefHandleManager *this_00;
  code *pcVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FNetBitArrayView local_18;
  
  this_00 = (FNetRefHandleManager *)this->_padding_;
  uVar4 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
  uVar5 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_2);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_18,
             (uint *)(this_00->WantToBeDormantInternalIndices).Storage.AllocatorInstance.Data,
             (this_00->WantToBeDormantInternalIndices).BitCount);
  puVar2 = local_18.Storage;
  if (local_18.BitCount <= uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Net::FNetBitArrayHelper::SetBitValue
            (local_18.Storage,local_18.BitCount,uVar4,
             (puVar2[uVar5 >> 5] >> (uVar5 & 0x1f) & 1) != 0);
  return;
}

// SetSubObjectNetCondition @ 144294c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::SetSubObjectNetCondition
          (UObjectReplicationBridge *this,FNetRefHandle param_1,ELifetimeCondition param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReplicationSystemInternal *pFVar4;
  UEnum *pUVar5;
  bool local_res8 [8];
  FName local_res20;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar4 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar3 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                    (&pFVar4->NetRefHandleManager,param_1);
  local_res8[0] = false;
  bVar2 = UE::Net::Private::FNetRefHandleManager::SetSubObjectNetCondition
                    (&pFVar4->NetRefHandleManager,uVar3,(schar)param_2,local_res8);
  if (bVar2) {
    if (local_res8[0] != false) {
      if (5 < (byte)LogIris._0_1_) {
        pUVar5 = StaticEnum<enum_ELifetimeCondition>();
        if ((pUVar5 == (UEnum *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UEnum::GetNameByValue(pUVar5,(long64)&local_res20);
        ::FName::ToString(&local_res20,&local_70);
        UReplicationBridge::PrintObjectFromNetRefHandle
                  ((UReplicationBridge *)this,&local_50,param_1);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      UE::Net::Private::MarkNetObjectStateDirty(*(uint *)(this->_padding_ + 0x48),uVar3);
    }
  }
  else if (2 < (byte)LogIris._0_1_) {
    pUVar5 = StaticEnum<enum_ELifetimeCondition>();
    if ((pUVar5 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UEnum::GetNameByValue(pUVar5,(long64)&local_78);
    ::FName::ToString(&local_78,&local_60);
    UReplicationBridge::PrintObjectFromNetRefHandle((UReplicationBridge *)this,&local_40,param_1);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ShouldClassBeDeltaCompressed @ 144294ea0

bool __thiscall
UObjectReplicationBridge::ShouldClassBeDeltaCompressed
          (UObjectReplicationBridge *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  if ((0 < *(int *)&(this->ClassesWithDeltaCompression).field_0x8 -
           *(int *)&(this->ClassesWithDeltaCompression).field_0x34) && (param_1 != (UClass *)0x0)) {
    do {
      FVar5 = GetConfigClassPathName(this,(UClass *)&stack0x00000008);
      lVar2 = *(longlong *)FVar5;
      uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&(this->ClassesWithDeltaCompression).field_0x8 !=
          *(int *)&(this->ClassesWithDeltaCompression).field_0x34) {
        puVar6 = *(undefined1 **)&(this->ClassesWithDeltaCompression).field_0x40;
        puVar7 = &(this->ClassesWithDeltaCompression).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar7 = puVar6;
        }
        iVar4 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(this->ClassesWithDeltaCompression).field_0x48 - 1U &
                                  (int)((ulonglong)lVar2 >> 0x20) + uVar3) * 4);
        if (iVar4 != -1) {
          do {
            lVar1 = *(longlong *)&this->ClassesWithDeltaCompression + (longlong)iVar4 * 0x14;
            if (*(longlong *)
                 (*(longlong *)&this->ClassesWithDeltaCompression + (longlong)iVar4 * 0x14) == lVar2
               ) {
              puVar6 = (undefined1 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar6 = (undefined1 *)0x0;
              }
              if (puVar6 != (undefined1 *)0x0) {
                return (bool)*puVar6;
              }
              break;
            }
            iVar4 = *(int *)(lVar1 + 0xc);
          } while (iVar4 != -1);
        }
      }
      param_1 = (UClass *)param_1->_padding_;
    } while (param_1 != (UClass *)0x0);
  }
  return false;
}

// ShouldUseVerboseCsvStats @ 144295100

bool __thiscall UObjectReplicationBridge::ShouldUseVerboseCsvStats(UObjectReplicationBridge *this)

{
  return bUseVerboseIrisCsvStats;
}

// StartReplicatingNetObject @ 144296500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UObjectReplicationBridge::StartReplicatingNetObject
          (UObjectReplicationBridge *this,UObject *param_1,EReplicationFragmentTraits param_2,
          uchar param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  FNetHandle_u_0 FVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FNetRefHandle FVar12;
  UObject *pUVar13;
  FReplicationInstanceProtocol *pFVar14;
  FReplicationProtocolManager *pFVar15;
  FReplicationSystemInternal *pFVar16;
  FName FVar17;
  FReplicatedObjectData *pFVar18;
  undefined1 *puVar19;
  char *pcVar20;
  FName *pFVar21;
  undefined1 *puVar22;
  FNetRefHandle_u_0 FVar23;
  undefined4 in_register_00000084;
  FObjectKey FVar24;
  undefined7 in_register_00000089;
  wchar_t *pwVar25;
  uchar in_stack_00000028;
  undefined1 auStackY_518 [32];
  UObject *local_4d8;
  FReplicationProtocolManager *local_4d0;
  uint local_4c8;
  FNetRefHandle_u_0 local_4c0;
  FNetRefHandle_u_0 local_4b8;
  FWeakObjectPtr local_4b0;
  FReplicationProtocolManager *local_4a8;
  FReplicationProtocol *local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  FReplicationProtocolManager *local_488;
  FNetHandle_u_0 local_480;
  undefined8 local_478;
  FCreateReplicationProtocolParameters local_470;
  FString local_460;
  UObject **local_450;
  UObject *local_448;
  FName local_440;
  FName local_438;
  undefined1 local_430 [32];
  int local_410;
  FString local_408;
  undefined1 local_3f7;
  FReplicationProtocolManager *local_3f0;
  FString local_3e8;
  FString local_3d8;
  UObject **local_3c8;
  FReplicationProtocol **local_3c0;
  UObject **local_3b8;
  FFragmentRegistrationContext *local_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [24];
  FFragmentRegistrationContext local_380;
  ulonglong local_40;
  
  local_4d8 = (UObject *)CONCAT44(in_register_00000084,param_2);
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_480 = (FNetHandle_u_0)0x0;
  local_478 = 0;
  local_4b8 = (FNetRefHandle_u_0)param_1;
  UE::Net::Private::FObjectReferenceCache::CreateObjectReferenceInternal
            ((FObjectReferenceCache *)this->_padding_,local_4d8,
             (FNetObjectReference *)&local_480.Value);
  FVar5 = local_480;
  if (local_480 == (FNetHandle_u_0)0x0) {
    *(undefined8 *)param_1 = 0;
    return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
  }
  bVar7 = UReplicationBridge::IsReplicatedHandle
                    ((UReplicationBridge *)this,(FNetRefHandle)local_480.Value);
  if (bVar7) {
    *(FNetHandle_u_0 *)param_1 = FVar5;
    return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId588,"StartReplicatingNetObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
               ,0x24c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId588);
  }
  pUVar13 = local_4d8;
  local_380.ReplicationStateRegistry = (FReplicationStateDescriptorRegistry *)this->_padding_;
  local_380.ReplicationSystem = (UReplicationSystem *)this->_padding_;
  local_380.Fragments.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0;
  local_380.Fragments.ArrayNum = 0;
  local_380.Fragments.ArrayMax = 0x20;
  local_380.MainObjectInstance = local_4d8;
  local_380.Template = (UObject *)0x0;
  local_380.MainObjectDefaultStateSource = (UObject *)0x0;
  local_380.FragmentTraits = (EReplicationFragmentTraits)CONCAT71(in_register_00000089,param_3);
  local_380.bIsAFragmentlessNetObject = false;
  (**(code **)(*(longlong *)local_4d8 + 0x1f8))(local_4d8,&local_380);
  if (local_380.Fragments.ArrayNum < 1) {
    if (local_380.bIsAFragmentlessNetObject == false) {
      UE::Net::FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject
                (pUVar13,&local_380,None,
                 (TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *)0x0);
      if (0 < local_380.Fragments.ArrayNum) goto LAB_144296719;
      if ((local_380.bIsAFragmentlessNetObject == false) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3515033580445106346>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                             ,0xaa,"Context.WasRegistered()"), bVar8)) {
        pcVar4 = (code *)swi(3);
        FVar12.field0_0x0 = (FNetRefHandle_u_0)(*pcVar4)();
        return (FNetRefHandle)FVar12.field0_0x0;
      }
    }
    if (local_380.Fragments.ArrayNum != 0) goto LAB_144296719;
    if (local_380.bIsAFragmentlessNetObject == false) {
      local_4a0 = (FReplicationProtocol *)0x0;
      local_498 = 0;
      (**(code **)(*(longlong *)local_4d8 + 0x1e8))(local_4d8,&local_4a0);
      if ((int)local_498 == 0) {
        local_450 = &local_4d8;
        `UObjectReplicationBridge::StartReplicatingNetObject'::__l14::<lambda_1>::operator()
                  (&local_450);
      }
      else {
        local_3c0 = &local_4a0;
        local_3c8 = &local_4d8;
        `UObjectReplicationBridge::StartReplicatingNetObject'::__l16::<lambda_2>::operator()
                  (&local_3c8);
      }
      if (local_4a0 != (FReplicationProtocol *)0x0) {
        FMemory::Free(local_4a0);
      }
    }
  }
  else {
LAB_144296719:
    if (local_380.bIsAFragmentlessNetObject != false) {
      local_3b8 = &local_4d8;
      local_3b0 = &local_380;
      `UObjectReplicationBridge::StartReplicatingNetObject'::__l20::<lambda_3>::operator()
                (&local_3b8);
    }
  }
  pUVar13 = local_380.MainObjectDefaultStateSource;
  if (local_380.MainObjectDefaultStateSource == (UObject *)0x0) {
    pUVar13 = UObject::GetArchetype(local_4d8);
  }
  pFVar15 = (FReplicationProtocolManager *)this->_padding_;
  local_4a8 = pFVar15;
  pFVar14 = UE::Net::Private::FReplicationProtocolManager::CreateInstanceProtocol
                      (&local_380.Fragments,local_380.FragmentTraits);
  uVar10 = UE::Net::Private::FReplicationProtocolManager::CalculateProtocolIdentifier
                     (&local_380.Fragments);
  local_490 = 0;
  local_4c8 = uVar10;
  if (pUVar13 == (UObject *)0x0) {
    FVar24.ObjectIndex = 0;
    FVar24.ObjectSerialNumber = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    local_4b0.ObjectIndex = 0;
    local_4b0.ObjectSerialNumber = 0;
    local_448 = pUVar13;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    FWeakObjectPtr::operator=(&local_4b0,(FObjectPtr)&local_448);
    FVar24 = (FObjectKey)local_4b0;
  }
  pFVar15 = (FReplicationProtocolManager *)
            UE::Net::Private::FReplicationProtocolManager::GetReplicationProtocol
                      (pFVar15,uVar10,FVar24);
  if (pFVar15 == (FReplicationProtocolManager *)0x0) {
    local_470.bValidateProtocolId = false;
    local_470.bHasTemplateKey = true;
    pFVar15 = *(FReplicationProtocolManager **)&local_4d8->field_0x10;
    local_4d0 = pFVar15;
    local_470.TemplateKey = pUVar13;
    if (0 < *(int *)&(this->ClassesWithTypeStats).field_0x8 -
            *(int *)&(this->ClassesWithTypeStats).field_0x34) {
      pFVar16 = UReplicationSystem::GetReplicationSystemInternal
                          ((UReplicationSystem *)this->_padding_);
      lVar3 = (longlong)pFVar15;
      for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
        FVar17 = GetConfigClassPathName(this,(UClass *)local_3a8);
        lVar2 = *(longlong *)FVar17;
        uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
        if (*(int *)&(this->ClassesWithTypeStats).field_0x8 !=
            *(int *)&(this->ClassesWithTypeStats).field_0x34) {
          puVar19 = *(undefined1 **)&(this->ClassesWithTypeStats).field_0x40;
          puVar22 = &(this->ClassesWithTypeStats).field_0x38;
          if (puVar19 != (undefined1 *)0x0) {
            puVar22 = puVar19;
          }
          iVar11 = *(int *)(puVar22 +
                           (ulonglong)
                           (*(int *)&(this->ClassesWithTypeStats).field_0x48 - 1U &
                           (int)((ulonglong)lVar2 >> 0x20) + uVar10) * 4);
          if (iVar11 != -1) {
            do {
              lVar1 = *(longlong *)&this->ClassesWithTypeStats + (longlong)iVar11 * 0x18;
              if (*(longlong *)(*(longlong *)&this->ClassesWithTypeStats + (longlong)iVar11 * 0x18)
                  == lVar2) {
                pFVar21 = (FName *)(lVar1 + 8);
                if (lVar1 == 0) {
                  pFVar21 = (FName *)0x0;
                }
                if (pFVar21 != (FName *)0x0) {
                  local_470.TypeStatsIndex =
                       UE::Net::Private::FNetTypeStats::GetOrCreateTypeStats
                                 (&pFVar16->TypeStats,*pFVar21);
                  goto LAB_14429693e;
                }
                break;
              }
              iVar11 = *(int *)(lVar1 + 0x10);
            } while (iVar11 != -1);
          }
        }
        pFVar15 = local_4d0;
      }
    }
    if ((bUseVeryVerboseIrisCsvStats == false) ||
       (pFVar16 = UReplicationSystem::GetReplicationSystemInternal
                            ((UReplicationSystem *)this->_padding_),
       pFVar15 == (FReplicationProtocolManager *)0x0)) {
      local_470.TypeStatsIndex = 0;
    }
    else {
      local_470.TypeStatsIndex =
           UE::Net::Private::FNetTypeStats::GetOrCreateTypeStats
                     (&pFVar16->TypeStats,*(FName *)((longlong)pFVar15 + 0x18));
    }
LAB_14429693e:
    local_440 = *(FName *)(*(longlong *)&local_4d8->field_0x10 + 0x18);
    ::FName::ToString(&local_440,(FString *)(local_430 + 0x18));
    pwVar25 = L"";
    if (local_410 != 0) {
      pwVar25 = (wchar_t *)local_430._24_8_;
    }
    pFVar15 = (FReplicationProtocolManager *)
              UE::Net::Private::FReplicationProtocolManager::CreateReplicationProtocol
                        (local_4a8,local_4c8,&local_380.Fragments,pwVar25,&local_470);
    local_4d0 = pFVar15;
    if ((wchar_t *)local_430._24_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_430._24_8_);
    }
    if (pFVar15 == (FReplicationProtocolManager *)0x0) {
      if (1 < (byte)LogIris._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)local_4d8,(FString *)(local_398 + 8),(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
LAB_1442969f2:
        if ((FScriptContainerElement *)local_398._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_398._8_8_);
        }
      }
      goto LAB_1442969fc;
    }
LAB_144296a8c:
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)**(undefined8 **)&(pFVar15->RegisteredProtocols).field_0x30,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                 ,0x298);
    }
    lVar3 = *(longlong *)&local_4d8->field_0x10;
    GetConfigClassPathName(this,(UClass *)(local_3a8 + 8));
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
      GetConfigClassPathName(this,(UClass *)local_430);
      uVar6 = local_430._0_8_;
      uVar10 = ::GetTypeHash((FNameEntryId)(uint)local_430._0_8_);
      if (*(int *)&(this->ClassesIrisAsyncLoadingPriority).field_0x8 !=
          *(int *)&(this->ClassesIrisAsyncLoadingPriority).field_0x34) {
        puVar19 = *(undefined1 **)&(this->ClassesIrisAsyncLoadingPriority).field_0x40;
        puVar22 = &(this->ClassesIrisAsyncLoadingPriority).field_0x38;
        if (puVar19 != (undefined1 *)0x0) {
          puVar22 = puVar19;
        }
        iVar11 = *(int *)(puVar22 +
                         (ulonglong)
                         (*(int *)&(this->ClassesIrisAsyncLoadingPriority).field_0x48 - 1U &
                         SUB84(uVar6,4) + uVar10) * 4);
        if (iVar11 != -1) {
          do {
            lVar2 = *(longlong *)&this->ClassesIrisAsyncLoadingPriority + (longlong)iVar11 * 0x14;
            if (*(longlong *)
                 (*(longlong *)&this->ClassesIrisAsyncLoadingPriority + (longlong)iVar11 * 0x14) ==
                uVar6) {
              puVar19 = (undefined1 *)(lVar2 + 8);
              if (lVar2 == 0) {
                puVar19 = (undefined1 *)0x0;
              }
              if (puVar19 != (undefined1 *)0x0) {
                local_3f7 = *puVar19;
                goto LAB_144296bb8;
              }
              break;
            }
            iVar11 = *(int *)(lVar2 + 0xc);
          } while (iVar11 != -1);
        }
      }
    }
    local_3f7 = 0;
LAB_144296bb8:
    local_3f0 = local_4d0;
    UE::Net::FNetHandleManager::GetOrCreateNetHandle((UObject *)&local_488);
    local_4a8 = local_488;
    UReplicationBridge::InternalCreateNetObject
              ((UReplicationBridge *)this,(FNetRefHandle)&local_4c0,(FNetHandle)FVar5.Value,
               (FCreateNetObjectParams *)&local_4a8);
    if (local_4c0.Value != 0) {
      if (5 < (byte)LogIris._0_1_) {
        local_430._16_8_ = *(undefined8 *)&local_4d8->field_0x18;
        ::FName::ToString((FName *)(local_430 + 0x10),&local_3d8);
        local_4c8 = *(uint *)&(local_4d0->RegisteredProtocols).field_0x2c;
        (**(code **)(*(longlong *)local_4d8 + 0x200))();
        if ((local_4c0.Value == 0) || ((local_4c0.Value & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl(&local_460,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_460,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.Data.AllocatorInstance.Data);
        }
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
      }
      local_4d0 = local_488;
      UReplicationBridge::InternalAttachInstanceToNetRefHandle
                ((UReplicationBridge *)this,(FNetRefHandle)local_4c0._s_0,true,pFVar14,local_4d8,
                 (FNetHandle)&local_4d0);
      uVar10 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                         ((FNetRefHandleManager *)this->_padding_,(FNetRefHandle)local_4c0._s_0);
      if ((in_stack_00000028 == 0xff) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("NetFactoryId != InvalidNetObjectFactoryId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                             ,700,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        FVar12.field0_0x0 = (FNetRefHandle_u_0)(*pcVar4)();
        return (FNetRefHandle)FVar12.field0_0x0;
      }
      pFVar18 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                              *)(this->_padding_ + 0x2a0),uVar10);
      pFVar18->NetFactoryId = in_stack_00000028;
      pFVar16 = UReplicationSystem::GetReplicationSystemInternal
                          ((UReplicationSystem *)this->_padding_);
      UE::Net::Private::FReplicationConditionals::InitPropertyCustomConditions
                (&pFVar16->Conditionals,uVar10);
      UE::Net::FNetBitArrayHelper::SetBitValue
                ((uint *)(this->ObjectsWithObjectReferences).Storage.AllocatorInstance.Data,
                 (this->ObjectsWithObjectReferences).BitCount,uVar10,
                 (bool)((byte)(char)pFVar14->InstanceTraits >> 7));
      lVar3 = *(longlong *)&local_4d8->field_0x10;
      if (0 < *(int *)&(this->ClassesWithDeltaCompression).field_0x8 -
              *(int *)&(this->ClassesWithDeltaCompression).field_0x34) {
        for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
          FVar17 = GetConfigClassPathName(this,(UClass *)local_398);
          lVar2 = *(longlong *)FVar17;
          uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
          if (*(int *)&(this->ClassesWithDeltaCompression).field_0x8 !=
              *(int *)&(this->ClassesWithDeltaCompression).field_0x34) {
            puVar19 = *(undefined1 **)&(this->ClassesWithDeltaCompression).field_0x40;
            puVar22 = &(this->ClassesWithDeltaCompression).field_0x38;
            if (puVar19 != (undefined1 *)0x0) {
              puVar22 = puVar19;
            }
            iVar11 = *(int *)(puVar22 +
                             (ulonglong)
                             (*(int *)&(this->ClassesWithDeltaCompression).field_0x48 - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + uVar10) * 4);
            if (iVar11 != -1) {
              do {
                lVar1 = *(longlong *)&this->ClassesWithDeltaCompression + (longlong)iVar11 * 0x14;
                if (*(longlong *)
                     (*(longlong *)&this->ClassesWithDeltaCompression + (longlong)iVar11 * 0x14) ==
                    lVar2) {
                  pcVar20 = (char *)(lVar1 + 8);
                  if (lVar1 == 0) {
                    pcVar20 = (char *)0x0;
                  }
                  if (pcVar20 != (char *)0x0) {
                    if (*pcVar20 != '\0') {
                      UReplicationSystem::SetDeltaCompressionStatus
                                ((UReplicationSystem *)this->_padding_,(FNetRefHandle)local_4c0._s_0
                                 ,Allow);
                    }
                    goto LAB_144296f86;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar1 + 0xc);
              } while (iVar11 != -1);
            }
          }
        }
      }
LAB_144296f86:
      FVar23 = local_4b8;
      *(FNetRefHandle_u_0 *)local_4b8 = local_4c0;
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_144296f9d;
    }
    if (2 < (byte)LogIris._0_1_) {
      local_430._8_8_ = *(undefined8 *)&local_4d8->field_0x18;
      ::FName::ToString((FName *)(local_430 + 8),&local_3e8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
    }
    FVar23 = local_4b8;
    *(undefined8 *)local_4b8 = 0;
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    local_4d0 = pFVar15;
    bVar8 = UE::Net::Private::FReplicationProtocolManager::ValidateReplicationProtocol
                      ((FReplicationProtocol *)pFVar15,&local_380.Fragments,true);
    if (bVar8) goto LAB_144296a8c;
    if (1 < (byte)LogIris._0_1_) {
      local_438.ComparisonIndex.Value = *(uint *)&local_4d8->field_0x18;
      local_438.Number = *(uint *)&local_4d8->field_0x1c;
      ::FName::ToString(&local_438,&local_408);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      local_398._8_8_ = local_408.Data.AllocatorInstance.Data;
      goto LAB_1442969f2;
    }
LAB_1442969fc:
    *(undefined8 *)local_4b8 = 0;
    FVar23 = local_4b8;
  }
  if (pFVar14 != (FReplicationInstanceProtocol *)0x0) {
    UE::Net::Private::FReplicationProtocolManager::DestroyInstanceProtocol(pFVar14);
  }
LAB_144296f9d:
  if (local_380.Fragments.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    FMemory::Free((void *)local_380.Fragments.AllocatorInstance.SecondaryData);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FNetRefHandle)FVar23;
}

// StartReplicatingRootObject @ 144296ff0

FNetRefHandle __thiscall
UObjectReplicationBridge::StartReplicatingRootObject
          (UObjectReplicationBridge *this,UObject *param_1,FRootObjectReplicationParams *param_2,
          uchar param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FReplicationSystemInternal *pFVar6;
  FNetRefHandle FVar7;
  FReplicationProtocol *pFVar8;
  uint uVar9;
  uint uVar10;
  uchar uVar11;
  undefined7 in_register_00000089;
  FRootObjectReplicationParams *pFVar12;
  float fVar13;
  FLLMScope local_res8 [2];
  UObjectBaseUtility *local_res18 [2];
  float local_a8 [2];
  FMemScope local_a0;
  FNetRefHandle_u_0 local_98;
  FNetRefHandle_u_0 local_90;
  FName local_88;
  UObjectBaseUtility **local_80;
  UObjectBaseUtility **local_78;
  UObjectReplicationBridge *local_70;
  FNetRefHandle_u_0 *local_68;
  FUpdateWorldInfoContext local_60;
  
  pFVar12 = (FRootObjectReplicationParams *)CONCAT71(in_register_00000089,param_3);
  local_res18[0] = (UObjectBaseUtility *)param_2;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_IrisState.UniqueName,false,None,Default,true);
  local_88 = LLMTagDeclaration_IrisState.UniqueName;
  FMemScope::FMemScope(&local_a0,&local_88,true);
  if (this->bBlockStartRootObjectReplication != false) {
    local_80 = local_res18;
    `UObjectReplicationBridge::StartReplicatingRootObject'::__l5::<lambda_1>::operator()(&local_80);
    *(undefined8 *)param_1 = 0;
    FMemScope::~FMemScope(&local_a0);
    FLLMScope::~FLLMScope(local_res8);
    return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
  }
  bVar3 = UObjectBaseUtility::IsTemplate(local_res18[0],RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar3) {
    local_78 = local_res18;
    bVar3 = `UObjectReplicationBridge::StartReplicatingRootObject'::__l6::<lambda_2>::operator()
                      (&local_78);
    if (bVar3) goto LAB_1442970bb;
  }
  else {
LAB_1442970bb:
    StartReplicatingNetObject
              (this,(UObject *)&local_98._s_0,(EReplicationFragmentTraits)local_res18[0],' ');
    if (local_98 != 0) {
      uVar4 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                        ((FNetRefHandleManager *)this->_padding_,(FNetRefHandle)local_98);
      local_a8[0] = pFVar12->PollFrequency;
      FindOrCachePollFrequency(this,*(UClass **)&local_res18[0]->field_0x10,local_a8);
      if (0.0 < local_a8[0]) {
        fVar13 = local_a8[0];
        if (local_a8[0] <= __real_3a83126f) {
          fVar13 = __real_3a83126f;
        }
        iVar5 = (int)(longlong)(this->MaxTickRate / fVar13);
        uVar9 = iVar5 - 1;
        if (iVar5 == 0) {
          uVar9 = 0;
        }
        uVar10 = 0xff;
        if (uVar9 < 0xff) {
          uVar10 = uVar9;
        }
        uVar11 = '\0';
        if (uVar10 != 0) {
          uVar11 = (uchar)uVar10;
        }
      }
      else {
        uVar11 = '\0';
      }
      UE::Net::Private::FObjectPollFrequencyLimiter::SetPollFramePeriod
                (this->PollFrequencyLimiter,uVar4,uVar11);
      if (pFVar12->bNeedsWorldLocationUpdate != false) {
        pFVar6 = UReplicationSystem::GetReplicationSystemInternal
                           ((UReplicationSystem *)this->_padding_);
        UE::Net::FWorldLocations::InitObjectInfoCache(&pFVar6->WorldLocations,uVar4);
        local_90._s_0 = local_98._s_0;
        pFVar6 = UReplicationSystem::GetReplicationSystemInternal
                           ((UReplicationSystem *)this->_padding_);
        pFVar1 = (pFVar6->WorldLocations).ValidInfoIndexes.Storage.AllocatorInstance.Data;
        if (((pFVar6->WorldLocations).ValidInfoIndexes.BitCount <= uVar4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar7.field0_0x0 = (FNetRefHandle_u_0)(*pcVar2)();
          return (FNetRefHandle)FVar7.field0_0x0;
        }
        if ((*(uint *)(pFVar1 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0) {
          local_68 = &local_90;
          local_70 = this;
          `UObjectReplicationBridge::ForceUpdateWorldLocation'::__l5::<lambda_1>::operator()
                    (&local_70);
        }
        else {
          local_60.NetRefHandle.field0_0x0._s_0 = local_90;
          local_60.WorldLocations = &pFVar6->WorldLocations;
          local_60.ObjectIndex = uVar4;
          UpdateRootObjectWorldInfo(this,&local_60);
        }
      }
      uVar4 = GetPrioritizer(this,*(UClass **)&local_res18[0]->field_0x10,
                             0.0 < pFVar12->StaticPriority);
      if (pFVar12->StaticPriority <= 0.0) {
        if (uVar4 == 0xffffffff) {
          if (pFVar12->bNeedsWorldLocationUpdate == false) {
            pFVar8 = UReplicationSystem::GetReplicationProtocol
                               ((UReplicationSystem *)this->_padding_,(FNetRefHandle)local_98);
            bVar3 = UE::Net::HasRepTag(pFVar8,0x719e9e9e02f8b16);
            if (!bVar3) goto LAB_1442972e9;
          }
          uVar4 = 0;
        }
LAB_1442972dd:
        UReplicationSystem::SetPrioritizer
                  ((UReplicationSystem *)this->_padding_,(FNetRefHandle)local_98,uVar4);
      }
      else {
        if (uVar4 != 0xffffffff) goto LAB_1442972dd;
        UReplicationSystem::SetStaticPriority
                  ((UReplicationSystem *)this->_padding_,(FNetRefHandle)local_98,
                   pFVar12->StaticPriority);
      }
LAB_1442972e9:
      AssignDynamicFilter(this,(UObject *)local_res18[0],pFVar12,(FNetRefHandle)local_98);
      if ((pFVar12->bNeedsWorldLocationUpdate != false) && (pFVar12->bIsDormant == false)) {
        OptionallySetObjectRequiresFrequentWorldLocationUpdate(this,(FNetRefHandle)local_98,true);
      }
      *(FNetRefHandle_u_0 *)param_1 = local_98;
      goto LAB_144297318;
    }
  }
  *(undefined8 *)param_1 = 0;
LAB_144297318:
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(local_res8);
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// StartReplicatingSubObject @ 144297350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FNetRefHandle __thiscall
UObjectReplicationBridge::StartReplicatingSubObject
          (UObjectReplicationBridge *this,UObject *param_1,FSubObjectReplicationParams *param_2,
          uchar param_3)

{
  longlong lVar1;
  FNetRefHandleManager *pFVar2;
  code *pcVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FReplicationSystemInternal *pFVar8;
  FNetRefHandle FVar9;
  TObjectPtr<UObject>_u_0 *pTVar10;
  ulonglong uVar11;
  FReplicatedObjectData *pFVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined7 in_register_00000089;
  FNetRefHandle_u_0 *pFVar17;
  longlong lVar18;
  FScriptContainerElement *local_res8;
  UObjectBaseUtility *local_res18;
  undefined1 local_res20 [8];
  FLLMScope local_148;
  uint local_144;
  FNetRefHandle_u_0 local_140;
  FMemScope local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FNetBitArrayView local_f0;
  FName local_e0;
  FScriptContainerElement *local_d8;
  FName local_d0;
  FName local_c8;
  undefined1 local_c0 [8];
  UObjectBaseUtility **local_b8;
  FNetRefHandleManager *local_b0;
  uint *local_a8;
  FNetRefHandleManager *local_a0;
  uint *local_98;
  FNetRefHandle_u_0 *local_90;
  UObjectBaseUtility **local_88;
  undefined1 local_80 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar17 = (FNetRefHandle_u_0 *)CONCAT71(in_register_00000089,param_3);
  local_res18 = (UObjectBaseUtility *)param_2;
  FLLMScope::FLLMScope(&local_148,LLMTagDeclaration_IrisState.UniqueName,false,None,Default,true);
  local_e0 = LLMTagDeclaration_IrisState.UniqueName;
  FMemScope::FMemScope(&local_138,&local_e0,true);
  pFVar8 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  pFVar2 = &pFVar8->NetRefHandleManager;
  local_144 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                        (pFVar2,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar17->_s_0);
  bVar5 = UObjectBaseUtility::IsTemplate(local_res18,RF_ArchetypeObject|RF_ClassDefaultObject);
  puVar16 = (ulonglong *)0x0;
  if (bVar5) {
    local_b8 = &local_res18;
    local_a8 = &local_144;
    local_b0 = pFVar2;
    bVar5 = `UObjectReplicationBridge::StartReplicatingSubObject'::__l3::<lambda_1>::operator()
                      (&local_b8);
    if (bVar5) goto LAB_144297417;
  }
  else {
LAB_144297417:
    bVar5 = UReplicationBridge::IsReplicatedHandle
                      ((UReplicationBridge *)this,
                       (FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar17->_s_0);
    if (!bVar5) {
      local_98 = &local_144;
      local_88 = &local_res18;
      local_a0 = pFVar2;
      local_90 = pFVar17;
      bVar5 = `UObjectReplicationBridge::StartReplicatingSubObject'::__l6::<lambda_2>::operator()
                        (&local_a0);
      if (!bVar5) goto LAB_144297819;
    }
    uVar6 = local_144;
    local_d8 = (pFVar8->NetRefHandleManager).GlobalScopableInternalIndices.Storage.AllocatorInstance
               .Data;
    if (((pFVar8->NetRefHandleManager).GlobalScopableInternalIndices.BitCount <= local_144) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar9.field0_0x0 = (FNetRefHandle_u_0)(*pcVar3)();
      return (FNetRefHandle)FVar9.field0_0x0;
    }
    if ((*(uint *)(local_d8 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0) {
      if (2 < (byte)LogIris._0_1_) {
        if (local_res18 == (UObjectBaseUtility *)0x0) {
          ::FString::FString(&local_110,L"None");
        }
        else {
          local_d0.ComparisonIndex.Value = *(uint *)&local_res18->field_0x18;
          local_d0.Number = *(uint *)&local_res18->field_0x1c;
          ::FName::ToString(&local_d0,&local_110);
        }
        local_res8 = (FScriptContainerElement *)L"";
        if (local_110.Data.ArrayNum != 0) {
          local_res8 = local_110.Data.AllocatorInstance.Data;
        }
        if ((pFVar17->Value == 0) || (pFVar17->Value < 0x40000000000000)) {
          ::FString::PrintfImpl(&local_120,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_120,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        pTVar10 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                             ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                              &(pFVar8->NetRefHandleManager).ReplicatedInstances,local_144)->
                   field0_0x0;
        if (pTVar10->DebugPtr == (UObject *)0x0) {
          ::FString::FString(&local_130,L"None");
        }
        else {
          local_c8 = *(FName *)((longlong)pTVar10->DebugPtr + 0x18);
          ::FName::ToString(&local_c8,&local_130);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
          *(undefined8 *)param_1 = 0;
          goto LAB_144297a1d;
        }
      }
    }
    else {
      UE::Net::Private::FObjectReferenceCache::GetObjectReferenceHandleFromObject
                ((FObjectReferenceCache *)this->_padding_,(UObject *)local_c0,
                 (EGetRefHandleFlags)local_res18);
      if (local_c0 != (undefined1  [8])0x0) {
        lVar1 = this->_padding_;
        uVar11 = (ulonglong)local_c0 & 0x3fffffffffffff;
        if (*(int *)(lVar1 + 0x58) != *(int *)(lVar1 + 0x84)) {
          lVar18 = *(longlong *)(lVar1 + 0x90);
          if (*(longlong *)(lVar1 + 0x90) == 0) {
            lVar18 = lVar1 + 0x88;
          }
          iVar14 = *(int *)(lVar18 + ((uVar11 >> 0x20) * 0x17 + uVar11 &
                                     (ulonglong)(*(int *)(lVar1 + 0x98) - 1)) * 4);
          if (iVar14 != -1) {
            do {
              puVar15 = (ulonglong *)((longlong)iVar14 * 0x40 + *(longlong *)(lVar1 + 0x50));
              if ((*puVar15 & 0x3fffffffffffff) == uVar11) {
                puVar13 = puVar15 + 1;
                if (puVar15 == (ulonglong *)0x0) {
                  puVar13 = puVar16;
                }
                if ((puVar13 != (ulonglong *)0x0) && ((puVar13[5] & 0x20) != 0)) {
                  if (1 < (byte)LogIris._0_1_) {
                    if ((local_res18 == (UObjectBaseUtility *)0x0) ||
                       (*(longlong *)&local_res18->field_0x10 == 0)) {
                      ::FString::FString(&local_100,L"None");
                    }
                    else {
                      UObjectBaseUtility::GetFullName(local_res18,&local_100,(UObject *)0x0,None);
                    }
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_100.Data.AllocatorInstance.Data);
                    }
                  }
                  `UObjectReplicationBridge::StartReplicatingSubObject'::__l32::<lambda_3>::
                  operator()(&local_res8);
                  goto LAB_144297819;
                }
                break;
              }
              iVar14 = (int)puVar15[7];
            } while (iVar14 != -1);
          }
        }
      }
      UE::Net::Private::FObjectReferenceCache::GetObjectReferenceHandleFromObject
                ((FObjectReferenceCache *)this->_padding_,(UObject *)&local_140._s_0,
                 (EGetRefHandleFlags)local_res18);
      bVar5 = UReplicationBridge::IsReplicatedHandle
                        ((UReplicationBridge *)this,(FNetRefHandle)local_140._s_0);
      if ((bVar5) && (local_140.Value != 0)) {
        uVar6 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                          (pFVar2,(FNetRefHandle)local_140._s_0);
        if (uVar6 != 0) {
          pFVar12 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                    ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                  *)&(pFVar8->NetRefHandleManager).ReplicatedObjectData,uVar6);
          if (pFVar12->SubObjectRootIndex != 0) {
            pFVar12 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                      ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                    *)&(pFVar8->NetRefHandleManager).ReplicatedObjectData,
                                   pFVar12->SubObjectRootIndex);
            puVar16 = (ulonglong *)(pFVar12->RefHandle).field0_0x0.Value;
          }
        }
        if ((((ulonglong)puVar16 ^ pFVar17->Value) & 0x3fffffffffffff) != 0) {
          if (1 < (byte)LogIris._0_1_) {
            UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
                      (pFVar2,&local_68,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar17->_s_0);
            UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
                      (pFVar2,&local_78,(FNetRefHandle)local_140._s_0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          `UObjectReplicationBridge::StartReplicatingSubObject'::__l56::<lambda_4>::operator()
                    (local_res20);
        }
        *(FNetRefHandle_u_0 *)param_1 = local_140;
        goto LAB_144297a1d;
      }
      FVar9 = StartReplicatingNetObject
                        (this,(UObject *)local_80,(EReplicationFragmentTraits)local_res18,' ');
      FVar9.field0_0x0 = *(FNetRefHandle_u_0 *)FVar9.field0_0x0;
      if (FVar9.field0_0x0 != 0) {
        UReplicationBridge::InternalAddSubObject
                  ((UReplicationBridge *)this,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar17->_s_0,
                   FVar9,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar17[1]._s_0,
                   *(ESubObjectInsertionOrder *)(pFVar17 + 2));
        if (5 < (byte)LogIris._0_1_) {
          UReplicationBridge::PrintObjectFromNetRefHandle
                    ((UReplicationBridge *)this,&local_48,
                     (FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar17[1]._s_0);
          UReplicationBridge::PrintObjectFromNetRefHandle
                    ((UReplicationBridge *)this,&local_58,FVar9);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        uVar6 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                          ((FNetRefHandleManager *)this->_padding_,FVar9);
        uVar7 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                          ((FNetRefHandleManager *)this->_padding_,
                           (FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar17->_s_0);
        UE::Net::Private::FObjectPollFrequencyLimiter::SetPollWithObject
                  (this->PollFrequencyLimiter,uVar7,uVar6);
        pFVar2 = (FNetRefHandleManager *)this->_padding_;
        uVar6 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(pFVar2,FVar9);
        uVar7 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                          (pFVar2,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar17->_s_0);
        UE::Net::FNetBitArrayView::FNetBitArrayView
                  (&local_f0,
                   (uint *)(pFVar2->WantToBeDormantInternalIndices).Storage.AllocatorInstance.Data,
                   (pFVar2->WantToBeDormantInternalIndices).BitCount);
        puVar4 = local_f0.Storage;
        if ((local_f0.BitCount <= uVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          FVar9.field0_0x0 = (FNetRefHandle_u_0)(*pcVar3)();
          return (FNetRefHandle)FVar9.field0_0x0;
        }
        UE::Net::FNetBitArrayHelper::SetBitValue
                  (local_f0.Storage,local_f0.BitCount,uVar6,
                   (puVar4[uVar7 >> 5] >> (uVar7 & 0x1f) & 1) != 0);
        *(FNetRefHandle_u_0 *)param_1 = FVar9.field0_0x0;
        goto LAB_144297a1d;
      }
    }
  }
LAB_144297819:
  *(undefined8 *)param_1 = 0;
LAB_144297a1d:
  FMemScope::~FMemScope(&local_138);
  FLLMScope::~FLLMScope(&local_148);
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// StaticRegisterNativesUObjectReplicationBridge @ 144297ac0

void __cdecl UObjectReplicationBridge::StaticRegisterNativesUObjectReplicationBridge(void)

{
  return;
}

// StopReplicatingNetObject @ 144297b10

void __thiscall
UObjectReplicationBridge::StopReplicatingNetObject
          (UObjectReplicationBridge *this,UObject *param_1,EEndReplicationFlags param_2)

{
  bool bVar1;
  FNetRefHandle_u_0 local_res8;
  FNetRefHandle_u_0 local_res20;
  UObjectReplicationBridge *local_28;
  FNetRefHandle_u_0 *local_20;
  
  UE::Net::Private::FObjectReferenceCache::GetObjectReferenceHandleFromObject
            ((FObjectReferenceCache *)this->_padding_,(UObject *)&local_res20._s_0,
             (EGetRefHandleFlags)param_1);
  bVar1 = UReplicationBridge::IsReplicatedHandle
                    ((UReplicationBridge *)this,(FNetRefHandle)local_res20);
  if ((bVar1) && (local_res8._s_0 = local_res20._s_0, local_res20 != 0)) {
    if ((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
      local_20 = &local_res8;
      local_28 = this;
      `UObjectReplicationBridge::StopReplicatingNetObject'::__l5::<lambda_1>::operator()(&local_28);
    }
    UReplicationBridge::StopReplicatingNetRefHandle
              ((UReplicationBridge *)this,(FNetRefHandle)local_res8._s_0,param_2);
    return;
  }
  return;
}

// StoreDestructionInfo @ 144297bc0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FNetRefHandle __thiscall
UObjectReplicationBridge::StoreDestructionInfo
          (UObjectReplicationBridge *this,FNetRefHandle param_1,FDestructionParameters *param_2)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  FNetObjectGroupHandle FVar4;
  char cVar5;
  FReplicationSystemInternal *pFVar6;
  undefined8 uVar7;
  FScriptContainerElement *in_R9;
  FNetRefHandle_u_0 local_res18;
  uint local_res20 [2];
  undefined1 local_88 [8];
  FNetRefHandle_u_0 local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  FNetRefHandle_u_0 *local_50;
  FNetRefHandle_u_0 local_48;
  undefined8 local_40;
  undefined8 local_38;
  FScriptContainerElement local_30;
  uint local_2c;
  
  local_res18 = (FNetRefHandle_u_0)param_2;
  if (((int)(uint)(byte)in_R9[0x21] < UE::Net::FNetObjectFactoryRegistry::NetFactories.ArrayNum) &&
     (*(longlong *)
       UE::Net::FNetObjectFactoryRegistry::NetFactories.AllocatorInstance.InlineData
       [(byte)in_R9[0x21]].Pad != 0)) {
    cVar5 = (**(code **)(this->_padding_ + 0x310))();
    if (cVar5 != '\0') {
      local_70._8_8_ = this->DestructionInfoProtocol;
      local_70[1] = 0;
      local_70[0] = in_R9[0x21];
      UReplicationBridge::GetLevelGroup((UReplicationBridge *)this,(UObject *)local_78);
      UE::Net::Private::FNetRefHandleManager::CreateHandleForDestructionInfo
                ((FNetRefHandleManager *)this->_padding_,(FNetRefHandle)((longlong)local_88 + 8),
                 (FCreateNetObjectParams *)local_res18);
      FVar4.field0_0x0._s_1.UniqueId = local_78._4_4_;
      FVar4.field0_0x0.Value._0_4_ = local_78._0_4_;
      uVar7 = 0;
      if (FVar4.field0_0x0 != 0) {
        UReplicationSystem::AddToGroup
                  ((UReplicationSystem *)this->_padding_,FVar4,(FNetRefHandle)local_80._s_0);
        uVar7 = CONCAT44(local_78._4_4_,local_78._0_4_);
      }
      local_res20[0] =
           UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                     ((FNetRefHandleManager *)this->_padding_,(FNetRefHandle)local_80._s_0);
      local_48._s_0 = local_res18._s_0;
      local_40 = 0;
      local_70._0_8_ = local_88 + 8;
      local_30 = in_R9[0x21];
      local_70._8_8_ = &local_48;
      local_38 = uVar7;
      local_2c = local_res20[0];
      TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FStaticDestructionInfo_const_&>_>
                ((TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FStaticDestructionInfo,0>,FDefaultSetAllocator>
                  *)&this->StaticObjectsPendingDestroy,
                 (TPairInitializer<UE::Net::FNetRefHandle_const_&,UE::Net::Private::FStaticDestructionInfo_const_&>
                  *)local_88,(bool *)local_70);
      if (in_R9[0x20] != (FScriptContainerElement)0x0) {
        pFVar6 = UReplicationSystem::GetReplicationSystemInternal
                           ((UReplicationSystem *)this->_padding_);
        dVar3 = *(double *)in_R9;
        if ((((dVar3 < (pFVar6->WorldLocations).MinWorldPos.field0_0x0._s_0.X) ||
             (pTVar1 = &(pFVar6->WorldLocations).MaxWorldPos,
             (pTVar1->field0_0x0)._s_0.X <= dVar3 && dVar3 != (pTVar1->field0_0x0)._s_0.X)) ||
            (dVar3 = *(double *)(in_R9 + 8),
            dVar3 < (pFVar6->WorldLocations).MinWorldPos.field0_0x0._s_0.Y)) ||
           (pdVar2 = &(pFVar6->WorldLocations).MaxWorldPos.field0_0x0._s_0.Y,
           *pdVar2 <= dVar3 && dVar3 != *pdVar2)) {
          local_60._8_8_ = local_res20;
          local_60._0_8_ = this;
          `UObjectReplicationBridge::StoreDestructionInfo'::__l32::<lambda_2>::operator()(local_60);
        }
        UE::Net::FWorldLocations::InitObjectInfoCache(&pFVar6->WorldLocations,local_res20[0]);
        UE::Net::FWorldLocations::SetObjectInfo
                  (&pFVar6->WorldLocations,local_res20[0],(TVector<double> *)in_R9,0.0);
        UReplicationSystem::SetPrioritizer
                  ((UReplicationSystem *)this->_padding_,(FNetRefHandle)local_80._s_0,0);
      }
      if (5 < (byte)LogIris._0_1_) {
        UReplicationBridge::PrintObjectFromNetRefHandle
                  ((UReplicationBridge *)this,(FString *)local_60,(FNetRefHandle)local_res18._s_0);
        if ((local_80.Value == 0) || ((local_80.Value & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl((FString *)local_70,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl((FString *)local_70,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_70._0_8_);
        }
        if ((UObjectReplicationBridge *)local_60._0_8_ != (UObjectReplicationBridge *)0x0) {
          FMemory::Free((void *)local_60._0_8_);
        }
      }
      *(FNetRefHandle_u_0 *)param_1.field0_0x0 = local_80;
      return (FNetRefHandle)param_1.field0_0x0.Value;
    }
  }
  else {
    local_50 = &local_res18;
    local_60._0_8_ = in_R9;
    local_60._8_8_ = this;
    `UObjectReplicationBridge::StoreDestructionInfo'::__l5::<lambda_1>::operator()(local_60);
    if (1 < (byte)LogIris._0_1_) {
      UReplicationBridge::PrintObjectFromNetRefHandle
                ((UReplicationBridge *)this,(FString *)local_60,(FNetRefHandle)local_res18._s_0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((FScriptContainerElement *)local_60._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_60._0_8_);
      }
    }
  }
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// SubObjectCreatedFromReplication @ 144297f90

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::SubObjectCreatedFromReplication
          (UObjectReplicationBridge *this,uint param_1,FNetRefHandle param_2)

{
  code *pcVar1;
  bool bVar2;
  FReplicatedObjectData *pFVar3;
  UNetObjectFactory *pUVar4;
  FNetRefHandle FVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
           ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                         *)(this->_padding_ + 0x2a0),param_1);
  pUVar4 = GetNetFactory(this,pFVar3->NetFactoryId);
  if (pUVar4 == (UNetObjectFactory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Factory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                       ,0x5e0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(pUVar4->_padding_ + 0x2d8);
  FVar5 = UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                    ((FNetRefHandleManager *)this->_padding_,(uint)local_res8);
  (*pcVar1)(pUVar4,*(undefined8 *)FVar5.field0_0x0,param_2.field0_0x0);
  return;
}

// UnregisterInstance @ 144299e30

void __thiscall
UObjectReplicationBridge::UnregisterInstance(UObjectReplicationBridge *this,FNetRefHandle param_1)

{
  FNetRefHandleManager *this_00;
  uint uVar1;
  UObject *pUVar2;
  TObjectPtr<UObject> *pTVar3;
  
  if ((param_1.field0_0x0 != 0) && (((ulonglong)param_1.field0_0x0 & 1) == 0)) {
    pUVar2 = GetObjectFromReferenceHandle(this,param_1);
    if (pUVar2 == (UObject *)0x0) {
      this_00 = (FNetRefHandleManager *)this->_padding_;
      uVar1 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(this_00,param_1);
      pTVar3 = TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                         ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                          &this_00->ReplicatedInstances,uVar1);
      pUVar2 = (pTVar3->field0_0x0).DebugPtr;
    }
    UE::Net::Private::FObjectReferenceCache::RemoveReference
              ((FObjectReferenceCache *)this->_padding_,param_1,pUVar2);
  }
  return;
}

// UpdateInstancesWorldLocation @ 14429a040

void __thiscall
UObjectReplicationBridge::UpdateInstancesWorldLocation(UObjectReplicationBridge *this)

{
  FWorldLocations *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FNetRefHandleManager *this_00;
  bool bVar4;
  FReplicationSystemInternal *pFVar5;
  FNetRefHandle FVar6;
  uint *puVar7;
  uint *puVar8;
  FDirtyNetObjectTracker *this_01;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint local_res10;
  FUpdateWorldInfoContext local_a0;
  FNetBitArrayView local_88;
  FNetRefHandleManager *local_78;
  FDirtyNetObjectTracker *local_70;
  FNetBitArrayView local_68;
  undefined1 local_58 [24];
  
  pFVar5 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  uVar11 = 0;
  local_a0.ObjectIndex = 0;
  local_a0.NetRefHandle.field0_0x0.Value = (FNetRefHandle_u_0)0x0;
  this_01 = &pFVar5->DirtyNetObjectTracker;
  pFVar1 = &pFVar5->WorldLocations;
  local_78 = &pFVar5->NetRefHandleManager;
  local_a0.WorldLocations = pFVar1;
  local_70 = this_01;
  if (((pFVar5->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Net::Private::FDirtyNetObjectTracker::LockExternalAccess(this_01);
  UE::Net::Private::FDirtyNetObjectTracker::GetDirtyNetObjectsThisFrame(this_01,&local_88);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_68,
             (uint *)(pFVar5->WorldLocations).ObjectsRequiringFrequentWorldLocationUpdate.Storage.
                     AllocatorInstance.Data,
             (pFVar5->WorldLocations).ObjectsRequiringFrequentWorldLocationUpdate.BitCount);
  if ((local_88.BitCount != local_68.BitCount) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetNumBits() == B.GetNumBits()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x668,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res10 = 0;
  puVar7 = local_68.Storage;
  puVar8 = local_88.Storage;
  uVar14 = uVar11;
  if (local_88.WordCount != 0) {
    do {
      this_00 = local_78;
      iVar13 = (int)uVar11;
      uVar9 = 0xffffffff;
      if ((uint)uVar14 == local_88.WordCount - 1) {
        uVar9 = 0xffffffff >> (-(char)local_88.BitCount & 0x1fU);
      }
      uVar9 = uVar9 & (*puVar8 | *puVar7);
      uVar10 = (uint)uVar14;
      if (uVar9 != 0) {
        uVar12 = 1;
        do {
          uVar10 = (uint)uVar11;
          if ((uVar9 & 1) != 0) {
            pFVar2 = (pFVar1->ValidInfoIndexes).Storage.AllocatorInstance.Data;
            if (((pFVar5->WorldLocations).ValidInfoIndexes.BitCount <= uVar10) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((*(uint *)(pFVar2 + (uVar11 >> 5) * 4) & uVar12) != 0) {
              local_a0.ObjectIndex = uVar10;
              FVar6 = UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                                (this_00,(uint)local_58);
              local_a0.NetRefHandle.field0_0x0 = *(FNetRefHandle_u_0 *)FVar6.field0_0x0;
              UpdateRootObjectWorldInfo(this,&local_a0);
            }
          }
          uVar11 = (ulonglong)(uVar10 + 1);
          uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
          uVar9 = uVar9 >> 1;
          uVar10 = local_res10;
        } while (uVar9 != 0);
      }
      local_res10 = uVar10 + 1;
      uVar11 = (ulonglong)(iVar13 + 0x20);
      puVar7 = puVar7 + 1;
      this_01 = local_70;
      puVar8 = puVar8 + 1;
      uVar14 = (ulonglong)local_res10;
    } while (local_res10 < local_88.WordCount);
  }
  UE::Net::Private::FDirtyNetObjectTracker::AllowExternalAccess(this_01);
  return;
}

// UpdateRootObjectWorldInfo @ 14429a2d0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::UpdateRootObjectWorldInfo
          (UObjectReplicationBridge *this,FUpdateWorldInfoContext *param_1)

{
  double *pdVar1;
  FWorldLocations *pFVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  FReplicatedObjectData *pFVar4;
  UNetObjectFactory *pUVar5;
  TObjectPtr<UObject> *pTVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FWeakObjectPtr local_res8;
  TObjectPtr<UObject>_u_0 local_res10;
  FString local_78;
  FString local_68;
  TObjectPtr<UObject>_u_0 local_58;
  FNetRefHandle_u_0 local_50;
  undefined4 local_48;
  TVector<double>_u_0 local_40;
  float local_28;
  char local_20;
  
  pFVar4 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
           ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                         *)(this->_padding_ + 0x2a0),param_1->ObjectIndex);
  pUVar5 = GetNetFactory(this,pFVar4->NetFactoryId);
  pTVar6 = TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                      (this->_padding_ + 0x300),param_1->ObjectIndex);
  local_58.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar6->field0_0x0).DebugPtr;
  local_50 = (param_1->NetRefHandle).field0_0x0;
  local_48 = 3;
  (**(code **)(pUVar5->_padding_ + 0x2e8))(pUVar5,&local_40,&local_58);
  TVar3 = local_58;
  if (local_20 == '\0') {
    return;
  }
  if ((((byte)LogIris._0_1_ < 3) || (GInvalidLocationWarnings == 0)) ||
     (((pFVar2 = param_1->WorldLocations, (pFVar2->MinWorldPos).field0_0x0._s_0.X <= local_40._s_0.X
       && ((((pFVar2->MinWorldPos).field0_0x0._s_0.Y <= local_40._s_0.Y &&
            ((pFVar2->MinWorldPos).field0_0x0._s_0.Z <= local_40._s_0.Z)) &&
           (local_40._s_0.X < (pFVar2->MaxWorldPos).field0_0x0._s_0.X ||
            local_40._s_0.X == (pFVar2->MaxWorldPos).field0_0x0._s_0.X)))) &&
      ((pdVar1 = &(pFVar2->MaxWorldPos).field0_0x0._s_0.Y,
       local_40._s_0.Y < *pdVar1 || local_40._s_0.Y == *pdVar1 &&
       (pdVar1 = &(pFVar2->MaxWorldPos).field0_0x0._s_0.Z,
       local_40._s_0.Z < *pdVar1 || local_40._s_0.Z == *pdVar1)))))) goto LAB_14429a5d9;
  local_res10.DebugPtr = (UObject *)0x0;
  iVar10 = 0;
  if (GInvalidLocationWarnings == 1) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    iVar10 = 0;
    if ((local_58.DebugPtr != (UObject *)0x0) &&
       (TVar3 = *(TObjectPtr<UObject>_u_0 *)&(local_58.DebugPtr)->field_0x10, iVar10 = 0,
       TVar3.DebugPtr != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar3.DebugPtr);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = TVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar3.DebugPtr);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      iVar10 = local_res8.ObjectIndex;
    }
LAB_14429a437:
    local_res10.DebugPtr = (UObject *)local_res8;
  }
  else if (1 < GInvalidLocationWarnings) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    iVar10 = 0;
    if (local_58.DebugPtr == (UObject *)0x0) goto LAB_14429a437;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_58.DebugPtr);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10.DebugPtr = TVar3.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar3.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    local_res10.DebugPtr = (UObject *)local_res8;
    iVar10 = local_res8.ObjectIndex;
  }
  uVar8 = local_res10._4_4_;
  local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffffffffff00);
  uVar9 = iVar10 - uVar8 ^ uVar8 >> 0xd;
  uVar7 = (-0x61c88647 - uVar9) - uVar8 ^ uVar9 << 8;
  uVar8 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar8) - uVar7 ^ uVar8 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 0x10;
  uVar8 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar8) - uVar7 ^ uVar8 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 10;
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::
  FindOrAddByHash<FObjectKey_const_&>
            (&this->WorldLocationOOBWarnings,(uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xf,
             (FObjectKey *)&local_res10.ObjectPtr,(bool *)&local_res8);
  if ((((char)local_res8.ObjectIndex == '\0') || (GInvalidLocationWarnings == 3)) &&
     (2 < (byte)LogIris._0_1_)) {
    UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_40._s_0,&local_68);
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              ((FNetRefHandleManager *)this->_padding_,&local_78,param_1->ObjectIndex);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
LAB_14429a5d9:
  UE::Net::FWorldLocations::SetObjectInfo
            (param_1->WorldLocations,param_1->ObjectIndex,(TVector<double> *)&local_40._s_0,local_28
            );
  return;
}

// WriteNetRefHandleCreationInfo @ 14429c500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UObjectReplicationBridge::WriteNetRefHandleCreationInfo
          (UObjectReplicationBridge *this,FReplicationBridgeSerializationContext *param_1,
          FNetRefHandle param_2)

{
  longlong lVar1;
  FNetObjectCreationHeader *pFVar2;
  FNetRefHandleManager *this_00;
  code *pcVar3;
  FNetRefHandle_u_0 FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  FReplicationProtocol *pFVar9;
  undefined8 *puVar10;
  FReplicatedObjectData *pFVar11;
  UNetObjectFactory *pUVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  FName local_res8;
  FReplicationBridgeSerializationContext *local_res10;
  FNetRefHandle_u_0 local_res18;
  FNetRefHandle_u_0 *local_res20;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FNetObjectCreationHeader *local_88;
  FName local_80;
  FName local_78;
  void *local_70 [2];
  void *local_60 [4];
  
  local_res10 = param_1;
  local_res18 = param_2.field0_0x0;
  if ((param_1->bIsDestructionInfo != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Context.bIsDestructionInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                         ,0x433,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar14 = local_res18.Value & 0x3fffffffffffff;
  if (*(int *)&(this->CachedCreationHeaders).field_0x8 !=
      *(int *)&(this->CachedCreationHeaders).field_0x34) {
    puVar13 = *(undefined1 **)&(this->CachedCreationHeaders).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->CachedCreationHeaders).field_0x38;
    }
    iVar7 = *(int *)(puVar13 +
                    ((uVar14 >> 0x20) * 0x17 + uVar14 &
                    (ulonglong)(*(int *)&(this->CachedCreationHeaders).field_0x48 - 1)) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedCreationHeaders + (longlong)iVar7 * 0x18;
        if ((*(ulonglong *)(*(longlong *)&this->CachedCreationHeaders + (longlong)iVar7 * 0x18) &
            0x3fffffffffffff) == uVar14) {
          puVar10 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          if (puVar10 != (undefined8 *)0x0) {
            pFVar2 = (FNetObjectCreationHeader *)*puVar10;
            pUVar12 = GetNetFactory(this,pFVar2->FactoryId);
            if (5 < (byte)LogIris._0_1_) {
              (**(code **)(pFVar2->_padding_ + 8))(pFVar2,local_70);
              if (pUVar12 == (UNetObjectFactory *)0x0) {
                ::FString::FString(&local_f8,L"None");
              }
              else {
                local_res8 = (FName)pUVar12->_padding_;
                ::FName::ToString(&local_res8,&local_f8);
              }
              if ((local_res18.Value == 0) || ((local_res18.Value & 0xffc0000000000000) == 0)) {
                ::FString::PrintfImpl(&local_108,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
              }
              else {
                ::FString::PrintfImpl(&local_108,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
              }
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              if (local_70[0] != (void *)0x0) {
                FMemory::Free(local_70[0]);
              }
            }
            bVar5 = UNetObjectFactory::WriteHeader
                              (pUVar12,(FNetRefHandle)local_res18._s_0,
                               local_res10->SerializationContext,pFVar2);
            return bVar5;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  pFVar9 = UReplicationSystem::GetReplicationProtocol
                     ((UReplicationSystem *)this->_padding_,(FNetRefHandle)local_res18._s_0);
  FVar4 = local_res18;
  if (pFVar9 == (FReplicationProtocol *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      if ((local_res18.Value == 0) || ((local_res18.Value & 0xffc0000000000000) == 0)) {
        ::FString::PrintfImpl(&local_e8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
      }
      else {
        ::FString::PrintfImpl(&local_e8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    local_res20 = &local_res18;
    `UObjectReplicationBridge::WriteNetRefHandleCreationInfo'::__l33::<lambda_1>::operator()
              (&local_res20);
    bVar5 = false;
  }
  else {
    this_00 = (FNetRefHandleManager *)this->_padding_;
    uVar8 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex
                      (this_00,(FNetRefHandle)local_res18._s_0);
    if (uVar8 == 0) {
      if (1 < (byte)LogIris._0_1_) {
        if ((FVar4.Value == 0) || ((FVar4.Value & 0xffc0000000000000) == 0)) {
          ::FString::PrintfImpl(&local_d8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
        }
        else {
          ::FString::PrintfImpl(&local_d8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      bVar5 = false;
    }
    else {
      pFVar11 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                              *)&this_00->ReplicatedObjectData,uVar8);
      pUVar12 = GetNetFactory(this,pFVar11->NetFactoryId);
      if ((pUVar12 == (UNetObjectFactory *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Factory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                             ,0x456,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      UNetObjectFactory::CreateHeader(pUVar12,(FNetRefHandle)&local_88,(uint)local_res18.Value);
      if (local_88 == (FNetObjectCreationHeader *)0x0) {
        if (1 < (byte)LogIris._0_1_) {
          if ((local_res18.Value == 0) || ((local_res18.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_b8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_b8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          if (pUVar12 == (UNetObjectFactory *)0x0) {
            ::FString::FString(&local_c8,L"None");
          }
          else {
            local_80 = (FName)pUVar12->_padding_;
            ::FName::ToString(&local_80,&local_c8);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        bVar5 = false;
      }
      else {
        if (6 < (byte)LogIris._0_1_) {
          (**(code **)(local_88->_padding_ + 8))(local_88,local_60);
          if (pUVar12 == (UNetObjectFactory *)0x0) {
            ::FString::FString(&local_98,L"None");
          }
          else {
            local_78 = (FName)pUVar12->_padding_;
            ::FName::ToString(&local_78,&local_98);
          }
          if ((local_res18.Value == 0) || ((local_res18.Value & 0xffc0000000000000) == 0)) {
            ::FString::PrintfImpl(&local_a8,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
          }
          else {
            ::FString::PrintfImpl(&local_a8,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
          }
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_60[0] != (void *)0x0) {
            FMemory::Free(local_60[0]);
          }
        }
        bVar5 = UNetObjectFactory::WriteHeader
                          (pUVar12,(FNetRefHandle)local_res18._s_0,local_res10->SerializationContext
                           ,local_88);
      }
      if (local_88 != (FNetObjectCreationHeader *)0x0) {
        (**(code **)local_88->_padding_)(local_88,1);
      }
    }
  }
  return bVar5;
}

// operator() @ 1442b17c0

void __thiscall
`UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_1>::operator()
          (void *this,FReplicationProtocol *param_1,FObjectKey param_2)

{
  int *piVar1;
  FReplicationStateDescriptor **ppFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  FReplicationStateDescriptor **ppFVar9;
  ForAnyElementType *pFVar10;
  FWeakObjectPtr local_res18 [2];
  undefined8 local_38;
  int iStack_30;
  uint uStack_2c;
  undefined8 local_28;
  int iStack_20;
  uint uStack_1c;
  
  local_res18[0].ObjectIndex = param_2.ObjectIndex;
  local_res18[0].ObjectSerialNumber = param_2.ObjectSerialNumber;
  pUVar8 = FWeakObjectPtr::Get(local_res18);
  if (pUVar8 != (UObject *)0x0) {
    ppFVar9 = param_1->ReplicationStateDescriptors;
    uVar4 = param_1->ReplicationStateCount;
    if (((int)uVar4 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ppFVar2 = ppFVar9 + (int)uVar4;
    for (; ppFVar9 != ppFVar2; ppFVar9 = ppFVar9 + 1) {
      if (((*ppFVar9)->Traits & HasPushBasedDirtiness) == None) {
        local_38 = *(undefined8 *)&pUVar8->field_0x10;
        pFVar10 = *(ForAnyElementType **)this;
        iStack_30 = param_1->RefCount;
        uStack_2c = uStack_2c & 0xffffff00;
        if (((pFVar10->Data <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar10->Data + (longlong)*(int *)((longlong)&pFVar10[1].Data + 4) * 0x10)) &&
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
        iVar7 = *(int *)&pFVar10[1].Data;
        piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,pFVar10,piVar1);
        }
        *(int *)&pFVar10[1].Data = iVar7 + 1;
        local_28._0_4_ = (undefined4)local_38;
        local_28._4_4_ = local_38._4_4_;
        iStack_20 = iStack_30;
        uStack_1c = uStack_2c;
        goto LAB_1442b1919;
      }
    }
    local_28 = *(undefined8 *)&pUVar8->field_0x10;
    pFVar10 = *(ForAnyElementType **)this;
    iStack_20 = param_1->RefCount;
    uStack_1c = CONCAT31(uStack_1c._1_3_,1);
    if (((pFVar10->Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar10->Data + (longlong)*(int *)((longlong)&pFVar10[1].Data + 4) * 0x10)) &&
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
    iVar7 = *(int *)&pFVar10[1].Data;
    piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar10,piVar1);
    }
    *(int *)&pFVar10[1].Data = iVar7 + 1;
LAB_1442b1919:
    pFVar3 = pFVar10->Data + (longlong)iVar7 * 0x10;
    *(undefined4 *)pFVar3 = (undefined4)local_28;
    *(undefined4 *)(pFVar3 + 4) = local_28._4_4_;
    *(int *)(pFVar3 + 8) = iStack_20;
    *(uint *)(pFVar3 + 0xc) = uStack_1c;
  }
  return;
}

// operator() @ 1442b19f0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FString * __thiscall
`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,uint param_1)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
            (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),param_1);
  pUVar1 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                     (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),param_1);
  if (pUVar1 != (UObject *)0x0) {
    local_res8 = *(FName *)(*(longlong *)&pUVar1->field_0x10 + 0x18);
    ::FName::ToString(&local_res8,&local_28);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Class %s");
  if ((pUVar1 != (UObject *)0x0) &&
     (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 1442b2e40

bool __thiscall
`UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_2>::operator()
          (void *this,FPushBasedInfo *param_1,FPushBasedInfo *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  byte bVar4;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  bVar4 = param_2->bIsFullyPushBased;
  if (param_1->bIsFullyPushBased == (bool)bVar4) {
    if (param_1->RefCount != param_2->RefCount) {
      return param_2->RefCount <= param_1->RefCount;
    }
    local_res10[0] = (FName)param_2->Class->_padding_;
    ::FName::ToString(local_res10,&local_18);
    local_res10[0] = (FName)param_1->Class->_padding_;
    ::FName::ToString(local_res10,&local_28);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,(wchar_t *)FVar3.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar4 = (byte)((uint)iVar1 >> 0x1f);
  }
  return (bool)bVar4;
}

// operator() @ 1442b2f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()
          (void *this,uint param_1)

{
  int *piVar1;
  ForElementType<UE::Net::FReplicationView::FView> FVar2;
  FNetRefHandleManager *this_00;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Net::FReplicationView::FView> FVar7;
  FReplicationSystemInternal *pFVar8;
  FNetRefHandle FVar9;
  undefined ***pppuVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_1b8 [32];
  FIdentityFunctor local_188 [8];
  uint local_180 [2];
  TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
  local_178;
  FScriptContainerElement *local_168;
  uint local_160;
  uint uStack_15c;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  uint local_148;
  uint local_140;
  FString local_138;
  void *local_128;
  FString local_120;
  uint local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  UObject *local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [8];
  FString local_e8;
  void *local_d8 [2];
  FNetBitArrayView local_c8;
  FNetBitArrayView local_b8;
  FNetBitArrayView local_a8;
  undefined1 local_98 [32];
  undefined **local_78 [2];
  uint *local_68;
  undefined ***local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_180[0] = param_1;
  local_128 = this;
  FVar7 = (ForElementType<UE::Net::FReplicationView::FView>)
          UE::Net::Private::FReplicationConnections::GetReplicationView
                    (*(FReplicationConnections **)this,param_1);
  uVar15 = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  piVar1 = (int *)((longlong)FVar7 + 0x128);
  iVar6 = *piVar1;
  if (*(ForElementType<UE::Net::FReplicationView::FView> *)((longlong)FVar7 + 0x120) !=
      (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar7 = *(ForElementType<UE::Net::FReplicationView::FView> *)((longlong)FVar7 + 0x120);
  }
  FVar2 = (ForElementType<UE::Net::FReplicationView::FView>)
          ((longlong)FVar7 + (longlong)iVar6 * 0x48);
  while( true ) {
    if (*piVar1 != iVar6) {
      local_188[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<UE::Net::FReplicationView::FView_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_188);
    }
    if (FVar7 == FVar2) break;
    UE::Math::TVector<double>::ToCompactString
              ((TVector<double> *)((longlong)FVar7 + 0x10),&local_e8);
    ::FString::PrintfImpl(&local_120,L"%s ");
    uVar11 = local_120.Data.ArrayNum - 1;
    if (local_120.Data.ArrayNum == 0) {
      uVar11 = 0;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_120.Data.AllocatorInstance.Data,uVar11);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    FVar7 = (ForElementType<UE::Net::FReplicationView::FView>)((longlong)FVar7 + 0x48);
  }
  if ((3 < (byte)LogIris._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x370))
              (*(longlong **)((longlong)this + 8),local_d8,local_180[0]);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_d8[0] != (void *)0x0) {
      FMemory::Free(local_d8[0]);
    }
    if (3 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_14c = 0;
  local_148 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x40) + 0xc);
  local_150 = 0;
  uVar11 = local_148 + 0x1f >> 5;
  if (local_148 + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&local_158,0,&local_14c);
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar11,&local_158,&local_150,&local_14c);
  memset(local_158.Data + (longlong)iVar6 * 4,0,(ulonglong)uVar11 << 2);
  UE::Net::FNetBitArrayView::FNetBitArrayView(&local_a8,(uint *)local_158.Data,local_148);
  lVar13 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x40);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_c8,*(uint **)(lVar13 + 0x168),*(uint *)(lVar13 + 0x178));
  pFVar8 = UReplicationSystem::GetReplicationSystemInternal
                     (*(UReplicationSystem **)(*(longlong *)((longlong)this + 8) + 0x28));
  lVar13 = (longlong)(int)local_180[0];
  uVar11 = 0;
  if ((int)local_180[0] < (pFVar8->Filtering).ConnectionInfos.ArrayNum) {
    uVar11 = ~local_180[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar17 = (pFVar8->Filtering).ConnectionInfos.AllocatorInstance.Data;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_b8,*(uint **)(pFVar17 + lVar13 * 0x160 + 0x60),
             *(uint *)(pFVar17 + lVar13 * 0x160 + 0x70));
  UE::Net::FNetBitArrayView::Set<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)>
            (&local_a8,&local_b8,UE::Net::FNetBitArrayBase::AndNotOp,&local_c8);
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  this_00 = *(FNetRefHandleManager **)(*(longlong *)((longlong)this + 8) + 0x40);
  local_160 = local_148 + 0x1f >> 5;
  local_168 = local_158.Data;
  uStack_15c = local_148;
  if (local_148 == 0) {
    local_168 = (FScriptContainerElement *)&uStack_15c;
  }
  else if ((local_158.Data == (FScriptContainerElement *)0x0) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Storage != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x5a6,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((uStack_15c != 0) &&
      ((*(uint *)(local_168 + (ulonglong)(local_160 - 1) * 4) &
       ~(0xffffffffU >> (-(char)uStack_15c & 0x1fU))) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x5a7,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = local_160;
  uVar16 = 0;
  uVar11 = 0xffffffff >> (-(char)uStack_15c & 0x1fU);
  pFVar17 = local_168;
  local_140 = uVar11;
  if (local_160 != 0) {
    do {
      uVar12 = 0xffffffff;
      if (uVar16 == uVar4 - 1) {
        uVar12 = uVar11;
      }
      uVar14 = uVar15;
      this = local_128;
      for (uVar12 = uVar12 & *(uint *)pFVar17; local_128 = this, uVar12 != 0; uVar12 = uVar12 >> 1)
      {
        if ((uVar12 & 1) != 0) {
          local_110 = uVar14;
          FVar9 = UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                            (this_00,(uint)local_f0);
          uStack_108 = *(undefined8 *)FVar9.field0_0x0;
          local_100 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                                (this_00,uVar14);
          if (local_100 == (UObject *)0x0) {
            uStack_f8 = 0;
          }
          else {
            uStack_f8 = *(undefined8 *)&local_100->field_0x10;
          }
          iVar6 = local_178.ArrayNum;
          if (local_178.ArrayNum == local_178.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
          }
          local_178.ArrayNum = iVar6 + 1;
          *(ulonglong *)(local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20) =
               CONCAT44(uStack_10c,local_110);
          *(undefined8 *)(local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 8) =
               uStack_108;
          *(UObject **)(local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 0x10) =
               local_100;
          *(undefined8 *)(local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20 + 0x10 + 8) =
               uStack_f8;
        }
        uVar14 = uVar14 + 1;
        uVar11 = local_140;
        this = local_128;
      }
      uVar16 = uVar16 + 1;
      uVar15 = uVar15 + 0x20;
      pFVar17 = pFVar17 + 4;
    } while (uVar16 < uVar4);
  }
  uVar15 = **(uint **)((longlong)this + 0x10) & 0x300;
  if ((uVar15 == 0) || (uVar15 == 0x100)) {
    AlgoImpl::
    IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
              ((FRootObjectData *)local_178.AllocatorInstance.Data,local_178.ArrayNum,local_188[0],
               (<lambda_1>)local_188[0]);
  }
  else if (uVar15 == 0x200) {
    AlgoImpl::
    IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
              ((FRootObjectData *)local_178.AllocatorInstance.Data,local_178.ArrayNum,local_188[0],
               (<lambda_1>)local_188[0]);
  }
  local_98._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x40);
  local_98._8_8_ = &local_178;
  local_78[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  local_78[1] = *(undefined ***)((longlong)this + 0x18);
  local_68 = local_180;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,FString,unsigned_int>
       ::Call;
  local_60 = (undefined ***)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  UE::Net::Private::ObjectBridgeDebugging::LogRootObjectList
            ((FLogContext *)local_98,(bool)(**(byte **)((longlong)this + 0x10) & 1));
  if (((3 < (byte)LogIris._0_1_) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
      3 < (byte)LogIris._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if ((FRootObjectData *)local_178.AllocatorInstance.Data != (FRootObjectData *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1442b3dc0

bool __thiscall
`UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>::operator()
          (void *this,UClass *param_1,UClass *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = (FName)param_2->_padding_;
  ::FName::ToString(local_res10,&local_18);
  local_res10[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res10,&local_28);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,(wchar_t *)FVar3.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// PrintAlwaysRelevantObjects @ 1442cbc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::PrintAlwaysRelevantObjects(UObjectReplicationBridge *this,uint param_1)

{
  FName FVar1;
  FNetRefHandleManager *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FReplicationSystemInternal *pFVar6;
  UClass *this_00;
  uint *puVar7;
  longlong *plVar8;
  uint *puVar9;
  uint uVar10;
  FNetObjectFilterDefinition *pFVar11;
  ulonglong uVar12;
  undefined1 auStackY_1f8 [32];
  FIdentityFunctor local_1c8;
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  uint local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  uint local_198;
  FScriptContainerElement *local_188;
  uint uStack_180;
  uint uStack_17c;
  FScriptContainerElement *local_178;
  uint uStack_170;
  uint uStack_16c;
  TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
  local_168;
  FNetBitArrayView local_158;
  FNetBitArrayView local_148;
  FName local_138;
  FNetBitArrayView local_130;
  FNetBitArrayView local_120;
  TArrayView<FNetObjectFilterDefinition_const_,int> local_110;
  FNetBitArrayView local_100;
  FNetBitArrayView local_e8;
  FNetBitArrayView local_d8;
  FNetBitArrayView local_c8;
  FNetBitArrayView local_b8;
  FNetBitArrayView local_a8;
  undefined1 local_98 [56];
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar6 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  if ((3 < (byte)LogIris._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b4 = 0;
  local_1b0 = *(uint *)(this->_padding_ + 0xc);
  local_1b8 = 0;
  uVar10 = local_1b0 + 0x1f >> 5;
  if (local_1b0 + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&local_1c0,0,&local_1b4);
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar10,&local_1c0,&local_1b8,&local_1b4);
  memset(local_1c0.Data + (longlong)iVar5 * 4,0,(ulonglong)uVar10 << 2);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_100,
             (uint *)(pFVar6->NetRefHandleManager).GlobalScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar6->NetRefHandleManager).GlobalScopableInternalIndices.BitCount);
  local_188 = local_1c0.Data;
  uStack_17c = local_1b0;
  uStack_180 = local_1b0 + 0x1f >> 5;
  if (local_1b0 == 0) {
    local_188 = (FScriptContainerElement *)&uStack_17c;
  }
  else if ((local_1c0.Data == (FScriptContainerElement *)0x0) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Storage != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x5a6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((uStack_17c != 0) &&
      ((*(uint *)(local_188 + (ulonglong)(uStack_180 - 1) * 4) &
       ~(0xffffffffU >> (-(char)uStack_17c & 0x1fU))) != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x5a7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_d8.BitCount = uStack_17c;
  local_d8.WordCount = uStack_180;
  local_e8.Storage = local_100.Storage;
  local_e8.WordCount = local_100.WordCount;
  local_e8.BitCount = local_100.BitCount;
  local_d8.Storage = (uint *)local_188;
  UE::Net::Private::FReplicationFiltering::BuildAlwaysRelevantList
            (&pFVar6->Filtering,&local_d8,&local_e8);
  ::FName::FName(&local_138,"/Script/IrisCore.AlwaysRelevantNetObjectFilter");
  this_00 = Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  UNetObjectFilterDefinitions::GetFilterDefinitions
            ((UNetObjectFilterDefinitions *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr,
             &local_110);
  pFVar11 = local_110.DataPtr;
  do {
    if (pFVar11 == local_110.DataPtr + local_110.ArrayNum) {
      UE::Net::FNetBitArrayView::FNetBitArrayView(&local_148,(uint *)local_1c0.Data,local_1b0);
      UE::Net::FNetBitArrayView::FNetBitArrayView
                (&local_120,*(uint **)(this->_padding_ + 0x168),*(uint *)(this->_padding_ + 0x178));
      if (((local_148.Storage == local_120.Storage) || (local_148.BitCount != local_120.BitCount))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x64b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_148.WordCount != 0) {
        uVar12 = (ulonglong)local_148.WordCount;
        do {
          uVar10 = *local_120.Storage;
          local_120.Storage = local_120.Storage + 1;
          *local_148.Storage = *local_148.Storage & ~uVar10;
          local_148.Storage = local_148.Storage + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      pFVar2 = (FNetRefHandleManager *)this->_padding_;
      local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.ArrayNum = 0;
      local_168.ArrayMax = 0;
      UE::Net::FNetBitArrayView::FNetBitArrayView(&local_b8,(uint *)local_1c0.Data,local_1b0);
      local_a8.Storage = local_b8.Storage;
      local_a8.WordCount = local_b8.WordCount;
      local_a8.BitCount = local_b8.BitCount;
      UE::Net::Private::ObjectBridgeDebugging::FillRootObjectArrayFromBitArray
                (&local_168,&local_a8,pFVar2);
      uVar10 = param_1 & 0x300;
      if ((uVar10 == 0) || (uVar10 == 0x100)) {
        AlgoImpl::
        IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
                  ((FRootObjectData *)local_168.AllocatorInstance.Data,local_168.ArrayNum,local_1c8,
                   (<lambda_1>)local_1c8);
      }
      else if (uVar10 == 0x200) {
        AlgoImpl::
        IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
                  ((FRootObjectData *)local_168.AllocatorInstance.Data,local_168.ArrayNum,local_1c8,
                   (<lambda_1>)local_1c8);
      }
      local_98._0_8_ = this->_padding_;
      local_98._8_8_ = &local_168;
      local_98._16_8_ = 0;
      local_60 = (longlong *)0x0;
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      UE::Net::Private::ObjectBridgeDebugging::LogRootObjectList
                ((FLogContext *)local_98,(bool)((byte)param_1 & 1));
      if (((3 < (byte)LogIris._0_1_) &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
          3 < (byte)LogIris._0_1_)) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
         3 < (byte)LogIris._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      if (local_98._16_8_ != 0) {
        plVar8 = (longlong *)(local_98 + 0x20);
        if (local_60 != (longlong *)0x0) {
          plVar8 = local_60;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if ((FRootObjectData *)local_168.AllocatorInstance.Data != (FRootObjectData *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
      return;
    }
    if (pFVar11->ClassName == local_138) {
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0 = 0;
      local_198 = *(uint *)(this->_padding_ + 0xc);
      uVar10 = local_198 + 0x1f >> 5;
      if (local_198 + 0x1f >> 5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar10,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
      }
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar10,&local_1a8,(int *)&local_1a0,(int *)((longlong)&local_1a0 + 4));
      memset(local_1a8.Data + (longlong)iVar5 * 4,0,(ulonglong)uVar10 << 2);
      FVar1 = pFVar11->FilterName;
      local_178 = local_1a8.Data;
      uStack_16c = local_198;
      uStack_170 = local_198 + 0x1f >> 5;
      if (local_198 == 0) {
        local_178 = (FScriptContainerElement *)&uStack_16c;
      }
      else if ((local_1a8.Data == (FScriptContainerElement *)0x0) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Storage != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x5a6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((uStack_16c != 0) &&
          ((*(uint *)(local_178 + (ulonglong)(uStack_170 - 1) * 4) &
           ~(0xffffffffU >> (-(char)uStack_16c & 0x1fU))) != 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x5a7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_c8.BitCount = uStack_16c;
      local_c8.WordCount = uStack_170;
      local_c8.Storage = (uint *)local_178;
      UE::Net::Private::FReplicationFiltering::BuildObjectsInFilterList
                (&pFVar6->Filtering,&local_c8,FVar1);
      UE::Net::FNetBitArrayView::FNetBitArrayView(&local_158,(uint *)local_1c0.Data,local_1b0);
      UE::Net::FNetBitArrayView::FNetBitArrayView(&local_130,(uint *)local_1a8.Data,local_198);
      if (((local_158.Storage == local_130.Storage) || (local_158.BitCount != local_130.BitCount))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x64b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_158.WordCount != 0) {
        uVar12 = (ulonglong)local_158.WordCount;
        puVar7 = local_158.Storage;
        puVar9 = local_130.Storage;
        do {
          uVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar7 = *puVar7 | uVar10;
          puVar7 = puVar7 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// PrintDebugInfoForNetRefHandle @ 1442cc2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::PrintDebugInfoForNetRefHandle
          (UObjectReplicationBridge *this,FNetRefHandle param_1,uint param_2,
          EPrintDebugInfoTraits param_3)

{
  EDependentObjectSchedulingHint EVar1;
  FNetRefHandleManager *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ENetObjectDeltaCompressionStatus EVar8;
  uint uVar9;
  int iVar10;
  FReplicationSystemInternal *pFVar11;
  FReplicationConnection *pFVar12;
  longlong lVar13;
  FObjectInfo *pFVar14;
  FNetRefHandle_u_0 *pFVar15;
  FStaticBasicLogRecord *pFVar16;
  longlong lVar17;
  uint *puVar18;
  undefined8 uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  FDependentObjectInfo *pFVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStackY_2238 [32];
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> local_21e8;
  TArrayView<unsigned_int_const_,int> local_21d8;
  FNetRefHandle_u_0 local_21c8;
  TArrayView<UE::Net::Private::FDependentObjectInfo_const_,int> local_21c0;
  FString local_21b0;
  void *local_21a0 [2];
  FNetBitArrayView local_2190;
  FString local_2180;
  FString local_2170;
  FString local_2160;
  FString local_2150;
  FString local_2140;
  FString local_2130;
  FString local_2120;
  FString local_2110;
  FString local_2100;
  FString local_20f0;
  FString local_20e0 [2];
  double local_20c0;
  float fStack_20b8;
  undefined4 uStack_20b4;
  TVector<double>_u_0 local_20b0;
  undefined8 uStack_2098;
  undefined1 local_2090;
  TStringBuilderBase<wchar_t> local_2088;
  wchar_t local_2068 [4096];
  ulonglong local_68 [5];
  undefined8 uStack_40;
  
  uStack_40 = 0x1442cc302;
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_2238;
  local_21c8 = param_1.field0_0x0;
  pFVar11 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  pFVar2 = (FNetRefHandleManager *)this->_padding_;
  uVar6 = UE::Net::Private::FNetRefHandleManager::GetInternalIndex(pFVar2,param_1);
  if (3 < (byte)LogIris._0_1_) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle(pFVar2,&local_21b0,param_1);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_21b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_21b0.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  if ((param_3 & NoProtocolState) == Default) {
    local_2088.Base = local_2068;
    local_2088.bIsDynamic = false;
    local_2088.bIsExternal = false;
    local_2088.CurPos = local_2068;
    local_2088.End = (wchar_t *)local_68;
    UE::Net::IrisDebugHelper::NetObjectStateToString(&local_2088,param_1);
    if (3 < (byte)LogIris._0_1_) {
      if (local_2088.End < local_2088.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_2088,1);
      }
      *local_2088.CurPos = L'\0';
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2088);
  }
  if ((3 < (byte)LogIris._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    (**(code **)(this->_padding_ + 0x370))(this,local_21a0,param_2);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_21a0[0] != (void *)0x0) {
      FMemory::Free(local_21a0[0]);
    }
  }
  if (3 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  if ((*(byte *)(this->_padding_ + 0x50) & 1) == 0) {
    pFVar12 = UE::Net::Private::FReplicationConnections::GetConnection
                        (&pFVar11->Connections,param_2);
    if (pFVar12 == (FReplicationConnection *)0x0) {
      if (3 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
    else if (pFVar12->ReplicationReader == (FReplicationReader *)0x0) {
      if (3 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
    else if (3 < (byte)LogIris._0_1_) {
      UE::Net::Private::FReplicationReader::PrintObjectInfo
                (pFVar12->ReplicationReader,&local_2110,uVar6,param_1);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_2110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2110.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_1442cce92;
  }
  pFVar12 = UE::Net::Private::FReplicationConnections::GetConnection(&pFVar11->Connections,param_2);
  if (pFVar12 == (FReplicationConnection *)0x0) {
    if (3 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  else {
    uVar7 = 0;
    if ((int)param_2 < (pFVar11->Filtering).ConnectionInfos.ArrayNum) {
      uVar7 = ~param_2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pFVar11->Filtering).ConnectionInfos.AllocatorInstance.Data;
    lVar13 = (longlong)(int)param_2 * 0x160;
    UE::Net::FNetBitArrayView::FNetBitArrayView
              (&local_2190,*(uint **)(pFVar3 + lVar13 + 0x60),*(uint *)(pFVar3 + lVar13 + 0x70));
    bVar5 = UE::Net::FNetBitArrayView::IsBitSet(&local_2190,uVar6);
    if (bVar5) {
      if (3 < (byte)LogIris._0_1_) {
        pFVar16 = &::LOG_Static;
LAB_1442cc5e0:
        UE::Logging::Private::BasicLog<4>(pFVar16,(FLogCategoryBase *)&LogIris);
      }
    }
    else if (3 < (byte)LogIris._0_1_) {
      pFVar16 = (FStaticBasicLogRecord *)&PTR_u__Not_relevant_t_150ba2d10;
      goto LAB_1442cc5e0;
    }
    if (pFVar12->ReplicationWriter == (FReplicationWriter *)0x0) {
      if (3 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        goto LAB_1442cc669;
      }
    }
    else if (3 < (byte)LogIris._0_1_) {
      UE::Net::Private::FReplicationWriter::PrintObjectInfo
                (pFVar12->ReplicationWriter,&local_2180,uVar6);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_2180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2180.Data.AllocatorInstance.Data);
      }
LAB_1442cc669:
      if (3 < (byte)LogIris._0_1_) {
        uVar7 = 0;
        if ((int)param_2 < (pFVar11->Prioritization).ConnectionInfos.ArrayNum) {
          uVar7 = ~param_2 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)((pFVar11->Prioritization).ConnectionInfos.AllocatorInstance.Data +
                         (longlong)(int)param_2 * 0x18 + 8);
        if ((iVar10 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar6 < iVar10) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
    EVar8 = UE::Net::Private::FDeltaCompressionBaselineManager::GetDeltaCompressionStatus
                      (&pFVar11->DeltaCompressionBaselineManager,uVar6);
    if (EVar8 == Allow) {
      if (3 < (byte)LogIris._0_1_) {
        UE::Net::Private::FDeltaCompressionBaselineManager::PrintDeltaCompressionStatus
                  (&pFVar11->DeltaCompressionBaselineManager,&local_2170,param_2,uVar6);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_2170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2170.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (3 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  pFVar3 = (pFVar11->WorldLocations).ValidInfoIndexes.Storage.AllocatorInstance.Data;
  if (((pFVar11->WorldLocations).ValidInfoIndexes.BitCount <= uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_40 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if ((*(uint *)(pFVar3 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0) {
    local_2090 = 0;
    if (3 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  else {
    pFVar14 = UE::Net::FWorldLocations::GetObjectInfo(&pFVar11->WorldLocations,uVar6);
    local_20c0 = (pFVar14->WorldLocation).field0_0x0._s_0.Z;
    local_20b0._s_0.X = (pFVar14->WorldLocation).field0_0x0._s_0.X;
    local_20b0._s_0.Y = (pFVar14->WorldLocation).field0_0x0._s_0.Y;
    fStack_20b8 = pFVar14->CullDistanceOverride;
    if (fStack_20b8 == __real_7f7fffff) {
      fStack_20b8 = pFVar14->CullDistance;
    }
    uStack_2098 = CONCAT44(uStack_20b4,fStack_20b8);
    local_2090 = 1;
    local_20b0._s_0.Z = local_20c0;
    if (3 < (byte)LogIris._0_1_) {
      UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_20b0._s_0,&local_2160);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_2160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2160.Data.AllocatorInstance.Data);
      }
    }
  }
  if (3 < (byte)LogIris._0_1_) {
    UE::Net::Private::FReplicationFiltering::PrintFilterObjectInfo
              (&pFVar11->Filtering,&local_2150,uVar6,param_2);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_2150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2150.Data.AllocatorInstance.Data);
    }
  }
  UE::Net::Private::FNetRefHandleManager::GetDependentObjectInfos
            ((FNetRefHandleManager *)this->_padding_,&local_21e8,uVar6);
  if ((3 < (byte)LogIris._0_1_) && (local_21e8.ArrayNum != 0)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  uVar24 = 0;
  uVar25 = uVar24;
  if (0 < local_21e8.ArrayNum) {
    do {
      uVar7 = (uint)uVar25;
      if (3 < (byte)LogIris._0_1_) {
        uVar9 = 0;
        if ((int)uVar7 < local_21e8.ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        EVar1 = (&(local_21e8.DataPtr)->SchedulingHint)[uVar24];
        if ((((EVar1 != Default) && (EVar1 != ScheduleBeforeParent)) &&
            (EVar1 != ScheduleBeforeParentIfInitialState)) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5859160669709926312>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\ReplicationSystemTypes.h"
                               ,0x58,"false"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (FNetRefHandleManager *)this->_padding_;
        uVar9 = 0;
        if ((int)uVar7 < local_21e8.ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                  (pFVar2,&local_2140,
                   *(uint *)((longlong)&(local_21e8.DataPtr)->NetRefIndex + uVar24));
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_2140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2140.Data.AllocatorInstance.Data);
        }
      }
      uVar24 = uVar24 + 8;
      param_1.field0_0x0 = local_21c8;
      uVar25 = (ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < local_21e8.ArrayNum);
  }
  puVar21 = (uint *)0x0;
  lVar13 = this->_padding_;
  uVar9 = 0;
  puVar20 = puVar21;
  uVar7 = uVar9;
  if (*(int *)(lVar13 + 0x338) != *(int *)(lVar13 + 0x364)) {
    lVar17 = *(longlong *)(lVar13 + 0x370);
    if (*(longlong *)(lVar13 + 0x370) == 0) {
      lVar17 = lVar13 + 0x368;
    }
    iVar10 = *(int *)(lVar17 + (ulonglong)(*(int *)(lVar13 + 0x378) - 1U & uVar6) * 4);
    if (iVar10 != -1) {
      do {
        lVar17 = *(longlong *)(lVar13 + 0x330) + (longlong)iVar10 * 0x28;
        if (*(uint *)(*(longlong *)(lVar13 + 0x330) + (longlong)iVar10 * 0x28) == uVar6) {
          puVar18 = (uint *)(lVar17 + 4);
          if (lVar17 == 0) {
            puVar18 = puVar21;
          }
          if ((puVar18 != (uint *)0x0) && (puVar18[2] != 0xffffffff)) {
            puVar18 = (uint *)((longlong)(int)puVar18[2] * 0x30 + *(longlong *)(lVar13 + 0x380));
            uVar7 = puVar18[10];
            puVar20 = *(uint **)(puVar18 + 8);
            if (*(uint **)(puVar18 + 8) == (uint *)0x0) {
              puVar20 = puVar18;
            }
            if (((int)uVar7 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          break;
        }
        iVar10 = *(int *)(lVar17 + 0x20);
      } while (iVar10 != -1);
    }
  }
  if ((3 < (byte)LogIris._0_1_) && (uVar7 != 0)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  puVar18 = puVar21;
  if (0 < (int)uVar7) {
    do {
      if (3 < (byte)LogIris._0_1_) {
        pFVar2 = (FNetRefHandleManager *)this->_padding_;
        if (((int)puVar18 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex(pFVar2,&local_2130,*puVar20);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_2130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2130.Data.AllocatorInstance.Data);
        }
      }
      uVar22 = (int)puVar18 + 1;
      puVar20 = puVar20 + 1;
      param_1.field0_0x0 = local_21c8;
      puVar18 = (uint *)(ulonglong)uVar22;
    } while ((int)uVar22 < (int)uVar7);
  }
  UE::Net::Private::FNetRefHandleManager::GetCreationDependencies
            ((FNetRefHandleManager *)this->_padding_,&local_21d8,uVar6);
  if ((3 < (byte)LogIris._0_1_) && (local_21d8.ArrayNum != 0)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  uVar19 = local_21d8._8_8_;
  puVar20 = puVar21;
  if (0 < local_21d8.ArrayNum) {
    do {
      uVar7 = (uint)puVar20;
      if (3 < (byte)LogIris._0_1_) {
        pFVar2 = (FNetRefHandleManager *)this->_padding_;
        uVar22 = uVar9;
        if ((int)uVar7 < (int)uVar19) {
          uVar22 = ~uVar7 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                  (pFVar2,&local_2120,*(uint *)((longlong)local_21d8.DataPtr + (longlong)puVar21));
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        uVar19 = local_21d8._8_8_;
        if (local_2120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2120.Data.AllocatorInstance.Data);
          uVar19 = local_21d8._8_8_;
        }
      }
      puVar21 = puVar21 + 1;
      puVar20 = (uint *)(ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < (int)uVar19);
  }
LAB_1442cce92:
  if ((3 < (byte)LogIris._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              ((FNetRefHandleManager *)this->_padding_,&local_2100,param_1);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_2100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2100.Data.AllocatorInstance.Data);
    }
  }
  if (((*(byte *)(this->_padding_ + 0x50) & 1) != 0) && ((param_3 & WithDependents) != Default)) {
    UE::Net::Private::FNetRefHandleManager::GetDependentObjectInfos
              ((FNetRefHandleManager *)this->_padding_,&local_21c0,uVar6);
    for (pFVar23 = local_21c0.DataPtr; pFVar23 != local_21c0.DataPtr + local_21c0.ArrayNum;
        pFVar23 = pFVar23 + 1) {
      if ((3 < (byte)LogIris._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
         3 < (byte)LogIris._0_1_)) {
        UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                  ((FNetRefHandleManager *)this->_padding_,local_20e0,uVar6);
        UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                  ((FNetRefHandleManager *)this->_padding_,&local_20f0,pFVar23->NetRefIndex);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_20f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20f0.Data.AllocatorInstance.Data);
        }
        if (local_20e0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20e0[0].Data.AllocatorInstance.Data);
        }
        if (3 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
      }
      pFVar2 = (FNetRefHandleManager *)this->_padding_;
      uVar7 = pFVar23->NetRefIndex;
      pFVar3 = (pFVar2->AssignedInternalIndices).Storage.AllocatorInstance.Data;
      if (((pFVar2->AssignedInternalIndices).BitCount <= uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((*(uint *)(pFVar3 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AssignedInternalIndices.GetBit(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                             ,0x245,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = (FNetRefHandle_u_0 *)
                UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck(pFVar2,uVar7)
      ;
      PrintDebugInfoForNetRefHandle
                (this,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar15->_s_0,param_2,param_3);
    }
  }
  return;
}

// PrintDebugInfoForNetRefHandlesAndConnections @ 1442cd1c0

void __thiscall
UObjectReplicationBridge::PrintDebugInfoForNetRefHandlesAndConnections
          (UObjectReplicationBridge *this,
          TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,EPrintDebugInfoTraits param_3)

{
  uint *puVar1;
  FNetRefHandle_u_0 *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FReplicationSystemInternal *pFVar9;
  uint uVar10;
  FNetRefHandle_u_0 *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_88;
  undefined1 local_87 [7];
  FScriptContainerElement *local_80;
  ForAnyElementType local_78;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_60;
  uint local_5c;
  FScriptContainerElement *local_58;
  ulonglong local_50;
  uint *local_48;
  int local_40;
  
  pFVar9 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_70 = (pFVar9->Connections).ValidConnections.Storage.ArrayNum;
  lVar13 = (longlong)(int)local_70;
  pFVar3 = (pFVar9->Connections).ValidConnections.Storage.AllocatorInstance.Data;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,pFVar3,lVar13 << 2);
  }
  local_68 = (pFVar9->Connections).ValidConnections.BitCount;
  (**(code **)(this->_padding_ + 0x378))(this,&local_48,param_2);
  if (local_40 != 0) {
    memset(local_78.Data,0,(longlong)(int)local_70 << 2);
    iVar15 = local_40;
    puVar1 = local_48 + local_40;
    puVar14 = local_48;
    while( true ) {
      if (local_40 != iVar15) {
        local_88 = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_88);
      }
      if (puVar14 == puVar1) break;
      uVar7 = *puVar14;
      pFVar3 = (pFVar9->Connections).ValidConnections.Storage.AllocatorInstance.Data;
      if (((pFVar9->Connections).ValidConnections.BitCount <= uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar16 = 1 << ((byte)uVar7 & 0x1f);
      local_80 = (FScriptContainerElement *)((ulonglong)(uVar7 >> 5) * 4);
      uVar10 = *(uint *)(local_80 + (longlong)pFVar3);
      local_58 = local_78.Data;
      if ((local_68 <= uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2ac,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = 0;
      if ((uVar10 & uVar16) != 0) {
        uVar7 = uVar16;
      }
      *(uint *)(local_80 + (longlong)local_58) =
           ~uVar16 & *(uint *)(local_80 + (longlong)local_58) | uVar7;
      puVar14 = puVar14 + 1;
    }
  }
  uVar12 = 0;
  if (local_48 != (uint *)0x0) {
    FMemory::Free(local_48);
  }
  uVar8 = 0;
  local_60 = local_70;
  uVar16 = 0xffffffff >> (-(char)local_68 & 0x1fU);
  uVar7 = local_70 - 1;
  local_58 = (FScriptContainerElement *)CONCAT44(local_58._4_4_,uVar7);
  FVar5.Data = local_78.Data;
  uVar10 = local_70;
  local_5c = uVar16;
  if (local_70 != 0) {
    do {
      local_80 = FVar5.Data;
      iVar15 = (int)uVar12;
      uVar17 = 0xffffffff;
      if (uVar8 == uVar7) {
        uVar17 = uVar16;
      }
      uVar18 = uVar17 & *(uint *)local_80;
      if ((uVar17 & *(uint *)local_80) != 0) {
        do {
          if ((uVar18 & 1) != 0) {
            pFVar11 = (FNetRefHandle_u_0 *)(param_1->AllocatorInstance).Data;
            iVar15 = param_1->ArrayNum;
            pFVar2 = pFVar11 + iVar15;
            while( true ) {
              if (param_1->ArrayNum != iVar15) {
                `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_87);
              }
              if (pFVar11 == pFVar2) break;
              PrintDebugInfoForNetRefHandle
                        (this,(FNetRefHandle)*(FNetRefHandle_u_0 *)&pFVar11->_s_0,(uint)uVar12,
                         param_3);
              pFVar11 = pFVar11 + 1;
            }
            param_3 = param_3 | NoProtocolState;
          }
          uVar12 = (ulonglong)((uint)uVar12 + 1);
          uVar7 = uVar18 >> 1;
          uVar18 = uVar18 >> 1;
        } while (uVar7 != 0);
        iVar15 = (int)local_50;
        uVar10 = local_60;
        uVar16 = local_5c;
        uVar7 = (uint)local_58;
      }
      uVar8 = uVar8 + 1;
      local_80 = local_80 + 4;
      uVar12 = (ulonglong)(iVar15 + 0x20);
      FVar5.Data = local_80;
      local_50 = uVar12;
    } while (uVar8 < uVar10);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// PrintDynamicFilterClassConfig @ 1442cd630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::PrintDynamicFilterClassConfig(UObjectReplicationBridge *this,uint param_1)

{
  uint *puVar1;
  TMap<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
  *this_00;
  UReplicationSystem *pUVar2;
  undefined1 *puVar3;
  code *pcVar4;
  UObjectReplicationBridge *this_01;
  ForAnyElementType FVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  EInternalObjectFlags EVar10;
  int iVar11;
  int iVar12;
  FNameEntryId FVar13;
  FName FVar14;
  UClass *pUVar15;
  size_t sVar16;
  UObject *pUVar17;
  FClassTree *pFVar18;
  undefined4 extraout_var;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ForElementType<FSetElementId> FVar23;
  ForElementType<FSetElementId> FVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  ForAnyElementType FVar27;
  FName *this_02;
  FScriptContainerElement *pFVar28;
  FName *pFVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auStackY_588 [32];
  ForAnyElementType local_538;
  undefined8 local_530;
  undefined1 local_528;
  undefined1 local_527;
  undefined1 local_526;
  undefined1 local_525;
  undefined1 local_524 [12];
  ForAnyElementType local_518;
  undefined8 uStack_510;
  uint local_508;
  FScriptContainerElement *local_500;
  FScriptContainerElement *local_4f8;
  ulonglong local_4f0;
  ForAnyElementType local_4e8;
  undefined8 local_4e0;
  undefined1 local_4d8 [16];
  ForAnyElementType local_4c8;
  undefined8 uStack_4c0;
  ulonglong local_4b8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_4b0;
  uint local_4a0;
  FName local_498;
  UObjectReplicationBridge *local_490;
  uint local_488;
  undefined8 local_484;
  undefined1 local_47c;
  UObject *local_478;
  FName local_470;
  uint local_468;
  undefined4 uStack_464;
  undefined1 local_460 [16];
  int local_450;
  undefined1 local_448 [20];
  int iStack_434;
  ulonglong uStack_430;
  longlong lStack_428;
  int local_420;
  undefined4 uStack_41c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f8;
  longlong *local_3d8;
  undefined1 auStack_3d0 [20];
  int iStack_3bc;
  int local_3b8;
  undefined4 uStack_3b4;
  FClassTree local_3a8;
  FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintDynamicFilterClassConfig(unsigned_int)_::_42_::<lambda_1>_>
  local_368;
  TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&> local_360;
  TObjectPtr<UObject>_u_0 TStack_350;
  undefined4 local_348;
  undefined4 local_344;
  undefined1 local_340 [8];
  FName local_338;
  UReplicationSystem *local_330;
  longlong *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  int iStack_300;
  longlong *local_2f8;
  longlong lStack_2f0;
  SRWLOCK SStack_2e8;
  FPlatformRWLock FStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined8 *local_2c0;
  FSparseArrayAllocationInfo local_2b8;
  undefined8 *local_2a8;
  uint *local_2a0;
  longlong *local_298;
  longlong lStack_290;
  FPlatformRWLock FStack_288;
  ForAnyElementType FStack_280;
  ulonglong uStack_278;
  int local_270;
  undefined4 uStack_26c;
  FString local_268;
  FString local_258;
  TStringView<wchar_t> local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  undefined1 local_208 [8];
  undefined1 local_200 [40];
  undefined1 local_1d8 [32];
  ForElementType<unsigned_int> local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 local_1a0 [8];
  ForElementType<FSetElementId> local_198;
  int local_190;
  undefined1 local_188 [32];
  longlong local_168;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  undefined1 local_150 [8];
  ForElementType<FSetElementId> local_148;
  int local_140;
  undefined1 local_138 [32];
  FName local_118;
  int local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  TObjectPtr<UObject>_u_0 local_f0;
  undefined1 local_e8 [8];
  TObjectPtr<UScriptStruct>_u_0 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [40];
  ForElementType<FSetElementId> local_a8;
  ulonglong local_a0;
  TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
  *local_98;
  TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
  local_90;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_588;
  pUVar2 = (UReplicationSystem *)this->_padding_;
  local_508 = param_1;
  local_490 = this;
  local_330 = pUVar2;
  if (3 < (byte)LogIrisFilterConfig._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
  }
  if ((param_1 & 1) != 0) {
    if (3 < (byte)LogIrisFilterConfig._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
    }
    local_138._0_8_ = 0;
    local_138._8_8_ = 0;
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = -1;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0._0_4_ = 0;
    TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                 *)local_138,
                (TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                 *)&this->ClassesWithDynamicFilter);
    local_368.Predicate.Predicate =
         (TDereferenceWrapper<FName,_public:_void___cdecl_UObjectReplicationBridge::PrintDynamicFilterClassConfig(unsigned_int)_::_42_::<lambda_1>_>
          )local_4d8;
    TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
    ::
    StableSort<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintDynamicFilterClassConfig_::__l42::<lambda_1>_>_>
              ((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                *)local_138,&local_368);
    local_418.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    local_418._padding_._0_4_ = 0;
    local_418._padding_._4_4_ = 1;
    local_418.UnvisitedBitMask = 0xffffffff;
    local_418.CurrentBitIndex = 0;
    local_418.BaseBitIndex = 0;
    if (local_110 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_418);
    }
    local_3d8 = (longlong *)local_138;
    lStack_2f0._4_4_ = local_418._padding_._4_4_;
    lStack_2f0._0_4_ = (undefined4)local_418._padding_;
    SStack_2e8.Ptr = local_418.Array;
    FStack_2e0.Mutex.Mutex.Ptr._4_4_ = local_418.CurrentBitIndex;
    FStack_2e0.Mutex.Mutex.Ptr._0_4_ = local_418.UnvisitedBitMask;
    auStack_2d8._4_4_ = local_418._28_4_;
    auStack_2d8._0_4_ = local_418.BaseBitIndex;
    auStack_3d0._0_4_ = (undefined4)local_418._padding_;
    auStack_3d0._4_4_ = local_418._padding_._4_4_;
    auStack_3d0._8_8_ = local_418.Array;
    stack0xfffffffffffffc40 = (SRWLOCK)(SRWLOCK)FStack_2e0.Mutex.Mutex.Ptr;
    local_3b8 = local_418.BaseBitIndex;
    uStack_3b4 = local_418._28_4_;
    iVar11 = local_418.CurrentBitIndex;
    local_2f8 = local_3d8;
    if (local_418.CurrentBitIndex < (local_418.Array)->NumBits) {
      do {
        local_338 = *(FName *)((longlong)iVar11 * 0x20 + *local_3d8);
        if (3 < (byte)LogIrisFilterConfig._0_1_) {
          FVar14 = UReplicationSystem::GetFilterName(pUVar2,(uint)local_208);
          ::FName::ToString((FName *)FVar14,&local_258);
          ::FName::ToString(&local_338,&local_268);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
        }
        stack0xfffffffffffffc40 =
             (SRWLOCK)CONCAT44(iStack_3bc,auStack_3d0._16_4_ & ~auStack_3d0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_3d0);
        iVar11 = iStack_3bc;
      } while (iStack_3bc < *(int *)(auStack_3d0._8_8_ + 0x18));
    }
    local_f0._0_4_ = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
    if (3 < (byte)LogIrisFilterConfig._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
    }
  }
  if ((param_1 >> 1 & 1) != 0) {
    if (3 < (byte)LogIrisFilterConfig._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
    }
    pUVar15 = UObjectReplicationBridgeConfig::StaticClass();
    if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar15);
    }
    pUVar17 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
    auStack_d0[0x20] = '\0';
    auStack_d0[0x21] = '\0';
    auStack_d0[0x22] = '\0';
    auStack_d0[0x23] = '\0';
    auStack_d0._36_4_ = 0;
    local_a0 = 0;
    local_e8 = (undefined1  [8])0x0;
    local_e0.DebugPtr = (UScriptStruct *)0x0;
    auStack_d0._8_8_ = 0;
    auStack_d0._16_4_ = 0;
    auStack_d0._28_4_ = 0;
    local_a8 = (ForElementType<FSetElementId>)0x0;
    this_00 = &this->ClassesWithDynamicFilter;
    local_d8 = 0;
    auStack_d0._0_8_ = 0;
    local_90.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_90.Elements._48_8_ = _UNK_150631d98;
    auStack_d0._20_4_ = 0x80;
    auStack_d0._24_4_ = 0xffffffff;
    local_90.Elements._0_8_ = 0;
    local_90.Elements._8_8_ = 0;
    local_90.Elements._32_8_ = 0;
    local_90.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_90.HashSize = 0;
    local_98 = (TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                *)this_00;
    TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
    ::operator=(&local_90,
                (TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                 *)this_00);
    TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
    ::operator=(local_98,(TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                          *)local_e8);
    local_a0 = local_a0 & 0xffffffff00000000;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    iVar11 = *(int *)&pUVar17[1].field_0x18;
    lVar31 = *(longlong *)&pUVar17[1].field_0x10;
    if ((iVar11 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar30 = (longlong)iVar11 * 0x1c + lVar31;
    if (lVar31 != lVar30) {
      puVar26 = (undefined8 *)(lVar31 + 0x10);
      local_2a0 = &local_488;
      do {
        local_484 = 0;
        local_47c = 0;
        local_488 = UReplicationSystem::GetFilterHandle
                              ((UReplicationSystem *)this->_padding_,*(FName *)(puVar26 + -1));
        local_484 = *puVar26;
        local_47c = *(undefined1 *)(puVar26 + 1);
        local_2a8 = puVar26 + -2;
        TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,UObjectReplicationBridge::FClassFilterInfo_const_&>_>
                  ((TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
                    *)this_00,&local_360,(bool *)&local_2a8);
        lVar31 = (longlong)puVar26 + 0xc;
        puVar26 = (undefined8 *)((longlong)puVar26 + 0x1c);
      } while (lVar31 != lVar30);
    }
    local_3a8.Class = Z_Construct_UClass_UObject_NoRegister();
    local_3a8.Parent = (FClassTree *)0x0;
    local_3a8.Instances._padding_ = (longlong)&___7__TDoubleLinkedList_PEAVUObject____6B_;
    local_3a8.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a8.Children.ArrayNum = 0;
    local_3a8.Children.ArrayMax = 0;
    local_3a8.Instances.HeadNode = (TDoubleLinkedListNode *)0x0;
    local_3a8.Instances.TailNode = (TDoubleLinkedListNode *)0x0;
    local_3a8.Instances.ListSize = 0;
    if ((local_3a8.Class == (UClass *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Class",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                           ,0x232,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(this->ClassesWithDynamicFilter).field_0x8 !=
        *(int *)&(this->ClassesWithDynamicFilter).field_0x34) {
      local_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4b0.ArrayNum = 0;
      local_4b0.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0x20000,&local_4b0.AllocatorInstance,0,&local_4b0.ArrayMax);
      EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar15 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar15,&local_4b0,true,RF_ClassDefaultObject,
                        EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      iVar11 = local_4b0.ArrayNum;
      if ((param_1 >> 2 & 1) == 0) {
        uVar22 = (ulonglong)local_4b0.ArrayNum;
        pFVar28 = local_4b0.AllocatorInstance.Data + uVar22 * 8;
        FVar27.Data = local_4b0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar22 != iVar11) {
            local_527 = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_527);
          }
          if (FVar27.Data == pFVar28) break;
          FClassTree::AddClass(&local_3a8,*(UClass **)FVar27.Data);
          uVar22 = local_4b0._8_8_ & 0xffffffff;
          FVar27.Data = FVar27.Data + 8;
        }
      }
      else {
        pFVar28 = local_4b0.AllocatorInstance.Data + (longlong)local_4b0.ArrayNum * 8;
        FVar27.Data = local_4b0.AllocatorInstance.Data;
        while( true ) {
          if (local_4b0.ArrayNum != iVar11) {
            local_528 = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_528);
          }
          if (FVar27.Data == pFVar28) break;
          if (((*(UClass **)FVar27.Data)->ClassFlags >> 7 & 1) != 0) {
            FClassTree::AddClass(&local_3a8,*(UClass **)FVar27.Data);
          }
          FVar27.Data = FVar27.Data + 8;
        }
      }
      param_1 = local_508;
      if (local_4b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.AllocatorInstance.Data);
        param_1 = local_508;
      }
    }
    local_188._0_8_ = 0;
    local_508 = param_1 >> 3 & 0xffffff01;
    local_188._8_8_ = 0;
    local_168 = 0;
    local_160 = 0;
    local_15c = 0x80;
    local_158 = 0xffffffff;
    local_154 = 0;
    local_148 = (ForElementType<FSetElementId>)0x0;
    local_140 = 0;
    local_1d8._0_8_ = (FScriptContainerElement *)0x0;
    local_1d8._8_8_ = 0;
    local_1b8 = (ForElementType<unsigned_int>)0x0;
    local_1b0 = 0;
    local_1ac = 0x80;
    local_1a8 = -1;
    local_1a4 = 0;
    local_198 = (ForElementType<FSetElementId>)0x0;
    local_190 = 0;
    local_518.Data = (FScriptContainerElement *)0x0;
    uStack_510 = 0;
    local_4c8.Data = (FScriptContainerElement *)0x0;
    uStack_4c0 = 0;
    iVar11 = *(int *)&pUVar17[1].field_0x18;
    this_02 = *(FName **)&pUVar17[1].field_0x10;
    if ((iVar11 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar29 = (FName *)((longlong)iVar11 * 0x1c + (longlong)this_02);
    for (; this_02 != pFVar29; this_02 = (FName *)&this_02[3].Number) {
      ::FName::ToString(this_02,(FString *)(local_460 + 8));
      if (local_450 == 0) {
        local_360.Value = (FClassFilterInfo *)0x15060d16c;
LAB_1442cdda5:
        sVar16 = wcslen((wchar_t *)local_360.Value);
        iVar11 = (int)sVar16;
      }
      else {
        local_360.Value = (FClassFilterInfo *)local_460._8_8_;
        iVar11 = 0;
        if ((FClassFilterInfo *)local_460._8_8_ != (FClassFilterInfo *)0x0) goto LAB_1442cdda5;
      }
      TStack_350._0_4_ = iVar11;
      pUVar15 = Z_Construct_UClass_UClass_NoRegister();
      local_248._12_4_ = TStack_350._4_4_;
      local_248.Size = TStack_350._0_4_;
      local_248.DataPtr = (wchar_t *)local_360.Value;
      pUVar17 = StaticFindObject(pUVar15,(UObject *)0x0,&local_248,ExactClass);
      if (pUVar17 == (UObject *)0x0) {
LAB_1442cde26:
        local_478 = (UObject *)0x0;
        if (2 < (byte)LogIrisFilterConfig._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u__Can_t_find_cla_150ba1738,
                     (FLogCategoryBase *)&LogIrisFilterConfig);
        }
      }
      else {
        pUVar15 = Z_Construct_UClass_UClass_NoRegister();
        iVar11 = (int)pUVar15->_padding_;
        if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar15->_padding_)) goto LAB_1442cde26;
        local_478 = pUVar17;
        TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*_const_&>
                  ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)local_188,
                   (UClass **)((longlong)&local_360.Key + 4),(bool *)&local_478);
      }
      if ((FClassFilterInfo *)local_460._8_8_ != (FClassFilterInfo *)0x0) {
        FMemory::Free((void *)local_460._8_8_);
      }
    }
    local_3f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
    local_538.Data = (FScriptContainerElement *)0x0;
    local_530._0_4_ = 0;
    local_530._4_4_ = 0;
    local_3f8._padding_._0_4_ = 0;
    local_3f8._padding_._4_4_ = 1;
    local_3f8.UnvisitedBitMask = 0xffffffff;
    local_3f8.CurrentBitIndex = 0;
    local_3f8.BaseBitIndex = 0;
    if (local_160 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f8);
    }
    iVar11 = local_160;
    lStack_428 = CONCAT44(local_3f8._28_4_,local_3f8.BaseBitIndex);
    local_448._8_8_ = local_188 + 0x10;
    local_420 = local_188._8_4_ - local_154;
    bVar19 = (byte)local_160 & 0x1f;
    local_448._4_4_ = 1 << bVar19;
    local_448._0_4_ = local_160 >> 5;
    stack0xfffffffffffffbc8 = (SRWLOCK)CONCAT44(local_160,-1 << bVar19);
    uStack_430 = CONCAT44(local_3f8.CurrentBitIndex,local_160) & 0xffffffffffffffe0;
    local_328 = (longlong *)local_188;
    TStack_320._padding_ = CONCAT44(local_3f8._padding_._4_4_,(undefined4)local_3f8._padding_);
    unique0x10000f44 = uStack_41c;
    iStack_300 = local_420;
    TStack_320.Array = local_3f8.Array;
    TStack_320.UnvisitedBitMask = local_3f8.UnvisitedBitMask;
    TStack_320.CurrentBitIndex = local_3f8.CurrentBitIndex;
    TStack_320._24_8_ = lStack_428;
    if ((local_160 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iVar11 != local_160) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_448);
    }
    local_298 = (longlong *)local_188;
    lStack_290 = local_448._0_8_;
    FStack_288.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(FWindowsSharedMutex)local_448._8_8_;
    local_270 = local_188._8_4_ - local_154;
    FStack_280.Data = (FScriptContainerElement *)stack0xfffffffffffffbc8;
    uStack_278 = uStack_430;
    local_2f8 = (longlong *)local_188;
    lStack_2f0 = local_448._0_8_;
    auStack_2d8._12_4_ = uStack_26c;
    auStack_2d8._8_4_ = local_188._8_4_ - local_154;
    SStack_2e8.Ptr = (void *)local_448._8_8_;
    FStack_2e0.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(FWindowsSharedMutex)stack0xfffffffffffffbc8;
    auStack_2d8._0_8_ = uStack_430;
    while( true ) {
      plVar7 = local_328;
      if ((int)local_328[1] - *(int *)((longlong)local_328 + 0x34) != iStack_300) {
        local_526 = 0;
        `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_526);
      }
      uVar21 = local_530._4_4_;
      if (((TStack_320.CurrentBitIndex == FStack_2e0.Mutex.Mutex.Ptr._4_4_) &&
          (TStack_320.Array == SStack_2e8.Ptr)) && (plVar7 == local_2f8)) break;
      local_4b8 = *(ulonglong *)(*plVar7 + (longlong)TStack_320.CurrentBitIndex * 0x10);
      uVar20 = ((uint)(local_4b8 >> 0x14) & 0xffff ^ (uint)(local_4b8 >> 4)) * -0x7a143595;
      uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
      if (local_1d8._8_4_ != local_1a4) {
        FVar24 = (ForElementType<FSetElementId>)local_1a0;
        if (local_198 != (ForElementType<FSetElementId>)0x0) {
          FVar24 = local_198;
        }
        for (iVar11 = *(int *)((longlong)FVar24 +
                              (ulonglong)(local_190 - 1U & (uVar20 >> 0x10 ^ uVar20)) * 4);
            iVar11 != -1;
            iVar11 = *(int *)((FScriptContainerElement *)(local_1d8._0_8_ + (longlong)iVar11 * 0x10)
                             + 8)) {
          if (*(ulonglong *)(local_1d8._0_8_ + (longlong)iVar11 * 0x10) == local_4b8) {
            if ((iVar11 != -1) &&
               ((FScriptContainerElement *)(local_1d8._0_8_ + (longlong)iVar11 * 0x10) !=
                (FScriptContainerElement *)0x0)) goto LAB_1442cee70;
            break;
          }
        }
      }
      local_530 = (ulonglong)local_530._4_4_ << 0x20;
      iVar11 = 0;
      if (((int)uVar21 < 0) && (iVar11 = 0, uVar21 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_538,0,(int *)((longlong)&local_530 + 4));
        iVar11 = (uint)local_530;
      }
      if ((local_538.Data <= (FScriptContainerElement *)&local_4b8) &&
         ((FScriptContainerElement *)&local_4b8 <
          local_538.Data + (longlong)(int)local_530._4_4_ * 8)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (uint)local_530;
      }
      if (iVar11 == local_530._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_538,(int *)((longlong)&local_530 + 4));
      }
      *(ulonglong *)(local_538.Data + (longlong)iVar11 * 8) = local_4b8;
      local_530._0_4_ = iVar11 + 1;
      lVar31 = local_188._0_8_;
      FVar24 = local_148;
      for (local_4f0 = *(ulonglong *)(local_4b8 + 0x40); local_4f0 != 0;
          local_4f0 = *(ulonglong *)(local_4f0 + 0x40)) {
        uVar21 = ((uint)(local_4f0 >> 0x14) & 0xffff ^ (uint)(local_4f0 >> 4)) * -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        if (local_188._8_4_ != local_154) {
          FVar23 = (ForElementType<FSetElementId>)local_150;
          if (FVar24 != (ForElementType<FSetElementId>)0x0) {
            FVar23 = FVar24;
          }
          for (iVar11 = *(int *)((longlong)FVar23 +
                                (ulonglong)(local_140 - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
              iVar11 != -1; iVar11 = *(int *)(lVar31 + 8 + (longlong)iVar11 * 0x10)) {
            if (*(ulonglong *)(lVar31 + (longlong)iVar11 * 0x10) == local_4f0) {
              if ((iVar11 != -1) && ((longlong)iVar11 * 0x10 + lVar31 != 0)) {
                if ((local_538.Data <= (FScriptContainerElement *)&local_4f0) &&
                   (((FScriptContainerElement *)&local_4f0 <
                     local_538.Data + (longlong)(int)local_530._4_4_ * 8 &&
                    (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)))) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if ((uint)local_530 == local_530._4_4_) {
                  local_530._0_4_ =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_538,(int *)((longlong)&local_530 + 4));
                }
                *(ulonglong *)(local_538.Data + (longlong)(int)(uint)local_530 * 8) = local_4f0;
                lVar31 = local_188._0_8_;
                FVar24 = local_148;
                local_530._0_4_ = (uint)local_530 + 1;
              }
              break;
            }
          }
        }
      }
      uVar21 = 0;
      if ((int)((uint)local_530 - 1) < (int)(uint)local_530) {
        uVar21 = ~((uint)local_530 - 1) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar15 = *(UClass **)(local_538.Data + (longlong)(int)((uint)local_530 - 1) * 8);
      uVar21 = ((uint)((ulonglong)pUVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar15 >> 4)) *
               -0x7a143595;
      uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
      uVar21 = uVar21 >> 0x10 ^ uVar21;
      if (local_1d8._8_4_ != local_1a4) {
        FVar24 = (ForElementType<FSetElementId>)local_1a0;
        if (local_198 != (ForElementType<FSetElementId>)0x0) {
          FVar24 = local_198;
        }
        for (iVar11 = *(int *)((longlong)FVar24 + (ulonglong)(local_190 - 1U & uVar21) * 4);
            iVar11 != -1; iVar11 = *(int *)(local_1d8._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
          if (*(UClass **)(local_1d8._0_8_ + (longlong)iVar11 * 0x10) == pUVar15)
          goto LAB_1442cee70;
        }
      }
      if (local_1a4 == 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
                            (int *)(local_1d8 + 0xc));
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),false);
        iVar11 = local_1a8;
      }
      else {
        local_1a4 = local_1a4 + -1;
        iVar11 = *(int *)(local_1d8._0_8_ + (longlong)local_1a8 * 0x10 + 4);
        iVar12 = local_1a8;
        if (local_1a4 != 0) {
          *(undefined4 *)(local_1d8._0_8_ + (longlong)iVar11 * 0x10) = 0xffffffff;
        }
      }
      local_1a8 = iVar11;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1d8,(FSparseArrayAllocationInfo *)(auStack_2d8 + 0x10),iVar12);
      if (local_2c0 != (undefined8 *)0x0) {
        *local_2c0 = pUVar15;
        *(undefined4 *)(local_2c0 + 1) = 0xffffffff;
      }
      uVar20 = local_1d8._8_4_ - local_1a4;
      if (uVar20 < 4) {
        iVar11 = 1;
      }
      else {
        uVar22 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar31 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        local_348 = (int)lVar31;
        iVar11 = 1 << ((byte)lVar31 & 0x1f);
      }
      if (((int)uVar20 < 1) || (iVar11 <= local_190)) {
        uVar21 = local_190 - 1U & uVar21;
        *(uint *)((longlong)local_2c0 + 0xc) = uVar21;
        FVar24 = (ForElementType<FSetElementId>)local_1a0;
        if (local_198 != (ForElementType<FSetElementId>)0x0) {
          FVar24 = local_198;
        }
        lVar31 = (longlong)(int)(local_190 - 1U & uVar21);
        *(undefined4 *)(local_2c0 + 1) = *(undefined4 *)((longlong)FVar24 + lVar31 * 4);
        *(undefined4 *)((longlong)FVar24 + lVar31 * 4) = auStack_2d8._16_4_;
      }
      else {
        local_190 = iVar11;
        TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)local_1d8);
      }
      if (pUVar15 == local_3a8.Class) {
        pFVar18 = &local_3a8;
LAB_1442ce5a7:
        if (`public:_void___cdecl_FClassTree::GetChildClasses(TArray<FClassTree_const*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,bool)const___ptr64'
            ::__l2::RecurseDepth == 0) {
          bVar8 = uStack_510._4_4_ != 0;
          uStack_510 = (ulonglong)uStack_510._4_4_ << 0x20;
          if (bVar8) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_518,0,(int *)((longlong)&uStack_510 + 4));
          }
        }
        uVar21 = 0;
        if (0 < (pFVar18->Children).ArrayNum) {
          lVar31 = 0;
          do {
            uVar20 = 0;
            if ((int)uVar21 < (pFVar18->Children).ArrayNum) {
              uVar20 = ~uVar21 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar28 = (pFVar18->Children).AllocatorInstance.Data + lVar31;
            if (((local_518.Data <= pFVar28) &&
                (pFVar28 < local_518.Data + (longlong)(int)uStack_510._4_4_ * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((uint)uStack_510 == uStack_510._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_518,(int *)((longlong)&uStack_510 + 4));
              uStack_510 = CONCAT44(uStack_510._4_4_,iVar11);
            }
            lVar30 = (longlong)(int)(uint)uStack_510;
            uVar21 = uVar21 + 1;
            lVar31 = lVar31 + 8;
            uStack_510 = CONCAT44(uStack_510._4_4_,(uint)uStack_510 + 1);
            *(longlong *)(local_518.Data + lVar30 * 8) = *(longlong *)pFVar28;
          } while ((int)uVar21 < (pFVar18->Children).ArrayNum);
        }
      }
      else if (local_3a8.Class != (UClass *)0x0) {
        iVar11 = (int)(local_3a8.Class)->_padding_;
        if (((int)pUVar15->_padding_ < iVar11) ||
           ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar11 * 8) !=
            &(local_3a8.Class)->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          iVar11 = local_3a8.Children.ArrayNum;
          uVar22 = (ulonglong)local_3a8.Children.ArrayNum;
          pFVar28 = local_3a8.Children.AllocatorInstance.Data + uVar22 * 8;
          FVar27.Data = local_3a8.Children.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar22 != iVar11) {
              local_525 = 0;
              `TCheckedPointerIterator<FClassTree_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_525);
            }
            if (FVar27.Data == pFVar28) goto LAB_1442ce6f1;
            pFVar18 = FClassTree::FindNode(*(FClassTree **)FVar27.Data,pUVar15);
            if (pFVar18 != (FClassTree *)0x0) break;
            uVar22 = local_3a8.Children._8_8_ & 0xffffffff;
            FVar27.Data = FVar27.Data + 8;
          }
          goto LAB_1442ce5a7;
        }
      }
LAB_1442ce6f1:
      FVar27.Data = local_518.Data;
      while (local_518.Data = FVar27.Data, (uint)uStack_510 != 0) {
        uVar22 = (ulonglong)(int)(uint)uStack_510;
        local_4a0 = (uint)uStack_510;
        local_4f8 = FVar27.Data + uVar22 * 8;
        pFVar28 = local_4f8;
        while( true ) {
          local_500 = FVar27.Data;
          if ((uint)uStack_510 != (int)uVar22) {
            local_524[0] = 0;
            `TCheckedPointerIterator<FClassTree_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_524);
          }
          FVar5.Data = local_4c8.Data;
          uVar22 = uStack_510;
          if (FVar27.Data == pFVar28) break;
          puVar26 = *(undefined8 **)FVar27.Data;
          if (puVar26 == (undefined8 *)0x0) {
LAB_1442cec7e:
            uVar22 = (ulonglong)local_4a0;
            FVar27.Data = FVar27.Data + 8;
          }
          else {
            pUVar15 = (UClass *)*puVar26;
            uVar21 = ((uint)((ulonglong)pUVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar15 >> 4))
                     * -0x7a143595;
            uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
            uVar21 = uVar21 >> 0x10 ^ uVar21;
            if (local_1d8._8_4_ != local_1a4) {
              FVar24 = (ForElementType<FSetElementId>)local_1a0;
              if (local_198 != (ForElementType<FSetElementId>)0x0) {
                FVar24 = local_198;
              }
              for (iVar11 = *(int *)((longlong)FVar24 + (ulonglong)(local_190 - 1U & uVar21) * 4);
                  iVar11 != -1; iVar11 = *(int *)(local_1d8._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
                if (*(UClass **)(local_1d8._0_8_ + (longlong)iVar11 * 0x10) == pUVar15)
                goto LAB_1442cec7e;
              }
            }
            if (local_1a4 == 0) {
              iVar12 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,1,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
                                  (int *)(local_1d8 + 0xc));
              TBitArray<FDefaultBitArrayAllocator>::Add
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),false);
              iVar11 = local_1a8;
            }
            else {
              iVar11 = *(int *)(local_1d8._0_8_ + (longlong)local_1a8 * 0x10 + 4);
              local_1a4 = local_1a4 + -1;
              iVar12 = local_1a8;
              if (local_1a4 != 0) {
                *(undefined4 *)(local_1d8._0_8_ + (longlong)iVar11 * 0x10) = 0xffffffff;
              }
            }
            local_1a8 = iVar11;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_1d8,&local_2b8,iVar12);
            if (local_2b8.Pointer != (undefined8 *)0x0) {
              *(UClass **)local_2b8.Pointer = pUVar15;
              *(undefined4 *)((longlong)local_2b8.Pointer + 8) = 0xffffffff;
            }
            uVar20 = local_1d8._8_4_ - local_1a4;
            if (uVar20 < 4) {
              iVar11 = 1;
            }
            else {
              uVar22 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
              lVar31 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              local_344 = (int)lVar31;
              iVar11 = 1 << ((byte)lVar31 & 0x1f);
            }
            if (((int)uVar20 < 1) || (iVar11 <= local_190)) {
              uVar20 = local_190 - 1U & uVar21;
              *(uint *)((longlong)local_2b8.Pointer + 0xc) = uVar20;
              FVar24 = (ForElementType<FSetElementId>)local_1a0;
              if (local_198 != (ForElementType<FSetElementId>)0x0) {
                FVar24 = local_198;
              }
              lVar31 = (longlong)(int)(local_190 - 1U & uVar20);
              *(undefined4 *)((longlong)local_2b8.Pointer + 8) =
                   *(undefined4 *)((longlong)FVar24 + lVar31 * 4);
              *(int *)((longlong)FVar24 + lVar31 * 4) = local_2b8.Index;
            }
            else {
              local_190 = iVar11;
              TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Rehash
                        ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)
                         local_1d8);
            }
            this_01 = local_490;
            cVar9 = (**(code **)(local_490->_padding_ + 0x368))(local_490,pUVar15);
            if (cVar9 != '\0') {
              local_470.ComparisonIndex.Value = 0;
              local_470.Number = 0;
              uVar20 = GetDynamicFilter(this_01,pUVar15,false,&local_470);
              if (local_188._8_4_ != local_154) {
                FVar24 = (ForElementType<FSetElementId>)local_150;
                if (local_148 != (ForElementType<FSetElementId>)0x0) {
                  FVar24 = local_148;
                }
                for (iVar11 = *(int *)((longlong)FVar24 + (ulonglong)(local_140 - 1U & uVar21) * 4);
                    iVar11 != -1; iVar11 = *(int *)(local_188._0_8_ + 8 + (longlong)iVar11 * 0x10))
                {
                  FVar27.Data = local_500;
                  if (*(UClass **)(local_188._0_8_ + (longlong)iVar11 * 0x10) == pUVar15)
                  goto LAB_1442cec8e;
                }
              }
              for (lVar31 = pUVar15->_padding_; pFVar28 = local_4f8, FVar27.Data = local_500,
                  lVar31 != 0; lVar31 = *(longlong *)(lVar31 + 0x40)) {
                GetConfigClassPathName(this_01,(UClass *)local_460);
                uVar6 = local_460._0_8_;
                local_498.ComparisonIndex.Value = local_460._0_4_;
                local_498.Number = local_460._4_4_;
                uVar21 = ::GetTypeHash((FNameEntryId)(uint)local_460._0_8_);
                if (*(int *)&(this->ClassesWithDynamicFilter).field_0x8 !=
                    *(int *)&(this->ClassesWithDynamicFilter).field_0x34) {
                  puVar3 = *(undefined1 **)&(this->ClassesWithDynamicFilter).field_0x40;
                  puVar25 = &(this->ClassesWithDynamicFilter).field_0x38;
                  if (puVar3 != (undefined1 *)0x0) {
                    puVar25 = puVar3;
                  }
                  iVar11 = *(int *)(puVar25 +
                                   (ulonglong)
                                   (*(int *)&(this->ClassesWithDynamicFilter).field_0x48 - 1U &
                                   uVar21 + local_498.Number) * 4);
                  if (iVar11 != -1) {
                    lVar30 = *(longlong *)&this_00->field_0x0;
                    do {
                      if (*(FName *)((longlong)iVar11 * 0x20 + lVar30) == (FName)uVar6) {
                        if (((iVar11 != -1) &&
                            (lVar30 = (longlong)iVar11 * 0x20 + lVar30, lVar30 != 0)) &&
                           (puVar1 = (uint *)(lVar30 + 8), puVar1 != (uint *)0x0)) {
                          FVar27.Data = local_500;
                          if (*puVar1 == uVar20) goto LAB_1442cec8e;
                          if ((char)local_508 != '\0') {
                            uVar22 = *(ulonglong *)(lVar31 + 0x18);
                            FVar13 = FNameEntryId::FromValidEName((EName)local_340);
                            uStack_464 = 0;
                            local_468 = *(uint *)CONCAT44(extraout_var,FVar13.Value);
                            FVar27.Data = local_500;
                            if (uVar22 == local_468) goto LAB_1442cec8e;
                          }
                          pUVar2 = local_330;
                          pFVar28 = local_4f8;
                          FVar27.Data = local_500;
                          if (3 < (byte)LogIrisFilterConfig._0_1_) {
                            FVar14 = UReplicationSystem::GetFilterName
                                               (local_330,(int)local_200 + 0x10);
                            ::FName::ToString((FName *)FVar14,&local_218);
                            FVar14 = UReplicationSystem::GetFilterName(pUVar2,(int)local_200 + 8);
                            ::FName::ToString((FName *)FVar14,(FString *)(local_200 + 0x18));
                            ::FName::ToString((FName *)local_460,&local_228);
                            FVar14 = GetConfigClassPathName(local_490,(UClass *)local_200);
                            ::FName::ToString((FName *)FVar14,&local_238);
                            UE::Logging::Private::BasicLog<4>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
                            if (local_238.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_238.Data.AllocatorInstance.Data);
                            }
                            if (local_228.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_228.Data.AllocatorInstance.Data);
                            }
                            if ((void *)local_200._24_8_ != (void *)0x0) {
                              FMemory::Free((void *)local_200._24_8_);
                            }
                            pFVar28 = local_4f8;
                            FVar27.Data = local_500;
                            if (local_218.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_218.Data.AllocatorInstance.Data);
                              pFVar28 = local_4f8;
                              FVar27.Data = local_500;
                            }
                          }
                          goto LAB_1442cec7e;
                        }
                        break;
                      }
                      iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar30);
                    } while (iVar11 != -1);
                  }
                }
                this_01 = local_490;
              }
              goto LAB_1442cec7e;
            }
LAB_1442cec8e:
            uVar21 = 0;
            local_4e8.Data = (FScriptContainerElement *)0x0;
            local_4e0 = 0;
            if (0 < *(int *)(puVar26 + 3)) {
              lVar31 = 0;
              do {
                uVar20 = 0;
                if ((int)uVar21 < *(int *)(puVar26 + 3)) {
                  uVar20 = ~uVar21 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar28 = (FScriptContainerElement *)(puVar26[2] + lVar31);
                if (((local_4e8.Data <= pFVar28) &&
                    (pFVar28 < local_4e8.Data + (longlong)local_4e0._4_4_ * 8)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if ((int)local_4e0 == local_4e0._4_4_) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_4e8,(int *)((longlong)&local_4e0 + 4));
                  local_4e0 = CONCAT44(local_4e0._4_4_,iVar11);
                }
                lVar30 = (longlong)(int)local_4e0;
                uVar21 = uVar21 + 1;
                lVar31 = lVar31 + 8;
                local_4e0 = CONCAT44(local_4e0._4_4_,(int)local_4e0 + 1);
                *(undefined8 *)(local_4e8.Data + lVar30 * 8) = *(undefined8 *)pFVar28;
              } while ((int)uVar21 < *(int *)(puVar26 + 3));
            }
            lVar31 = (longlong)(int)local_4e0;
            if ((int)local_4e0 != 0) {
              iVar11 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,(int)local_4e0,&local_4c8,(int *)&uStack_4c0,
                                  (int *)((longlong)&uStack_4c0 + 4));
              memcpy(local_4c8.Data + (longlong)iVar11 * 8,local_4e8.Data,lVar31 << 3);
            }
            pFVar28 = local_4f8;
            if (local_4e8.Data == (FScriptContainerElement *)0x0) goto LAB_1442cec7e;
            FMemory::Free(local_4e8.Data);
            uVar22 = (ulonglong)local_4a0;
            FVar27.Data = FVar27.Data + 8;
            pFVar28 = local_4f8;
          }
        }
        local_4c8.Data = local_518.Data;
        local_518.Data = FVar5.Data;
        uStack_510 = uStack_4c0;
        uStack_4c0 = uVar22 & 0xffffffff00000000;
        if (((longlong)uVar22 < 0) && ((int)(uVar22 >> 0x20) != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_4c8,0,(int *)((longlong)&uStack_4c0 + 4));
        }
        FVar27.Data = local_518.Data;
      }
LAB_1442cee70:
      TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
    }
    if (local_538.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data);
    }
    if (local_4c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data);
    }
    if (local_518.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data);
    }
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1d8);
    local_140 = 0;
    if (local_148 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148);
    }
    TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_188);
    FClassTree::~FClassTree(&local_3a8);
    TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
    ::operator=(local_98,&local_90);
    local_90.HashSize = 0;
    if (local_90.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_90.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_90.Elements);
    if (3 < (byte)LogIrisFilterConfig._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFilterConfig);
    }
  }
  return;
}

// PrintNetCullDistances @ 1442cefb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrintTraits": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::PrintNetCullDistances
          (UObjectReplicationBridge *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
  *this_00;
  int iVar1;
  FName FVar2;
  code *pcVar3;
  byte bVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  EPrintTraits EVar9;
  int iVar10;
  uint uVar11;
  FString *pFVar12;
  FReplicationSystemInternal *pFVar13;
  FName *pFVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  uint *puVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  undefined1 auStackY_2f8 [32];
  <lambda_1> local_2b8 [8];
  ForAnyElementType local_2b0;
  uint local_2a8;
  int local_2a4;
  uint local_2a0;
  undefined1 local_298;
  undefined1 local_297 [7];
  FScriptContainerElement *local_290;
  uint local_288;
  uint local_284;
  int local_280 [2];
  ForAnyElementType local_278;
  int local_270;
  int local_26c;
  uint local_268;
  uint local_260;
  int local_25c;
  int local_258;
  uint uStack_254;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_250;
  undefined4 local_248;
  int iStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *local_208;
  FNetBitArrayView local_200;
  <lambda_1> *local_1f0;
  <lambda_1> **local_1e8;
  FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_13_::<lambda_4>_>
  local_1e0;
  FName local_1d8;
  FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_51_::<lambda_5>_>
  local_1d0;
  FNetBitArrayView local_1c8;
  FString local_1b8;
  TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  longlong *local_178;
  undefined1 auStack_170 [16];
  uint uStack_160;
  uint uStack_15c;
  int local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined1 *local_148;
  undefined2 local_140;
  <lambda_2> local_138;
  FName local_120;
  FNetBitArrayView local_118;
  FNetBitArrayView local_108;
  longlong *local_f8;
  longlong lStack_f0;
  undefined1 local_e8 [16];
  int local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  int local_80;
  undefined4 local_7c;
  int local_78;
  uint local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_280[0] = 0;
  pFVar12 = TArray<FString,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_UObjectReplicationBridge::PrintNetCullDistances_::__l3::<lambda_1>_>
                      (param_1,local_2b8[0]);
  if (pFVar12 != (FString *)0x0) {
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar16,L"NumClasses=",local_280);
  }
  pFVar13 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  local_a8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *)0x0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a4 = 0;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_200,*(uint **)(this->_padding_ + 0xb8),*(uint *)(this->_padding_ + 200));
  local_2a0 = local_200.BitCount;
  local_2a8 = 0;
  uVar23 = local_200.BitCount + 0x1f >> 5;
  if (local_2a4 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar23,&local_2b0,0,&local_2a4);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar23,&local_2b0,(int *)&local_2a8,&local_2a4);
  if (((local_2b0.Data == (FScriptContainerElement *)local_200.Storage) ||
      (local_2a0 != local_200.BitCount)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x528,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_2a8 != 0) && (local_200.WordCount != 0)) {
    memcpy(local_2b0.Data,local_200.Storage,(ulonglong)local_2a8 << 2);
  }
  local_288 = local_2a0 + 0x1f >> 5;
  local_284 = local_2a0;
  if (local_2a0 == 0) {
    local_290 = (FScriptContainerElement *)&local_284;
  }
  else {
    local_290 = local_2b0.Data;
    if ((local_2b0.Data == (FScriptContainerElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Storage != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x5a6,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((local_284 != 0) &&
      ((*(uint *)(local_290 + (ulonglong)(local_288 - 1) * 4) &
       ~(0xffffffffU >> (-(char)local_284 & 0x1fU))) != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x5a7,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_1c8,
             (uint *)(pFVar13->WorldLocations).ValidInfoIndexes.Storage.AllocatorInstance.Data,
             (pFVar13->WorldLocations).ValidInfoIndexes.BitCount);
  if (((local_290 == (FScriptContainerElement *)local_1c8.Storage) ||
      (local_284 != local_1c8.BitCount)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x64b,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_288 != 0) {
    uVar26 = (ulonglong)local_288;
    pFVar17 = local_290;
    pFVar19 = (FScriptContainerElement *)local_1c8.Storage;
    do {
      uVar23 = *(uint *)pFVar19;
      pFVar19 = pFVar19 + 4;
      *(uint *)pFVar17 = *(uint *)pFVar17 & uVar23;
      pFVar17 = pFVar17 + 4;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  local_278.Data = (FScriptContainerElement *)0x0;
  local_26c = 0;
  local_268 = *(uint *)(this->_padding_ + 0xc);
  local_270 = 0;
  uVar23 = local_268 + 0x1f >> 5;
  if (local_268 + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar23,&local_278,0,&local_26c);
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar23,&local_278,&local_270,&local_26c);
  memset(local_278.Data + (longlong)iVar8 * 4,0,(ulonglong)uVar23 << 2);
  pFVar14 = ::FName::FName(&local_120,L"Spatial");
  FVar2 = *pFVar14;
  UE::Net::FNetBitArrayView::FNetBitArrayView(&local_118,(uint *)local_278.Data,local_268);
  local_108.Storage = local_118.Storage;
  local_108.WordCount = local_118.WordCount;
  local_108.BitCount = local_118.BitCount;
  UE::Net::Private::FReplicationFiltering::BuildObjectsInFilterList
            (&pFVar13->Filtering,&local_108,FVar2);
  if (((local_2b0.Data == local_278.Data) || (local_2a0 != local_268)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x539,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_2a8 != 0) {
    uVar26 = (ulonglong)local_2a8;
    FVar18.Data = local_278.Data;
    FVar20.Data = local_2b0.Data;
    do {
      uVar23 = *(uint *)FVar18.Data;
      FVar18.Data = FVar18.Data + 4;
      *(uint *)FVar20.Data = *(uint *)FVar20.Data & uVar23;
      FVar20.Data = FVar20.Data + 4;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  local_138.ClassCullDistanceMap =
       (TMap<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>_>
        *)local_a8;
  local_138.__this = this;
  local_138.WorldLocations = &pFVar13->WorldLocations;
  UE::Net::FNetBitArrayHelper::
  ForAllSetBits<_UObjectReplicationBridge::PrintNetCullDistances_::__l2::<lambda_2>_&>
            ((uint *)local_2b0.Data,local_2a8,local_2a0,&local_138);
  EVar9 = UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs(param_1);
  if (EVar9 != Default) {
    if (EVar9 == SortByClass) {
      local_1e0.Predicate.Predicate =
           (TDereferenceWrapper<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_13_::<lambda_4>_>
            )&local_298;
      TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l13::<lambda_4>_>_>
                (local_a8,&local_1e0);
    }
    goto LAB_1442cf93f;
  }
  uVar23 = local_a8._8_4_ - local_74;
  local_1f0 = local_2b8;
  local_260 = local_74;
  local_1e8 = &local_1f0;
  local_25c = local_a8._8_4_;
  if (0 < (int)uVar23) {
    if (local_74 != 0) {
      local_208 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *)local_a8._0_8_;
      uVar25 = local_260;
      pTVar5 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *)local_a8._0_8_;
      iVar8 = local_78;
      iVar24 = local_a8._8_4_;
      while (iVar1 = iVar8, local_260 = uVar25, iVar1 != -1) {
        iVar8 = pTVar5[iVar1]._s_1.NextFreeIndex;
        if (iVar1 < (int)uVar23) {
          bVar4 = (byte)iVar24 & 0x1f;
          uVar25 = 1 << bVar4 | 1U >> 0x20 - bVar4;
          iVar28 = iVar24;
          do {
            uVar25 = uVar25 >> 1 | (uint)((uVar25 & 1) != 0) << 0x1f;
            iVar24 = iVar28 + -1;
            if (((iVar24 < 0) || (local_80 <= iVar24)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar21 = (uint *)(local_a8 + 0x10);
            if (local_88 != (uint *)0x0) {
              puVar21 = local_88;
            }
            iVar10 = iVar24;
            if (iVar24 < 0) {
              iVar10 = iVar28 + 0x1e;
            }
            iVar28 = iVar24;
          } while ((puVar21[iVar10 >> 5] & uVar25) == 0);
          memmove(pTVar5 + iVar1,local_208 + iVar24,0x70);
          if (((iVar1 < 0) || (local_80 <= iVar1)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar21 = (uint *)(local_a8 + 0x10);
          if (local_88 != (uint *)0x0) {
            puVar21 = local_88;
          }
          iVar28 = iVar1;
          if (iVar1 < 0) {
            iVar28 = iVar1 + 0x1f;
          }
          puVar21[iVar28 >> 5] = puVar21[iVar28 >> 5] | 1 << ((byte)iVar1 & 0x1f);
          uVar25 = local_260;
          pTVar5 = local_208;
        }
      }
      uVar11 = 0;
      if (local_25c <= (int)local_a8._8_4_) {
        uVar11 = ~(uVar25 | uVar23) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (local_a8._8_4_ - uVar23) - uVar25;
      if (iVar8 != 0) {
        memmove((FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar23 * 0x70),
                (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar23 * 0x70) +
                (longlong)(int)uVar25 * 0x70,(longlong)iVar8 * 0x70);
      }
      local_a8._8_4_ = local_a8._8_4_ - uVar25;
      TBitArray<FDefaultBitArrayAllocator>::RemoveAt
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),uVar23,uVar25);
      local_74 = 0;
      local_78 = -1;
      if (local_a8._12_4_ != local_a8._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,8,local_a8._8_4_,(ForAnyElementType *)local_a8,local_a8._8_4_,
                   (int *)(local_a8 + 0xc));
      }
    }
    uVar6 = local_a8._0_8_;
    iVar8 = local_a8._8_4_ - local_74;
    if ((iVar8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FValueComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l9::<lambda_3>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *)uVar6,iVar8,
               (FIdentityFunctor)local_2b8[0],
               (FElementCompareClass<TSortableMapBase<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>_>::FValueComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_9_::<lambda_3>_>_>
                *)&local_1e8);
  }
  uVar23 = local_60;
  uVar26 = (ulonglong)local_60;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar23 != 0) {
    uVar25 = uVar23;
    if (uVar23 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar25 = 0;
        goto LAB_1442cf72a;
      }
    }
    else {
LAB_1442cf72a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar25,4);
    }
    if (0 < (int)uVar23) {
      uVar27 = 0;
      do {
        FVar18.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_68.Data;
        }
        uVar15 = uVar27 & (longlong)(int)uVar23 - 1U;
        uVar27 = uVar27 + 1;
        *(undefined4 *)(FVar18.Data + uVar15 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_250 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_258 = 0;
    uStack_254 = 1;
    local_248 = 0xffffffff;
    iStack_244 = 0;
    iStack_240 = 0;
    if (local_80 != 0) {
      puVar21 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar21 = local_88;
      }
      uVar23 = *puVar21;
      iStack_240 = 0;
      local_258 = 0;
      while (uVar23 == 0) {
        iStack_240 = iStack_240 + 0x20;
        lVar22 = (longlong)local_258;
        local_258 = local_258 + 1;
        if ((int)(local_80 + -1 + (local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < local_258)
        goto LAB_1442cf849;
        uVar23 = (puVar21 + 1)[lVar22];
        local_248 = 0xffffffff;
      }
      uStack_254 = -uVar23 & uVar23;
      uVar26 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iStack_244 = (int)lVar22 + -1 + iStack_240;
      if (local_80 < iStack_244) {
LAB_1442cf849:
        iStack_244 = local_80;
      }
    }
    local_248 = 0xffffffff;
    local_238 = (TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
                 *)local_a8;
    TStack_230._padding_ = CONCAT44(uStack_254,local_258);
    TStack_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    TStack_230.UnvisitedBitMask = 0xffffffff;
    TStack_230.CurrentBitIndex = iStack_244;
    TStack_230.BaseBitIndex = iStack_240;
    TStack_230._28_4_ = uStack_23c;
    iVar8 = iStack_244;
    if (iStack_244 < local_80) {
      do {
        lVar22 = *(longlong *)&local_238->Elements;
        lVar29 = (longlong)iVar8 * 0x70;
        uVar23 = ((uint)(*(ulonglong *)(lVar29 + lVar22) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar29 + lVar22) >> 4)) * -0x7a143595;
        uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
        uVar23 = (uVar23 >> 0x10 ^ uVar23) & local_60 - 1;
        *(uint *)(lVar29 + 0x6c + lVar22) = uVar23;
        FVar18.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_68.Data;
        }
        uVar26 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar23;
        *(undefined4 *)(lVar29 + 0x68 + lVar22) = *(undefined4 *)(FVar18.Data + uVar26 * 4);
        *(int *)(FVar18.Data + uVar26 * 4) = iVar8;
        TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
        iVar8 = TStack_230.CurrentBitIndex;
      } while (TStack_230.CurrentBitIndex < (TStack_230.Array)->NumBits);
    }
  }
LAB_1442cf93f:
  iVar8 = 0;
  iVar24 = 1;
  if ((3 < (byte)LogIris._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_f8,
             (TSet<TTuple<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>,FDefaultSetAllocator>
              *)local_a8);
  local_148 = local_a8;
  local_140 = 0;
  local_158 = local_d8;
  uStack_154 = uStack_d4;
  uStack_150 = uStack_d0;
  local_178 = local_f8;
  auStack_170._0_8_ = lStack_f0;
  stack0xfffffffffffffe98 = local_e8;
  uVar26 = local_e8._8_8_ >> 0x20;
  if (local_e8._12_4_ < *(int *)(local_e8._0_8_ + 0x18)) {
    do {
      lVar22 = (longlong)(int)uVar26 * 0x70 + *local_178;
      if (3 < (byte)LogIris._0_1_) {
        local_1d8 = *(FName *)(*(longlong *)(lVar22 + 8) + 0x18);
        ::FName::ToString(&local_1d8,&local_1b8);
        `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
        FindMostUsedCullDistance((void *)(lVar22 + 8));
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
      }
      local_1d0.Predicate.Predicate =
           (TDereferenceWrapper<float,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_51_::<lambda_5>_>
            )local_297;
      this_00 = (TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
                 *)(lVar22 + 0x18);
      TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l51::<lambda_5>_>_>
                (this_00,&local_1d0);
      iVar1 = *(int *)(lVar22 + 0x40);
      TStack_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar22 + 0x28);
      iVar28 = 0;
      TStack_230.BaseBitIndex = 0;
      uVar23 = 1;
      TStack_1a0.CurrentBitIndex = 0;
      if (iVar1 != 0) {
        pTVar30 = TStack_230.Array;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x38) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar30 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x38);
        }
        uVar23 = *(uint *)(pTVar30->AllocatorInstance).InlineData;
        while (uVar23 == 0) {
          lVar22 = (longlong)iVar28;
          TStack_230.BaseBitIndex = TStack_230.BaseBitIndex + 0x20;
          iVar28 = iVar28 + 1;
          uVar23 = 1;
          TStack_1a0.CurrentBitIndex = iVar1;
          if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_1442cfb1b;
          uVar23 = *(uint *)((pTVar30->AllocatorInstance).InlineData + lVar22 * 4 + 4);
        }
        uVar23 = -uVar23 & uVar23;
        uVar26 = (ulonglong)uVar23 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        TStack_1a0.CurrentBitIndex = TStack_230.BaseBitIndex + -1 + (int)lVar22;
        if (iVar1 < TStack_1a0.CurrentBitIndex) {
          TStack_1a0.CurrentBitIndex = iVar1;
        }
      }
LAB_1442cfb1b:
      TStack_230._padding_ = CONCAT44(uVar23,iVar28);
      TStack_230.CurrentBitIndex = TStack_1a0.CurrentBitIndex;
      TStack_230.UnvisitedBitMask = 0xffffffff;
      TStack_230._28_4_ = local_ac;
      TStack_1a0._padding_ = TStack_230._padding_;
      TStack_1a0.BaseBitIndex = TStack_230.BaseBitIndex;
      TStack_1a0._28_4_ = local_ac;
      TStack_1a0.UnvisitedBitMask = 0xffffffff;
      local_238 = this_00;
      local_1a8 = this_00;
      TStack_1a0.Array = TStack_230.Array;
      if (TStack_1a0.CurrentBitIndex < iVar1) {
        do {
          if (3 < (byte)LogIris._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          }
          TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
        } while (TStack_1a0.CurrentBitIndex < (TStack_1a0.Array)->NumBits);
      }
      iVar8 = iVar8 + 1;
      if (iVar8 == local_280[0]) break;
      uStack_160 = uStack_160 & ~auStack_170._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_170);
      uVar26 = (ulonglong)uStack_15c;
    } while ((int)uStack_15c < *(int *)(auStack_170._8_8_ + 0x18));
    if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
      uVar23 = *(int *)(local_148 + 8) - *(int *)(local_148 + 0x34);
      if (3 < uVar23) {
        uVar26 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar24 = 1 << ((byte)lVar22 & 0x1f);
      }
      if (((0 < (int)uVar23) && (*(int *)(local_148 + 0x48) < iVar24)) ||
         (iVar24 < *(int *)(local_148 + 0x48))) {
        *(int *)(local_148 + 0x48) = iVar24;
        TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_148);
      }
    }
  }
  if (3 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (3 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_a8);
  return;
}

// PrintPushBasedStatuses @ 1442d0390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObjectReplicationBridge::PrintPushBasedStatuses(UObjectReplicationBridge *this)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  UClass *pUVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  FPushBasedInfo *pFVar12;
  int iVar13;
  FPushBasedInfo *pFVar14;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FPushBasedInfo *local_e8;
  undefined8 local_e0;
  FPushBasedInfo **local_d8;
  FName local_d0;
  FString local_c8;
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  FString local_60 [2];
  
  local_b8 = (longlong *)this->_padding_;
  if (local_b8 == (longlong *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return;
    }
  }
  else {
    local_d8 = &local_e8;
    local_a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 2);
    iStack_b0 = 0;
    iVar13 = 0;
    local_e0 = 0;
    local_98 = 0;
    local_e8 = (FPushBasedInfo *)0x0;
    uStack_ac = 1;
    iVar3 = (int)local_b8[5];
    iStack_9c = 0;
    if (iVar3 != 0) {
      pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)local_b8[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)local_b8[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = local_a8;
      }
      uVar4 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      while (uVar4 == 0) {
        lVar9 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_1442d04a0;
        uVar4 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uStack_ac = -uVar4 & uVar4;
      uVar8 = (ulonglong)uStack_ac * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      iStack_9c = local_98 + -1 + local_res20;
      if (iVar3 < iStack_9c) {
        iStack_9c = iVar3;
      }
    }
LAB_1442d04a0:
    uStack_a0 = 0xffffffff;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    TStack_80._28_4_ = iStack_9c;
    TStack_80.BaseBitIndex = local_98;
    iStack_94 = iStack_9c;
    local_88 = local_b8;
    TStack_80.Array = local_a8;
    TStack_80._padding_._0_4_ = iStack_b0;
    TStack_80._padding_._4_4_ = uStack_ac;
    TStack_80.CurrentBitIndex = iStack_9c;
    if (iStack_9c < iVar3) {
      do {
        `UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_1>::operator()
                  (&local_d8,
                   *(FReplicationProtocol **)
                    ((longlong)TStack_80.CurrentBitIndex * 0x20 + 8 + *local_88),
                   *(FObjectKey *)((longlong)TStack_80.CurrentBitIndex * 0x20 + 0x10 + *local_88));
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
      iVar13 = (int)local_e0;
    }
    AlgoImpl::
    IntroSortInternal<_UObjectReplicationBridge::PrintPushBasedStatuses_::__l2::FPushBasedInfo,int,FIdentityFunctor,_UObjectReplicationBridge::PrintPushBasedStatuses_::__l2::<lambda_2>_>
              (local_e8,iVar13,local_res8[0],(<lambda_2>)local_res8[0]);
    if ((3 < (byte)LogIris._0_1_) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
       3 < (byte)LogIris._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    uVar8 = (ulonglong)(int)(uint)local_e0;
    pFVar12 = local_e8 + uVar8;
    local_res18 = (uint)local_e0;
    pFVar14 = local_e8;
    while( true ) {
      if ((uint)local_e0 != (int)uVar8) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<`UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::FPushBasedInfo,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar12) break;
      if (3 < (byte)LogIris._0_1_) {
        local_d0 = (FName)pFVar14->Class->_padding_;
        ::FName::ToString(&local_d0,&local_c8);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      if (pFVar14->bIsFullyPushBased == false) {
        if (3 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0 = 0;
        uVar4 = (pFVar14->Class->ClassReps).ArrayNum;
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        if (0 < (int)uVar4) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar4,&local_f8,0,(int *)((longlong)&local_f0 + 4));
        }
        pUVar5 = pFVar14->Class;
        if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar5);
        }
        (**(code **)(*(longlong *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr + 0x1e8))();
        iVar3 = (int)local_f0;
        pFVar1 = local_f8.Data + (longlong)(int)local_f0 * 0x18;
        FVar10.Data = local_f8.Data;
        while( true ) {
          if ((int)local_f0 != iVar3) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FLifetimeProperty,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (FVar10.Data == pFVar1) break;
          if ((FVar10.Data[0xc] == (FScriptContainerElement)0x0) &&
             (*(int *)(FVar10.Data + 4) != 0xf)) {
            pUVar5 = pFVar14->Class;
            uVar2 = *(ushort *)FVar10.Data;
            if (((pUVar5->ClassReps).ArrayNum <= (int)(uint)uVar2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (3 < (byte)LogIris._0_1_) {
              FField::GetPathName(*(FField **)
                                   ((pUVar5->ClassReps).AllocatorInstance.Data +
                                   (ulonglong)uVar2 * 0x10),local_60,(UObject *)0x0);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
            }
          }
          FVar10.Data = FVar10.Data + 0x18;
        }
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
      }
      uVar8 = (ulonglong)local_res18;
      pFVar14 = pFVar14 + 1;
    }
    if ((3 < (byte)LogIris._0_1_) &&
       (UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u__150ba2a50,(FLogCategoryBase *)&LogIris),
       3 < (byte)LogIris._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    if (local_e8 != (FPushBasedInfo *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  return;
}

// PrintRelevantObjects @ 1442d0850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::PrintRelevantObjects(UObjectReplicationBridge *this,uint param_1)

{
  FNetRefHandleManager *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNetRefHandle FVar4;
  uint uVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_158 [32];
  FIdentityFunctor local_128;
  TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
  local_120;
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  uint local_100;
  FNetBitArrayView local_f8;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  UObjectReplicationBridge *local_d8;
  FNetBitArrayView local_d0;
  FNetBitArrayView local_c0;
  uint local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  UObject *local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [8];
  undefined1 local_88 [56];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e0 = param_1;
  local_d8 = this;
  if ((3 < (byte)LogIris._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  uVar13 = 0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_104 = 0;
  local_100 = *(uint *)(this->_padding_ + 0xc);
  local_108 = 0;
  uVar8 = local_100 + 0x1f >> 5;
  if (local_100 + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&local_110,0,&local_104);
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar8,&local_110,&local_108,&local_104);
  memset(local_110.Data + (longlong)iVar3 * 4,0,(ulonglong)uVar8 << 2);
  UE::Net::FNetBitArrayView::FNetBitArrayView(&local_f8,(uint *)local_110.Data,local_100);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_c0,*(uint **)(this->_padding_ + 0x168),*(uint *)(this->_padding_ + 0x178));
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_d0,*(uint **)(this->_padding_ + 0x108),*(uint *)(this->_padding_ + 0x118));
  if (((local_f8.Storage == local_d0.Storage) || (local_f8.BitCount != local_d0.BitCount)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (First).GetData() && (*this).GetNumBits() == (First).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x644,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((local_f8.Storage == local_c0.Storage) || (local_f8.BitCount != local_c0.BitCount)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Second).GetData() && (*this).GetNumBits() == (Second).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x645,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_f8.WordCount != 0) {
    uVar11 = (ulonglong)local_f8.WordCount;
    puVar6 = local_f8.Storage;
    do {
      uVar8 = *local_c0.Storage;
      local_c0.Storage = local_c0.Storage + 1;
      uVar5 = *local_d0.Storage;
      local_d0.Storage = local_d0.Storage + 1;
      *puVar6 = ~uVar8 & uVar5;
      uVar11 = uVar11 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar11 != 0);
  }
  this_00 = (FNetRefHandleManager *)this->_padding_;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar8 = 0xffffffff >> (-(char)local_f8.BitCount & 0x1fU);
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  uVar5 = local_f8.WordCount - 1;
  puVar6 = local_f8.Storage;
  uVar12 = uVar13;
  local_e8 = uVar8;
  local_e4 = uVar5;
  if (local_f8.WordCount != 0) {
    do {
      uVar9 = 0xffffffff;
      if (uVar13 == uVar5) {
        uVar9 = uVar8;
      }
      uVar10 = uVar12;
      param_1 = local_e0;
      this = local_d8;
      for (uVar9 = uVar9 & *puVar6; local_e0 = param_1, local_d8 = this, uVar9 != 0;
          uVar9 = uVar9 >> 1) {
        if ((uVar9 & 1) != 0) {
          local_b0 = uVar10;
          FVar4 = UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                            (this_00,(uint)local_90);
          uStack_a8 = *(undefined8 *)FVar4.field0_0x0;
          local_a0 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                               (this_00,uVar10);
          if (local_a0 == (UObject *)0x0) {
            uStack_98 = 0;
          }
          else {
            uStack_98 = *(undefined8 *)&local_a0->field_0x10;
          }
          iVar3 = local_120.ArrayNum;
          if (local_120.ArrayNum == local_120.ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_120.AllocatorInstance,&local_120.ArrayMax);
          }
          local_120.ArrayNum = iVar3 + 1;
          *(ulonglong *)(local_120.AllocatorInstance.Data + (longlong)iVar3 * 0x20) =
               CONCAT44(uStack_ac,local_b0);
          *(undefined8 *)(local_120.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 8) = uStack_a8
          ;
          *(UObject **)(local_120.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 0x10) = local_a0
          ;
          *(undefined8 *)(local_120.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 0x10 + 8) =
               uStack_98;
        }
        uVar10 = uVar10 + 1;
        uVar8 = local_e8;
        uVar5 = local_e4;
        param_1 = local_e0;
        this = local_d8;
      }
      uVar13 = uVar13 + 1;
      puVar6 = puVar6 + 1;
      uVar12 = uVar12 + 0x20;
    } while (uVar13 < local_f8.WordCount);
  }
  if ((param_1 & 0x300) == 0x100) {
    AlgoImpl::
    IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
              ((FRootObjectData *)local_120.AllocatorInstance.Data,local_120.ArrayNum,local_128,
               (<lambda_1>)local_128);
  }
  else if ((param_1 & 0x300) == 0x200) {
    AlgoImpl::
    IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
              ((FRootObjectData *)local_120.AllocatorInstance.Data,local_120.ArrayNum,local_128,
               (<lambda_1>)local_128);
  }
  local_88._0_8_ = this->_padding_;
  local_88._8_8_ = &local_120;
  local_88._16_8_ = 0;
  local_50 = (longlong *)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  UE::Net::Private::ObjectBridgeDebugging::LogRootObjectList
            ((FLogContext *)local_88,(bool)((byte)param_1 & 1));
  if (((3 < (byte)LogIris._0_1_) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
      3 < (byte)LogIris._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  if (local_88._16_8_ != 0) {
    plVar7 = (longlong *)(local_88 + 0x20);
    if (local_50 != (longlong *)0x0) {
      plVar7 = local_50;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((FRootObjectData *)local_120.AllocatorInstance.Data != (FRootObjectData *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return;
}

// PrintRelevantObjectsForConnections @ 1442d0cb0

/* WARNING: Removing unreachable block (ram,0x0001442d0df9) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::PrintRelevantObjectsForConnections
          (UObjectReplicationBridge *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  FReplicationSystemInternal *pFVar7;
  FString *pFVar8;
  FString *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  <lambda_1> local_res8;
  uint local_res20 [2];
  uint *local_98;
  int local_90;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  uint local_78;
  FReplicationConnections *local_70;
  UObjectReplicationBridge *local_68;
  uint *local_60;
  FReplicationFiltering *local_58;
  
  pFVar7 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  local_78 = (pFVar7->Connections).ValidConnections.BitCount;
  local_80 = 0;
  uVar10 = local_78 + 0x1f >> 5;
  if (local_78 + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&local_88,0,&local_7c);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar10,&local_88,(int *)&local_80,&local_7c);
  if (((local_88.Data == (pFVar7->Connections).ValidConnections.Storage.AllocatorInstance.Data) ||
      (local_78 != (pFVar7->Connections).ValidConnections.BitCount)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x51e,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_80 != 0) && ((pFVar7->Connections).ValidConnections.Storage.ArrayNum != 0)) {
    memcpy(local_88.Data,(pFVar7->Connections).ValidConnections.Storage.AllocatorInstance.Data,
           (ulonglong)local_80 << 2);
  }
  (**(code **)(this->_padding_ + 0x378))(this);
  if (local_90 != 0) {
    memset(local_88.Data,0,(longlong)(int)local_80 << 2);
    puVar13 = local_98;
    while (puVar13 != local_98 + local_90) {
      uVar10 = *puVar13;
      pFVar2 = (pFVar7->Connections).ValidConnections.Storage.AllocatorInstance.Data;
      if (((pFVar7->Connections).ValidConnections.BitCount <= uVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar14.Data = local_88.Data;
      lVar1 = (ulonglong)(uVar10 >> 5) * 4;
      if ((*(uint *)(pFVar2 + lVar1) >> (uVar10 & 0x1f) & 1) == 0) {
        if (2 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        puVar13 = puVar13 + 1;
      }
      else {
        if ((local_78 <= uVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(uint *)(FVar14.Data + lVar1) = *(uint *)(FVar14.Data + lVar1) | 1 << (uVar10 & 0x1f);
        puVar13 = puVar13 + 1;
      }
    }
  }
  uVar10 = 0;
  if (3 < (byte)LogIris._0_1_) {
    UE::Net::FNetBitArrayHelper::CountSetBits((uint *)local_88.Data,local_78,0,0xffffffff);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (3 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  local_res8 = SUB81(this,0);
  TArray<FString,TSizedDefaultAllocator<32>_>::
  FindByPredicate<_UObjectReplicationBridge::PrintRelevantObjectsForConnections_::__l2::<lambda_1>_>
            (param_1,local_res8);
  pFVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l3::<lambda_1>_>
                     (param_1,local_res8);
  pFVar9 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l6::<lambda_2>_>
                     (param_1,(<lambda_2>)local_res8);
  local_res20[0] = (uint)(pFVar8 != (FString *)0x0);
  if (pFVar9 == (FString *)0x0) {
    pFVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l10::<lambda_3>_>
                       (param_1,(<lambda_3>)local_res8);
    if (pFVar8 != (FString *)0x0) {
      local_res20[0] = local_res20[0] | 0x200;
    }
  }
  else {
    local_res20[0] = local_res20[0] | 0x100;
  }
  uVar5 = local_80;
  local_60 = local_res20;
  cVar4 = (char)local_78;
  FVar14.Data = local_88.Data;
  uVar15 = uVar10;
  local_70 = &pFVar7->Connections;
  local_68 = this;
  local_58 = &pFVar7->Filtering;
  if (local_80 != 0) {
    do {
      uVar11 = 0xffffffff;
      if (uVar10 == uVar5 - 1) {
        uVar11 = 0xffffffff >> (-cVar4 & 0x1fU);
      }
      uVar12 = uVar15;
      for (uVar11 = uVar11 & *(uint *)FVar14.Data; uVar11 != 0; uVar11 = uVar11 >> 1) {
        if ((uVar11 & 1) != 0) {
          `UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::
          operator()(&local_70,uVar12);
        }
        uVar12 = uVar12 + 1;
      }
      uVar10 = uVar10 + 1;
      FVar14.Data = FVar14.Data + 4;
      uVar15 = uVar15 + 0x20;
    } while (uVar10 < uVar5);
  }
  if ((3 < (byte)LogIris._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Net::FNetBitArrayHelper::CountSetBits((uint *)local_88.Data,local_78,0,0xffffffff);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  if (local_98 != (uint *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// PrintReplicatedObjects @ 1442d1090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UObjectReplicationBridge::PrintReplicatedObjects(UObjectReplicationBridge *this,uint param_1)

{
  FNetRefHandleManager *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNetRefHandle FVar4;
  uint uVar5;
  uint *puVar6;
  undefined ***pppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_158 [32];
  FIdentityFunctor local_128;
  TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
  local_120;
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  uint local_100;
  FNetBitArrayView local_f8;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  UObjectReplicationBridge *local_d8;
  FNetBitArrayView local_d0;
  FNetBitArrayView local_c0;
  uint local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  UObject *local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  undefined **local_68;
  UObjectReplicationBridge *local_60;
  undefined ***local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e0 = param_1;
  local_d8 = this;
  if ((3 < (byte)LogIris._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  uVar13 = 0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_104 = 0;
  local_100 = *(uint *)(this->_padding_ + 0xc);
  local_108 = 0;
  uVar8 = local_100 + 0x1f >> 5;
  if (local_100 + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,&local_110,0,&local_104);
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar8,&local_110,&local_108,&local_104);
  memset(local_110.Data + (longlong)iVar3 * 4,0,(ulonglong)uVar8 << 2);
  UE::Net::FNetBitArrayView::FNetBitArrayView(&local_f8,(uint *)local_110.Data,local_100);
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_c0,*(uint **)(this->_padding_ + 0x168),*(uint *)(this->_padding_ + 0x178));
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (&local_d0,*(uint **)(this->_padding_ + 0xb8),*(uint *)(this->_padding_ + 200));
  if (((local_f8.Storage == local_d0.Storage) || (local_f8.BitCount != local_d0.BitCount)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (First).GetData() && (*this).GetNumBits() == (First).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x644,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((local_f8.Storage == local_c0.Storage) || (local_f8.BitCount != local_c0.BitCount)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Second).GetData() && (*this).GetNumBits() == (Second).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x645,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_f8.WordCount != 0) {
    uVar11 = (ulonglong)local_f8.WordCount;
    puVar6 = local_f8.Storage;
    do {
      uVar8 = *local_c0.Storage;
      local_c0.Storage = local_c0.Storage + 1;
      uVar5 = *local_d0.Storage;
      local_d0.Storage = local_d0.Storage + 1;
      *puVar6 = ~uVar8 & uVar5;
      uVar11 = uVar11 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar11 != 0);
  }
  this_00 = (FNetRefHandleManager *)this->_padding_;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar8 = 0xffffffff >> (-(char)local_f8.BitCount & 0x1fU);
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  uVar5 = local_f8.WordCount - 1;
  puVar6 = local_f8.Storage;
  uVar12 = uVar13;
  local_e8 = uVar8;
  local_e4 = uVar5;
  if (local_f8.WordCount != 0) {
    do {
      uVar9 = 0xffffffff;
      if (uVar13 == uVar5) {
        uVar9 = uVar8;
      }
      uVar10 = uVar12;
      param_1 = local_e0;
      this = local_d8;
      for (uVar9 = uVar9 & *puVar6; local_e0 = param_1, local_d8 = this, uVar9 != 0;
          uVar9 = uVar9 >> 1) {
        if ((uVar9 & 1) != 0) {
          local_b0 = uVar10;
          FVar4 = UE::Net::Private::FNetRefHandleManager::GetNetRefHandleFromInternalIndex
                            (this_00,(uint)local_90);
          uStack_a8 = *(undefined8 *)FVar4.field0_0x0;
          local_a0 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                               (this_00,uVar10);
          if (local_a0 == (UObject *)0x0) {
            uStack_98 = 0;
          }
          else {
            uStack_98 = *(undefined8 *)&local_a0->field_0x10;
          }
          iVar3 = local_120.ArrayNum;
          if (local_120.ArrayNum == local_120.ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_120.AllocatorInstance,&local_120.ArrayMax);
          }
          local_120.ArrayNum = iVar3 + 1;
          *(ulonglong *)(local_120.AllocatorInstance.Data + (longlong)iVar3 * 0x20) =
               CONCAT44(uStack_ac,local_b0);
          *(undefined8 *)(local_120.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 8) = uStack_a8
          ;
          *(UObject **)(local_120.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 0x10) = local_a0
          ;
          *(undefined8 *)(local_120.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 0x10 + 8) =
               uStack_98;
        }
        uVar10 = uVar10 + 1;
        uVar8 = local_e8;
        uVar5 = local_e4;
        param_1 = local_e0;
        this = local_d8;
      }
      uVar13 = uVar13 + 1;
      puVar6 = puVar6 + 1;
      uVar12 = uVar12 + 0x20;
    } while (uVar13 < local_f8.WordCount);
  }
  if ((param_1 & 0x300) == 0x100) {
    AlgoImpl::
    IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
              ((FRootObjectData *)local_120.AllocatorInstance.Data,local_120.ArrayNum,local_128,
               (<lambda_1>)local_128);
  }
  else if ((param_1 & 0x300) == 0x200) {
    AlgoImpl::
    IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
              ((FRootObjectData *)local_120.AllocatorInstance.Data,local_120.ArrayNum,local_128,
               (<lambda_1>)local_128);
  }
  local_88._0_8_ = this->_padding_;
  local_88._8_8_ = &local_120;
  local_50 = (undefined ***)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>,FString,unsigned_int>
       ::Call;
  local_60 = this;
  UE::Net::Private::ObjectBridgeDebugging::LogRootObjectList
            ((FLogContext *)local_88,(bool)((byte)param_1 & 1));
  if (((3 < (byte)LogIris._0_1_) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
      3 < (byte)LogIris._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
     3 < (byte)LogIris._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  if ((code *)local_88._16_8_ != (code *)0x0) {
    pppuVar7 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar7 = local_50;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((FRootObjectData *)local_120.AllocatorInstance.Data != (FRootObjectData *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return;
}

// operator() @ 1504b47c0

bool __thiscall
`UObjectReplicationBridge::DestroyNetObjectFromRemote'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107109>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),&local_18,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107109>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b4832;
    }
  }
  bVar2 = false;
LAB_1504b4832:
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

// operator() @ 1504b4860

bool __thiscall
`UObjectReplicationBridge::OnErrorBitstreamCorrupted'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445109230>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445109230>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b48d2;
    }
  }
  bVar2 = false;
LAB_1504b48d2:
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

// operator() @ 1504b4900

bool __thiscall
`UObjectReplicationBridge::OnErrorBlockedByAsyncLoading'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445109281>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445109281>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b498a;
    }
  }
  bVar2 = false;
LAB_1504b498a:
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

// operator() @ 1504b49c0

bool __thiscall
`UObjectReplicationBridge::OnErrorBlockedByParents'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445109316>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445109316>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b4a4a;
    }
  }
  bVar2 = false;
LAB_1504b4a4a:
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

// operator() @ 1504b4a80

bool __thiscall
`UObjectReplicationBridge::OnErrorCannotReplicateObject'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445109248>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445109248>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b4af2;
    }
  }
  bVar2 = false;
LAB_1504b4af2:
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

// operator() @ 1504b4bc0

bool __thiscall
`UObjectReplicationBridge::SetObjectWantsToBeDormant'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445108286>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)this,&local_18,**(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445108286>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b4c2e;
    }
  }
  bVar2 = false;
LAB_1504b4c2e:
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

// operator() @ 1504b4d50

bool __thiscall `UObjectReplicationBridge::GetNetFactory'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445106480>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445106480>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504b5070

bool __thiscall
`UObjectReplicationBridge::SetShouldSubclassUseSameFilterFunction'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445108983>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445108983>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b50c0

bool __thiscall
`UObjectReplicationBridge::SetShouldUseDefaultSpatialFilterFunction'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445108973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445108973>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b5110

bool __thiscall
`UObjectReplicationBridge::StartReplicatingSubObject'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  TObjectPtr<UObject>_u_0 *pTVar6;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107026>);
  if (bVar4) {
    pTVar6 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)((longlong)this + 8) + 0x300),
                         **(int **)((longlong)this + 0x10))->field0_0x0;
    if (pTVar6->DebugPtr == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)((longlong)pTVar6->DebugPtr + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107026>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b524b;
    }
  }
  bVar4 = false;
LAB_1504b524b:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b5550

bool __thiscall
`UObjectReplicationBridge::ForceUpdateWorldLocation'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445108140>);
  if (bVar2) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)this,&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445108140>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b55be;
    }
  }
  bVar2 = false;
LAB_1504b55be:
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

// operator() @ 1504b5820

bool __thiscall
`UObjectReplicationBridge::StartReplicatingRootObject'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445106906>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445106906>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b58b0;
    }
  }
  bVar2 = false;
LAB_1504b58b0:
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

// operator() @ 1504b58e0

bool __thiscall
`UObjectReplicationBridge::StopReplicatingNetObject'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107339>);
  if (bVar2) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)this,&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107339>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b594e;
    }
  }
  bVar2 = false;
LAB_1504b594e:
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

// operator() @ 1504b5980

bool __thiscall
`UObjectReplicationBridge::StoreDestructionInfo'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445106536>);
  if (bVar2) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)((longlong)this + 8),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 0x10))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445106536>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b59f7;
    }
  }
  bVar2 = false;
LAB_1504b59f7:
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

// operator() @ 1504b5b60

bool __thiscall
`UObjectReplicationBridge::CacheNetRefHandleCreationInfo'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107315>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107315>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b5c20;
    }
  }
  bVar2 = false;
LAB_1504b5c20:
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

// operator() @ 1504b5c50

bool __thiscall
`UObjectReplicationBridge::OnErrorWithNetRefHandleReported'::__l9::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445109207>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445109207>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b5c90

bool __thiscall
`UObjectReplicationBridge::SetClassDynamicFilterConfig'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445108700>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString(*(FName **)this,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445108700>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b5d29;
    }
  }
  bVar4 = false;
LAB_1504b5d29:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b6050

bool __thiscall
`UObjectReplicationBridge::DetachInstanceFromRemote'::__l31::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107378>);
  if (bVar4) {
    if ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_18,
                 (UObject *)0x0);
    }
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_28,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_28,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107378>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b6167;
    }
  }
  bVar4 = false;
LAB_1504b6167:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b61b0

bool __thiscall
`UObjectReplicationBridge::WriteNetRefHandleCreationInfo'::__l33::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107271>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107271>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b6270;
    }
  }
  bVar2 = false;
LAB_1504b6270:
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

// operator() @ 1504b6410

bool __thiscall
`UObjectReplicationBridge::CreateNetRefHandleFromRemote'::__l62::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107531>);
  if (bVar2) {
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107531>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b64d0;
    }
  }
  bVar2 = false;
LAB_1504b64d0:
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

// operator() @ 1504b65a0

bool __thiscall
`UObjectReplicationBridge::StartReplicatingNetObject'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445106782>);
  if (bVar4) {
    if (*(longlong *)(**(longlong **)this + 0x10) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445106782>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b6699;
    }
  }
  bVar4 = false;
LAB_1504b6699:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b6730

bool __thiscall
`UObjectReplicationBridge::StartReplicatingRootObject'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445106911>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445106911>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b67f2;
    }
  }
  bVar2 = false;
LAB_1504b67f2:
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

// operator() @ 1504b6830

bool __thiscall
`UObjectReplicationBridge::StartReplicatingSubObject'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107032>);
  if (bVar5) {
    if (**(longlong **)((longlong)this + 0x18) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 0x18) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    if ((**(ulonglong **)((longlong)this + 0x10) == 0) ||
       (**(ulonglong **)((longlong)this + 0x10) < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_38,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    pTVar7 = &TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::operator[]
                        ((TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)this + 0x300),**(int **)((longlong)this + 8))->field0_0x0;
    if (pTVar7->DebugPtr == (UObject *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res18 = *(FName *)((longlong)pTVar7->DebugPtr + 0x18);
      ::FName::ToString(&local_res18,&local_48);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107032>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1504b69cf;
    }
  }
  bVar5 = false;
LAB_1504b69cf:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1504b6be0

bool __thiscall
`UObjectReplicationBridge::StartReplicatingNetObject'::__l16::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445106787>);
  if (bVar4) {
    if (*(longlong *)(**(longlong **)this + 0x10) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445106787>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b6cfc;
    }
  }
  bVar4 = false;
LAB_1504b6cfc:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b6f70

bool __thiscall
`UObjectReplicationBridge::StoreDestructionInfo'::__l32::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445106587>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),&local_18,
               **(uint **)((longlong)this + 8));
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445106587>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b703d;
    }
  }
  bVar4 = false;
LAB_1504b703d:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b7490

bool __thiscall
`UObjectReplicationBridge::StartReplicatingNetObject'::__l20::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445106792>);
  if (bVar4) {
    if (*(longlong *)(**(longlong **)this + 0x10) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445106792>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b75af;
    }
  }
  bVar4 = false;
LAB_1504b75af:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b7600

bool __thiscall
`UObjectReplicationBridge::StartReplicatingSubObject'::__l32::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107049>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107049>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b7960

bool __thiscall
`UObjectReplicationBridge::StartReplicatingSubObject'::__l56::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3515033580445107062>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3515033580445107062>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

