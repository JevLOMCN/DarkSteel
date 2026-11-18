// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 348

// Type'' @ 1410b5ba0

void __cdecl `dynamic_initializer_for_'FNavMeshPath::Type__(void)

{
  FNavPathType::NextUniqueId = FNavPathType::NextUniqueId + 1;
  FNavMeshPath::Type.Id = FNavPathType::NextUniqueId;
  return;
}

// `dynamic_initializer_for_'CmdNavMeshDrawDistance'' @ 1410b5bc0

void __cdecl _dynamic_initializer_for__CmdNavMeshDrawDistance__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"ai.debug.nav.DrawDistance",
                      L"Sets the culling distance used by the navmesh rendering for lines and labels."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdNavMeshDrawDistance,pIVar5);
  CmdNavMeshDrawDistance._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CmdNavMeshDrawDistance__);
  return;
}

// `dynamic_initializer_for_'DebugTimeSliceDefaultSectionName'' @ 1410b5d50

void __cdecl FNavigationSystem::_dynamic_initializer_for__DebugTimeSliceDefaultSectionName__(void)

{
  ::FName::FName(&DebugTimeSliceDefaultSectionName,L"DefaultSection");
  return;
}

// `dynamic_initializer_for_'FilterOutAreasImpl'' @ 1410b5d70

void __cdecl ERecastNamedFilter::_dynamic_initializer_for__FilterOutAreasImpl__(void)

{
  dtQueryFilterData::dtQueryFilterData((dtQueryFilterData *)&FilterOutAreasImpl.field_0x10);
  if (__real_47efffffe0000000 <= (double)FilterOutAreasImpl._1048_8_) {
    FilterOutAreasImpl._1048_8_ = __real_47efffffe0000000;
  }
  FilterOutAreasImpl._0_8_ = &FRecastQueryFilter::_vftable__for__INavigationQueryFilterInterface__;
  FilterOutAreasImpl._16_8_ = __real_47efffffe0000000;
  FilterOutAreasImpl._1064_1_ = 1;
  FilterOutAreasImpl._8_8_ = &FRecastQueryFilter::_vftable__for__dtQueryFilter__;
  atexit(_dynamic_atexit_destructor_for__FilterOutAreasImpl__);
  return;
}

// `dynamic_initializer_for_'FilterOutNavLinksAndAreasImpl'' @ 1410b5de0

void __cdecl ERecastNamedFilter::_dynamic_initializer_for__FilterOutNavLinksAndAreasImpl__(void)

{
  dtQueryFilterData::dtQueryFilterData
            ((dtQueryFilterData *)&FilterOutNavLinksAndAreasImpl.field_0x10);
  if (__real_47efffffe0000000 <= (double)FilterOutNavLinksAndAreasImpl._1048_8_) {
    FilterOutNavLinksAndAreasImpl._1048_8_ = __real_47efffffe0000000;
  }
  FilterOutNavLinksAndAreasImpl._0_8_ =
       &FRecastQueryFilter::_vftable__for__INavigationQueryFilterInterface__;
  FilterOutNavLinksAndAreasImpl._16_8_ = __real_47efffffe0000000;
  FilterOutNavLinksAndAreasImpl._1064_1_ = 1;
  FilterOutNavLinksAndAreasImpl._8_8_ = &FRecastQueryFilter::_vftable__for__dtQueryFilter__;
  atexit(_dynamic_atexit_destructor_for__FilterOutNavLinksAndAreasImpl__);
  return;
}

// `dynamic_initializer_for_'FilterOutNavLinksImpl'' @ 1410b5e50

void __cdecl ERecastNamedFilter::_dynamic_initializer_for__FilterOutNavLinksImpl__(void)

{
  dtQueryFilterData::dtQueryFilterData((dtQueryFilterData *)&FilterOutNavLinksImpl.field_0x10);
  if (__real_47efffffe0000000 <= (double)FilterOutNavLinksImpl._1048_8_) {
    FilterOutNavLinksImpl._1048_8_ = __real_47efffffe0000000;
  }
  FilterOutNavLinksImpl._0_8_ =
       &FRecastQueryFilter::_vftable__for__INavigationQueryFilterInterface__;
  FilterOutNavLinksImpl._16_8_ = __real_47efffffe0000000;
  FilterOutNavLinksImpl._1064_1_ = 1;
  FilterOutNavLinksImpl._8_8_ = &FRecastQueryFilter::_vftable__for__dtQueryFilter__;
  atexit(_dynamic_atexit_destructor_for__FilterOutNavLinksImpl__);
  return;
}

// `dynamic_initializer_for_'LogNavSysModule'' @ 1410b5ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavSysModule__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNavSysModule,L"LogNavSysModule",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNavSysModule__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNavigationSystem'' @ 1410b5f00

void __cdecl _dynamic_initializer_for__ModuleRegistrantNavigationSystem__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NavigationSystem";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NavigationSystem",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNavigationSystemModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'NavLinkProcessor'' @ 1410b5f50

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl NavigationHelper::_dynamic_initializer_for__NavLinkProcessor__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavLinkProcessor,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x1551c0858;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&NavLinkProcessor.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = DefaultNavLinkProcessorImpl;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  atexit(_dynamic_atexit_destructor_for__NavLinkProcessor__);
  return;
}

// `dynamic_initializer_for_'NavLinkSegmentProcessor'' @ 1410b5fe0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl NavigationHelper::_dynamic_initializer_for__NavLinkSegmentProcessor__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavLinkSegmentProcessor,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x1551c0870;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&NavLinkSegmentProcessor.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationSegmentLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAUFCompositeNavModifier__AEBUFNavLinkOwnerData_NavigationHelper__AEBV__TArray_UFNavigationSegmentLink__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = DefaultNavLinkSegmentProcessorImpl;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  atexit(_dynamic_atexit_destructor_for__NavLinkSegmentProcessor__);
  return;
}

// `dynamic_initializer_for_'NavMeshRenderColor_PolyForbidden'' @ 1410b6070

void __cdecl _dynamic_initializer_for__NavMeshRenderColor_PolyForbidden__(void)

{
  NavMeshRenderColor_PolyForbidden = FColorList::Black;
  return;
}

// `dynamic_initializer_for_'RecastSetup'' @ 1410b6090

void __cdecl _dynamic_initializer_for__RecastSetup__(void)

{
  dtAllocSetCustom(DetourMalloc,DetourFree);
  rcAllocSetCustom(RecastMalloc,RecastFree);
  dtStatsSetCustom(DetourStatsPostAddTile,DetourStatsPreRemoveTile);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1410b60e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1410b6170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1410b6200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1410b6290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1410b6320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1410b63b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1410b6440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1410b64d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1410b6560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1410b65f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h__Script_NavigationSystem_1315899694'' @ 1410b6680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h__Script_NavigationSystem_1315899694__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h__Script_NavigationSystem_1963865455'' @ 1410b66c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h__Script_NavigationSystem_1963865455__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h__Script_NavigationSystem_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h__Script_NavigationSystem_3965964833'' @ 1410b6710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h__Script_NavigationSystem_3965964833__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h__Script_NavigationSystem_2809439582'' @ 1410b6750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h__Script_NavigationSystem_2809439582__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h__Script_NavigationSystem_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h__Script_NavigationSystem_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h__Script_NavigationSystem_2845923918'' @ 1410b67a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h__Script_NavigationSystem_2845923918__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h__Script_NavigationSystem_3541681782'' @ 1410b67e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h__Script_NavigationSystem_3541681782__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h__Script_NavigationSystem_467386605'' @ 1410b6820

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h__Script_NavigationSystem_467386605__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h__Script_NavigationSystem_4152723478'' @ 1410b6860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h__Script_NavigationSystem_4152723478__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h__Script_NavigationSystem_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h__Script_NavigationSystem_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h__Script_NavigationSystem_4280152764'' @ 1410b68b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h__Script_NavigationSystem_4280152764__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h__Script_NavigationSystem_Statics
             ::EnumInfo,1);
  return;
}

// `scalar_deleting_destructor' @ 146dc8b60

void * __thiscall
FRecastQueryFilter::_scalar_deleting_destructor_(FRecastQueryFilter *this,uint param_1)

{
  *(undefined ***)&this->field_0x8 = &___7dtQueryFilter__6B_;
  *(undefined ***)this = &___7INavigationQueryFilterInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x430);
  }
  return this;
}

// Z_Construct_UClass_UNavMeshRenderingComponent @ 146dc8ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavMeshRenderingComponent(void)

{
  if (Z_Registration_Info_UClass_UNavMeshRenderingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavMeshRenderingComponent.OuterSingleton,
               &Z_Construct_UClass_UNavMeshRenderingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavMeshRenderingComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146dc8dc0

void * __thiscall
FNavLinkCustomInstanceData::_scalar_deleting_destructor_
          (FNavLinkCustomInstanceData *this,uint param_1)

{
  FInstanceCacheDataBase::~FInstanceCacheDataBase((FInstanceCacheDataBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146dc8e00

void * __thiscall INavSysModule::_scalar_deleting_destructor_(INavSysModule *this,uint param_1)

{
  *this = (INavSysModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UNavLinkCustomComponent @ 146dc8e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavLinkCustomComponent(void)

{
  if (Z_Registration_Info_UClass_UNavLinkCustomComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavLinkCustomComponent.OuterSingleton,
               &Z_Construct_UClass_UNavLinkCustomComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavLinkCustomComponent.OuterSingleton;
}

// NewProp_bLinkEnabled_SetBit @ 146dc8eb0

void __cdecl
Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x17c) = *(uint *)((longlong)param_1 + 0x17c) | 1;
  return;
}

// NewProp_bNotifyWhenEnabled_SetBit @ 146dc8f30

void __cdecl
Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x17c) = *(uint *)((longlong)param_1 + 0x17c) | 2;
  return;
}

// NewProp_bNotifyWhenDisabled_SetBit @ 146dc8f40

void __cdecl
Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x17c) = *(uint *)((longlong)param_1 + 0x17c) | 4;
  return;
}

// NewProp_bCreateBoxObstacle_SetBit @ 146dc8f50

void __cdecl
Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x17c) = *(uint *)((longlong)param_1 + 0x17c) | 8;
  return;
}

// NewStructOps @ 146dc9090

void * __cdecl Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavLinkCustomInstanceData,&UE::CoreUObject::Private::Construct<FNavLinkCustomInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FNavLinkCustomInstanceData>,&UE::CoreUObject::Private::Destruct<FNavLinkCustomInstanceData>,&UE::CoreUObject::Private::Copy<FNavLinkCustomInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ANavigationTestingActor_NoRegister @ 146dc92c0

UClass * __cdecl Z_Construct_UClass_ANavigationTestingActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationTestingActor",
               &Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton,
               ANavigationTestingActor::StaticRegisterNativesANavigationTestingActor,0x420,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavigationTestingActor>,
               InternalVTableHelperCtorCaller<ANavigationTestingActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton;
}

// `scalar_deleting_destructor' @ 146dc9790

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_ARecastNavMesh @ 146dc9930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ARecastNavMesh(void)

{
  if (Z_Registration_Info_UClass_ARecastNavMesh.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ARecastNavMesh.OuterSingleton,
               &Z_Construct_UClass_ARecastNavMesh_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ARecastNavMesh.OuterSingleton;
}

// Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode @ 146dc9970

UEnum * __cdecl Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode(void)

{
  if (Z_Registration_Info_UEnum_EHeightFieldRenderMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHeightFieldRenderMode.InnerSingleton,
               &Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHeightFieldRenderMode.InnerSingleton;
}

// Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode @ 146dc99b0

UEnum * __cdecl Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode(void)

{
  if (Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.InnerSingleton,
               &Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.InnerSingleton;
}

// Z_Construct_UEnum_NavigationSystem_ERecastPartitioning @ 146dc99f0

UEnum * __cdecl Z_Construct_UEnum_NavigationSystem_ERecastPartitioning(void)

{
  if (Z_Registration_Info_UEnum_ERecastPartitioning.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERecastPartitioning.InnerSingleton,
               &Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERecastPartitioning.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNavMeshResolutionParam @ 146dc9a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavMeshResolutionParam(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavMeshResolutionParam.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavMeshResolutionParam.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavMeshResolutionParam.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavMeshResolutionParam.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug @ 146dc9ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRecastNavMeshTileGenerationDebug.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRecastNavMeshTileGenerationDebug.InnerSingleton,
               &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRecastNavMeshTileGenerationDebug.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRecastNavMeshTileGenerationDebug.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ERecastPartitioning_StaticEnum @ 146dc9b30

UEnum * __cdecl ERecastPartitioning_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERecastPartitioning,(UObject *)pUVar1,
                       L"ERecastPartitioning");
  }
  return Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton;
}

// ENavigationLedgeSlopeFilterMode_StaticEnum @ 146dc9b70

UEnum * __cdecl ENavigationLedgeSlopeFilterMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode,
                       (UObject *)pUVar1,L"ENavigationLedgeSlopeFilterMode");
  }
  return Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton;
}

// EHeightFieldRenderMode_StaticEnum @ 146dc9bb0

UEnum * __cdecl EHeightFieldRenderMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode,(UObject *)pUVar1,
                       L"EHeightFieldRenderMode");
  }
  return Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 146dc9bf0

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bGenerateDebugTileOnly_SetBit @ 146dc9c00

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bGenerateDebugTileOnly_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 1;
  return;
}

// NewProp_bCollisionGeometry_SetBit @ 146dc9c10

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bCollisionGeometry_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 2;
  return;
}

// NewProp_bHeightfieldFromRasterization_SetBit @ 146dc9c20

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bHeightfieldFromRasterization_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 1;
  return;
}

// NewProp_bHeightfieldPostInclusionBoundsFiltering_SetBit @ 146dc9c30

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bHeightfieldPostInclusionBoundsFiltering_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 2;
  return;
}

// NewProp_bHeightfieldPostHeightFiltering_SetBit @ 146dc9c40

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bHeightfieldPostHeightFiltering_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 4;
  return;
}

// NewProp_bHeightfieldBounds_SetBit @ 146dc9c50

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bHeightfieldBounds_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 8;
  return;
}

// NewProp_bCompactHeightfield_SetBit @ 146dc9c60

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bCompactHeightfield_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x10;
  return;
}

// NewProp_bCompactHeightfieldEroded_SetBit @ 146dc9c70

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bCompactHeightfieldEroded_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x20;
  return;
}

// NewProp_bHeightFieldLayers_SetBit @ 146dc9c80

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bHeightFieldLayers_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x40;
  return;
}

// NewProp_bCompactHeightfieldRegions_SetBit @ 146dc9c90

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bCompactHeightfieldRegions_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x80;
  return;
}

// NewProp_bCompactHeightfieldDistances_SetBit @ 146dc9ca0

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bCompactHeightfieldDistances_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x100;
  return;
}

// NewProp_bTileCacheLayerAreas_SetBit @ 146dc9cb0

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bTileCacheLayerAreas_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x200;
  return;
}

// NewProp_bTileCacheLayerRegions_SetBit @ 146dc9cc0

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bTileCacheLayerRegions_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x400;
  return;
}

// NewProp_bSkipContourSimplification_SetBit @ 146dc9cd0

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bSkipContourSimplification_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x800;
  return;
}

// NewProp_bTileCacheContours_SetBit @ 146dc9ce0

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bTileCacheContours_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x1000;
  return;
}

// NewProp_bTileCachePolyMesh_SetBit @ 146dc9cf0

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bTileCachePolyMesh_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x2000;
  return;
}

// NewProp_bTileCacheDetailMesh_SetBit @ 146dc9d00

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bTileCacheDetailMesh_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x4000;
  return;
}

// NewProp_bUseMaxTileCoordinate_SetBit @ 146dc9d10

void __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::
NewProp_bUseMaxTileCoordinate_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x8000;
  return;
}

// NewStructOps @ 146dc9d20

void * __cdecl
Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRecastNavMeshTileGenerationDebug,&UE::CoreUObject::Private::Construct<FRecastNavMeshTileGenerationDebug>,&UE::CoreUObject::Private::ConstructForTests<FRecastNavMeshTileGenerationDebug>,&UE::CoreUObject::Private::Destruct<FRecastNavMeshTileGenerationDebug>,&UE::CoreUObject::Private::Copy<FRecastNavMeshTileGenerationDebug>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ANavigationTestingActor @ 146dc9d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANavigationTestingActor(void)

{
  if (Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton,
               &Z_Construct_UClass_ANavigationTestingActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton;
}

// Z_Construct_UEnum_NavigationSystem_ENavCostDisplay @ 146dc9da0

UEnum * __cdecl Z_Construct_UEnum_NavigationSystem_ENavCostDisplay(void)

{
  if (Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton,
               &Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton;
}

// ENavCostDisplay_StaticEnum @ 146dc9de0

UEnum * __cdecl ENavCostDisplay_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay,(UObject *)pUVar1,
                       L"ENavCostDisplay");
  }
  return Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton;
}

// NewProp_bActAsNavigationInvoker_SetBit @ 146dc9e20

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2e0) = *(uint *)((longlong)param_1 + 0x2e0) | 1;
  return;
}

// NewProp_bProjectedLocationValid_SetBit @ 146dc9e30

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x358) = *(uint *)((longlong)param_1 + 0x358) | 1;
  return;
}

// NewProp_bSearchStart_SetBit @ 146dc9e40

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x358) = *(uint *)((longlong)param_1 + 0x358) | 2;
  return;
}

// NewProp_bBacktracking_SetBit @ 146dc9e50

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 1;
  return;
}

// NewProp_bUseHierarchicalPathfinding_SetBit @ 146dc9e60

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 2;
  return;
}

// NewProp_bGatherDetailedInfo_SetBit @ 146dc9e70

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 4;
  return;
}

// NewProp_bRequireNavigableEndLocation_SetBit @ 146dc9e80

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 8;
  return;
}

// NewProp_bDrawDistanceToWall_SetBit @ 146dc9e90

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 0x10;
  return;
}

// NewProp_bDrawIfNavDataIsReadyInRadius_SetBit @ 146dc9ea0

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawIfNavDataIsReadyInRadius_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 0x20;
  return;
}

// NewProp_bDrawIfNavDataIsReadyToQueryTargetActor_SetBit @ 146dc9eb0

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::
NewProp_bDrawIfNavDataIsReadyToQueryTargetActor_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 0x40;
  return;
}

// NewProp_bDrawRaycastToQueryTargetActor_SetBit @ 146dc9ec0

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawRaycastToQueryTargetActor_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 0x80;
  return;
}

// NewProp_bShowNodePool_SetBit @ 146dc9ee0

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x370) = *(uint *)((longlong)param_1 + 0x370) | 1;
  return;
}

// NewProp_bShowBestPath_SetBit @ 146dc9ef0

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x370) = *(uint *)((longlong)param_1 + 0x370) | 2;
  return;
}

// NewProp_bShowDiffWithPreviousStep_SetBit @ 146dc9f00

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x370) = *(uint *)((longlong)param_1 + 0x370) | 4;
  return;
}

// NewProp_bShouldBeVisibleInGame_SetBit @ 146dc9f10

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x370) = *(uint *)((longlong)param_1 + 0x370) | 8;
  return;
}

// NewProp_bPathExist_SetBit @ 146dc9f20

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x390) = *(uint *)((longlong)param_1 + 0x390) | 1;
  return;
}

// NewProp_bPathIsPartial_SetBit @ 146dc9f30

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x390) = *(uint *)((longlong)param_1 + 0x390) | 2;
  return;
}

// NewProp_bPathSearchOutOfNodes_SetBit @ 146dc9f40

void __cdecl
Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x390) = *(uint *)((longlong)param_1 + 0x390) | 4;
  return;
}

// NewStructOps @ 146dc9f50

void * __cdecl Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavMeshResolutionParam,&UE::CoreUObject::Private::Construct<FNavMeshResolutionParam>,&UE::CoreUObject::Private::ConstructForTests<FNavMeshResolutionParam>,&UE::CoreUObject::Private::Destruct<FNavMeshResolutionParam>,&UE::CoreUObject::Private::Copy<FNavMeshResolutionParam>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReplaceLinks_SetBit @ 146dca050

void __cdecl
Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146dca060

void __cdecl
Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds @ 146dca070

UFunction * __cdecl Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bDrawTriangleEdges_SetBit @ 146dca0b0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 1;
  return;
}

// NewProp_bDrawPolyEdges_SetBit @ 146dca0c0

void __cdecl Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 2;
  return;
}

// NewProp_bDrawFilledPolys_SetBit @ 146dca0d0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 4;
  return;
}

// NewProp_bDrawNavMeshEdges_SetBit @ 146dca100

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 8;
  return;
}

// NewProp_bDrawTileBounds_SetBit @ 146dca130

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x10;
  return;
}

// NewProp_bDrawTileResolutions_SetBit @ 146dca140

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileResolutions_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x20;
  return;
}

// NewProp_bDrawPathCollidingGeometry_SetBit @ 146dca160

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x40;
  return;
}

// NewProp_bDrawTileLabels_SetBit @ 146dca170

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x80;
  return;
}

// NewProp_bDrawTileBuildTimes_SetBit @ 146dca190

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimes_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x100;
  return;
}

// NewProp_bDrawTileBuildTimesHeatMap_SetBit @ 146dca1b0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimesHeatMap_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x200;
  return;
}

// NewProp_bDrawPolygonLabels_SetBit @ 146dca1d0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x400;
  return;
}

// NewProp_bDrawDefaultPolygonCost_SetBit @ 146dca1f0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x800;
  return;
}

// NewProp_bDrawPolygonFlags_SetBit @ 146dca210

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonFlags_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x1000;
  return;
}

// NewProp_bDrawPolygonAreaIDs_SetBit @ 146dca230

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonAreaIDs_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x2000;
  return;
}

// NewProp_bDrawLabelsOnPathNodes_SetBit @ 146dca250

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x4000;
  return;
}

// NewProp_bDrawNavLinks_SetBit @ 146dca2b0

void __cdecl Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x8000;
  return;
}

// NewProp_bDrawFailedNavLinks_SetBit @ 146dca2d0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x10000;
  return;
}

// NewProp_bDrawClusters_SetBit @ 146dca2f0

void __cdecl Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x20000;
  return;
}

// NewProp_bDrawOctree_SetBit @ 146dca310

void __cdecl Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x40000;
  return;
}

// NewProp_bDrawOctreeDetails_SetBit @ 146dca330

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x80000;
  return;
}

// NewProp_bDrawMarkedForbiddenPolys_SetBit @ 146dca350

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x100000;
  return;
}

// NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit @ 146dca370

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x518) = *(uint *)((longlong)param_1 + 0x518) | 0x200000;
  return;
}

// NewProp_bFixedTilePoolSize_SetBit @ 146dca390

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x554) = *(uint *)((longlong)param_1 + 0x554) | 1;
  return;
}

// NewProp_bSortNavigationAreasByCost_SetBit @ 146dca3a0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 1;
  return;
}

// NewProp_bIsWorldPartitioned_SetBit @ 146dca3b0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bIsWorldPartitioned_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 2;
  return;
}

// NewProp_bGenerateNavLinks_SetBit @ 146dca3c0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bGenerateNavLinks_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 4;
  return;
}

// NewProp_bPerformVoxelFiltering_SetBit @ 146dca3d0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 8;
  return;
}

// NewProp_bMarkLowHeightAreas_SetBit @ 146dca3e0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x10;
  return;
}

// NewProp_bUseExtraTopCellWhenMarkingAreas_SetBit @ 146dca3f0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x20;
  return;
}

// NewProp_bFilterLowSpanSequences_SetBit @ 146dca400

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x40;
  return;
}

// NewProp_bFilterLowSpanFromTileCache_SetBit @ 146dca410

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x80;
  return;
}

// NewProp_bDoFullyAsyncNavDataGathering_SetBit @ 146dca430

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x100;
  return;
}

// NewProp_bUseBetterOffsetsFromCorners_SetBit @ 146dca450

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x200;
  return;
}

// NewProp_bStoreEmptyTileLayers_SetBit @ 146dca470

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x400;
  return;
}

// NewProp_bUseVirtualFilters_SetBit @ 146dca490

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x800;
  return;
}

// NewProp_bUseVirtualGeometryFilteringAndDirtying_SetBit @ 146dca4b0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualGeometryFilteringAndDirtying_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x1000;
  return;
}

// NewProp_bAllowNavLinkAsPathEnd_SetBit @ 146dca4d0

void __cdecl
Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5f8) = *(uint *)((longlong)param_1 + 0x5f8) | 0x2000;
  return;
}

// NewProp_bUseVoxelCache_SetBit @ 146dca4f0

void __cdecl Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x624) = *(uint *)((longlong)param_1 + 0x624) | 1;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146dca694

/* [thunk]:public: virtual void * __ptr64 __cdecl FRecastQueryFilter::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FRecastQueryFilter::_vector_deleting_destructor__adjustor_8__(FRecastQueryFilter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRecastQueryFilter *)&this[-1].field_0x428,param_1);
  return pvVar1;
}

// Z_Construct_UClass_UNavLinkRenderingComponent @ 146dca6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavLinkRenderingComponent(void)

{
  if (Z_Registration_Info_UClass_UNavLinkRenderingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavLinkRenderingComponent.OuterSingleton,
               &Z_Construct_UClass_UNavLinkRenderingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavLinkRenderingComponent.OuterSingleton;
}

// Z_Construct_UClass_UNavTestRenderingComponent @ 146dca8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavTestRenderingComponent(void)

{
  if (Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton,
               &Z_Construct_UClass_UNavTestRenderingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig @ 146dca970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ENavLinkBuilderFlags_StaticEnum @ 146dca9f0

UEnum * __cdecl ENavLinkBuilderFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags,(UObject *)pUVar1,
                       L"ENavLinkBuilderFlags");
  }
  return Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 146dcaa30

void __cdecl
Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bLinkProxyRegistered_SetBit @ 146dcaa40

void __cdecl
Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig_Statics::NewProp_bLinkProxyRegistered_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewStructOps @ 146dcaa50

void * __cdecl Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavLinkGenerationJumpConfig,&UE::CoreUObject::Private::Construct<FNavLinkGenerationJumpConfig>,&UE::CoreUObject::Private::ConstructForTests<FNavLinkGenerationJumpConfig>,&UE::CoreUObject::Private::Destruct<FNavLinkGenerationJumpConfig>,&UE::CoreUObject::Private::SerializeArchive<FNavLinkGenerationJumpConfig>,&UE::CoreUObject::Private::Copy<FNavLinkGenerationJumpConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNavLinkComponent @ 146dcaa90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavLinkComponent(void)

{
  if (Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton,
               &Z_Construct_UClass_UNavLinkComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146dcab90

void * __thiscall
IBaseDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bEnabled_SetBit @ 146dcabe0

void __cdecl
Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 146dcabf0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewProp_bLinkProxyRegistered_SetBit @ 146dcac30

void __cdecl
Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::
NewProp_bLinkProxyRegistered_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 146dcac80

void * __cdecl
Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavLinkGenerationJumpDownConfig,&UE::CoreUObject::Private::Construct<FNavLinkGenerationJumpDownConfig>,&UE::CoreUObject::Private::ConstructForTests<FNavLinkGenerationJumpDownConfig>,&UE::CoreUObject::Private::Destruct<FNavLinkGenerationJumpDownConfig>,&UE::CoreUObject::Private::SerializeArchive<FNavLinkGenerationJumpDownConfig>,&UE::CoreUObject::Private::Copy<FNavLinkGenerationJumpDownConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146dcae90

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146dcaee0

void * __thiscall
FNavigationSystemModule::_scalar_deleting_destructor_(FNavigationSystemModule *this,uint param_1)

{
  *this = (FNavigationSystemModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146dcaf20

void * __thiscall
IBaseDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146dcaf70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146dcb1c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_ANavMeshBoundsVolume @ 146dcb1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANavMeshBoundsVolume(void)

{
  if (Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton,
               &Z_Construct_UClass_ANavMeshBoundsVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton;
}

// operator_new<FNavPathPoint,TSizedDefaultAllocator<32>_> @ 146dcb4e0

void * __cdecl
operator_new<FNavPathPoint,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 != 0x30) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Size == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xfba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  uVar3 = param_2->ArrayNum;
  if (uVar3 == param_2->ArrayMax) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = uVar3 + 1;
  uVar5 = 0;
  if ((int)uVar3 < (int)(uVar3 + 1)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x30;
}

// Cast<ANavigationTestingActor,AActor> @ 146dcbdd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationTestingActor * __cdecl Cast<ANavigationTestingActor,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = ANavigationTestingActor::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (ANavigationTestingActor *)param_1;
    }
  }
  return (ANavigationTestingActor *)0x0;
}

// CastChecked<ANavigationTestingActor,AActor> @ 146dcbe20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationTestingActor * __cdecl CastChecked<ANavigationTestingActor,AActor>(AActor *param_1)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar2 = GetTypeName<ANavigationTestingActor>(&local_28);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar3);
  }
  bVar1 = UObjectBaseUtility::IsA<ANavigationTestingActor>((UObjectBaseUtility *)param_1);
  if (bVar1) {
    return (ANavigationTestingActor *)param_1;
  }
  pFVar2 = GetTypeName<ANavigationTestingActor>(&local_28);
  pwVar3 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pFVar2 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar2->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar3,pwVar4);
}

// CastChecked<APawn,AActor> @ 146dcbed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APawn * __cdecl CastChecked<APawn,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (APawn *)0x0;
    }
    pFVar3 = GetTypeName<APawn>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_APawn_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (APawn *)param_1;
  }
  pFVar3 = GetTypeName<APawn>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNavLinkCustomComponent,UActorComponent> @ 146dcbfb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavLinkCustomComponent * __cdecl
CastChecked<UNavLinkCustomComponent,UActorComponent>(UActorComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UActorComponent *)0x0) {
    pFVar3 = GetTypeName<UNavLinkCustomComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNavLinkCustomComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNavLinkCustomComponent *)param_1;
  }
  pFVar3 = GetTypeName<UNavLinkCustomComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FNavMeshSceneProxyData::FDebugMeshData,FNavMeshSceneProxyData::FDebugMeshData,int> @ 146dcc0d0

void __cdecl
ConstructItems<FNavMeshSceneProxyData::FDebugMeshData,FNavMeshSceneProxyData::FDebugMeshData,int>
          (void *param_1,FDebugMeshData *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    piVar5 = &(param_2->Vertices).ArrayNum;
    lVar6 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)(lVar6 + (longlong)piVar5) = 0;
      pFVar2 = (ForAnyElementType *)(lVar6 + (longlong)piVar5);
      iVar3 = *piVar5;
      _Src = (((TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
             AllocatorInstance).Data;
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,4,iVar3,0,pFVar2,iVar3,piVar4);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 0x58);
      }
      piVar4[1] = 0;
      piVar4[2] = 0;
      iVar3 = piVar5[4];
      _Src_00 = *(void **)(piVar5 + 2);
      piVar4[3] = iVar3;
      if (iVar3 == 0) {
        piVar4[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)(piVar4 + 1),iVar3,piVar4 + 4);
        memcpy(((ForAnyElementType *)(piVar4 + 1))->Data,_Src_00,(longlong)iVar3 << 2);
      }
      piVar1 = piVar5 + 6;
      piVar5 = piVar5 + 10;
      piVar4[5] = *piVar1;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavMeshSceneProxyData::FDebugText,FNavMeshSceneProxyData::FDebugText,int> @ 146dcc210

void __cdecl
ConstructItems<FNavMeshSceneProxyData::FDebugText,FNavMeshSceneProxyData::FDebugText,int>
          (void *param_1,FDebugText *param_2,int param_3)

{
  double dVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    dVar1 = (param_2->Location).field0_0x0._s_0.Y;
    *(double *)param_1 = (param_2->Location).field0_0x0._s_0.X;
    *(double *)((longlong)param_1 + 8) = dVar1;
    *(double *)((longlong)param_1 + 0x10) = (param_2->Location).field0_0x0._s_0.Z;
    FString::FString((FString *)((longlong)param_1 + 0x18),&param_2->Text);
    param_2 = param_2 + 1;
    param_1 = (void *)((longlong)param_1 + 0x28);
  }
  return;
}

// ConstructItems<FDebugRenderSceneProxy::FMesh,FDebugRenderSceneProxy::FMesh,int> @ 146dcc270

void __cdecl
ConstructItems<FDebugRenderSceneProxy::FMesh,FDebugRenderSceneProxy::FMesh,int>
          (void *param_1,FMesh *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FDebugRenderSceneProxy::FMesh::FMesh((FMesh *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavMeshTileData,FNavMeshTileData,int> @ 146dcc2c0

void __cdecl
ConstructItems<FNavMeshTileData,FNavMeshTileData,int>
          (void *param_1,FNavMeshTileData *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  double dVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar5 = &param_2->DataSize;
    piVar4 = (int *)((longlong)param_1 + 0x40);
    do {
      piVar4[-0x10] = *(int *)((longlong)piVar4 + (longlong)param_2 + (-0x40 - (longlong)param_1));
      uVar2 = *(undefined8 *)(piVar5 + -0xc);
      *(double *)(piVar4 + -0xe) = (((TBox<double> *)(piVar5 + -0xe))->Min).field0_0x0._s_0.X;
      *(undefined8 *)(piVar4 + -0xc) = uVar2;
      dVar3 = (((TVector<double> *)(piVar5 + -8))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar4 + -10) = *(undefined8 *)(piVar5 + -10);
      *(double *)(piVar4 + -8) = dVar3;
      uVar2 = *(undefined8 *)(piVar5 + -4);
      *(undefined8 *)(piVar4 + -6) = *(undefined8 *)(piVar5 + -6);
      *(undefined8 *)(piVar4 + -4) = uVar2;
      *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(piVar5 + -2);
      *piVar4 = *piVar5;
      *(FNavData **)(piVar4 + 2) =
           ((TSharedPtr<FNavMeshTileData::FNavData,1> *)(piVar5 + 2))->Object;
      pTVar1 = ((FSharedReferencer<1> *)(piVar5 + 4))->ReferenceController;
      *(TReferenceControllerBase<1> **)(piVar4 + 4) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      piVar5 = piVar5 + 0x16;
      piVar4 = piVar4 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavigationLink,FNavigationLink,int> @ 146dcc330

void __cdecl
ConstructItems<FNavigationLink,FNavigationLink,int>
          (void *param_1,FNavigationLink *param_2,int param_3)

{
  double dVar1;
  double *pdVar2;
  TVector<double> *pTVar3;
  
  if (param_3 != 0) {
    pdVar2 = (double *)((longlong)param_1 + 0x58);
    pTVar3 = &param_2->Right;
    do {
      FNavigationLinkBase::FNavigationLinkBase
                ((FNavigationLinkBase *)(pdVar2 + -0xb),
                 (FNavigationLinkBase *)
                 ((longlong)param_2 + (-0x58 - (longlong)param_1) + (longlong)pdVar2));
      dVar1 = pTVar3[-1].field0_0x0._s_0.Y;
      pdVar2[-3] = pTVar3[-1].field0_0x0._s_0.X;
      pdVar2[-2] = dVar1;
      pdVar2[-1] = pTVar3[-1].field0_0x0._s_0.Z;
      dVar1 = (pTVar3->field0_0x0)._s_0.Y;
      *pdVar2 = (pTVar3->field0_0x0)._s_0.X;
      pdVar2[1] = dVar1;
      pdVar2[2] = (pTVar3->field0_0x0)._s_0.Z;
      param_3 = param_3 + -1;
      pdVar2 = pdVar2 + 0xe;
      pTVar3 = (TVector<double> *)((longlong)(pTVar3 + 4) + 0x10);
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavigationSegmentLink,FNavigationSegmentLink,int> @ 146dcc3c0

void __cdecl
ConstructItems<FNavigationSegmentLink,FNavigationSegmentLink,int>
          (void *param_1,FNavigationSegmentLink *param_2,int param_3)

{
  double dVar1;
  double *pdVar2;
  TVector<double> *pTVar3;
  
  if (param_3 != 0) {
    pdVar2 = (double *)((longlong)param_1 + 0x58);
    pTVar3 = &param_2->LeftEnd;
    do {
      FNavigationLinkBase::FNavigationLinkBase
                ((FNavigationLinkBase *)(pdVar2 + -0xb),
                 (FNavigationLinkBase *)
                 ((longlong)param_2 + (-0x58 - (longlong)param_1) + (longlong)pdVar2));
      dVar1 = pTVar3[-1].field0_0x0._s_0.Y;
      pdVar2[-3] = pTVar3[-1].field0_0x0._s_0.X;
      pdVar2[-2] = dVar1;
      pdVar2[-1] = pTVar3[-1].field0_0x0._s_0.Z;
      dVar1 = (pTVar3->field0_0x0)._s_0.Y;
      *pdVar2 = (pTVar3->field0_0x0)._s_0.X;
      pdVar2[1] = dVar1;
      pdVar2[2] = (pTVar3->field0_0x0)._s_0.Z;
      dVar1 = pTVar3[1].field0_0x0._s_0.Y;
      pdVar2[3] = pTVar3[1].field0_0x0._s_0.X;
      pdVar2[4] = dVar1;
      pdVar2[5] = pTVar3[1].field0_0x0._s_0.Z;
      dVar1 = pTVar3[2].field0_0x0._s_0.Y;
      pdVar2[6] = pTVar3[2].field0_0x0._s_0.X;
      pdVar2[7] = dVar1;
      pdVar2[8] = pTVar3[2].field0_0x0._s_0.Z;
      param_3 = param_3 + -1;
      pdVar2 = pdVar2 + 0x14;
      pTVar3 = (TVector<double> *)((longlong)(pTVar3 + 6) + 0x10);
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSupportedAreaData,FSupportedAreaData,int> @ 146dcc4a0

void __cdecl
ConstructItems<FSupportedAreaData,FSupportedAreaData,int>
          (void *param_1,FSupportedAreaData *param_2,int param_3)

{
  TObjectPtr<UClass_const_> TVar1;
  TObjectPtr<UClass_const_>_u_0 *pTVar2;
  TObjectPtr<UClass_const_>_u_0 *pTVar3;
  
  if (param_3 != 0) {
    pTVar3 = &(param_2->AreaClass).field0_0x0;
    pTVar2 = (TObjectPtr<UClass_const_>_u_0 *)((longlong)param_1 + 0x18);
    do {
      FString::FString((FString *)&pTVar2[-3].ObjectPtr,
                       (FString *)
                       ((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)pTVar2));
      *(undefined4 *)(pTVar2 + -1) = *(undefined4 *)(pTVar3 + -1);
      TVar1.field0_0x0 = (TObjectPtr<UClass_const_>_u_0)pTVar3->DebugPtr;
      pTVar2->DebugPtr = (UClass *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      pTVar3 = pTVar3 + 4;
      pTVar2 = pTVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FRecastDebugGeometry::FCluster,int> @ 146dccaf0

void __cdecl DefaultConstructItems<FRecastDebugGeometry::FCluster,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNavMeshSceneProxyData::FDebugMeshData,int> @ 146dccb20

void __cdecl
DefaultConstructItems<FNavMeshSceneProxyData::FDebugMeshData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNavMeshSceneProxyData::FDebugText,int> @ 146dccb50

void __cdecl
DefaultConstructItems<FNavMeshSceneProxyData::FDebugText,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDynamicMeshVertex,int> @ 146dccb80

void __cdecl DefaultConstructItems<FDynamicMeshVertex,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x50;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNavLinkGenerationJumpConfig,int> @ 146dccbb0

void __cdecl DefaultConstructItems<FNavLinkGenerationJumpConfig,int>(void *param_1,int param_2)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 + 8;
    do {
      *(undefined1 *)(lVar2 + -8) = 1;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined4 *)(lVar2 + 4) = 0x43160000;
      *(undefined4 *)(lVar2 + 8) = 0x41200000;
      *(undefined4 *)(lVar2 + 0xc) = 0x43160000;
      *(undefined4 *)(lVar2 + 0x10) = 0x42480000;
      *(undefined4 *)(lVar2 + 0x14) = 0x42a00000;
      *(undefined4 *)(lVar2 + 0x18) = 0x3f800000;
      *(undefined4 *)(lVar2 + 0x1c) = 0x42a00000;
      *(undefined2 *)(lVar2 + 0x20) = 1;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined1 *)(lVar2 + 0x50) = 0;
      pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(UClass **)(lVar2 + 0x28) = pUVar1;
      pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(UClass **)(lVar2 + 0x30) = pUVar1;
      lVar2 = lVar2 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNavMeshTileData,int> @ 146dcccb0

void __cdecl DefaultConstructItems<FNavMeshTileData,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x40);
    do {
      puVar1[-0x10] = 0;
      *(undefined1 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNavigationPortalEdge,int> @ 146dccce0

void __cdecl DefaultConstructItems<FNavigationPortalEdge,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNavigationWallEdge,int> @ 146dccd20

void __cdecl DefaultConstructItems<FNavigationWallEdge,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y = (double)uVar1;
    *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)param_1 + 8) = uVar1;
    *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
    *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    param_1 = (double *)((longlong)param_1 + 0x30);
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y = (double)uVar1;
  return;
}

// DefaultConstructItems<FBoxCenterAndExtent,int> @ 146dccd70

void __cdecl DefaultConstructItems<FBoxCenterAndExtent,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0x3ff0000000000000;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0x3ff0000000000000;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRecastDebugGeometry::FCluster,int> @ 146dcce40

void __cdecl DestructItems<FRecastDebugGeometry::FCluster,int>(FCluster *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->MeshIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int> @ 146dcce80

void __cdecl
DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int>(FDebugMeshData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Indices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Vertices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNavMeshSceneProxyData::FDebugText,int> @ 146dcced0

void __cdecl DestructItems<FNavMeshSceneProxyData::FDebugText,int>(FDebugText *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Text;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNavMeshTileData,int> @ 146dccf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<FNavMeshTileData,int>(FNavMeshTileData *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory> FVar6;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uchar auVar7 [8];
  TSharedPtr<FNavMeshTileData::FNavData,1> *pTVar8;
  FName local_res20;
  FName local_58;
  FStatMessage local_50;
  
  if (param_2 != 0) {
    pTVar8 = &param_1->NavData;
    do {
      pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
      if ((pTVar1 != (TReferenceControllerBase<1> *)0x0) &&
         (pTVar1->SharedReferenceCount == (atomic<int>)0x1)) {
        if ((pTVar8->Object == (FNavData *)0x0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((pTVar8->Object->RawNavData != (uchar *)0x0) &&
           (auVar7 = (uchar  [8])(longlong)*(int *)((longlong)(pTVar8 + -1) + 8),
           auVar7 != (uchar  [8])0x0)) {
          FVar6 = StatPtr_STAT_Navigation_TileCacheMemory;
          if (StatPtr_STAT_Navigation_TileCacheMemory ==
              (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)0x0) {
            pFVar5 = FName::FName(&local_58,"STAT_Navigation_TileCacheMemory");
            FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileCacheMemory
                               ,*pFVar5,L"Tile cache memory","STATGROUP_Navigation",
                               "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                               MCR_Physical);
          }
          FVar2 = *(FName *)FVar6;
          if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this = TlsGetValue(FThreadStats::TlsSlot);
            if (this == (FThreadStats *)0x0) {
              this_00 = FThreadStatsPool::Get();
              this = FThreadStatsPool::GetFromPool(this_00);
            }
            local_50.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
            local_res20 = FVar2;
            local_50.StatData.Pad = auVar7;
            local_50.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this,&local_50);
            FStatsTrace::Add(&local_res20,-(longlong)auVar7);
            if (this->ScopeCount == 0) {
              FThreadStats::Flush(this,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this,false,false);
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar8->SharedReferenceCount).ReferenceController);
      pTVar8 = (TSharedPtr<FNavMeshTileData::FNavData,1> *)((longlong)(pTVar8 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_>,int> @ 146dcd160

void __cdecl
DestructItems<TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_>,int>
          (TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_>
           *param_1,int param_2)

{
  FColoredMaterialRenderProxy *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FColoredMaterialRenderProxy *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FindNodesWithPredicateInternal<`FNavMeshSceneProxyData::GatherData'::__l225::<lambda_4>,`TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FindElementsWithPredicate<`FNavMeshSceneProxyData::GatherData'::__l225::<lambda_4>,`FNavMeshSceneProxyData::GatherData'::__l225::<lambda_5>_>'::__l2::<lambda_1>_> @ 146dcea20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
FindNodesWithPredicateInternal<_FNavMeshSceneProxyData::GatherData_::__l225::<lambda_4>,_TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FindElementsWithPredicate<_FNavMeshSceneProxyData::GatherData_::__l225::<lambda_4>,_FNavMeshSceneProxyData::GatherData_::__l225::<lambda_5>_>_::__l2::<lambda_1>_>
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,uint param_1,
          uint param_2,FOctreeNodeContext *param_3,<lambda_4> *param_4,<lambda_1> *param_5)

{
  FNavigationOctreeElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  FNavigationOctreeElement *pFVar17;
  FNavigationOctreeElement *pFVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  uint uVar25;
  uint uVar26;
  double dVar27;
  uint uVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  undefined1 local_res18 [8];
  FOctreeNodeContext *local_res20;
  TVector4<double>_u_0 local_e8;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  
  lVar20 = (longlong)(int)param_2;
  uVar19 = ~param_2 >> 0x1f;
  uVar14 = 0;
  if ((int)param_2 < (this->TreeNodes).ArrayNum) {
    uVar14 = uVar19;
  }
  local_res20 = param_3;
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar20 * 8 + 4) != 0) &&
     (bVar13 = `FNavMeshSceneProxyData::GatherData'::__l225::<lambda_4>::operator()
                         (param_4,param_1,param_2,&param_3->Bounds), bVar13)) {
    lVar3 = *(longlong *)(param_5 + 8);
    uVar14 = 0;
    if ((int)param_2 < *(int *)(lVar3 + 0x88)) {
      uVar14 = uVar19;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar18 = (FNavigationOctreeElement *)(lVar20 * 0x490 + *(longlong *)(lVar3 + 0x80));
    iVar2 = *(int *)((longlong)&pFVar18[0x10].Bounds.Origin.field0_0x0 + 8);
    pFVar17 = *(FNavigationOctreeElement **)&pFVar18[0x10].Bounds.Origin.field0_0x0;
    if (pFVar17 == (FNavigationOctreeElement *)0x0) {
      pFVar17 = pFVar18;
    }
    pFVar1 = pFVar17 + iVar2;
    while( true ) {
      if (*(int *)((longlong)&pFVar18[0x10].Bounds.Origin.field0_0x0 + 8) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNavigationOctreeElement_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar17 == pFVar1) break;
      `FNavMeshSceneProxyData::GatherData'::__l225::<lambda_5>::operator()
                (*(void **)param_5,param_2,pFVar17);
      pFVar17 = pFVar17 + 1;
    }
    uVar14 = 0;
    if ((int)param_2 < (this->TreeNodes).ArrayNum) {
      uVar14 = uVar19;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar20 * 8) != -1) {
      uVar14 = 0;
      if ((int)param_2 < (this->TreeNodes).ArrayNum) {
        uVar14 = uVar19;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = _UNK_15074415c;
      uVar11 = _UNK_150744158;
      uVar19 = _UNK_150744154;
      uVar14 = ___xmm_00000008000000040000000200000001;
      dVar10 = __real_3ff1000000000000;
      dVar9 = __real_3fe0000000000000;
      bVar16 = 0;
      uVar39 = (uint)__xmm_80000000000000008000000000000000;
      uVar8 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar2 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar20 * 8);
      dVar6 = (double)_UNK_150689548;
      dVar7 = (double)_UNK_15068954c;
      do {
        uVar15 = (uint)bVar16;
        uVar35 = SUB84(local_res20->ChildCenterOffset,0) ^ uVar39;
        uVar36 = (uint)((ulonglong)local_res20->ChildCenterOffset >> 0x20) ^ (uint)uVar8;
        dVar22 = (double)(float)-(uint)((uVar15 & uVar14) == uVar14);
        dVar27 = (double)(float)-(uint)((uVar15 & uVar19) == uVar19);
        uVar21 = SUB84(dVar22,0);
        uVar25 = (uint)((ulonglong)dVar22 >> 0x20);
        uVar26 = SUB84(dVar27,0);
        uVar28 = (uint)((ulonglong)dVar27 >> 0x20);
        auVar23._0_4_ = ~uVar21 & uVar35;
        auVar23._4_4_ = ~uVar25 & uVar36;
        auVar23._8_4_ = ~uVar26 & uVar35;
        auVar23._12_4_ = ~uVar28 & uVar36;
        dVar22 = (double)(float)-(uint)((uVar15 & uVar11) == uVar11);
        uVar29 = SUB84(dVar22,0);
        uVar30 = (uint)((ulonglong)dVar22 >> 0x20);
        dVar22 = (double)(float)-(uint)((uVar15 & uVar12) == uVar12);
        uVar32 = SUB84(dVar22,0);
        uVar33 = (uint)((ulonglong)dVar22 >> 0x20);
        uVar34 = SUB84(local_res20->ChildCenterOffset,0);
        auVar38._0_4_ = uVar21 & uVar34;
        uVar21 = (uint)((ulonglong)local_res20->ChildCenterOffset >> 0x20);
        auVar38._4_4_ = uVar25 & uVar21;
        auVar38._8_4_ = uVar26 & uVar34;
        auVar38._12_4_ = uVar28 & uVar21;
        local_e8._s_0.X =
             SUB168(auVar38 | auVar23,0) + (local_res20->Bounds).Center.field0_0x0._s_0.X;
        local_e8._s_0.Y =
             SUB168(auVar38 | auVar23,8) + (local_res20->Bounds).Center.field0_0x0._s_0.Y;
        auVar37._0_4_ = uVar29 & uVar34;
        auVar37._4_4_ = uVar30 & uVar21;
        auVar37._8_4_ = uVar32 & uVar34;
        auVar37._12_4_ = uVar33 & uVar21;
        auVar5._4_4_ = ~uVar30 & uVar36;
        auVar5._0_4_ = ~uVar29 & uVar35;
        auVar5._8_4_ = ~uVar32 & uVar35;
        auVar5._12_4_ = ~uVar33 & uVar36;
        local_a0 = local_res20->ChildExtent;
        uVar31 = (undefined4)((ulonglong)local_a0 >> 0x20);
        auVar24._8_4_ = SUB84(local_a0,0);
        auVar24._0_8_ = local_a0;
        auVar24._12_4_ = uVar31;
        local_c8._8_4_ = SUB84(local_a0,0);
        local_c8._0_8_ = local_a0;
        local_c8._12_4_ = uVar31;
        local_b8 = local_a0 * dVar6;
        dStack_b0 = auVar24._8_8_ * dVar7;
        local_e8._s_0.Z =
             (SUB168(auVar37 | auVar5,0) + (local_res20->Bounds).Center.field0_0x0._s_0.Z) * dVar6;
        local_e8._s_0.W =
             (SUB168(auVar37 | auVar5,8) + (local_res20->Bounds).Center.field0_0x0._s_0.W) * dVar7;
        local_a8 = local_a0 * dVar9 * dVar10;
        local_a0 = local_a0 - local_a8;
        FindNodesWithPredicateInternal<_FNavMeshSceneProxyData::GatherData_::__l225::<lambda_4>,_TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FindElementsWithPredicate<_FNavMeshSceneProxyData::GatherData_::__l225::<lambda_4>,_FNavMeshSceneProxyData::GatherData_::__l225::<lambda_5>_>_::__l2::<lambda_1>_>
                  (this,param_2,uVar15 + iVar2,(FOctreeNodeContext *)&local_e8._s_0,param_4,param_5)
        ;
        bVar16 = bVar16 + 1;
      } while ((char)bVar16 < '\b');
    }
  }
  return;
}

// GetTypeName<ANavigationTestingActor> @ 146dcf130

FString * __cdecl GetTypeName<ANavigationTestingActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ANavigationTestingActor::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNavLinkCustomComponent> @ 146dcf170

FString * __cdecl GetTypeName<UNavLinkCustomComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNavLinkCustomComponent::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FRecastAreaNavModifierElement,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FRecastAreaNavModifierElement,`ARecastNavMesh::SortAreasForGenerator'::__l2::FNavAreaSortPredicate>_>_> @ 146dcf1b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSiftDown<FRecastAreaNavModifierElement,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FRecastAreaNavModifierElement,_ARecastNavMesh::SortAreasForGenerator_::__l2::FNavAreaSortPredicate>_>_>
          (FRecastAreaNavModifierElement *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FRecastAreaNavModifierElement,_public:_virtual_void___cdecl_ARecastNavMesh::SortAreasForGenerator(TArray<FRecastAreaNavModifierElement,TSizedDefaultAllocator<32>_>_&)const_::_2_::FNavAreaSortPredicate>_>
          *param_5)

{
  FRecastAreaNavModifierElement *pFVar1;
  FRecastAreaNavModifierElement *pFVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  int iVar9;
  undefined6 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ENavigationDataResolution EVar15;
  bool bVar16;
  undefined6 uVar17;
  bool bVar18;
  longlong lVar19;
  longlong lVar20;
  UObject *pUVar21;
  UClass *pUVar22;
  UObject *pUVar23;
  int iVar24;
  
  do {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar24 = param_2 * 2;
    if (iVar24 + 2 < param_3) {
      lVar19 = (longlong)iVar24;
      lVar20 = lVar19 + 1;
      iVar24 = param_1[lVar19 + 2].Areas.ArrayNum;
      if ((iVar24 == 0) || (param_1[lVar20].Areas.ArrayNum == 0)) {
        bVar18 = iVar24 <= param_1[lVar20].Areas.ArrayNum;
      }
      else {
        if ((iVar24 < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_1[lVar19 + 2].Areas.AllocatorInstance.Data;
        if ((param_1[lVar20].Areas.ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = param_1[lVar20].Areas.AllocatorInstance.Data;
        pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar6 + 0x14));
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar21 != (UObject *)0x0) goto LAB_146dcf2e2;
LAB_146dcf310:
          pUVar21 = (UObject *)0x0;
        }
        else {
          if (pUVar21 == (UObject *)0x0) goto LAB_146dcf310;
          UE::GC::MarkAsReachable(pUVar21);
LAB_146dcf2e2:
          pUVar22 = Z_Construct_UClass_UNavAreaBase_NoRegister();
          if (pUVar22 == (UClass *)0x0) goto LAB_146dcf310;
          iVar24 = (int)pUVar22->_padding_;
          if ((*(int *)&pUVar21[1].field_0x10 < iVar24) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)&pUVar21[1].field_0x8 + (longlong)iVar24 * 8) !=
              &pUVar22->_padding_)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          if (!bVar18) goto LAB_146dcf310;
        }
        pUVar23 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar7 + 0x14));
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar23 != (UObject *)0x0) goto LAB_146dcf342;
LAB_146dcf370:
          pUVar23 = (UObject *)0x0;
        }
        else {
          if (pUVar23 == (UObject *)0x0) goto LAB_146dcf370;
          UE::GC::MarkAsReachable(pUVar23);
LAB_146dcf342:
          pUVar22 = Z_Construct_UClass_UNavAreaBase_NoRegister();
          if (pUVar22 == (UClass *)0x0) goto LAB_146dcf370;
          iVar24 = (int)pUVar22->_padding_;
          if ((*(int *)&pUVar23[1].field_0x10 < iVar24) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)&pUVar23[1].field_0x8 + (longlong)iVar24 * 8) !=
              &pUVar22->_padding_)) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          if (!bVar18) goto LAB_146dcf370;
        }
        if ((pUVar21 != (UObject *)0x0) == (pUVar23 != (UObject *)0x0)) {
          if (*(float *)(pFVar6 + 4) == *(float *)(pFVar7 + 4)) {
            if (*(float *)(pFVar6 + 8) == *(float *)(pFVar7 + 8)) {
              bVar18 = param_1[lVar19 + 2].NavMeshResolution < param_1[lVar20].NavMeshResolution;
            }
            else {
              bVar18 = *(float *)(pFVar6 + 8) < *(float *)(pFVar7 + 8);
            }
          }
          else {
            bVar18 = *(float *)(pFVar6 + 4) < *(float *)(pFVar7 + 4);
          }
        }
        else {
          bVar18 = pUVar21 == (UObject *)0x0;
        }
      }
      iVar24 = param_2 * 2 + 1;
      if (bVar18) {
        iVar24 = param_2 * 2;
      }
    }
    iVar24 = iVar24 + 1;
    iVar5 = param_1[param_2].Areas.ArrayNum;
    if ((iVar5 == 0) || (param_1[iVar24].Areas.ArrayNum == 0)) {
      bVar18 = iVar5 <= param_1[iVar24].Areas.ArrayNum;
    }
    else {
      if ((iVar5 < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = param_1[param_2].Areas.AllocatorInstance.Data;
      if ((param_1[iVar24].Areas.ArrayNum < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = param_1[iVar24].Areas.AllocatorInstance.Data;
      pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar6 + 0x14));
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar21 != (UObject *)0x0) goto LAB_146dcf4b4;
LAB_146dcf4e2:
        pUVar21 = (UObject *)0x0;
      }
      else {
        if (pUVar21 == (UObject *)0x0) goto LAB_146dcf4e2;
        UE::GC::MarkAsReachable(pUVar21);
LAB_146dcf4b4:
        pUVar22 = Z_Construct_UClass_UNavAreaBase_NoRegister();
        if (pUVar22 == (UClass *)0x0) goto LAB_146dcf4e2;
        iVar5 = (int)pUVar22->_padding_;
        if ((*(int *)&pUVar21[1].field_0x10 < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar21[1].field_0x8 + (longlong)iVar5 * 8)
            != &pUVar22->_padding_)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        if (!bVar18) goto LAB_146dcf4e2;
      }
      pUVar23 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar7 + 0x14));
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar23 != (UObject *)0x0) goto LAB_146dcf514;
LAB_146dcf542:
        pUVar23 = (UObject *)0x0;
      }
      else {
        if (pUVar23 == (UObject *)0x0) goto LAB_146dcf542;
        UE::GC::MarkAsReachable(pUVar23);
LAB_146dcf514:
        pUVar22 = Z_Construct_UClass_UNavAreaBase_NoRegister();
        if (pUVar22 == (UClass *)0x0) goto LAB_146dcf542;
        iVar5 = (int)pUVar22->_padding_;
        if ((*(int *)&pUVar23[1].field_0x10 < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar23[1].field_0x8 + (longlong)iVar5 * 8)
            != &pUVar22->_padding_)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        if (!bVar18) goto LAB_146dcf542;
      }
      if ((pUVar21 != (UObject *)0x0) == (pUVar23 != (UObject *)0x0)) {
        if (*(float *)(pFVar6 + 4) == *(float *)(pFVar7 + 4)) {
          if (*(float *)(pFVar6 + 8) == *(float *)(pFVar7 + 8)) {
            bVar18 = param_1[param_2].NavMeshResolution < param_1[iVar24].NavMeshResolution;
          }
          else {
            bVar18 = *(float *)(pFVar6 + 8) < *(float *)(pFVar7 + 8);
          }
        }
        else {
          bVar18 = *(float *)(pFVar6 + 4) < *(float *)(pFVar7 + 4);
        }
      }
      else {
        bVar18 = pUVar21 == (UObject *)0x0;
      }
    }
    if (!bVar18) {
      return;
    }
    pFVar1 = param_1 + iVar24;
    iVar5 = (pFVar1->Areas).ArrayNum;
    iVar9 = (pFVar1->Areas).ArrayMax;
    pFVar2 = param_1 + param_2;
    pFVar6 = (pFVar2->Areas).AllocatorInstance.Data;
    iVar11 = (pFVar2->Areas).ArrayNum;
    iVar12 = (pFVar2->Areas).ArrayMax;
    pFVar2 = param_1 + param_2;
    EVar15 = pFVar2->NavMeshResolution;
    bVar16 = pFVar2->bMaskFillCollisionUnderneathForNavmesh;
    uVar17 = *(undefined6 *)&pFVar2->field_0x22;
    pTVar3 = &param_1[param_2].PerInstanceTransform;
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    iVar13 = pTVar3->ArrayNum;
    iVar14 = pTVar3->ArrayMax;
    pFVar2 = param_1 + param_2;
    (pFVar2->Areas).AllocatorInstance.Data = (pFVar1->Areas).AllocatorInstance.Data;
    (pFVar2->Areas).ArrayNum = iVar5;
    (pFVar2->Areas).ArrayMax = iVar9;
    pTVar3 = &param_1[iVar24].PerInstanceTransform;
    iVar5 = pTVar3->ArrayNum;
    iVar9 = pTVar3->ArrayMax;
    pTVar4 = &param_1[param_2].PerInstanceTransform;
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    pTVar4->ArrayNum = iVar5;
    pTVar4->ArrayMax = iVar9;
    pFVar1 = param_1 + iVar24;
    bVar18 = pFVar1->bMaskFillCollisionUnderneathForNavmesh;
    uVar10 = *(undefined6 *)&pFVar1->field_0x22;
    pFVar2 = param_1 + param_2;
    pFVar2->NavMeshResolution = pFVar1->NavMeshResolution;
    pFVar2->bMaskFillCollisionUnderneathForNavmesh = bVar18;
    *(undefined6 *)&pFVar2->field_0x22 = uVar10;
    pFVar1 = param_1 + iVar24;
    (pFVar1->Areas).AllocatorInstance.Data = pFVar6;
    (pFVar1->Areas).ArrayNum = iVar11;
    (pFVar1->Areas).ArrayMax = iVar12;
    pTVar3 = &param_1[iVar24].PerInstanceTransform;
    (pTVar3->AllocatorInstance).Data = pFVar7;
    pTVar3->ArrayNum = iVar13;
    pTVar3->ArrayMax = iVar14;
    pFVar1 = param_1 + iVar24;
    pFVar1->NavMeshResolution = EVar15;
    pFVar1->bMaskFillCollisionUnderneathForNavmesh = bVar16;
    *(undefined6 *)&pFVar1->field_0x22 = uVar17;
    param_2 = iVar24;
  } while( true );
}

// HeapSortInternal<FNavTileRef,int,FIdentityFunctor,TDereferenceWrapper<FNavTileRef,`ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>_>_> @ 146dcf650

void __cdecl
AlgoImpl::
HeapSortInternal<FNavTileRef,int,FIdentityFunctor,TDereferenceWrapper<FNavTileRef,_ARecastNavMesh::CreateSegmentLinkConnections_::__l2::<lambda_1>_>_>
          (FNavTileRef *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FNavTileRef,_public:_virtual_void___cdecl_ARecastNavMesh::CreateSegmentLinkConnections(TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
          param_4)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_146dcf759:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            uVar1 = param_1->TileRef;
            param_1->TileRef = param_1[lVar8].TileRef;
            param_1[lVar8].TileRef = uVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>::
                          operator()(param_4.Predicate,(FNavTileRef)param_1[iVar7 + 2].TileRef,
                                     (FNavTileRef)param_1[iVar4].TileRef);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,(FNavTileRef)param_1[iVar9].TileRef,
                                   (FNavTileRef)param_1[iVar4].TileRef);
                if (!bVar3) break;
                uVar1 = param_1[iVar9].TileRef;
                param_1[iVar9].TileRef = param_1[iVar4].TileRef;
                param_1[iVar4].TileRef = uVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,(FNavTileRef)param_1[iVar5 + 2].TileRef,
                         (FNavTileRef)param_1[iVar6].TileRef);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,(FNavTileRef)param_1[iVar4].TileRef,
                       (FNavTileRef)param_1[iVar6].TileRef);
    if (!bVar3) goto LAB_146dcf759;
    uVar1 = param_1[iVar4].TileRef;
    param_1[iVar4].TileRef = param_1[iVar6].TileRef;
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6].TileRef = uVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<`FPImplRecastNavMesh::OnAreaCostChanged'::__l2::FRealntPair,int,FIdentityFunctor,TDereferenceWrapper<`FPImplRecastNavMesh::OnAreaCostChanged'::__l2::FRealntPair,TLess<void>_>_> @ 146dcf840

void __cdecl
AlgoImpl::
HeapSortInternal<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,int,FIdentityFunctor,TDereferenceWrapper<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,TLess<void>_>_>
          (FRealntPair *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FPImplRecastNavMesh::OnAreaCostChanged(void)_::_2_::FRealntPair,TLess<void>_>
          param_4)

{
  FRealntPair *pFVar1;
  FRealntPair *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  FRealntPair *pFVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar12 = iVar10;
  iVar14 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_146dcf935:
      if (iVar14 == 0) {
        iVar10 = param_2 + -1;
        lVar13 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar15 = param_1 + lVar13;
          do {
            iVar12 = pFVar15->Index;
            uVar5 = *(undefined4 *)&pFVar15->field_0xc;
            iVar14 = 0;
            dVar4 = param_1->Score;
            iVar9 = param_1->Index;
            uVar7 = *(undefined4 *)&param_1->field_0xc;
            param_1->Score = pFVar15->Score;
            param_1->Index = iVar12;
            *(undefined4 *)&param_1->field_0xc = uVar5;
            pFVar15->Score = dVar4;
            pFVar15->Index = iVar9;
            *(undefined4 *)&pFVar15->field_0xc = uVar7;
            if (1 < iVar10) {
              do {
                iVar9 = iVar14 * 2;
                iVar12 = iVar9 + 1;
                if (iVar9 + 2 < iVar10) {
                  if (param_1[(longlong)iVar9 + 2].Score <= param_1[iVar12].Score &&
                      param_1[iVar12].Score != param_1[(longlong)iVar9 + 2].Score) {
                    iVar12 = iVar9;
                  }
                  iVar12 = iVar12 + 1;
                }
                if (param_1[iVar12].Score < param_1[iVar14].Score ||
                    param_1[iVar12].Score == param_1[iVar14].Score) break;
                pFVar1 = param_1 + iVar14;
                dVar4 = pFVar1->Score;
                iVar11 = pFVar1->Index;
                uVar7 = *(undefined4 *)&pFVar1->field_0xc;
                pFVar1 = param_1 + iVar12;
                iVar9 = pFVar1->Index;
                uVar5 = *(undefined4 *)&pFVar1->field_0xc;
                pFVar2 = param_1 + iVar14;
                pFVar2->Score = pFVar1->Score;
                pFVar2->Index = iVar9;
                *(undefined4 *)&pFVar2->field_0xc = uVar5;
                pFVar1 = param_1 + iVar12;
                pFVar1->Score = dVar4;
                pFVar1->Index = iVar11;
                *(undefined4 *)&pFVar1->field_0xc = uVar7;
                iVar14 = iVar12;
              } while (iVar12 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar13 = lVar13 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar9 = iVar14 + -1;
      iVar10 = iVar12 + -2;
      iVar12 = iVar10;
      iVar14 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar11 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (param_1[(longlong)iVar10 + 2].Score <= param_1[iVar11].Score &&
          param_1[iVar11].Score != param_1[(longlong)iVar10 + 2].Score) {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 + 1;
    }
    if (param_1[iVar11].Score < param_1[iVar9].Score ||
        param_1[iVar11].Score == param_1[iVar9].Score) goto LAB_146dcf935;
    pFVar15 = param_1 + iVar9;
    dVar4 = pFVar15->Score;
    iVar6 = pFVar15->Index;
    uVar7 = *(undefined4 *)&pFVar15->field_0xc;
    pFVar15 = param_1 + iVar11;
    iVar10 = pFVar15->Index;
    uVar5 = *(undefined4 *)&pFVar15->field_0xc;
    pFVar1 = param_1 + iVar9;
    pFVar1->Score = pFVar15->Score;
    pFVar1->Index = iVar10;
    *(undefined4 *)&pFVar1->field_0xc = uVar5;
    iVar10 = iVar11 * 2 + 1;
    pFVar15 = param_1 + iVar11;
    pFVar15->Score = dVar4;
    pFVar15->Index = iVar6;
    *(undefined4 *)&pFVar15->field_0xc = uVar7;
    iVar9 = iVar11;
  } while( true );
}

// InternalConstructor<ANavMeshBoundsVolume> @ 146dcfa10

void __cdecl InternalConstructor<ANavMeshBoundsVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ANavMeshBoundsVolume__6B_;
    FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)(this + 1),0x7fffffff);
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
              (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
    *(undefined1 *)(*(longlong *)&this->field_0x2d8 + 0x1ab) = 0;
    *(undefined4 *)&this->field_0x2c4 = 0xffc8c8c8;
    *(uint *)(this + 1) = *(uint *)(this + 1) | 0x80000000;
    *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
  }
  return;
}

// InternalConstructor<ANavigationTestingActor> @ 146dcfab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<ANavigationTestingActor>(FObjectInitializer *param_1)

{
  if ((ANavigationTestingActor *)param_1->Obj != (ANavigationTestingActor *)0x0) {
    ANavigationTestingActor::ANavigationTestingActor
              ((ANavigationTestingActor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ARecastNavMesh> @ 146dcfad0

void __cdecl InternalConstructor<ARecastNavMesh>(FObjectInitializer *param_1)

{
  if ((ARecastNavMesh *)param_1->Obj != (ARecastNavMesh *)0x0) {
    ARecastNavMesh::ARecastNavMesh((ARecastNavMesh *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNavLinkComponent> @ 146dcfaf0

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

void __cdecl InternalConstructor<UNavLinkComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *pUVar1;
  UPrimitiveComponent *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  FNavigationLinkBase *this_00;
  FNavigationLinkBase FStack_78;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong64 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UNavLinkComponent::_vftable__for__UObject__;
    pUVar1 = this + 1;
    *(undefined ***)&this->field_0x28 =
         &UNavLinkComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UNavLinkComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 = &UNavLinkComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UNavLinkComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UNavLinkComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x548 = &___7UNavLinkComponent__6B_;
    *(FScriptContainerElement **)pUVar1 = (FScriptContainerElement *)0x0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this->field_0x1ab = 1;
    FBodyInstance::SetCollisionProfileName
              (&this->BodyInstance,UCollisionProfile::NoCollision_ProfileName);
    UPrimitiveComponent::SetGenerateOverlapEvents(this,false);
    this->field_0x9a = this->field_0x9a | 0xc0;
    (this->bHasCustomNavigableGeometry).Value = '\x02';
    FNavigationLinkBase::FNavigationLinkBase(&FStack_78);
    uStack_38 = ___xmm_c0490000000000000000000000000000;
    uStack_30 = _UNK_15149cb28;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = ___xmm_00000000000000004049000000000000;
    uStack_10 = _UNK_15149cb08;
    pUVar5 = Z_Construct_UClass_UNavArea_Default_NoRegister();
    FNavigationLinkBase::SetAreaClass(&FStack_78,pUVar5);
    if ((*(FScriptContainerElement **)pUVar1 <= &FStack_78) &&
       (&FStack_78 <
        (FNavigationLinkBase *)
        (*(FScriptContainerElement **)pUVar1 + (longlong)*(int *)&this[1].field_0xc * 0x70))) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
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
    iVar4 = *(int *)&this[1].field_0x8;
    if (iVar4 == *(int *)&this[1].field_0xc) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)pUVar1,(int *)&this[1].field_0xc);
    }
    *(int *)&this[1].field_0x8 = iVar4 + 1;
    this_00 = (FNavigationLinkBase *)(*(FScriptContainerElement **)pUVar1 + (longlong)iVar4 * 0x70);
    FNavigationLinkBase::FNavigationLinkBase(this_00,&FStack_78);
    this_00[1].LeftProjectHeight = (float)(undefined4)uStack_38;
    this_00[1].MaxFallDownLength = (float)uStack_38._4_4_;
    *(undefined8 *)&this_00[1].UserId = uStack_30;
    this_00[1].NavLinkId.Id = uStack_28;
    this_00[1].SnapRadius = (float)(undefined4)uStack_20;
    this_00[1].SnapHeight = (float)uStack_20._4_4_;
    this_00[1].SupportedAgents = (FNavAgentSelector)(undefined4)uStack_18;
    this_00[1].field7_0x24 = (FNavigationLinkBase_u_36)uStack_18._4_4_;
    *(undefined8 *)&this_00[1].Direction = uStack_10;
  }
  return;
}

// InternalConstructor<UNavLinkCustomComponent> @ 146dcfb00

void __cdecl InternalConstructor<UNavLinkCustomComponent>(FObjectInitializer *param_1)

{
  if ((UNavLinkCustomComponent *)param_1->Obj != (UNavLinkCustomComponent *)0x0) {
    UNavLinkCustomComponent::UNavLinkCustomComponent
              ((UNavLinkCustomComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNavLinkRenderingComponent> @ 146dcfb20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UNavLinkRenderingComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *this;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    this->field_0x1ab = 1;
    *(undefined ***)this = &UNavLinkRenderingComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UNavLinkRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UNavLinkRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UNavLinkRenderingComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UNavLinkRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UNavLinkRenderingComponent::_vftable__for__IPhysicsComponent__;
    FBodyInstance::SetCollisionProfileName
              (&this->BodyInstance,UCollisionProfile::NoCollision_ProfileName);
    this->field_0x9b = this->field_0x9b | 2;
    UPrimitiveComponent::SetGenerateOverlapEvents(this,false);
    return;
  }
  return;
}

// InternalConstructor<UNavMeshRenderingComponent> @ 146dcfbd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UNavMeshRenderingComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UDebugDrawComponent *this;
  
  this = (UDebugDrawComponent *)param_1->Obj;
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UNavMeshRenderingComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNavMeshRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNavMeshRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNavMeshRenderingComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UNavMeshRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UNavMeshRenderingComponent::_vftable__for__IPhysicsComponent__;
    FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
              ((FDebugDrawDelegateHelper *)&this[1]._padding_);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
    this[1]._padding_ = (longlong)&___7FNavMeshDebugDrawDelegateHelper__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UPrimitiveComponent::SetCollisionProfileName
              ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 | 2;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 & 0xef;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
  }
  return;
}

// InternalConstructor<UNavTestRenderingComponent> @ 146dcfcb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UNavTestRenderingComponent>(FObjectInitializer *param_1)

{
  UDebugDrawComponent *this;
  
  this = (UDebugDrawComponent *)param_1->Obj;
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UNavTestRenderingComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UNavTestRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNavTestRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNavTestRenderingComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UNavTestRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UNavTestRenderingComponent::_vftable__for__IPhysicsComponent__;
    FNavTestDebugDrawDelegateHelper::FNavTestDebugDrawDelegateHelper
              ((FNavTestDebugDrawDelegateHelper *)(this + 1));
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ANavMeshBoundsVolume> @ 146dcfd30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ANavMeshBoundsVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANavMeshBoundsVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ANavMeshBoundsVolume__6B_;
    FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)(this + 1),0x7fffffff);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANavigationTestingActor> @ 146dcfdf0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANavigationTestingActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANavigationTestingActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(byte *)&this[1].PrimaryActorTick._padding_ = (byte)this[1].PrimaryActorTick._padding_ & 0xe0;
    this->_padding_ = (longlong)&ANavigationTestingActor::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&ANavigationTestingActor::_vftable__for__INavAgentInterface__;
    this[1]._padding_ =
         (longlong)&ANavigationTestingActor::_vftable__for__INavPathObserverInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0xbf800000;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0xbf800000;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0xbf800000;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0x3f000000;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    this[1].AttachmentReplication.RotationOffset.Pitch = 0.0;
    *(undefined4 *)((longlong)&this[1].AttachmentReplication.RotationOffset.Yaw + 4) = 0;
    this[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.X = 0.0;
    this[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.Y = 0.0;
    this[1].ReplicatedMovement.Acceleration.field0_0x0._s_0.Y = 0.0;
    this[1].ReplicatedMovement.Acceleration.field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)&this[1].ReplicatedMovement.field_0x78 = 0;
    this[1].ReplicatedMovement.ServerPhysicsHandle = 0;
    this[1].ReplicatedMovement.LocationQuantizationLevel = RoundWholeNumber;
    this[1].ReplicatedMovement.VelocityQuantizationLevel = RoundWholeNumber;
    this[1].ReplicatedMovement.RotationQuantizationLevel = ByteComponents;
    this[1].ReplicatedMovement.field_0x87 = 0;
    *(undefined4 *)&this[1].Owner.field0_0x0 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ARecastNavMesh> @ 146dcff60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ARecastNavMesh>(FVTableHelper *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  ANavigationData *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = ARecastNavMesh::GetPrivateStaticClass();
  this = (ANavigationData *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ANavigationData *)0x0) {
    ANavigationData::ANavigationData(this,param_1);
    this->_padding_ = (longlong)&ARecastNavMesh::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ARecastNavMesh::_vftable__for__INavigationDataInterface__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    *(int *)((longlong)&this[1]._padding_ + 4) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    this[1]._padding_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    uVar2 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    *(undefined4 *)&this[1]._padding_ = uVar2;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    *(int *)((longlong)&this[1]._padding_ + 4) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    this[1]._padding_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    uVar2 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffc;
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xffff0000;
    *(undefined4 *)&this[1]._padding_ = uVar2;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41c80000;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x420c0000;
    *(undefined4 *)&this[1]._padding_ = 0x41c80000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    *(undefined4 *)&this[1]._padding_ = 0x420c0000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41c80000;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x420c0000;
    *(byte *)&this[1]._padding_ = (byte)this[1]._padding_ & 0xfe;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xd;
    this[1]._padding_ = 0x3f60624dd2f1a9fc;
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    ARecastNavMesh::FUpdateActiveTilesWorkingMem::FUpdateActiveTilesWorkingMem
              ((FUpdateActiveTilesWorkingMem *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavLinkComponent> @ 146dd0190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavLinkComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavLinkComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &UNavLinkComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UNavLinkComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UNavLinkComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 = &UNavLinkComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UNavLinkComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UNavLinkComponent::_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x548 = &___7UNavLinkComponent__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavLinkCustomComponent> @ 146dd02a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavLinkCustomComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavRelevantComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavLinkCustomComponent::GetPrivateStaticClass();
  this = (UNavRelevantComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavRelevantComponent *)0x0) {
    UNavRelevantComponent::UNavRelevantComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNavLinkCustomComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNavLinkCustomComponent::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNavLinkCustomComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNavLinkCustomComponent::_vftable__for__UNavRelevantComponent__;
    this[1]._padding_ = (longlong)&UNavLinkCustomComponent::_vftable__for__INavLinkCustomInterface__
    ;
    this[1]._padding_ = 0;
    FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this[1]._padding_,0x7fffffff);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Bounds.Min.field0_0x0 = 0;
    this[1].Bounds.Min.field0_0x0._s_0.Y = 0.0;
    this[1].Bounds.Min.field0_0x0._s_0.Z = 0.0;
    this[1].Bounds.Max.field0_0x0._s_0.X = 0.0;
    this[1].Bounds.Max.field0_0x0._s_0.Y = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Max.field0_0x0 + 0x10) = 0;
    this[1].Bounds.IsValid = '\0';
    this[1].Bounds.Pad[0] = '\0';
    this[1].Bounds.Pad[1] = '\0';
    this[1].Bounds.Pad[2] = '\0';
    this[1].Bounds.Pad[3] = '\0';
    this[1].Bounds.Pad[4] = '\0';
    this[1].Bounds.Pad[5] = '\0';
    this[1].Bounds.Pad[6] = '\0';
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavLinkRenderingComponent> @ 146dd0400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavLinkRenderingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavLinkRenderingComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UNavLinkRenderingComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UNavLinkRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UNavLinkRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UNavLinkRenderingComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UNavLinkRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UNavLinkRenderingComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavMeshRenderingComponent> @ 146dd04f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavMeshRenderingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDebugDrawComponent *this;
  UDebugDrawComponent *pUVar3;
  
  pUVar3 = (UDebugDrawComponent *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavMeshRenderingComponent::GetPrivateStaticClass();
  this = (UDebugDrawComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UNavMeshRenderingComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNavMeshRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNavMeshRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNavMeshRenderingComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UNavMeshRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UNavMeshRenderingComponent::_vftable__for__IPhysicsComponent__;
    FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
              ((FDebugDrawDelegateHelper *)&this[1]._padding_);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
    this[1]._padding_ = (longlong)&___7FNavMeshDebugDrawDelegateHelper__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UNavTestRenderingComponent> @ 146dd0610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavTestRenderingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDebugDrawComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavTestRenderingComponent::GetPrivateStaticClass();
  this = (UDebugDrawComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UNavTestRenderingComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UNavTestRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNavTestRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNavTestRenderingComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UNavTestRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UNavTestRenderingComponent::_vftable__for__IPhysicsComponent__;
    FNavTestDebugDrawDelegateHelper::FNavTestDebugDrawDelegateHelper
              ((FNavTestDebugDrawDelegateHelper *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FNavTileRef,int,FIdentityFunctor,TDereferenceWrapper<FNavTileRef,`ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>_>_> @ 146dd0710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FNavTileRef,int,FIdentityFunctor,TDereferenceWrapper<FNavTileRef,_ARecastNavMesh::CreateSegmentLinkConnections_::__l2::<lambda_1>_>_>
          (FNavTileRef *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FNavTileRef,_public:_virtual_void___cdecl_ARecastNavMesh::CreateSegmentLinkConnections(TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
          param_4)

{
  ulong64 uVar1;
  bool bVar2;
  int iVar3;
  FNavTileRef *pFVar4;
  FNavTileRef *pFVar5;
  int iVar6;
  FNavTileRef **ppFVar7;
  FNavTileRef *pFVar8;
  FNavTileRef *pFVar9;
  FNavTileRef *pFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FNavTileRef *local_358;
  FNavTileRef *local_348;
  FNavTileRef *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppFVar7 = &local_348;
    do {
      pFVar4 = ppFVar7[1];
      pFVar5 = *ppFVar7;
      local_358 = ppFVar7[2];
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 3) + 1;
      pFVar10 = pFVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_146dd07d0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar8 = pFVar4 + 1;
          uVar1 = pFVar10[iVar3 >> 1].TileRef;
          pFVar10[iVar3 >> 1].TileRef = pFVar10->TileRef;
          pFVar10->TileRef = uVar1;
          pFVar5 = pFVar10;
LAB_146dd0800:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar4) goto code_r0x000146dd0809;
          goto LAB_146dd0820;
        }
        for (; pFVar8 = pFVar10, pFVar5 = pFVar10, pFVar10 < pFVar4; pFVar4 = pFVar4 + -1) {
          while (pFVar9 = pFVar8, pFVar5 = pFVar5 + 1, pFVar5 <= pFVar4) {
            bVar2 = `ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,(FNavTileRef)pFVar9->TileRef,
                               (FNavTileRef)pFVar5->TileRef);
            pFVar8 = pFVar5;
            if (!bVar2) {
              pFVar8 = pFVar9;
            }
          }
          uVar1 = pFVar9->TileRef;
          pFVar9->TileRef = pFVar4->TileRef;
          pFVar4->TileRef = uVar1;
        }
        goto LAB_146dd08e6;
      }
LAB_146dd08d5:
      HeapSortInternal<FNavTileRef,int,FIdentityFunctor,TDereferenceWrapper<FNavTileRef,_ARecastNavMesh::CreateSegmentLinkConnections_::__l2::<lambda_1>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_146dd08e6:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_348 <= ppFVar7);
  }
  return;
code_r0x000146dd0809:
  bVar2 = `ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,(FNavTileRef)pFVar10->TileRef,(FNavTileRef)pFVar5->TileRef);
  if (!bVar2) goto LAB_146dd0800;
LAB_146dd0820:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar10) break;
    bVar2 = `ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,(FNavTileRef)pFVar8->TileRef,(FNavTileRef)pFVar10->TileRef)
    ;
  } while (!bVar2);
  if (pFVar5 <= pFVar8) {
    uVar1 = pFVar5->TileRef;
    pFVar5->TileRef = pFVar8->TileRef;
    pFVar8->TileRef = uVar1;
    goto LAB_146dd0800;
  }
  uVar1 = pFVar10->TileRef;
  iVar6 = iVar6 + -1;
  pFVar10->TileRef = pFVar8->TileRef;
  pFVar8->TileRef = uVar1;
  if ((longlong)((longlong)pFVar8 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar4 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar4) {
      *ppFVar7 = pFVar5;
      ppFVar7[1] = pFVar4;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar10 + 1) goto LAB_146dd08e6;
    pFVar4 = pFVar9 + -2;
    pFVar5 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar8) {
      *ppFVar7 = pFVar10;
      ppFVar7[1] = pFVar9 + -2;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar4 <= pFVar5) goto LAB_146dd08e6;
  }
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 3) + 1;
  pFVar10 = pFVar5;
  if (iVar6 == 0) goto LAB_146dd08d5;
  goto LAB_146dd07d0;
}

// IntroSortInternal<`FPImplRecastNavMesh::OnAreaCostChanged'::__l2::FRealntPair,int,FIdentityFunctor,TDereferenceWrapper<`FPImplRecastNavMesh::OnAreaCostChanged'::__l2::FRealntPair,TLess<void>_>_> @ 146dd09b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,int,FIdentityFunctor,TDereferenceWrapper<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,TLess<void>_>_>
          (FRealntPair *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FPImplRecastNavMesh::OnAreaCostChanged(void)_::_2_::FRealntPair,TLess<void>_>
          param_4)

{
  FRealntPair *pFVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  FRealntPair *pFVar9;
  FRealntPair *pFVar10;
  FRealntPair *pFVar11;
  FRealntPair **ppFVar12;
  FRealntPair *pFVar13;
  FRealntPair *pFVar14;
  FRealntPair *pFVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  FRealntPair *local_338;
  FRealntPair *local_328;
  FRealntPair *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar16;
    memset(local_310,0,0x2e8);
    ppFVar12 = &local_328;
    do {
      pFVar14 = ppFVar12[1];
      pFVar9 = *ppFVar12;
      pFVar1 = ppFVar12[2];
      iVar8 = (int)((longlong)pFVar14 - (longlong)pFVar9 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar9;
      if ((int)local_338 != 0) {
LAB_146dd0a60:
        if (8 < iVar8) {
          iVar4 = pFVar15->Index;
          uVar5 = *(undefined4 *)&pFVar15->field_0xc;
          pFVar11 = pFVar14 + 1;
          pFVar9 = pFVar15 + iVar8 / 2;
          dVar2 = pFVar9->Score;
          iVar6 = pFVar9->Index;
          uVar7 = *(undefined4 *)&pFVar9->field_0xc;
          pFVar9 = pFVar15 + iVar8 / 2;
          pFVar9->Score = pFVar15->Score;
          pFVar9->Index = iVar4;
          *(undefined4 *)&pFVar9->field_0xc = uVar5;
          pFVar15->Score = dVar2;
          pFVar15->Index = iVar6;
          *(undefined4 *)&pFVar15->field_0xc = uVar7;
          pFVar9 = pFVar15;
LAB_146dd0a90:
          pFVar10 = pFVar9;
          pFVar9 = pFVar10 + 1;
          if (pFVar9 <= pFVar14) goto code_r0x000146dd0a99;
          goto LAB_146dd0aa4;
        }
        if (pFVar15 < pFVar14) {
          pFVar1 = pFVar15 + 1;
          do {
            pFVar9 = pFVar15;
            if (pFVar1 <= pFVar14) {
              pFVar11 = pFVar1;
              if (0x3f < ((longlong)pFVar14 + (0x10 - (longlong)pFVar1) & 0xfffffffffffffff0U)) {
                do {
                  dVar2 = pFVar9->Score;
                  if (pFVar9->Score < pFVar11->Score) {
                    pFVar9 = pFVar11;
                    dVar2 = pFVar11->Score;
                  }
                  if (dVar2 < pFVar11[1].Score) {
                    pFVar9 = pFVar11 + 1;
                  }
                  dVar2 = pFVar9->Score;
                  if (pFVar9->Score < pFVar11[2].Score) {
                    pFVar9 = pFVar11 + 2;
                    dVar2 = pFVar11[2].Score;
                  }
                  if (dVar2 < pFVar11[3].Score) {
                    pFVar9 = pFVar11 + 3;
                  }
                  pFVar11 = pFVar11 + 4;
                } while (pFVar11 <= pFVar14 + -3);
              }
              for (; pFVar11 <= pFVar14; pFVar11 = pFVar11 + 1) {
                if (pFVar9->Score < pFVar11->Score) {
                  pFVar9 = pFVar11;
                }
              }
            }
            dVar2 = pFVar9->Score;
            iVar4 = pFVar9->Index;
            uVar7 = *(undefined4 *)&pFVar9->field_0xc;
            pFVar11 = pFVar14 + -1;
            iVar8 = pFVar14->Index;
            uVar5 = *(undefined4 *)&pFVar14->field_0xc;
            pFVar9->Score = pFVar14->Score;
            pFVar9->Index = iVar8;
            *(undefined4 *)&pFVar9->field_0xc = uVar5;
            pFVar14->Score = dVar2;
            pFVar14->Index = iVar4;
            *(undefined4 *)&pFVar14->field_0xc = uVar7;
            pFVar14 = pFVar11;
          } while (pFVar15 < pFVar11);
        }
        goto LAB_146dd0b67;
      }
LAB_146dd0b56:
      local_338 = pFVar1;
      HeapSortInternal<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,int,FIdentityFunctor,TDereferenceWrapper<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,TLess<void>_>_>
                (pFVar9,iVar8,param_3,param_4);
LAB_146dd0b67:
      ppFVar12 = ppFVar12 + -3;
    } while (&local_328 <= ppFVar12);
  }
  return;
code_r0x000146dd0a99:
  if (pFVar9->Score < pFVar15->Score || pFVar9->Score == pFVar15->Score) goto LAB_146dd0a90;
LAB_146dd0aa4:
  do {
    pFVar13 = pFVar11;
    pFVar11 = pFVar13 + -1;
    if (pFVar11 <= pFVar15) break;
  } while (pFVar15->Score < pFVar11->Score || pFVar15->Score == pFVar11->Score);
  uVar3 = *(undefined8 *)&pFVar13[-1].Index;
  if (pFVar9 <= pFVar11) {
    dVar2 = pFVar9->Score;
    iVar8 = pFVar10[1].Index;
    uVar5 = *(undefined4 *)&pFVar10[1].field_0xc;
    pFVar9->Score = pFVar11->Score;
    *(undefined8 *)&pFVar10[1].Index = uVar3;
    pFVar11->Score = dVar2;
    pFVar13[-1].Index = iVar8;
    *(undefined4 *)&pFVar13[-1].field_0xc = uVar5;
    goto LAB_146dd0a90;
  }
  dVar2 = pFVar15->Score;
  iVar8 = pFVar15->Index;
  uVar5 = *(undefined4 *)&pFVar15->field_0xc;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar15->Score = pFVar11->Score;
  *(undefined8 *)&pFVar15->Index = uVar3;
  pFVar11->Score = dVar2;
  pFVar13[-1].Index = iVar8;
  *(undefined4 *)&pFVar13[-1].field_0xc = uVar5;
  if ((longlong)((longlong)pFVar11 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar9 & 0xfffffffffffffff0U)) {
    if (pFVar9 < pFVar14) {
      *ppFVar12 = pFVar9;
      ppFVar12[1] = pFVar14;
      *(int *)(ppFVar12 + 2) = (int)local_338;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar11 <= pFVar15 + 1) goto LAB_146dd0b67;
    pFVar14 = pFVar13 + -2;
    pFVar9 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar11) {
      *ppFVar12 = pFVar15;
      ppFVar12[1] = pFVar13 + -2;
      *(int *)(ppFVar12 + 2) = (int)local_338;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar14 <= pFVar9) goto LAB_146dd0b67;
  }
  iVar8 = (int)((longlong)pFVar14 - (longlong)pFVar9 >> 4) + 1;
  pFVar15 = pFVar9;
  if ((int)local_338 == 0) goto LAB_146dd0b56;
  goto LAB_146dd0a60;
}

// IntroSortInternal<FRecastAreaNavModifierElement,int,FIdentityFunctor,TDereferenceWrapper<FRecastAreaNavModifierElement,`ARecastNavMesh::SortAreasForGenerator'::__l2::FNavAreaSortPredicate>_> @ 146dd0c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FRecastAreaNavModifierElement,int,FIdentityFunctor,TDereferenceWrapper<FRecastAreaNavModifierElement,_ARecastNavMesh::SortAreasForGenerator_::__l2::FNavAreaSortPredicate>_>
          (FRecastAreaNavModifierElement *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRecastAreaNavModifierElement,_public:_virtual_void___cdecl_ARecastNavMesh::SortAreasForGenerator(TArray<FRecastAreaNavModifierElement,TSizedDefaultAllocator<32>_>_&)const_::_2_::FNavAreaSortPredicate>
          param_4)

{
  undefined8 *puVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FRecastAreaNavModifierElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FScriptContainerElement *pFVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FRecastAreaNavModifierElement *pFVar15;
  int iVar16;
  undefined6 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ENavigationDataResolution EVar22;
  bool bVar23;
  undefined6 uVar24;
  bool bVar25;
  int iVar26;
  UObject *pUVar27;
  UClass *pUVar28;
  UObject *pUVar29;
  int iVar30;
  longlong lVar31;
  FRecastAreaNavModifierElement **ppFVar32;
  FRecastAreaNavModifierElement *pFVar33;
  FRecastAreaNavModifierElement *pFVar34;
  FRecastAreaNavModifierElement *pFVar35;
  float fVar36;
  undefined1 auStackY_3f8 [32];
  FIdentityFunctor local_3c0 [8];
  FIdentityFunctor local_3b8 [8];
  FIdentityFunctor local_3b0;
  FRecastAreaNavModifierElement *local_3a8;
  FRecastAreaNavModifierElement **local_3a0;
  FRecastAreaNavModifierElement *local_398;
  FRecastAreaNavModifierElement *local_390;
  int local_388;
  FRecastAreaNavModifierElement *local_380;
  TDereferenceWrapper<FRecastAreaNavModifierElement,_public:_virtual_void___cdecl_ARecastNavMesh::SortAreasForGenerator(TArray<FRecastAreaNavModifierElement,TSizedDefaultAllocator<32>_>_&)const_::_2_::FNavAreaSortPredicate>
  local_378;
  TReversePredicate<TDereferenceWrapper<FRecastAreaNavModifierElement,_public:_virtual_void___cdecl_ARecastNavMesh::SortAreasForGenerator(TArray<FRecastAreaNavModifierElement,TSizedDefaultAllocator<32>_>_&)const_::_2_::FNavAreaSortPredicate>_>
  local_370;
  TReversePredicate<TDereferenceWrapper<FRecastAreaNavModifierElement,_public:_virtual_void___cdecl_ARecastNavMesh::SortAreasForGenerator(TArray<FRecastAreaNavModifierElement,TSizedDefaultAllocator<32>_>_&)const_::_2_::FNavAreaSortPredicate>_>
  local_368 [3];
  FRecastAreaNavModifierElement *local_350;
  FRecastAreaNavModifierElement *local_348;
  FRecastAreaNavModifierElement *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (param_2 < 2) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_340 = param_1 + (longlong)param_2 + -1;
  local_3b0 = param_3;
  local_348 = param_1;
  fVar36 = logf((float)param_2 * (float)param_2);
  local_338 = (undefined4)(longlong)fVar36;
  memset(local_330,0,0x2e8);
  local_3a0 = &local_348;
LAB_146dd0d30:
  local_3a8 = local_3a0[1];
  pFVar35 = *local_3a0;
  local_350 = local_3a0[2];
  iVar30 = (int)(((longlong)local_3a8 - (longlong)pFVar35) / 0x28) + 1;
  local_388 = (int)local_350;
  if ((int)local_350 != 0) {
    do {
      pFVar33 = local_3a8;
      ppFVar32 = local_3a0;
      if (iVar30 < 9) goto joined_r0x000146dd137c;
      iVar26 = (pFVar35->Areas).ArrayNum;
      iVar16 = (pFVar35->Areas).ArrayMax;
      iVar30 = iVar30 / 2;
      pFVar33 = pFVar35 + iVar30;
      pFVar5 = (pFVar33->Areas).AllocatorInstance.Data;
      iVar18 = (pFVar33->Areas).ArrayNum;
      iVar19 = (pFVar33->Areas).ArrayMax;
      pTVar2 = &pFVar35[iVar30].PerInstanceTransform;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      iVar20 = pTVar2->ArrayNum;
      iVar21 = pTVar2->ArrayMax;
      pFVar33 = pFVar35 + iVar30;
      EVar22 = pFVar33->NavMeshResolution;
      bVar23 = pFVar33->bMaskFillCollisionUnderneathForNavmesh;
      uVar24 = *(undefined6 *)&pFVar33->field_0x22;
      pFVar33 = pFVar35 + iVar30;
      (pFVar33->Areas).AllocatorInstance.Data = (pFVar35->Areas).AllocatorInstance.Data;
      (pFVar33->Areas).ArrayNum = iVar26;
      (pFVar33->Areas).ArrayMax = iVar16;
      iVar26 = (pFVar35->PerInstanceTransform).ArrayNum;
      iVar16 = (pFVar35->PerInstanceTransform).ArrayMax;
      pTVar2 = &pFVar35[iVar30].PerInstanceTransform;
      (pTVar2->AllocatorInstance).Data = (pFVar35->PerInstanceTransform).AllocatorInstance.Data;
      pTVar2->ArrayNum = iVar26;
      pTVar2->ArrayMax = iVar16;
      bVar25 = pFVar35->bMaskFillCollisionUnderneathForNavmesh;
      uVar17 = *(undefined6 *)&pFVar35->field_0x22;
      pFVar33 = pFVar35 + iVar30;
      pFVar33->NavMeshResolution = pFVar35->NavMeshResolution;
      pFVar33->bMaskFillCollisionUnderneathForNavmesh = bVar25;
      *(undefined6 *)&pFVar33->field_0x22 = uVar17;
      local_390 = local_3a8 + 1;
      (pFVar35->Areas).AllocatorInstance.Data = pFVar5;
      (pFVar35->Areas).ArrayNum = iVar18;
      (pFVar35->Areas).ArrayMax = iVar19;
      (pFVar35->PerInstanceTransform).AllocatorInstance.Data = pFVar6;
      (pFVar35->PerInstanceTransform).ArrayNum = iVar20;
      (pFVar35->PerInstanceTransform).ArrayMax = iVar21;
      pFVar35->NavMeshResolution = EVar22;
      pFVar35->bMaskFillCollisionUnderneathForNavmesh = bVar23;
      *(undefined6 *)&pFVar35->field_0x22 = uVar24;
      pFVar33 = local_3a8;
      local_398 = pFVar35;
LAB_146dd0df0:
      do {
        pFVar34 = local_398 + 1;
        if (pFVar33 < pFVar34) break;
        iVar30 = (pFVar35->Areas).ArrayNum;
        if ((iVar30 == 0) || (pFVar15 = local_398 + 1, local_398[1].Areas.ArrayNum == 0)) {
          bVar25 = iVar30 <= local_398[1].Areas.ArrayNum;
          local_398 = pFVar34;
        }
        else {
          pFVar33 = pFVar34;
          local_380 = local_398;
          if ((iVar30 < 1) &&
             (local_398 = pFVar34,
             bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             pFVar33 = local_398, bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_398 = pFVar33;
          pFVar5 = (pFVar35->Areas).AllocatorInstance.Data;
          if (((pFVar15->Areas).ArrayNum < 1) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = (pFVar34->Areas).AllocatorInstance.Data;
          pUVar27 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar5 + 0x14));
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar27 != (UObject *)0x0) goto LAB_146dd0ec7;
LAB_146dd0ef5:
            pUVar27 = (UObject *)0x0;
          }
          else {
            if (pUVar27 == (UObject *)0x0) goto LAB_146dd0ef5;
            UE::GC::MarkAsReachable(pUVar27);
LAB_146dd0ec7:
            pUVar28 = Z_Construct_UClass_UNavAreaBase_NoRegister();
            if (pUVar28 == (UClass *)0x0) goto LAB_146dd0ef5;
            iVar30 = (int)pUVar28->_padding_;
            if ((*(int *)&pUVar27[1].field_0x10 < iVar30) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar27[1].field_0x8 + (longlong)iVar30 * 8) !=
                &pUVar28->_padding_)) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
            if (!bVar25) goto LAB_146dd0ef5;
          }
          pUVar29 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar6 + 0x14));
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar29 != (UObject *)0x0) goto LAB_146dd0f28;
LAB_146dd0f57:
            pUVar29 = (UObject *)0x0;
          }
          else {
            if (pUVar29 == (UObject *)0x0) goto LAB_146dd0f57;
            UE::GC::MarkAsReachable(pUVar29);
LAB_146dd0f28:
            pUVar28 = Z_Construct_UClass_UNavAreaBase_NoRegister();
            if (pUVar28 == (UClass *)0x0) goto LAB_146dd0f57;
            iVar30 = (int)pUVar28->_padding_;
            if ((*(int *)&pUVar29[1].field_0x10 < iVar30) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar29[1].field_0x8 + (longlong)iVar30 * 8) !=
                &pUVar28->_padding_)) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
            if (!bVar25) goto LAB_146dd0f57;
          }
          pFVar33 = local_3a8;
          if ((pUVar27 != (UObject *)0x0) == (pUVar29 != (UObject *)0x0)) {
            if (*(float *)(pFVar5 + 4) == *(float *)(pFVar6 + 4)) {
              if (*(float *)(pFVar5 + 8) == *(float *)(pFVar6 + 8)) {
                bVar25 = pFVar35->NavMeshResolution < local_380[1].NavMeshResolution;
              }
              else {
                bVar25 = *(float *)(pFVar5 + 8) < *(float *)(pFVar6 + 8);
              }
            }
            else {
              bVar25 = *(float *)(pFVar5 + 4) < *(float *)(pFVar6 + 4);
            }
          }
          else {
            bVar25 = pUVar27 == (UObject *)0x0;
          }
        }
        pFVar34 = local_398;
      } while (!bVar25);
      do {
        local_398 = pFVar34;
        pFVar33 = local_390 + -1;
        local_380 = local_390;
        if (pFVar33 <= pFVar35) break;
        iVar30 = local_390[-1].Areas.ArrayNum;
        if ((iVar30 == 0) || ((pFVar35->Areas).ArrayNum == 0)) {
          bVar25 = iVar30 <= (pFVar35->Areas).ArrayNum;
        }
        else {
          local_390 = pFVar33;
          if ((iVar30 < 1) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar5 = (pFVar33->Areas).AllocatorInstance.Data;
          if (((pFVar35->Areas).ArrayNum < 1) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = (pFVar35->Areas).AllocatorInstance.Data;
          pUVar27 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar5 + 0x14));
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar27 != (UObject *)0x0) goto LAB_146dd10b5;
LAB_146dd10e3:
            pUVar27 = (UObject *)0x0;
          }
          else {
            if (pUVar27 == (UObject *)0x0) goto LAB_146dd10e3;
            UE::GC::MarkAsReachable(pUVar27);
LAB_146dd10b5:
            pUVar28 = Z_Construct_UClass_UNavAreaBase_NoRegister();
            if (pUVar28 == (UClass *)0x0) goto LAB_146dd10e3;
            iVar30 = (int)pUVar28->_padding_;
            if ((*(int *)&pUVar27[1].field_0x10 < iVar30) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar27[1].field_0x8 + (longlong)iVar30 * 8) !=
                &pUVar28->_padding_)) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
            if (!bVar25) goto LAB_146dd10e3;
          }
          pUVar29 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar6 + 0x14));
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar29 != (UObject *)0x0) goto LAB_146dd1116;
LAB_146dd1145:
            pUVar29 = (UObject *)0x0;
          }
          else {
            if (pUVar29 == (UObject *)0x0) goto LAB_146dd1145;
            UE::GC::MarkAsReachable(pUVar29);
LAB_146dd1116:
            pUVar28 = Z_Construct_UClass_UNavAreaBase_NoRegister();
            if (pUVar28 == (UClass *)0x0) goto LAB_146dd1145;
            iVar30 = (int)pUVar28->_padding_;
            if ((*(int *)&pUVar29[1].field_0x10 < iVar30) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar29[1].field_0x8 + (longlong)iVar30 * 8) !=
                &pUVar28->_padding_)) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
            if (!bVar25) goto LAB_146dd1145;
          }
          if ((pUVar27 != (UObject *)0x0) == (pUVar29 != (UObject *)0x0)) {
            if (*(float *)(pFVar5 + 4) == *(float *)(pFVar6 + 4)) {
              if (*(float *)(pFVar5 + 8) == *(float *)(pFVar6 + 8)) {
                bVar25 = local_380[-1].NavMeshResolution < pFVar35->NavMeshResolution;
                pFVar33 = local_390;
              }
              else {
                bVar25 = *(float *)(pFVar5 + 8) < *(float *)(pFVar6 + 8);
                pFVar33 = local_390;
              }
            }
            else {
              bVar25 = *(float *)(pFVar5 + 4) < *(float *)(pFVar6 + 4);
              pFVar33 = local_390;
            }
          }
          else {
            bVar25 = pUVar27 == (UObject *)0x0;
            pFVar33 = local_390;
          }
        }
        local_390 = pFVar33;
        pFVar34 = local_398;
        pFVar33 = local_390;
      } while (!bVar25);
      local_390 = pFVar33;
      pFVar5 = (local_390->Areas).AllocatorInstance.Data;
      uVar9 = (local_390->Areas).ArrayNum;
      uVar10 = (local_390->Areas).ArrayMax;
      if (local_398 <= local_390) {
        pFVar6 = (local_398->Areas).AllocatorInstance.Data;
        iVar16 = (local_398->Areas).ArrayNum;
        iVar18 = (local_398->Areas).ArrayMax;
        pFVar11 = (local_398->PerInstanceTransform).AllocatorInstance.Data;
        iVar19 = (local_398->PerInstanceTransform).ArrayNum;
        iVar20 = (local_398->PerInstanceTransform).ArrayMax;
        EVar22 = local_398->NavMeshResolution;
        bVar23 = local_398->bMaskFillCollisionUnderneathForNavmesh;
        uVar24 = *(undefined6 *)&local_398->field_0x22;
        (local_398->Areas).AllocatorInstance.Data = pFVar5;
        (local_398->Areas).ArrayNum = uVar9;
        (local_398->Areas).ArrayMax = uVar10;
        iVar30 = (local_390->PerInstanceTransform).ArrayNum;
        iVar26 = (local_390->PerInstanceTransform).ArrayMax;
        (local_398->PerInstanceTransform).AllocatorInstance.Data =
             (local_390->PerInstanceTransform).AllocatorInstance.Data;
        (local_398->PerInstanceTransform).ArrayNum = iVar30;
        (local_398->PerInstanceTransform).ArrayMax = iVar26;
        bVar25 = local_390->bMaskFillCollisionUnderneathForNavmesh;
        uVar17 = *(undefined6 *)&local_390->field_0x22;
        local_398->NavMeshResolution = local_390->NavMeshResolution;
        local_398->bMaskFillCollisionUnderneathForNavmesh = bVar25;
        *(undefined6 *)&local_398->field_0x22 = uVar17;
        (local_390->Areas).AllocatorInstance.Data = pFVar6;
        (local_390->Areas).ArrayNum = iVar16;
        (local_390->Areas).ArrayMax = iVar18;
        (local_390->PerInstanceTransform).AllocatorInstance.Data = pFVar11;
        (local_390->PerInstanceTransform).ArrayNum = iVar19;
        (local_390->PerInstanceTransform).ArrayMax = iVar20;
        local_390->NavMeshResolution = EVar22;
        local_390->bMaskFillCollisionUnderneathForNavmesh = bVar23;
        *(undefined6 *)&local_390->field_0x22 = uVar24;
        pFVar33 = local_3a8;
        goto LAB_146dd0df0;
      }
      pFVar6 = (pFVar35->Areas).AllocatorInstance.Data;
      iVar16 = (pFVar35->Areas).ArrayNum;
      iVar18 = (pFVar35->Areas).ArrayMax;
      pFVar11 = (pFVar35->PerInstanceTransform).AllocatorInstance.Data;
      iVar19 = (pFVar35->PerInstanceTransform).ArrayNum;
      iVar20 = (pFVar35->PerInstanceTransform).ArrayMax;
      EVar22 = pFVar35->NavMeshResolution;
      bVar23 = pFVar35->bMaskFillCollisionUnderneathForNavmesh;
      uVar24 = *(undefined6 *)&pFVar35->field_0x22;
      (pFVar35->Areas).AllocatorInstance.Data = pFVar5;
      (pFVar35->Areas).ArrayNum = uVar9;
      (pFVar35->Areas).ArrayMax = uVar10;
      local_388 = local_388 + -1;
      iVar30 = (local_390->PerInstanceTransform).ArrayNum;
      iVar26 = (local_390->PerInstanceTransform).ArrayMax;
      (pFVar35->PerInstanceTransform).AllocatorInstance.Data =
           (local_390->PerInstanceTransform).AllocatorInstance.Data;
      (pFVar35->PerInstanceTransform).ArrayNum = iVar30;
      (pFVar35->PerInstanceTransform).ArrayMax = iVar26;
      bVar25 = local_390->bMaskFillCollisionUnderneathForNavmesh;
      uVar17 = *(undefined6 *)&local_390->field_0x22;
      pFVar35->NavMeshResolution = local_390->NavMeshResolution;
      pFVar35->bMaskFillCollisionUnderneathForNavmesh = bVar25;
      *(undefined6 *)&pFVar35->field_0x22 = uVar17;
      (local_390->Areas).AllocatorInstance.Data = pFVar6;
      (local_390->Areas).ArrayNum = iVar16;
      (local_390->Areas).ArrayMax = iVar18;
      (local_390->PerInstanceTransform).AllocatorInstance.Data = pFVar11;
      (local_390->PerInstanceTransform).ArrayNum = iVar19;
      (local_390->PerInstanceTransform).ArrayMax = iVar20;
      local_390->NavMeshResolution = EVar22;
      local_390->bMaskFillCollisionUnderneathForNavmesh = bVar23;
      *(undefined6 *)&local_390->field_0x22 = uVar24;
      if (((longlong)local_390 + (-0x28 - (longlong)pFVar35)) / 0x28 <
          ((longlong)local_3a8 - (longlong)local_398) / 0x28) {
        if (local_398 < local_3a8) {
          *local_3a0 = local_398;
          local_3a0[1] = local_3a8;
          *(int *)(local_3a0 + 2) = local_388;
          local_3a0 = local_3a0 + 3;
        }
        ppFVar32 = local_3a0;
        if (local_390 <= pFVar35 + 1) goto LAB_146dd15e8;
        local_3a8 = local_390 + -1;
      }
      else {
        if (pFVar35 + 1 < local_390) {
          *local_3a0 = pFVar35;
          local_3a0[1] = local_390 + -1;
          *(int *)(local_3a0 + 2) = local_388;
          local_3a0 = local_3a0 + 3;
        }
        ppFVar32 = local_3a0;
        pFVar35 = local_398;
        if (local_3a8 <= local_398) goto LAB_146dd15e8;
      }
      iVar30 = (int)(((longlong)local_3a8 - (longlong)pFVar35) / 0x28) + 1;
    } while (local_388 != 0);
    local_388 = 0;
  }
  ppFVar32 = local_3a0;
  local_3b8[0] = param_3;
  local_378.Predicate = param_4.Predicate;
  if (iVar30 < 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar25) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
LAB_146dd164c:
    local_368[0].Predicate = &local_378;
    local_370.Predicate = &local_378;
    local_3c0[0] = param_3;
    if ((iVar30 < 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar26 = (iVar30 + -2) / 2;
    HeapSiftDown<FRecastAreaNavModifierElement,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FRecastAreaNavModifierElement,_ARecastNavMesh::SortAreasForGenerator_::__l2::FNavAreaSortPredicate>_>_>
              (pFVar35,iVar26,iVar30,local_3c0,&local_370);
    while (iVar26 != 0) {
      iVar26 = iVar26 + -1;
      HeapSiftDown<FRecastAreaNavModifierElement,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FRecastAreaNavModifierElement,_ARecastNavMesh::SortAreasForGenerator_::__l2::FNavAreaSortPredicate>_>_>
                (pFVar35,iVar26,iVar30,local_3c0,&local_370);
    }
    iVar30 = iVar30 + -1;
    if (0 < iVar30) {
      lVar31 = (longlong)iVar30 * 0x28;
      do {
        puVar1 = (undefined8 *)((longlong)&(pFVar35->Areas).AllocatorInstance.Data + lVar31);
        uVar12 = puVar1[1];
        pFVar5 = (pFVar35->Areas).AllocatorInstance.Data;
        uVar13 = *(undefined8 *)&(pFVar35->Areas).ArrayNum;
        pFVar6 = (pFVar35->PerInstanceTransform).AllocatorInstance.Data;
        uVar14 = *(undefined8 *)&(pFVar35->PerInstanceTransform).ArrayNum;
        uVar4 = *(undefined8 *)&pFVar35->NavMeshResolution;
        (pFVar35->Areas).AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
        (pFVar35->Areas).ArrayNum = (int)uVar12;
        (pFVar35->Areas).ArrayMax = (int)((ulonglong)uVar12 >> 0x20);
        puVar1 = (undefined8 *)
                 ((longlong)&(pFVar35->PerInstanceTransform).AllocatorInstance.Data + lVar31);
        uVar12 = puVar1[1];
        (pFVar35->PerInstanceTransform).AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
        (pFVar35->PerInstanceTransform).ArrayNum = (int)uVar12;
        (pFVar35->PerInstanceTransform).ArrayMax = (int)((ulonglong)uVar12 >> 0x20);
        *(undefined8 *)&pFVar35->NavMeshResolution =
             *(undefined8 *)(&pFVar35->NavMeshResolution + lVar31);
        puVar1 = (undefined8 *)((longlong)&(pFVar35->Areas).AllocatorInstance.Data + lVar31);
        *puVar1 = pFVar5;
        puVar1[1] = uVar13;
        puVar1 = (undefined8 *)
                 ((longlong)&(pFVar35->PerInstanceTransform).AllocatorInstance.Data + lVar31);
        *puVar1 = pFVar6;
        puVar1[1] = uVar14;
        *(undefined8 *)(&pFVar35->NavMeshResolution + lVar31) = uVar4;
        HeapSiftDown<FRecastAreaNavModifierElement,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FRecastAreaNavModifierElement,_ARecastNavMesh::SortAreasForGenerator_::__l2::FNavAreaSortPredicate>_>_>
                  (pFVar35,0,iVar30,local_3b8,local_368);
        iVar30 = iVar30 + -1;
        lVar31 = lVar31 + -0x28;
      } while (0 < iVar30);
    }
  }
  else if (iVar30 != 0) goto LAB_146dd164c;
  goto LAB_146dd15e8;
joined_r0x000146dd137c:
  while (pFVar15 = pFVar35, local_3a8 = pFVar33, local_3a0 = ppFVar32, pFVar34 = pFVar35,
        pFVar35 < pFVar33) {
    while (pFVar34 = pFVar34 + 1, pFVar34 <= pFVar33) {
      iVar30 = (pFVar15->Areas).ArrayNum;
      if ((iVar30 == 0) || ((pFVar34->Areas).ArrayNum == 0)) {
        bVar25 = iVar30 <= (pFVar34->Areas).ArrayNum;
      }
      else {
        if ((iVar30 < 1) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_398 = (FRecastAreaNavModifierElement *)(pFVar15->Areas).AllocatorInstance.Data;
        if (((pFVar34->Areas).ArrayNum < 1) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (FRecastAreaNavModifierElement *)(pFVar34->Areas).AllocatorInstance.Data;
        local_380 = pFVar7;
        pUVar27 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((longlong)
                                       &(local_398->PerInstanceTransform).AllocatorInstance.Data + 4
                                      ));
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar27 != (UObject *)0x0) goto LAB_146dd147c;
LAB_146dd14aa:
          pUVar27 = (UObject *)0x0;
        }
        else {
          if (pUVar27 == (UObject *)0x0) goto LAB_146dd14aa;
          UE::GC::MarkAsReachable(pUVar27);
LAB_146dd147c:
          pUVar28 = Z_Construct_UClass_UNavAreaBase_NoRegister();
          if (pUVar28 == (UClass *)0x0) goto LAB_146dd14aa;
          iVar30 = (int)pUVar28->_padding_;
          if ((*(int *)&pUVar27[1].field_0x10 < iVar30) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)&pUVar27[1].field_0x8 + (longlong)iVar30 * 8) !=
              &pUVar28->_padding_)) {
            bVar25 = false;
          }
          else {
            bVar25 = true;
          }
          if (!bVar25) goto LAB_146dd14aa;
        }
        pUVar29 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((longlong)
                                       &(pFVar7->PerInstanceTransform).AllocatorInstance.Data + 4));
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar29 != (UObject *)0x0) goto LAB_146dd14dd;
LAB_146dd150c:
          pUVar29 = (UObject *)0x0;
        }
        else {
          if (pUVar29 == (UObject *)0x0) goto LAB_146dd150c;
          UE::GC::MarkAsReachable(pUVar29);
LAB_146dd14dd:
          pUVar28 = Z_Construct_UClass_UNavAreaBase_NoRegister();
          if (pUVar28 == (UClass *)0x0) goto LAB_146dd150c;
          iVar30 = (int)pUVar28->_padding_;
          if ((*(int *)&pUVar29[1].field_0x10 < iVar30) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)&pUVar29[1].field_0x8 + (longlong)iVar30 * 8) !=
              &pUVar28->_padding_)) {
            bVar25 = false;
          }
          else {
            bVar25 = true;
          }
          if (!bVar25) goto LAB_146dd150c;
        }
        if ((pUVar27 != (UObject *)0x0) == (pUVar29 != (UObject *)0x0)) {
          fVar36 = *(float *)((longlong)&(local_380->Areas).AllocatorInstance.Data + 4);
          fVar3 = *(float *)((longlong)&(local_398->Areas).AllocatorInstance.Data + 4);
          if (fVar3 == fVar36) {
            fVar36 = (float)(local_380->Areas).ArrayNum;
            fVar3 = (float)(local_398->Areas).ArrayNum;
            if (fVar3 == fVar36) {
              bVar25 = pFVar15->NavMeshResolution < pFVar34->NavMeshResolution;
            }
            else {
              bVar25 = fVar3 < fVar36;
            }
          }
          else {
            bVar25 = fVar3 < fVar36;
          }
        }
        else {
          bVar25 = pUVar27 == (UObject *)0x0;
        }
      }
      if (bVar25) {
        pFVar15 = pFVar34;
      }
    }
    pFVar5 = (pFVar15->Areas).AllocatorInstance.Data;
    iVar16 = (pFVar15->Areas).ArrayNum;
    iVar18 = (pFVar15->Areas).ArrayMax;
    EVar22 = pFVar15->NavMeshResolution;
    bVar23 = pFVar15->bMaskFillCollisionUnderneathForNavmesh;
    uVar24 = *(undefined6 *)&pFVar15->field_0x22;
    pFVar6 = (pFVar15->PerInstanceTransform).AllocatorInstance.Data;
    iVar19 = (pFVar15->PerInstanceTransform).ArrayNum;
    iVar20 = (pFVar15->PerInstanceTransform).ArrayMax;
    iVar30 = (local_3a8->Areas).ArrayNum;
    iVar26 = (local_3a8->Areas).ArrayMax;
    (pFVar15->Areas).AllocatorInstance.Data = (local_3a8->Areas).AllocatorInstance.Data;
    (pFVar15->Areas).ArrayNum = iVar30;
    (pFVar15->Areas).ArrayMax = iVar26;
    iVar30 = (local_3a8->PerInstanceTransform).ArrayNum;
    iVar26 = (local_3a8->PerInstanceTransform).ArrayMax;
    (pFVar15->PerInstanceTransform).AllocatorInstance.Data =
         (local_3a8->PerInstanceTransform).AllocatorInstance.Data;
    (pFVar15->PerInstanceTransform).ArrayNum = iVar30;
    (pFVar15->PerInstanceTransform).ArrayMax = iVar26;
    bVar25 = local_3a8->bMaskFillCollisionUnderneathForNavmesh;
    uVar17 = *(undefined6 *)&local_3a8->field_0x22;
    pFVar15->NavMeshResolution = local_3a8->NavMeshResolution;
    pFVar15->bMaskFillCollisionUnderneathForNavmesh = bVar25;
    *(undefined6 *)&pFVar15->field_0x22 = uVar17;
    (local_3a8->Areas).AllocatorInstance.Data = pFVar5;
    (local_3a8->Areas).ArrayNum = iVar16;
    (local_3a8->Areas).ArrayMax = iVar18;
    (local_3a8->PerInstanceTransform).AllocatorInstance.Data = pFVar6;
    (local_3a8->PerInstanceTransform).ArrayNum = iVar19;
    (local_3a8->PerInstanceTransform).ArrayMax = iVar20;
    local_3a8->NavMeshResolution = EVar22;
    local_3a8->bMaskFillCollisionUnderneathForNavmesh = bVar23;
    *(undefined6 *)&local_3a8->field_0x22 = uVar24;
    param_3 = local_3b0;
    ppFVar32 = local_3a0;
    pFVar33 = local_3a8 + -1;
  }
LAB_146dd15e8:
  local_3a0 = ppFVar32 + -3;
  if (local_3a0 < &local_348) {
    return;
  }
  goto LAB_146dd0d30;
}

// IsObjectPtrEqual<ANavigationTestingActor,ANavigationTestingActor_*,0> @ 146dd17d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<ANavigationTestingActor,ANavigationTestingActor_*,0>
          (TObjectPtr<ANavigationTestingActor> *param_1,ANavigationTestingActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ANavigationTestingActor *)0x0) {
    return *param_2 == (ANavigationTestingActor *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<`FNavMeshSceneProxyData::GatherData'::__l183::<lambda_3>_>_>_> @ 146dd17f0

void __cdecl
AlgoImpl::
Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<_FNavMeshSceneProxyData::GatherData_::__l183::<lambda_3>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,
          FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_void___cdecl_FNavMeshSceneProxyData::GatherData(ARecastNavMesh_const_*,int,TArray<FNavTileRef,TSizedDefaultAllocator<32>_>_const_&)_::_183_::<lambda_3>_>_>
          param_5)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_s_1 TVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar11;
  
  if (0 < param_2) {
    iVar6 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar8 = 0;
      if (0 < param_2 - iVar6) {
        uVar7 = param_2 - iVar6;
        do {
          iVar4 = (uVar7 >> 1) + iVar8;
          if (param_1[(longlong)iVar4 + (longlong)iVar6]._s_1.PrevFreeIndex <=
              param_1[param_2]._s_1.PrevFreeIndex) {
            iVar8 = iVar4 + (uVar7 & 1);
          }
          uVar9 = uVar7 >> 1;
          uVar7 = uVar7 >> 1;
        } while (uVar9 != 0);
      }
      iVar6 = iVar6 + iVar8;
      if (param_2 <= iVar6) {
        return;
      }
      iVar8 = 0;
      pTVar1 = param_1 + iVar6;
      if (0 < param_3 - param_2) {
        uVar7 = param_3 - param_2;
        iVar8 = 0;
        do {
          uVar9 = uVar7 >> 1;
          if (param_1[(longlong)(int)(uVar9 + iVar8) + (longlong)param_2]._s_1.PrevFreeIndex <
              (pTVar1->_s_1).PrevFreeIndex) {
            iVar8 = uVar9 + iVar8 + (uVar7 & 1);
          }
          uVar7 = uVar9;
        } while (uVar9 != 0);
      }
      iVar5 = (iVar8 - iVar6) + param_2;
      iVar4 = param_2 - iVar6;
      if ((iVar4 != 0) && (iVar4 < iVar5)) {
        pTVar10 = pTVar1 + iVar4;
        pTVar13 = pTVar1;
        pTVar11 = pTVar1 + iVar4;
        do {
          while( true ) {
            pTVar12 = pTVar10 + 1;
            pTVar14 = pTVar13 + 1;
            TVar2 = pTVar13->_s_1;
            uVar3 = *(undefined4 *)((pTVar13->ElementData).Pad + 8);
            pTVar13->_s_1 = pTVar10->_s_1;
            *(undefined4 *)((pTVar13->ElementData).Pad + 8) =
                 *(undefined4 *)((longlong)(pTVar10->ElementData).Pad + 8);
            pTVar10->_s_1 = TVar2;
            *(undefined4 *)((longlong)(pTVar10->ElementData).Pad + 8) = uVar3;
            pTVar13 = pTVar14;
            if (pTVar12 == pTVar1 + iVar5) break;
            pTVar10 = pTVar12;
            if (pTVar14 == pTVar11) {
              pTVar11 = pTVar12;
            }
          }
          pTVar10 = pTVar11;
        } while (pTVar14 != pTVar11);
      }
      param_2 = param_2 + iVar8;
      iVar6 = iVar6 + 1 + iVar8;
    } while (iVar6 < param_2);
  }
  return;
}

// NewObject<UBaseGeneratedNavLinksProxy> @ 146dd1970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBaseGeneratedNavLinksProxy * __cdecl
NewObject<UBaseGeneratedNavLinksProxy>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UBaseGeneratedNavLinksProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UBaseGeneratedNavLinksProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNavMeshRenderingComponent> @ 146dd1a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavMeshRenderingComponent * __cdecl
NewObject<UNavMeshRenderingComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UNavMeshRenderingComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UNavMeshRenderingComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UNavMeshRenderingComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<URecastNavMeshDataChunk> @ 146dd1b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URecastNavMeshDataChunk * __cdecl NewObject<URecastNavMeshDataChunk>(UObject *param_1)

{
  UClass *pUVar1;
  URecastNavMeshDataChunk *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (URecastNavMeshDataChunk *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// Reverse<double> @ 146dd20d0

void __cdecl AlgoImpl::Reverse<double>(double *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar2 = param_2 + -1;
  lVar4 = 0;
  lVar7 = (longlong)(param_2 / 2);
  if (lVar7 < 4) {
    if (param_2 / 2 < 1) {
      return;
    }
    lVar5 = (longlong)iVar2;
  }
  else {
    lVar8 = (lVar7 - 4U >> 2) + 1;
    lVar4 = lVar8 * 4;
    lVar5 = (longlong)iVar2 + lVar8 * -4;
    pdVar3 = param_1 + (longlong)iVar2 + -2;
    pdVar6 = param_1 + 2;
    do {
      dVar1 = pdVar6[-2];
      pdVar6[-2] = pdVar3[2];
      pdVar3[2] = dVar1;
      dVar1 = pdVar6[-1];
      pdVar6[-1] = pdVar3[1];
      pdVar3[1] = dVar1;
      dVar1 = *pdVar6;
      *pdVar6 = *pdVar3;
      *pdVar3 = dVar1;
      dVar1 = pdVar6[1];
      pdVar6[1] = pdVar3[-1];
      pdVar3[-1] = dVar1;
      lVar8 = lVar8 + -1;
      pdVar3 = pdVar3 + -4;
      pdVar6 = pdVar6 + 4;
    } while (lVar8 != 0);
    if (lVar7 <= lVar4) {
      return;
    }
  }
  pdVar3 = param_1 + lVar5;
  do {
    dVar1 = param_1[lVar4];
    param_1[lVar4] = *pdVar3;
    lVar4 = lVar4 + 1;
    *pdVar3 = dVar1;
    pdVar3 = pdVar3 + -1;
  } while (lVar4 < lVar7);
  return;
}

// Reverse<FNavPathPoint> @ 146dd21c0

void __cdecl AlgoImpl::Reverse<FNavPathPoint>(FNavPathPoint *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FNavPathPoint *pFVar11;
  longlong lVar12;
  
  lVar12 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar11 = param_1 + (param_2 + -1);
    do {
      lVar1 = pFVar11->_padding_;
      lVar2 = param_1->_padding_;
      lVar3 = param_1->_padding_;
      lVar4 = param_1->_padding_;
      lVar5 = param_1->_padding_;
      uVar9 = param_1->Flags;
      uVar10 = param_1->CustomLinkId;
      uVar6 = (param_1->CustomNavLinkId).Id;
      param_1->_padding_ = pFVar11->_padding_;
      param_1->_padding_ = lVar1;
      lVar1 = pFVar11->_padding_;
      param_1->_padding_ = pFVar11->_padding_;
      param_1->_padding_ = lVar1;
      uVar8 = pFVar11->CustomLinkId;
      uVar7 = (pFVar11->CustomNavLinkId).Id;
      param_1->Flags = pFVar11->Flags;
      param_1->CustomLinkId = uVar8;
      (param_1->CustomNavLinkId).Id = uVar7;
      pFVar11->_padding_ = lVar2;
      pFVar11->_padding_ = lVar3;
      pFVar11->_padding_ = lVar4;
      pFVar11->_padding_ = lVar5;
      pFVar11->Flags = uVar9;
      pFVar11->CustomLinkId = uVar10;
      (pFVar11->CustomNavLinkId).Id = uVar6;
      lVar12 = lVar12 + -1;
      pFVar11 = pFVar11 + -1;
      param_1 = param_1 + 1;
    } while (lVar12 != 0);
  }
  return;
}

// Reverse<FNavigationPortalEdge> @ 146dd2240

void __cdecl AlgoImpl::Reverse<FNavigationPortalEdge>(FNavigationPortalEdge *param_1,int param_2)

{
  ulong64 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FNavigationPortalEdge *pFVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar9 = param_1 + (param_2 + -1);
    do {
      uVar1 = param_1->ToRef;
      dVar2 = (pFVar9->Left).field0_0x0._s_0.Y;
      dVar3 = (param_1->Left).field0_0x0._s_0.X;
      dVar4 = (param_1->Left).field0_0x0._s_0.Y;
      dVar5 = (param_1->Left).field0_0x0._s_0.Z;
      dVar6 = (param_1->Right).field0_0x0._s_0.X;
      dVar7 = (param_1->Right).field0_0x0._s_0.Y;
      dVar8 = (param_1->Right).field0_0x0._s_0.Z;
      (param_1->Left).field0_0x0._s_0.X = (pFVar9->Left).field0_0x0._s_0.X;
      (param_1->Left).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar9->Right).field0_0x0._s_0.X;
      (param_1->Left).field0_0x0._s_0.Z = (pFVar9->Left).field0_0x0._s_0.Z;
      (param_1->Right).field0_0x0._s_0.X = dVar2;
      dVar2 = (pFVar9->Right).field0_0x0._s_0.Z;
      (param_1->Right).field0_0x0._s_0.Y = (pFVar9->Right).field0_0x0._s_0.Y;
      (param_1->Right).field0_0x0._s_0.Z = dVar2;
      param_1->ToRef = pFVar9->ToRef;
      (pFVar9->Left).field0_0x0._s_0.X = dVar3;
      (pFVar9->Left).field0_0x0._s_0.Y = dVar4;
      (pFVar9->Left).field0_0x0._s_0.Z = dVar5;
      (pFVar9->Right).field0_0x0._s_0.X = dVar6;
      (pFVar9->Right).field0_0x0._s_0.Y = dVar7;
      (pFVar9->Right).field0_0x0._s_0.Z = dVar8;
      pFVar9->ToRef = uVar1;
      lVar10 = lVar10 + -1;
      pFVar9 = pFVar9 + -1;
      param_1 = param_1 + 1;
    } while (lVar10 != 0);
  }
  return;
}

// Reverse<unsigned___int64> @ 146dd22c0

void __cdecl AlgoImpl::Reverse<unsigned___int64>(ulong64 *param_1,int param_2)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    puVar2 = param_1 + (param_2 + -1);
    do {
      uVar1 = param_1[lVar3];
      param_1[lVar3] = *puVar2;
      lVar3 = lVar3 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> @ 146dd2320

int __cdecl
AlgoImpl::RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *param_1,int param_2,int param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_s_1 TVar1;
  undefined4 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar6;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar3 = param_1;
    pTVar5 = param_1 + param_3;
    pTVar6 = param_1 + param_3;
    do {
      while( true ) {
        pTVar7 = pTVar5 + 1;
        pTVar4 = pTVar3 + 1;
        TVar1 = pTVar3->_s_1;
        uVar2 = *(undefined4 *)((pTVar3->ElementData).Pad + 8);
        pTVar3->_s_1 = pTVar5->_s_1;
        *(undefined4 *)((pTVar3->ElementData).Pad + 8) =
             *(undefined4 *)((longlong)(pTVar5->ElementData).Pad + 8);
        pTVar5->_s_1 = TVar1;
        *(undefined4 *)((longlong)(pTVar5->ElementData).Pad + 8) = uVar2;
        pTVar3 = pTVar4;
        if (pTVar7 == param_1 + param_2) break;
        pTVar5 = pTVar7;
        if (pTVar4 == pTVar6) {
          pTVar6 = pTVar7;
        }
      }
      pTVar5 = pTVar6;
    } while (pTVar4 != pTVar6);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<`FNavMeshSceneProxyData::GatherData'::__l183::<lambda_3>_>_>_> @ 146dd26d0

void __cdecl
AlgoImpl::
StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<_FNavMeshSceneProxyData::GatherData_::__l183::<lambda_3>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_void___cdecl_FNavMeshSceneProxyData::GatherData(ARecastNavMesh_const_*,int,TArray<FNavTileRef,TSizedDefaultAllocator<32>_>_const_&)_::_183_::<lambda_3>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_s_1 TVar1;
  undefined4 uVar2;
  int iVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (0 < param_2) {
    iVar7 = 1;
    lVar9 = ((longlong)param_2 - 1U >> 1) + 1;
    pTVar4 = param_1;
    do {
      if ((iVar7 < param_2) && (pTVar4[1]._s_1.PrevFreeIndex < (pTVar4->_s_1).PrevFreeIndex)) {
        TVar1 = pTVar4->_s_1;
        uVar2 = *(undefined4 *)((pTVar4->ElementData).Pad + 8);
        pTVar4->_s_1 = pTVar4[1]._s_1;
        *(undefined4 *)((pTVar4->ElementData).Pad + 8) = *(undefined4 *)((longlong)pTVar4 + 0x14);
        pTVar4[1]._s_1 = TVar1;
        *(undefined4 *)((longlong)pTVar4 + 0x14) = uVar2;
      }
      iVar7 = iVar7 + 2;
      pTVar4 = pTVar4 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  iVar7 = 2;
  if (2 < param_2) {
    do {
      iVar3 = iVar7 * 2;
      iVar6 = 0;
      iVar5 = param_2;
      do {
        iVar8 = iVar5;
        if (iVar3 <= iVar5) {
          iVar8 = iVar3;
        }
        Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FElementCompareClass<_FNavMeshSceneProxyData::GatherData_::__l183::<lambda_3>_>_>_>
                  (param_1 + iVar6,iVar7,iVar8,param_3,param_4);
        iVar6 = iVar6 + iVar3;
        iVar5 = iVar5 + iVar7 * -2;
      } while (iVar6 < param_2);
      iVar7 = iVar3;
    } while (iVar3 < param_2);
  }
  return;
}

// StaticEnum<enum_EHeightFieldRenderMode> @ 146dd27f0

UEnum * __cdecl StaticEnum<enum_EHeightFieldRenderMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode,(UObject *)pUVar1,
                       L"EHeightFieldRenderMode");
  }
  return Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton;
}

// StaticEnum<enum_ENavLinkBuilderFlags> @ 146dd2830

UEnum * __cdecl StaticEnum<enum_ENavLinkBuilderFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags,(UObject *)pUVar1,
                       L"ENavLinkBuilderFlags");
  }
  return Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton;
}

// StaticEnum<enum_ENavigationLedgeSlopeFilterMode> @ 146dd2870

UEnum * __cdecl StaticEnum<enum_ENavigationLedgeSlopeFilterMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode,
                       (UObject *)pUVar1,L"ENavigationLedgeSlopeFilterMode");
  }
  return Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton;
}

// StaticEnum<enum_ENavCostDisplay::Type> @ 146dd28b0

UEnum * __cdecl StaticEnum<enum_ENavCostDisplay::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay,(UObject *)pUVar1,
                       L"ENavCostDisplay");
  }
  return Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton;
}

// StaticEnum<enum_ERecastPartitioning::Type> @ 146dd28f0

UEnum * __cdecl StaticEnum<enum_ERecastPartitioning::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERecastPartitioning,(UObject *)pUVar1,
                       L"ERecastPartitioning");
  }
  return Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton;
}

// ~TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::__l20::<lambda_1>,0,0> @ 146dd8c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::__l20::<lambda_1>,0,0>::
~TFunction_OwnedObject<_ARecastNavMesh::OnStreamingNavDataAdded_::__l20::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::`20'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~dtQuerySpecialLinkFilter @ 146dda2e0

void __thiscall dtQuerySpecialLinkFilter::~dtQuerySpecialLinkFilter(dtQuerySpecialLinkFilter *this)

{
  *this = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
  return;
}

// operator<< @ 146ddb0b0

FArchive * __cdecl operator<<(FArchive *param_1,short *param_2)

{
  short *psVar1;
  
  psVar1 = (short *)**(undefined8 **)&param_1->field_0x8;
  if (psVar1 + 1 <= (short *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *psVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ushort *)param_2);
  return param_1;
}

// operator() @ 146ddb720

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
<lambda_25>::operator()
          (<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this_00;
  wchar_t *_Str;
  float fVar4;
  double dVar5;
  
  if (param_1->ArrayNum == 0) {
    this_00 = ARecastNavMesh::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    fVar4 = *(float *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0x25].field_0x18;
  }
  else {
    if (param_1->ArrayNum < 1) {
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
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    dVar5 = _wtof(_Str);
    fVar4 = (float)dVar5;
  }
  ARecastNavMesh::DrawDistanceSq = (double)fVar4 * (double)fVar4;
  return;
}

// operator() @ 146ddba00

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
``anonymous_namespace'::RawGeometryFall'::__l2::<lambda_2>::operator()(void *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:___cdecl__double___cdecl__anonymous_namespace_::RawGeometryFall(AActor_const_*,UE::Math::TVector<double>_const_&,double)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RawGeometryFall>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::_TSS0) {
    _Init_thread_header(&``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::_TSS0);
    if (``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::_TSS0 == -1) {
      if (``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::StatPtr_RawGeometryFall ==
          (FThreadSafeStaticStat<_public:___cdecl__double___cdecl__anonymous_namespace_::RawGeometryFall(AActor_const_*,UE::Math::TVector<double>_const_&,double)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RawGeometryFall>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"RawGeometryFall");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::StatPtr_RawGeometryFall,
                   *pFVar1,L"RawGeometryFall","STATGROUP_CollisionTags","STATCAT_Advanced",
                   L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::_TSS0);
    }
  }
  FVar2 = ``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::StatPtr_RawGeometryFall;
  if (``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::StatPtr_RawGeometryFall ==
      (FThreadSafeStaticStat<_public:___cdecl__double___cdecl__anonymous_namespace_::RawGeometryFall(AActor_const_*,UE::Math::TVector<double>_const_&,double)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RawGeometryFall>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"RawGeometryFall");
    FVar2 = (FThreadSafeStaticStat<_public:___cdecl__double___cdecl__anonymous_namespace_::RawGeometryFall(AActor_const_*,UE::Math::TVector<double>_const_&,double)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RawGeometryFall>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &``RawGeometryFall'::`2'::<lambda_2>::operator()'::`2'::
                          StatPtr_RawGeometryFall,*pFVar1,L"RawGeometryFall",
                         "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146ddc258

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ANavigationTestingActor::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ANavigationTestingActor::_vector_deleting_destructor__adjustor_704__
          (ANavigationTestingActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ANavigationTestingActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{712}' @ 146ddc26c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ANavigationTestingActor::`vector deleting
   destructor'`adjustor{712}' (unsigned int) __ptr64 */

void * __thiscall
ANavigationTestingActor::_vector_deleting_destructor__adjustor_712__
          (ANavigationTestingActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ANavigationTestingActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146ddc280

/* [thunk]:public: virtual void * __ptr64 __cdecl ARecastNavMesh::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ARecastNavMesh::_vector_deleting_destructor__adjustor_704__(ARecastNavMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ARecastNavMesh *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 146ddc294

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkComponent::_vector_deleting_destructor__adjustor_592__(UNavLinkComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 146ddc2a8

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkComponent::_vector_deleting_destructor__adjustor_600__(UNavLinkComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 146ddc2bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkComponent::_vector_deleting_destructor__adjustor_608__(UNavLinkComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146ddc2d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkComponent::_vector_deleting_destructor__adjustor_40__(UNavLinkComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1352}' @ 146ddc2e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkComponent::`vector deleting
   destructor'`adjustor{1352}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkComponent::_vector_deleting_destructor__adjustor_1352__
          (UNavLinkComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{272}' @ 146ddc2f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkCustomComponent::`vector deleting
   destructor'`adjustor{272}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkCustomComponent::_vector_deleting_destructor__adjustor_272__
          (UNavLinkCustomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkCustomComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146ddc308

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkCustomComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkCustomComponent::_vector_deleting_destructor__adjustor_40__
          (UNavLinkCustomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNavLinkCustomComponent *)&this[-1].MovingAgents.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 146ddc318

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkCustomComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkCustomComponent::_vector_deleting_destructor__adjustor_192__
          (UNavLinkCustomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNavLinkCustomComponent *)
                      ((longlong)&this[-1].LinkRelativeStart.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 146ddc32c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkRenderingComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkRenderingComponent::_vector_deleting_destructor__adjustor_592__
          (UNavLinkRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkRenderingComponent *)&this[-1].field_0x300,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 146ddc340

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkRenderingComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkRenderingComponent::_vector_deleting_destructor__adjustor_600__
          (UNavLinkRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkRenderingComponent *)&this[-1].field_0x2f8,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 146ddc354

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkRenderingComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkRenderingComponent::_vector_deleting_destructor__adjustor_608__
          (UNavLinkRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkRenderingComponent *)&this[-1].field_0x2f0,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146ddc368

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavLinkRenderingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNavLinkRenderingComponent::_vector_deleting_destructor__adjustor_40__
          (UNavLinkRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavLinkRenderingComponent *)&this[-1].field_0x528,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 146ddc378

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavMeshRenderingComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UNavMeshRenderingComponent::_vector_deleting_destructor__adjustor_592__
          (UNavMeshRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavMeshRenderingComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 146ddc38c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavMeshRenderingComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UNavMeshRenderingComponent::_vector_deleting_destructor__adjustor_600__
          (UNavMeshRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavMeshRenderingComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 146ddc3a0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavMeshRenderingComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UNavMeshRenderingComponent::_vector_deleting_destructor__adjustor_608__
          (UNavMeshRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavMeshRenderingComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146ddc3b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavMeshRenderingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNavMeshRenderingComponent::_vector_deleting_destructor__adjustor_40__
          (UNavMeshRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNavMeshRenderingComponent *)
                      &this[-1].NavMeshDebugDrawDelegateManager._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 146ddc3c4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNavTestRenderingComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UNavTestRenderingComponent::_vector_deleting_destructor__adjustor_592__
          (UNavTestRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavTestRenderingComponent *)&this[-1].field_0x450,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 146ddc3d8

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNavTestRenderingComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UNavTestRenderingComponent::_vector_deleting_destructor__adjustor_600__
          (UNavTestRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavTestRenderingComponent *)&this[-1].field_0x448,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 146ddc3ec

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNavTestRenderingComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UNavTestRenderingComponent::_vector_deleting_destructor__adjustor_608__
          (UNavTestRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavTestRenderingComponent *)&this[-1].field_0x440,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146ddc400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNavTestRenderingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNavTestRenderingComponent::_vector_deleting_destructor__adjustor_40__
          (UNavTestRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNavTestRenderingComponent *)
                      &this[-1].NavTestDebugDrawDelegateHelper.PathPoints.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146ddc410

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc440

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc470

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc4a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc4d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::__l20::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::`20'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc550

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavMeshTileData::FNavData,SharedPointerInternals::DefaultDeleter<FNavMeshTileData::FNavData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNavMeshTileData::FNavData,SharedPointerInternals::DefaultDeleter<FNavMeshTileData::FNavData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc590

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavMeshPath,SharedPointerInternals::DefaultDeleter<FNavMeshPath>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNavMeshPath,SharedPointerInternals::DefaultDeleter<FNavMeshPath>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc5d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavDataGenerator,SharedPointerInternals::DefaultDeleter<FNavDataGenerator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNavDataGenerator,SharedPointerInternals::DefaultDeleter<FNavDataGenerator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc610

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRecastQueryFilter,SharedPointerInternals::DefaultDeleter<FRecastQueryFilter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FRecastQueryFilter,SharedPointerInternals::DefaultDeleter<FRecastQueryFilter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc650

void * __thiscall
ANavMeshBoundsVolume::_scalar_deleting_destructor_(ANavMeshBoundsVolume *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ANavMeshBoundsVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc6b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
ANavigationTestingActor::_scalar_deleting_destructor_(ANavigationTestingActor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__INavPathObserverInterface__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PathObserver);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastPath).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->NavAgentProps).PreferredNavData.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7INavPathObserverInterface__6B_;
  this->_padding_ = (longlong)&___7INavAgentInterface__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x420);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc780

void * __thiscall ARecastNavMesh::_scalar_deleting_destructor_(ARecastNavMesh *this,uint param_1)

{
  ~ARecastNavMesh(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x770);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc7e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FNavLinkRenderingProxy::_scalar_deleting_destructor_(FNavLinkRenderingProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OffMeshSegmentLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OffMeshPointLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc840

void * __thiscall
FNavMeshDebugDrawDelegateHelper::_scalar_deleting_destructor_
          (FNavMeshDebugDrawDelegateHelper *this,uint param_1)

{
  ~FNavMeshDebugDrawDelegateHelper(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc880

void * __thiscall FNavMeshPath::_scalar_deleting_destructor_(FNavMeshPath *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNavMeshPath__6B_;
  pFVar1 = (this->PathCorridorEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomNavLinkIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomLinkIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PathCorridorCost).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PathCorridor).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNavigationPath::~FNavigationPath((FNavigationPath *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddc920

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void * __thiscall
FNavMeshSceneProxy::_scalar_deleting_destructor_(FNavMeshSceneProxy *this,uint param_1)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNavMeshSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DebugTextDrawingDelegate);
  DestructItems<FMeshBatchElement,int>
            ((FMeshBatchElement *)(this->MeshBatchElements).AllocatorInstance.Data,
             (this->MeshBatchElements).ArrayNum);
  pFVar1 = (this->MeshBatchElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_>,int>
            ((TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_> *
             )(this->MeshColors).AllocatorInstance.Data,(this->MeshColors).ArrayNum);
  pFVar1 = (this->MeshColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FNavMeshSceneProxyData::~FNavMeshSceneProxyData(&this->ProxyData);
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x8e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddca80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FNavTestDebugDrawDelegateHelper::_scalar_deleting_destructor_
          (FNavTestDebugDrawDelegateHelper *this,uint param_1)

{
  ~FNavTestDebugDrawDelegateHelper(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddcac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FNavTestSceneProxy::_scalar_deleting_destructor_(FNavTestSceneProxy *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  (this->NodeDebug).HashSize = 0;
  FVar1 = (this->NodeDebug).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NodeDebug).Elements);
  pFVar2 = (this->ClosedSetIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ClosedSetVerts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OpenSetIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OpenSetVerts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->PathPointFlags).AllocatorInstance.Data,
             (this->PathPointFlags).ArrayNum);
  pFVar2 = (this->PathPointFlags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PathPoints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddcbb0

void * __thiscall
FRecastInternalDebugData::_scalar_deleting_destructor_(FRecastInternalDebugData *this,uint param_1)

{
  ~FRecastInternalDebugData(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddcbf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRecastSpeciaLinkFilter::_scalar_deleting_destructor_(FRecastSpeciaLinkFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7dtQuerySpecialLinkFilter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddcc30

void * __thiscall
INavAgentInterface::_scalar_deleting_destructor_(INavAgentInterface *this,uint param_1)

{
  *this = (INavAgentInterface)&___7INavAgentInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddcc70

void * __thiscall
INavLinkHostInterface::_scalar_deleting_destructor_(INavLinkHostInterface *this,uint param_1)

{
  *this = (INavLinkHostInterface)&___7INavLinkHostInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddccb0

void * __thiscall
INavPathObserverInterface::_scalar_deleting_destructor_
          (INavPathObserverInterface *this,uint param_1)

{
  *this = (INavPathObserverInterface)&___7INavPathObserverInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddccf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UNavLinkComponent::_scalar_deleting_destructor_(UNavLinkComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UNavLinkComponent__6B_;
  pFVar1 = (this->Links).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INavLinkHostInterface__6B_;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x560);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddcdc0

void * __thiscall
UNavLinkCustomComponent::_scalar_deleting_destructor_(UNavLinkCustomComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__UNavRelevantComponent__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMoveReachedLink);
  pFVar1 = (this->MovingAgents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBroadcastFilter);
  this->_padding_ = (longlong)&___7INavLinkCustomInterface__6B_;
  UNavRelevantComponent::~UNavRelevantComponent((UNavRelevantComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddce90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UNavLinkRenderingComponent::_scalar_deleting_destructor_
          (UNavLinkRenderingComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddcf30

void * __thiscall
UNavMeshRenderingComponent::_scalar_deleting_destructor_
          (UNavMeshRenderingComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FNavMeshDebugDrawDelegateHelper::~FNavMeshDebugDrawDelegateHelper
            (&this->NavMeshDebugDrawDelegateManager);
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddcfe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UNavTestRenderingComponent::_scalar_deleting_destructor_
          (UNavTestRenderingComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FNavTestDebugDrawDelegateHelper::~FNavTestDebugDrawDelegateHelper
            (&this->NavTestDebugDrawDelegateHelper);
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ddd090

void * __thiscall
dtQuerySpecialLinkFilter::_scalar_deleting_destructor_(dtQuerySpecialLinkFilter *this,uint param_1)

{
  *this = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AppendPathPointsHelper @ 146ddf9c0

void __cdecl
AppendPathPointsHelper
          (TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *param_1,
          TArray<_anonymous_namespace_::FPathPointInfo,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  
  if ((-1 < param_3) && (param_3 < param_2->ArrayNum)) {
    if (*(longlong *)((param_2->AllocatorInstance).Data + (longlong)param_3 * 0x60 + 0x18) != 0) {
      uVar5 = 0;
      if (param_3 < param_2->ArrayNum) {
        uVar5 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)param_3 * 0x60;
      if (((pFVar1 <= pFVar8) && (pFVar8 < pFVar1 + (longlong)param_1->ArrayMax * 0x30)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar7 = (longlong)iVar6;
      param_1->ArrayNum = iVar6 + 1;
      uVar3 = *(undefined8 *)(pFVar8 + 8);
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar7 * 0x30) = *(undefined8 *)pFVar8;
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 8) = uVar3;
      uVar3 = *(undefined8 *)(pFVar8 + 0x18);
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x10) = *(undefined8 *)(pFVar8 + 0x10);
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x10 + 8) = uVar3;
      uVar3 = *(undefined8 *)(pFVar8 + 0x28);
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x20) = *(undefined8 *)(pFVar8 + 0x20);
      *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x20 + 8) = uVar3;
    }
  }
  return;
}

// DTStatusToNavQueryResult @ 146de6c40

Type __cdecl DTStatusToNavQueryResult(uint param_1)

{
  if ((param_1 >> 0x1e & 1) != 0) {
    return ~(param_1 >> 6) & Error | Fail;
  }
  return Fail - ((param_1 & 8) != 0);
}

// DefaultNavLinkProcessorImpl @ 146de7580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NavigationHelper::DefaultNavLinkProcessorImpl
          (FCompositeNavModifier *param_1,FNavLinkOwnerData *param_2,
          TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 uVar1;
  int iVar2;
  AActor *pAVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  ulong uVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  uint uVar16;
  TStatId TVar17;
  UWorld *pUVar18;
  UObject *pUVar19;
  UClass *pUVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStackY_618 [32];
  undefined1 local_5c8;
  undefined1 local_5c7 [7];
  TVector<double>_u_0 local_5c0;
  TVector<double>_u_0 local_5a8;
  FCompositeNavModifier *local_590;
  undefined1 local_588 [16];
  undefined8 local_578;
  undefined4 uStack_570;
  undefined1 uStack_56c;
  undefined2 uStack_56b;
  undefined1 uStack_569;
  undefined1 local_568 [16];
  undefined8 local_558;
  undefined4 uStack_550;
  undefined1 uStack_54c;
  undefined2 uStack_54b;
  undefined1 uStack_549;
  TVector<double>_u_0 local_548;
  TVector<double>_u_0 local_530;
  TVector<double>_u_0 local_518;
  TVector<double>_u_0 local_500;
  TVector<double>_u_0 local_4e8;
  TVector<double>_u_0 local_4d0;
  FString local_4a8;
  FString local_498;
  undefined1 local_488 [164];
  int local_3e4;
  FActorInstanceHandle local_3d0;
  FWeakObjectPtr local_3b0 [5];
  undefined1 local_388 [164];
  int local_2e4;
  FActorInstanceHandle local_2d0;
  FWeakObjectPtr local_2b0 [5];
  FSimpleLinkNavModifier local_288;
  FCollisionQueryParams local_1d8;
  FCollisionQueryParams local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_618;
  local_288.LocalToWorld.Rotation.XY.m128d_f64[0] = (param_2->LinkToWorld).Rotation.XY.m128d_f64[0];
  local_288.LocalToWorld.Rotation.XY.m128d_f64[1] = (param_2->LinkToWorld).Rotation.XY.m128d_f64[1];
  local_288.LocalToWorld.Rotation.ZW.m128d_f64[0] = (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0];
  local_288.LocalToWorld.Rotation.ZW.m128d_f64[1] = (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1];
  local_288._0_4_ = local_288._0_4_ & 0xfffffffe;
  local_288.bHasMetaAreasSegment = 0;
  local_288.bHasMetaAreasPoint = 0;
  local_288.bHasFallDownLinks = 0;
  local_288.LocalToWorld.Translation.XY.m128d_f64[0] =
       (param_2->LinkToWorld).Translation.XY.m128d_f64[0];
  local_288.LocalToWorld.Translation.XY.m128d_f64[1] =
       (param_2->LinkToWorld).Translation.XY.m128d_f64[1];
  local_288.LocalToWorld.Translation.ZW.m128d_f64[0] =
       (param_2->LinkToWorld).Translation.ZW.m128d_f64[0];
  local_288.LocalToWorld.Translation.ZW.m128d_f64[1] =
       (param_2->LinkToWorld).Translation.ZW.m128d_f64[1];
  uVar21 = 0;
  local_288.LocalToWorld.Scale3D.XY.m128d_f64[0] = (param_2->LinkToWorld).Scale3D.XY.m128d_f64[0];
  local_288.LocalToWorld.Scale3D.XY.m128d_f64[1] = (param_2->LinkToWorld).Scale3D.XY.m128d_f64[1];
  local_288.LocalToWorld.Scale3D.ZW.m128d_f64 = *&(param_2->LinkToWorld).Scale3D.ZW.m128d_f64;
  local_288.Links.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Links.ArrayNum = 0;
  local_288.Links.ArrayMax = 0;
  local_288.SegmentLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.SegmentLinks.ArrayNum = 0;
  local_288.SegmentLinks.ArrayMax = 0;
  local_288.NavLinkId.Id = 0;
  local_590 = param_1;
  if (0 < param_3->ArrayNum) {
    local_288.NavLinkId.Id = *(ulong64 *)((param_3->AllocatorInstance).Data + 0x10);
    FSimpleLinkNavModifier::SetLinks(&local_288,param_3);
  }
  uVar13 = _tls_index;
  uVar12 = __xmm_80000000800000008000000080000000;
  uVar23 = uVar21;
  if (0 < local_288.Links.ArrayNum) {
    do {
      uVar22 = (uint)uVar23;
      uVar16 = 0;
      if ((int)uVar22 < local_288.Links.ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar14.Data = local_288.Links.AllocatorInstance.Data;
      if (local_288.Links.AllocatorInstance.Data[uVar21 + 0x28] == (FScriptContainerElement)0x2) {
        auVar39 = *(undefined1 (*) [16])(local_288.Links.AllocatorInstance.Data + uVar21 + 0x40);
        uVar1 = *(undefined8 *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x50);
        *(undefined8 *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x40) =
             *(undefined8 *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x58);
        *(undefined8 *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x40 + 8) =
             *(undefined8 *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x60);
        *(undefined8 *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x50) =
             *(undefined8 *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x68);
        *(undefined1 (*) [16])(local_288.Links.AllocatorInstance.Data + uVar21 + 0x58) = auVar39;
        *(undefined8 *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x68) = uVar1;
      }
      if (0.0 < *(float *)(local_288.Links.AllocatorInstance.Data + uVar21 + 4)) {
        local_588 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.XY.m128d_f64;
        auVar39 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.XY.m128d_f64;
        auVar29 = blendpd(local_588,
                          *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64,2);
        pAVar3 = param_2->Actor;
        dVar6 = *(double *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x58) *
                (param_2->LinkToWorld).Scale3D.XY.m128d_f64[0];
        dVar7 = *(double *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x60) *
                (param_2->LinkToWorld).Scale3D.XY.m128d_f64[1];
        dVar9 = *(double *)(local_288.Links.AllocatorInstance.Data + uVar21 + 0x68) *
                (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[0];
        dVar11 = (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar10 = (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1];
        dVar5 = dVar9 * local_588._8_8_ - (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] * dVar7;
        auVar32._8_4_ = SUB84(dVar7,0);
        auVar32._0_8_ = dVar6;
        auVar32._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar24._8_4_ = SUB84(dVar11,0);
        auVar24._0_8_ = dVar9;
        auVar24._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar24 = blendpd(auVar32,auVar24,2);
        auVar40._8_4_ = SUB84(dVar5,0);
        auVar40._0_8_ = dVar7 * local_588._0_8_ - local_588._8_8_ * dVar6;
        auVar40._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar25._0_8_ =
             auVar24._0_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] - auVar29._0_8_ * dVar9
        ;
        auVar25._8_8_ =
             auVar24._8_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1] -
             auVar29._8_8_ * dVar11;
        auVar24 = blendpd(auVar40,auVar25,2);
        dVar5 = dVar5 + dVar5;
        dVar11 = auVar25._0_8_ + auVar25._0_8_;
        uVar44 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar41._0_8_ = auVar24._0_8_ + auVar24._0_8_;
        auVar41._8_8_ = auVar24._8_8_ + auVar24._8_8_;
        auVar35._8_4_ = SUB84(dVar11,0);
        auVar35._0_8_ = dVar5;
        auVar35._12_4_ = uVar44;
        auVar29._8_4_ = SUB84(dVar11,0);
        auVar29._0_8_ = dVar5;
        auVar29._12_4_ = uVar44;
        auVar24 = blendpd(auVar29,auVar41,2);
        auVar32 = blendpd(auVar39,*(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64
                          ,2);
        auVar36._0_8_ = auVar35._8_8_ * auVar39._0_8_ - auVar39._8_8_ * dVar5;
        auVar36._8_8_ =
             auVar41._0_8_ * auVar39._8_8_ -
             (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] * dVar11;
        auVar30._0_8_ =
             auVar24._0_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] -
             auVar32._0_8_ * auVar41._0_8_;
        auVar30._8_8_ =
             auVar24._8_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1] -
             auVar32._8_8_ * auVar41._8_8_;
        auVar39._8_4_ = SUB84(auVar36._8_8_,0);
        auVar39._0_8_ = auVar36._0_8_;
        auVar39._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
        auVar24 = blendpd(auVar36,auVar30,2);
        dVar5 = dVar5 * dVar10 + dVar6 + auVar39._8_8_ +
                (param_2->LinkToWorld).Translation.XY.m128d_f64[0];
        dVar11 = dVar11 * dVar10 + dVar7 + auVar30._0_8_ +
                 (param_2->LinkToWorld).Translation.XY.m128d_f64[1];
        uVar44 = SUB84(dVar11,0);
        uVar45 = (undefined4)((ulonglong)dVar11 >> 0x20);
        local_5c0._s_0.Z =
             auVar41._0_8_ * dVar10 + dVar9 + auVar24._0_8_ +
             (param_2->LinkToWorld).Translation.ZW.m128d_f64[0];
        local_5c0._8_4_ = uVar44;
        local_5c0._s_0.X = dVar5;
        local_5c0._12_4_ = uVar45;
        dVar11 = (double)(float)((uint)*(float *)(local_288.Links.AllocatorInstance.Data +
                                                 uVar21 + 4) ^ uVar12);
        if (FVisualLogger::bIsRecording != 0) {
          local_548._s_0.Z = local_5c0._s_0.Z + dVar11;
          local_548._8_4_ = uVar44;
          local_548._0_8_ = dVar5;
          local_548._12_4_ = uVar45;
          FVisualLogger::SegmentLogfImpl
                    ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Log,
                     (TVector<double> *)&local_5c0._s_0,(TVector<double> *)&local_548._s_0,
                     &FColor::Red,0,L"TerrainTrace");
        }
        TVar17 = ``anonymous_namespace'::RawGeometryFall'::__l2::<lambda_2>::operator()(&local_5c8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                     0x9d4c) < ``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0) &&
           (_Init_thread_header(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0),
           ``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0 == -1)) {
          ::FName::FName(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::StaticName,
                         "RawGeometryFall");
          _Init_thread_footer(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0);
        }
        FCollisionQueryParams::FCollisionQueryParams
                  (&local_1d8,``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::StaticName,
                   (TStatId *)TVar17.StatIdPtr,true,pAVar3);
        memset(local_488,0,0x100);
        uStack_570 = 0xffffffff;
        local_488._4_4_ = 1.0;
        local_588 = ZEXT816(0);
        uStack_56b = 0;
        local_3d0.ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_3d0.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_3d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_3d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        uStack_569 = 0;
        local_578 = 0;
        uStack_56c = 0;
        local_3d0.InstanceIndex = -1;
        local_3d0.ResolutionStatus = Invalid;
        local_3d0._29_3_ = 0;
        local_3e4 = -1;
        local_3d0.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
        pUVar18 = AActor::GetWorld(pAVar3);
        local_530._s_0.X = local_5c0._s_0.X;
        local_530._s_0.Y = local_5c0._s_0.Y;
        local_530._s_0.Z = local_5c0._s_0.Z + dVar11;
        bVar15 = UWorld::LineTraceSingleByChannel
                           (pUVar18,(FHitResult *)local_488,(TVector<double> *)&local_5c0._s_0,
                            (TVector<double> *)&local_530._s_0,ECC_WorldStatic,&local_1d8,
                            &FCollisionResponseParams::DefaultResponseParam);
        dVar5 = 0.0;
        if (bVar15) {
          if (FVisualLogger::bIsRecording != 0) {
            FActorInstanceHandle::GetName(&local_3d0,&local_4a8);
            FVisualLogger::LocationLogfImpl
                      ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Log,
                       (TVector<double> *)(local_488 + 0x10),0xf,&FColor::Red,L"%s");
            if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
            }
          }
          pUVar19 = FWeakObjectPtr::Get(local_3b0);
          dVar5 = 0.0;
          if (pUVar19 != (UObject *)0x0) {
            pUVar20 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            iVar2 = (int)pUVar20->_padding_;
            dVar5 = 0.0;
            if ((iVar2 <= *(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38)) &&
               (dVar5 = 0.0,
               (longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
               &pUVar20->_padding_)) {
              dVar5 = local_5c0._s_0.Z - (double)local_488._56_8_;
            }
          }
        }
        if (local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
        if (0.0 < dVar5) {
          if (FVisualLogger::bIsRecording != 0) {
            local_518._s_0.X = local_5c0._s_0.X;
            local_518._s_0.Y = local_5c0._s_0.Y;
            local_518._s_0.Z = local_5c0._s_0.Z - dVar5;
            FVisualLogger::SegmentLogfImpl
                      ((UObject *)param_2->Actor,(FName *)&LogNavigation.field_0x4,Log,
                       (TVector<double> *)&local_5c0._s_0,(TVector<double> *)&local_518._s_0,
                       &FColor::Green,0,L"FallDownHeight %d");
          }
          *(double *)(FVar14.Data + uVar21 + 0x68) =
               *(double *)(FVar14.Data + uVar21 + 0x68) - dVar5;
        }
      }
      if (0.0 < *(float *)(FVar14.Data + uVar21)) {
        pAVar3 = param_2->Actor;
        dVar10 = *(double *)(FVar14.Data + uVar21 + 0x50) *
                 (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[0];
        dVar11 = (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar39 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64;
        dVar6 = (param_2->LinkToWorld).Scale3D.XY.m128d_f64[0] *
                *(double *)(FVar14.Data + uVar21 + 0x40);
        dVar7 = (param_2->LinkToWorld).Scale3D.XY.m128d_f64[1] *
                *(double *)(FVar14.Data + uVar21 + 0x40 + 8);
        local_568 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.XY.m128d_f64;
        auVar32 = blendpd(local_568,
                          *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64,2);
        dVar9 = auVar39._8_8_;
        dVar5 = dVar10 * local_568._8_8_ - (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] * dVar7;
        auVar26._8_4_ = SUB84(dVar7,0);
        auVar26._0_8_ = dVar6;
        auVar26._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar8._8_4_ = SUB84(dVar11,0);
        auVar8._0_8_ = dVar10;
        auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar24 = blendpd(auVar26,auVar8,2);
        auVar42._8_4_ = SUB84(dVar5,0);
        auVar42._0_8_ = dVar7 * local_568._0_8_ - local_568._8_8_ * dVar6;
        auVar42._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar27._0_8_ =
             auVar24._0_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] -
             auVar32._0_8_ * dVar10;
        auVar27._8_8_ =
             auVar24._8_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1] -
             auVar32._8_8_ * dVar11;
        auVar24 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.XY.m128d_f64;
        auVar32 = blendpd(auVar42,auVar27,2);
        dVar5 = dVar5 + dVar5;
        dVar11 = auVar27._0_8_ + auVar27._0_8_;
        uVar44 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar43._0_8_ = auVar32._0_8_ + auVar32._0_8_;
        auVar43._8_8_ = auVar32._8_8_ + auVar32._8_8_;
        auVar37._8_4_ = SUB84(dVar11,0);
        auVar37._0_8_ = dVar5;
        auVar37._12_4_ = uVar44;
        auVar33._8_4_ = SUB84(dVar11,0);
        auVar33._0_8_ = dVar5;
        auVar33._12_4_ = uVar44;
        auVar32 = blendpd(auVar24,*(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64
                          ,2);
        auVar38._0_8_ = auVar37._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar5;
        auVar38._8_8_ =
             auVar43._0_8_ * auVar24._8_8_ -
             (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] * dVar11;
        auVar24 = blendpd(auVar33,auVar43,2);
        auVar28._8_4_ = SUB84(auVar38._8_8_,0);
        auVar28._0_8_ = auVar38._0_8_;
        auVar28._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
        auVar34._0_8_ =
             auVar24._0_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] -
             auVar32._0_8_ * auVar43._0_8_;
        auVar34._8_8_ =
             auVar24._8_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1] -
             auVar32._8_8_ * auVar43._8_8_;
        auVar31._8_4_ = auVar39._8_4_;
        auVar31._0_8_ = dVar9;
        auVar31._12_4_ = auVar39._12_4_;
        auVar39 = blendpd(auVar38,auVar34,2);
        local_5a8._s_0.Z =
             dVar9 * auVar43._0_8_ + dVar10 + auVar39._0_8_ +
             (param_2->LinkToWorld).Translation.ZW.m128d_f64[0];
        local_5a8._s_0.X =
             dVar9 * dVar5 + dVar6 + auVar28._8_8_ +
             (param_2->LinkToWorld).Translation.XY.m128d_f64[0];
        local_5a8._s_0.Y =
             auVar31._8_8_ * dVar11 + dVar7 + auVar34._0_8_ +
             (param_2->LinkToWorld).Translation.XY.m128d_f64[1];
        dVar5 = (double)(float)((uint)*(float *)(FVar14.Data + uVar21) ^ uVar12);
        if (FVisualLogger::bIsRecording != 0) {
          local_500._s_0.Z = local_5a8._s_0.Z + dVar5;
          local_500._0_16_ = local_5a8._0_16_;
          FVisualLogger::SegmentLogfImpl
                    ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Log,
                     (TVector<double> *)&local_5a8._s_0,(TVector<double> *)&local_500._s_0,
                     &FColor::Red,0,L"TerrainTrace");
        }
        TVar17 = ``anonymous_namespace'::RawGeometryFall'::__l2::<lambda_2>::operator()(local_5c7);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8) +
                     0x9d4c) < ``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0) &&
           (_Init_thread_header(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0),
           ``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0 == -1)) {
          ::FName::FName(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::StaticName,
                         "RawGeometryFall");
          _Init_thread_footer(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0);
        }
        FCollisionQueryParams::FCollisionQueryParams
                  (&local_148,``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::StaticName,
                   (TStatId *)TVar17.StatIdPtr,true,pAVar3);
        memset(local_388,0,0x100);
        uStack_550 = 0xffffffff;
        local_388._4_4_ = 1.0;
        local_568 = ZEXT816(0);
        uStack_54b = 0;
        local_2d0.ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_2d0.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_2d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_2d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        uStack_549 = 0;
        local_558 = 0;
        uStack_54c = 0;
        local_2d0.InstanceIndex = -1;
        local_2d0.ResolutionStatus = Invalid;
        local_2d0._29_3_ = 0;
        local_2e4 = -1;
        local_2d0.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
        pUVar18 = AActor::GetWorld(pAVar3);
        local_4e8._s_0.Z = dVar5 + local_5a8._s_0.Z;
        local_4e8._s_0.X = local_5a8._s_0.X;
        local_4e8._s_0.Y = local_5a8._s_0.Y;
        bVar15 = UWorld::LineTraceSingleByChannel
                           (pUVar18,(FHitResult *)local_388,(TVector<double> *)&local_5a8._s_0,
                            (TVector<double> *)&local_4e8._s_0,ECC_WorldStatic,&local_148,
                            &FCollisionResponseParams::DefaultResponseParam);
        dVar5 = 0.0;
        if (bVar15) {
          if (FVisualLogger::bIsRecording != 0) {
            FActorInstanceHandle::GetName(&local_2d0,&local_498);
            FVisualLogger::LocationLogfImpl
                      ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Log,
                       (TVector<double> *)(local_388 + 0x10),0xf,&FColor::Red,L"%s");
            if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_498.Data.AllocatorInstance.Data);
            }
          }
          pUVar19 = FWeakObjectPtr::Get(local_2b0);
          dVar5 = 0.0;
          if (pUVar19 != (UObject *)0x0) {
            pUVar20 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            iVar2 = (int)pUVar20->_padding_;
            dVar5 = 0.0;
            if ((iVar2 <= *(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38)) &&
               (dVar5 = 0.0,
               (longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
               &pUVar20->_padding_)) {
              dVar5 = local_5a8._s_0.Z - (double)local_388._56_8_;
            }
          }
        }
        if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_148.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
        if (0.0 < dVar5) {
          if (FVisualLogger::bIsRecording != 0) {
            local_4d0._s_0.X = local_5a8._s_0.X;
            local_4d0._s_0.Y = local_5a8._s_0.Y;
            local_4d0._s_0.Z = local_5a8._s_0.Z - dVar5;
            FVisualLogger::SegmentLogfImpl
                      ((UObject *)param_2->Actor,(FName *)&LogNavigation.field_0x4,Log,
                       (TVector<double> *)&local_5a8._s_0,(TVector<double> *)&local_4d0._s_0,
                       &FColor::Green,0,L"LeftProjectHeight %d");
          }
          *(double *)(FVar14.Data + uVar21 + 0x50) =
               *(double *)(FVar14.Data + uVar21 + 0x50) - dVar5;
        }
      }
      uVar21 = uVar21 + 0x70;
      uVar23 = (ulonglong)(uVar22 + 1);
    } while ((int)(uVar22 + 1) < local_288.Links.ArrayNum);
  }
  FCompositeNavModifier::Add(local_590,&local_288);
  if (local_288.SegmentLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.SegmentLinks.AllocatorInstance.Data);
  }
  if (local_288.Links.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Links.AllocatorInstance.Data);
  }
  return;
}

// DefaultNavLinkSegmentProcessorImpl @ 146de80c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NavigationHelper::DefaultNavLinkSegmentProcessorImpl
          (FCompositeNavModifier *param_1,FNavLinkOwnerData *param_2,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 uVar1;
  int iVar2;
  AActor *pAVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ForAnyElementType FVar19;
  bool bVar20;
  uint uVar21;
  TStatId TVar22;
  UWorld *pUVar23;
  UObject *pUVar24;
  UClass *pUVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined1 auStackY_628 [32];
  undefined1 local_5d8;
  undefined1 local_5d7 [7];
  TVector<double>_u_0 local_5d0;
  TVector<double>_u_0 local_5b8;
  undefined1 local_598 [16];
  undefined8 local_588;
  undefined4 uStack_580;
  undefined1 uStack_57c;
  undefined2 uStack_57b;
  undefined1 uStack_579;
  FCompositeNavModifier *local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined4 uStack_558;
  undefined1 uStack_554;
  undefined2 uStack_553;
  undefined1 uStack_551;
  TVector<double>_u_0 local_550;
  TVector<double>_u_0 local_538;
  TVector<double>_u_0 local_520;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4f0;
  TVector<double>_u_0 local_4d8;
  FString local_4b0;
  FString local_4a0;
  undefined1 local_488 [164];
  int local_3e4;
  FActorInstanceHandle local_3d0;
  FWeakObjectPtr local_3b0 [5];
  undefined1 local_388 [164];
  int local_2e4;
  FActorInstanceHandle local_2d0;
  FWeakObjectPtr local_2b0 [5];
  FSimpleLinkNavModifier local_288;
  FCollisionQueryParams local_1d8;
  FCollisionQueryParams local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_628;
  local_288.LocalToWorld.Rotation.XY.m128d_f64[0] = (param_2->LinkToWorld).Rotation.XY.m128d_f64[0];
  local_288.LocalToWorld.Rotation.XY.m128d_f64[1] = (param_2->LinkToWorld).Rotation.XY.m128d_f64[1];
  local_288.LocalToWorld.Rotation.ZW.m128d_f64[0] = (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0];
  local_288.LocalToWorld.Rotation.ZW.m128d_f64[1] = (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1];
  local_288._0_4_ = local_288._0_4_ & 0xfffffffe;
  local_288.bHasMetaAreasSegment = 0;
  local_288.bHasMetaAreasPoint = 0;
  local_288.bHasFallDownLinks = 0;
  local_288.LocalToWorld.Translation.XY.m128d_f64[0] =
       (param_2->LinkToWorld).Translation.XY.m128d_f64[0];
  local_288.LocalToWorld.Translation.XY.m128d_f64[1] =
       (param_2->LinkToWorld).Translation.XY.m128d_f64[1];
  local_288.LocalToWorld.Translation.ZW.m128d_f64[0] =
       (param_2->LinkToWorld).Translation.ZW.m128d_f64[0];
  local_288.LocalToWorld.Translation.ZW.m128d_f64[1] =
       (param_2->LinkToWorld).Translation.ZW.m128d_f64[1];
  uVar27 = 0;
  local_288.LocalToWorld.Scale3D.XY.m128d_f64[0] = (param_2->LinkToWorld).Scale3D.XY.m128d_f64[0];
  local_288.LocalToWorld.Scale3D.XY.m128d_f64[1] = (param_2->LinkToWorld).Scale3D.XY.m128d_f64[1];
  local_288.LocalToWorld.Scale3D.ZW.m128d_f64[0] = (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[0];
  local_288.LocalToWorld.Scale3D.ZW.m128d_f64[1] = (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[1];
  local_288.Links.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Links.ArrayNum = 0;
  local_288.Links.ArrayMax = 0;
  local_288.SegmentLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.SegmentLinks.ArrayNum = 0;
  local_288.SegmentLinks.ArrayMax = 0;
  local_288.NavLinkId.Id = 0;
  local_578 = param_1;
  if (0 < param_3->ArrayNum) {
    local_288.NavLinkId.Id = *(ulong64 *)((param_3->AllocatorInstance).Data + 0x10);
    FSimpleLinkNavModifier::SetSegmentLinks(&local_288,param_3);
  }
  uVar18 = _tls_index;
  uVar17 = __xmm_80000000800000008000000080000000;
  uVar29 = uVar27;
  if (0 < local_288.SegmentLinks.ArrayNum) {
    do {
      uVar28 = (uint)uVar29;
      uVar21 = 0;
      if ((int)uVar28 < local_288.SegmentLinks.ArrayNum) {
        uVar21 = ~uVar28 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar19.Data = local_288.SegmentLinks.AllocatorInstance.Data;
      pFVar26 = local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x88;
      if (local_288.SegmentLinks.AllocatorInstance.Data[uVar27 + 0x28] ==
          (FScriptContainerElement)0x2) {
        uVar15 = *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x40);
        uVar16 = *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x40 + 8);
        uVar1 = *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x50);
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x40) =
             *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x70);
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x40 + 8) =
             *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x78);
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x50) =
             *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x80);
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x70) = uVar15;
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x78) = uVar16;
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x80) = uVar1;
        uVar15 = *(undefined8 *)(pFVar26 + 8);
        auVar46 = *(undefined1 (*) [16])
                   (local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x58);
        uVar1 = *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x68);
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x58) =
             *(undefined8 *)pFVar26;
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x58 + 8) = uVar15;
        *(undefined8 *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x68) =
             *(undefined8 *)(pFVar26 + 0x10);
        *(undefined1 (*) [16])pFVar26 = auVar46;
        *(undefined8 *)(pFVar26 + 0x10) = uVar1;
      }
      if (0.0 < *(float *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 4)) {
        auVar46 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.XY.m128d_f64;
        auVar43 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.XY.m128d_f64;
        auVar34 = blendpd(auVar46,*(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64
                          ,2);
        dVar8 = *(double *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x70) *
                (param_2->LinkToWorld).Scale3D.XY.m128d_f64[0];
        dVar9 = *(double *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x78) *
                (param_2->LinkToWorld).Scale3D.XY.m128d_f64[1];
        dVar10 = *(double *)(local_288.SegmentLinks.AllocatorInstance.Data + uVar27 + 0x80) *
                 (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[0];
        dVar12 = (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar14 = (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1];
        dVar5 = dVar10 * auVar46._8_8_ - (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] * dVar9;
        auVar38._8_4_ = SUB84(dVar9,0);
        auVar38._0_8_ = dVar8;
        auVar38._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar30._8_4_ = SUB84(dVar12,0);
        auVar30._0_8_ = dVar10;
        auVar30._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar30 = blendpd(auVar38,auVar30,2);
        auVar47._8_4_ = SUB84(dVar5,0);
        auVar47._0_8_ = dVar9 * auVar46._0_8_ - auVar46._8_8_ * dVar8;
        auVar47._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar46._0_8_ =
             auVar30._0_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] -
             auVar34._0_8_ * dVar10;
        auVar46._8_8_ =
             auVar30._8_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1] -
             auVar34._8_8_ * dVar12;
        auVar30 = blendpd(auVar47,auVar46,2);
        dVar5 = dVar5 + dVar5;
        dVar12 = auVar46._0_8_ + auVar46._0_8_;
        uVar51 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar48._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar48._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        auVar41._8_4_ = SUB84(dVar12,0);
        auVar41._0_8_ = dVar5;
        auVar41._12_4_ = uVar51;
        auVar35._8_4_ = SUB84(dVar12,0);
        auVar35._0_8_ = dVar5;
        auVar35._12_4_ = uVar51;
        auVar30 = blendpd(auVar35,auVar48,2);
        auVar38 = blendpd(auVar43,*(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64
                          ,2);
        auVar42._0_8_ = auVar41._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar5;
        auVar42._8_8_ =
             auVar48._0_8_ * auVar43._8_8_ -
             (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] * dVar12;
        auVar46 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64;
        auVar34._8_4_ = SUB84(auVar42._8_8_,0);
        auVar34._0_8_ = auVar42._0_8_;
        auVar34._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
        dVar11 = *(double *)(pFVar26 + 0x10) * (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[0];
        dVar13 = (param_2->LinkToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar36._0_8_ =
             auVar30._0_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] -
             auVar38._0_8_ * auVar48._0_8_;
        auVar36._8_8_ =
             auVar30._8_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1] -
             auVar38._8_8_ * auVar48._8_8_;
        dVar7 = auVar46._8_8_;
        dVar5 = dVar5 * dVar14 + dVar8 + auVar34._8_8_ +
                (param_2->LinkToWorld).Translation.XY.m128d_f64[0];
        dVar12 = dVar12 * dVar14 + dVar9 + auVar36._0_8_ +
                 (param_2->LinkToWorld).Translation.XY.m128d_f64[1];
        dVar9 = (param_2->LinkToWorld).Scale3D.XY.m128d_f64[0] * *(double *)pFVar26;
        dVar6 = (param_2->LinkToWorld).Scale3D.XY.m128d_f64[1] * *(double *)(pFVar26 + 8);
        local_598 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.XY.m128d_f64;
        local_5d0._8_4_ = SUB84(dVar12,0);
        local_5d0._s_0.X = dVar5;
        local_5d0._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar43 = blendpd(auVar42,auVar36,2);
        auVar30 = blendpd(local_598,
                          *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64,2);
        dVar12 = dVar11 * local_598._8_8_ - (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] * dVar6;
        local_5d0._s_0.Z =
             auVar48._0_8_ * dVar14 + dVar10 + auVar43._0_8_ +
             (param_2->LinkToWorld).Translation.ZW.m128d_f64[0];
        auVar31._8_4_ = SUB84(dVar6,0);
        auVar31._0_8_ = dVar9;
        auVar31._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar49._8_4_ = SUB84(dVar12,0);
        auVar49._0_8_ = dVar6 * local_598._0_8_ - local_598._8_8_ * dVar9;
        auVar49._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar43._8_4_ = SUB84(dVar13,0);
        auVar43._0_8_ = dVar11;
        auVar43._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        auVar43 = blendpd(auVar31,auVar43,2);
        auVar32._0_8_ =
             auVar43._0_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] -
             auVar30._0_8_ * dVar11;
        auVar32._8_8_ =
             auVar43._8_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1] -
             auVar30._8_8_ * dVar13;
        auVar43 = *(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.XY.m128d_f64;
        auVar30 = blendpd(auVar49,auVar32,2);
        dVar12 = dVar12 + dVar12;
        dVar8 = auVar32._0_8_ + auVar32._0_8_;
        uVar51 = (undefined4)((ulonglong)dVar8 >> 0x20);
        auVar50._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar50._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        auVar44._8_4_ = SUB84(dVar8,0);
        auVar44._0_8_ = dVar12;
        auVar44._12_4_ = uVar51;
        pAVar3 = param_2->Actor;
        auVar39._8_4_ = SUB84(dVar8,0);
        auVar39._0_8_ = dVar12;
        auVar39._12_4_ = uVar51;
        auVar30 = blendpd(auVar43,*(undefined1 (*) [16])(param_2->LinkToWorld).Rotation.ZW.m128d_f64
                          ,2);
        auVar38 = blendpd(auVar39,auVar50,2);
        auVar45._0_8_ = auVar44._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar12;
        auVar45._8_8_ =
             auVar50._0_8_ * auVar43._8_8_ - (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] * dVar8
        ;
        auVar40._0_8_ =
             auVar38._0_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[0] -
             auVar30._0_8_ * auVar50._0_8_;
        auVar40._8_8_ =
             auVar38._8_8_ * (param_2->LinkToWorld).Rotation.ZW.m128d_f64[1] -
             auVar30._8_8_ * auVar50._8_8_;
        auVar37._8_4_ = auVar46._8_4_;
        auVar37._0_8_ = dVar7;
        auVar37._12_4_ = auVar46._12_4_;
        auVar33._8_4_ = SUB84(auVar45._8_8_,0);
        auVar33._0_8_ = auVar45._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
        auVar46 = blendpd(auVar45,auVar40,2);
        local_5b8._s_0.X =
             dVar7 * dVar12 + dVar9 + auVar33._8_8_ +
             (param_2->LinkToWorld).Translation.XY.m128d_f64[0];
        local_5b8._s_0.Y =
             auVar37._8_8_ * dVar8 + dVar6 + auVar40._0_8_ +
             (param_2->LinkToWorld).Translation.XY.m128d_f64[1];
        local_5b8._s_0.Z =
             dVar7 * auVar50._0_8_ + dVar11 + auVar46._0_8_ +
             (param_2->LinkToWorld).Translation.ZW.m128d_f64[0];
        dVar12 = (double)(float)((uint)*(float *)(local_288.SegmentLinks.AllocatorInstance.Data +
                                                 uVar27 + 4) ^ uVar17);
        if (FVisualLogger::bIsRecording != 0) {
          local_550._s_0.Y = local_5d0._s_0.Y;
          local_550._s_0.Z = dVar12 + local_5d0._s_0.Z;
          local_550._s_0.X = dVar5;
          FVisualLogger::SegmentLogfImpl
                    ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Log,
                     (TVector<double> *)&local_5d0._s_0,(TVector<double> *)&local_550._s_0,
                     &FColor::Red,0,L"TerrainTrace");
        }
        TVar22 = ``anonymous_namespace'::RawGeometryFall'::__l2::<lambda_2>::operator()(&local_5d8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar18 * 8) +
                     0x9d4c) < ``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0) &&
           (_Init_thread_header(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0),
           ``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0 == -1)) {
          ::FName::FName(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::StaticName,
                         "RawGeometryFall");
          _Init_thread_footer(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0);
        }
        FCollisionQueryParams::FCollisionQueryParams
                  (&local_1d8,``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::StaticName,
                   (TStatId *)TVar22.StatIdPtr,true,pAVar3);
        memset(local_488,0,0x100);
        uStack_558 = 0xffffffff;
        local_488._4_4_ = 1.0;
        local_570 = 0;
        uStack_568 = 0;
        uStack_553 = 0;
        local_3d0.ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_3d0.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_3d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_3d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        uStack_551 = 0;
        local_560 = 0;
        uStack_554 = 0;
        local_3d0.InstanceIndex = -1;
        local_3d0.ResolutionStatus = Invalid;
        local_3d0._29_3_ = 0;
        local_3e4 = -1;
        local_3d0.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
        pUVar23 = AActor::GetWorld(pAVar3);
        local_538._s_0.X = local_5d0._s_0.X;
        local_538._s_0.Y = local_5d0._s_0.Y;
        local_538._s_0.Z = local_5d0._s_0.Z + dVar12;
        bVar20 = UWorld::LineTraceSingleByChannel
                           (pUVar23,(FHitResult *)local_488,(TVector<double> *)&local_5d0._s_0,
                            (TVector<double> *)&local_538._s_0,ECC_WorldStatic,&local_1d8,
                            &FCollisionResponseParams::DefaultResponseParam);
        dVar5 = 0.0;
        if (bVar20) {
          if (FVisualLogger::bIsRecording != 0) {
            FActorInstanceHandle::GetName(&local_3d0,&local_4b0);
            FVisualLogger::LocationLogfImpl
                      ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Log,
                       (TVector<double> *)(local_488 + 0x10),0xf,&FColor::Red,L"%s");
            if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
            }
          }
          pUVar24 = FWeakObjectPtr::Get(local_3b0);
          dVar5 = 0.0;
          if (pUVar24 != (UObject *)0x0) {
            pUVar25 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            iVar2 = (int)pUVar25->_padding_;
            dVar5 = 0.0;
            if ((iVar2 <= *(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38)) &&
               (dVar5 = 0.0,
               (longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
               &pUVar25->_padding_)) {
              dVar5 = local_5d0._s_0.Z - (double)local_488._56_8_;
            }
          }
        }
        if (local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
        pAVar3 = param_2->Actor;
        dVar12 = (double)(float)(*(uint *)(FVar19.Data + uVar27 + 4) ^ uVar17);
        if (FVisualLogger::bIsRecording != 0) {
          local_520._s_0.X = local_5b8._s_0.X;
          local_520._s_0.Y = local_5b8._s_0.Y;
          local_520._s_0.Z = dVar12 + local_5b8._s_0.Z;
          FVisualLogger::SegmentLogfImpl
                    ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Log,
                     (TVector<double> *)&local_5b8._s_0,(TVector<double> *)&local_520._s_0,
                     &FColor::Red,0,L"TerrainTrace");
        }
        TVar22 = ``anonymous_namespace'::RawGeometryFall'::__l2::<lambda_2>::operator()(local_5d7);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar18 * 8) +
                     0x9d4c) < ``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0) &&
           (_Init_thread_header(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0),
           ``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0 == -1)) {
          ::FName::FName(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::StaticName,
                         "RawGeometryFall");
          _Init_thread_footer(&``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::_TSS0);
        }
        FCollisionQueryParams::FCollisionQueryParams
                  (&local_148,``RawGeometryFall'::`2'::<lambda_1>::operator()'::`2'::StaticName,
                   (TStatId *)TVar22.StatIdPtr,true,pAVar3);
        memset(local_388,0,0x100);
        uStack_580 = 0xffffffff;
        local_388._4_4_ = 1.0;
        local_598 = ZEXT816(0);
        uStack_57b = 0;
        local_2d0.ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_2d0.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_2d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_2d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        uStack_579 = 0;
        local_588 = 0;
        uStack_57c = 0;
        local_2d0.InstanceIndex = -1;
        local_2d0.ResolutionStatus = Invalid;
        local_2d0._29_3_ = 0;
        local_2e4 = -1;
        local_2d0.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
        pUVar23 = AActor::GetWorld(pAVar3);
        local_508._s_0.Z = dVar12 + local_5b8._s_0.Z;
        local_508._s_0.X = local_5b8._s_0.X;
        local_508._s_0.Y = local_5b8._s_0.Y;
        bVar20 = UWorld::LineTraceSingleByChannel
                           (pUVar23,(FHitResult *)local_388,(TVector<double> *)&local_5b8._s_0,
                            (TVector<double> *)&local_508._s_0,ECC_WorldStatic,&local_148,
                            &FCollisionResponseParams::DefaultResponseParam);
        dVar12 = 0.0;
        if (bVar20) {
          if (FVisualLogger::bIsRecording != 0) {
            FActorInstanceHandle::GetName(&local_2d0,&local_4a0);
            FVisualLogger::LocationLogfImpl
                      ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Log,
                       (TVector<double> *)(local_388 + 0x10),0xf,&FColor::Red,L"%s");
            if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
            }
          }
          pUVar24 = FWeakObjectPtr::Get(local_2b0);
          dVar12 = 0.0;
          if (pUVar24 != (UObject *)0x0) {
            pUVar25 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            iVar2 = (int)pUVar25->_padding_;
            dVar12 = 0.0;
            if ((iVar2 <= *(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38)) &&
               (dVar12 = 0.0,
               (longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
               &pUVar25->_padding_)) {
              dVar12 = local_5b8._s_0.Z - (double)local_388._56_8_;
            }
          }
        }
        if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_148.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
        if (0.0 < dVar5) {
          if (FVisualLogger::bIsRecording != 0) {
            local_4f0._s_0.X = local_5d0._s_0.X;
            local_4f0._s_0.Y = local_5d0._s_0.Y;
            local_4f0._s_0.Z = local_5d0._s_0.Z - dVar5;
            FVisualLogger::SegmentLogfImpl
                      ((UObject *)param_2->Actor,(FName *)&LogNavigation.field_0x4,Log,
                       (TVector<double> *)&local_5d0._s_0,(TVector<double> *)&local_4f0._s_0,
                       &FColor::Green,0,L"FallDownHeightStart %d");
          }
          *(double *)(FVar19.Data + uVar27 + 0x80) =
               *(double *)(FVar19.Data + uVar27 + 0x80) - dVar5;
        }
        if (0.0 < dVar12) {
          if (FVisualLogger::bIsRecording != 0) {
            local_4d8._s_0.X = local_5b8._s_0.X;
            local_4d8._s_0.Y = local_5b8._s_0.Y;
            local_4d8._s_0.Z = local_5b8._s_0.Z - dVar12;
            FVisualLogger::SegmentLogfImpl
                      ((UObject *)param_2->Actor,(FName *)&LogNavigation.field_0x4,Log,
                       (TVector<double> *)&local_5b8._s_0,(TVector<double> *)&local_4d8._s_0,
                       &FColor::Green,0,L"FallDownHeightEnd %d");
          }
          *(double *)(FVar19.Data + uVar27 + 0x98) =
               *(double *)(FVar19.Data + uVar27 + 0x98) - dVar12;
        }
      }
      uVar27 = uVar27 + 0xa0;
      uVar29 = (ulonglong)(uVar28 + 1);
    } while ((int)(uVar28 + 1) < local_288.SegmentLinks.ArrayNum);
  }
  FCompositeNavModifier::Add(local_578,&local_288);
  if (local_288.SegmentLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.SegmentLinks.AllocatorInstance.Data);
  }
  if (local_288.Links.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Links.AllocatorInstance.Data);
  }
  return;
}

// DetourFree @ 146de9ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DetourFree(void *param_1,dtAllocHint param_2)

{
  FName FVar1;
  uchar auVar2 [8];
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourTEMP> FVar3;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_AVOIDANCE> FVar4;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_CROWD> FVar5;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_LOOKUP> FVar6;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVQUERY> FVar7;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVMESH> FVar8;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NODE_POOL> FVar9;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_CORRIDOR> FVar10;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_QUEUE> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PROXY_GRID> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DATA> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH> FVar14;
  TStatId TVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory> FVar20;
  dtAllocHint local_res10 [2];
  FName local_res18 [2];
  FStatMessage local_48;
  
  local_res10[0] = param_2;
  auVar2 = (uchar  [8])FMemory::GetAllocSize(param_1);
  switch(local_res10[0]) {
  case DT_ALLOC_TEMP:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar3 = StatPtr_STAT_Navigation_DetourTEMP;
    if (StatPtr_STAT_Navigation_DetourTEMP ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourTEMP>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourTEMP");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourTEMP>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourTEMP,*pFVar16,
                         L"Detour TEMP","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
                         ,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else {
LAB_146dea05d:
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
    break;
  case DT_ALLOC_PERM_AVOIDANCE:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar4 = StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE;
    if (StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_AVOIDANCE>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_AVOIDANCE");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_AVOIDANCE>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE,
                         *pFVar16,L"Detour PERM_AVOIDANCE","STATGROUP_Navigation","STATCAT_Advanced"
                         ,L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_CROWD:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar5 = StatPtr_STAT_Navigation_DetourPERM_CROWD;
    if (StatPtr_STAT_Navigation_DetourPERM_CROWD ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_CROWD>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_CROWD");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_CROWD>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_CROWD,
                         *pFVar16,L"Detour PERM_CROWD","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_LOOKUP:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar6 = StatPtr_STAT_Navigation_DetourPERM_LOOKUP;
    if (StatPtr_STAT_Navigation_DetourPERM_LOOKUP ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_LOOKUP>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_LOOKUP");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_LOOKUP>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_LOOKUP,
                         *pFVar16,L"Detour PERM_LOOKUP","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_NAVMESH:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar8 = StatPtr_STAT_Navigation_DetourPERM_NAVMESH;
    if (StatPtr_STAT_Navigation_DetourPERM_NAVMESH ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVMESH>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_NAVMESH");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVMESH>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_NAVMESH,
                         *pFVar16,L"Detour PERM_NAVMESH","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_NAVQUERY:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar7 = StatPtr_STAT_Navigation_DetourPERM_NAVQUERY;
    if (StatPtr_STAT_Navigation_DetourPERM_NAVQUERY ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVQUERY>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_NAVQUERY");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVQUERY>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_NAVQUERY,
                         *pFVar16,L"Detour PERM_NAVQUERY","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_NODE_POOL:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar9 = StatPtr_STAT_Navigation_DetourPERM_NODE_POOL;
    if (StatPtr_STAT_Navigation_DetourPERM_NODE_POOL ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NODE_POOL>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_NODE_POOL");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NODE_POOL>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_NODE_POOL,
                         *pFVar16,L"Detour PERM_NODE_POOL","STATGROUP_Navigation","STATCAT_Advanced"
                         ,L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar9;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_PATH_CORRIDOR:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar10 = StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR;
    if (StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_CORRIDOR>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_PATH_CORRIDOR");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_CORRIDOR>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR,*pFVar16,
                          L"Detour PERM_PATH_CORRIDOR","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar10;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_PATH_QUEUE:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar11 = StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE;
    if (StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_QUEUE>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_PATH_QUEUE");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_QUEUE>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE,*pFVar16,
                          L"Detour PERM_PATH_QUEUE","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar11;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_PROXIMITY_GRID:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar12 = StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID;
    if (StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PROXY_GRID>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_PROXY_GRID");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PROXY_GRID>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID,*pFVar16,
                          L"Detour PERM_PROXY_GRID","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    local_res18[0] = *(FName *)FVar12;
    goto code_r0x000146dea9d8;
  default:
    local_res18[0] = (FName)local_res10;
    `DetourFree'::__l4::<lambda_1>::operator()(local_res18);
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    break;
  case DT_ALLOC_PERM_TILE_DATA:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar13 = StatPtr_STAT_Navigation_DetourPERM_TILE_DATA;
    if (StatPtr_STAT_Navigation_DetourPERM_TILE_DATA ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DATA>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_TILE_DATA");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DATA>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_TILE_DATA
                          ,*pFVar16,L"Detour PERM_TILE_DATA","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar13;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_TILE_DYNLINK_OFFMESH:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    FVar14 = StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH;
    if (StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH>)0x0) {
      pFVar16 = FName::FName(local_res18,"STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH,*pFVar16,
                          L"Detour PERM_TILE_DYNLINK_OFFMESH","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar14;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_TILE_DYNLINK_CLUSTER:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    TVar15 = FThreadSafeStaticStatInner<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER,1>::
             GetStatId((FThreadSafeStaticStatInner<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER,1>
                        *)&StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER);
    FVar1 = *(FName *)(TVar15.StatIdPtr)->Name;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
    break;
  case DT_ALLOC_PERM_TILES:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    TVar15 = FThreadSafeStaticStatInner<FStat_STAT_Navigation_DetourPERM_TILES,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_Navigation_DetourPERM_TILES,1> *)
                        &StatPtr_STAT_Navigation_DetourPERM_TILES);
    local_res18[0] = *(FName *)(TVar15.StatIdPtr)->Name;
code_r0x000146dea9d8:
    FThreadStats::AddMessage<__int64>(local_res18[0],Subtract,(long64)auVar2,false);
    break;
  case DT_ALLOC_PERM_TILE_LINK_BUILDER:
    if (auVar2 == (uchar  [8])0x0) goto LAB_146deb04f;
    TVar15 = FThreadSafeStaticStatInner<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER,1>::
             GetStatId((FThreadSafeStaticStatInner<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER,1>
                        *)&StatPtr_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER);
    FVar1 = *(FName *)(TVar15.StatIdPtr)->Name;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_48.StatData.Pad = auVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_48);
      FStatsTrace::Add(local_res18,-(longlong)auVar2);
      if (pFVar18->ScopeCount != 0) goto LAB_146dea05d;
      FThreadStats::Flush(pFVar18,false,false);
    }
  }
  FVar17 = StatPtr_STAT_NavigationMemory;
  if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
    pFVar16 = FName::FName(local_res18,"STAT_NavigationMemory");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar16,
                        L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                        false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar17;
  local_res18[0] = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_res18[0] = FVar1;
    local_48.StatData.Pad = auVar2;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar18,&local_48);
    FStatsTrace::Add(local_res18,-(longlong)auVar2);
    if (pFVar18->ScopeCount == 0) {
      FThreadStats::Flush(pFVar18,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar18,false,false);
    }
  }
  FVar20 = StatPtr_STAT_Navigation_RecastMemory;
  if (StatPtr_STAT_Navigation_RecastMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)0x0) {
    pFVar16 = FName::FName(local_res18,"STAT_Navigation_RecastMemory");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastMemory,*pFVar16,
                        L"Recast memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
                        true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar20;
  local_res18[0] = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_res18[0] = FVar1;
    local_48.StatData.Pad = auVar2;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar18,&local_48);
    FStatsTrace::Add(local_res18,-(longlong)auVar2);
    if (pFVar18->ScopeCount == 0) {
      FThreadStats::Flush(pFVar18,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar18,false,false);
    }
  }
LAB_146deb04f:
  FMemory::Free(param_1);
  return;
}

// DetourMalloc @ 146deb0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __cdecl DetourMalloc(int param_1,dtAllocHint param_2)

{
  FName FVar1;
  void *pvVar2;
  uchar auVar3 [8];
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES> FVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory> FVar9;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *this;
  wchar_t *pwVar10;
  FLLMScope local_res8 [2];
  dtAllocHint local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FStatMessage local_58;
  
  local_res10[0] = param_2;
  FLLMScope::FLLMScope(local_res8,NavigationRecast,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,NavigationRecast,true);
  pvVar2 = FMemory::Malloc((ulonglong)(uint)param_1,0);
  auVar3 = (uchar  [8])FMemory::GetAllocSize(pvVar2);
  switch(local_res10[0]) {
  case DT_ALLOC_TEMP:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourTEMP;
    if (StatPtr_STAT_Navigation_DetourTEMP ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourTEMP>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourTEMP");
      pwVar10 = L"Detour TEMP";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourTEMP;
LAB_146deb17c:
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)this,*pFVar5,pwVar10,"STATGROUP_Navigation",
                         "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    break;
  case DT_ALLOC_PERM_AVOIDANCE:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE;
    if (StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_AVOIDANCE>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_AVOIDANCE");
      pwVar10 = L"Detour PERM_AVOIDANCE";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_CROWD:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_CROWD;
    if (StatPtr_STAT_Navigation_DetourPERM_CROWD ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_CROWD>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_CROWD");
      pwVar10 = L"Detour PERM_CROWD";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_CROWD;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_LOOKUP:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_LOOKUP;
    if (StatPtr_STAT_Navigation_DetourPERM_LOOKUP ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_LOOKUP>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_LOOKUP");
      pwVar10 = L"Detour PERM_LOOKUP";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_LOOKUP;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_NAVMESH:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_NAVMESH;
    if (StatPtr_STAT_Navigation_DetourPERM_NAVMESH ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVMESH>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_NAVMESH");
      pwVar10 = L"Detour PERM_NAVMESH";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_NAVMESH;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_NAVQUERY:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_NAVQUERY;
    if (StatPtr_STAT_Navigation_DetourPERM_NAVQUERY ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVQUERY>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_NAVQUERY");
      pwVar10 = L"Detour PERM_NAVQUERY";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_NAVQUERY;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_NODE_POOL:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_NODE_POOL;
    if (StatPtr_STAT_Navigation_DetourPERM_NODE_POOL ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NODE_POOL>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_NODE_POOL");
      pwVar10 = L"Detour PERM_NODE_POOL";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_NODE_POOL;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_PATH_CORRIDOR:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR;
    if (StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_CORRIDOR>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_PATH_CORRIDOR");
      pwVar10 = L"Detour PERM_PATH_CORRIDOR";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_PATH_QUEUE:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE;
    if (StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_QUEUE>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_PATH_QUEUE");
      pwVar10 = L"Detour PERM_PATH_QUEUE";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_PROXIMITY_GRID:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID;
    if (StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PROXY_GRID>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_PROXY_GRID");
      pwVar10 = L"Detour PERM_PROXY_GRID";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID;
      goto LAB_146deb17c;
    }
    break;
  default:
    local_res18 = (FName)local_res10;
    `DetourMalloc'::__l4::<lambda_1>::operator()(&local_res18);
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    goto LAB_146deb53a;
  case DT_ALLOC_PERM_TILE_DATA:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_TILE_DATA;
    if (StatPtr_STAT_Navigation_DetourPERM_TILE_DATA ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DATA>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_TILE_DATA");
      pwVar10 = L"Detour PERM_TILE_DATA";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_TILE_DATA;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_TILE_DYNLINK_OFFMESH:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH;
    if (StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH");
      pwVar10 = L"Detour PERM_TILE_DYNLINK_OFFMESH";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_TILE_DYNLINK_CLUSTER:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER;
    if (StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER");
      pwVar10 = L"Detour PERM_TILE_DYNLINK_CLUSTER";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_TILES:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = StatPtr_STAT_Navigation_DetourPERM_TILES;
    if (StatPtr_STAT_Navigation_DetourPERM_TILES ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_TILES");
      pwVar10 = L"Detour PERM_TILES";
      this = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER> *)
             &StatPtr_STAT_Navigation_DetourPERM_TILES;
      goto LAB_146deb17c;
    }
    break;
  case DT_ALLOC_PERM_TILE_LINK_BUILDER:
    if (auVar3 == (uchar  [8])0x0) goto LAB_146deb79f;
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)
            StatPtr_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER;
    if (StatPtr_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER>)0x0) {
      pFVar5 = FName::FName(&local_res18,"STAT_Navigation_DetourPERM_TILE_LINK_BUILDER");
      pwVar10 = L"Detour PERM_TILE_LINK_BUILDER";
      this = &StatPtr_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER;
      goto LAB_146deb17c;
    }
  }
  local_res18 = *(FName *)FVar4;
  FThreadStats::AddMessage<__int64>(local_res18,Add,(long64)auVar3,false);
LAB_146deb53a:
  FVar6 = StatPtr_STAT_NavigationMemory;
  if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
    pFVar5 = FName::FName(&local_res18,"STAT_NavigationMemory");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar5,
                       L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                       false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar6;
  local_res18 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_58.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_res18 = FVar1;
    local_58.StatData.Pad = auVar3;
    local_58.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_58);
    FStatsTrace::Add(&local_res18,(long64)auVar3);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar9 = StatPtr_STAT_Navigation_RecastMemory;
  if (StatPtr_STAT_Navigation_RecastMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)0x0) {
    pFVar5 = FName::FName(&local_res18,"STAT_Navigation_RecastMemory");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastMemory,*pFVar5,
                       L"Recast memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
                       ,false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar9;
  local_res18 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_58.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_res18 = FVar1;
    local_58.StatData.Pad = auVar3;
    local_58.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_58);
    FStatsTrace::Add(&local_res18,(long64)auVar3);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
LAB_146deb79f:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return pvVar2;
}

// DetourStatsPostAddTile @ 146deb810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DetourStatsPostAddTile(dtMeshTile *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_DetourTileMemory> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_DetourTileMeshHeaderMemory> FVar6;
  FThreadSafeStaticStat<FStat_STAT_DetourTileNavVertsMemory> FVar7;
  FThreadSafeStaticStat<FStat_STAT_DetourTileNavPolysMemory> FVar8;
  FThreadSafeStaticStat<FStat_STAT_DetourTileLinksMemory> FVar9;
  FThreadSafeStaticStat<FStat_STAT_DetourTileDetailMeshesMemory> FVar10;
  FThreadSafeStaticStat<FStat_STAT_DetourTileDetailVertsMemory> FVar11;
  FThreadSafeStaticStat<FStat_STAT_DetourTileDetailTrisMemory> FVar12;
  FThreadSafeStaticStat<FStat_STAT_DetourTileBVTreeMemory> FVar13;
  FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshConsMemory> FVar14;
  FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshSegsMemory> FVar15;
  FThreadSafeStaticStat<FStat_STAT_DetourTileClustersMemory> FVar16;
  FThreadSafeStaticStat<FStat_STAT_DetourTilePolyClustersMemory> FVar17;
  uchar auVar18 [8];
  FName local_res10;
  FStatMessage local_78;
  FDetourTileLayout local_68;
  
  FDetourTileLayout::FDetourTileLayout(&local_68,param_1);
  auVar18 = (uchar  [8])(longlong)local_68.TileSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_DetourTileMemory;
    if (StatPtr_STAT_DetourTileMemory == (FThreadSafeStaticStat<FStat_STAT_DetourTileMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_DetourTileMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileMemory,*pFVar2,
                         L"Detour Tile Memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.HeaderSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_DetourTileMeshHeaderMemory;
    if (StatPtr_STAT_DetourTileMeshHeaderMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileMeshHeaderMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileMeshHeaderMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_DetourTileMeshHeaderMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileMeshHeaderMemory,
                         *pFVar2,L"Detour Tile Mesh Header Memory","STATGROUP_Navigation",
                         "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.VertsSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_DetourTileNavVertsMemory;
    if (StatPtr_STAT_DetourTileNavVertsMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileNavVertsMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileNavVertsMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_DetourTileNavVertsMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileNavVertsMemory,*pFVar2
                         ,L"Detour Tile Nav Verts Memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.PolysSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_DetourTileNavPolysMemory;
    if (StatPtr_STAT_DetourTileNavPolysMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileNavPolysMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileNavPolysMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_DetourTileNavPolysMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileNavPolysMemory,*pFVar2
                         ,L"Detour Tile Nav Polys Memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.LinksSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_DetourTileLinksMemory;
    if (StatPtr_STAT_DetourTileLinksMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileLinksMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileLinksMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_DetourTileLinksMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileLinksMemory,*pFVar2,
                         L"Detour Tile Links Memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar9;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.DetailMeshesSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_DetourTileDetailMeshesMemory;
    if (StatPtr_STAT_DetourTileDetailMeshesMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailMeshesMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileDetailMeshesMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailMeshesMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailMeshesMemory,
                          *pFVar2,L"Detour Tile Detail Meshes Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar10;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.DetailVertsSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar11 = StatPtr_STAT_DetourTileDetailVertsMemory;
    if (StatPtr_STAT_DetourTileDetailVertsMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailVertsMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileDetailVertsMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailVertsMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailVertsMemory,
                          *pFVar2,L"Detour Tile Detail Verts Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar11;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.DetailTrisSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar12 = StatPtr_STAT_DetourTileDetailTrisMemory;
    if (StatPtr_STAT_DetourTileDetailTrisMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailTrisMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileDetailTrisMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailTrisMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailTrisMemory,
                          *pFVar2,L"Detour Tile Detail Tris Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar12;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.BvTreeSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar13 = StatPtr_STAT_DetourTileBVTreeMemory;
    if (StatPtr_STAT_DetourTileBVTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileBVTreeMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileBVTreeMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_DetourTileBVTreeMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileBVTreeMemory,*pFVar2,
                          L"Detour Tile BV Tree Memory","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar13;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.OffMeshConsSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_DetourTileOffMeshConsMemory;
    if (StatPtr_STAT_DetourTileOffMeshConsMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshConsMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileOffMeshConsMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshConsMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileOffMeshConsMemory,
                          *pFVar2,L"Detour Tile Off Mesh Cons Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar14;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.OffMeshSegsSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar15 = StatPtr_STAT_DetourTileOffMeshSegsMemory;
    if (StatPtr_STAT_DetourTileOffMeshSegsMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshSegsMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileOffMeshSegsMemory");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshSegsMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileOffMeshSegsMemory,
                          *pFVar2,L"Detour Tile Off Mesh Segs Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar15;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.ClustersSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar16 = StatPtr_STAT_DetourTileClustersMemory;
    if (StatPtr_STAT_DetourTileClustersMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileClustersMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileClustersMemory");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_DetourTileClustersMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileClustersMemory,
                          *pFVar2,L"Detour Tile Poly CLusters Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar16;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.PolyClustersSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar17 = StatPtr_STAT_DetourTilePolyClustersMemory;
    if (StatPtr_STAT_DetourTilePolyClustersMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTilePolyClustersMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTilePolyClustersMemory");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_DetourTilePolyClustersMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTilePolyClustersMemory,
                          *pFVar2,L"Detour Tile Poly CLusters Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar17;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res10 = FVar1;
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,(long64)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  return;
}

// DetourStatsPreRemoveTile @ 146dec7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DetourStatsPreRemoveTile(dtMeshTile *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_DetourTileMemory> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_DetourTileMeshHeaderMemory> FVar6;
  FThreadSafeStaticStat<FStat_STAT_DetourTileNavVertsMemory> FVar7;
  FThreadSafeStaticStat<FStat_STAT_DetourTileNavPolysMemory> FVar8;
  FThreadSafeStaticStat<FStat_STAT_DetourTileLinksMemory> FVar9;
  FThreadSafeStaticStat<FStat_STAT_DetourTileDetailMeshesMemory> FVar10;
  FThreadSafeStaticStat<FStat_STAT_DetourTileDetailVertsMemory> FVar11;
  FThreadSafeStaticStat<FStat_STAT_DetourTileDetailTrisMemory> FVar12;
  FThreadSafeStaticStat<FStat_STAT_DetourTileBVTreeMemory> FVar13;
  FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshConsMemory> FVar14;
  FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshSegsMemory> FVar15;
  FThreadSafeStaticStat<FStat_STAT_DetourTileClustersMemory> FVar16;
  FThreadSafeStaticStat<FStat_STAT_DetourTilePolyClustersMemory> FVar17;
  uchar auVar18 [8];
  FName local_res10;
  FStatMessage local_78;
  FDetourTileLayout local_68;
  
  FDetourTileLayout::FDetourTileLayout(&local_68,param_1);
  auVar18 = (uchar  [8])(longlong)local_68.TileSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_DetourTileMemory;
    if (StatPtr_STAT_DetourTileMemory == (FThreadSafeStaticStat<FStat_STAT_DetourTileMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_DetourTileMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileMemory,*pFVar2,
                         L"Detour Tile Memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.HeaderSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_DetourTileMeshHeaderMemory;
    if (StatPtr_STAT_DetourTileMeshHeaderMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileMeshHeaderMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileMeshHeaderMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_DetourTileMeshHeaderMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileMeshHeaderMemory,
                         *pFVar2,L"Detour Tile Mesh Header Memory","STATGROUP_Navigation",
                         "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.VertsSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_DetourTileNavVertsMemory;
    if (StatPtr_STAT_DetourTileNavVertsMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileNavVertsMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileNavVertsMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_DetourTileNavVertsMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileNavVertsMemory,*pFVar2
                         ,L"Detour Tile Nav Verts Memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.PolysSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_DetourTileNavPolysMemory;
    if (StatPtr_STAT_DetourTileNavPolysMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileNavPolysMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileNavPolysMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_DetourTileNavPolysMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileNavPolysMemory,*pFVar2
                         ,L"Detour Tile Nav Polys Memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.LinksSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_DetourTileLinksMemory;
    if (StatPtr_STAT_DetourTileLinksMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileLinksMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileLinksMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_DetourTileLinksMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileLinksMemory,*pFVar2,
                         L"Detour Tile Links Memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar9;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.DetailMeshesSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_DetourTileDetailMeshesMemory;
    if (StatPtr_STAT_DetourTileDetailMeshesMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailMeshesMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileDetailMeshesMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailMeshesMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailMeshesMemory,
                          *pFVar2,L"Detour Tile Detail Meshes Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar10;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.DetailVertsSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar11 = StatPtr_STAT_DetourTileDetailVertsMemory;
    if (StatPtr_STAT_DetourTileDetailVertsMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailVertsMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileDetailVertsMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailVertsMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailVertsMemory,
                          *pFVar2,L"Detour Tile Detail Verts Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar11;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.DetailTrisSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar12 = StatPtr_STAT_DetourTileDetailTrisMemory;
    if (StatPtr_STAT_DetourTileDetailTrisMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailTrisMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileDetailTrisMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailTrisMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailTrisMemory,
                          *pFVar2,L"Detour Tile Detail Tris Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar12;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.BvTreeSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar13 = StatPtr_STAT_DetourTileBVTreeMemory;
    if (StatPtr_STAT_DetourTileBVTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileBVTreeMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileBVTreeMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_DetourTileBVTreeMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileBVTreeMemory,*pFVar2,
                          L"Detour Tile BV Tree Memory","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar13;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.OffMeshConsSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_DetourTileOffMeshConsMemory;
    if (StatPtr_STAT_DetourTileOffMeshConsMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshConsMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileOffMeshConsMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshConsMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileOffMeshConsMemory,
                          *pFVar2,L"Detour Tile Off Mesh Cons Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar14;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.OffMeshSegsSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar15 = StatPtr_STAT_DetourTileOffMeshSegsMemory;
    if (StatPtr_STAT_DetourTileOffMeshSegsMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshSegsMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileOffMeshSegsMemory");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshSegsMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileOffMeshSegsMemory,
                          *pFVar2,L"Detour Tile Off Mesh Segs Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar15;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.ClustersSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar16 = StatPtr_STAT_DetourTileClustersMemory;
    if (StatPtr_STAT_DetourTileClustersMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTileClustersMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTileClustersMemory");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_DetourTileClustersMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileClustersMemory,
                          *pFVar2,L"Detour Tile Poly CLusters Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar16;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar18 = (uchar  [8])(longlong)local_68.PolyClustersSize;
  if (auVar18 != (uchar  [8])0x0) {
    FVar17 = StatPtr_STAT_DetourTilePolyClustersMemory;
    if (StatPtr_STAT_DetourTilePolyClustersMemory ==
        (FThreadSafeStaticStat<FStat_STAT_DetourTilePolyClustersMemory>)0x0) {
      pFVar2 = FName::FName(&local_res10,"STAT_DetourTilePolyClustersMemory");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_DetourTilePolyClustersMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTilePolyClustersMemory,
                          *pFVar2,L"Detour Tile Poly CLusters Memory","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar17;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res10 = FVar1;
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_78.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_78.StatData.Pad = auVar18;
      local_78.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_78);
      FStatsTrace::Add(&local_res10,-(longlong)auVar18);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeLinkGenerationConfig @ 146df2740

void __cdecl EmptyLinkFunctionForGeneratedCodeLinkGenerationConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavLinkComponent @ 146df2750

void __cdecl EmptyLinkFunctionForGeneratedCodeNavLinkComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavLinkCustomComponent @ 146df2760

void __cdecl EmptyLinkFunctionForGeneratedCodeNavLinkCustomComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavLinkRenderingComponent @ 146df2770

void __cdecl EmptyLinkFunctionForGeneratedCodeNavLinkRenderingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavMeshBoundsVolume @ 146df2780

void __cdecl EmptyLinkFunctionForGeneratedCodeNavMeshBoundsVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavMeshRenderingComponent @ 146df2790

void __cdecl EmptyLinkFunctionForGeneratedCodeNavMeshRenderingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavTestRenderingComponent @ 146df27a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavTestRenderingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationTestingActor @ 146df27b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationTestingActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRecastNavMesh @ 146df27c0

void __cdecl EmptyLinkFunctionForGeneratedCodeRecastNavMesh(void)

{
  return;
}

// GatherCollision @ 146df6510

void __cdecl NavigationHelper::GatherCollision(FKAggregateGeom *param_1,UNavCollision *param_2)

{
  FRecastGeometryExport::ExportAggregatedGeometry
            (param_1,(TNavStatArray<UE::Math::TVector<double>_> *)&param_2->_padding_,
             (TNavStatArray<int> *)&param_2->_padding_,&param_2->ConvexShapeIndices,&param_2->Bounds
             ,&UE::Math::TTransform<double>::Identity);
  return;
}

// GatherCollision @ 146df6550

void __cdecl
NavigationHelper::GatherCollision
          (UBodySetup *param_1,TNavStatArray<UE::Math::TVector<double>_> *param_2,
          TNavStatArray<int> *param_3,TTransform<double> *param_4,TBox<double> *param_5)

{
  if (param_1 != (UBodySetup *)0x0) {
    FRecastGeometryExport::ExportRigidBodyGeometry(param_1,param_2,param_3,param_5,param_4);
  }
  return;
}

// GatherCollision @ 146df6580

void __cdecl NavigationHelper::GatherCollision(UBodySetup *param_1,UNavCollision *param_2)

{
  if ((param_1 != (UBodySetup *)0x0) && (param_2 != (UNavCollision *)0x0)) {
    FRecastGeometryExport::ExportRigidBodyGeometry
              (param_1,(TNavStatArray<UE::Math::TVector<double>_> *)&param_2->_padding_,
               (TNavStatArray<int> *)&param_2->_padding_,
               (TNavStatArray<UE::Math::TVector<double>_> *)&param_2->_padding_,
               (TNavStatArray<int> *)&param_2->_padding_,&param_2->ConvexShapeIndices,
               &param_2->Bounds,&UE::Math::TTransform<double>::Identity);
  }
  return;
}

// GetValidEnds @ 146e13a50

uchar __cdecl GetValidEnds(dtNavMesh *param_1,dtMeshTile *param_2,dtPoly *param_3)

{
  byte bVar1;
  dtLink *pdVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  if (0x3f < param_3->areaAndtype) {
    uVar4 = param_3->firstLink;
    bVar5 = 0;
    if (uVar4 != 0xffffffff) {
      do {
        uVar3 = (uint)param_2->header->maxLinkCount;
        if (uVar4 < uVar3) {
          pdVar2 = param_2->links + uVar4;
        }
        else {
          pdVar2 = (param_2->dynamicLinksO).m_data + (int)(uVar4 - uVar3);
        }
        uVar4 = pdVar2->next;
        bVar1 = bVar5 | 1;
        if (pdVar2->edge != '\0') {
          bVar1 = bVar5;
        }
        bVar5 = bVar1 | 2;
        if (pdVar2->edge != '\x01') {
          bVar5 = bVar1;
        }
      } while (uVar4 != 0xffffffff);
    }
    return bVar5;
  }
  return '\0';
}

// IsBodyNavigationRelevant @ 146e156d0

bool __cdecl NavigationHelper::IsBodyNavigationRelevant(UBodySetup *param_1)

{
  Type TVar1;
  
  if (((0 < (param_1->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
            (param_1->AggGeom).MLLevelSetElems.ArrayNum +
            (param_1->AggGeom).SkinnedLevelSetElems.ArrayNum +
            (param_1->AggGeom).LevelSetElems.ArrayNum +
            (param_1->AggGeom).TaperedCapsuleElems.ArrayNum +
            (param_1->AggGeom).ConvexElems.ArrayNum + (param_1->AggGeom).SphylElems.ArrayNum +
            (param_1->AggGeom).BoxElems.ArrayNum + (param_1->AggGeom).SphereElems.ArrayNum) ||
      (0 < (param_1->TriMeshGeometries).ArrayNum)) &&
     (((param_1->DefaultInstance).CollisionResponses.ResponseToChannels.field0_0x0._s_0.Pawn ==
       '\x02' ||
      ((param_1->DefaultInstance).CollisionResponses.ResponseToChannels.field0_0x0._s_0.Vehicle ==
       '\x02')))) {
    TVar1 = FBodyInstance::GetCollisionEnabled_CheckOwner(&param_1->DefaultInstance);
    if (TVar1 == QueryAndPhysics) {
      return true;
    }
  }
  return false;
}

// ProcessNavLinkAndAppend @ 146e1c8e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NavigationHelper::ProcessNavLinkAndAppend
          (FCompositeNavModifier *param_1,FNavLinkOwnerData *param_2,
          TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Navigation_AdjustingNavLinks> FVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  longlong *plVar13;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  FVar9 = StatPtr_STAT_Navigation_AdjustingNavLinks;
  if (StatPtr_STAT_Navigation_AdjustingNavLinks ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_AdjustingNavLinks>)0x0) {
    pFVar8 = ::FName::FName(&local_80,"STAT_Navigation_AdjustingNavLinks");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Navigation_AdjustingNavLinks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_AdjustingNavLinks,
                       *pFVar8,L"Adjusting nav links","STATGROUP_Navigation","STATCAT_Advanced",
                       L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_146e1ca32:
    bVar4 = false;
    FVar12 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar11.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationSystemTypes.cpp"
                   ,0xc6);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e1ca32;
    local_88.s.LowPart = FVar11.Value;
    local_88.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
  }
  if (param_3->ArrayNum == 0) goto LAB_146e1caf8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavLinkProcessor,&local_58);
  if ((NavLinkProcessor._16_4_ == 0) || (NavLinkProcessor._8_8_ == 0)) {
LAB_146e1ca83:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavLinkProcessor.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationSystemTypes.cpp"
                       ,0xca,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    cVar6 = (**(code **)(*(longlong *)NavLinkProcessor._8_8_ + 0x38))();
    if (cVar6 == '\0') goto LAB_146e1ca83;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavLinkProcessor,&local_40);
  plVar13 = (longlong *)0x0;
  if (NavLinkProcessor._16_4_ != 0) {
    plVar13 = (longlong *)NavLinkProcessor._8_8_;
  }
  (**(code **)(*plVar13 + 0x60))(plVar13,param_1,param_2,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
LAB_146e1caf8:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_68.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_68);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// ProcessNavLinkAndAppend @ 146e1cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NavigationHelper::ProcessNavLinkAndAppend
          (FCompositeNavModifier *param_1,AActor *param_2,
          TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_3)

{
  USceneComponent *pUVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_a8 [32];
  FNavLinkOwnerData local_88;
  ulonglong local_18;
  
  if (param_2 != (AActor *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
    pUVar1 = (param_2->RootComponent).field0_0x0.DebugPtr;
    if (pUVar1 == (USceneComponent *)0x0) {
      pTVar2 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar2 = &pUVar1->ComponentToWorld;
    }
    local_88.LinkToWorld.Rotation.XY.m128d_f64 = *&(pTVar2->Rotation).XY.m128d_f64;
    local_88.LinkToWorld.Rotation.ZW.m128d_f64 = *&(pTVar2->Rotation).ZW.m128d_f64;
    local_88.LinkToWorld.Translation.XY.m128d_f64 = *&(pTVar2->Translation).XY.m128d_f64;
    local_88.LinkToWorld.Translation.ZW.m128d_f64 = *&(pTVar2->Translation).ZW.m128d_f64;
    local_88.LinkToWorld.Scale3D.XY.m128d_f64 = *&(pTVar2->Scale3D).XY.m128d_f64;
    local_88.LinkToWorld.Scale3D.ZW.m128d_f64 = *&(pTVar2->Scale3D).ZW.m128d_f64;
    local_88.Actor = param_2;
    ProcessNavLinkAndAppend(param_1,&local_88,param_3);
  }
  return;
}

// ProcessNavLinkSegmentAndAppend @ 146e1cd00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NavigationHelper::ProcessNavLinkSegmentAndAppend
          (FCompositeNavModifier *param_1,FNavLinkOwnerData *param_2,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Navigation_AdjustingNavLinks> FVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  longlong *plVar13;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  FVar9 = StatPtr_STAT_Navigation_AdjustingNavLinks;
  if (StatPtr_STAT_Navigation_AdjustingNavLinks ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_AdjustingNavLinks>)0x0) {
    pFVar8 = ::FName::FName(&local_80,"STAT_Navigation_AdjustingNavLinks");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Navigation_AdjustingNavLinks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_AdjustingNavLinks,
                       *pFVar8,L"Adjusting nav links","STATGROUP_Navigation","STATCAT_Advanced",
                       L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_146e1ce52:
    bVar4 = false;
    FVar12 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar11.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationSystemTypes.cpp"
                   ,0xd9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e1ce52;
    local_88.s.LowPart = FVar11.Value;
    local_88.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
  }
  if (param_3->ArrayNum == 0) goto LAB_146e1cf18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavLinkSegmentProcessor,
             &local_58);
  if ((NavLinkSegmentProcessor._16_4_ == 0) || (NavLinkSegmentProcessor._8_8_ == 0)) {
LAB_146e1cea3:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavLinkSegmentProcessor.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationSystemTypes.cpp"
                       ,0xdd,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    cVar6 = (**(code **)(*(longlong *)NavLinkSegmentProcessor._8_8_ + 0x38))();
    if (cVar6 == '\0') goto LAB_146e1cea3;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavLinkSegmentProcessor,
             &local_40);
  plVar13 = (longlong *)0x0;
  if (NavLinkSegmentProcessor._16_4_ != 0) {
    plVar13 = (longlong *)NavLinkSegmentProcessor._8_8_;
  }
  (**(code **)(*plVar13 + 0x60))(plVar13,param_1,param_2,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
LAB_146e1cf18:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_68.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_68);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// ProcessNavLinkSegmentAndAppend @ 146e1d020

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
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
NavigationHelper::ProcessNavLinkSegmentAndAppend
          (FCompositeNavModifier *param_1,AActor *param_2,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_3)

{
  USceneComponent *pUVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_a8 [32];
  FNavLinkOwnerData local_88;
  ulonglong local_18;
  
  if (param_2 != (AActor *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
    pUVar1 = (param_2->RootComponent).field0_0x0.DebugPtr;
    if (pUVar1 == (USceneComponent *)0x0) {
      pTVar2 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar2 = &pUVar1->ComponentToWorld;
    }
    local_88.LinkToWorld.Rotation.XY.m128d_f64 = *&(pTVar2->Rotation).XY.m128d_f64;
    local_88.LinkToWorld.Rotation.ZW.m128d_f64 = *&(pTVar2->Rotation).ZW.m128d_f64;
    local_88.LinkToWorld.Translation.XY.m128d_f64 = *&(pTVar2->Translation).XY.m128d_f64;
    local_88.LinkToWorld.Translation.ZW.m128d_f64 = *&(pTVar2->Translation).ZW.m128d_f64;
    local_88.LinkToWorld.Scale3D.XY.m128d_f64 = *&(pTVar2->Scale3D).XY.m128d_f64;
    local_88.LinkToWorld.Scale3D.ZW.m128d_f64 = *&(pTVar2->Scale3D).ZW.m128d_f64;
    local_88.Actor = param_2;
    ProcessNavLinkSegmentAndAppend(param_1,&local_88,param_3);
  }
  return;
}

// Recast2UnrealBox @ 146e1e150

TBox<double> * __cdecl Recast2UnrealBox(TBox<double> *__return_storage_ptr__,TBox<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  TVector<double>_u_0 local_38;
  undefined8 local_20;
  undefined8 local_18;
  double local_10;
  
  uVar1 = *(undefined8 *)&(param_1->Min).field0_0x0;
  uVar2 = *(undefined8 *)&(param_1->Max).field0_0x0;
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_38._s_0.X = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar4,(uint)uVar1 ^ uVar3);
  local_20 = CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar4,(uint)uVar2 ^ uVar3);
  uVar1 = *(undefined8 *)((longlong)&(param_1->Min).field0_0x0 + 0x10);
  local_38._s_0.Y = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar4,(uint)uVar1 ^ uVar3);
  local_38._s_0.Z = (param_1->Min).field0_0x0._s_0.Y;
  uVar1 = *(undefined8 *)((longlong)&(param_1->Max).field0_0x0 + 0x10);
  local_18 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar4,(uint)uVar1 ^ uVar3);
  local_10 = (param_1->Max).field0_0x0._s_0.Y;
  UE::Math::TBox<double>::TBox<double>(__return_storage_ptr__,(TVector<double> *)&local_38._s_0,2);
  return __return_storage_ptr__;
}

// Recast2UnrealBox @ 146e1e1d0

TBox<double> * __cdecl
Recast2UnrealBox(TBox<double> *__return_storage_ptr__,float *param_1,float *param_2)

{
  TVector<double>_u_0 local_38;
  double local_20;
  double local_18;
  double local_10;
  
  local_38._s_0.X = (double)(float)((uint)*param_1 ^ __xmm_80000000800000008000000080000000);
  local_38._s_0.Y = (double)(float)((uint)param_1[2] ^ __xmm_80000000800000008000000080000000);
  local_38._s_0.Z = (double)param_1[1];
  local_20 = (double)(float)((uint)*param_2 ^ __xmm_80000000800000008000000080000000);
  local_18 = (double)(float)((uint)param_2[2] ^ __xmm_80000000800000008000000080000000);
  local_10 = (double)param_2[1];
  UE::Math::TBox<double>::TBox<double>(__return_storage_ptr__,(TVector<double> *)&local_38._s_0,2);
  return __return_storage_ptr__;
}

// Recast2UnrealBox @ 146e1e270

TBox<double> * __cdecl
Recast2UnrealBox(TBox<double> *__return_storage_ptr__,double *param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  TVector<double>_u_0 local_38;
  undefined8 local_20;
  undefined8 local_18;
  double local_10;
  
  uVar1 = (uint)__xmm_80000000000000008000000000000000;
  uVar2 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_38._s_0.X =
       (double)CONCAT44((uint)((ulonglong)*param_1 >> 0x20) ^ uVar2,SUB84(*param_1,0) ^ uVar1);
  local_20 = CONCAT44((uint)((ulonglong)*param_2 >> 0x20) ^ uVar2,SUB84(*param_2,0) ^ uVar1);
  local_38._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)param_1[2] >> 0x20) ^ uVar2,SUB84(param_1[2],0) ^ uVar1);
  local_38._s_0.Z = param_1[1];
  local_18 = CONCAT44((uint)((ulonglong)param_2[2] >> 0x20) ^ uVar2,SUB84(param_2[2],0) ^ uVar1);
  local_10 = param_2[1];
  UE::Math::TBox<double>::TBox<double>(__return_storage_ptr__,(TVector<double> *)&local_38._s_0,2);
  return __return_storage_ptr__;
}

// Recast2UnrealColor @ 146e1e2f0

FColor __cdecl Recast2UnrealColor(uint param_1)

{
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  *(char *)(CONCAT44(in_register_0000000c,param_1) + 2) = (char)in_EDX;
  *(char *)CONCAT44(in_register_0000000c,param_1) = (char)((uint)in_EDX >> 0x10);
  *(char *)(CONCAT44(in_register_0000000c,param_1) + 1) = (char)((uint)in_EDX >> 8);
  *(char *)(CONCAT44(in_register_0000000c,param_1) + 3) = (char)((uint)in_EDX >> 0x18);
  return (FColor)(FColor_u_0)param_1;
}

// Recast2UnrealMatrix @ 146e1e320

TMatrix<double> * __cdecl Recast2UnrealMatrix(TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      TM.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      TM.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      TM.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      _Init_thread_footer(&_TSS0);
    }
  }
  dVar3 = TM.M[0][3];
  dVar2 = TM.M[0][2];
  dVar1 = TM.M[0][1];
  __return_storage_ptr__->M[0][0] = TM.M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar4 = TM.M[1][1];
  dVar1 = TM.M[1][0];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar3 = TM.M[1][3];
  dVar2 = TM.M[1][2];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar4 = TM.M[2][1];
  dVar1 = TM.M[2][0];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar3 = TM.M[2][3];
  dVar2 = TM.M[2][2];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar4 = TM.M[3][1];
  dVar1 = TM.M[3][0];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar3 = TM.M[3][3];
  dVar2 = TM.M[3][2];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// Recast2UnrealPoint @ 146e1e400

TVector<double> * __cdecl
Recast2UnrealPoint(TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)*(undefined8 *)&param_1->field0_0x0 ^
                        (uint)__xmm_80000000000000008000000000000000);
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar3 = (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar4,uVar3);
  return __return_storage_ptr__;
}

// Recast2UnrealPoint @ 146e1e440

TVector<double> * __cdecl Recast2UnrealPoint(TVector<double> *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((uint)param_1[2] ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)((uint)*param_1 ^ __xmm_80000000800000008000000080000000);
  fVar1 = param_1[1];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar1;
  return __return_storage_ptr__;
}

// Recast2UnrealPoint @ 146e1e490

TVector<double> * __cdecl
Recast2UnrealPoint(TVector<double> *__return_storage_ptr__,double *param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  dVar1 = param_1[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44((uint)((ulonglong)*param_1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(*param_1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  uVar2 = SUB84(param_1[2],0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar3 = (uint)((ulonglong)param_1[2] >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar3,uVar2);
  return __return_storage_ptr__;
}

// RecastFree @ 146e1e4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RecastFree(void *param_1)

{
  FName FVar1;
  uchar auVar2 [8];
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory> FVar7;
  FName local_res10;
  FStatMessage local_28;
  
  auVar2 = (uchar  [8])FMemory::GetAllocSize(param_1);
  if (auVar2 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar3 = FName::FName(&local_res10,"STAT_NavigationMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar3,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_28.StatData.Pad = auVar2;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_28);
      FStatsTrace::Add(&local_res10,-(longlong)auVar2);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
    FVar7 = StatPtr_STAT_Navigation_RecastMemory;
    if (StatPtr_STAT_Navigation_RecastMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)0x0) {
      pFVar3 = FName::FName(&local_res10,"STAT_Navigation_RecastMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastMemory,*pFVar3,
                         L"Recast memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
                         true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    local_res10 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar1;
      local_28.StatData.Pad = auVar2;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_28);
      FStatsTrace::Add(&local_res10,-(longlong)auVar2);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  FMemory::Free(param_1);
  return;
}

// RecastMalloc @ 146e1e7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __cdecl RecastMalloc(int param_1,rcAllocHint param_2)

{
  FName FVar1;
  void *pvVar2;
  uchar auVar3 [8];
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory> FVar8;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  FStatMessage local_38;
  
  FLLMScope::FLLMScope(local_res8,NavigationRecast,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,NavigationRecast,true);
  pvVar2 = FMemory::Malloc((ulonglong)(uint)param_1,0);
  auVar3 = (uchar  [8])FMemory::GetAllocSize(pvVar2);
  if (auVar3 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar4 = FName::FName(&local_res18,"STAT_NavigationMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar4,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_res18 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res18 = FVar1;
      local_38.StatData.Pad = auVar3;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_38);
      FStatsTrace::Add(&local_res18,(long64)auVar3);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
    FVar8 = StatPtr_STAT_Navigation_RecastMemory;
    if (StatPtr_STAT_Navigation_RecastMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)0x0) {
      pFVar4 = FName::FName(&local_res18,"STAT_Navigation_RecastMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastMemory,*pFVar4,
                         L"Recast memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
                         true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    local_res18 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res18 = FVar1;
      local_38.StatData.Pad = auVar3;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_38);
      FStatsTrace::Add(&local_res18,(long64)auVar3);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return pvVar2;
}

// SetNavLinkProcessorDelegate @ 146e28c80

void __cdecl
NavigationHelper::SetNavLinkProcessorDelegate
          (TDelegate<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_38);
  if ((*(int *)&param_1->field_0x10 != 0) && (*(longlong **)&param_1->field_0x8 != (longlong *)0x0))
  {
    cVar3 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      goto LAB_146e28cfc;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("NewDelegate.IsBound()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationSystemTypes.cpp"
                     ,0xe4,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146e28cfc:
  if (param_1 != &NavLinkProcessor) {
    local_68 = (undefined1  [8])0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&NavLinkProcessor,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// SetNavLinkSegmentProcessorDelegate @ 146e28e00

void __cdecl
NavigationHelper::SetNavLinkSegmentProcessorDelegate
          (TDelegate<void___cdecl(FCompositeNavModifier_*,NavigationHelper::FNavLinkOwnerData_const_&,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_38);
  if ((*(int *)&param_1->field_0x10 != 0) && (*(longlong **)&param_1->field_0x8 != (longlong *)0x0))
  {
    cVar3 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      goto LAB_146e28e7c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("NewDelegate.IsBound()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationSystemTypes.cpp"
                     ,0xea,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146e28e7c:
  if (param_1 != &NavLinkSegmentProcessor) {
    local_68 = (undefined1  [8])0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&NavLinkSegmentProcessor,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// StorePathfindingDebugData @ 146e29e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
StorePathfindingDebugData
          (dtNavMeshQuery *param_1,dtNavMesh *param_2,FRecastDebugPathfindingData *param_3)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<UE::Math::TVector<float>_> FVar9;
  dtNodePool *pdVar10;
  dtNode *pdVar11;
  longlong lVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  longlong lVar15;
  uint uVar16;
  dtNode *pdVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_178;
  int local_170 [2];
  dtPoly *local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  longlong local_150;
  dtMeshTile *local_148;
  dtNodePool *local_140;
  undefined4 local_138;
  undefined1 local_134 [28];
  ulong64 local_118;
  ulong64 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ForElementType<UE::Math::TVector<float>_> local_d8;
  int local_88;
  int local_84;
  uchar local_80;
  byte local_7f;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pdVar10 = param_1->m_nodePool;
  local_140 = pdVar10;
  local_134._4_8_ = param_2;
  local_134._12_8_ = param_1;
  if ((pdVar10 == (dtNodePool *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("NodePool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                         ,0x644,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar20 = pdVar10->m_nodeCount;
  lVar13 = (longlong)(int)uVar20;
  if (0 < (int)uVar20) {
    lVar15 = 8;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170[0] = 0;
    local_170[1] = 0;
    if ((param_3->Flags & 4) != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar20 + 1,&local_178,local_170,local_170 + 1);
      memset(local_178.Data + (longlong)iVar6 * 8,0,(longlong)(int)(uVar20 + 1) << 3);
      pdVar10 = local_140;
    }
    uVar16 = 1;
    if ((uint)(*(int *)&(param_3->Nodes).Elements.field_0x8 -
              *(int *)&(param_3->Nodes).Elements.field_0x34) < uVar20) {
      TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_3,uVar20);
      if (uVar20 < 4) {
        iVar6 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_138 = (undefined4)lVar12;
        iVar6 = 1 << ((byte)lVar12 & 0x1f);
      }
      iVar1 = (param_3->Nodes).HashSize;
      if ((iVar1 == 0) || (iVar1 < iVar6)) {
        (param_3->Nodes).HashSize = iVar6;
        TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
        ::Rehash(&param_3->Nodes);
      }
    }
    local_150 = lVar13;
    if (0 < lVar13) {
      uVar20 = (uint)__xmm_80000000000000008000000000000000;
      uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      do {
        local_150 = lVar13;
        if (uVar16 == 0) {
          pdVar17 = (dtNode *)0x0;
LAB_146e29ff7:
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                             ,0x658,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pdVar17 = pdVar10->m_nodes + (uVar16 - 1);
          if (pdVar17 == (dtNode *)0x0) goto LAB_146e29ff7;
        }
        uVar7 = pdVar17->pidx;
        if (uVar7 == 0) {
          pdVar11 = (dtNode *)0x0;
        }
        else {
          pdVar11 = pdVar10->m_nodes + (uVar7 - 1);
        }
        iVar6 = 0;
        local_f8 = 0.0;
        local_110 = 0;
        local_d8.SecondaryData = (ForElementType<UE::Math::TVector<float>_>)0x0;
        local_88 = 0;
        local_84 = 6;
        local_80 = '\0';
        local_118 = pdVar17->id;
        if (pdVar11 != (dtNode *)0x0) {
          local_110 = pdVar11->id;
        }
        local_108 = pdVar17->cost;
        uStack_100 = pdVar17->total;
        local_7f = pdVar17->flags & 1 | local_7f & 0xf8 | 4;
        local_e8 = (double)CONCAT44((uint)((ulonglong)pdVar17->pos[2] >> 0x20) ^ uVar21,
                                    SUB84(pdVar17->pos[2],0) ^ uVar20);
        local_e0 = pdVar17->pos[1];
        local_f0 = (double)CONCAT44((uint)((ulonglong)pdVar17->pos[0] >> 0x20) ^ uVar21,
                                    SUB84(pdVar17->pos[0],0) ^ uVar20);
        local_168 = (dtPoly *)0x0;
        local_148 = (dtMeshTile *)0x0;
        dtNavMesh::getTileAndPolyByRef
                  ((dtNavMesh *)local_134._4_8_,pdVar17->id,&local_148,&local_168);
        if (local_168 == (dtPoly *)0x0) {
          bVar5 = false;
        }
        else {
          bVar5 = 0x3f < local_168->areaAndtype;
        }
        local_7f = bVar5 * '\x02' | local_7f & 0xfd;
        if ((param_3->Flags & 2) != 0) {
          if ((local_168 == (dtPoly *)0x0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("NavPoly",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                                 ,0x66d,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_80 = local_168->vertCount;
          lVar13 = local_150;
          if (local_168->vertCount != '\0') {
            lVar12 = 4;
            do {
              uVar8 = (ulonglong)*(ushort *)((longlong)local_168->verts + lVar12 + -4);
              pdVar2 = local_148->verts;
              FVar9 = (ForElementType<UE::Math::TVector<float>_>)&local_d8;
              if (local_d8.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                FVar9 = local_d8.SecondaryData;
              }
              local_160 = (float)(double)CONCAT44((uint)((ulonglong)pdVar2[uVar8 * 3] >> 0x20) ^
                                                  uVar21,SUB84(pdVar2[uVar8 * 3],0) ^ uVar20);
              fStack_15c = (float)(double)CONCAT44((uint)((ulonglong)pdVar2[uVar8 * 3 + 2] >> 0x20)
                                                   ^ uVar21,SUB84(pdVar2[uVar8 * 3 + 2],0) ^ uVar20)
              ;
              local_158 = (float)pdVar2[uVar8 * 3 + 1];
              if ((ulonglong)FVar9 <= &local_160) {
                FVar9 = (ForElementType<UE::Math::TVector<float>_>)&local_d8;
                if (local_d8.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                  FVar9 = local_d8.SecondaryData;
                }
                if ((&local_160 < (float *)((longlong)FVar9 + (longlong)local_84 * 0xc)) &&
                   (bVar5 = FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              if (local_88 == local_84) {
                local_88 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                                     (0x40c,&local_d8,&local_84);
              }
              lVar13 = (longlong)local_88;
              FVar9 = (ForElementType<UE::Math::TVector<float>_>)&local_d8;
              if (local_d8.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
                FVar9 = local_d8.SecondaryData;
              }
              iVar6 = iVar6 + 1;
              lVar12 = lVar12 + 2;
              local_88 = local_88 + 1;
              *(ulonglong *)((longlong)FVar9 + lVar13 * 0xc) = CONCAT44(fStack_15c,local_160);
              *(float *)((uchar *)((longlong)FVar9 + 8) + lVar13 * 0xc) = local_158;
              lVar13 = local_150;
            } while (iVar6 < (int)(uint)local_168->vertCount);
          }
        }
        if (((param_3->Flags & 4) != 0) && (pdVar11 != (dtNode *)0x0)) {
          dVar18 = (double)CONCAT44((uint)((ulonglong)pdVar11->pos[0] >> 0x20) ^ uVar21,
                                    SUB84(pdVar11->pos[0],0) ^ uVar20) - local_f0;
          dVar19 = (double)CONCAT44((uint)((ulonglong)pdVar11->pos[2] >> 0x20) ^ uVar21,
                                    SUB84(pdVar11->pos[2],0) ^ uVar20) - local_e8;
          dVar4 = pdVar11->pos[1] - local_e0;
          uVar7 = pdVar17->pidx;
          if (local_170[0] <= (int)uVar7) {
            bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          dVar4 = SQRT(dVar19 * dVar19 + dVar18 * dVar18 + dVar4 * dVar4) +
                  *(double *)(local_178.Data + (ulonglong)uVar7 * 8);
          uVar7 = 0;
          if ((int)uVar16 < local_170[0]) {
            uVar7 = ~uVar16 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(double *)(local_178.Data + lVar15) = dVar4;
          local_f8 = dVar4;
        }
        TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
        ::Emplace<FRecastDebugPathfindingNode_const_&>
                  (&param_3->Nodes,(FRecastDebugPathfindingNode *)local_134,
                   (bool *)(local_134 + 0x1c));
        if (local_d8.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
          FMemory::Free((void *)local_d8.SecondaryData);
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 8;
        lVar13 = lVar13 + -1;
        pdVar10 = local_140;
      } while (lVar13 != 0);
      local_150 = 0;
      param_1 = (dtNavMeshQuery *)local_134._12_8_;
    }
    if (((param_3->Flags & 1) != 0) &&
       (pdVar17 = (param_1->m_query).lastBestNode, pdVar17 != (dtNode *)0x0)) {
      uVar8 = pdVar17->id;
      if (*(int *)&(param_3->Nodes).Elements.field_0x8 !=
          *(int *)&(param_3->Nodes).Elements.field_0x34) {
        FVar14 = (param_3->Nodes).Hash.SecondaryData;
        if (FVar14 == (ForElementType<FSetElementId>)0x0) {
          FVar14 = (ForElementType<FSetElementId>)&(param_3->Nodes).Hash;
        }
        iVar6 = *(int *)((longlong)FVar14 +
                        ((uVar8 >> 0x20) * 0x17 + uVar8 & (ulonglong)((param_3->Nodes).HashSize - 1)
                        ) * 4);
        if (iVar6 != -1) {
          lVar13 = *(longlong *)&(param_3->Nodes).Elements;
          do {
            if (*(ulonglong *)((longlong)iVar6 * 0xa8 + lVar13) == uVar8) goto LAB_146e2a482;
            iVar6 = *(int *)((longlong)iVar6 * 0xa8 + 0xa0 + lVar13);
          } while (iVar6 != -1);
        }
      }
      iVar6 = -1;
LAB_146e2a482:
      (param_3->BestNode).Index = iVar6;
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
  }
  return;
}

// StorePathfindingDebugStep @ 146e2a4c0

void __cdecl
StorePathfindingDebugStep
          (dtNavMeshQuery *param_1,dtNavMesh *param_2,
          TArray<FRecastDebugPathfindingData,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  FRecastDebugPathfindingNode *pFVar13;
  uint uVar14;
  int iVar15;
  FRecastDebugPathfindingNode *pFVar16;
  FRecastDebugPathfindingData *pFVar17;
  longlong lVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined4 local_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  FRecastDebugPathfindingData *local_50;
  
  piVar1 = &param_3->ArrayNum;
  uVar12 = 1;
  uVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x58,8,1,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
  pFVar4 = (param_3->AllocatorInstance).Data;
  iVar15 = 0;
  lVar18 = (longlong)(int)uVar11 * 0x58;
  *(undefined8 *)(pFVar4 + lVar18) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x10) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x20) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x30) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x40) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x40 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar18 + 0x50) = 0;
  uVar14 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar14 = ~uVar11 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar17 = (FRecastDebugPathfindingData *)((param_3->AllocatorInstance).Data + lVar18);
  pFVar17->Flags = '\x03';
  StorePathfindingDebugData(param_1,param_2,pFVar17);
  if (1 < *piVar1) {
    uVar11 = uVar11 - 1;
    uVar14 = 0;
    if ((int)uVar11 < *piVar1) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar7 = __real_3e45798ee0000000;
    iVar3 = *(int *)&(pFVar17->Nodes).Elements.field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar17->Nodes).Elements.field_0x10;
    iVar19 = 0;
    pFVar4 = (param_3->AllocatorInstance).Data;
    TStack_70.CurrentBitIndex = 0;
    if (iVar3 != 0) {
      puVar20 = *(uint **)&(pFVar17->Nodes).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)TStack_70.Array;
      }
      uVar21 = *puVar20;
      iVar19 = 0;
      while (uVar21 == 0) {
        lVar18 = (longlong)iVar15;
        iVar19 = iVar19 + 0x20;
        iVar15 = iVar15 + 1;
        TStack_70.CurrentBitIndex = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146e2a688;
        uVar21 = puVar20[lVar18 + 1];
      }
      uVar12 = -uVar21 & uVar21;
      uVar2 = (ulonglong)uVar12 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      TStack_70.CurrentBitIndex = (int)lVar18 + -1 + iVar19;
      if (iVar3 < TStack_70.CurrentBitIndex) {
        TStack_70.CurrentBitIndex = iVar3;
      }
    }
LAB_146e2a688:
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = local_ac;
    TStack_70.BaseBitIndex = iVar19;
    local_50 = pFVar17;
    TStack_70._padding_._0_4_ = iVar15;
    TStack_70._padding_._4_4_ = uVar12;
    if (TStack_70.CurrentBitIndex < iVar3) {
      do {
        pFVar16 = (FRecastDebugPathfindingNode *)
                  ((longlong)TStack_70.CurrentBitIndex * 0xa8 +
                  *(longlong *)&(pFVar17->Nodes).Elements);
        pFVar13 = TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
                  ::Find((TSet<FRecastDebugPathfindingNode,DefaultKeyFuncs<FRecastDebugPathfindingNode,0>,FDefaultSetAllocator>
                          *)(pFVar4 + (longlong)(int)uVar11 * 0x58),pFVar16);
        if (((((pFVar13 == (FRecastDebugPathfindingNode *)0x0) ||
              (((pFVar13->bOpenSet ^ pFVar16->bOpenSet) & 1) != 0)) ||
             (pFVar16->TotalCost != pFVar13->TotalCost)) ||
            ((pFVar16->Cost != pFVar13->Cost || (pFVar13->ParentRef != pFVar16->ParentRef)))) ||
           ((dVar6 = (pFVar13->NodePos).field0_0x0._s_0.X - (pFVar16->NodePos).field0_0x0._s_0.X,
            uVar12 = SUB84(dVar6,0) & uVar14, uVar21 = (uint)((ulonglong)dVar6 >> 0x20) & uVar8,
            dVar7 <= (double)CONCAT44(uVar21,uVar12) && (double)CONCAT44(uVar21,uVar12) != dVar7 ||
            ((dVar6 = (pFVar13->NodePos).field0_0x0._s_0.Y - (pFVar16->NodePos).field0_0x0._s_0.Y,
             uVar12 = SUB84(dVar6,0) & uVar14, uVar21 = (uint)((ulonglong)dVar6 >> 0x20) & uVar8,
             dVar7 <= (double)CONCAT44(uVar21,uVar12) && (double)CONCAT44(uVar21,uVar12) != dVar7 ||
             (dVar6 = (pFVar13->NodePos).field0_0x0._s_0.Z - (pFVar16->NodePos).field0_0x0._s_0.Z,
             uVar12 = SUB84(dVar6,0) & uVar14, uVar21 = (uint)((ulonglong)dVar6 >> 0x20) & uVar8,
             dVar7 <= (double)CONCAT44(uVar21,uVar12) && (double)CONCAT44(uVar21,uVar12) != dVar7)))
            ))) {
          cVar10 = '\x01';
        }
        else {
          cVar10 = '\0';
        }
        pFVar16->bModified = '\0';
        pFVar16->field_0x99 = pFVar16->field_0x99 | cVar10 << 2;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
  }
  return;
}

// Unreal2RecastBox @ 146e2c760

TBox<double> * __cdecl Unreal2RecastBox(TBox<double> *__return_storage_ptr__,TBox<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  TVector<double>_u_0 local_38;
  undefined8 local_20;
  double local_18;
  undefined8 local_10;
  
  uVar1 = *(undefined8 *)&(param_1->Min).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Min).field0_0x0 + 8);
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_38._s_0.X = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar4,(uint)uVar1 ^ uVar3);
  local_38._s_0.Z = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar4,(uint)uVar2 ^ uVar3);
  local_38._s_0.Y = (param_1->Min).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(param_1->Max).field0_0x0;
  local_20 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar4,(uint)uVar1 ^ uVar3);
  uVar1 = *(undefined8 *)((longlong)&(param_1->Max).field0_0x0 + 8);
  local_10 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar4,(uint)uVar1 ^ uVar3);
  local_18 = (param_1->Max).field0_0x0._s_0.Z;
  UE::Math::TBox<double>::TBox<double>(__return_storage_ptr__,(TVector<double> *)&local_38._s_0,2);
  return __return_storage_ptr__;
}

// Unreal2RecastMatrix @ 146e2c7e0

TMatrix<double> * __cdecl Unreal2RecastMatrix(TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      TM.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      TM.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      TM.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      _Init_thread_footer(&_TSS0);
    }
  }
  dVar3 = TM.M[0][3];
  dVar2 = TM.M[0][2];
  dVar1 = TM.M[0][1];
  __return_storage_ptr__->M[0][0] = TM.M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar4 = TM.M[1][1];
  dVar1 = TM.M[1][0];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar3 = TM.M[1][3];
  dVar2 = TM.M[1][2];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar4 = TM.M[2][1];
  dVar1 = TM.M[2][0];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar3 = TM.M[2][3];
  dVar2 = TM.M[2][2];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar4 = TM.M[3][1];
  dVar1 = TM.M[3][0];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar3 = TM.M[3][3];
  dVar2 = TM.M[3][2];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// Unreal2RecastPoint @ 146e2c8c0

TVector<double> * __cdecl
Unreal2RecastPoint(TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)*(undefined8 *)&param_1->field0_0x0 ^
                        (uint)__xmm_80000000000000008000000000000000);
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  uVar3 = (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar4,uVar3);
  return __return_storage_ptr__;
}

// Unreal2RecastPoint @ 146e2c900

TVector<double> * __cdecl Unreal2RecastPoint(TVector<double> *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)((uint)*param_1 ^ __xmm_80000000800000008000000080000000);
  fVar2 = (float)((uint)param_1[1] ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
  return __return_storage_ptr__;
}

// Unreal2RecastPoint @ 146e2c940

TVector<double> * __cdecl
Unreal2RecastPoint(TVector<double> *__return_storage_ptr__,double *param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  dVar1 = param_1[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44((uint)((ulonglong)*param_1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(*param_1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  uVar2 = SUB84(param_1[1],0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar3 = (uint)((ulonglong)param_1[1] >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar3,uVar2);
  return __return_storage_ptr__;
}

// Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister @ 146e2f0f0

UClass * __cdecl Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavMeshBoundsVolume",
               &Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton,
               ANavMeshBoundsVolume::StaticRegisterNativesANavMeshBoundsVolume,0x300,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavMeshBoundsVolume>,
               InternalVTableHelperCtorCaller<ANavMeshBoundsVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton;
}

// Z_Construct_UClass_ARecastNavMesh_NoRegister @ 146e2f1b0

UClass * __cdecl Z_Construct_UClass_ARecastNavMesh_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"RecastNavMesh",
               &Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton,
               ARecastNavMesh::StaticRegisterNativesARecastNavMesh,0x770,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ARecastNavMesh>,InternalVTableHelperCtorCaller<ARecastNavMesh>,
               local_res8,ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton;
}

// Z_Construct_UClass_UNavLinkComponent_NoRegister @ 146e2f270

UClass * __cdecl Z_Construct_UClass_UNavLinkComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkComponent",
               &Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton,
               UNavLinkComponent::StaticRegisterNativesUNavLinkComponent,0x560,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkComponent>,
               InternalVTableHelperCtorCaller<UNavLinkComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton;
}

// Z_Construct_UClass_UNavLinkCustomComponent_NoRegister @ 146e2f330

UClass * __cdecl Z_Construct_UClass_UNavLinkCustomComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkCustomComponent",
               &Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton,
               UNavLinkCustomComponent::StaticRegisterNativesUNavLinkCustomComponent,0x210,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkCustomComponent>,
               InternalVTableHelperCtorCaller<UNavLinkCustomComponent>,local_res8,
               UNavRelevantComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton;
}

// Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister @ 146e2f3f0

UClass * __cdecl Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkRenderingComponent",
               &Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton,
               UNavLinkRenderingComponent::StaticRegisterNativesUNavLinkRenderingComponent,0x550,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavLinkRenderingComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton;
}

// Z_Construct_UClass_UNavMeshRenderingComponent_NoRegister @ 146e2f4b0

UClass * __cdecl Z_Construct_UClass_UNavMeshRenderingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavMeshRenderingComponent",
               &Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton,
               UNavMeshRenderingComponent::StaticRegisterNativesUNavMeshRenderingComponent,0x640,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavMeshRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavMeshRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton;
}

// Z_Construct_UClass_UNavTestRenderingComponent_NoRegister @ 146e2f570

UClass * __cdecl Z_Construct_UClass_UNavTestRenderingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavTestRenderingComponent",
               &Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton,
               UNavTestRenderingComponent::StaticRegisterNativesUNavTestRenderingComponent,0x6a0,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavTestRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavTestRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton;
}

// Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags @ 146e2f630

UEnum * __cdecl Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags(void)

{
  if (Z_Registration_Info_UEnum_ENavLinkBuilderFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavLinkBuilderFlags.InnerSingleton,
               &Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavLinkBuilderFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNavLinkCustomInstanceData @ 146e2f670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavLinkCustomInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig @ 146e2f6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpDownConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpDownConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpDownConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpDownConfig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// initialize @ 146e2fd00

void __thiscall dtQuerySpecialLinkFilter::initialize(dtQuerySpecialLinkFilter *this)

{
  return;
}

// isLinkAllowed @ 146e2fd60

bool __thiscall dtQuerySpecialLinkFilter::isLinkAllowed(dtQuerySpecialLinkFilter *this,int param_1)

{
  return true;
}

// isLinkAllowed @ 146e2fd70

bool __thiscall
dtQuerySpecialLinkFilter::isLinkAllowed(dtQuerySpecialLinkFilter *this,ulong64 param_1)

{
  return true;
}

// IMPLEMENT_MODULE_NavigationSystem @ 146e2fe30

void __cdecl IMPLEMENT_MODULE_NavigationSystem(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CmdNavMeshDrawDistance'' @ 1503e0d00

void __cdecl _dynamic_atexit_destructor_for__CmdNavMeshDrawDistance__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdNavMeshDrawDistance);
  return;
}

// `dynamic_atexit_destructor_for_'FilterOutAreasImpl'' @ 1503e0d20

void __cdecl ERecastNamedFilter::_dynamic_atexit_destructor_for__FilterOutAreasImpl__(void)

{
  FilterOutAreasImpl._8_8_ = &___7dtQueryFilter__6B_;
  FilterOutAreasImpl._0_8_ = &___7INavigationQueryFilterInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'FilterOutNavLinksAndAreasImpl'' @ 1503e0d50

void __cdecl
ERecastNamedFilter::_dynamic_atexit_destructor_for__FilterOutNavLinksAndAreasImpl__(void)

{
  FilterOutNavLinksAndAreasImpl._8_8_ = &___7dtQueryFilter__6B_;
  FilterOutNavLinksAndAreasImpl._0_8_ = &___7INavigationQueryFilterInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'FilterOutNavLinksImpl'' @ 1503e0d80

void __cdecl ERecastNamedFilter::_dynamic_atexit_destructor_for__FilterOutNavLinksImpl__(void)

{
  FilterOutNavLinksImpl._8_8_ = &___7dtQueryFilter__6B_;
  FilterOutNavLinksImpl._0_8_ = &___7INavigationQueryFilterInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'LogNavSysModule'' @ 1503e0db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavSysModule__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavSysModule);
  return;
}

// `dynamic_atexit_destructor_for_'NavLinkProcessor'' @ 1503e0dd0

void __cdecl NavigationHelper::_dynamic_atexit_destructor_for__NavLinkProcessor__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavLinkProcessor,
             (FWriteAccessScope *)&local_28);
  if ((NavLinkProcessor._16_4_ != 0) && (NavLinkProcessor._8_8_ != 0)) {
    (*(code *)**(undefined8 **)NavLinkProcessor._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&NavLinkProcessor.field_0x8,0,0,0x10);
    NavLinkProcessor._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (NavLinkProcessor._8_8_ != 0) {
    FMemory::Free((void *)NavLinkProcessor._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&NavLinkProcessor);
  return;
}

// `dynamic_atexit_destructor_for_'NavLinkSegmentProcessor'' @ 1503e0e70

void __cdecl NavigationHelper::_dynamic_atexit_destructor_for__NavLinkSegmentProcessor__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavLinkSegmentProcessor,
             (FWriteAccessScope *)&local_28);
  if ((NavLinkSegmentProcessor._16_4_ != 0) && (NavLinkSegmentProcessor._8_8_ != 0)) {
    (*(code *)**(undefined8 **)NavLinkSegmentProcessor._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&NavLinkSegmentProcessor.field_0x8,0,0,0x10);
    NavLinkSegmentProcessor._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (NavLinkSegmentProcessor._8_8_ != 0) {
    FMemory::Free((void *)NavLinkSegmentProcessor._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&NavLinkSegmentProcessor);
  return;
}

// operator() @ 1504fcea0

bool __thiscall `DetourFree'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<714170589362782416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<714170589362782416>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fcef0

bool __thiscall `DetourMalloc'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<714170589362782326>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<714170589362782326>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

