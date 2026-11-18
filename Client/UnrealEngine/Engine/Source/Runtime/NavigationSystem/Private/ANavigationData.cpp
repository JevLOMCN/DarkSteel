// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 90

// StaticClass @ 146d63180

UClass * __cdecl ANavigationData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationData",
               &Z_Registration_Info_UClass_ANavigationData.InnerSingleton,
               StaticRegisterNativesANavigationData,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<ANavigationData>,
               InternalVTableHelperCtorCaller<ANavigationData>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationData.InnerSingleton;
}

// CreatePathInstance<FAbstractNavigationPath> @ 146d67530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FNavigationPath,1> * __thiscall
ANavigationData::CreatePathInstance<FAbstractNavigationPath>
          (ANavigationData *this,TSharedPtr<FNavigationPath,1> *__return_storage_ptr__,
          FPathFindingQueryData *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  FNavPathType FVar6;
  bool bVar7;
  FNavigationPath *pFVar8;
  TSharedPtr<FNavigationPath,1> *pTVar9;
  FWeakObjectPtr local_res8;
  TRawPtrProxy<FAbstractNavigationPath> local_res10 [2];
  ANavigationData *local_res20;
  TSharedPtr<FNavigationPath,1> local_38;
  
  pFVar8 = ::operator_new(0x130);
  if (pFVar8 == (FNavigationPath *)0x0) {
    pFVar8 = (FNavigationPath *)0x0;
  }
  else {
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FNavigationPath__6B_;
    (pFVar8->ShortcutNodeRefs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->ShortcutNodeRefs).ArrayNum = 0;
    (pFVar8->ShortcutNodeRefs).ArrayMax = 0;
    (pFVar8->PathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->PathPoints).ArrayNum = 0;
    (pFVar8->PathPoints).ArrayMax = 0;
    (pFVar8->Base).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar8->GoalActor).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar8->SourceActor).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar8->Filter).Object = (FNavigationQueryFilter *)0x0;
    (pFVar8->Filter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar8->GoalActorAsNavAgent = (INavAgentInterface *)0x0;
    pFVar8->SourceActorAsNavAgent = (INavAgentInterface *)0x0;
    FVar6 = FNavigationPath::Type;
    puVar2 = &pFVar8->field_0xa0;
    pFVar8->bErrorStartLocationNonNavigable = 0;
    pFVar8->bUseOnPathUpdatedNotify = 0;
    pFVar8->bWaitingForRepath = 0;
    pFVar8->bUpdateEndPointOnRepath = 1;
    pFVar8->bUpdateStartPointOnRepath = 1;
    pFVar8->bIgnoreInvalidation = 0;
    pFVar8->bDoAutoUpdateOnInvalidation = 1;
    pFVar8->bErrorEndLocationNonNavigable = 0;
    pFVar8->PathType = FVar6;
    *(undefined8 *)&pFVar8->ObserverDelegate = 0;
    *(undefined8 *)&(pFVar8->ObserverDelegate).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->ObserverDelegate).field_0x10 = 0;
    *(undefined8 *)&(pFVar8->ObserverDelegate).field_0x18 = 2;
    (pFVar8->NavigationDataUsed).WeakPtr = (FWeakObjectPtr)0x0;
    (pFVar8->PathFindingQueryData).Owner.WeakPtr = (FWeakObjectPtr)0x0;
    uVar5 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
    (pFVar8->PathFindingQueryData).StartLocation.field0_0x0._s_0.X =
         FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
    (pFVar8->PathFindingQueryData).StartLocation.field0_0x0._s_0.Y = (double)uVar5;
    (pFVar8->PathFindingQueryData).StartLocation.field0_0x0._s_0.Z =
         FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
    uVar5 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
    (pFVar8->PathFindingQueryData).EndLocation.field0_0x0._s_0.X =
         FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
    (pFVar8->PathFindingQueryData).EndLocation.field0_0x0._s_0.Y = (double)uVar5;
    uVar5 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
    (pFVar8->PathFindingQueryData).bAllowPartialPaths = 1;
    (pFVar8->PathFindingQueryData).bRequireNavigableEndLocation = 1;
    (pFVar8->PathFindingQueryData).EndLocation.field0_0x0._s_0.Z = (double)uVar5;
    (pFVar8->PathFindingQueryData).CostLimit = 1.7976931348623157e+308;
    (pFVar8->PathFindingQueryData).QueryFilter.Object = (FNavigationQueryFilter *)0x0;
    (pFVar8->PathFindingQueryData).QueryFilter.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar8->PathFindingQueryData).NavDataFlags = 0;
    pFVar8->LastUpdateTimeStamp = -1.0;
    pFVar8->GoalActorLocationTetherDistanceSq = -1.0;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (pFVar8->GoalActorLastLocation).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (pFVar8->GoalActorLastLocation).field0_0x0._s_0.Y = (double)uVar5;
    (pFVar8->GoalActorLastLocation).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FNavigationPath::InternalResetNavigationPath(pFVar8);
    pFVar8->_padding_ = (longlong)&___7FAbstractNavigationPath__6B_;
    pFVar8->PathType = FAbstractNavigationPath::Type;
    if (((pFVar8->_padding_ != 0) && (pFVar8->_padding_ != 0)) &&
       (0 < *(int *)(pFVar8->_padding_ + 8))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FNavigationPath,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
  }
  local_res10[0].Object = (FAbstractNavigationPath *)pFVar8;
  TSharedPtr<FNavigationPath,1>::TSharedPtr<FNavigationPath,1><FAbstractNavigationPath>
            (__return_storage_ptr__,local_res10);
  if (__return_storage_ptr__->Object == (FNavigationPath *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FNavigationPath,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  pFVar8 = __return_storage_ptr__->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  (pFVar8->NavigationDataUsed).WeakPtr = local_res8;
  if (__return_storage_ptr__->Object == (FNavigationPath *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FNavigationPath,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  FNavigationPath::SetQueryData(__return_storage_ptr__->Object,param_1);
  if (__return_storage_ptr__->Object == (FNavigationPath *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FNavigationPath,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  pFVar8 = __return_storage_ptr__->Object;
  dVar4 = GetWorldTimeStamp(this);
  pFVar8->LastUpdateTimeStamp = dVar4;
  local_38.Object = __return_storage_ptr__->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RegisterActivePath(this,&local_38);
  return __return_storage_ptr__;
}

// ANavigationData @ 146d72060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavigationData * __thiscall
ANavigationData::ANavigationData(ANavigationData *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->RenderingComp).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavigationDataInterface__;
  FNavDataConfig::FNavDataConfig
            (&this->NavDataConfig,FNavigationSystem::FallbackAgentRadius,
             FNavigationSystem::FallbackAgentHeight);
  (this->NavDataGenerator).Object = (FNavDataGenerator *)0x0;
  (this->NavDataGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SuspendedDirtyAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuspendedDirtyAreas).ArrayNum = 0;
  (this->SuspendedDirtyAreas).ArrayMax = 0;
  (this->ActivePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivePaths).ArrayNum = 0;
  (this->ActivePaths).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActivePathsLock,4000);
  (this->ObservedPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObservedPaths).ArrayNum = 0;
  (this->ObservedPaths).ArrayMax = 0;
  (this->RepathRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepathRequests).ArrayNum = 0;
  (this->RepathRequests).ArrayMax = 0;
  (this->DefaultQueryFilter).Object = (FNavigationQueryFilter *)0x0;
  (this->DefaultQueryFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->QueryFilters = 0;
  *(undefined8 *)&(this->QueryFilters).field_0x8 = 0;
  *(undefined8 *)&(this->QueryFilters).field_0x20 = 0;
  *(undefined4 *)&(this->QueryFilters).field_0x28 = 0;
  *(undefined4 *)&(this->QueryFilters).field_0x2c = 0x80;
  *(undefined4 *)&(this->QueryFilters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QueryFilters).field_0x34 = 0;
  *(undefined8 *)&(this->QueryFilters).field_0x40 = 0;
  *(undefined4 *)&(this->QueryFilters).field_0x48 = 0;
  (this->SupportedAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedAreas).ArrayNum = 0;
  (this->SupportedAreas).ArrayMax = 0;
  *(undefined8 *)&this->AreaClassToIdMap = 0;
  *(undefined8 *)&(this->AreaClassToIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->AreaClassToIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x34 = 0;
  *(undefined8 *)&(this->AreaClassToIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x48 = 0;
  this->bReachedSuspendedAreasMaxCount = 0;
  *(byte *)&(this->NavAgentProperties)._padding_ = (byte)(this->NavAgentProperties)._padding_ & 0xe0
  ;
  (this->NavAgentProperties).AgentRadius = -1.0;
  (this->NavAgentProperties).AgentHeight = -1.0;
  (this->NavAgentProperties).AgentStepHeight = -1.0;
  (this->NavAgentProperties).NavWalkingSearchHeightScale = 0.5;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x18 = 0;
  return this;
}

// ANavigationData @ 146d72210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavigationData * __thiscall
ANavigationData::ANavigationData(ANavigationData *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ANavigationData *pAVar8;
  FNavigationQueryFilter *pFVar9;
  FNavigationQueryFilter *pFVar10;
  FName *pFVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  TRawPtrProxy<FNavigationQueryFilter> local_res8;
  FName local_res18 [2];
  
  AActor::AActor((AActor *)this,param_1);
  pFVar10 = (FNavigationQueryFilter *)0x0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->RenderingComp).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavigationDataInterface__;
  FNavDataConfig::FNavDataConfig
            (&this->NavDataConfig,FNavigationSystem::FallbackAgentRadius,
             FNavigationSystem::FallbackAgentHeight);
  this->bEnableDrawing = 0;
  this->bAutoDestroyWhenNoNavigation = 0;
  this->bForceRebuildOnLoad = 0;
  this->bCanBeMainNavData = 1;
  this->bCanSpawnOnRebuild = 1;
  this->RuntimeGeneration = LegacyGeneration;
  this->DataVersion = 0xd;
  this->FindPathImplementation =
       (_func___cdecl_FPathFindingResult_FNavAgentProperties_ptr_FPathFindingQuery_ptr *)0x0;
  this->FindHierarchicalPathImplementation =
       (_func___cdecl_FPathFindingResult_FNavAgentProperties_ptr_FPathFindingQuery_ptr *)0x0;
  (this->NavDataGenerator).Object = (FNavDataGenerator *)0x0;
  (this->NavDataGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SuspendedDirtyAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuspendedDirtyAreas).ArrayNum = 0;
  (this->SuspendedDirtyAreas).ArrayMax = 0;
  (this->ActivePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivePaths).ArrayNum = 0;
  (this->ActivePaths).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActivePathsLock,4000);
  (this->ObservedPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObservedPaths).ArrayNum = 0;
  (this->ObservedPaths).ArrayMax = 0;
  (this->RepathRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepathRequests).ArrayNum = 0;
  (this->RepathRequests).ArrayMax = 0;
  (this->DefaultQueryFilter).Object = (FNavigationQueryFilter *)0x0;
  (this->DefaultQueryFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->QueryFilters = 0;
  *(undefined8 *)&(this->QueryFilters).field_0x8 = 0;
  *(undefined8 *)&(this->QueryFilters).field_0x20 = 0;
  *(undefined4 *)&(this->QueryFilters).field_0x28 = 0;
  *(undefined4 *)&(this->QueryFilters).field_0x2c = 0x80;
  *(undefined4 *)&(this->QueryFilters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QueryFilters).field_0x34 = 0;
  *(undefined8 *)&(this->QueryFilters).field_0x40 = 0;
  *(undefined4 *)&(this->QueryFilters).field_0x48 = 0;
  (this->SupportedAreas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedAreas).ArrayNum = 0;
  (this->SupportedAreas).ArrayMax = 0;
  *(undefined8 *)&this->AreaClassToIdMap = 0;
  *(undefined8 *)&(this->AreaClassToIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->AreaClassToIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x34 = 0;
  *(undefined8 *)&(this->AreaClassToIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x48 = 0;
  this->bRegistered = 0;
  this->bReachedSuspendedAreasMaxCount = 0;
  this->bRebuildingSuspended = 0;
  LOCK();
  iVar5 = ::StaticID.Counter + 1;
  UNLOCK();
  uVar7 = ::StaticID.Counter + 1;
  ::StaticID.Counter = iVar5;
  if (((uVar7 != (uVar7 & 0xffff)) || ((int)uVar7 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6)) {
    pcVar4 = (code *)swi(3);
    pAVar8 = (ANavigationData *)(*pcVar4)();
    return pAVar8;
  }
  *(byte *)&(this->NavAgentProperties)._padding_ = (byte)(this->NavAgentProperties)._padding_ & 0xe0
  ;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xf7;
  this->NavDataUniqueID = (ushort)uVar7;
  (this->NavAgentProperties).AgentRadius = -1.0;
  (this->NavAgentProperties).AgentHeight = -1.0;
  (this->NavAgentProperties).AgentStepHeight = -1.0;
  (this->NavAgentProperties).NavWalkingSearchHeightScale = 0.5;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProperties).PreferredNavData.field_0x18 = 0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  pFVar9 = ::operator_new(0x28);
  if (pFVar9 != (FNavigationQueryFilter *)0x0) {
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    (pFVar9->QueryFilterImpl).Object = (INavigationQueryFilterInterface *)0x0;
    (pFVar9->QueryFilterImpl).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar9->MaxSearchNodes = FNavigationQueryFilter::DefaultMaxSearchNodes;
    pFVar10 = pFVar9;
  }
  local_res8.Object = pFVar10;
  TSharedPtr<FNavigationQueryFilter,1>::operator=<FNavigationQueryFilter>
            (&this->DefaultQueryFilter,&local_res8);
  this->ObservedPathsTickInterval = 0.5;
  pFVar11 = ::FName::FName(local_res18,L"SceneComp");
  FVar3 = *pFVar11;
  pUVar12 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar13 = UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  this->_padding_ = (longlong)pUVar13;
  pUVar13[10].field_0x1b = 0;
  return this;
}

// ~ANavigationData @ 146d77f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::~ANavigationData(ANavigationData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavigationDataInterface__;
  pvVar1 = *(void **)&(this->NavAgentProperties).PreferredNavData.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->AreaClassToIdMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AreaClassToIdMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AreaClassToIdMap);
  DestructItems<FSupportedAreaData,int>
            ((FSupportedAreaData *)(this->SupportedAreas).AllocatorInstance.Data,
             (this->SupportedAreas).ArrayNum);
  pFVar2 = (this->SupportedAreas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->QueryFilters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QueryFilters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QueryFilters);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultQueryFilter).SharedReferenceCount.ReferenceController);
  DestructItems<FNavPathRecalculationRequest,int>
            ((FNavPathRecalculationRequest *)(this->RepathRequests).AllocatorInstance.Data,
             (this->RepathRequests).ArrayNum);
  pFVar2 = (this->RepathRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TWeakPtr<FNavigationPath,1>,int>
            ((TWeakPtr<FNavigationPath,1> *)(this->ObservedPaths).AllocatorInstance.Data,
             (this->ObservedPaths).ArrayNum);
  pFVar2 = (this->ObservedPaths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActivePathsLock);
  DestructItems<TWeakPtr<FNavigationPath,1>,int>
            ((TWeakPtr<FNavigationPath,1> *)(this->ActivePaths).AllocatorInstance.Data,
             (this->ActivePaths).ArrayNum);
  pFVar2 = (this->ActivePaths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNavigationDirtyArea,int>
            ((FNavigationDirtyArea *)(this->SuspendedDirtyAreas).AllocatorInstance.Data,
             (this->SuspendedDirtyAreas).ArrayNum);
  pFVar2 = (this->SuspendedDirtyAreas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavDataGenerator).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->NavDataConfig).NavDataClass.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->NavDataConfig)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7INavigationDataInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// ApplyWorldOffset @ 146d84be0

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
ANavigationData::ApplyWorldOffset(ANavigationData *this,TVector<double> *param_1,bool param_2)

{
  return;
}

// BatchProjectPoints @ 146d850c0

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
ANavigationData::BatchProjectPoints
          (ANavigationData *this,
          TArray<FNavigationProjectionWork,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TSharedPtr<FNavigationQueryFilter_const_,1> *param_3,
          UObject *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3af,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// BatchProjectPoints @ 146d85100

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
ANavigationData::BatchProjectPoints
          (ANavigationData *this,
          TArray<FNavigationProjectionWork,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_2,UObject *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3b4,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// BatchRaycast @ 146d85150

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
ANavigationData::BatchRaycast
          (ANavigationData *this,TArray<FNavigationRaycastWork,TSizedDefaultAllocator<32>_> *param_1
          ,TSharedPtr<FNavigationQueryFilter_const_,1> *param_2,UObject *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,899,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// BeginBatchQuery @ 146d85190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::BeginBatchQuery(ANavigationData *this)

{
  return;
}

// CalcPathCost @ 146d85d40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
ANavigationData::CalcPathCost
          (ANavigationData *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3b9,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return Invalid;
}

// CalcPathLength @ 146d85da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
ANavigationData::CalcPathLength
          (ANavigationData *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3be,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return Invalid;
}

// CalcPathLengthAndCost @ 146d85e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
ANavigationData::CalcPathLengthAndCost
          (ANavigationData *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          double *param_4,TSharedPtr<FNavigationQueryFilter_const_,1> *param_5,UObject *param_6)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3c3,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return Invalid;
}

// CancelBuild @ 146d86ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::CancelBuild(ANavigationData *this)

{
  FNavDataGenerator *pFVar1;
  
  pFVar1 = (this->NavDataGenerator).Object;
  if (pFVar1 != (FNavDataGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146d86cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x18))();
    return;
  }
  return;
}

// CleanUp @ 146d86db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::CleanUp(ANavigationData *this)

{
  this->bRegistered = 0;
  return;
}

// CleanUpAndMarkPendingKill @ 146d87130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::CleanUpAndMarkPendingKill(ANavigationData *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  (**(code **)(this->_padding_ + 0x760))();
  if (UE::Navigation::Private::bDestroyNavDataInCleanUpAndMarkPendingKill != 0) {
    pUVar3 = AActor::GetWorld((AActor *)this);
    if ((pUVar3 != (UWorld *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
      AActor::Destroy((AActor *)this,false,true);
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x368))(this,1);
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (pUVar3 != (UWorld *)0x0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationData.cpp"
                         ,0x237,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UWorld::RemoveNetworkActor(pUVar3,(AActor *)this);
  }
  UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
                    /* WARNING: Could not recover jumptable at 0x000146d871ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5e8))(this,1);
  return;
}

// ConditionalConstructGenerator @ 146d88080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::ConditionalConstructGenerator(ANavigationData *this)

{
  return;
}

// ConstructRenderingComponent @ 146d88b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall ANavigationData::ConstructRenderingComponent(ANavigationData *this)

{
  return (UPrimitiveComponent *)0x0;
}

// Destroyed @ 146d90a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::Destroyed(ANavigationData *this)

{
  UnregisterAndCleanUp(this);
  AActor::Destroyed((AActor *)this);
  return;
}

// DoesNodeContainLocation @ 146d91770

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
ANavigationData::DoesNodeContainLocation
          (ANavigationData *this,ulong64 param_1,TVector<double> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3c7,L"Pure virtual not implemented (%s)");
  return false;
}

// DoesSupportAgent @ 146d91810

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
ANavigationData::DoesSupportAgent(ANavigationData *this,FNavAgentProperties *param_1)

{
  float fVar1;
  bool bVar2;
  
  if ((((float)((uint)(*(float *)((longlong)&(this->NavDataConfig)._padding_ + 4) -
                      param_1->AgentRadius) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        __real_40a00000) &&
      ((float)((uint)(*(float *)&(this->NavDataConfig)._padding_ - param_1->AgentHeight) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40a00000)) &&
     ((fVar1 = *(float *)((longlong)&(this->NavDataConfig)._padding_ + 4), fVar1 < 0.0 ||
      ((param_1->AgentStepHeight < 0.0 ||
       ((float)((uint)(fVar1 - param_1->AgentStepHeight) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        __real_40a00000)))))) {
    bVar2 = FNavAgentProperties::IsNavDataMatching
                      ((FNavAgentProperties *)&this->NavDataConfig,param_1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// DrawDebugPath @ 146d924f0

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
ANavigationData::DrawDebugPath
          (ANavigationData *this,FNavigationPath *param_1,FColor param_2,UCanvas *param_3,
          bool param_4,float param_5,uint param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000146d92509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x10))(param_1,this);
  return;
}

// EndPlay @ 146d92d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::EndPlay(ANavigationData *this,Type param_1)

{
  UnregisterAndCleanUp(this);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// EnsureBuildCompletion @ 146d92dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::EnsureBuildCompletion(ANavigationData *this)

{
  FNavDataGenerator *pFVar1;
  
  pFVar1 = (this->NavDataGenerator).Object;
  if (pFVar1 != (FNavDataGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146d92dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x10))();
    return;
  }
  return;
}

// FillConfig @ 146d94da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::FillConfig(ANavigationData *this,FNavDataConfig *param_1)

{
  FNavDataConfig::operator=(param_1,&this->NavDataConfig);
  return;
}

// FillNavigationDataChunkActor @ 146d95120

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
ANavigationData::FillNavigationDataChunkActor
          (ANavigationData *this,TBox<double> *param_1,ANavigationDataChunkActor *param_2,
          TBox<double> *param_3)

{
  return;
}

// FindMoveAlongSurface @ 146d95ab0

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
ANavigationData::FindMoveAlongSurface
          (ANavigationData *this,FNavLocation *param_1,TVector<double> *param_2,
          FNavLocation *param_3,TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,
          UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x389,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// FindOverlappingEdges @ 146d95c00

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
ANavigationData::FindOverlappingEdges
          (ANavigationData *this,FNavLocation *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x392,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// FinishBatchQuery @ 146d975a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::FinishBatchQuery(ANavigationData *this)

{
  return;
}

// GetAreaClass @ 146d997f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall ANavigationData::GetAreaClass(ANavigationData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UClass *pUVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->SupportedAreas).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->SupportedAreas).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UClass *)(*pcVar1)();
        return pUVar4;
      }
      if (*(int *)((this->SupportedAreas).AllocatorInstance.Data + lVar6 + 0x10) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->SupportedAreas).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pUVar4 = (UClass *)(*pcVar1)();
          return pUVar4;
        }
        return *(UClass **)
                ((this->SupportedAreas).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20 + 0x18)
        ;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((int)uVar5 < (this->SupportedAreas).ArrayNum);
  }
  return (UClass *)0x0;
}

// GetAreaID @ 146d99910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall ANavigationData::GetAreaID(ANavigationData *this,UClass *param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
           ::Find((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                   *)&this->AreaClassToIdMap,param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return -1;
}

// GetBounds @ 146d99f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBox<double> * __thiscall
ANavigationData::GetBounds(ANavigationData *this,TBox<double> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x30a,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->IsValid = '\0';
  return __return_storage_ptr__;
}

// GetMaxSupportedAreas @ 146d9c200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall ANavigationData::GetMaxSupportedAreas(ANavigationData *this)

{
  return 0x7fffffff;
}

// GetNavigableBounds @ 146d9d1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
ANavigationData::GetNavigableBounds
          (ANavigationData *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemBase *pUVar4;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar4 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    pUVar3 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146d9d23f;
  }
  pUVar4 = (UNavigationSystemBase *)0x0;
LAB_146d9d23f:
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    (**(code **)(*(longlong *)pUVar4 + 0x490))(pUVar4,this,__return_storage_ptr__,0);
  }
  return __return_storage_ptr__;
}

// GetNavigableBoundsInLevel @ 146d9d280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
ANavigationData::GetNavigableBoundsInLevel
          (ANavigationData *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ULevel *param_1)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemBase *pUVar4;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar4 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    pUVar3 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146d9d2e7;
  }
  pUVar4 = (UNavigationSystemBase *)0x0;
LAB_146d9d2e7:
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    (**(code **)(*(longlong *)pUVar4 + 0x490))(pUVar4,this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetNewAreaID @ 146d9e260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall ANavigationData::GetNewAreaID(ANavigationData *this,UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar4 = (this->SupportedAreas).ArrayNum;
  iVar6 = 0;
  if (iVar4 < 1) {
    return 0;
  }
  do {
    uVar5 = 0;
    if (iVar4 < 1) {
      return iVar6;
    }
    lVar7 = 0;
    while( true ) {
      uVar3 = 0;
      if ((int)uVar5 < (this->SupportedAreas).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = (this->SupportedAreas).ArrayNum;
      if (*(int *)((this->SupportedAreas).AllocatorInstance.Data + lVar7 + 0x10) == iVar6) break;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x20;
      if (iVar4 <= (int)uVar5) {
        return iVar6;
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar4 <= iVar6) {
      return iVar6;
    }
  } while( true );
}

// GetNextUniqueID @ 146d9e330

ushort __cdecl ANavigationData::GetNextUniqueID(void)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  
  LOCK();
  iVar2 = ::StaticID.Counter + 1;
  UNLOCK();
  uVar5 = ::StaticID.Counter + 1;
  ::StaticID.Counter = iVar2;
  if ((uVar5 != (uVar5 & 0xffff)) || ((int)uVar5 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return (ushort)uVar5;
}

// GetNumSuspendedDirtyAreas @ 146d9e4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall ANavigationData::GetNumSuspendedDirtyAreas(ANavigationData *this)

{
  return (this->SuspendedDirtyAreas).ArrayNum;
}

// GetPathSegmentBoundaryEdges @ 146d9fae0

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
ANavigationData::GetPathSegmentBoundaryEdges
          (ANavigationData *this,FNavigationPath *param_1,FNavPathPoint *param_2,
          FNavPathPoint *param_3,TArrayView<UE::Math::TVector<double>_const_,int> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,float param_6,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_7,UObject *param_8)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x39e,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return false;
}

// GetPrivateStaticClass @ 146d9fcd0

UClass * __cdecl ANavigationData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationData",
               &Z_Registration_Info_UClass_ANavigationData.InnerSingleton,
               StaticRegisterNativesANavigationData,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<ANavigationData>,
               InternalVTableHelperCtorCaller<ANavigationData>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationData.InnerSingleton;
}

// GetQueryFilter @ 146da1010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FNavigationQueryFilter_const_,1> * __thiscall
ANavigationData::GetQueryFilter
          (ANavigationData *this,TSharedPtr<FNavigationQueryFilter_const_,1> *__return_storage_ptr__
          ,TSubclassOf<UNavigationQueryFilter> param_1)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  UClass *pUVar5;
  TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_> *pTVar6;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar5 = UNavigationQueryFilter::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar5 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_146da106a;
      }
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_146da106a:
  pTVar6 = TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
                   *)&this->QueryFilters,pUVar5);
  if (pTVar6 == (TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FNavigationQueryFilter *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FNavigationQueryFilter **)&pTVar6->field_0x8;
    pTVar3 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// GetRandomPoint @ 146da1600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNavLocation * __thiscall
ANavigationData::GetRandomPoint
          (ANavigationData *this,FNavLocation *__return_storage_ptr__,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_1,UObject *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3a0,L"Pure virtual not implemented (%s)");
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  __return_storage_ptr__->NodeRef = 0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (double)uVar2;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRandomPointInNavigableRadius @ 146da1a60

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
ANavigationData::GetRandomPointInNavigableRadius
          (ANavigationData *this,TVector<double> *param_1,float param_2,FNavLocation *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3a6,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// GetRandomReachablePointInRadius @ 146da1db0

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
ANavigationData::GetRandomReachablePointInRadius
          (ANavigationData *this,TVector<double> *param_1,float param_2,FNavLocation *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3a3,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// GetWorldTimeStamp @ 146da32e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

double __thiscall ANavigationData::GetWorldTimeStamp(ANavigationData *this)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    return pUVar1->TimeSeconds;
  }
  return 0.0;
}

// InstantiateAndRegisterRenderingComponent @ 146da4200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::InstantiateAndRegisterRenderingComponent(ANavigationData *this)

{
  TObjectPtr<UPrimitiveComponent> *pTVar1;
  UPrimitiveComponent *pUVar2;
  UPrimitiveComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPrimitiveComponent *pUVar6;
  UWorld *pUVar7;
  
  bVar5 = IsThisNotNull(this,"ANavigationData::InstantiateAndRegisterRenderingComponent");
  if (bVar5) {
    if ((this == (ANavigationData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
       ((pUVar2 = (this->RenderingComp).field0_0x0.DebugPtr, pUVar2 == (UPrimitiveComponent *)0x0 ||
        ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) != 0)))) {
      pUVar2 = (UPrimitiveComponent *)this->_padding_;
      pUVar3 = (this->RenderingComp).field0_0x0.DebugPtr;
      if (pUVar3 != (UPrimitiveComponent *)0x0) {
        (**(code **)(*(longlong *)pUVar3 + 0x170))(pUVar3,0,0,0x74);
      }
      pUVar6 = (UPrimitiveComponent *)(**(code **)(this->_padding_ + 0x8e0))(this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      pTVar1 = &this->RenderingComp;
      (pTVar1->field0_0x0).DebugPtr = pUVar6;
      pUVar7 = AActor::GetWorld((AActor *)this);
      if (((pUVar7 != (UWorld *)0x0) && (pUVar7->bIsWorldInitialized != '\0')) &&
         ((pTVar1->field0_0x0).DebugPtr != (UPrimitiveComponent *)0x0)) {
        UActorComponent::RegisterComponent((UActorComponent *)(pTVar1->field0_0x0).DebugPtr);
      }
      if (pUVar3 == pUVar2) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((pTVar1->field0_0x0).DebugPtr != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)(pTVar1->field0_0x0).DebugPtr);
        }
        this->_padding_ = (longlong)*(UPrimitiveComponent **)&pTVar1->field0_0x0;
      }
    }
  }
  return;
}

// IsAreaAssigned @ 146da45b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ANavigationData::IsAreaAssigned(ANavigationData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->SupportedAreas).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->SupportedAreas).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(int *)((this->SupportedAreas).AllocatorInstance.Data + lVar6 + 0x10) == param_1) {
        return true;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((int)uVar5 < (this->SupportedAreas).ArrayNum);
  }
  return false;
}

// IsRebuildingSuspended @ 146da51a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ANavigationData::IsRebuildingSuspended(ANavigationData *this)

{
  return this->bRebuildingSuspended;
}

// LoadBeforeGeneratorRebuild @ 146da6330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::LoadBeforeGeneratorRebuild(ANavigationData *this)

{
  return;
}

// LogMemUsed @ 146da6340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall ANavigationData::LogMemUsed(ANavigationData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FNavDataGenerator *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  lpCriticalSection = &this->ActivePathsLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ActivePaths).ArrayMax;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  uVar5 = *(uint *)&(this->QueryFilters).field_0x48;
  lVar7 = 0;
  lVar8 = lVar7;
  if (1 < uVar5) {
    lVar8 = (longlong)(int)uVar5 << 2;
  }
  uVar5 = *(uint *)&(this->AreaClassToIdMap).field_0x48;
  if (1 < uVar5) {
    lVar7 = (longlong)(int)uVar5 << 2;
  }
  uVar6 = ((longlong)*(int *)&(this->QueryFilters).field_0xc +
          (longlong)(this->SupportedAreas).ArrayMax) * 0x20 +
          (ulonglong)((*(int *)&(this->QueryFilters).field_0x2c + 0x1fU >> 5) << 2) +
          (ulonglong)((*(int *)&(this->AreaClassToIdMap).field_0x2c + 0x1fU >> 5) << 2) +
          (longlong)*(int *)&(this->AreaClassToIdMap).field_0xc * 0x18 + lVar7 + lVar8 +
          (longlong)iVar1 * 0x10;
  if ((uVar6 != (uVar6 & 0xffffffff)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  if (FVisualLogger::bIsRecording != 0) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogNavigation.field_0x4,Display,
               L"%s: ANavigationData: %u\n    self: %d");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (3 < (byte)LogNavigation._0_1_) {
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = (this->NavDataGenerator).Object;
  if (pFVar2 != (FNavDataGenerator *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x58))();
  }
  return (uint)uVar6;
}

// NeedsRebuild @ 146da7ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ANavigationData::NeedsRebuild(ANavigationData *this)

{
  return false;
}

// OnNavAreaAdded @ 146da83c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::OnNavAreaAdded(ANavigationData *this,UClass *param_1,int param_2)

{
  int *piVar1;
  TArray<FSupportedAreaData,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  FSupportedAreaData *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UClass *pUVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  UClass *local_res10 [2];
  wchar_t *local_res20;
  FString local_188;
  FSupportedAreaData local_178;
  FString local_158;
  FString local_148;
  TPairInitializer<UClass_const_*_const_&,int_const_&> local_138;
  FScriptContainerElement *local_128;
  FName local_120;
  FName local_118;
  undefined8 local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  UClass **local_78;
  FScriptContainerElement *local_70;
  UClass **local_68;
  int *local_60;
  FString local_58;
  FString local_48;
  
  local_res10[0] = param_1;
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar3 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar11 = UNavArea::StaticClass();
  lVar14 = *(longlong *)&pUVar3->field_0x10;
  iVar10 = (int)pUVar11->_padding_;
  if (((*(int *)(lVar14 + 0x38) < iVar10) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar10 * 8) !=
       &pUVar11->_padding_)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1469,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar3 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  if (((pUVar3 == (UObject *)0x0) ||
      (cVar7 = (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3), cVar7 == '\0')) &&
     ((pUVar3 != (UObject *)0x0 &&
      (((uint)param_2 < 0x10 && ((*(uint *)&pUVar3[1].field_0x14 >> (param_2 & 0x1fU) & 1) != 0)))))
     ) {
    local_138._4_8_ = local_res10[0]->_padding_;
    ::FName::ToString((FName *)((longlong)&local_138.Key + 4),&local_188);
    uVar15 = 0;
    uVar12 = 0;
    iVar10 = 0;
    if (0 < (this->SupportedAreas).ArrayNum) {
      lVar14 = 0;
      do {
        uVar8 = uVar15;
        if ((int)uVar12 < (this->SupportedAreas).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
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
        pFVar13 = (this->SupportedAreas).AllocatorInstance.Data;
        iVar9 = *(int *)(pFVar13 + lVar14 + 8);
        if (iVar9 == local_188.Data.ArrayNum) {
          if (1 < iVar9) {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(pFVar13 + lVar14),
                               (wchar_t *)local_188.Data.AllocatorInstance.Data);
            bVar6 = iVar9 == 0;
            goto LAB_146da85c4;
          }
LAB_146da86ca:
          uVar8 = uVar15;
          if ((int)uVar12 < (this->SupportedAreas).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar11 = local_res10[0];
          local_128 = (this->SupportedAreas).AllocatorInstance.Data +
                      (longlong)(int)uVar12 * 0x20 + 0x18;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res10[0] != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_res10[0]);
          }
          *(UClass **)local_128 = pUVar11;
          uVar8 = uVar15;
          if ((int)uVar12 < (this->SupportedAreas).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_78 = local_res10;
          local_70 = (this->SupportedAreas).AllocatorInstance.Data +
                     (longlong)(int)uVar12 * 0x20 + 0x10;
          TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UClass_const_*_const_&,int_const_&>_>
                    ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                      *)&this->AreaClassToIdMap,
                     (TPairInitializer<UClass_const_*_const_&,int_const_&> *)&local_res20,
                     (bool *)&local_78);
          if (FVisualLogger::bIsRecording != 0) {
            uVar8 = uVar15;
            if ((int)uVar12 < (this->SupportedAreas).ArrayNum) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this,(FName *)&LogNavigation.field_0x4,Verbose,
                       L"%s: updated area %s with ID %d");
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          if ((byte)LogNavigation._0_1_ < 6) goto LAB_146da8d97;
          if ((int)uVar12 < (this->SupportedAreas).ArrayNum) {
            uVar15 = ~uVar12 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
          local_c8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          goto LAB_146da8bc2;
        }
        bVar6 = iVar9 + local_188.Data.ArrayNum == 1;
LAB_146da85c4:
        if (bVar6) goto LAB_146da86ca;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x20;
      } while ((int)uVar12 < (this->SupportedAreas).ArrayNum);
    }
    iVar9 = (**(code **)(this->_padding_ + 0x8d0))(this);
    if ((this->SupportedAreas).ArrayNum < iVar9) {
      local_110 = 0;
      FSupportedAreaData::FSupportedAreaData(&local_178,(TSubclassOf<UNavArea>)&local_110,-1);
      local_178.AreaClass.field0_0x0 = (TObjectPtr<UClass_const_>_u_0)local_res10[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res10[0]);
      }
      if (local_188.Data.ArrayNum != 0) {
        iVar10 = local_188.Data.ArrayNum + -1;
      }
      ::FString::AssignRange
                (&local_178.AreaClassName,(wchar_t *)local_188.Data.AllocatorInstance.Data,iVar10);
      local_178.AreaID = (**(code **)(this->_padding_ + 0x8e8))(this,local_res10[0]);
      pTVar2 = &this->SupportedAreas;
      pFVar4 = (FSupportedAreaData *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= &local_178) && (&local_178 < pFVar4 + (this->SupportedAreas).ArrayMax)) &&
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
      iVar10 = (this->SupportedAreas).ArrayNum;
      piVar1 = &(this->SupportedAreas).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SupportedAreas).ArrayNum = iVar10 + 1;
      pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x20;
      ::FString::FString((FString *)pFVar13,&local_178.AreaClassName);
      *(int *)(pFVar13 + 0x10) = local_178.AreaID;
      ((TObjectPtr<UClass_const_>_u_0 *)(pFVar13 + 0x18))->DebugPtr =
           (UClass *)local_178.AreaClass.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_178.AreaClass.field0_0x0.DebugPtr != (TObjectPtr<UClass_const_>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_178.AreaClass.field0_0x0);
      }
      local_68 = local_res10;
      local_60 = &local_178.AreaID;
      TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UClass_const_*_const_&,int_const_&>_>
                ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                  *)&this->AreaClassToIdMap,&local_138,(bool *)&local_68);
      if (FVisualLogger::bIsRecording != 0) {
        local_108 = (FName)this->_padding_;
        ::FName::ToString(&local_108,&local_b8);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogNavigation.field_0x4,Verbose,
                   L"%s registered area %s with ID %d");
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      local_c8.Data.AllocatorInstance.Data = local_178.AreaClassName.Data.AllocatorInstance.Data;
      if (5 < (byte)LogNavigation._0_1_) {
        local_100 = (FName)this->_padding_;
        ::FName::ToString(&local_100,&local_a8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        local_c8.Data.AllocatorInstance.Data = local_178.AreaClassName.Data.AllocatorInstance.Data;
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          local_c8.Data.AllocatorInstance.Data = local_178.AreaClassName.Data.AllocatorInstance.Data
          ;
        }
      }
    }
    else {
      if (FVisualLogger::bIsRecording != 0) {
        local_120 = (FName)this->_padding_;
        ::FName::ToString(&local_120,&local_d8);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogNavigation.field_0x4,Error,
                   L"%s can\'t support area %s - limit reached! (%d)");
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if ((byte)LogNavigation._0_1_ < 2) goto LAB_146da8d97;
      local_118 = (FName)this->_padding_;
      ::FName::ToString(&local_118,&local_c8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
LAB_146da8bc2:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      if (((pUVar3 == (UObject *)0x0) || (0xf < (uint)param_2)) ||
         (local_res20 = L"yes", (*(uint *)&pUVar3[1].field_0x14 >> (param_2 & 0x1fU) & 1) == 0)) {
        local_res20 = L"NO";
      }
      if (local_res10[0] == (UClass *)0x0) {
        ::FString::FString(&local_158,L"None");
      }
      else {
        local_f8 = (FName)local_res10[0]->_padding_;
        ::FName::ToString(&local_f8,&local_158);
      }
      local_f0 = (FName)this->_padding_;
      ::FName::ToString(&local_f0,&local_98);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogNavigation.field_0x4,Verbose,
                 L"%s discarded area %s (valid:%s meta:%s validAgent[%d]:%s)");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    if ((byte)LogNavigation._0_1_ < 6) {
      return;
    }
    if (((pUVar3 == (UObject *)0x0) || (0xf < (uint)param_2)) ||
       (local_res20 = L"yes", (*(uint *)&pUVar3[1].field_0x14 >> (param_2 & 0x1fU) & 1) == 0)) {
      local_res20 = L"NO";
    }
    if (local_res10[0] == (UClass *)0x0) {
      ::FString::FString(&local_148,L"None");
    }
    else {
      local_e8 = (FName)local_res10[0]->_padding_;
      ::FName::ToString(&local_e8,&local_148);
    }
    local_e0 = (FName)this->_padding_;
    ::FName::ToString(&local_e0,&local_88);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    local_188.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      local_188.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
    }
  }
LAB_146da8d97:
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// OnNavAreaChanged @ 146da8dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::OnNavAreaChanged(ANavigationData *this)

{
  return;
}

// OnNavAreaEvent @ 146da8de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::OnNavAreaEvent(ANavigationData *this,UClass *param_1,Type param_2)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemV1 *this_00;
  
  if (param_2 != Registered) {
    (**(code **)(this->_padding_ + 0x8c0))();
    goto LAB_146da8e66;
  }
  pUVar2 = AActor::GetWorld((AActor *)this);
  if ((pUVar2 == (UWorld *)0x0) ||
     (this_00 = (UNavigationSystemV1 *)(pUVar2->NavigationSystem).field0_0x0.DebugPtr,
     this_00 == (UNavigationSystemV1 *)0x0)) {
LAB_146da8e33:
    this_00 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar3 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146da8e33;
  }
  iVar1 = UNavigationSystemV1::GetSupportedAgentIndex(this_00,this);
  (**(code **)(this->_padding_ + 0x8b8))(this,param_1,iVar1);
LAB_146da8e66:
                    /* WARNING: Could not recover jumptable at 0x000146da8e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x8c8))(this);
  return;
}

// OnNavAreaRemoved @ 146da8ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::OnNavAreaRemoved(ANavigationData *this,UClass *param_1)

{
  int *piVar1;
  TArray<FSupportedAreaData,TSizedDefaultAllocator<32>_> *pTVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  longlong lVar9;
  uint uVar10;
  UClass *local_res8;
  
  uVar8 = 0;
  if (0 < (this->SupportedAreas).ArrayNum) {
    lVar9 = 0;
    pTVar2 = &this->SupportedAreas;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < (this->SupportedAreas).ArrayNum) {
        uVar7 = uVar10;
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
      pUVar3 = *(UClass **)((pTVar2->AllocatorInstance).Data + lVar9 + 0x18);
      if (pUVar3 == (UClass *)0x0) {
        bVar5 = param_1 == (UClass *)0x0;
      }
      else {
        bVar5 = pUVar3 == param_1;
      }
      if (bVar5) {
        local_res8 = param_1;
        if (*(int *)&(this->AreaClassToIdMap).field_0x8 !=
            *(int *)&(this->AreaClassToIdMap).field_0x34) {
          uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                  -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
          ::RemoveImpl<UClass_const_*>
                    ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                      *)&this->AreaClassToIdMap,uVar7 >> 0x10 ^ uVar7,&local_res8);
        }
        uVar7 = 0;
        if ((int)uVar8 < (this->SupportedAreas).ArrayNum) {
          uVar7 = uVar10;
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
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x20;
        if (*(void **)_Dst != (void *)0x0) {
          FMemory::Free(*(void **)_Dst);
        }
        iVar6 = (this->SupportedAreas).ArrayNum + ~uVar8;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + 0x20,(longlong)iVar6 << 5);
        }
        piVar1 = &(this->SupportedAreas).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&pTVar2->AllocatorInstance,(this->SupportedAreas).ArrayNum,
                   &(this->SupportedAreas).ArrayMax);
        return;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar8 < (this->SupportedAreas).ArrayNum);
  }
  return;
}

// OnNavigationBoundsChanged @ 146da93a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::OnNavigationBoundsChanged(ANavigationData *this)

{
  FNavDataGenerator *pFVar1;
  
  if ((this->NavDataGenerator).Object == (FNavDataGenerator *)0x0) {
    (**(code **)(this->_padding_ + 0x7e0))();
  }
  pFVar1 = (this->NavDataGenerator).Object;
  if (pFVar1 != (FNavDataGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146da93d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x28))();
    return;
  }
  return;
}

// OnRegistered @ 146da9d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::OnRegistered(ANavigationData *this)

{
  InstantiateAndRegisterRenderingComponent(this);
  this->bRegistered = 1;
                    /* WARNING: Could not recover jumptable at 0x000146da9d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7e0))(this);
  return;
}

// OnStreamingLevelAdded @ 146da9db0

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
ANavigationData::OnStreamingLevelAdded(ANavigationData *this,ULevel *param_1,UWorld *param_2)

{
  return;
}

// OnStreamingLevelRemoved @ 146da9dc0

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
ANavigationData::OnStreamingLevelRemoved(ANavigationData *this,ULevel *param_1,UWorld *param_2)

{
  return;
}

// OnStreamingNavDataAdded @ 146da9dd0

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
ANavigationData::OnStreamingNavDataAdded(ANavigationData *this,ANavigationDataChunkActor *param_1)

{
  return;
}

// OnStreamingNavDataRemoved @ 146da9de0

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
ANavigationData::OnStreamingNavDataRemoved(ANavigationData *this,ANavigationDataChunkActor *param_1)

{
  return;
}

// OnUnregistered @ 146da9df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::OnUnregistered(ANavigationData *this)

{
  this->bRegistered = 0;
  return;
}

// PostInitProperties @ 146dabb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::PostInitProperties(ANavigationData *this)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  UPrimitiveComponent *pUVar4;
  
  AActor::PostInitProperties((AActor *)this);
  if (this == (ANavigationData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    if ((this->_padding_ & 0x10) == 0) {
      bVar3 = FNavigationSystem::ShouldLoadNavigationOnClient(this);
      pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
      *pbVar1 = *pbVar1 & 0xf7;
      pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
      *pbVar1 = *pbVar1 | bVar3 << 3;
      RequestRegistration(this);
      pUVar4 = (UPrimitiveComponent *)(**(code **)(this->_padding_ + 0x8e0))(this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->RenderingComp).field0_0x0.DebugPtr = pUVar4;
    }
    else if (this->RuntimeGeneration == LegacyGeneration) {
      this->RuntimeGeneration = (ERuntimeGenerationType)(*(uint *)&this->field_0x358 >> 4) & Dynamic
      ;
      return;
    }
  }
  return;
}

// PostInitializeComponents @ 146dac0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::PostInitializeComponents(ANavigationData *this)

{
  int iVar1;
  ENetMode EVar2;
  UWorld *this_00;
  UClass *pUVar3;
  UNavigationSystemBase *pUVar4;
  FName local_res8;
  FString local_28;
  
  AActor::PostInitializeComponents((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  if ((this_00 != (UWorld *)0x0) &&
     (pUVar4 = (this_00->NavigationSystem).field0_0x0.DebugPtr,
     pUVar4 != (UNavigationSystemBase *)0x0)) {
    pUVar3 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146dac111;
  }
  pUVar4 = (UNavigationSystemBase *)0x0;
LAB_146dac111:
  if ((this->bAutoDestroyWhenNoNavigation != 0) &&
     (((this_00 == (UWorld *)0x0 ||
       ((EVar2 = UWorld::InternalGetNetMode(this_00), EVar2 != NM_Client &&
        (pUVar4 == (UNavigationSystemBase *)0x0)))) ||
      ((EVar2 = UWorld::InternalGetNetMode(this_00), EVar2 == NM_Client &&
       ((this->_padding_ & 0x800) == 0)))))) {
    if (FVisualLogger::bIsRecording != 0) {
      if (this_00 != (UWorld *)0x0) {
        UWorld::InternalGetNetMode(this_00);
      }
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogNavigation.field_0x4,Log,
                 L"Marking %s as PendingKill due to %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogNavigation._0_1_) {
      if (this_00 != (UWorld *)0x0) {
        UWorld::InternalGetNetMode(this_00);
      }
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x768))(this);
  }
  return;
}

// PostLoad @ 146dac2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::PostLoad(ANavigationData *this)

{
  byte *pbVar1;
  bool bVar2;
  
  AActor::PostLoad((AActor *)this);
  InstantiateAndRegisterRenderingComponent(this);
  bVar2 = FNavigationSystem::ShouldLoadNavigationOnClient(this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xf7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | bVar2 << 3;
  RequestRegistration(this);
  return;
}

// PostLoadPreRebuild @ 146dac3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::PostLoadPreRebuild(ANavigationData *this)

{
  return;
}

// ProcessNavAreas @ 146dac630

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
ANavigationData::ProcessNavAreas
          (ANavigationData *this,
          TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator> *param_1,
          int param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  uVar6 = 1;
  iVar11 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar13;
      iVar11 = iVar11 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146dac6dd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar11;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_146dac6dd:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  local_res18 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = local_res18;
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar13;
      uVar9 = uVar9 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146dac7e0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_146dac7e0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UClass_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x8b8))
              (this,*(undefined8 *)
                     (*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10),
               iVar3);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000146dac85b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x8c8))(this);
  return;
}

// ProjectPoint @ 146dacfb0

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
ANavigationData::ProjectPoint
          (ANavigationData *this,TVector<double> *param_1,FNavLocation *param_2,
          TVector<double> *param_3,TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,
          UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
             ,0x3ac,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// PurgeUnusedPaths @ 146dad360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::PurgeUnusedPaths(ANavigationData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationData.cpp"
                         ,0x1cd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = &this->ActivePathsLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = (this->ActivePaths).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (longlong)(int)uVar7 << 4;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->ActivePaths).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
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
      pFVar1 = (this->ActivePaths).AllocatorInstance.Data;
      if (((*(longlong *)(pFVar1 + lVar6) == 0) ||
          (lVar2 = *(longlong *)(pFVar1 + lVar6 + 8), lVar2 == 0)) || (*(int *)(lVar2 + 8) < 1)) {
        uVar5 = 0;
        if ((int)uVar7 < (this->ActivePaths).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->ActivePaths,uVar7);
      }
      lVar6 = lVar6 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146dad500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RebuildAll @ 146dad830

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

void __thiscall ANavigationData::RebuildAll(ANavigationData *this)

{
  FNavDataGenerator *pFVar1;
  FAssetCompilingManager *this_00;
  undefined1 auStack_188 [32];
  LARGE_INTEGER local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  QueryPerformanceCounter(local_168);
  (**(code **)(this->_padding_ + 0x7e8))(this);
  this_00 = FAssetCompilingManager::Get();
  FAssetCompilingManager::FinishAllCompilation(this_00);
  if (3 < (byte)LogNavigationDataBuild._0_1_) {
    QueryPerformanceCounter(local_168);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"ANavigationData::RebuildAll",0x1b,Yes);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  (**(code **)(this->_padding_ + 0x7f0))(this);
  (**(code **)(this->_padding_ + 0x7e0))(this);
  pFVar1 = (this->NavDataGenerator).Object;
  if (pFVar1 != (FNavDataGenerator *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 8))();
  }
  return;
}

// RebuildDirtyAreas @ 146daddc0

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
ANavigationData::RebuildDirtyAreas
          (ANavigationData *this,TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FNavDataGenerator *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *pTVar7;
  FName local_res8;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  if (this->bRebuildingSuspended == 0) {
    pFVar3 = (this->NavDataGenerator).Object;
    if (pFVar3 != (FNavDataGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146dadfcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pFVar3 + 0x30))();
      return;
    }
  }
  else if (this->bReachedSuspendedAreasMaxCount == 0) {
    piVar1 = &(this->SuspendedDirtyAreas).ArrayNum;
    if (UE::Navigation::Private::MaxDirtyAreasCountWhileSuspended < *piVar1 + param_1->ArrayNum) {
      if (FVisualLogger::bIsRecording != 0) {
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogNavigation.field_0x4,Display,
                   L"%s reached ai.navigation.MaxDirtyAreasCountWhileSuspended (%d). Ignoring dirty areas until rebuilding is unsuspended."
                  );
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (3 < (byte)LogNavigation._0_1_) {
        local_res18 = (FName)this->_padding_;
        ::FName::ToString(&local_res18,&local_28);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      this->bReachedSuspendedAreasMaxCount = 1;
      DestructItems<FNavigationDirtyArea,int>
                ((FNavigationDirtyArea *)(this->SuspendedDirtyAreas).AllocatorInstance.Data,
                 (this->SuspendedDirtyAreas).ArrayNum);
      piVar1 = &(this->SuspendedDirtyAreas).ArrayMax;
      (this->SuspendedDirtyAreas).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&(this->SuspendedDirtyAreas).AllocatorInstance,0,piVar1);
      }
    }
    else {
      pTVar7 = &this->SuspendedDirtyAreas;
      if ((pTVar7 == param_1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = param_1->ArrayNum;
      if (iVar2 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x50,8,iVar2,&pTVar7->AllocatorInstance,piVar1,
                           &(this->SuspendedDirtyAreas).ArrayMax);
        ConstructItems<FNavigationDirtyArea,FNavigationDirtyArea,int>
                  ((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 0x50,
                   (FNavigationDirtyArea *)(param_1->AllocatorInstance).Data,iVar2);
      }
    }
  }
  return;
}

// RegisterActivePath @ 146dae290

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
ANavigationData::RegisterActivePath(ANavigationData *this,TSharedPtr<FNavigationPath,1> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  FNavigationPath *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->ActivePathsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18 = param_1->Object;
  pTVar6 = &this->ActivePaths;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->ActivePaths).ArrayMax * 0x10)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->ActivePaths).ArrayNum;
  piVar1 = &(this->ActivePaths).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar6->AllocatorInstance,piVar1);
  }
  pFVar5 = (pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  (this->ActivePaths).ArrayNum = iVar4 + 1;
  *(FNavigationPath **)pFVar5 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_10;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveQueryFilter @ 146db63f0

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
ANavigationData::RemoveQueryFilter
          (ANavigationData *this,TSubclassOf<UNavigationQueryFilter> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  uint uVar5;
  UClass *local_res8;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = UNavigationQueryFilter::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_res8 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_146db6446;
      }
    }
  }
  local_res8 = (UClass *)0x0;
LAB_146db6446:
  if (*(int *)&(this->QueryFilters).field_0x8 != *(int *)&(this->QueryFilters).field_0x34) {
    uVar5 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UClass_const_*>
              ((TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
                *)&this->QueryFilters,uVar5 >> 0x10 ^ uVar5,&local_res8);
  }
  return;
}

// RequestRegistration @ 146db7670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::RequestRegistration(ANavigationData *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemBase *pUVar4;
  
  if (this->bRegistered != 0) {
    return;
  }
  if (((uint)this->_padding_ >> 4 & 1) != 0) {
    return;
  }
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    pUVar3 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146db76cc;
  }
  pUVar4 = (UNavigationSystemBase *)0x0;
LAB_146db76cc:
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    (**(code **)(*(longlong *)pUVar4 + 0x3c0))(pUVar4,this);
  }
  return;
}

// RestrictBuildingToActiveTiles @ 146db8430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::RestrictBuildingToActiveTiles(ANavigationData *this,bool param_1)

{
  return;
}

// SetConfig @ 146db88b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::SetConfig(ANavigationData *this,FNavDataConfig *param_1)

{
  FNavAgentProperties::operator=(&this->NavAgentProperties,(FNavAgentProperties *)param_1);
  FNavDataConfig::operator=(&this->NavDataConfig,param_1);
  return;
}

// SetNavRenderingEnabled @ 146db9020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::SetNavRenderingEnabled(ANavigationData *this,bool param_1)

{
  if (ZPULL(*(undefined4 *)&this->field_0x358,0,1) != (uint)param_1) {
    *(uint *)&this->field_0x358 = *(undefined4 *)&this->field_0x358 & 0xfffffffe | (uint)param_1;
    AActor::MarkComponentsRenderStateDirty((AActor *)this);
    return;
  }
  return;
}

// SetRebuildingSuspended @ 146db9670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::SetRebuildingSuspended(ANavigationData *this,bool param_1)

{
  int *piVar1;
  TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res8;
  FString local_38;
  
  if (ZPULL(*(undefined4 *)&this->field_0x4d8,2,1) != (uint)param_1) {
    *(uint *)&this->field_0x4d8 = *(undefined4 *)&this->field_0x4d8 & 0xfffffffb | (uint)param_1 * 4
    ;
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogNavigation.field_0x4,Verbose,L"%s nav generation %s");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogNavigation._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (!param_1) {
      if (this->bReachedSuspendedAreasMaxCount == 0) {
        pTVar2 = &this->SuspendedDirtyAreas;
        if (0 < (this->SuspendedDirtyAreas).ArrayNum) {
          if (FVisualLogger::bIsRecording != 0) {
            local_res8 = (FName)this->_padding_;
            ::FName::ToString(&local_res8,&local_38);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this,(FName *)&LogNavigation.field_0x4,Verbose,
                       L"%s resuming nav generation with %d dirty areas");
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          if (5 < (byte)LogNavigation._0_1_) {
            local_res8 = (FName)this->_padding_;
            ::FName::ToString(&local_res8,&local_38);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          (**(code **)(this->_padding_ + 0x818))(this,pTVar2);
          DestructItems<FNavigationDirtyArea,int>
                    ((FNavigationDirtyArea *)(pTVar2->AllocatorInstance).Data,
                     (this->SuspendedDirtyAreas).ArrayNum);
          piVar1 = &(this->SuspendedDirtyAreas).ArrayMax;
          (this->SuspendedDirtyAreas).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,0,&pTVar2->AllocatorInstance,0,piVar1);
          }
        }
      }
      else {
        if (FVisualLogger::bIsRecording != 0) {
          local_res8 = (FName)this->_padding_;
          ::FName::ToString(&local_res8,&local_38);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this,(FName *)&LogNavigation.field_0x4,Warning,
                     L"%s resuming nav generation after MaxDirtyAreasCountWhileSuspended was reached. This will rebuild the entire navigation data."
                    );
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        if (2 < (byte)LogNavigation._0_1_) {
          local_res8 = (FName)this->_padding_;
          ::FName::ToString(&local_res8,&local_38);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        this->bReachedSuspendedAreasMaxCount = 0;
        (**(code **)(this->_padding_ + 0x7f8))(this);
      }
    }
  }
  return;
}

// SetSupportsDefaultAgent @ 146db9c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::SetSupportsDefaultAgent(ANavigationData *this,bool param_1)

{
  this->bSupportsDefaultAgent = 0;
  *(uint *)&this->field_0x4d8 = *(uint *)&this->field_0x4d8 | (uint)param_1 + (uint)param_1;
  if (ZPULL(*(undefined4 *)&this->field_0x358,0,1) != (uint)param_1) {
    *(uint *)&this->field_0x358 = *(undefined4 *)&this->field_0x358 & 0xfffffffe | (uint)param_1;
    AActor::MarkComponentsRenderStateDirty((AActor *)this);
    return;
  }
  return;
}

// StaticRegisterNativesANavigationData @ 146dba8c0

void __cdecl ANavigationData::StaticRegisterNativesANavigationData(void)

{
  return;
}

// StoreQueryFilter @ 146dbaac0

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
ANavigationData::StoreQueryFilter
          (ANavigationData *this,TSubclassOf<UNavigationQueryFilter> param_1,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  TPairInitializer<UClass_*_&&,TSharedPtr<FNavigationQueryFilter_const_,1>_const_&> local_res8;
  TSharedPtr<FNavigationQueryFilter_const_,1> **local_28;
  TSharedPtr<FNavigationQueryFilter_const_,1> *local_20;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = UNavigationQueryFilter::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_res8.Value = *(TSharedPtr<FNavigationQueryFilter_const_,1> **)param_1.Class.field0_0x0
        ;
        goto LAB_146dbab12;
      }
    }
  }
  local_res8.Value = (TSharedPtr<FNavigationQueryFilter_const_,1> *)0x0;
LAB_146dbab12:
  local_28 = &local_res8.Value;
  local_20 = param_2;
  TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UClass_*_&&,TSharedPtr<FNavigationQueryFilter_const_,1>_const_&>_>
            ((TSet<TTuple<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSharedPtr<FNavigationQueryFilter_const_,1>,0>,FDefaultSetAllocator>
              *)&this->QueryFilters,&local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SupportsRuntimeGeneration @ 146dbaba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ANavigationData::SupportsRuntimeGeneration(ANavigationData *this)

{
  return false;
}

// SupportsStreaming @ 146dbabb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall ANavigationData::SupportsStreaming(ANavigationData *this)

{
  return false;
}

// TickActor @ 146dbc960

/* WARNING: Removing unreachable block (ram,0x000146dbceb3) */
/* WARNING: Removing unreachable block (ram,0x000146dbcec2) */
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
ANavigationData::TickActor
          (ANavigationData *this,float param_1,ELevelTick param_2,FActorTickFunction *param_3)

{
  int *piVar1;
  TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  FName FVar4;
  FNavigationPath *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  atomic<int> aVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  atomic<int> aVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Navigation_ObservedPathsCount> FVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  double *pdVar17;
  UWorld *pUVar18;
  UObject *pUVar19;
  UClass *pUVar20;
  longlong *plVar21;
  longlong lVar22;
  uint uVar23;
  FNavPathRecalculationRequest *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_> *this_03;
  uchar auVar29 [8];
  longlong lVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  FName local_1d8;
  longlong local_1d0;
  TReferenceControllerBase<1> *local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  FName local_1b0;
  FStatMessage local_1a8;
  TSharedRef<FNavigationPath,1> local_198;
  TSharedPtr<FNavigationPath,1> local_188;
  FPathFindingResult local_178;
  FName local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  FNavigationPath *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  undefined1 local_118 [176];
  undefined1 local_68 [40];
  double local_40;
  
  AActor::TickActor((AActor *)this,param_1,param_2,param_3);
  PurgeUnusedPaths(this);
  auVar29 = (uchar  [8])(longlong)(this->ObservedPaths).ArrayNum;
  if ((auVar29 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar16 = StatPtr_STAT_Navigation_ObservedPathsCount;
    if (StatPtr_STAT_Navigation_ObservedPathsCount ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_ObservedPathsCount>)0x0) {
      pFVar15 = ::FName::FName(&local_160,"STAT_Navigation_ObservedPathsCount");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_Navigation_ObservedPathsCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_ObservedPathsCount,
                          *pFVar15,L"Num observed nav paths","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar4 = *(FName *)FVar16;
    local_1d8 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_1a8.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_1b0 = FVar4;
      local_1a8.StatData.Pad = auVar29;
      local_1a8.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_1a8);
      FStatsTrace::Add(&local_1b0,(long64)auVar29);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if ((0.0 <= this->NextObservedPathsTickInSeconds) &&
     (fVar31 = this->NextObservedPathsTickInSeconds - param_1,
     this->NextObservedPathsTickInSeconds = fVar31, fVar31 <= 0.0)) {
    uVar28 = (this->ObservedPaths).ArrayNum;
    pTVar2 = &this->RepathRequests;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    if ((this->RepathRequests).ArrayMax < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar28,&pTVar2->AllocatorInstance,(this->RepathRequests).ArrayNum,
                 &(this->RepathRequests).ArrayMax);
    }
    uVar28 = (this->ObservedPaths).ArrayNum - 1;
    if (-1 < (int)uVar28) {
      local_1d8 = (FName)(longlong)(int)uVar28;
      this_03 = &this->ObservedPaths;
      lVar30 = (longlong)local_1d8 << 4;
      do {
        uVar23 = 0;
        if ((int)uVar28 < (this->ObservedPaths).ArrayNum) {
          uVar23 = ~uVar28 >> 0x1f;
        }
        local_1b8 = lVar30;
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar27 = (this_03->AllocatorInstance).Data;
        if (((*(longlong *)(pFVar27 + lVar30) == 0) ||
            (lVar26 = *(longlong *)(pFVar27 + lVar30 + 8), lVar26 == 0)) ||
           (*(int *)(lVar26 + 8) < 1)) {
          uVar23 = 0;
          if ((int)uVar28 < (this->ObservedPaths).ArrayNum) {
            uVar23 = ~uVar28 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (this_03,uVar28);
        }
        else {
          uVar23 = 0;
          if ((int)uVar28 < (this->ObservedPaths).ArrayNum) {
            uVar23 = ~uVar28 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar27 = (this_03->AllocatorInstance).Data;
          lVar26 = 0;
          pTVar25 = *(TReferenceControllerBase<1> **)(pFVar27 + lVar30 + 8);
          if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
            aVar8 = pTVar25->SharedReferenceCount;
            do {
              if (aVar8 == (atomic<int>)0x0) {
                pTVar25 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_146dbcc73;
              }
              LOCK();
              aVar14 = pTVar25->SharedReferenceCount;
              bVar10 = aVar8 == aVar14;
              if (bVar10) {
                pTVar25->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
                aVar14 = aVar8;
              }
              UNLOCK();
              aVar8 = aVar14;
            } while (!bVar10);
            lVar26 = *(longlong *)(pFVar27 + lVar30);
          }
LAB_146dbcc73:
          if (((*(uint *)(lVar26 + 0xa0) & 0x1000) == 0) ||
             (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar26 + 0x40)), !bVar10)) {
LAB_146dbcede:
            uVar23 = 0;
            if ((int)uVar28 < (this->ObservedPaths).ArrayNum) {
              uVar23 = ~uVar28 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (this_03,uVar28);
          }
          else {
            plVar21 = *(longlong **)(lVar26 + 0x48);
            if (plVar21 == (longlong *)0x0) {
              pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar26 + 0x40));
              lVar30 = *(longlong *)(pUVar19 + 0xb);
              local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uStack_154 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uStack_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uStack_14c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              if (lVar30 != 0) {
                local_140 = *(undefined4 *)(lVar30 + 0x210);
                uStack_13c = *(undefined4 *)(lVar30 + 0x214);
                uStack_138 = *(undefined4 *)(lVar30 + 0x218);
                uStack_134 = *(undefined4 *)(lVar30 + 0x21c);
                local_130 = *(double *)(lVar30 + 0x220);
                local_158 = *(undefined4 *)(lVar30 + 0x210);
                uStack_154 = *(undefined4 *)(lVar30 + 0x214);
                uStack_150 = *(undefined4 *)(lVar30 + 0x218);
                uStack_14c = *(undefined4 *)(lVar30 + 0x21c);
                local_148 = *(double *)(lVar30 + 0x220);
              }
              pdVar17 = (double *)&local_158;
            }
            else {
              pdVar17 = (double *)(**(code **)(*plVar21 + 0x18))(plVar21,local_68);
            }
            local_40 = pdVar17[2];
            dVar32 = *(double *)(lVar26 + 0x118) - *pdVar17;
            dVar7 = *(double *)(lVar26 + 0x128) - local_40;
            dVar33 = *(double *)(lVar26 + 0x120) - pdVar17[1];
            uVar23 = (uint)((double)*(float *)(lVar26 + 0x110) <
                           dVar33 * dVar33 + dVar32 * dVar32 + dVar7 * dVar7);
            if (uVar23 == 0xffffffff) goto LAB_146dbcede;
            if (uVar23 != 0) {
              if (uVar23 == 1) {
                if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar25->SharedReferenceCount =
                       (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
                  UNLOCK();
                  LOCK();
                  pTVar25->WeakReferenceCount = (atomic<int>)((int)pTVar25->WeakReferenceCount + 1);
                  UNLOCK();
                }
                local_1d0 = lVar26;
                local_1c8 = pTVar25;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar25);
                pFVar27 = (pTVar2->AllocatorInstance).Data;
                local_1c0 = 0;
                if (((pFVar27 <= (FScriptContainerElement *)&local_1d0) &&
                    ((FScriptContainerElement *)&local_1d0 <
                     pFVar27 + (longlong)(this->RepathRequests).ArrayMax * 0x18)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar13 = (this->RepathRequests).ArrayNum;
                if (iVar13 == (this->RepathRequests).ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&pTVar2->AllocatorInstance,
                                      &(this->RepathRequests).ArrayMax);
                }
                lVar30 = (longlong)iVar13;
                (this->RepathRequests).ArrayNum = iVar13 + 1;
                pFVar27 = (pTVar2->AllocatorInstance).Data;
                *(longlong *)(pFVar27 + lVar30 * 0x18) = local_1d0;
                *(TReferenceControllerBase<1> **)(pFVar27 + lVar30 * 0x18 + 8) = local_1c8;
                local_1c8 = (TReferenceControllerBase<1> *)0x0;
                local_1d0 = 0;
                *(undefined4 *)(pFVar27 + lVar30 * 0x18 + 0x10) = local_1c0;
              }
              else {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false && \"unhandled EPathObservationResult::Type in ANavigationData::TickActor\""
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationData.cpp"
                                    ,0x142,L"");
                if (bVar10) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
          lVar30 = local_1b8;
        }
        lVar30 = lVar30 + -0x10;
        local_1d8 = (FName)((longlong)local_1d8 + -1);
        uVar28 = uVar28 - 1;
        local_1b8 = lVar30;
      } while (-1 < (int)uVar28);
    }
    if (0 < (this->ObservedPaths).ArrayNum) {
      this->NextObservedPathsTickInSeconds = this->ObservedPathsTickInterval;
    }
  }
  if ((this->RepathRequests).ArrayNum < 1) {
    return;
  }
  pUVar18 = AActor::GetWorld((AActor *)this);
  if (pUVar18 == (UWorld *)0x0) {
    uVar34 = 0;
    uVar35 = 0;
  }
  else {
    uVar34 = SUB84(pUVar18->TimeSeconds,0);
    uVar35 = (undefined4)((ulonglong)pUVar18->TimeSeconds >> 0x20);
  }
  AActor::GetWorld((AActor *)this);
  pTVar2 = &this->RepathRequests;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  iVar13 = (this->RepathRequests).ArrayNum;
  pFVar24 = (FNavPathRecalculationRequest *)(pTVar2->AllocatorInstance).Data;
  local_1e0 = iVar13;
  if (iVar13 == 0) {
    local_1dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar13,0,&local_1e8,iVar13,&local_1dc);
    ConstructItems<FNavPathRecalculationRequest,FNavPathRecalculationRequest,int>
              (local_1e8.Data,pFVar24,iVar13);
  }
  if (local_1e0 < 0x3e9) {
    piVar1 = &(this->RepathRequests).ArrayMax;
    pFVar24 = (FNavPathRecalculationRequest *)(pTVar2->AllocatorInstance).Data;
    iVar13 = (this->RepathRequests).ArrayNum;
    if ((this->RepathRequests).ArrayMax < 0) {
      DestructItems<FNavPathRecalculationRequest,int>(pFVar24,iVar13);
      (this->RepathRequests).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FNavPathRecalculationRequest,int>(pFVar24,iVar13);
      (this->RepathRequests).ArrayNum = 0;
    }
    goto LAB_146dbd25f;
  }
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogNavigation.field_0x4,Error,
               L"Too many repath requests! (%d/%d)");
  }
  iVar13 = local_1e0 + -1000;
  if (iVar13 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x458,
                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                       );
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_146dbd0f1:
    pFVar24 = (FNavPathRecalculationRequest *)(local_1e8.Data + 24000);
    DestructItems<FNavPathRecalculationRequest,int>(pFVar24,iVar13);
    iVar12 = (local_1e0 - iVar13) + -1000;
    if (iVar12 != 0) {
      memmove(pFVar24,pFVar24 + iVar13,(longlong)iVar12 * 0x18);
    }
    local_1e0 = local_1e0 - iVar13;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&local_1e8,local_1e0,&local_1dc);
  }
  else if (iVar13 != 0) goto LAB_146dbd0f1;
  if (((this->RepathRequests).ArrayNum < 1000) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar24 = (FNavPathRecalculationRequest *)(this->RepathRequests).AllocatorInstance.Data;
  DestructItems<FNavPathRecalculationRequest,int>(pFVar24,1000);
  iVar13 = (this->RepathRequests).ArrayNum + -1000;
  if (iVar13 != 0) {
    memmove(pFVar24,pFVar24 + 1000,(longlong)iVar13 * 0x18);
  }
  iVar13 = (this->RepathRequests).ArrayNum + -1000;
  (this->RepathRequests).ArrayNum = iVar13;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->RepathRequests).AllocatorInstance,iVar13,
             &(this->RepathRequests).ArrayMax);
LAB_146dbd25f:
  uVar28 = 0;
  if (0 < local_1e0) {
    pTVar2 = &this->RepathRequests;
    lVar30 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar28 < local_1e0) {
        uVar23 = ~uVar28 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar27 = local_1e8.Data + lVar30;
      pTVar25 = *(TReferenceControllerBase<1> **)(pFVar27 + 8);
      if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
        aVar8 = pTVar25->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) {
            pTVar25 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146dbd2f2;
          }
          LOCK();
          aVar14 = pTVar25->SharedReferenceCount;
          bVar10 = aVar8 == aVar14;
          if (bVar10) {
            pTVar25->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar14 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar14;
        } while (!bVar10);
        this_00 = *(FNavigationPath **)pFVar27;
        if (this_00 != (FNavigationPath *)0x0) {
          pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->PathFindingQueryData);
          if (pUVar19 != (UObject *)0x0) {
            pUVar20 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
            plVar21 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar19,pUVar20)
            ;
            if ((plVar21 != (longlong *)0x0) &&
               (cVar11 = (**(code **)(*plVar21 + 0x40))(plVar21), cVar11 != '\0')) {
              pFVar5 = (pTVar2->AllocatorInstance).Data;
              if ((pFVar5 <= pFVar27) &&
                 ((pFVar27 < pFVar5 + (longlong)(this->RepathRequests).ArrayMax * 0x18 &&
                  (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)))) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar13 = (this->RepathRequests).ArrayNum;
              piVar1 = &(this->RepathRequests).ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&pTVar2->AllocatorInstance,piVar1);
              }
              pFVar5 = (pTVar2->AllocatorInstance).Data;
              (this->RepathRequests).ArrayNum = iVar13 + 1;
              lVar22 = (longlong)iVar13;
              *(undefined8 *)(pFVar5 + lVar22 * 0x18) = *(undefined8 *)pFVar27;
              lVar26 = *(longlong *)(pFVar27 + 8);
              *(longlong *)(pFVar5 + lVar22 * 0x18 + 8) = lVar26;
              if (lVar26 != 0) {
                LOCK();
                *(int *)(lVar26 + 0xc) = *(int *)(lVar26 + 0xc) + 1;
                UNLOCK();
              }
              *(undefined4 *)(pFVar5 + lVar22 * 0x18 + 0x10) = *(undefined4 *)(pFVar27 + 0x10);
              goto LAB_146dbd2f2;
            }
          }
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
          local_198.Object = this_00;
          local_198.SharedReferenceCount.ReferenceController = pTVar25;
          FPathFindingQuery::FPathFindingQuery
                    ((FPathFindingQuery *)local_118,&local_198,(ANavigationData *)0x0);
          uVar9 = local_118._104_8_;
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
          local_128 = (FNavigationPath *)local_118._96_8_;
          pTStack_120 = (TReferenceControllerBase<1> *)local_118._104_8_;
          local_118._96_8_ = this_00;
          local_118._104_8_ = pTVar25;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uVar9);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
          if ((this->FindPathImplementation ==
               (_func___cdecl_FPathFindingResult_FNavAgentProperties_ptr_FPathFindingQuery_ptr *)0x0
              ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("FindPathImplementation",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                                        ,0x337,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (*this->FindPathImplementation)
                    (&local_178,(FNavAgentProperties *)(local_118 + 0x70),
                     (FPathFindingQuery *)local_118);
          this_00->LastUpdateTimeStamp = (double)CONCAT44(uVar35,uVar34);
          if ((local_178.Result == Success) ||
             (((local_178.Result != Error && (local_178.Path.Object != (FNavigationPath *)0x0)) &&
              ((local_178.Path.Object)->bIsPartial != 0)))) {
            FNavigationPath::UpdateLastRepathGoalLocation(this_00);
            uVar23 = *(uint *)(pFVar27 + 0x10);
            this_00->bUpToDate = 1;
            this_00->bWaitingForRepath = 0;
            if (this_00->bUseOnPathUpdatedNotify != 0) {
              (**(code **)(this_00->_padding_ + 0x78))(this_00,uVar23);
            }
            TMulticastDelegate<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
            ::Broadcast(&this_00->ObserverDelegate,this_00,
                        *(Type *)((longlong)
                                  &`public:_void___cdecl_FNavigationPath::DoneUpdating(ENavPathUpdateType::Type)___ptr64'
                                   ::__l2::PathUpdateTypeToPathEvent +
                                 (ulonglong)(uVar23 & 0xff) * 4));
            if (*(int *)(pFVar27 + 0x10) == 1) {
              LOCK();
              pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
              UNLOCK();
              local_188.Object = this_00;
              local_188.SharedReferenceCount.ReferenceController = pTVar25;
              RegisterActivePath(this,&local_188);
            }
          }
          else {
            TMulticastDelegate<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
            ::Broadcast(&this_00->ObserverDelegate,this_00,RePathFailed);
            this_00->bWaitingForRepath = 0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_178.Path.SharedReferenceCount.ReferenceController);
          if ((void *)local_118._152_8_ != (void *)0x0) {
            FMemory::Free((void *)local_118._152_8_);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_118._104_8_);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_118._64_8_);
        }
      }
LAB_146dbd2f2:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      uVar28 = uVar28 + 1;
      lVar30 = lVar30 + 0x18;
    } while ((int)uVar28 < local_1e0);
  }
  DestructItems<FNavPathRecalculationRequest,int>
            ((FNavPathRecalculationRequest *)local_1e8.Data,local_1e0);
  if ((FNavPathRecalculationRequest *)local_1e8.Data != (FNavPathRecalculationRequest *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  return;
}

// TickAsyncBuild @ 146dbd600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::TickAsyncBuild(ANavigationData *this,float param_1)

{
  FNavDataGenerator *pFVar1;
  
  pFVar1 = (this->NavDataGenerator).Object;
  if (pFVar1 != (FNavDataGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146dbd60f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x20))();
    return;
  }
  return;
}

// UnregisterAndCleanUp @ 146dbeb10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationData::UnregisterAndCleanUp(ANavigationData *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemBase *pUVar4;
  
  if (ZPULL(*(undefined4 *)&this->field_0x4d8,0,1) == 0) goto LAB_146dbeb85;
  *(uint *)&this->field_0x4d8 = *(undefined4 *)&this->field_0x4d8 & 0xfffffffe;
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) goto LAB_146dbeb85;
  pUVar4 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar4 == (UNavigationSystemBase *)0x0) {
LAB_146dbeb6a:
    pUVar4 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar3 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146dbeb6a;
  }
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    (**(code **)(*(longlong *)pUVar4 + 0x3b0))(pUVar4,this);
  }
LAB_146dbeb85:
                    /* WARNING: Could not recover jumptable at 0x000146dbeb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))(this);
  return;
}

// UpdateCustomLink @ 146dc1280

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
ANavigationData::UpdateCustomLink(ANavigationData *this,INavLinkCustomInterface *param_1)

{
  return;
}

// _getUObject @ 146dc5700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall ANavigationData::_getUObject(ANavigationData *this)

{
  return (UObject *)&this[-1]._padding_;
}

// CreatePathInstance<FNavMeshPath> @ 146dcc920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FNavigationPath,1> * __thiscall
ANavigationData::CreatePathInstance<FNavMeshPath>
          (ANavigationData *this,TSharedPtr<FNavigationPath,1> *__return_storage_ptr__,
          FPathFindingQueryData *param_1)

{
  FNavigationPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNavMeshPath *this_00;
  TSharedPtr<FNavigationPath,1> *pTVar4;
  double dVar5;
  FWeakObjectPtr local_res8;
  TRawPtrProxy<FNavMeshPath> local_res10;
  ANavigationData *local_res20;
  TSharedPtr<FNavigationPath,1> local_28;
  
  this_00 = ::operator_new(0x188);
  if (this_00 == (FNavMeshPath *)0x0) {
    local_res10.Object = (FNavMeshPath *)0x0;
  }
  else {
    local_res10.Object = FNavMeshPath::FNavMeshPath(this_00);
    if ((((local_res10.Object != (FNavMeshPath *)0x0) && ((local_res10.Object)->_padding_ != 0)) &&
        ((local_res10.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res10.Object)->_padding_ + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FNavigationPath,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  TSharedPtr<FNavigationPath,1>::TSharedPtr<FNavigationPath,1><FNavMeshPath>
            (__return_storage_ptr__,&local_res10);
  if (__return_storage_ptr__->Object == (FNavigationPath *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FNavigationPath,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = __return_storage_ptr__->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  (pFVar1->NavigationDataUsed).WeakPtr = local_res8;
  if (__return_storage_ptr__->Object == (FNavigationPath *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FNavigationPath,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FPathFindingQueryData::operator=(&__return_storage_ptr__->Object->PathFindingQueryData,param_1);
  if (__return_storage_ptr__->Object == (FNavigationPath *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FNavigationPath,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = __return_storage_ptr__->Object;
  dVar5 = GetWorldTimeStamp(this);
  pFVar1->LastUpdateTimeStamp = dVar5;
  local_28.Object = __return_storage_ptr__->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RegisterActivePath(this,&local_28);
  return __return_storage_ptr__;
}

// GetDefaultQueryFilterImpl @ 146e024a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

INavigationQueryFilterInterface * __thiscall
ANavigationData::GetDefaultQueryFilterImpl(ANavigationData *this)

{
  code *pcVar1;
  bool bVar2;
  INavigationQueryFilterInterface *pIVar3;
  
  if ((this->DefaultQueryFilter).Object != (FNavigationQueryFilter *)0x0) {
    return (((this->DefaultQueryFilter).Object)->QueryFilterImpl).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (INavigationQueryFilterInterface *)(*pcVar1)();
    return pIVar3;
  }
  return (((this->DefaultQueryFilter).Object)->QueryFilterImpl).Object;
}

